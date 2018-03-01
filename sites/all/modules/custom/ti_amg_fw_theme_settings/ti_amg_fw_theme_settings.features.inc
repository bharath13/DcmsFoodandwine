<?php
/**
 * @file
 * ti_amg_fw_theme_settings.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function ti_amg_fw_theme_settings_ctools_plugin_api($module = NULL, $api = NULL) {
  if ($module == "strongarm" && $api == "strongarm") {
    return array("version" => "1");
  }
}
