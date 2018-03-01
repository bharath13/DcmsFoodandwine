<?php
/**
 * @file
 * ti_amg_fw_homepage_context.context.inc
 */

/**
 * Implements hook_context_default_contexts().
 */
function ti_amg_fw_homepage_context_context_default_contexts() {
  $export = array();

  $context = new stdClass();
  $context->disabled = FALSE; /* Edit this to true to make a default context disabled initially */
  $context->api_version = 3;
  $context->name = 'ti_amg_fw_homepage_context';
  $context->description = 'TI AMG FW Homepage Context';
  $context->tag = '';
  $context->conditions = array(
    'path' => array(
      'values' => array(
        '<front>' => '<front>',
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
        'views-ti_amg_fw_homepage_blocks-block' => array(
          'module' => 'views',
          'delta' => 'ti_amg_fw_homepage_blocks-block',
          'region' => 'content',
          'weight' => '-10',
        ),
        'views-a935687f2083b8f3e60295a13264d7bd' => array(
          'module' => 'views',
          'delta' => 'a935687f2083b8f3e60295a13264d7bd',
          'region' => 'content',
          'weight' => '-9',
        ),
        'views-b73617977df96a78ca1e60d0ad1f93d3' => array(
          'module' => 'views',
          'delta' => 'b73617977df96a78ca1e60d0ad1f93d3',
          'region' => 'content',
          'weight' => '-8',
        ),
        'views-36295ff0a141a4f8237ff6788a2ef850' => array(
          'module' => 'views',
          'delta' => '36295ff0a141a4f8237ff6788a2ef850',
          'region' => 'content',
          'weight' => '-7',
        ),
        'ti_amg_ads-nativo_635x267' => array(
          'module' => 'ti_amg_ads',
          'delta' => 'nativo_635x267',
          'region' => 'content',
          'weight' => '-6',
        ),
        'views-a25191509e12a29626abed7ef2487acf' => array(
          'module' => 'views',
          'delta' => 'a25191509e12a29626abed7ef2487acf',
          'region' => 'content',
          'weight' => '-5',
        ),
        'views-5d48246e22f42a73a82c17f1bb9316ea' => array(
          'module' => 'views',
          'delta' => '5d48246e22f42a73a82c17f1bb9316ea',
          'region' => 'content',
          'weight' => '-4',
        ),
        'ti_amg_ads-multiad_300x250' => array(
          'module' => 'ti_amg_ads',
          'delta' => 'multiad_300x250',
          'region' => 'sidebar_second',
          'weight' => '-10',
        ),
        'ti_amg_fw_custom-fw_outbrain_block' => array(
          'module' => 'ti_amg_fw_custom',
          'delta' => 'fw_outbrain_block',
          'region' => 'sidebar_second',
          'weight' => '-9',
        ),
        'ti_amg_ads-normal_300x250' => array(
          'module' => 'ti_amg_ads',
          'delta' => 'normal_300x250',
          'region' => 'sidebar_second',
          'weight' => '-8',
        ),
        'ti_amg_ads-cmtoutad_300x250' => array(
          'module' => 'ti_amg_ads',
          'delta' => 'cmtoutad_300x250',
          'region' => 'sidebar_second',
          'weight' => '-7',
        ),
        'ti_amg_fw_custom-fw_newsletter_block' => array(
          'module' => 'ti_amg_fw_custom',
          'delta' => 'fw_newsletter_block',
          'region' => 'sidebar_second',
          'weight' => '-6',
        ),
        'ti_amg_fw_custom-fw_pinterest_block' => array(
          'module' => 'ti_amg_fw_custom',
          'delta' => 'fw_pinterest_block',
          'region' => 'sidebar_second',
          'weight' => '-5',
        ),
        'ti_amg_fw_custom-fw_twitter_block' => array(
          'module' => 'ti_amg_fw_custom',
          'delta' => 'fw_twitter_block',
          'region' => 'sidebar_second',
          'weight' => '-4',
        ),
        'ti_amg_ads-142x70_1' => array(
          'module' => 'ti_amg_ads',
          'delta' => '142x70_1',
          'region' => 'sidebar_second',
          'weight' => '-2',
        ),
        'ti_amg_ads-142x70_2' => array(
          'module' => 'ti_amg_ads',
          'delta' => '142x70_2',
          'region' => 'sidebar_second',
          'weight' => '-1',
        ),
        'ti_amg_ads-142x70_3' => array(
          'module' => 'ti_amg_ads',
          'delta' => '142x70_3',
          'region' => 'sidebar_second',
          'weight' => '0',
        ),
        'views-183d0cbd896115df03a55583c02c83d8' => array(
          'module' => 'views',
          'delta' => '183d0cbd896115df03a55583c02c83d8',
          'region' => 'sidebar_second',
          'weight' => '-3',
        ),
      ),
    ),
  );
  $context->condition_mode = 1;

  // Translatables
  // Included for use with string extractors like potx.
  t('TI AMG FW Homepage Context');
  $export['ti_amg_fw_homepage_context'] = $context;

  return $export;
}
