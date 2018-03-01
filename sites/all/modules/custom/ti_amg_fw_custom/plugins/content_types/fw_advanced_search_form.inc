<?php

/**
 * @file
 * Module used for FoodAndWine customizations.
 */

/**
 * @file
 * Implement FW advanced search panels plugin.
 */
$plugin = array(
  'title' => t('FW Advanced Search'),
  'description' => t('FW Advanced Search'),
  'category' => t('FW Plugins'),
  'single' => TRUE,
  'render callback' => 'fw_advanced_search',
);
/**
 * Render callback.
 */
function fw_advanced_search($subtype, $conf, $args, $context) {
  module_load_include('inc', 'ti_amg_fw_search', 'advanced_search');
  $block = new stdClass();
  $advanced_search_form = drupal_get_form('advanced_recipe_search_form');
  $block->content = drupal_render($advanced_search_form);
  return $block;
}
