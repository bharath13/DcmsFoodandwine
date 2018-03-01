<?php
/**
 * @file
 * ti_amg_fw_ckeditor_full_profile.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function ti_amg_fw_ckeditor_full_profile_ctools_plugin_api($module = NULL, $api = NULL) {
  if ($module == "entity_embed" && $api == "default_entity_embed_configurations") {
    return array("version" => "1");
  }
}
