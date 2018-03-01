<?php
/**
 * @file
 * ti_place_taxonomy.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function ti_place_taxonomy_ctools_plugin_api($module = NULL, $api = NULL) {
  if ($module == "strongarm" && $api == "strongarm") {
    return array("version" => "1");
  }
}
