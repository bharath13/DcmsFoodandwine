<?php
/**
 * @file
 * ti_amg_fw_generic_page_context.context.inc
 */

/**
 * Implements hook_context_default_contexts().
 */
function ti_amg_fw_generic_page_context_context_default_contexts() {
  $export = array();

  $context = new stdClass();
  $context->disabled = FALSE; /* Edit this to true to make a default context disabled initially */
  $context->api_version = 3;
  $context->name = 'ti_amg_fw_flat_pages_ad_context';
  $context->description = 'TI AMG FoodandWine Flat Pages Ad Context';
  $context->tag = '';
  $context->conditions = array(
    'path' => array(
      'values' => array(
        'classic' => 'classic',
        'top-chef' => 'top-chef',
        'wineshop' => 'wineshop',
        'growforgood' => 'growforgood',
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
  t('TI AMG FoodandWine Flat Pages Ad Context');
  $export['ti_amg_fw_flat_pages_ad_context'] = $context;

  $context = new stdClass();
  $context->disabled = FALSE; /* Edit this to true to make a default context disabled initially */
  $context->api_version = 3;
  $context->name = 'ti_amg_fw_genericpage_context';
  $context->description = 'FoodandWine Generic Page Context';
  $context->tag = '';
  $context->conditions = array(
    'node' => array(
      'values' => array(
        'page' => 'page',
      ),
      'options' => array(
        'node_form' => '0',
      ),
    ),
  );
  $context->reactions = array(
    'block' => array(
      'blocks' => array(
        'ti_amg_fw_hat-ti_amg_fw_hat_block' => array(
          'module' => 'ti_amg_fw_hat',
          'delta' => 'ti_amg_fw_hat_block',
          'region' => 'hat',
          'weight' => '-10',
        ),
        'search-form' => array(
          'module' => 'search',
          'delta' => 'form',
          'region' => 'page_header_left',
          'weight' => '-10',
        ),
        'ti_amg_fw_custom-fw_logo_block' => array(
          'module' => 'ti_amg_fw_custom',
          'delta' => 'fw_logo_block',
          'region' => 'page_logo',
          'weight' => '-10',
        ),
        'ti_amg_fw_custom-fw_legacy_cmtopad_220x100_block' => array(
          'module' => 'ti_amg_fw_custom',
          'delta' => 'fw_legacy_cmtopad_220x100_block',
          'region' => 'page_header_right',
          'weight' => '-10',
        ),
        'system-main-menu' => array(
          'module' => 'system',
          'delta' => 'main-menu',
          'region' => 'header',
          'weight' => '-10',
        ),
        'ti_amg_fw_custom-fw_social_media_block' => array(
          'module' => 'ti_amg_fw_custom',
          'delta' => 'fw_social_media_block',
          'region' => 'header',
          'weight' => '-9',
        ),
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
        'views-ti_amg_fw_generic_page-block' => array(
          'module' => 'views',
          'delta' => 'ti_amg_fw_generic_page-block',
          'region' => 'content',
          'weight' => '-8',
        ),
        'ti_amg_fw_outbrain-outbrain_block' => array(
          'module' => 'ti_amg_fw_outbrain',
          'delta' => 'outbrain_block',
          'region' => 'content',
          'weight' => '-7',
        ),
        'ti_amg_fw_custom-fw_legacy_multiad_300x250_block' => array(
          'module' => 'ti_amg_fw_custom',
          'delta' => 'fw_legacy_multiad_300x250_block',
          'region' => 'sidebar_second',
          'weight' => '-10',
        ),
        'ti_amg_fw_custom-fw_outbrain_block' => array(
          'module' => 'ti_amg_fw_custom',
          'delta' => 'fw_outbrain_block',
          'region' => 'sidebar_second',
          'weight' => '-9',
        ),
        'ti_amg_fw_custom-fw_legacy_normalad_300x250_block' => array(
          'module' => 'ti_amg_fw_custom',
          'delta' => 'fw_legacy_normalad_300x250_block',
          'region' => 'sidebar_second',
          'weight' => '-8',
        ),
        'ti_amg_fw_custom-fw_legacy_cmtoutad_300x250_block' => array(
          'module' => 'ti_amg_fw_custom',
          'delta' => 'fw_legacy_cmtoutad_300x250_block',
          'region' => 'sidebar_second',
          'weight' => '-7',
        ),
        'ti_amg_fw_custom-fw_newsletter_block' => array(
          'module' => 'ti_amg_fw_custom',
          'delta' => 'fw_newsletter_block',
          'region' => 'sidebar_second',
          'weight' => '-5',
        ),
        'ti_amg_fw_custom-fw_pinterest_block' => array(
          'module' => 'ti_amg_fw_custom',
          'delta' => 'fw_pinterest_block',
          'region' => 'sidebar_second',
          'weight' => '-4',
        ),
        'ti_amg_fw_custom-fw_twitter_block' => array(
          'module' => 'ti_amg_fw_custom',
          'delta' => 'fw_twitter_block',
          'region' => 'sidebar_second',
          'weight' => '-3',
        ),
        'views-183d0cbd896115df03a55583c02c83d8' => array(
          'module' => 'views',
          'delta' => '183d0cbd896115df03a55583c02c83d8',
          'region' => 'sidebar_second',
          'weight' => '-2',
        ),
        'ti_amg_fw_custom-fw_legacy_marketplacead_block_1' => array(
          'module' => 'ti_amg_fw_custom',
          'delta' => 'fw_legacy_marketplacead_block_1',
          'region' => 'sidebar_second',
          'weight' => '-1',
        ),
        'ti_amg_fw_custom-fw_legacy_marketplacead_block_2' => array(
          'module' => 'ti_amg_fw_custom',
          'delta' => 'fw_legacy_marketplacead_block_2',
          'region' => 'sidebar_second',
          'weight' => '0',
        ),
        'ti_amg_fw_custom-fw_legacy_marketplacead_block_3' => array(
          'module' => 'ti_amg_fw_custom',
          'delta' => 'fw_legacy_marketplacead_block_3',
          'region' => 'sidebar_second',
          'weight' => '1',
        ),
      ),
    ),
  );
  $context->condition_mode = 0;

  // Translatables
  // Included for use with string extractors like potx.
  t('FoodandWine Generic Page Context');
  $export['ti_amg_fw_genericpage_context'] = $context;

  $context = new stdClass();
  $context->disabled = FALSE; /* Edit this to true to make a default context disabled initially */
  $context->api_version = 3;
  $context->name = 'ti_amg_fw_video_main_page_context';
  $context->description = 'TI AMG FoodandWine Video Main Page Context';
  $context->tag = '';
  $context->conditions = array(
    'path' => array(
      'values' => array(
        'video' => 'video',
        'promo' => 'promo',
        'promo/events' => 'promo/events',
        'books' => 'books',
        'ebooks' => 'ebooks',
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
      ),
    ),
  );
  $context->condition_mode = 0;

  // Translatables
  // Included for use with string extractors like potx.
  t('TI AMG FoodandWine Video Main Page Context');
  $export['ti_amg_fw_video_main_page_context'] = $context;

  return $export;
}
