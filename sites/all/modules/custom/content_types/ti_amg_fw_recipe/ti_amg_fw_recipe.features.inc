<?php
/**
 * @file
 * ti_amg_fw_recipe.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function ti_amg_fw_recipe_ctools_plugin_api($module = NULL, $api = NULL) {
  if ($module == "context" && $api == "context") {
    return array("version" => "3");
  }
  if ($module == "field_group" && $api == "field_group") {
    return array("version" => "1");
  }
  if ($module == "strongarm" && $api == "strongarm") {
    return array("version" => "1");
  }
}
