<?php
/**
 * @file
 * ti_amg_fw_caching.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function ti_amg_fw_caching_ctools_plugin_api($module = NULL, $api = NULL) {
  if ($module == "strongarm" && $api == "strongarm") {
    return array("version" => "1");
  }
}
