<?php
/**
 * @file
 * ti_amg_fw_search_config.current_search.inc
 */

/**
 * Implements hook_current_search_default_items().
 */
function ti_amg_fw_search_config_current_search_default_items() {
  $export = array();

  $item = new stdClass();
  $item->disabled = FALSE; /* Edit this to true to make a default item disabled initially */
  $item->api_version = 1;
  $item->name = 'fw_search_active_facets';
  $item->label = 'FW Search Active Facets';
  $item->settings = array(
    'items' => array(
      'active_items' => array(
        'id' => 'fw_active',
        'label' => 'Active Items',
        'pattern' => '[facetapi_active:active-value]',
        'keys' => 0,
        'css' => 0,
        'classes' => '',
        'nofollow' => 1,
        'weight' => '0',
      ),
    ),
    'advanced' => array(
      'empty_searches' => '2',
    ),
  );
  $export['fw_search_active_facets'] = $item;

  return $export;
}
