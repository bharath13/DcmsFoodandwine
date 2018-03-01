<?php
/**
 * @file
 * ti_amg_fw_contexts.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function ti_amg_fw_contexts_ctools_plugin_api($module = NULL, $api = NULL) {
  if ($module == "context" && $api == "context") {
    return array("version" => "3");
  }
}
