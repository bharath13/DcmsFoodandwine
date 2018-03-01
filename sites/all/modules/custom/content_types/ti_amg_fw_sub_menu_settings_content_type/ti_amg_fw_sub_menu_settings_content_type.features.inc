<?php
/**
 * @file
 * ti_amg_fw_sub_menu_settings_content_type.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function ti_amg_fw_sub_menu_settings_content_type_ctools_plugin_api($module = NULL, $api = NULL) {
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
function ti_amg_fw_sub_menu_settings_content_type_node_info() {
  $items = array(
    'sub_menu_settings' => array(
      'name' => t('Sub Menu Settings'),
      'base' => 'node_content',
      'description' => t('To update sub menu information like date, ticket links and sponsor logo.'),
      'has_title' => '1',
      'title_label' => t('Header Title'),
      'help' => '',
    ),
  );
  drupal_alter('node_info', $items);
  return $items;
}
