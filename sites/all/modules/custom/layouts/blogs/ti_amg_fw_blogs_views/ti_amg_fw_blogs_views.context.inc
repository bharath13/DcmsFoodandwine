<?php
/**
 * @file
 * ti_amg_fw_blogs_views.context.inc
 */

/**
 * Implements hook_context_default_contexts().
 */
function ti_amg_fw_blogs_views_context_default_contexts() {
  $export = array();

  $context = new stdClass();
  $context->disabled = FALSE; /* Edit this to true to make a default context disabled initially */
  $context->api_version = 3;
  $context->name = 'ti_amg_fw_blog_detail_context';
  $context->description = 'Foodandwine Blog Deatail Page Context';
  $context->tag = '';
  $context->conditions = array(
    'node' => array(
      'values' => array(
        'blog' => 'blog',
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
        'ti_amg_fw_hat-ti_amg_fw_hat_block' => array(
          'module' => 'ti_amg_fw_hat',
          'delta' => 'ti_amg_fw_hat_block',
          'region' => 'hat',
          'weight' => '-10',
        ),
        'ti_amg_ads-gcr_728x90' => array(
          'module' => 'ti_amg_ads',
          'delta' => 'gcr_728x90',
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
        'ti_amg_ads-cmad_220x100' => array(
          'module' => 'ti_amg_ads',
          'delta' => 'cmad_220x100',
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
        'system-main' => array(
          'module' => 'system',
          'delta' => 'main',
          'region' => 'content',
          'weight' => '-86',
        ),
        'views-ti_amg_fw_blog_details-block' => array(
          'module' => 'views',
          'delta' => 'ti_amg_fw_blog_details-block',
          'region' => 'content',
          'weight' => '-85',
        ),
        'views-ti_amg_fw_related_links-block' => array(
          'module' => 'views',
          'delta' => 'ti_amg_fw_related_links-block',
          'region' => 'content',
          'weight' => '-84',
        ),
        'views-related_blog_tags-block' => array(
          'module' => 'views',
          'delta' => 'related_blog_tags-block',
          'region' => 'content',
          'weight' => '-83',
        ),
        'ti_amg_fw_custom-fw_zergnet_block' => array(
          'module' => 'ti_amg_fw_custom',
          'delta' => 'fw_zergnet_block',
          'region' => 'content',
          'weight' => '-82',
        ),
        'ti_amg_fw_custom-fw_custom_related_videos_block' => array(
          'module' => 'ti_amg_fw_custom',
          'delta' => 'fw_custom_related_videos_block',
          'region' => 'content',
          'weight' => '-81',
        ),
        'ti_amg_fw_custom-blog_topics_list' => array(
          'module' => 'ti_amg_fw_custom',
          'delta' => 'blog_topics_list',
          'region' => 'content',
          'weight' => '-80',
        ),
        'views-ti_amg_fw_sites_we_like-block' => array(
          'module' => 'views',
          'delta' => 'ti_amg_fw_sites_we_like-block',
          'region' => 'content',
          'weight' => '-79',
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
        'views-183d0cbd896115df03a55583c02c83d8' => array(
          'module' => 'views',
          'delta' => '183d0cbd896115df03a55583c02c83d8',
          'region' => 'sidebar_second',
          'weight' => '-5',
        ),
        'ti_amg_ads-142x70_1' => array(
          'module' => 'ti_amg_ads',
          'delta' => '142x70_1',
          'region' => 'sidebar_second',
          'weight' => '-4',
        ),
        'ti_amg_ads-142x70_2' => array(
          'module' => 'ti_amg_ads',
          'delta' => '142x70_2',
          'region' => 'sidebar_second',
          'weight' => '-3',
        ),
        'ti_amg_ads-142x70_3' => array(
          'module' => 'ti_amg_ads',
          'delta' => '142x70_3',
          'region' => 'sidebar_second',
          'weight' => '-2',
        ),
      ),
    ),
  );
  $context->condition_mode = 1;

  // Translatables
  // Included for use with string extractors like potx.
  t('Foodandwine Blog Deatail Page Context');
  $export['ti_amg_fw_blog_detail_context'] = $context;

  return $export;
}
