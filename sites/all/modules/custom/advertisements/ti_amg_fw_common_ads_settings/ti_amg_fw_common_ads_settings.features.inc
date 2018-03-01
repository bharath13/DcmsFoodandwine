<?php
/**
 * @file
 * ti_amg_fw_common_ads_settings.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function ti_amg_fw_common_ads_settings_ctools_plugin_api($module = NULL, $api = NULL) {
  if ($module == "panels_mini" && $api == "panels_default") {
    return array("version" => "1");
  }
  if ($module == "strongarm" && $api == "strongarm") {
    return array("version" => "1");
  }
}
