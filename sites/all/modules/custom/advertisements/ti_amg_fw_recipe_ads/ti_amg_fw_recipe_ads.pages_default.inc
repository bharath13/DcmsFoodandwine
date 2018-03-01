<?php
/**
 * @file
 * ti_amg_fw_recipe_ads.pages_default.inc
 */

/**
 * Implements hook_default_page_manager_handlers().
 */
function ti_amg_fw_recipe_ads_default_page_manager_handlers() {
  $export = array();

  $handler = new stdClass();
  $handler->disabled = FALSE; /* Edit this to true to make a default handler disabled initially */
  $handler->api_version = 1;
  $handler->name = 'node_view__recipe';
  $handler->task = 'node_view';
  $handler->subtask = '';
  $handler->handler = 'panel_context';
  $handler->weight = -9;
  $handler->conf = array(
    'title' => 'Recipe',
    'no_blocks' => 1,
    'pipeline' => 'standard',
    'body_classes_to_remove' => '',
    'body_classes_to_add' => '',
    'css_id' => '',
    'css' => '',
    'contexts' => array(),
    'relationships' => array(),
    'name' => 'recipe',
    'access' => array(
      'plugins' => array(
        0 => array(
          'name' => 'node_type',
          'settings' => array(
            'type' => array(
              'recipe' => 'recipe',
            ),
          ),
          'context' => 'argument_entity_id:node_1',
          'not' => FALSE,
        ),
      ),
      'logic' => 'and',
    ),
    'timeinc_ad_enable' => 1,
    'adFactory' => array(
      'setZone' => 'recipes',
      'setChannel' => '[tgx:ad-channel]',
      'setSubchannel' => '[tgx:ad-subchannel]',
      'setArticleId' => '',
      'setContentType' => '[node:type]',
      'setPackageId' => '',
      'setContentPage' => FALSE,
      'setChannelPage' => FALSE,
      'setParam' => array(
        'site' => 'fw',
        'ptype' => 'content',
        'nid' => '%node:nid',
        'theme' => '[node:theme]',
        'tags' => '[node:tags]',
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
  $display->title = '%node:title';
  $display->uuid = 'c8e18c52-5081-4345-9949-5c3cecd2fccd';
  $display->storage_type = 'page_manager';
  $display->storage_id = 'node_view__recipe';
  $display->content = array();
  $display->panels = array();
  $pane = new stdClass();
  $pane->pid = 'new-a19ce053-6eba-4690-a569-8786ec3404ce';
  $pane->panel = 'middle';
  $pane->type = 'node_content';
  $pane->subtype = 'node_content';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'links' => 0,
    'no_extras' => 0,
    'override_title' => 1,
    'override_title_text' => '',
    'identifier' => '',
    'link' => 0,
    'leave_node_title' => 1,
    'build_mode' => 'full',
    'context' => 'argument_entity_id:node_1',
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
  $pane->uuid = 'a19ce053-6eba-4690-a569-8786ec3404ce';
  $display->content['new-a19ce053-6eba-4690-a569-8786ec3404ce'] = $pane;
  $display->panels['middle'][0] = 'new-a19ce053-6eba-4690-a569-8786ec3404ce';
  $pane = new stdClass();
  $pane->pid = 'new-8f27c269-2a54-41fe-925b-5510295680c2';
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
  $pane->uuid = '8f27c269-2a54-41fe-925b-5510295680c2';
  $display->content['new-8f27c269-2a54-41fe-925b-5510295680c2'] = $pane;
  $display->panels['middle'][1] = 'new-8f27c269-2a54-41fe-925b-5510295680c2';
  $pane = new stdClass();
  $pane->pid = 'new-d72bc6b9-6240-4902-a39d-798d462ce360';
  $pane->panel = 'middle';
  $pane->type = 'panels_mini';
  $pane->subtype = 'mobile_102x1_ad';
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
  $pane->uuid = 'd72bc6b9-6240-4902-a39d-798d462ce360';
  $display->content['new-d72bc6b9-6240-4902-a39d-798d462ce360'] = $pane;
  $display->panels['middle'][2] = 'new-d72bc6b9-6240-4902-a39d-798d462ce360';
  $pane = new stdClass();
  $pane->pid = 'new-f80768e1-c1ca-4202-8f7c-c945370a523f';
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
  $pane->position = 3;
  $pane->locks = array();
  $pane->uuid = 'f80768e1-c1ca-4202-8f7c-c945370a523f';
  $display->content['new-f80768e1-c1ca-4202-8f7c-c945370a523f'] = $pane;
  $display->panels['middle'][3] = 'new-f80768e1-c1ca-4202-8f7c-c945370a523f';
  $pane = new stdClass();
  $pane->pid = 'new-16875f9b-4bab-4f13-b74d-2b63e55c9c0d';
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
  $pane->position = 4;
  $pane->locks = array();
  $pane->uuid = '16875f9b-4bab-4f13-b74d-2b63e55c9c0d';
  $display->content['new-16875f9b-4bab-4f13-b74d-2b63e55c9c0d'] = $pane;
  $display->panels['middle'][4] = 'new-16875f9b-4bab-4f13-b74d-2b63e55c9c0d';
  $pane = new stdClass();
  $pane->pid = 'new-976bd412-6013-42a0-8bb6-ec35827db768';
  $pane->panel = 'middle';
  $pane->type = 'panels_mini';
  $pane->subtype = 'device_multi_ad';
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
  $pane->uuid = '976bd412-6013-42a0-8bb6-ec35827db768';
  $display->content['new-976bd412-6013-42a0-8bb6-ec35827db768'] = $pane;
  $display->panels['middle'][5] = 'new-976bd412-6013-42a0-8bb6-ec35827db768';
  $pane = new stdClass();
  $pane->pid = 'new-028c8166-def3-4c8f-b150-821c72aaa66a';
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
  $pane->position = 6;
  $pane->locks = array();
  $pane->uuid = '028c8166-def3-4c8f-b150-821c72aaa66a';
  $display->content['new-028c8166-def3-4c8f-b150-821c72aaa66a'] = $pane;
  $display->panels['middle'][6] = 'new-028c8166-def3-4c8f-b150-821c72aaa66a';
  $pane = new stdClass();
  $pane->pid = 'new-daf98399-0607-4ae2-81ca-b471ace0b3a8';
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
  $pane->position = 7;
  $pane->locks = array();
  $pane->uuid = 'daf98399-0607-4ae2-81ca-b471ace0b3a8';
  $display->content['new-daf98399-0607-4ae2-81ca-b471ace0b3a8'] = $pane;
  $display->panels['middle'][7] = 'new-daf98399-0607-4ae2-81ca-b471ace0b3a8';
  $pane = new stdClass();
  $pane->pid = 'new-68333183-af37-44ac-b69d-4f73908449a7';
  $pane->panel = 'middle';
  $pane->type = 'panels_mini';
  $pane->subtype = 'device_300x100';
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
  $pane->uuid = '68333183-af37-44ac-b69d-4f73908449a7';
  $display->content['new-68333183-af37-44ac-b69d-4f73908449a7'] = $pane;
  $display->panels['middle'][8] = 'new-68333183-af37-44ac-b69d-4f73908449a7';
  $pane = new stdClass();
  $pane->pid = 'new-b835a47e-0bc7-4b34-8ac0-f8e225eb6060';
  $pane->panel = 'middle';
  $pane->type = 'tgx_ad';
  $pane->subtype = 'tgx_ad';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'admin_title' => 'Gum Gum Ads',
    'ad_static_id' => 'gumgum_ad_1x6',
    'ad_slug' => '',
    'ad_type' => 'regular',
    'ad_render_weight' => '90',
    'ad_cmtype' => '',
    'ad_sizes' => array(
      720 => '1x6',
      1000 => '1x6',
    ),
    'ad_companion' => 0,
    'getAd' => array(
      'setZone' => '',
      'setPosition' => '',
      'setParam' => '',
    ),
    'ad_sticky' => 0,
    'ad_time_delay' => '',
    'sticky_ajax_disable' => 0,
    'advanced' => array(
      'ad_refresh' => 0,
      'ad_relocate_position' => 'append',
      'ad_condition' => '',
      'ad_relocate_selector' => '#gumgum_ad_holder',
      'ad_relocate_remove' => 1,
    ),
    '3rd_party_vendor' => array(
      'add_script' => 0,
      'script_type' => 'external',
      'attr_async' => 0,
      'script' => '',
    ),
    'lazy_load' => 0,
    'lazy_load_viewport_offset' => '0',
    'universal_ad_logic' => array(
      'use_universal_ad_logic' => 0,
      'ad_placements' => '',
      'pixels_between' => '600',
      'outbrain_selector' => '',
      'outbrain_offset_pixel' => '200',
      'selector' => '',
      'force_ad_position' => '0',
      'readmorebuttonselector' => '',
    ),
    'announce_in_view' => 0,
    'hide_ad' => array(
      'hide_when_ads_in_view' => 0,
      'hide_selector' => '',
      'minimum_time_to_show_ad' => '',
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
  $pane->position = 9;
  $pane->locks = array();
  $pane->uuid = 'b835a47e-0bc7-4b34-8ac0-f8e225eb6060';
  $display->content['new-b835a47e-0bc7-4b34-8ac0-f8e225eb6060'] = $pane;
  $display->panels['middle'][9] = 'new-b835a47e-0bc7-4b34-8ac0-f8e225eb6060';
  $pane = new stdClass();
  $pane->pid = 'new-b1fe07a0-99ac-404c-a28d-695743cb2309';
  $pane->panel = 'middle';
  $pane->type = 'panels_mini';
  $pane->subtype = 'generic_ads';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'context' => array(
      0 => 'argument_entity_id:node_1',
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
  $pane->position = 10;
  $pane->locks = array();
  $pane->uuid = 'b1fe07a0-99ac-404c-a28d-695743cb2309';
  $display->content['new-b1fe07a0-99ac-404c-a28d-695743cb2309'] = $pane;
  $display->panels['middle'][10] = 'new-b1fe07a0-99ac-404c-a28d-695743cb2309';
  $pane = new stdClass();
  $pane->pid = 'new-b3869064-7814-4b32-991e-ffce7ecccfae';
  $pane->panel = 'middle';
  $pane->type = 'timeinc_third_party_panel_plugin';
  $pane->subtype = 'timeinc_third_party_panel_plugin';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'third_party_supported_breakpoint' => '0,728,970',
    'third_party_title' => 'Recipe Yieldmo',
    'third_party_insert_content' => '<breakpoint>0</breakpoint><div id="ym_1202104734725815282" class="ym"></div><script type="text/javascript">(function(e,t){if(t._ym===void 0){t._ym="";var m=e.createElement("script");m.type="text/javascript",m.async=!0,m.src="//static.yieldmo.com/ym.m4.js",(e.getElementsByTagName("head")[0]||e.getElementsByTagName("body")[0]).appendChild(m)}else t._ym instanceof String||void 0===t._ym.chkPls||t._ym.chkPls()})(document,window);</script>
',
    'third_party_insert_selector' => array(
      0 => 'after:jQuery(\'#outbrain-wrapper-mobile\')',
    ),
    'third_party_insert_condition' => '',
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
  $pane->position = 11;
  $pane->locks = array();
  $pane->uuid = 'b3869064-7814-4b32-991e-ffce7ecccfae';
  $display->content['new-b3869064-7814-4b32-991e-ffce7ecccfae'] = $pane;
  $display->panels['middle'][11] = 'new-b3869064-7814-4b32-991e-ffce7ecccfae';
  $pane = new stdClass();
  $pane->pid = 'new-427609b8-d627-44a9-ae17-b17d08c13df3';
  $pane->panel = 'middle';
  $pane->type = 'panels_mini';
  $pane->subtype = 'inline_teads_ad';
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
  $pane->position = 12;
  $pane->locks = array();
  $pane->uuid = '427609b8-d627-44a9-ae17-b17d08c13df3';
  $display->content['new-427609b8-d627-44a9-ae17-b17d08c13df3'] = $pane;
  $display->panels['middle'][12] = 'new-427609b8-d627-44a9-ae17-b17d08c13df3';
  $pane = new stdClass();
  $pane->pid = 'new-42d29fbb-4f5e-40c3-8302-56312339e4b7';
  $pane->panel = 'middle';
  $pane->type = 'panels_mini';
  $pane->subtype = 'desktop_inline_teads_ad';
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
  $pane->position = 13;
  $pane->locks = array();
  $pane->uuid = '42d29fbb-4f5e-40c3-8302-56312339e4b7';
  $display->content['new-42d29fbb-4f5e-40c3-8302-56312339e4b7'] = $pane;
  $display->panels['middle'][13] = 'new-42d29fbb-4f5e-40c3-8302-56312339e4b7';
  $display->hide_title = PANELS_TITLE_NONE;
  $display->title_pane = 'new-a19ce053-6eba-4690-a569-8786ec3404ce';
  $handler->conf['display'] = $display;
  $export['node_view__recipe'] = $handler;

  return $export;
}
