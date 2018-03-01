<?php

/**
 * @file
 * Customizations for FoodAndWine Site Search.
 */

/**
 * Customize Content Type Facet Display.
 */
class CustomContentTypeFilter extends FacetapiFilter {

  /**
   * Implements FacetapiFilter::execute().
   */
  public function execute(array $build) {
    $filtered_build = array();
    $allowed_values = array('recipe', 'article');

    // Hide this block if this facet is filtered.
    if (isset($_GET['f'])) {
      foreach ($_GET['f'] as $key => $value) {
        if (substr($value, 0, 5) == 'type:') {
          return array();
        }
      }
    }

    // Hide this block if all facet counts are zero.
    if ($build['article']['#count'] == 0 && $build['recipe']['#count'] == 0) {
      return array();
    }

    foreach ($build as $key => $value) {
      if ($key == 'recipe') {
        $value['#markup'] = t('Recipes');
      }
      elseif ($key == 'article') {
        $value['#markup'] = t('Articles');
      }

      if (in_array($key, $allowed_values)) {
        $filtered_build[$key] = $value;
      }
    }

    return $filtered_build;
  }

}

/**
 * Plugin that filters Complex Theme Facets.
 */
class FWComplexThemeFilter extends FacetapiFilter {

  /**
   * Implements FacetapiFilter::execute().
   */
  public function execute(array $build) {
    $filter_build = array();
    $include_string = $this->settings->settings['include'];
    $term_labels = explode(',', $include_string);
    foreach ($term_labels as $key => $label) {
      $term_labels[$key] = trim($label);
    }

    $query = db_select('taxonomy_term_data', 'term');
    $query->join('field_data_field_complex_theme_label', 'label', 'term.tid = label.entity_id');
    $query
        ->fields('term', array('tid'))
        ->condition('field_complex_theme_label_value', $term_labels, 'IN');
    $allowed_parent_tids = $query->execute()->fetchCol();
    // $allowed_parent_tids = get_tid_from_label($term_labels,
    // 'field_complex_theme_label');.
    foreach ($build as $tid => $value) {
      if (!in_array($tid, $allowed_parent_tids)) {
        continue;
      }
      if ($value['#count'] < 1) {
        continue;
      }

      $display_facet = FALSE;
      foreach ($value['#item_children'] as $child_tid => $child_term) {
        // Hide children if count is empty.
        if ($child_term['#count'] < 1) {
          unset($value['#item_children'][$child_tid]);
        }
        else {
          $display_facet = TRUE;
        }
      }

      // Display parent, only if atleast one child is present.
      if ($display_facet) {
        $filter_build[$tid] = $value;
      }
    }
    return $filter_build;
  }


  /**
   * Implements settingsForm().
   */
  public function settingsForm(&$form, &$form_state) {
    $form['include'] = array(
      '#title' => t('Include items'),
      '#type' => 'textfield',
      '#description' => t('Comma separated list of parent terms (label) that
        will be included'
      ),
      '#default_value' => $this->settings->settings['include'],
    );
  }

  /**
   * Implements settingsForm().
   */
  public function getDefaultSettings() {
    return array('include' => 'ethnicity-cuisines, dish-types, holiday-occasions, meals, recipe-types, seasons, servings');
  }

}

/**
 * Plugin that filters Complex Theme Facets.
 */
class CustomPrimaryIngredientsFilter extends FacetapiFilter {

  /**
   * Implements FacetapiFilter::execute().
   */
  public function execute(array $build) {
    $vocabulary = fw_get_vocabulary_from_machine_name('primary_ingredient');
    $vid = $vocabulary->vid;
    $query = db_select('taxonomy_term_data', 'term');
    $query->join('field_data_field_display_in_advanced_search', 'field', 'term.tid = field.entity_id');
    $query->fields('term', array('tid'))->condition('field_display_in_advanced_search_value', 1, '=');
    $allowed_terms = $query->execute()->fetchCol();

    $filter_build = array();
    foreach ($build as $tid => $value) {
      if (!in_array($tid, $allowed_terms)) {
        continue;
      }
      $filter_build[$tid] = $value;
    }

    return $filter_build;
  }

}

/**
 * Select Widget for facets.
 */
class FacetapiWidgetSelect extends FacetapiWidget {

  /**
   * Renders the form.
   */
  public function execute() {
    $elements = &$this->build[$this->facet['field alias']];
    // Hide facet if there are no elements.
    if (count($elements) < 1) {
      $elements = NULL;
    }
    // Hide facet if there is only one element and it is active.
    elseif (count($elements) == 1) {
      reset($elements);
      $array_key = key($elements);
      if ($elements[$array_key]['#active']) {
        $elements = NULL;
      }
      $elements = NULL;
    }
    else {
      $elements = drupal_get_form('fw_facetapi_select', $elements);
    }
  }

}

/**
 * Generate form for select widget of facet.
 */
function fw_facetapi_select($form, &$form_state, $elements) {

  $options = array('' => t('- Select -'));
  foreach ($elements as $element) {
    if ($element['#active']) {
      continue;
    }
    $options[serialize($element['#query'])] = $element['#markup'];
  }

  $form['select'] = array(
    '#type' => 'select',
    '#options' => $options,
    '#attributes' => array('class' => array('ctools-auto-submit')),
    'default_value' => '',
  );
  $form['submit'] = array(
    '#type' => 'submit',
    '#value' => t('Filter'),
    '#attributes' => array('class' => array('ctools-use-ajax', 'ctools-auto-submit-click')),
  );

  // Add javascript for autosubmit.
  $form['#attached']['js'][] = drupal_get_path('module', 'ctools') . '/js/auto-submit.js';

  $form['#attributes']['class'][] = 'select-facet';

  return $form;
}

/**
 * Submit handler for select widget form of facet.
 */
function fw_facetapi_select_submit($form, &$form_state) {
  $form_state['redirect'] = array($_GET['q'], array('query' => unserialize($form_state['values']['select'])));
}

/**
 * Sort Callback for Issue Facet.
 */
function fw_issue_date(array $a, array $b) {
  if (strtotime($a['#markup']) > strtotime($b['#markup'])) {
    return 1;
  }
  else {
    return -1;
  }
}
