<?php
/**
 * @file
 * ti_amg_fw_cron.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function ti_amg_fw_cron_ctools_plugin_api($module = NULL, $api = NULL) {
  if ($module == "elysia_cron" && $api == "default_elysia_cron_rules") {
    return array("version" => "1");
  }
}
