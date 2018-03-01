<?php
/**
 * @file
 * ti_amg_fw_category.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function ti_amg_fw_category_ctools_plugin_api($module = NULL, $api = NULL) {
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
function ti_amg_fw_category_node_info() {
  $items = array(
    'category' => array(
      'name' => t('Category'),
      'base' => 'node_content',
      'description' => t('A Content Type for creating Taxonomy Pages.'),
      'has_title' => '1',
      'title_label' => t('Title'),
      'help' => '',
    ),
  );
  drupal_alter('node_info', $items);
  return $items;
}
