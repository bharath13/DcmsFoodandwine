<?php

/**
 * @file
 * Update hooks for the TI AMG FW Topics
 *
 * \defgroup ti_amg_fw_topics FoodandWine.com Topics
 * \ingroup Features
 * \brief Provides routing for FoodandWine topic pages
 *
 * @{
 */

/**
 * Implements hook_drush_command().
 */
function ti_amg_fw_topics_drush_command() {
  $items['ti_amg_fw_topics_urls'] = array(
    'description' => 'Migrate redirect.conf and vanity.conf redirects.',
    'aliases' => array('tfurl'),
  );

  return $items;
}

/**
 * Drush command to fix up left-nav links in Topic parents/children.
 */
function drush_ti_amg_fw_topics_urls() {
  $batch = array();
  $batch_nodes = array();
  $query = new EntityFieldQuery();
  $query->entityCondition('entity_type', 'node')->entityCondition('bundle', array('topic_page_child'), 'IN');
  $result = $query->execute();

  if ($result['node']) {
    $batch_nodes = array_keys($result['node']);
  }

  foreach ($batch_nodes as $nid) {
    $batch['operations'][] = array(
      '_ti_amg_fw_topics_do_drush_fix_urls',
      array(
        $nid,
      ),
    );
  }

  $batch['finished'] = '_ti_amg_fw_topics_do_drush_fix_urls_finished';
  batch_set($batch);
  drush_backend_batch_process();
}

/**
 * Helper function. Provides the function for batch tasks in
 * drush_ti_amg_fw_topics_urls().
 */
function _ti_amg_fw_topics_do_drush_fix_urls($nid, &$context) {
  $node = node_load($nid);

  if (!empty($node->field_left_nav_links[LANGUAGE_NONE])) {
    foreach ($node->field_left_nav_links[LANGUAGE_NONE] as $delta => $link) {
      if (substr($link['url'], -1) == '/' && substr_count($link['url'], 'http://www.foodandwine.com')) {
        $node->field_left_nav_links[LANGUAGE_NONE][$delta]['url'] = substr($link['url'], 0, -1);

        $context['results'][$nid] = TRUE;
      }
    }
  }

  // Save it
  if ($context['results'][$nid]) {
    node_save($node);
    $context['message'] = t('Fixed links on page %title.',
      array('%title' => $node->title)
    );

    // Get it published
    if (function_exists('state_flow_load_state_machine')) {
      $state_flow = state_flow_load_state_machine($node);
      $state_flow->fire_event('publish', 1);
    }
  }
  else {
    $context['message'] = t('Links on page @title were already OK.',
      array('@title' => $node->title)
    );
  }
}
/**
 * Implements _ti_amg_fw_topics_do_drush_fix_urls_finished().
 */
function _ti_amg_fw_topics_do_drush_fix_urls_finished($success, $results, $operations) {
  drupal_set_message(t('%count topics were modified', array('%count' => count($results))));
}

