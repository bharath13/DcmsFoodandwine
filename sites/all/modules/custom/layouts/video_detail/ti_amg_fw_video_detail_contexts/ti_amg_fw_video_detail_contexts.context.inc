<?php
/**
 * @file
 * ti_amg_fw_video_detail_contexts.context.inc
 */

/**
 * Implements hook_context_default_contexts().
 */
function ti_amg_fw_video_detail_contexts_context_default_contexts() {
  $export = array();

  $context = new stdClass();
  $context->disabled = FALSE; /* Edit this to true to make a default context disabled initially */
  $context->api_version = 3;
  $context->name = 'ti_amg_fw_video_detail_context';
  $context->description = 'Video Detail Context';
  $context->tag = '';
  $context->conditions = array(
    'node' => array(
      'values' => array(
        'video' => 'video',
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
        'system-main' => array(
          'module' => 'system',
          'delta' => 'main',
          'region' => 'content',
          'weight' => '-15',
        ),
        'views-ti_amg_fw_video_list-block' => array(
          'module' => 'views',
          'delta' => 'ti_amg_fw_video_list-block',
          'region' => 'content',
          'weight' => '-14',
        ),
        'views-ti_amg_fw_related_blocks-block' => array(
          'module' => 'views',
          'delta' => 'ti_amg_fw_related_blocks-block',
          'region' => 'content',
          'weight' => '-12',
        ),
        'views-8519cddaa030d220ad8fa02dded3def2' => array(
          'module' => 'views',
          'delta' => '8519cddaa030d220ad8fa02dded3def2',
          'region' => 'content',
          'weight' => '-11',
        ),
        'ti_amg_fw_outbrain-outbrain_block' => array(
          'module' => 'ti_amg_fw_outbrain',
          'delta' => 'outbrain_block',
          'region' => 'content',
          'weight' => '-10',
        ),
      ),
    ),
  );
  $context->condition_mode = 1;

  // Translatables
  // Included for use with string extractors like potx.
  t('Video Detail Context');
  $export['ti_amg_fw_video_detail_context'] = $context;

  return $export;
}
