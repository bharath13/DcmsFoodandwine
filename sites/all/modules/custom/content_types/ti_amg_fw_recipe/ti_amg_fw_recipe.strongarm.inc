<?php
/**
 * @file
 * ti_amg_fw_recipe.strongarm.inc
 */

/**
 * Implements hook_strongarm().
 */
function ti_amg_fw_recipe_strongarm() {
  $export = array();

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'pathauto_node_recipe_pattern';
  $strongarm->value = '';
  $export['pathauto_node_recipe_pattern'] = $strongarm;

  return $export;
}
