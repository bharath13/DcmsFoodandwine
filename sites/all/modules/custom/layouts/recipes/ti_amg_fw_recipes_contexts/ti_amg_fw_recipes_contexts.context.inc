<?php
/**
 * @file
 * ti_amg_fw_recipes_contexts.context.inc
 */

/**
 * Implements hook_context_default_contexts().
 */
function ti_amg_fw_recipes_contexts_context_default_contexts() {
  $export = array();

  $context = new stdClass();
  $context->disabled = FALSE; /* Edit this to true to make a default context disabled initially */
  $context->api_version = 3;
  $context->name = 'ti_amg_fw_recipes_context';
  $context->description = 'Global Common Recipes Context';
  $context->tag = '';
  $context->conditions = array(
    'node' => array(
      'values' => array(
        'recipe' => 'recipe',
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
          'weight' => '-10',
        ),
        'views-ti_amg_fw_related_links-block' => array(
          'module' => 'views',
          'delta' => 'ti_amg_fw_related_links-block',
          'region' => 'content',
          'weight' => '-9',
        ),
        'ti_amg_fw_outbrain-outbrain_block' => array(
          'module' => 'ti_amg_fw_outbrain',
          'delta' => 'outbrain_block',
          'region' => 'content',
          'weight' => '-8',
        ),
        'ti_amg_fw_custom-fw_custom_related_videos_block' => array(
          'module' => 'ti_amg_fw_custom',
          'delta' => 'fw_custom_related_videos_block',
          'region' => 'content',
          'weight' => '-7',
        ),
        'ti_amg_ads-cmad_460x70' => array(
          'module' => 'ti_amg_ads',
          'delta' => 'cmad_460x70',
          'region' => 'content',
          'weight' => '-6',
        ),
        'ti_amg_ads-multiad_300x250' => array(
          'module' => 'ti_amg_ads',
          'delta' => 'multiad_300x250',
          'region' => 'sidebar_second',
          'weight' => '-11',
        ),
        'ti_amg_fw_custom-fw_outbrain_block' => array(
          'module' => 'ti_amg_fw_custom',
          'delta' => 'fw_outbrain_block',
          'region' => 'sidebar_second',
          'weight' => '-10',
        ),
        'ti_amg_ads-normal_300x250' => array(
          'module' => 'ti_amg_ads',
          'delta' => 'normal_300x250',
          'region' => 'sidebar_second',
          'weight' => '-9',
        ),
        'ti_amg_ads-nativo_300x100' => array(
          'module' => 'ti_amg_ads',
          'delta' => 'nativo_300x100',
          'region' => 'sidebar_second',
          'weight' => '-8',
        ),
        'ti_amg_fw_custom-fw_newsletter_block' => array(
          'module' => 'ti_amg_fw_custom',
          'delta' => 'fw_newsletter_block',
          'region' => 'sidebar_second',
          'weight' => '-7',
        ),
        'ti_amg_fw_custom-fw_pinterest_block' => array(
          'module' => 'ti_amg_fw_custom',
          'delta' => 'fw_pinterest_block',
          'region' => 'sidebar_second',
          'weight' => '-6',
        ),
        'ti_amg_fw_custom-fw_twitter_block' => array(
          'module' => 'ti_amg_fw_custom',
          'delta' => 'fw_twitter_block',
          'region' => 'sidebar_second',
          'weight' => '-5',
        ),
        'views-183d0cbd896115df03a55583c02c83d8' => array(
          'module' => 'views',
          'delta' => '183d0cbd896115df03a55583c02c83d8',
          'region' => 'sidebar_second',
          'weight' => '-4',
        ),
        'ti_amg_ads-142x70_1' => array(
          'module' => 'ti_amg_ads',
          'delta' => '142x70_1',
          'region' => 'sidebar_second',
          'weight' => '-3',
        ),
        'ti_amg_ads-142x70_2' => array(
          'module' => 'ti_amg_ads',
          'delta' => '142x70_2',
          'region' => 'sidebar_second',
          'weight' => '-2',
        ),
        'ti_amg_ads-142x70_3' => array(
          'module' => 'ti_amg_ads',
          'delta' => '142x70_3',
          'region' => 'sidebar_second',
          'weight' => '-1',
        ),
      ),
    ),
  );
  $context->condition_mode = 1;

  // Translatables
  // Included for use with string extractors like potx.
  t('Global Common Recipes Context');
  $export['ti_amg_fw_recipes_context'] = $context;

  return $export;
}
