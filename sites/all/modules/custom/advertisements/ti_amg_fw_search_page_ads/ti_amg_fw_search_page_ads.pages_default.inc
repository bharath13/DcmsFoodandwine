<?php
/**
 * @file
 * ti_amg_fw_search_page_ads.pages_default.inc
 */

/**
 * Implements hook_default_page_manager_pages().
 */
function ti_amg_fw_search_page_ads_default_page_manager_pages() {
  $page = new stdClass();
  $page->disabled = FALSE; /* Edit this to true to make a default page disabled initially */
  $page->api_version = 1;
  $page->name = 'mobile_search';
  $page->task = 'page';
  $page->admin_title = 'Mobile Search';
  $page->admin_description = '';
  $page->path = 'search.mobi';
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
  $handler->name = 'page_mobile_search__panel';
  $handler->task = 'page';
  $handler->subtask = 'mobile_search';
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
    'name' => 'panel',
    'timeinc_ad_enable' => 1,
    'adFactory' => array(
      'setZone' => '',
      'setChannel' => 'search.mobi',
      'setSubchannel' => 'search.mobi',
      'setArticleId' => '',
      'setContentType' => '',
      'setPackageId' => '',
      'setContentPage' => FALSE,
      'setChannelPage' => FALSE,
      'setParam' => array(
        'ptype' => 'main',
        'site' => 'fw',
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
      'middle' => NULL,
    ),
  );
  $display->cache = array();
  $display->title = 'Search';
  $display->uuid = '804ca130-1859-40dc-af9d-4349cdb02bbf';
  $display->storage_type = 'page_manager';
  $display->storage_id = 'page_mobile_search__panel';
  $display->content = array();
  $display->panels = array();
  $pane = new stdClass();
  $pane->pid = 'new-b9414981-c17b-4fc7-9887-1d623710a557';
  $pane->panel = 'middle';
  $pane->type = 'views';
  $pane->subtype = 'foodandwine_mobile_search';
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
  $pane->uuid = 'b9414981-c17b-4fc7-9887-1d623710a557';
  $display->content['new-b9414981-c17b-4fc7-9887-1d623710a557'] = $pane;
  $display->panels['middle'][0] = 'new-b9414981-c17b-4fc7-9887-1d623710a557';
  $pane = new stdClass();
  $pane->pid = 'new-f52809c7-c9af-4f9b-aeb4-2a80677a7896';
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
  $pane->position = 1;
  $pane->locks = array();
  $pane->uuid = 'f52809c7-c9af-4f9b-aeb4-2a80677a7896';
  $display->content['new-f52809c7-c9af-4f9b-aeb4-2a80677a7896'] = $pane;
  $display->panels['middle'][1] = 'new-f52809c7-c9af-4f9b-aeb4-2a80677a7896';
  $pane = new stdClass();
  $pane->pid = 'new-84901827-aed6-405e-a74d-3e501f4e2461';
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
  $pane->position = 2;
  $pane->locks = array();
  $pane->uuid = '84901827-aed6-405e-a74d-3e501f4e2461';
  $display->content['new-84901827-aed6-405e-a74d-3e501f4e2461'] = $pane;
  $display->panels['middle'][2] = 'new-84901827-aed6-405e-a74d-3e501f4e2461';
  $pane = new stdClass();
  $pane->pid = 'new-46a7f0bf-54f8-4d97-ba4b-70ef20e06f3e';
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
  $pane->position = 3;
  $pane->locks = array();
  $pane->uuid = '46a7f0bf-54f8-4d97-ba4b-70ef20e06f3e';
  $display->content['new-46a7f0bf-54f8-4d97-ba4b-70ef20e06f3e'] = $pane;
  $display->panels['middle'][3] = 'new-46a7f0bf-54f8-4d97-ba4b-70ef20e06f3e';
  $display->hide_title = PANELS_TITLE_FIXED;
  $display->title_pane = '0';
  $handler->conf['display'] = $display;
  $page->default_handlers[$handler->name] = $handler;
  $pages['mobile_search'] = $page;

  $page = new stdClass();
  $page->disabled = FALSE; /* Edit this to true to make a default page disabled initially */
  $page->api_version = 1;
  $page->name = 'search_page';
  $page->task = 'page';
  $page->admin_title = 'Search Page';
  $page->admin_description = '';
  $page->path = 'fw_search';
  $page->access = array(
    'logic' => 'and',
    'type' => 'none',
    'settings' => NULL,
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
  $handler->name = 'page_search_page__panel';
  $handler->task = 'page';
  $handler->subtask = 'search_page';
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
    'name' => 'panel',
    'timeinc_ad_enable' => 1,
    'adFactory' => array(
      'setZone' => '',
      'setChannel' => 'search',
      'setSubchannel' => 'search',
      'setArticleId' => '',
      'setContentType' => '',
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
  $display->title = '';
  $display->uuid = '2e928cd9-40fb-48aa-8a67-8c6c76b0734d';
  $display->storage_type = 'page_manager';
  $display->storage_id = 'page_search_page__panel';
  $display->content = array();
  $display->panels = array();
  $pane = new stdClass();
  $pane->pid = 'new-789a1c89-8b29-4041-b5d0-88d37ea41dff';
  $pane->panel = 'middle';
  $pane->type = 'views';
  $pane->subtype = 'foodandwine_search';
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
  $pane->uuid = '789a1c89-8b29-4041-b5d0-88d37ea41dff';
  $display->content['new-789a1c89-8b29-4041-b5d0-88d37ea41dff'] = $pane;
  $display->panels['middle'][0] = 'new-789a1c89-8b29-4041-b5d0-88d37ea41dff';
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
  $pages['search_page'] = $page;

  return $pages;

}
