<?php
/**
 * @file
 * ti_home_page_responsive_content_type.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function ti_home_page_responsive_content_type_ctools_plugin_api($module = NULL, $api = NULL) {
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
function ti_home_page_responsive_content_type_node_info() {
  $items = array(
    'home_page_responsive' => array(
      'name' => t('Home Page Responsive'),
      'base' => 'node_content',
      'description' => t('Home Page Content Type for responsive web design'),
      'has_title' => '1',
      'title_label' => t('Title'),
      'help' => '',
    ),
  );
  drupal_alter('node_info', $items);
  return $items;
}
