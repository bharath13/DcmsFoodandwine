<?php

/**
 * @file
 * FoodAndWine Advanced Recipe Search.
 */

/**
 * Form for Advanced Recipe Search.
 *
 * @return array
 *   Drupal Form.
 */
function advanced_recipe_search_form($form, &$form_state) {

  $form['submit'] = array(
    '#type' => 'submit',
    '#value' => t('Search'),
  );

  // Build Primary Ingredient (Check Boxes).
  $options = array();
  $vocabulary = fw_get_vocabulary_from_machine_name('primary_ingredient');
  $vid = $vocabulary->vid;

  $query = db_select('taxonomy_term_data', 'term');
  $query->join('field_data_field_display_in_advanced_search', 'field', 'term.tid = field.entity_id');
  $query->fields('term', array('tid', 'name'))->condition('field_display_in_advanced_search_value', 1, '=');

  $terms = $query->execute()->fetchAllKeyed();

  foreach ($terms as $tid => $term_name) {
    $options[$tid] = ucfirst($term_name);
  }

  asort($options);
  $form['primary_ingredient'] = fw_build_adv_recipe_checkboxes($options, $vocabulary->name . t('<em>(Choose One)</em>'));

  // Build Complex Theme Check Boxes.
  $vocabulary = fw_get_vocabulary_from_machine_name('complex_themes');
  $vid = $vocabulary->vid;
  $allowed_parents = array('ethnicity-cuisines', 'dish-types',
    'holiday-occasions', 'recipe-types', 'seasons', 'servings',
  );

  $parent_terms = taxonomy_get_tree($vid, 0, 1, TRUE);
  foreach ($parent_terms as $key => $parent_term) {
    if (!empty($parent_term->field_complex_theme_label[LANGUAGE_NONE][0]['value'])) {
      if (in_array($parent_term->field_complex_theme_label[LANGUAGE_NONE][0]['value'], $allowed_parents)) {
        $options = array();
        $child_terms = taxonomy_get_tree($vid, $parent_term->tid, 1);
        foreach ($child_terms as $term) {
          $options[$term->tid] = $term->name;
        }
        $form['field_complex_theme_' . $parent_term->tid] = fw_build_adv_recipe_checkboxes($options, $parent_term->name);
      }
    }
  }

  // Build Recipe Attributes (Check Boxes)
  // Ingredient Category & Ingredient Exclusions (Combine Two Taxonomies).
  $options = array();
  $vocabulary = fw_get_vocabulary_from_machine_name('ingredient_category');
  $vid = $vocabulary->vid;
  $terms = fw_get_vocabulary_terms($vid);
  foreach ($terms as $tid => $term_name) {
    $options['ingredient_category_' . $tid] = $term_name;
  }

  $vocabulary = fw_get_vocabulary_from_machine_name('ingredient_exclusions');
  $vid = $vocabulary->vid;
  $terms = fw_get_vocabulary_terms($vid);
  foreach ($terms as $tid => $term_name) {
    $options['ingredient_exclusions_' . $tid] = $term_name;
  }
  $form['recipe_attributes'] = fw_build_adv_recipe_checkboxes($options, t('Recipe Attributes'));

  // Build Chef (Check Boxes).
  $options = array();
  $query = db_select('node', 'node');
  $query->join('field_data_field_person_type', 'person_type', 'node.nid = person_type.entity_id');
  $query->fields('node', array('nid', 'title'))->condition('node.type', 'person', '=')->condition('node.status', 1, '=')->condition('person_type.entity_type', 'node', '=')->condition('person_type.deleted', 0, '=');

  $chefs = $query->execute()->fetchAllKeyed();
  foreach ($chefs as $nid => $chef_name) {
    $options[$nid] = trim($chef_name);
  }
  asort($options);
  $form['chef'] = fw_build_adv_recipe_checkboxes($options, t('Chefs'));

  // Build Issue (Check Boxes)
  // $options = array('' => '');.
  $options = array();
  $vocabulary = fw_get_vocabulary_from_machine_name('issue');
  $vid = $vocabulary->vid;
  $terms = fw_get_vocabulary_terms($vid);
  foreach ($terms as $tid => $term_name) {
    $options[$tid] = $term_name;
  }

  usort($options, "fw_issue_date_options");
  $options = array('' => '') + $options;

  $form['issue'] = array(
    '#type' => 'select',
    '#options' => $options,
    '#title' => 'Issues',
  );

  $form['submit1'] = array(
    '#type' => 'submit',
    '#value' => t('Search'),
  );

  $form['separator'] = array(
    '#markup' => '<div class="feature-separator"></div>',
  );

  return $form;
}

/**
 * Returns checkbox element as array.
 *
 * @param array $options
 *   Options for checkbox.
 * @param array $title
 *   Title (label) for checkbox.
 *
 * @return array
 *   Array for checkbox element.
 */
function fw_build_adv_recipe_checkboxes($options, $title) {
  return array(
    '#type' => 'checkboxes',
    '#options' => $options,
    '#title' => $title,
  );
}

/**
 * Returns Terms for given vocabulary.
 *
 * This is more simple than taxonomy_get_tree
 * This do not perform query join for taxonomy_term_hierarchy table.
 *
 * @param int $vid
 *   Taxonomy Vocabulary vid.
 *
 * @return array
 *   Associative array decribed as follows
 *     key: Term ID.
 *     value: Term Name.
 */
function fw_get_vocabulary_terms($vid = '') {
  $query = db_select('taxonomy_term_data', 'term');
  $query->fields('term', array('tid', 'name'))->condition('term.vid', $vid, '=');
  $terms = $query->execute()->fetchAllKeyed();
  return $terms;
}

/**
 * Submit function to handle advanced recipe search form.
 */
function advanced_recipe_search_form_submit($form, &$form_state) {
  $query = array(
    'f[0]' => 'type:recipe',
  );

  $count = 1;
  foreach ($form_state['values']['primary_ingredient'] as $key => $value) {
    if ($value) {
      $query['f[' . $count . ']'] = 'field_ingredients%3Afield_ingredient_primary:' . $key;
      $count++;
    }
  }

  foreach ($form_state['values'] as $key => $value) {
    if (substr($key, 0, 20) == 'field_complex_theme_') {
      foreach ($value as $tid => $selected_tid) {
        if ($selected_tid) {
          $query['f[' . $count . ']'] = 'field_complex_theme%3Aparents_all:' . $tid;
          $count++;
        }
      }
    }
  }

  foreach ($form_state['values']['recipe_attributes'] as $key => $value) {
    if ($value) {
      if (substr($key, 0, 20) == 'ingredient_category_') {
        $tid = substr($value, 20);
        $query['f[' . $count . ']'] = 'field_ingredient_category:' . $tid;
        $count++;
      }
      elseif (substr($key, 0, 22) == 'ingredient_exclusions_') {
        $tid = substr($value, 22);
        $query['f[' . $count . ']'] = 'field_exclusions:' . $tid;
        $count++;
      }
    }
  }

  foreach ($form_state['values']['chef'] as $key => $value) {
    if ($value) {
      $query['f[' . $count . ']'] = 'field_chefs_author:' . $key;
      $count++;
    }
  }

  if ($form_state['values']['issue']) {
    $query['f[' . $count . ']'] = 'field_issue:' . $form_state['values']['issue'];
    $count++;
  }

  drupal_goto('search', array('query' => $query));
}

/**
 * Sort Callback for Issue Options.
 */
function fw_issue_date_options($a, $b) {
  if (strtotime($a) < strtotime($b)) {
    return 1;
  }
  else {
    return -1;
  }
}
