<?php
/**
 * @file
 * ti_amg_fw_homepage_content_type.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function ti_amg_fw_homepage_content_type_ctools_plugin_api($module = NULL, $api = NULL) {
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
function ti_amg_fw_homepage_content_type_node_info() {
  $items = array(
    'home_page' => array(
      'name' => t('Home Page'),
      'base' => 'node_content',
      'description' => t('Use <i>Home Page</i> to create Food & Wine Home Page'),
      'has_title' => '1',
      'title_label' => t('Title'),
      'help' => '',
    ),
  );
  drupal_alter('node_info', $items);
  return $items;
}
