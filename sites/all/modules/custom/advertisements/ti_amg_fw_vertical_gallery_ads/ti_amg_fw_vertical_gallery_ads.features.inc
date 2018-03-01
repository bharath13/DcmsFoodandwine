<?php
/**
 * @file
 * ti_amg_fw_vertical_gallery_ads.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function ti_amg_fw_vertical_gallery_ads_ctools_plugin_api($module = NULL, $api = NULL) {
  if ($module == "page_manager" && $api == "pages_default") {
    return array("version" => "1");
  }
}
