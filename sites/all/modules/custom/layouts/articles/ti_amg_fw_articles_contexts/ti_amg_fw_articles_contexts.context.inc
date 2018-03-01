<?php
/**
 * @file
 * ti_amg_fw_articles_contexts.context.inc
 */

/**
 * Implements hook_context_default_contexts().
 */
function ti_amg_fw_articles_contexts_context_default_contexts() {
  $export = array();

  $context = new stdClass();
  $context->disabled = FALSE; /* Edit this to true to make a default context disabled initially */
  $context->api_version = 3;
  $context->name = 'ti_amg_fw_article_context';
  $context->description = 'Global Common Article Context';
  $context->tag = '';
  $context->conditions = array(
    'node' => array(
      'values' => array(
        'article' => 'article',
      ),
      'options' => array(
        'node_form' => '0',
      ),
    ),
    'theme' => array(
      'values' => array(
        'foodandwine' => 'foodandwine',
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
        'ti_amg_ads-88x31' => array(
          'module' => 'ti_amg_ads',
          'delta' => '88x31',
          'region' => 'content',
          'weight' => '-10',
        ),
        'views-b5809503a8555952528ed9a0a1ba4d41' => array(
          'module' => 'views',
          'delta' => 'b5809503a8555952528ed9a0a1ba4d41',
          'region' => 'content',
          'weight' => '-9',
        ),
        'views-87b744c1c76daed431fbfe315bc5d0f8' => array(
          'module' => 'views',
          'delta' => '87b744c1c76daed431fbfe315bc5d0f8',
          'region' => 'content',
          'weight' => '-8',
        ),
        'views-714f803c746c6da781028de2fd7e4ae3' => array(
          'module' => 'views',
          'delta' => '714f803c746c6da781028de2fd7e4ae3',
          'region' => 'content',
          'weight' => '-7',
        ),
        'views-related_articles-block' => array(
          'module' => 'views',
          'delta' => 'related_articles-block',
          'region' => 'content',
          'weight' => '-6',
        ),
        'ti_amg_fw_outbrain-outbrain_block' => array(
          'module' => 'ti_amg_fw_outbrain',
          'delta' => 'outbrain_block',
          'region' => 'content',
          'weight' => '-5',
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
        'ti_amg_ads-nativo_300x100' => array(
          'module' => 'ti_amg_ads',
          'delta' => 'nativo_300x100',
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
  t('Global Common Article Context');
  $export['ti_amg_fw_article_context'] = $context;

  return $export;
}
