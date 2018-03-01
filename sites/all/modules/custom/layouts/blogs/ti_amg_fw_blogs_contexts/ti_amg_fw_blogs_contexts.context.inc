<?php
/**
 * @file
 * ti_amg_fw_blogs_contexts.context.inc
 */

/**
 * Implements hook_context_default_contexts().
 */
function ti_amg_fw_blogs_contexts_context_default_contexts() {
  $export = array();

  $context = new stdClass();
  $context->disabled = FALSE; /* Edit this to true to make a default context disabled initially */
  $context->api_version = 3;
  $context->name = 'ti_amg_fw_blog_context';
  $context->description = 'Global Common Context';
  $context->tag = '';
  $context->conditions = array(
    'ti_amg_fw_mobile_context_condition_is_mobile' => array(
      'values' => array(
        'FALSE' => 'FALSE',
      ),
    ),
    'views' => array(
      'values' => array(
        'ti_amg_fw_blogs_topics_listing:page' => 'ti_amg_fw_blogs_topics_listing:page',
        'ti_amg_fw_blogs_topics_listing:page_1' => 'ti_amg_fw_blogs_topics_listing:page_1',
        'ti_amg_fw_blogs_topics_listing:page_2' => 'ti_amg_fw_blogs_topics_listing:page_2',
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
        'ti_amg_fw_custom-fw_legacy_leaderboardad_block' => array(
          'module' => 'ti_amg_fw_custom',
          'delta' => 'fw_legacy_leaderboardad_block',
          'region' => 'page_top_ad',
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
        'ti_amg_fw_custom-fw_blog_header' => array(
          'module' => 'ti_amg_fw_custom',
          'delta' => 'fw_blog_header',
          'region' => 'content',
          'weight' => '-10',
        ),
        'system-main' => array(
          'module' => 'system',
          'delta' => 'main',
          'region' => 'content',
          'weight' => '-9',
        ),
        'views-ti_amg_fw_sites_we_like-block_1' => array(
          'module' => 'views',
          'delta' => 'ti_amg_fw_sites_we_like-block_1',
          'region' => 'content',
          'weight' => '-6',
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
        'ti_amg_fw_custom-fw_legacy_300x100ad_block' => array(
          'module' => 'ti_amg_fw_custom',
          'delta' => 'fw_legacy_300x100ad_block',
          'region' => 'sidebar_second',
          'weight' => '-6',
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
  $context->condition_mode = 1;

  // Translatables
  // Included for use with string extractors like potx.
  t('Global Common Context');
  $export['ti_amg_fw_blog_context'] = $context;

  return $export;
}
