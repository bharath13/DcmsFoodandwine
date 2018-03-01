<?php
/**
 * @file
 * ti_amg_fw_web_services.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function ti_amg_fw_web_services_ctools_plugin_api($module = NULL, $api = NULL) {
  if ($module == "services" && $api == "services") {
    return array("version" => "3");
  }
}
