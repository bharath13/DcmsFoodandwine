<?php
/**
 * @file
 * ti_amg_fw_base_components.default_entity_embed_configurations.inc
 */

/**
 * Implements hook_default_entity_embed_configuration().
 */
function ti_amg_fw_base_components_default_entity_embed_configuration() {
  $export = array();

  $configuration = new stdClass();
  $configuration->disabled = FALSE; /* Edit this to true to make a default configuration disabled initially */
  $configuration->api_version = 1;
  $configuration->admin_title = 'Ti Media Oembed';
  $configuration->name = 'ti_media_oembed';
  $configuration->button_label = 'Ti Media Oembed';
  $configuration->entity_type = 'file';
  $configuration->entity_type_bundles = array(
    'facebook_post' => 'facebook_post',
    'facebook_video' => 'facebook_video',
    'instagram' => 'instagram',
    'pinterest' => 'pinterest',
    'twitter' => 'twitter',
    'vimeo' => 'vimeo',
    'youtube' => 'youtube',
  );
  $configuration->button_icon_fid = 0;
  $export['ti_media_oembed'] = $configuration;

  return $export;
}
