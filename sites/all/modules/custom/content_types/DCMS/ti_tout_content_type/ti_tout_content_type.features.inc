<?php
/**
 * @file
 * ti_tout_content_type.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function ti_tout_content_type_ctools_plugin_api($module = NULL, $api = NULL) {
  if ($module == "field_group" && $api == "field_group") {
    return array("version" => "1");
  }
  if ($module == "strongarm" && $api == "strongarm") {
    return array("version" => "1");
  }
}

/**
 * Implements hook_node_info().
 */
function ti_tout_content_type_node_info() {
  $items = array(
    'tout' => array(
      'name' => t('Tout'),
      'base' => 'node_content',
      'description' => t('Use <i>Tout</i> to link to editorial content on other sites'),
      'has_title' => '1',
      'title_label' => t('Title'),
      'help' => '',
    ),
  );
  drupal_alter('node_info', $items);
  return $items;
}
