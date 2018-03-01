<?php
/**
 * @file
 * ti_amg_fw_place_content_type.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function ti_amg_fw_place_content_type_ctools_plugin_api($module = NULL, $api = NULL) {
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
function ti_amg_fw_place_content_type_node_info() {
  $items = array(
    'place' => array(
      'name' => t('Place'),
      'base' => 'node_content',
      'description' => t('Use <i>place</i> to represent a location such as a stadium, restaurant, theater, etc.'),
      'has_title' => '1',
      'title_label' => t('Name'),
      'help' => '',
    ),
  );
  drupal_alter('node_info', $items);
  return $items;
}
