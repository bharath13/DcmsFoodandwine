<?php
/**
 * @file
 * ti_amg_fw_legacy_misc_page_ads.pages_default.inc
 */

/**
 * Implements hook_default_page_manager_pages().
 */
function ti_amg_fw_legacy_misc_page_ads_default_page_manager_pages() {
  $page = new stdClass();
  $page->disabled = FALSE; /* Edit this to true to make a default page disabled initially */
  $page->api_version = 1;
  $page->name = 'advanced_search_page';
  $page->task = 'page';
  $page->admin_title = 'Advanced Search Page';
  $page->admin_description = '';
  $page->path = 'search/advanced';
  $page->access = array(
    'logic' => 'and',
  );
  $page->menu = array();
  $page->arguments = array();
  $page->conf = array(
    'admin_paths' => FALSE,
  );
  $page->default_handlers = array();
  $handler = new stdClass();
  $handler->disabled = FALSE; /* Edit this to true to make a default handler disabled initially */
  $handler->api_version = 1;
  $handler->name = 'page_advanced_search_page__panel_context_53b579ab-39f3-42d3-8af6-a951de39e2d2';
  $handler->task = 'page';
  $handler->subtask = 'advanced_search_page';
  $handler->handler = 'panel_context';
  $handler->weight = 0;
  $handler->conf = array(
    'title' => 'Panel',
    'no_blocks' => 0,
    'pipeline' => 'standard',
    'body_classes_to_remove' => '',
    'body_classes_to_add' => '',
    'css_id' => '',
    'css' => '',
    'contexts' => array(),
    'relationships' => array(),
    'name' => '',
    'timeinc_ad_enable' => 1,
    'adFactory' => array(
      'setZone' => '[tgx:ad-zone]',
      'setChannel' => 'search',
      'setSubchannel' => '[tgx:ad-subchannel]',
      'setArticleId' => '',
      'setContentType' => 'search',
      'setPackageId' => '',
      'setContentPage' => FALSE,
      'setChannelPage' => FALSE,
      'setParam' => array(
        'ptype' => 'main',
        'site' => 'fw',
        'theme' => '',
        'tags' => '',
      ),
    ),
    'adConfig' => array(
      'setPopups' => FALSE,
      'setRevSciTracking' => TRUE,
      'setTacodaTracking' => FALSE,
      'setQuantcastTracking' => FALSE,
      'setBehaviorTracking' => FALSE,
      'setdisableInitLoad' => FALSE,
      'setDequeueAds' => FALSE,
    ),
    'custom' => array(
      '2x9_firefox_fixer' => 0,
      'stickHeaderSelector' => '.is_stuck',
      'timeinc_advertising_breakpoint_list' => '0',
    ),
  );
  $display = new panels_display();
  $display->layout = 'onecol';
  $display->layout_settings = array();
  $display->panel_settings = array(
    'style_settings' => array(
      'default' => NULL,
      'middle' => NULL,
    ),
  );
  $display->cache = array();
  $display->title = 'Advanced Recipe Search';
  $display->uuid = '2e928cd9-40fb-48aa-8a67-8c6c76b0734d';
  $display->storage_type = 'page_manager';
  $display->storage_id = 'page_search_page__panel';
  $display->content = array();
  $display->panels = array();
  $pane = new stdClass();
  $pane->pid = 'new-6a0e5efb-140f-4bc9-8e22-4ae51ef549b5';
  $pane->panel = 'middle';
  $pane->type = 'fw_advanced_search_form';
  $pane->subtype = 'fw_advanced_search_form';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array();
  $pane->cache = array();
  $pane->style = array(
    'settings' => NULL,
  );
  $pane->css = array();
  $pane->extras = array();
  $pane->position = 0;
  $pane->locks = array();
  $pane->uuid = '6a0e5efb-140f-4bc9-8e22-4ae51ef549b5';
  $display->content['new-6a0e5efb-140f-4bc9-8e22-4ae51ef549b5'] = $pane;
  $display->panels['middle'][0] = 'new-6a0e5efb-140f-4bc9-8e22-4ae51ef549b5';
  $pane = new stdClass();
  $pane->pid = 'new-a2e852a9-2623-4e4e-8311-95d8e683b359';
  $pane->panel = 'middle';
  $pane->type = 'panels_mini';
  $pane->subtype = 'desktop_tablet_leaderboard_ad';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'override_title' => 0,
    'override_title_text' => '',
    'override_title_heading' => 'h2',
  );
  $pane->cache = array();
  $pane->style = array(
    'settings' => NULL,
  );
  $pane->css = array();
  $pane->extras = array();
  $pane->position = 1;
  $pane->locks = array();
  $pane->uuid = 'a2e852a9-2623-4e4e-8311-95d8e683b359';
  $display->content['new-a2e852a9-2623-4e4e-8311-95d8e683b359'] = $pane;
  $display->panels['middle'][1] = 'new-a2e852a9-2623-4e4e-8311-95d8e683b359';
  $pane = new stdClass();
  $pane->pid = 'new-6cf2c52a-04de-4be6-b682-c8efb39a0b4f';
  $pane->panel = 'middle';
  $pane->type = 'panels_mini';
  $pane->subtype = 'header_cm_tout_ad_220x100';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'override_title' => 0,
    'override_title_text' => '',
    'override_title_heading' => 'h2',
  );
  $pane->cache = array();
  $pane->style = array(
    'settings' => NULL,
  );
  $pane->css = array();
  $pane->extras = array();
  $pane->position = 2;
  $pane->locks = array();
  $pane->uuid = '6cf2c52a-04de-4be6-b682-c8efb39a0b4f';
  $display->content['new-6cf2c52a-04de-4be6-b682-c8efb39a0b4f'] = $pane;
  $display->panels['middle'][2] = 'new-6cf2c52a-04de-4be6-b682-c8efb39a0b4f';
  $pane = new stdClass();
  $pane->pid = 'new-4575c247-bfa0-4271-9e0b-82f8580ddf98';
  $pane->panel = 'middle';
  $pane->type = 'panels_mini';
  $pane->subtype = 'desktop_first_rightrail_ad';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'override_title' => 0,
    'override_title_text' => '',
    'override_title_heading' => 'h2',
  );
  $pane->cache = array();
  $pane->style = array(
    'settings' => NULL,
  );
  $pane->css = array();
  $pane->extras = array();
  $pane->position = 3;
  $pane->locks = array();
  $pane->uuid = '4575c247-bfa0-4271-9e0b-82f8580ddf98';
  $display->content['new-4575c247-bfa0-4271-9e0b-82f8580ddf98'] = $pane;
  $display->panels['middle'][3] = 'new-4575c247-bfa0-4271-9e0b-82f8580ddf98';
  $pane = new stdClass();
  $pane->pid = 'new-c5ebdef0-6b79-4556-bbed-d87952821c2c';
  $pane->panel = 'middle';
  $pane->type = 'panels_mini';
  $pane->subtype = 'desktop_second_rightrail_ad';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'override_title' => 0,
    'override_title_text' => '',
    'override_title_heading' => 'h2',
  );
  $pane->cache = array();
  $pane->style = array(
    'settings' => NULL,
  );
  $pane->css = array();
  $pane->extras = array();
  $pane->position = 4;
  $pane->locks = array();
  $pane->uuid = 'c5ebdef0-6b79-4556-bbed-d87952821c2c';
  $display->content['new-c5ebdef0-6b79-4556-bbed-d87952821c2c'] = $pane;
  $display->panels['middle'][4] = 'new-c5ebdef0-6b79-4556-bbed-d87952821c2c';
  $pane = new stdClass();
  $pane->pid = 'new-a3438f7d-96b1-4c19-960b-922887d42de4';
  $pane->panel = 'middle';
  $pane->type = 'panels_mini';
  $pane->subtype = 'market_place_ads';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'override_title' => 0,
    'override_title_text' => '',
    'override_title_heading' => 'h2',
  );
  $pane->cache = array();
  $pane->style = array(
    'settings' => NULL,
  );
  $pane->css = array();
  $pane->extras = array();
  $pane->position = 5;
  $pane->locks = array();
  $pane->uuid = 'a3438f7d-96b1-4c19-960b-922887d42de4';
  $display->content['new-a3438f7d-96b1-4c19-960b-922887d42de4'] = $pane;
  $display->panels['middle'][5] = 'new-a3438f7d-96b1-4c19-960b-922887d42de4';
  $pane = new stdClass();
  $pane->pid = 'new-e88ea08f-12de-4169-9db1-9806915a91d7';
  $pane->panel = 'middle';
  $pane->type = 'panels_mini';
  $pane->subtype = 'gum_gum_ad';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'override_title' => 0,
    'override_title_text' => '',
    'override_title_heading' => 'h2',
  );
  $pane->cache = array();
  $pane->style = array(
    'settings' => NULL,
  );
  $pane->css = array();
  $pane->extras = array();
  $pane->position = 6;
  $pane->locks = array();
  $pane->uuid = 'e88ea08f-12de-4169-9db1-9806915a91d7';
  $display->content['new-e88ea08f-12de-4169-9db1-9806915a91d7'] = $pane;
  $display->panels['middle'][6] = 'new-e88ea08f-12de-4169-9db1-9806915a91d7';
  $pane = new stdClass();
  $pane->pid = 'new-bede918f-3821-4b7e-b63b-810a68934fb7';
  $pane->panel = 'middle';
  $pane->type = 'panels_mini';
  $pane->subtype = 'teads_ad';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'override_title' => 0,
    'override_title_text' => '',
    'override_title_heading' => 'h2',
  );
  $pane->cache = array();
  $pane->style = array(
    'settings' => NULL,
  );
  $pane->css = array();
  $pane->extras = array();
  $pane->position = 7;
  $pane->locks = array();
  $pane->uuid = 'bede918f-3821-4b7e-b63b-810a68934fb7';
  $display->content['new-bede918f-3821-4b7e-b63b-810a68934fb7'] = $pane;
  $display->panels['middle'][7] = 'new-bede918f-3821-4b7e-b63b-810a68934fb7';
  $display->hide_title = PANELS_TITLE_FIXED;
  $display->title_pane = '0';
  $handler->conf['display'] = $display;
  $page->default_handlers[$handler->name] = $handler;
  $pages['advanced_search_page'] = $page;

  $page = new stdClass();
  $page->disabled = FALSE; /* Edit this to true to make a default page disabled initially */
  $page->api_version = 1;
  $page->name = 'legacy_blogs_landing_page';
  $page->task = 'page';
  $page->admin_title = 'Legacy Blogs Landing Page';
  $page->admin_description = '';
  $page->path = 'blogs';
  $page->access = array();
  $page->menu = array();
  $page->arguments = array();
  $page->conf = array(
    'admin_paths' => FALSE,
  );
  $page->default_handlers = array();
  $handler = new stdClass();
  $handler->disabled = FALSE; /* Edit this to true to make a default handler disabled initially */
  $handler->api_version = 1;
  $handler->name = 'page_legacy_blogs_landing_page__mobile-blogs-landing-page';
  $handler->task = 'page';
  $handler->subtask = 'legacy_blogs_landing_page';
  $handler->handler = 'panel_context';
  $handler->weight = -2;
  $handler->conf = array(
    'title' => 'Mobile Blogs Landing Page',
    'no_blocks' => 0,
    'pipeline' => 'standard',
    'body_classes_to_remove' => '',
    'body_classes_to_add' => '',
    'css_id' => '',
    'css' => '',
    'contexts' => array(),
    'relationships' => array(),
    'name' => 'mobile-blogs-landing-page',
    'timeinc_ad_enable' => 1,
    'adFactory' => array(
      'setZone' => '[tgx:ad-zone]',
      'setChannel' => 'blogs',
      'setSubchannel' => '[tgx:ad-subchannel]',
      'setArticleId' => '',
      'setContentType' => 'blogs',
      'setPackageId' => '',
      'setContentPage' => FALSE,
      'setChannelPage' => FALSE,
      'setParam' => array(
        'ptype' => 'main',
        'site' => 'fw',
        'theme' => '',
        'tags' => '',
      ),
    ),
    'adConfig' => array(
      'setPopups' => FALSE,
      'setRevSciTracking' => TRUE,
      'setTacodaTracking' => FALSE,
      'setQuantcastTracking' => FALSE,
      'setBehaviorTracking' => FALSE,
      'setdisableInitLoad' => FALSE,
      'setDequeueAds' => FALSE,
    ),
    'custom' => array(
      '2x9_firefox_fixer' => 1,
      'stickHeaderSelector' => '.is_stuck',
      'timeinc_advertising_breakpoint_list' => '0',
    ),
    'access' => array(
      'plugins' => array(
        0 => array(
          'name' => 'php',
          'settings' => array(
            'description' => 'Mobile cookie condition',
            'php' => 'if (!empty($_COOKIE[\'TI_PREFS\']) && $_COOKIE[\'TI_PREFS\'] == \'phone\') {
  return TRUE;
}',
          ),
          'not' => FALSE,
        ),
      ),
      'logic' => 'and',
    ),
  );
  $display = new panels_display();
  $display->layout = 'onecol';
  $display->layout_settings = array();
  $display->panel_settings = array(
    'style_settings' => array(
      'default' => NULL,
      'center' => NULL,
      'middle' => NULL,
    ),
  );
  $display->cache = array();
  $display->title = 'Blogs';
  $display->uuid = '680cbfac-ea46-439a-94bc-5c55a7ae5d04';
  $display->storage_type = 'page_manager';
  $display->storage_id = 'page_legacy_blogs_landing_page__panel';
  $display->content = array();
  $display->panels = array();
  $pane = new stdClass();
  $pane->pid = 'new-1c060df0-5d58-448e-a587-7ac19c0df8fb';
  $pane->panel = 'middle';
  $pane->type = 'panels_mini';
  $pane->subtype = 'mobile_leaderboard_ad';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'override_title' => 0,
    'override_title_text' => '',
    'override_title_heading' => 'h2',
  );
  $pane->cache = array();
  $pane->style = array(
    'settings' => NULL,
  );
  $pane->css = array();
  $pane->extras = array();
  $pane->position = 0;
  $pane->locks = array();
  $pane->uuid = '1c060df0-5d58-448e-a587-7ac19c0df8fb';
  $display->content['new-1c060df0-5d58-448e-a587-7ac19c0df8fb'] = $pane;
  $display->panels['middle'][0] = 'new-1c060df0-5d58-448e-a587-7ac19c0df8fb';
  $pane = new stdClass();
  $pane->pid = 'new-2517f9f0-0e9d-4e88-90b9-19a404fcd9b8';
  $pane->panel = 'middle';
  $pane->type = 'panels_mini';
  $pane->subtype = 'mobile_legacy_ad_320x320';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'override_title' => 0,
    'override_title_text' => '',
    'override_title_heading' => 'h2',
  );
  $pane->cache = array();
  $pane->style = array(
    'settings' => NULL,
  );
  $pane->css = array();
  $pane->extras = array();
  $pane->position = 1;
  $pane->locks = array();
  $pane->uuid = '2517f9f0-0e9d-4e88-90b9-19a404fcd9b8';
  $display->content['new-2517f9f0-0e9d-4e88-90b9-19a404fcd9b8'] = $pane;
  $display->panels['middle'][1] = 'new-2517f9f0-0e9d-4e88-90b9-19a404fcd9b8';
  $pane = new stdClass();
  $pane->pid = 'new-4ab072dd-a68d-4469-b514-5354a5b7bc88';
  $pane->panel = 'middle';
  $pane->type = 'panels_mini';
  $pane->subtype = 'legacy_teads_ad';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'override_title' => 0,
    'override_title_text' => '',
    'override_title_heading' => 'h2',
  );
  $pane->cache = array();
  $pane->style = array(
    'settings' => NULL,
  );
  $pane->css = array();
  $pane->extras = array();
  $pane->position = 2;
  $pane->locks = array();
  $pane->uuid = '4ab072dd-a68d-4469-b514-5354a5b7bc88';
  $display->content['new-4ab072dd-a68d-4469-b514-5354a5b7bc88'] = $pane;
  $display->panels['middle'][2] = 'new-4ab072dd-a68d-4469-b514-5354a5b7bc88';
  $display->hide_title = PANELS_TITLE_FIXED;
  $display->title_pane = '0';
  $handler->conf['display'] = $display;
  $page->default_handlers[$handler->name] = $handler;
  $handler = new stdClass();
  $handler->disabled = FALSE; /* Edit this to true to make a default handler disabled initially */
  $handler->api_version = 1;
  $handler->name = 'page_legacy_blogs_landing_page__panel';
  $handler->task = 'page';
  $handler->subtask = 'legacy_blogs_landing_page';
  $handler->handler = 'panel_context';
  $handler->weight = -1;
  $handler->conf = array(
    'title' => 'Desktop Blogs Landing Page',
    'no_blocks' => 0,
    'pipeline' => 'standard',
    'body_classes_to_remove' => '',
    'body_classes_to_add' => '',
    'css_id' => '',
    'css' => '',
    'contexts' => array(),
    'relationships' => array(),
    'name' => 'panel',
    'timeinc_ad_enable' => 1,
    'adFactory' => array(
      'setZone' => '[tgx:ad-zone]',
      'setChannel' => 'blogs',
      'setSubchannel' => '[tgx:ad-subchannel]',
      'setArticleId' => '',
      'setContentType' => 'blogs',
      'setPackageId' => '',
      'setContentPage' => FALSE,
      'setChannelPage' => FALSE,
      'setParam' => array(
        'ptype' => 'main',
        'site' => 'fw',
        'theme' => '',
        'tags' => '',
      ),
    ),
    'adConfig' => array(
      'setPopups' => FALSE,
      'setRevSciTracking' => TRUE,
      'setTacodaTracking' => FALSE,
      'setQuantcastTracking' => FALSE,
      'setBehaviorTracking' => FALSE,
      'setdisableInitLoad' => FALSE,
      'setDequeueAds' => FALSE,
    ),
    'custom' => array(
      '2x9_firefox_fixer' => 1,
      'stickHeaderSelector' => '.is_stuck',
      'timeinc_advertising_breakpoint_list' => '0',
    ),
  );
  $display = new panels_display();
  $display->layout = 'onecol';
  $display->layout_settings = array();
  $display->panel_settings = array(
    'style_settings' => array(
      'default' => NULL,
      'center' => NULL,
      'middle' => NULL,
    ),
  );
  $display->cache = array();
  $display->title = 'Blogs';
  $display->uuid = '680cbfac-ea46-439a-94bc-5c55a7ae5d04';
  $display->storage_type = 'page_manager';
  $display->storage_id = 'page_legacy_blogs_landing_page__panel';
  $display->content = array();
  $display->panels = array();
  $pane = new stdClass();
  $pane->pid = 'new-17fcc5b5-1102-4a65-981a-6c80fce4ab49';
  $pane->panel = 'middle';
  $pane->type = 'views';
  $pane->subtype = 'ti_amg_fw_blogs_topics_listing';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'override_pager_settings' => 0,
    'use_pager' => 1,
    'nodes_per_page' => '5',
    'pager_id' => '0',
    'offset' => '0',
    'more_link' => 0,
    'feed_icons' => 0,
    'panel_args' => 0,
    'link_to_view' => 0,
    'args' => '',
    'url' => '',
    'display' => 'page',
    'override_title' => 0,
    'override_title_text' => '',
    'override_title_heading' => 'h2',
  );
  $pane->cache = array();
  $pane->style = array(
    'settings' => NULL,
  );
  $pane->css = array();
  $pane->extras = array();
  $pane->position = 0;
  $pane->locks = array();
  $pane->uuid = '17fcc5b5-1102-4a65-981a-6c80fce4ab49';
  $display->content['new-17fcc5b5-1102-4a65-981a-6c80fce4ab49'] = $pane;
  $display->panels['middle'][0] = 'new-17fcc5b5-1102-4a65-981a-6c80fce4ab49';
  $pane = new stdClass();
  $pane->pid = 'new-be54dd8d-9340-4aba-ba25-cb0ffd338a2e';
  $pane->panel = 'middle';
  $pane->type = 'panels_mini';
  $pane->subtype = 'desktop_tablet_leaderboard_ad';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'override_title' => 0,
    'override_title_text' => '',
    'override_title_heading' => 'h2',
  );
  $pane->cache = array();
  $pane->style = array(
    'settings' => NULL,
  );
  $pane->css = array();
  $pane->extras = array();
  $pane->position = 1;
  $pane->locks = array();
  $pane->uuid = 'be54dd8d-9340-4aba-ba25-cb0ffd338a2e';
  $display->content['new-be54dd8d-9340-4aba-ba25-cb0ffd338a2e'] = $pane;
  $display->panels['middle'][1] = 'new-be54dd8d-9340-4aba-ba25-cb0ffd338a2e';
  $pane = new stdClass();
  $pane->pid = 'new-fb5b4804-3bbc-4c1a-a943-c96adb8ad875';
  $pane->panel = 'middle';
  $pane->type = 'panels_mini';
  $pane->subtype = 'header_cm_tout_ad_220x100';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'override_title' => 0,
    'override_title_text' => '',
    'override_title_heading' => 'h2',
  );
  $pane->cache = array();
  $pane->style = array(
    'settings' => NULL,
  );
  $pane->css = array();
  $pane->extras = array();
  $pane->position = 2;
  $pane->locks = array();
  $pane->uuid = 'fb5b4804-3bbc-4c1a-a943-c96adb8ad875';
  $display->content['new-fb5b4804-3bbc-4c1a-a943-c96adb8ad875'] = $pane;
  $display->panels['middle'][2] = 'new-fb5b4804-3bbc-4c1a-a943-c96adb8ad875';
  $pane = new stdClass();
  $pane->pid = 'new-48cf4705-efe0-4f08-8b7c-3a54e0b96f71';
  $pane->panel = 'middle';
  $pane->type = 'panels_mini';
  $pane->subtype = 'desktop_first_rightrail_ad';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'override_title' => 0,
    'override_title_text' => '',
    'override_title_heading' => 'h2',
  );
  $pane->cache = array();
  $pane->style = array(
    'settings' => NULL,
  );
  $pane->css = array();
  $pane->extras = array();
  $pane->position = 3;
  $pane->locks = array();
  $pane->uuid = '48cf4705-efe0-4f08-8b7c-3a54e0b96f71';
  $display->content['new-48cf4705-efe0-4f08-8b7c-3a54e0b96f71'] = $pane;
  $display->panels['middle'][3] = 'new-48cf4705-efe0-4f08-8b7c-3a54e0b96f71';
  $pane = new stdClass();
  $pane->pid = 'new-39285e86-eb4d-45fc-9485-fc3319fcddd5';
  $pane->panel = 'middle';
  $pane->type = 'panels_mini';
  $pane->subtype = 'desktop_second_rightrail_ad';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'override_title' => 0,
    'override_title_text' => '',
    'override_title_heading' => 'h2',
  );
  $pane->cache = array();
  $pane->style = array(
    'settings' => NULL,
  );
  $pane->css = array();
  $pane->extras = array();
  $pane->position = 4;
  $pane->locks = array();
  $pane->uuid = '39285e86-eb4d-45fc-9485-fc3319fcddd5';
  $display->content['new-39285e86-eb4d-45fc-9485-fc3319fcddd5'] = $pane;
  $display->panels['middle'][4] = 'new-39285e86-eb4d-45fc-9485-fc3319fcddd5';
  $pane = new stdClass();
  $pane->pid = 'new-ecfd2d49-7ef3-415b-b1c6-d00bc0250554';
  $pane->panel = 'middle';
  $pane->type = 'panels_mini';
  $pane->subtype = 'desktop_rightrail_300x100';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'override_title' => 0,
    'override_title_text' => '',
    'override_title_heading' => 'h2',
  );
  $pane->cache = array();
  $pane->style = array(
    'settings' => NULL,
  );
  $pane->css = array();
  $pane->extras = array();
  $pane->position = 5;
  $pane->locks = array();
  $pane->uuid = 'ecfd2d49-7ef3-415b-b1c6-d00bc0250554';
  $display->content['new-ecfd2d49-7ef3-415b-b1c6-d00bc0250554'] = $pane;
  $display->panels['middle'][5] = 'new-ecfd2d49-7ef3-415b-b1c6-d00bc0250554';
  $pane = new stdClass();
  $pane->pid = 'new-1365a88c-ee18-48d0-bb03-1f44a629c5c5';
  $pane->panel = 'middle';
  $pane->type = 'panels_mini';
  $pane->subtype = 'market_place_ads';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'override_title' => 0,
    'override_title_text' => '',
    'override_title_heading' => 'h2',
  );
  $pane->cache = array();
  $pane->style = array(
    'settings' => NULL,
  );
  $pane->css = array();
  $pane->extras = array();
  $pane->position = 6;
  $pane->locks = array();
  $pane->uuid = '1365a88c-ee18-48d0-bb03-1f44a629c5c5';
  $display->content['new-1365a88c-ee18-48d0-bb03-1f44a629c5c5'] = $pane;
  $display->panels['middle'][6] = 'new-1365a88c-ee18-48d0-bb03-1f44a629c5c5';
  $pane = new stdClass();
  $pane->pid = 'new-aff14211-8315-43cd-96f1-6fb6d15d76cb';
  $pane->panel = 'middle';
  $pane->type = 'panels_mini';
  $pane->subtype = 'gum_gum_ad';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'override_title' => 0,
    'override_title_text' => '',
    'override_title_heading' => 'h2',
  );
  $pane->cache = array();
  $pane->style = array(
    'settings' => NULL,
  );
  $pane->css = array();
  $pane->extras = array();
  $pane->position = 7;
  $pane->locks = array();
  $pane->uuid = 'aff14211-8315-43cd-96f1-6fb6d15d76cb';
  $display->content['new-aff14211-8315-43cd-96f1-6fb6d15d76cb'] = $pane;
  $display->panels['middle'][7] = 'new-aff14211-8315-43cd-96f1-6fb6d15d76cb';
  $pane = new stdClass();
  $pane->pid = 'new-4ab072dd-a68d-4469-b514-5354a5b7bc88';
  $pane->panel = 'middle';
  $pane->type = 'panels_mini';
  $pane->subtype = 'legacy_teads_ad';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'override_title' => 0,
    'override_title_text' => '',
    'override_title_heading' => 'h2',
  );
  $pane->cache = array();
  $pane->style = array(
    'settings' => NULL,
  );
  $pane->css = array();
  $pane->extras = array();
  $pane->position = 8;
  $pane->locks = array();
  $pane->uuid = '4ab072dd-a68d-4469-b514-5354a5b7bc88';
  $display->content['new-4ab072dd-a68d-4469-b514-5354a5b7bc88'] = $pane;
  $display->panels['middle'][8] = 'new-4ab072dd-a68d-4469-b514-5354a5b7bc88';
  $display->hide_title = PANELS_TITLE_FIXED;
  $display->title_pane = '0';
  $handler->conf['display'] = $display;
  $page->default_handlers[$handler->name] = $handler;
  $pages['legacy_blogs_landing_page'] = $page;

  $page = new stdClass();
  $page->disabled = FALSE; /* Edit this to true to make a default page disabled initially */
  $page->api_version = 1;
  $page->name = 'legacy_monthly_landing_page';
  $page->task = 'page';
  $page->admin_title = 'Legacy Monthly Landing Page';
  $page->admin_description = '';
  $page->path = 'monthly/!name';
  $page->access = array();
  $page->menu = array();
  $page->arguments = array(
    'name' => array(
      'id' => 1,
      'identifier' => 'String',
      'name' => 'string',
      'settings' => array(
        'use_tail' => 1,
      ),
    ),
  );
  $page->conf = array(
    'admin_paths' => FALSE,
  );
  $page->default_handlers = array();
  $handler = new stdClass();
  $handler->disabled = FALSE; /* Edit this to true to make a default handler disabled initially */
  $handler->api_version = 1;
  $handler->name = 'page_legacy_monthly_landing_page__panel_context_94ef5dfb-428e-469d-9c19-53d06bb4fccb';
  $handler->task = 'page';
  $handler->subtask = 'legacy_monthly_landing_page';
  $handler->handler = 'panel_context';
  $handler->weight = 1;
  $handler->conf = array(
    'title' => 'Desktop Monthly Landing Page',
    'no_blocks' => 0,
    'pipeline' => 'standard',
    'body_classes_to_remove' => '',
    'body_classes_to_add' => '',
    'css_id' => '',
    'css' => '',
    'contexts' => array(),
    'relationships' => array(),
    'name' => '',
    'timeinc_ad_enable' => 1,
    'adFactory' => array(
      'setZone' => '[tgx:ad-zone]',
      'setChannel' => 'monthly',
      'setSubchannel' => '[tgx:ad-subchannel]',
      'setArticleId' => '',
      'setContentType' => 'toc',
      'setPackageId' => '',
      'setContentPage' => FALSE,
      'setChannelPage' => FALSE,
      'setParam' => array(
        'ptype' => 'main',
        'site' => 'fw',
        'theme' => '',
        'tags' => '',
      ),
    ),
    'adConfig' => array(
      'setPopups' => FALSE,
      'setRevSciTracking' => TRUE,
      'setTacodaTracking' => FALSE,
      'setQuantcastTracking' => FALSE,
      'setBehaviorTracking' => FALSE,
      'setdisableInitLoad' => FALSE,
      'setDequeueAds' => FALSE,
    ),
    'custom' => array(
      '2x9_firefox_fixer' => 1,
      'stickHeaderSelector' => '.is_stuck',
      'timeinc_advertising_breakpoint_list' => '0',
    ),
    'custom_theme_enabled' => array(
      'enabled' => 1,
      'custom_theme' => 'foodandwine',
    ),
  );
  $display = new panels_display();
  $display->layout = 'onecol';
  $display->layout_settings = array();
  $display->panel_settings = array(
    'style_settings' => array(
      'default' => NULL,
      'center' => NULL,
      'middle' => NULL,
    ),
  );
  $display->cache = array();
  $display->title = '';
  $display->uuid = '680cbfac-ea46-439a-94bc-5c55a7ae5d04';
  $display->storage_type = 'page_manager';
  $display->storage_id = 'page_legacy_blogs_landing_page__panel';
  $display->content = array();
  $display->panels = array();
  $pane = new stdClass();
  $pane->pid = 'new-9ba1f4d0-df32-4b41-8bfc-ce9d2ccc03a0';
  $pane->panel = 'middle';
  $pane->type = 'views';
  $pane->subtype = 'ti_amg_fw_toc';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'override_pager_settings' => 0,
    'use_pager' => 0,
    'nodes_per_page' => '0',
    'pager_id' => '0',
    'offset' => '0',
    'more_link' => 0,
    'feed_icons' => 0,
    'panel_args' => 1,
    'link_to_view' => 0,
    'args' => '',
    'url' => '',
    'display' => 'page',
    'context' => array(
      0 => '',
    ),
    'override_title' => 0,
    'override_title_text' => '',
    'override_title_heading' => 'h2',
  );
  $pane->cache = array();
  $pane->style = array(
    'settings' => NULL,
  );
  $pane->css = array();
  $pane->extras = array();
  $pane->position = 0;
  $pane->locks = array();
  $pane->uuid = '9ba1f4d0-df32-4b41-8bfc-ce9d2ccc03a0';
  $display->content['new-9ba1f4d0-df32-4b41-8bfc-ce9d2ccc03a0'] = $pane;
  $display->panels['middle'][0] = 'new-9ba1f4d0-df32-4b41-8bfc-ce9d2ccc03a0';
  $pane = new stdClass();
  $pane->pid = 'new-be54dd8d-9340-4aba-ba25-cb0ffd338a2e';
  $pane->panel = 'middle';
  $pane->type = 'panels_mini';
  $pane->subtype = 'desktop_tablet_leaderboard_ad';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'override_title' => 0,
    'override_title_text' => '',
    'override_title_heading' => 'h2',
  );
  $pane->cache = array();
  $pane->style = array(
    'settings' => NULL,
  );
  $pane->css = array();
  $pane->extras = array();
  $pane->position = 1;
  $pane->locks = array();
  $pane->uuid = 'be54dd8d-9340-4aba-ba25-cb0ffd338a2e';
  $display->content['new-be54dd8d-9340-4aba-ba25-cb0ffd338a2e'] = $pane;
  $display->panels['middle'][1] = 'new-be54dd8d-9340-4aba-ba25-cb0ffd338a2e';
  $pane = new stdClass();
  $pane->pid = 'new-fb5b4804-3bbc-4c1a-a943-c96adb8ad875';
  $pane->panel = 'middle';
  $pane->type = 'panels_mini';
  $pane->subtype = 'header_cm_tout_ad_220x100';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'override_title' => 0,
    'override_title_text' => '',
    'override_title_heading' => 'h2',
  );
  $pane->cache = array();
  $pane->style = array(
    'settings' => NULL,
  );
  $pane->css = array();
  $pane->extras = array();
  $pane->position = 2;
  $pane->locks = array();
  $pane->uuid = 'fb5b4804-3bbc-4c1a-a943-c96adb8ad875';
  $display->content['new-fb5b4804-3bbc-4c1a-a943-c96adb8ad875'] = $pane;
  $display->panels['middle'][2] = 'new-fb5b4804-3bbc-4c1a-a943-c96adb8ad875';
  $pane = new stdClass();
  $pane->pid = 'new-48cf4705-efe0-4f08-8b7c-3a54e0b96f71';
  $pane->panel = 'middle';
  $pane->type = 'panels_mini';
  $pane->subtype = 'desktop_first_rightrail_ad';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'override_title' => 0,
    'override_title_text' => '',
    'override_title_heading' => 'h2',
  );
  $pane->cache = array();
  $pane->style = array(
    'settings' => NULL,
  );
  $pane->css = array();
  $pane->extras = array();
  $pane->position = 3;
  $pane->locks = array();
  $pane->uuid = '48cf4705-efe0-4f08-8b7c-3a54e0b96f71';
  $display->content['new-48cf4705-efe0-4f08-8b7c-3a54e0b96f71'] = $pane;
  $display->panels['middle'][3] = 'new-48cf4705-efe0-4f08-8b7c-3a54e0b96f71';
  $pane = new stdClass();
  $pane->pid = 'new-39285e86-eb4d-45fc-9485-fc3319fcddd5';
  $pane->panel = 'middle';
  $pane->type = 'panels_mini';
  $pane->subtype = 'desktop_second_rightrail_ad';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'override_title' => 0,
    'override_title_text' => '',
    'override_title_heading' => 'h2',
  );
  $pane->cache = array();
  $pane->style = array(
    'settings' => NULL,
  );
  $pane->css = array();
  $pane->extras = array();
  $pane->position = 4;
  $pane->locks = array();
  $pane->uuid = '39285e86-eb4d-45fc-9485-fc3319fcddd5';
  $display->content['new-39285e86-eb4d-45fc-9485-fc3319fcddd5'] = $pane;
  $display->panels['middle'][4] = 'new-39285e86-eb4d-45fc-9485-fc3319fcddd5';
  $pane = new stdClass();
  $pane->pid = 'new-ecfd2d49-7ef3-415b-b1c6-d00bc0250554';
  $pane->panel = 'middle';
  $pane->type = 'panels_mini';
  $pane->subtype = 'desktop_rightrail_300x100';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'override_title' => 0,
    'override_title_text' => '',
    'override_title_heading' => 'h2',
  );
  $pane->cache = array();
  $pane->style = array(
    'settings' => NULL,
  );
  $pane->css = array();
  $pane->extras = array();
  $pane->position = 5;
  $pane->locks = array();
  $pane->uuid = 'ecfd2d49-7ef3-415b-b1c6-d00bc0250554';
  $display->content['new-ecfd2d49-7ef3-415b-b1c6-d00bc0250554'] = $pane;
  $display->panels['middle'][5] = 'new-ecfd2d49-7ef3-415b-b1c6-d00bc0250554';
  $pane = new stdClass();
  $pane->pid = 'new-1365a88c-ee18-48d0-bb03-1f44a629c5c5';
  $pane->panel = 'middle';
  $pane->type = 'panels_mini';
  $pane->subtype = 'market_place_ads';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'override_title' => 0,
    'override_title_text' => '',
    'override_title_heading' => 'h2',
  );
  $pane->cache = array();
  $pane->style = array(
    'settings' => NULL,
  );
  $pane->css = array();
  $pane->extras = array();
  $pane->position = 6;
  $pane->locks = array();
  $pane->uuid = '1365a88c-ee18-48d0-bb03-1f44a629c5c5';
  $display->content['new-1365a88c-ee18-48d0-bb03-1f44a629c5c5'] = $pane;
  $display->panels['middle'][6] = 'new-1365a88c-ee18-48d0-bb03-1f44a629c5c5';
  $pane = new stdClass();
  $pane->pid = 'new-aff14211-8315-43cd-96f1-6fb6d15d76cb';
  $pane->panel = 'middle';
  $pane->type = 'panels_mini';
  $pane->subtype = 'gum_gum_ad';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'override_title' => 0,
    'override_title_text' => '',
    'override_title_heading' => 'h2',
  );
  $pane->cache = array();
  $pane->style = array(
    'settings' => NULL,
  );
  $pane->css = array();
  $pane->extras = array();
  $pane->position = 7;
  $pane->locks = array();
  $pane->uuid = 'aff14211-8315-43cd-96f1-6fb6d15d76cb';
  $display->content['new-aff14211-8315-43cd-96f1-6fb6d15d76cb'] = $pane;
  $display->panels['middle'][7] = 'new-aff14211-8315-43cd-96f1-6fb6d15d76cb';
  $pane = new stdClass();
  $pane->pid = 'new-4ab072dd-a68d-4469-b514-5354a5b7bc88';
  $pane->panel = 'middle';
  $pane->type = 'panels_mini';
  $pane->subtype = 'legacy_teads_ad';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'override_title' => 0,
    'override_title_text' => '',
    'override_title_heading' => 'h2',
  );
  $pane->cache = array();
  $pane->style = array(
    'settings' => NULL,
  );
  $pane->css = array();
  $pane->extras = array();
  $pane->position = 8;
  $pane->locks = array();
  $pane->uuid = '4ab072dd-a68d-4469-b514-5354a5b7bc88';
  $display->content['new-4ab072dd-a68d-4469-b514-5354a5b7bc88'] = $pane;
  $display->panels['middle'][8] = 'new-4ab072dd-a68d-4469-b514-5354a5b7bc88';
  $display->hide_title = PANELS_TITLE_FIXED;
  $display->title_pane = '0';
  $handler->conf['display'] = $display;
  $page->default_handlers[$handler->name] = $handler;
  $pages['legacy_monthly_landing_page'] = $page;

  $page = new stdClass();
  $page->disabled = FALSE; /* Edit this to true to make a default page disabled initially */
  $page->api_version = 1;
  $page->name = 'recipe_finder';
  $page->task = 'page';
  $page->admin_title = 'Recipe finder';
  $page->admin_description = 'Recipe finder';
  $page->path = 'recipe-finder/!name';
  $page->access = array();
  $page->menu = array();
  $page->arguments = array(
    'name' => array(
      'id' => 1,
      'identifier' => 'String',
      'name' => 'string',
      'settings' => array(
        'use_tail' => 0,
      ),
    ),
  );
  $page->conf = array(
    'admin_paths' => FALSE,
  );
  $page->default_handlers = array();
  $handler = new stdClass();
  $handler->disabled = FALSE; /* Edit this to true to make a default handler disabled initially */
  $handler->api_version = 1;
  $handler->name = 'page_recipe_finder__panel_context_06771688-370e-4116-8ddb-b07ff8cbca3e';
  $handler->task = 'page';
  $handler->subtask = 'recipe_finder';
  $handler->handler = 'panel_context';
  $handler->weight = -3;
  $handler->conf = array(
    'title' => 'Mobile Recipe Finder Results Page',
    'no_blocks' => 0,
    'pipeline' => 'standard',
    'body_classes_to_remove' => '',
    'body_classes_to_add' => '',
    'css_id' => '',
    'css' => '',
    'contexts' => array(),
    'relationships' => array(),
    'name' => '',
    'access' => array(
      'plugins' => array(
        0 => array(
          'name' => 'php',
          'settings' => array(
            'description' => 'Recipe finder result for mobile',
            'php' => 'if(arg(0) == \'recipe-finder\' && !empty(arg(1))) {
  if (isset($_COOKIE[\'TI_PREFS\']) && $_COOKIE[\'TI_PREFS\'] == \'phone\') {
    return TRUE;
  }
}',
          ),
          'not' => FALSE,
        ),
      ),
      'logic' => 'and',
    ),
    'timeinc_ad_enable' => 1,
    'adFactory' => array(
      'setZone' => '[tgx:ad-zone]',
      'setChannel' => 'recipe-finder',
      'setSubchannel' => '[tgx:ad-subchannel]',
      'setArticleId' => '',
      'setContentType' => 'custom',
      'setPackageId' => '',
      'setContentPage' => FALSE,
      'setChannelPage' => FALSE,
      'setParam' => array(
        'ptype' => 'main',
        'site' => 'fw',
        'theme' => '',
        'tags' => '',
      ),
    ),
    'adConfig' => array(
      'setPopups' => FALSE,
      'setRevSciTracking' => TRUE,
      'setTacodaTracking' => FALSE,
      'setQuantcastTracking' => FALSE,
      'setBehaviorTracking' => FALSE,
      'setdisableInitLoad' => FALSE,
      'setDequeueAds' => FALSE,
    ),
    'custom' => array(
      '2x9_firefox_fixer' => 0,
      'stickHeaderSelector' => '.is_stuck',
      'timeinc_advertising_breakpoint_list' => '0',
    ),
  );
  $display = new panels_display();
  $display->layout = 'onecol';
  $display->layout_settings = array();
  $display->panel_settings = array(
    'style_settings' => array(
      'default' => NULL,
      'center' => NULL,
      'middle' => NULL,
    ),
  );
  $display->cache = array();
  $display->title = '';
  $display->uuid = '1578c07e-1dcb-4b7e-a0e3-7cc1423d91ef';
  $display->storage_type = 'page_manager';
  $display->storage_id = '';
  $display->content = array();
  $display->panels = array();
  $pane = new stdClass();
  $pane->pid = 'new-a2223a5e-ffca-422a-82b8-22026483b2ae';
  $pane->panel = 'middle';
  $pane->type = 'panels_mini';
  $pane->subtype = 'mobile_leaderboard_ad';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'override_title' => 0,
    'override_title_text' => '',
    'override_title_heading' => 'h2',
  );
  $pane->cache = array();
  $pane->style = array(
    'settings' => NULL,
  );
  $pane->css = array();
  $pane->extras = array();
  $pane->position = 0;
  $pane->locks = array();
  $pane->uuid = 'a2223a5e-ffca-422a-82b8-22026483b2ae';
  $display->content['new-a2223a5e-ffca-422a-82b8-22026483b2ae'] = $pane;
  $display->panels['middle'][0] = 'new-a2223a5e-ffca-422a-82b8-22026483b2ae';
  $pane = new stdClass();
  $pane->pid = 'new-be905bf1-aabd-4850-a02c-140030ccc68d';
  $pane->panel = 'middle';
  $pane->type = 'panels_mini';
  $pane->subtype = 'mobile_legacy_ad_320x320';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'override_title' => 0,
    'override_title_text' => '',
    'override_title_heading' => 'h2',
  );
  $pane->cache = array();
  $pane->style = array(
    'settings' => NULL,
  );
  $pane->css = array();
  $pane->extras = array();
  $pane->position = 1;
  $pane->locks = array();
  $pane->uuid = 'be905bf1-aabd-4850-a02c-140030ccc68d';
  $display->content['new-be905bf1-aabd-4850-a02c-140030ccc68d'] = $pane;
  $display->panels['middle'][1] = 'new-be905bf1-aabd-4850-a02c-140030ccc68d';
  $pane = new stdClass();
  $pane->pid = 'new-c0c7e6c1-0946-4754-9239-f55d09caf95a';
  $pane->panel = 'middle';
  $pane->type = 'panels_mini';
  $pane->subtype = 'legacy_teads_ad';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'override_title' => 0,
    'override_title_text' => '',
    'override_title_heading' => 'h2',
  );
  $pane->cache = array();
  $pane->style = array(
    'settings' => NULL,
  );
  $pane->css = array();
  $pane->extras = array();
  $pane->position = 2;
  $pane->locks = array();
  $pane->uuid = 'c0c7e6c1-0946-4754-9239-f55d09caf95a';
  $display->content['new-c0c7e6c1-0946-4754-9239-f55d09caf95a'] = $pane;
  $display->panels['middle'][2] = 'new-c0c7e6c1-0946-4754-9239-f55d09caf95a';
  $display->hide_title = PANELS_TITLE_FIXED;
  $display->title_pane = '0';
  $handler->conf['display'] = $display;
  $page->default_handlers[$handler->name] = $handler;
  $handler = new stdClass();
  $handler->disabled = FALSE; /* Edit this to true to make a default handler disabled initially */
  $handler->api_version = 1;
  $handler->name = 'page_recipe_finder__mobile-recipe-finder-landing-page';
  $handler->task = 'page';
  $handler->subtask = 'recipe_finder';
  $handler->handler = 'panel_context';
  $handler->weight = -2;
  $handler->conf = array(
    'title' => 'Mobile Recipe Finder Landing Page',
    'no_blocks' => 0,
    'pipeline' => 'standard',
    'body_classes_to_remove' => '',
    'body_classes_to_add' => '',
    'css_id' => '',
    'css' => '',
    'contexts' => array(),
    'relationships' => array(),
    'name' => 'mobile-recipe-finder-landing-page',
    'timeinc_ad_enable' => 1,
    'adFactory' => array(
      'setZone' => '[tgx:ad-zone]',
      'setChannel' => 'recipe-finder',
      'setSubchannel' => '[tgx:ad-subchannel]',
      'setArticleId' => '',
      'setContentType' => 'custom',
      'setPackageId' => '',
      'setContentPage' => FALSE,
      'setChannelPage' => FALSE,
      'setParam' => array(
        'ptype' => 'main',
        'site' => 'fw',
        'theme' => '',
        'tags' => '',
      ),
    ),
    'adConfig' => array(
      'setPopups' => FALSE,
      'setRevSciTracking' => TRUE,
      'setTacodaTracking' => FALSE,
      'setQuantcastTracking' => FALSE,
      'setBehaviorTracking' => FALSE,
      'setdisableInitLoad' => FALSE,
      'setDequeueAds' => FALSE,
    ),
    'custom' => array(
      '2x9_firefox_fixer' => 1,
      'stickHeaderSelector' => '.is_stuck',
      'timeinc_advertising_breakpoint_list' => '0',
    ),
    'access' => array(
      'plugins' => array(
        1 => array(
          'name' => 'path_visibility',
          'settings' => array(
            'visibility_setting' => '1',
            'paths' => 'recipe-finder',
          ),
          'context' => 'argument_string_1',
          'not' => FALSE,
        ),
        2 => array(
          'name' => 'php',
          'settings' => array(
            'description' => 'Mobile cookie selection rule',
            'php' => 'if (isset($_COOKIE[\'TI_PREFS\']) && $_COOKIE[\'TI_PREFS\'] == \'phone\') {
  return TRUE;
}',
          ),
          'not' => FALSE,
        ),
      ),
      'logic' => 'and',
    ),
  );
  $display = new panels_display();
  $display->layout = 'onecol';
  $display->layout_settings = array();
  $display->panel_settings = array(
    'style_settings' => array(
      'default' => NULL,
      'center' => NULL,
      'middle' => NULL,
    ),
  );
  $display->cache = array();
  $display->title = '';
  $display->uuid = 'fbdcc4d7-ce8b-45f7-8868-940ff2545613';
  $display->storage_type = 'page_manager';
  $display->storage_id = 'page_recipe_finder__panel';
  $display->content = array();
  $display->panels = array();
  $pane = new stdClass();
  $pane->pid = 'new-855cffa8-c117-4e99-b947-475647e044c7';
  $pane->panel = 'middle';
  $pane->type = 'panels_mini';
  $pane->subtype = 'mobile_leaderboard_ad';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'override_title' => 0,
    'override_title_text' => '',
    'override_title_heading' => 'h2',
  );
  $pane->cache = array();
  $pane->style = array(
    'settings' => NULL,
  );
  $pane->css = array();
  $pane->extras = array();
  $pane->position = 0;
  $pane->locks = array();
  $pane->uuid = '855cffa8-c117-4e99-b947-475647e044c7';
  $display->content['new-855cffa8-c117-4e99-b947-475647e044c7'] = $pane;
  $display->panels['middle'][0] = 'new-855cffa8-c117-4e99-b947-475647e044c7';
  $pane = new stdClass();
  $pane->pid = 'new-0627eda2-8cf0-44e9-bbea-84a4a14807e2';
  $pane->panel = 'middle';
  $pane->type = 'panels_mini';
  $pane->subtype = 'mobile_legacy_ad_320x320';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'override_title' => 0,
    'override_title_text' => '',
    'override_title_heading' => 'h2',
  );
  $pane->cache = array();
  $pane->style = array(
    'settings' => NULL,
  );
  $pane->css = array();
  $pane->extras = array();
  $pane->position = 1;
  $pane->locks = array();
  $pane->uuid = '0627eda2-8cf0-44e9-bbea-84a4a14807e2';
  $display->content['new-0627eda2-8cf0-44e9-bbea-84a4a14807e2'] = $pane;
  $display->panels['middle'][1] = 'new-0627eda2-8cf0-44e9-bbea-84a4a14807e2';
  $pane = new stdClass();
  $pane->pid = 'new-74be515b-0867-4ff7-a8f1-818468f9efa1';
  $pane->panel = 'middle';
  $pane->type = 'panels_mini';
  $pane->subtype = 'legacy_teads_ad';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'override_title' => 0,
    'override_title_text' => '',
    'override_title_heading' => 'h2',
  );
  $pane->cache = array();
  $pane->style = array(
    'settings' => NULL,
  );
  $pane->css = array();
  $pane->extras = array();
  $pane->position = 2;
  $pane->locks = array();
  $pane->uuid = '74be515b-0867-4ff7-a8f1-818468f9efa1';
  $display->content['new-74be515b-0867-4ff7-a8f1-818468f9efa1'] = $pane;
  $display->panels['middle'][2] = 'new-74be515b-0867-4ff7-a8f1-818468f9efa1';
  $display->hide_title = PANELS_TITLE_FIXED;
  $display->title_pane = '0';
  $handler->conf['display'] = $display;
  $page->default_handlers[$handler->name] = $handler;
  $handler = new stdClass();
  $handler->disabled = FALSE; /* Edit this to true to make a default handler disabled initially */
  $handler->api_version = 1;
  $handler->name = 'page_recipe_finder__mobile-legacy-recipe-finder';
  $handler->task = 'page';
  $handler->subtask = 'recipe_finder';
  $handler->handler = 'panel_context';
  $handler->weight = -1;
  $handler->conf = array(
    'title' => 'Legacy Recipe Finder Landing Page',
    'no_blocks' => 0,
    'pipeline' => 'standard',
    'body_classes_to_remove' => '',
    'body_classes_to_add' => '',
    'css_id' => '',
    'css' => '',
    'contexts' => array(),
    'relationships' => array(),
    'name' => 'mobile-legacy-recipe-finder',
    'timeinc_ad_enable' => 1,
    'adFactory' => array(
      'setZone' => '[tgx:ad-zone]',
      'setChannel' => 'recipe-finder',
      'setSubchannel' => '[tgx:ad-subchannel]',
      'setArticleId' => '',
      'setContentType' => 'custom',
      'setPackageId' => '',
      'setContentPage' => FALSE,
      'setChannelPage' => FALSE,
      'setParam' => array(
        'ptype' => 'main',
        'site' => 'fw',
        'theme' => '',
        'tags' => '',
      ),
    ),
    'adConfig' => array(
      'setPopups' => FALSE,
      'setRevSciTracking' => TRUE,
      'setTacodaTracking' => FALSE,
      'setQuantcastTracking' => FALSE,
      'setBehaviorTracking' => FALSE,
      'setdisableInitLoad' => FALSE,
      'setDequeueAds' => FALSE,
    ),
    'custom' => array(
      '2x9_firefox_fixer' => 1,
      'stickHeaderSelector' => '.is_stuck',
      'timeinc_advertising_breakpoint_list' => '0',
    ),
    'access' => array(
      'plugins' => array(
        1 => array(
          'name' => 'path_visibility',
          'settings' => array(
            'visibility_setting' => '1',
            'paths' => 'recipe-finder',
          ),
          'context' => 'argument_string_1',
          'not' => FALSE,
        ),
        2 => array(
          'name' => 'php',
          'settings' => array(
            'description' => 'Desktop Condition',
            'php' => 'if (empty($_COOKIE[\'TI_PREFS\']) || (!empty($_COOKIE[\'TI_PREFS\']) && $_COOKIE[\'TI_PREFS\'] == \'default\') ) {
  return TRUE;
}',
          ),
          'not' => FALSE,
        ),
      ),
      'logic' => 'and',
    ),
  );
  $display = new panels_display();
  $display->layout = 'onecol';
  $display->layout_settings = array();
  $display->panel_settings = array(
    'style_settings' => array(
      'default' => NULL,
      'center' => NULL,
      'middle' => NULL,
    ),
  );
  $display->cache = array();
  $display->title = '';
  $display->uuid = 'fbdcc4d7-ce8b-45f7-8868-940ff2545613';
  $display->storage_type = 'page_manager';
  $display->storage_id = 'page_recipe_finder__panel';
  $display->content = array();
  $display->panels = array();
  $pane = new stdClass();
  $pane->pid = 'new-f9deb3bf-68d2-4127-b299-bdd5661c0ca8';
  $pane->panel = 'middle';
  $pane->type = 'panels_mini';
  $pane->subtype = 'desktop_tablet_leaderboard_ad';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'override_title' => 0,
    'override_title_text' => '',
    'override_title_heading' => 'h2',
  );
  $pane->cache = array();
  $pane->style = array(
    'settings' => NULL,
  );
  $pane->css = array();
  $pane->extras = array();
  $pane->position = 0;
  $pane->locks = array();
  $pane->uuid = 'f9deb3bf-68d2-4127-b299-bdd5661c0ca8';
  $display->content['new-f9deb3bf-68d2-4127-b299-bdd5661c0ca8'] = $pane;
  $display->panels['middle'][0] = 'new-f9deb3bf-68d2-4127-b299-bdd5661c0ca8';
  $pane = new stdClass();
  $pane->pid = 'new-12e77f4f-7204-4537-8320-3c7475fe9f99';
  $pane->panel = 'middle';
  $pane->type = 'panels_mini';
  $pane->subtype = 'header_cm_tout_ad_220x100';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'override_title' => 0,
    'override_title_text' => '',
    'override_title_heading' => 'h2',
  );
  $pane->cache = array();
  $pane->style = array(
    'settings' => NULL,
  );
  $pane->css = array();
  $pane->extras = array();
  $pane->position = 1;
  $pane->locks = array();
  $pane->uuid = '12e77f4f-7204-4537-8320-3c7475fe9f99';
  $display->content['new-12e77f4f-7204-4537-8320-3c7475fe9f99'] = $pane;
  $display->panels['middle'][1] = 'new-12e77f4f-7204-4537-8320-3c7475fe9f99';
  $pane = new stdClass();
  $pane->pid = 'new-ce2cfac3-9244-4148-b3ad-90bc4e7db550';
  $pane->panel = 'middle';
  $pane->type = 'panels_mini';
  $pane->subtype = 'desktop_first_rightrail_ad';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'override_title' => 0,
    'override_title_text' => '',
    'override_title_heading' => 'h2',
  );
  $pane->cache = array();
  $pane->style = array(
    'settings' => NULL,
  );
  $pane->css = array();
  $pane->extras = array();
  $pane->position = 2;
  $pane->locks = array();
  $pane->uuid = 'ce2cfac3-9244-4148-b3ad-90bc4e7db550';
  $display->content['new-ce2cfac3-9244-4148-b3ad-90bc4e7db550'] = $pane;
  $display->panels['middle'][2] = 'new-ce2cfac3-9244-4148-b3ad-90bc4e7db550';
  $pane = new stdClass();
  $pane->pid = 'new-0525e54f-4bf5-4953-b6b9-7a2845c27fb3';
  $pane->panel = 'middle';
  $pane->type = 'panels_mini';
  $pane->subtype = 'desktop_second_rightrail_ad';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'override_title' => 0,
    'override_title_text' => '',
    'override_title_heading' => 'h2',
  );
  $pane->cache = array();
  $pane->style = array(
    'settings' => NULL,
  );
  $pane->css = array();
  $pane->extras = array();
  $pane->position = 3;
  $pane->locks = array();
  $pane->uuid = '0525e54f-4bf5-4953-b6b9-7a2845c27fb3';
  $display->content['new-0525e54f-4bf5-4953-b6b9-7a2845c27fb3'] = $pane;
  $display->panels['middle'][3] = 'new-0525e54f-4bf5-4953-b6b9-7a2845c27fb3';
  $pane = new stdClass();
  $pane->pid = 'new-31c9417a-31f2-4810-9d68-239e7df6795e';
  $pane->panel = 'middle';
  $pane->type = 'panels_mini';
  $pane->subtype = 'market_place_ads';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'override_title' => 0,
    'override_title_text' => '',
    'override_title_heading' => 'h2',
  );
  $pane->cache = array();
  $pane->style = array(
    'settings' => NULL,
  );
  $pane->css = array();
  $pane->extras = array();
  $pane->position = 4;
  $pane->locks = array();
  $pane->uuid = '31c9417a-31f2-4810-9d68-239e7df6795e';
  $display->content['new-31c9417a-31f2-4810-9d68-239e7df6795e'] = $pane;
  $display->panels['middle'][4] = 'new-31c9417a-31f2-4810-9d68-239e7df6795e';
  $pane = new stdClass();
  $pane->pid = 'new-666d6bad-7c88-41f4-9c5d-779edae4dcf3';
  $pane->panel = 'middle';
  $pane->type = 'panels_mini';
  $pane->subtype = 'gum_gum_ad';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'override_title' => 0,
    'override_title_text' => '',
    'override_title_heading' => 'h2',
  );
  $pane->cache = array();
  $pane->style = array(
    'settings' => NULL,
  );
  $pane->css = array();
  $pane->extras = array();
  $pane->position = 5;
  $pane->locks = array();
  $pane->uuid = '666d6bad-7c88-41f4-9c5d-779edae4dcf3';
  $display->content['new-666d6bad-7c88-41f4-9c5d-779edae4dcf3'] = $pane;
  $display->panels['middle'][5] = 'new-666d6bad-7c88-41f4-9c5d-779edae4dcf3';
  $pane = new stdClass();
  $pane->pid = 'new-74be515b-0867-4ff7-a8f1-818468f9efa1';
  $pane->panel = 'middle';
  $pane->type = 'panels_mini';
  $pane->subtype = 'legacy_teads_ad';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'override_title' => 0,
    'override_title_text' => '',
    'override_title_heading' => 'h2',
  );
  $pane->cache = array();
  $pane->style = array(
    'settings' => NULL,
  );
  $pane->css = array();
  $pane->extras = array();
  $pane->position = 6;
  $pane->locks = array();
  $pane->uuid = '74be515b-0867-4ff7-a8f1-818468f9efa1';
  $display->content['new-74be515b-0867-4ff7-a8f1-818468f9efa1'] = $pane;
  $display->panels['middle'][6] = 'new-74be515b-0867-4ff7-a8f1-818468f9efa1';
  $display->hide_title = PANELS_TITLE_FIXED;
  $display->title_pane = '0';
  $handler->conf['display'] = $display;
  $page->default_handlers[$handler->name] = $handler;
  $handler = new stdClass();
  $handler->disabled = FALSE; /* Edit this to true to make a default handler disabled initially */
  $handler->api_version = 1;
  $handler->name = 'page_recipe_finder__panel';
  $handler->task = 'page';
  $handler->subtask = 'recipe_finder';
  $handler->handler = 'panel_context';
  $handler->weight = 0;
  $handler->conf = array(
    'title' => 'Recipe Finder Results Page',
    'no_blocks' => 0,
    'pipeline' => 'standard',
    'body_classes_to_remove' => '',
    'body_classes_to_add' => '',
    'css_id' => '',
    'css' => '',
    'contexts' => array(),
    'relationships' => array(),
    'name' => 'panel',
    'timeinc_ad_enable' => 1,
    'adFactory' => array(
      'setZone' => '[tgx:ad-zone]',
      'setChannel' => 'recipe-finder',
      'setSubchannel' => '[tgx:ad-subchannel]',
      'setArticleId' => '',
      'setContentType' => 'custom',
      'setPackageId' => '',
      'setContentPage' => FALSE,
      'setChannelPage' => FALSE,
      'setParam' => array(
        'ptype' => 'main',
        'site' => 'fw',
        'theme' => '',
        'tags' => '',
      ),
    ),
    'adConfig' => array(
      'setPopups' => FALSE,
      'setRevSciTracking' => TRUE,
      'setTacodaTracking' => FALSE,
      'setQuantcastTracking' => FALSE,
      'setBehaviorTracking' => FALSE,
      'setdisableInitLoad' => FALSE,
      'setDequeueAds' => FALSE,
    ),
    'custom' => array(
      '2x9_firefox_fixer' => 1,
      'stickHeaderSelector' => '.is_stuck',
      'timeinc_advertising_breakpoint_list' => '0',
    ),
    'access' => array(
      'plugins' => array(
        1 => array(
          'name' => 'php',
          'settings' => array(
            'description' => 'Desktop Condition',
            'php' => 'if (empty($_COOKIE[\'TI_PREFS\']) || (!empty($_COOKIE[\'TI_PREFS\']) && $_COOKIE[\'TI_PREFS\'] == \'default\') ) {
  return TRUE;
}',
          ),
          'not' => FALSE,
        ),
      ),
      'logic' => 'and',
    ),
  );
  $display = new panels_display();
  $display->layout = 'onecol';
  $display->layout_settings = array();
  $display->panel_settings = array(
    'style_settings' => array(
      'default' => NULL,
      'center' => NULL,
      'middle' => NULL,
    ),
  );
  $display->cache = array();
  $display->title = '';
  $display->uuid = 'fbdcc4d7-ce8b-45f7-8868-940ff2545613';
  $display->storage_type = 'page_manager';
  $display->storage_id = 'page_recipe_finder__panel';
  $display->content = array();
  $display->panels = array();
  $pane = new stdClass();
  $pane->pid = 'new-6c19d690-960e-41e4-bc95-3390c5735d4b';
  $pane->panel = 'middle';
  $pane->type = 'views';
  $pane->subtype = 'ti_amg_fw_recipe_finder_child';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'override_pager_settings' => 0,
    'use_pager' => 1,
    'nodes_per_page' => '10',
    'pager_id' => '0',
    'offset' => '0',
    'more_link' => 0,
    'feed_icons' => 0,
    'panel_args' => 1,
    'link_to_view' => 0,
    'args' => '',
    'url' => '',
    'display' => 'page',
    'override_title' => 0,
    'override_title_text' => '',
    'override_title_heading' => 'h2',
  );
  $pane->cache = array();
  $pane->style = array(
    'settings' => NULL,
  );
  $pane->css = array();
  $pane->extras = array();
  $pane->position = 0;
  $pane->locks = array();
  $pane->uuid = '6c19d690-960e-41e4-bc95-3390c5735d4b';
  $display->content['new-6c19d690-960e-41e4-bc95-3390c5735d4b'] = $pane;
  $display->panels['middle'][0] = 'new-6c19d690-960e-41e4-bc95-3390c5735d4b';
  $pane = new stdClass();
  $pane->pid = 'new-d6fda80e-c26e-47d3-af14-3c5f453e2d2b';
  $pane->panel = 'middle';
  $pane->type = 'panels_mini';
  $pane->subtype = 'desktop_tablet_leaderboard_ad';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'override_title' => 0,
    'override_title_text' => '',
    'override_title_heading' => 'h2',
  );
  $pane->cache = array();
  $pane->style = array(
    'settings' => NULL,
  );
  $pane->css = array();
  $pane->extras = array();
  $pane->position = 1;
  $pane->locks = array();
  $pane->uuid = 'd6fda80e-c26e-47d3-af14-3c5f453e2d2b';
  $display->content['new-d6fda80e-c26e-47d3-af14-3c5f453e2d2b'] = $pane;
  $display->panels['middle'][1] = 'new-d6fda80e-c26e-47d3-af14-3c5f453e2d2b';
  $pane = new stdClass();
  $pane->pid = 'new-12e77f4f-7204-4537-8320-3c7475fe9f99';
  $pane->panel = 'middle';
  $pane->type = 'panels_mini';
  $pane->subtype = 'header_cm_tout_ad_220x100';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'override_title' => 0,
    'override_title_text' => '',
    'override_title_heading' => 'h2',
  );
  $pane->cache = array();
  $pane->style = array(
    'settings' => NULL,
  );
  $pane->css = array();
  $pane->extras = array();
  $pane->position = 2;
  $pane->locks = array();
  $pane->uuid = '12e77f4f-7204-4537-8320-3c7475fe9f99';
  $display->content['new-12e77f4f-7204-4537-8320-3c7475fe9f99'] = $pane;
  $display->panels['middle'][2] = 'new-12e77f4f-7204-4537-8320-3c7475fe9f99';
  $pane = new stdClass();
  $pane->pid = 'new-ce2cfac3-9244-4148-b3ad-90bc4e7db550';
  $pane->panel = 'middle';
  $pane->type = 'panels_mini';
  $pane->subtype = 'desktop_first_rightrail_ad';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'override_title' => 0,
    'override_title_text' => '',
    'override_title_heading' => 'h2',
  );
  $pane->cache = array();
  $pane->style = array(
    'settings' => NULL,
  );
  $pane->css = array();
  $pane->extras = array();
  $pane->position = 3;
  $pane->locks = array();
  $pane->uuid = 'ce2cfac3-9244-4148-b3ad-90bc4e7db550';
  $display->content['new-ce2cfac3-9244-4148-b3ad-90bc4e7db550'] = $pane;
  $display->panels['middle'][3] = 'new-ce2cfac3-9244-4148-b3ad-90bc4e7db550';
  $pane = new stdClass();
  $pane->pid = 'new-0525e54f-4bf5-4953-b6b9-7a2845c27fb3';
  $pane->panel = 'middle';
  $pane->type = 'panels_mini';
  $pane->subtype = 'desktop_second_rightrail_ad';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'override_title' => 0,
    'override_title_text' => '',
    'override_title_heading' => 'h2',
  );
  $pane->cache = array();
  $pane->style = array(
    'settings' => NULL,
  );
  $pane->css = array();
  $pane->extras = array();
  $pane->position = 4;
  $pane->locks = array();
  $pane->uuid = '0525e54f-4bf5-4953-b6b9-7a2845c27fb3';
  $display->content['new-0525e54f-4bf5-4953-b6b9-7a2845c27fb3'] = $pane;
  $display->panels['middle'][4] = 'new-0525e54f-4bf5-4953-b6b9-7a2845c27fb3';
  $pane = new stdClass();
  $pane->pid = 'new-31c9417a-31f2-4810-9d68-239e7df6795e';
  $pane->panel = 'middle';
  $pane->type = 'panels_mini';
  $pane->subtype = 'market_place_ads';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'override_title' => 0,
    'override_title_text' => '',
    'override_title_heading' => 'h2',
  );
  $pane->cache = array();
  $pane->style = array(
    'settings' => NULL,
  );
  $pane->css = array();
  $pane->extras = array();
  $pane->position = 5;
  $pane->locks = array();
  $pane->uuid = '31c9417a-31f2-4810-9d68-239e7df6795e';
  $display->content['new-31c9417a-31f2-4810-9d68-239e7df6795e'] = $pane;
  $display->panels['middle'][5] = 'new-31c9417a-31f2-4810-9d68-239e7df6795e';
  $pane = new stdClass();
  $pane->pid = 'new-666d6bad-7c88-41f4-9c5d-779edae4dcf3';
  $pane->panel = 'middle';
  $pane->type = 'panels_mini';
  $pane->subtype = 'gum_gum_ad';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'override_title' => 0,
    'override_title_text' => '',
    'override_title_heading' => 'h2',
  );
  $pane->cache = array();
  $pane->style = array(
    'settings' => NULL,
  );
  $pane->css = array();
  $pane->extras = array();
  $pane->position = 6;
  $pane->locks = array();
  $pane->uuid = '666d6bad-7c88-41f4-9c5d-779edae4dcf3';
  $display->content['new-666d6bad-7c88-41f4-9c5d-779edae4dcf3'] = $pane;
  $display->panels['middle'][6] = 'new-666d6bad-7c88-41f4-9c5d-779edae4dcf3';
  $pane = new stdClass();
  $pane->pid = 'new-74be515b-0867-4ff7-a8f1-818468f9efa1';
  $pane->panel = 'middle';
  $pane->type = 'panels_mini';
  $pane->subtype = 'legacy_teads_ad';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'override_title' => 0,
    'override_title_text' => '',
    'override_title_heading' => 'h2',
  );
  $pane->cache = array();
  $pane->style = array(
    'settings' => NULL,
  );
  $pane->css = array();
  $pane->extras = array();
  $pane->position = 7;
  $pane->locks = array();
  $pane->uuid = '74be515b-0867-4ff7-a8f1-818468f9efa1';
  $display->content['new-74be515b-0867-4ff7-a8f1-818468f9efa1'] = $pane;
  $display->panels['middle'][7] = 'new-74be515b-0867-4ff7-a8f1-818468f9efa1';
  $display->hide_title = PANELS_TITLE_FIXED;
  $display->title_pane = '0';
  $handler->conf['display'] = $display;
  $page->default_handlers[$handler->name] = $handler;
  $pages['recipe_finder'] = $page;

  return $pages;

}
