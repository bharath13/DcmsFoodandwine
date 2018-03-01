<?php
/**
 * @file
 * ti_amg_fw_node_convert.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function ti_amg_fw_node_convert_ctools_plugin_api($module = NULL, $api = NULL) {
  if ($module == "node_convert" && $api == "node_convert") {
    return array("version" => "1");
  }
}
