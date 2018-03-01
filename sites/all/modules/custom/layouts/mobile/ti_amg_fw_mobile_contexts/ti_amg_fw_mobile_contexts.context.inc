<?php
/**
 * @file
 * ti_amg_fw_mobile_contexts.context.inc
 */

/**
 * Implements hook_context_default_contexts().
 */
function ti_amg_fw_mobile_contexts_context_default_contexts() {
  $export = array();

  $context = new stdClass();
  $context->disabled = FALSE; /* Edit this to true to make a default context disabled initially */
  $context->api_version = 3;
  $context->name = 'ti_amg_fw_global_context_for_non_mobile';
  $context->description = 'Global Common Context Non Mobile Pages';
  $context->tag = '';
  $context->conditions = array(
    'path' => array(
      'values' => array(
        '~<front>' => '~<front>',
        '~blogs' => '~blogs',
        '~blogs/*' => '~blogs/*',
        '~slideshows/*' => '~slideshows/*',
        '~recipe-finder/*' => '~recipe-finder/*',
        '~recipe-finder' => '~recipe-finder',
        '~recipes/*' => '~recipes/*',
        '~search.mobi*' => '~search.mobi*',
        '~partner*' => '~partner*',
        '~articles/*' => '~articles/*',
      ),
    ),
    'sitewide' => array(
      'values' => array(
        1 => 1,
      ),
    ),
    'ti_amg_fw_mobile_context_condition_is_mobile' => array(
      'values' => array(
        'TRUE' => 'TRUE',
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
        'views-183d0cbd896115df03a55583c02c83d8' => array(
          'module' => 'views',
          'delta' => '183d0cbd896115df03a55583c02c83d8',
          'region' => 'sidebar_second',
          'weight' => '-3',
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
      ),
    ),
  );
  $context->condition_mode = 1;

  // Translatables
  // Included for use with string extractors like potx.
  t('Global Common Context Non Mobile Pages');
  $export['ti_amg_fw_global_context_for_non_mobile'] = $context;

  $context = new stdClass();
  $context->disabled = FALSE; /* Edit this to true to make a default context disabled initially */
  $context->api_version = 3;
  $context->name = 'ti_amg_fw_mobile_article_detail_context';
  $context->description = 'TI AMG FW MOBILE ARTICLE DETAIL CONTEXT';
  $context->tag = '';
  $context->conditions = array(
    'node' => array(
      'values' => array(
        'article' => 'article',
      ),
      'options' => array(
        'node_form' => '1',
      ),
    ),
    'theme' => array(
      'values' => array(
        'foodandwine' => 'foodandwine',
      ),
    ),
    'ti_amg_fw_mobile_context_condition_is_mobile' => array(
      'values' => array(
        'TRUE' => 'TRUE',
      ),
    ),
  );
  $context->reactions = array(
    'block' => array(
      'blocks' => array(
        'ti_amg_ads-mobile_320x50' => array(
          'module' => 'ti_amg_ads',
          'delta' => 'mobile_320x50',
          'region' => 'content',
          'weight' => '-86',
        ),
        'views-b5809503a8555952528ed9a0a1ba4d41' => array(
          'module' => 'views',
          'delta' => 'b5809503a8555952528ed9a0a1ba4d41',
          'region' => 'content',
          'weight' => '-85',
        ),
        'views-87b744c1c76daed431fbfe315bc5d0f8' => array(
          'module' => 'views',
          'delta' => '87b744c1c76daed431fbfe315bc5d0f8',
          'region' => 'content',
          'weight' => '-84',
        ),
        'ti_amg_ads-mobile_320x320' => array(
          'module' => 'ti_amg_ads',
          'delta' => 'mobile_320x320',
          'region' => 'content',
          'weight' => '-83',
        ),
        'views-714f803c746c6da781028de2fd7e4ae3' => array(
          'module' => 'views',
          'delta' => '714f803c746c6da781028de2fd7e4ae3',
          'region' => 'content',
          'weight' => '-82',
        ),
        'views-related_articles-block' => array(
          'module' => 'views',
          'delta' => 'related_articles-block',
          'region' => 'content',
          'weight' => '-81',
        ),
      ),
    ),
    'theme_html' => array(
      'class' => 'mobile mobile-article-detail',
    ),
  );
  $context->condition_mode = 1;

  // Translatables
  // Included for use with string extractors like potx.
  t('TI AMG FW MOBILE ARTICLE DETAIL CONTEXT');
  $export['ti_amg_fw_mobile_article_detail_context'] = $context;

  $context = new stdClass();
  $context->disabled = FALSE; /* Edit this to true to make a default context disabled initially */
  $context->api_version = 3;
  $context->name = 'ti_amg_fw_mobile_blog_detail_context';
  $context->description = '';
  $context->tag = '';
  $context->conditions = array(
    'node' => array(
      'values' => array(
        'blog' => 'blog',
      ),
      'options' => array(
        'node_form' => '1',
      ),
    ),
    'ti_amg_fw_mobile_context_condition_is_mobile' => array(
      'values' => array(
        'TRUE' => 'TRUE',
      ),
    ),
  );
  $context->reactions = array(
    'block' => array(
      'blocks' => array(
        'ti_amg_ads-mobile_320x50' => array(
          'module' => 'ti_amg_ads',
          'delta' => 'mobile_320x50',
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
        'ti_amg_ads-mobile_320x320' => array(
          'module' => 'ti_amg_ads',
          'delta' => 'mobile_320x320',
          'region' => 'content',
          'weight' => '-82',
        ),
      ),
    ),
    'theme_html' => array(
      'class' => 'mobile mobile-blog-detail',
    ),
  );
  $context->condition_mode = 1;
  $export['ti_amg_fw_mobile_blog_detail_context'] = $context;

  $context = new stdClass();
  $context->disabled = FALSE; /* Edit this to true to make a default context disabled initially */
  $context->api_version = 3;
  $context->name = 'ti_amg_fw_mobile_blog_landing_context';
  $context->description = '';
  $context->tag = '';
  $context->conditions = array(
    'path' => array(
      'values' => array(
        'blogs' => 'blogs',
      ),
    ),
    'ti_amg_fw_mobile_context_condition_is_mobile' => array(
      'values' => array(
        'TRUE' => 'TRUE',
      ),
    ),
  );
  $context->reactions = array(
    'block' => array(
      'blocks' => array(
        'ti_amg_fw_custom-fw_legacy_leaderboardad_block' => array(
          'module' => 'ti_amg_fw_custom',
          'delta' => 'fw_legacy_leaderboardad_block',
          'region' => 'content',
          'weight' => '-10',
        ),
        'views-5aae0fe853a10df3f72b6496a24f8ad1' => array(
          'module' => 'views',
          'delta' => '5aae0fe853a10df3f72b6496a24f8ad1',
          'region' => 'content',
          'weight' => '-8',
        ),
        'ti_amg_fw_custom-fw_mobilead_320x320_block' => array(
          'module' => 'ti_amg_fw_custom',
          'delta' => 'fw_mobilead_320x320_block',
          'region' => 'content',
          'weight' => '-6',
        ),
      ),
    ),
    'theme_html' => array(
      'class' => 'mobile mobile-blog',
    ),
  );
  $context->condition_mode = 1;
  $export['ti_amg_fw_mobile_blog_landing_context'] = $context;

  $context = new stdClass();
  $context->disabled = FALSE; /* Edit this to true to make a default context disabled initially */
  $context->api_version = 3;
  $context->name = 'ti_amg_fw_mobile_global_context';
  $context->description = 'Global Mobile Context';
  $context->tag = '';
  $context->conditions = array(
    'path' => array(
      'values' => array(
        '<front>' => '<front>',
        'blogs' => 'blogs',
        'blogs/*' => 'blogs/*',
        'slideshows/*' => 'slideshows/*',
        'recipe-finder/*' => 'recipe-finder/*',
        'recipe-finder' => 'recipe-finder',
        'recipes/*' => 'recipes/*',
        'search.mobi*' => 'search.mobi*',
        'partner*' => 'partner*',
        'articles/*' => 'articles/*',
      ),
    ),
    'ti_amg_fw_mobile_context_condition_is_mobile' => array(
      'values' => array(
        'TRUE' => 'TRUE',
      ),
    ),
  );
  $context->reactions = array(
    'block' => array(
      'blocks' => array(
        'menu-menu-mobile-menu' => array(
          'module' => 'menu',
          'delta' => 'menu-mobile-menu',
          'region' => 'navigation',
          'weight' => '-10',
        ),
        'ti_amg_fw_mobile_blocks-logo' => array(
          'module' => 'ti_amg_fw_mobile_blocks',
          'delta' => 'logo',
          'region' => 'page_header_left',
          'weight' => '-10',
        ),
        'ti_amg_fw_mobile_blocks-search' => array(
          'module' => 'ti_amg_fw_mobile_blocks',
          'delta' => 'search',
          'region' => 'page_header_right',
          'weight' => '-10',
        ),
        'ti_amg_fw_mobile_blocks-back_to_top' => array(
          'module' => 'ti_amg_fw_mobile_blocks',
          'delta' => 'back_to_top',
          'region' => 'content_bottom',
          'weight' => '-10',
        ),
        'search-form' => array(
          'module' => 'search',
          'delta' => 'form',
          'region' => 'content_bottom',
          'weight' => '-9',
        ),
        'menu-menu-mobile-bottom-menu' => array(
          'module' => 'menu',
          'delta' => 'menu-mobile-bottom-menu',
          'region' => 'content_bottom',
          'weight' => '-8',
        ),
        'ti_amg_fw_custom-fw_social_media_block' => array(
          'module' => 'ti_amg_fw_custom',
          'delta' => 'fw_social_media_block',
          'region' => 'content_bottom',
          'weight' => '-7',
        ),
      ),
    ),
  );
  $context->condition_mode = 1;

  // Translatables
  // Included for use with string extractors like potx.
  t('Global Mobile Context');
  $export['ti_amg_fw_mobile_global_context'] = $context;

  $context = new stdClass();
  $context->disabled = FALSE; /* Edit this to true to make a default context disabled initially */
  $context->api_version = 3;
  $context->name = 'ti_amg_fw_mobile_home_page';
  $context->description = '';
  $context->tag = '';
  $context->conditions = array(
    'path' => array(
      'values' => array(
        '<front>' => '<front>',
      ),
    ),
    'ti_amg_fw_mobile_context_condition_is_mobile' => array(
      'values' => array(
        'TRUE' => 'TRUE',
      ),
    ),
  );
  $context->reactions = array(
    'block' => array(
      'blocks' => array(
        'ti_amg_ads-mobile_320x50' => array(
          'module' => 'ti_amg_ads',
          'delta' => 'mobile_320x50',
          'region' => 'content',
          'weight' => '-88',
        ),
        'views-70696d5aa6cc6b8056710f3159eb97ab' => array(
          'module' => 'views',
          'delta' => '70696d5aa6cc6b8056710f3159eb97ab',
          'region' => 'content',
          'weight' => '-87',
        ),
        'ti_amg_ads-mobile_320x320' => array(
          'module' => 'ti_amg_ads',
          'delta' => 'mobile_320x320',
          'region' => 'content',
          'weight' => '-86',
        ),
        'views-4f5932a65cf1d1fc38955cbe78b2b5de' => array(
          'module' => 'views',
          'delta' => '4f5932a65cf1d1fc38955cbe78b2b5de',
          'region' => 'content',
          'weight' => '-85',
        ),
        'views-31960ded91686c82e55833a944500365' => array(
          'module' => 'views',
          'delta' => '31960ded91686c82e55833a944500365',
          'region' => 'content',
          'weight' => '-84',
        ),
        'ti_amg_ads-mobile_300x500' => array(
          'module' => 'ti_amg_ads',
          'delta' => 'mobile_300x500',
          'region' => 'content',
          'weight' => '-83',
        ),
        'views-c0c90d758183a29b1a9d129d7011e3cc' => array(
          'module' => 'views',
          'delta' => 'c0c90d758183a29b1a9d129d7011e3cc',
          'region' => 'content',
          'weight' => '-82',
        ),
      ),
    ),
    'theme_html' => array(
      'class' => 'mobile',
    ),
  );
  $context->condition_mode = 1;
  $export['ti_amg_fw_mobile_home_page'] = $context;

  $context = new stdClass();
  $context->disabled = TRUE; /* Edit this to true to make a default context disabled initially */
  $context->api_version = 3;
  $context->name = 'ti_amg_fw_mobile_recipe_detail_context';
  $context->description = 'TI AMG FoodandWine Mobile Recipe Detail Page Context';
  $context->tag = '';
  $context->conditions = array(
    'node' => array(
      'values' => array(
        'recipe' => 'recipe',
      ),
      'options' => array(
        'node_form' => '1',
      ),
    ),
    'ti_amg_fw_mobile_context_condition_is_mobile' => array(
      'values' => array(
        'TRUE' => 'TRUE',
      ),
    ),
  );
  $context->reactions = array(
    'block' => array(
      'blocks' => array(
        'ti_amg_ads-mobile_320x50' => array(
          'module' => 'ti_amg_ads',
          'delta' => 'mobile_320x50',
          'region' => 'content',
          'weight' => '-10',
        ),
        'system-main' => array(
          'module' => 'system',
          'delta' => 'main',
          'region' => 'content',
          'weight' => '-9',
        ),
      ),
    ),
    'theme_html' => array(
      'class' => 'mobile mobile-recipe-detail',
    ),
  );
  $context->condition_mode = 1;

  // Translatables
  // Included for use with string extractors like potx.
  t('TI AMG FoodandWine Mobile Recipe Detail Page Context');
  $export['ti_amg_fw_mobile_recipe_detail_context'] = $context;

  $context = new stdClass();
  $context->disabled = FALSE; /* Edit this to true to make a default context disabled initially */
  $context->api_version = 3;
  $context->name = 'ti_amg_fw_mobile_recipe_finder';
  $context->description = 'Mobile Recipe Finder Context';
  $context->tag = '';
  $context->conditions = array(
    'path' => array(
      'values' => array(
        'recipe-finder' => 'recipe-finder',
      ),
    ),
    'ti_amg_fw_mobile_context_condition_is_mobile' => array(
      'values' => array(
        'TRUE' => 'TRUE',
      ),
    ),
  );
  $context->reactions = array(
    'block' => array(
      'blocks' => array(
        'ti_amg_fw_custom-fw_legacy_leaderboardad_block' => array(
          'module' => 'ti_amg_fw_custom',
          'delta' => 'fw_legacy_leaderboardad_block',
          'region' => 'content',
          'weight' => '-10',
        ),
        'views-df00100cf1d0ec7a7384b91db1d2343c' => array(
          'module' => 'views',
          'delta' => 'df00100cf1d0ec7a7384b91db1d2343c',
          'region' => 'content',
          'weight' => '-9',
        ),
        'ti_amg_fw_custom-fw_mobilead_320x320_block' => array(
          'module' => 'ti_amg_fw_custom',
          'delta' => 'fw_mobilead_320x320_block',
          'region' => 'content',
          'weight' => '-8',
        ),
      ),
    ),
    'theme_html' => array(
      'class' => 'mobile',
    ),
  );
  $context->condition_mode = 1;

  // Translatables
  // Included for use with string extractors like potx.
  t('Mobile Recipe Finder Context');
  $export['ti_amg_fw_mobile_recipe_finder'] = $context;

  $context = new stdClass();
  $context->disabled = TRUE; /* Edit this to true to make a default context disabled initially */
  $context->api_version = 3;
  $context->name = 'ti_amg_fw_mobile_recipe_staff_favorite_context';
  $context->description = 'TI AMG FoodandWine Recipe Finder - Staff Favorite Page Context';
  $context->tag = '';
  $context->conditions = array(
    'path' => array(
      'values' => array(
        'recipe-finder/*' => 'recipe-finder/*',
      ),
    ),
    'ti_amg_fw_mobile_context_condition_is_mobile' => array(
      'values' => array(
        'TRUE' => 'TRUE',
      ),
    ),
  );
  $context->reactions = array(
    'block' => array(
      'blocks' => array(
        'ti_amg_ads-mobile_320x50' => array(
          'module' => 'ti_amg_ads',
          'delta' => 'mobile_320x50',
          'region' => 'content',
          'weight' => '-10',
        ),
        'views-bf139eb8d3dddd45490011f0c202c662' => array(
          'module' => 'views',
          'delta' => 'bf139eb8d3dddd45490011f0c202c662',
          'region' => 'content',
          'weight' => '-9',
        ),
        'ti_amg_ads-mobile_320x320' => array(
          'module' => 'ti_amg_ads',
          'delta' => 'mobile_320x320',
          'region' => 'content',
          'weight' => '-8',
        ),
      ),
    ),
    'theme_html' => array(
      'class' => 'mobile',
    ),
  );
  $context->condition_mode = 1;

  // Translatables
  // Included for use with string extractors like potx.
  t('TI AMG FoodandWine Recipe Finder - Staff Favorite Page Context');
  $export['ti_amg_fw_mobile_recipe_staff_favorite_context'] = $context;

  $context = new stdClass();
  $context->disabled = FALSE; /* Edit this to true to make a default context disabled initially */
  $context->api_version = 3;
  $context->name = 'ti_amg_fw_mobile_slideshow_context';
  $context->description = 'Global Mobile Slideshow Context';
  $context->tag = '';
  $context->conditions = array(
    'node' => array(
      'values' => array(
        'gallery' => 'gallery',
      ),
      'options' => array(
        'node_form' => '0',
      ),
    ),
    'ti_amg_fw_mobile_context_condition_is_mobile' => array(
      'values' => array(
        'TRUE' => 'TRUE',
      ),
    ),
  );
  $context->reactions = array(
    'block' => array(
      'blocks' => array(
        'menu-menu-mobile-menu' => array(
          'module' => 'menu',
          'delta' => 'menu-mobile-menu',
          'region' => 'navigation',
          'weight' => '-10',
        ),
        'ti_amg_fw_mobile_blocks-logo' => array(
          'module' => 'ti_amg_fw_mobile_blocks',
          'delta' => 'logo',
          'region' => 'page_header_left',
          'weight' => '-10',
        ),
        'ti_amg_fw_mobile_blocks-search' => array(
          'module' => 'ti_amg_fw_mobile_blocks',
          'delta' => 'search',
          'region' => 'page_header_right',
          'weight' => '-10',
        ),
        'ti_amg_ads-mobile_320x50' => array(
          'module' => 'ti_amg_ads',
          'delta' => 'mobile_320x50',
          'region' => 'content',
          'weight' => '-73',
        ),
        'views-91ac5200ece63025a5685580b4bc00cc' => array(
          'module' => 'views',
          'delta' => '91ac5200ece63025a5685580b4bc00cc',
          'region' => 'content',
          'weight' => '1',
        ),
        'views-965f1e01eb11d2bc6fc0638e3b606a65' => array(
          'module' => 'views',
          'delta' => '965f1e01eb11d2bc6fc0638e3b606a65',
          'region' => 'content',
          'weight' => '2',
        ),
        'views-89160885c8fe589836c40787e9bf4781' => array(
          'module' => 'views',
          'delta' => '89160885c8fe589836c40787e9bf4781',
          'region' => 'content',
          'weight' => '5',
        ),
        'ti_amg_fw_outbrain-outbrain_block' => array(
          'module' => 'ti_amg_fw_outbrain',
          'delta' => 'outbrain_block',
          'region' => 'content',
          'weight' => '6',
        ),
        'ti_amg_fw_mobile_blocks-back_to_top' => array(
          'module' => 'ti_amg_fw_mobile_blocks',
          'delta' => 'back_to_top',
          'region' => 'content_bottom',
          'weight' => '-10',
        ),
        'search-form' => array(
          'module' => 'search',
          'delta' => 'form',
          'region' => 'content_bottom',
          'weight' => '-9',
        ),
        'menu-menu-mobile-bottom-menu' => array(
          'module' => 'menu',
          'delta' => 'menu-mobile-bottom-menu',
          'region' => 'content_bottom',
          'weight' => '-8',
        ),
        'ti_amg_fw_custom-fw_social_media_block' => array(
          'module' => 'ti_amg_fw_custom',
          'delta' => 'fw_social_media_block',
          'region' => 'content_bottom',
          'weight' => '-7',
        ),
      ),
    ),
    'theme_html' => array(
      'class' => 'mobile',
    ),
  );
  $context->condition_mode = 1;

  // Translatables
  // Included for use with string extractors like potx.
  t('Global Mobile Slideshow Context');
  $export['ti_amg_fw_mobile_slideshow_context'] = $context;

  $context = new stdClass();
  $context->disabled = FALSE; /* Edit this to true to make a default context disabled initially */
  $context->api_version = 3;
  $context->name = 'ti_amg_fw_recipe_finder_context';
  $context->description = 'Recipe Finder Desktop Context';
  $context->tag = '';
  $context->conditions = array(
    'path' => array(
      'values' => array(
        'recipe-finder' => 'recipe-finder',
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
        'views-ti_amg_fw_recipe_finder-block_1' => array(
          'module' => 'views',
          'delta' => 'ti_amg_fw_recipe_finder-block_1',
          'region' => 'content',
          'weight' => '-9',
        ),
      ),
    ),
  );
  $context->condition_mode = 1;

  // Translatables
  // Included for use with string extractors like potx.
  t('Recipe Finder Desktop Context');
  $export['ti_amg_fw_recipe_finder_context'] = $context;

  $context = new stdClass();
  $context->disabled = FALSE; /* Edit this to true to make a default context disabled initially */
  $context->api_version = 3;
  $context->name = 'ti_amg_fw_recipes_finder_results_mobile';
  $context->description = '';
  $context->tag = '';
  $context->conditions = array(
    'path' => array(
      'values' => array(
        'recipe-finder/*' => 'recipe-finder/*',
      ),
    ),
    'ti_amg_fw_mobile_context_condition_is_mobile' => array(
      'values' => array(
        'TRUE' => 'TRUE',
      ),
    ),
  );
  $context->reactions = array(
    'block' => array(
      'blocks' => array(
        'ti_amg_fw_custom-fw_legacy_leaderboardad_block' => array(
          'module' => 'ti_amg_fw_custom',
          'delta' => 'fw_legacy_leaderboardad_block',
          'region' => 'content',
          'weight' => '-10',
        ),
        'views-bf139eb8d3dddd45490011f0c202c662' => array(
          'module' => 'views',
          'delta' => 'bf139eb8d3dddd45490011f0c202c662',
          'region' => 'content',
          'weight' => '-9',
        ),
        'ti_amg_fw_custom-fw_mobilead_320x320_block' => array(
          'module' => 'ti_amg_fw_custom',
          'delta' => 'fw_mobilead_320x320_block',
          'region' => 'content',
          'weight' => '-8',
        ),
      ),
    ),
    'theme_html' => array(
      'class' => 'mobile',
    ),
  );
  $context->condition_mode = 1;
  $export['ti_amg_fw_recipes_finder_results_mobile'] = $context;

  return $export;
}
