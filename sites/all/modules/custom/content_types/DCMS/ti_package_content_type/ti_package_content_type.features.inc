<?php
/**
 * @file
 * ti_package_content_type.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function ti_package_content_type_ctools_plugin_api($module = NULL, $api = NULL) {
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
function ti_package_content_type_node_info() {
  $items = array(
    'package' => array(
      'name' => t('Package'),
      'base' => 'node_content',
      'description' => '',
      'has_title' => '1',
      'title_label' => t('Title'),
      'help' => '',
    ),
  );
  return $items;
}
