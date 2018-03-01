<?php
/**
 * @file
 * ti_amg_fw_video_landing_page_contexts.context.inc
 */

/**
 * Implements hook_context_default_contexts().
 */
function ti_amg_fw_video_landing_page_contexts_context_default_contexts() {
  $export = array();

  $context = new stdClass();
  $context->disabled = FALSE; /* Edit this to true to make a default context disabled initially */
  $context->api_version = 3;
  $context->name = 'ti_amg_fw_video_landing_page_context';
  $context->description = 'Global Common Video Landing Page Context';
  $context->tag = '';
  $context->conditions = array(
    'node' => array(
      'values' => array(
        'video_landing_page' => 'video_landing_page',
      ),
      'options' => array(
        'node_form' => '0',
      ),
    ),
    'ti_amg_fw_mobile_context_condition_is_mobile' => array(
      'values' => array(
        'FALSE' => 'FALSE',
      ),
    ),
  );
  $context->reactions = array(
    'block' => array(
      'blocks' => array(
        'ti_amg_fw_page_sharing_social-fw_social_media_page_sharing' => array(
          'module' => 'ti_amg_fw_page_sharing_social',
          'delta' => 'fw_social_media_page_sharing',
          'region' => 'content',
          'weight' => '-10',
        ),
        'system-main' => array(
          'module' => 'system',
          'delta' => 'main',
          'region' => 'content',
          'weight' => '-9',
        ),
        'views-024d84e76c784ef2fb18344da67a18ae' => array(
          'module' => 'views',
          'delta' => '024d84e76c784ef2fb18344da67a18ae',
          'region' => 'content',
          'weight' => '-8',
        ),
        'views-23ebb2b0bcdced206d994cf3be2993f1' => array(
          'module' => 'views',
          'delta' => '23ebb2b0bcdced206d994cf3be2993f1',
          'region' => 'content',
          'weight' => '-7',
        ),
        'ti_amg_fw_custom-video_listing' => array(
          'module' => 'ti_amg_fw_custom',
          'delta' => 'video_listing',
          'region' => 'content',
          'weight' => '-6',
        ),
        'ti_amg_fw_outbrain-outbrain_block' => array(
          'module' => 'ti_amg_fw_outbrain',
          'delta' => 'outbrain_block',
          'region' => 'content',
          'weight' => '-5',
        ),
      ),
    ),
  );
  $context->condition_mode = 1;

  // Translatables
  // Included for use with string extractors like potx.
  t('Global Common Video Landing Page Context');
  $export['ti_amg_fw_video_landing_page_context'] = $context;

  return $export;
}
