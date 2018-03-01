<?php
/**
 * @file
 * ti_amg_fw_homepage_context.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function ti_amg_fw_homepage_context_ctools_plugin_api($module = NULL, $api = NULL) {
  if ($module == "context" && $api == "context") {
    return array("version" => "3");
  }
}

/**
 * Implements hook_views_api().
 */
function ti_amg_fw_homepage_context_views_api($module = NULL, $api = NULL) {
  return array("api" => "3.0");
}
