<?php
/**
 * @file
 * ti_amg_fw_homepage_responsive_ads.pages_default.inc
 */

/**
 * Implements hook_default_page_manager_handlers().
 */
function ti_amg_fw_homepage_responsive_ads_default_page_manager_handlers() {
  $export = array();

  $handler = new stdClass();
  $handler->disabled = FALSE; /* Edit this to true to make a default handler disabled initially */
  $handler->api_version = 1;
  $handler->name = 'node_view__homepage-responsive';
  $handler->task = 'node_view';
  $handler->subtask = '';
  $handler->handler = 'panel_context';
  $handler->weight = -3;
  $handler->conf = array(
    'title' => 'Homepage Responsive',
    'no_blocks' => 1,
    'pipeline' => 'standard',
    'body_classes_to_remove' => '',
    'body_classes_to_add' => '',
    'css_id' => '',
    'css' => '',
    'contexts' => array(),
    'relationships' => array(),
    'name' => 'homepage-responsive',
    'access' => array(
      'plugins' => array(
        0 => array(
          'name' => 'node_type',
          'settings' => array(
            'type' => array(
              'home_page_responsive' => 'home_page_responsive',
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
      'setZone' => 'homepage',
      'setChannel' => 'homepage',
      'setSubchannel' => '',
      'setArticleId' => '',
      'setContentType' => '',
      'setPackageId' => '',
      'setContentPage' => FALSE,
      'setChannelPage' => FALSE,
      'setParam' => array(
        'site' => 'fw',
        'ptype' => 'main',
        'nid' => '%node:nid',
        '%node:field_ad_keys' => '%node:field_ad_value',
        'etype' => '[node:fw_custom_ad_etype_tag]',
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
  $display->uuid = '2af33daa-d8b5-4d96-a213-dd4fb56b1902';
  $display->storage_type = 'page_manager';
  $display->storage_id = 'node_view__homepage-responsive';
  $display->content = array();
  $display->panels = array();
  $pane = new stdClass();
  $pane->pid = 'new-33fdf377-d2e1-49b4-b268-0a22190d8e3c';
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
  $pane->uuid = '33fdf377-d2e1-49b4-b268-0a22190d8e3c';
  $display->content['new-33fdf377-d2e1-49b4-b268-0a22190d8e3c'] = $pane;
  $display->panels['middle'][0] = 'new-33fdf377-d2e1-49b4-b268-0a22190d8e3c';
  $pane = new stdClass();
  $pane->pid = 'new-0d41a071-61dc-4845-a45d-a58235553544';
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
  $pane->uuid = '0d41a071-61dc-4845-a45d-a58235553544';
  $display->content['new-0d41a071-61dc-4845-a45d-a58235553544'] = $pane;
  $display->panels['middle'][1] = 'new-0d41a071-61dc-4845-a45d-a58235553544';
  $pane = new stdClass();
  $pane->pid = 'new-06741da3-fcb9-4bfd-83d2-df10e0620239';
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
  $pane->position = 2;
  $pane->locks = array();
  $pane->uuid = '06741da3-fcb9-4bfd-83d2-df10e0620239';
  $display->content['new-06741da3-fcb9-4bfd-83d2-df10e0620239'] = $pane;
  $display->panels['middle'][2] = 'new-06741da3-fcb9-4bfd-83d2-df10e0620239';
  $pane = new stdClass();
  $pane->pid = 'new-dd32377e-b133-4382-9654-ae387d26ef71';
  $pane->panel = 'middle';
  $pane->type = 'panels_mini';
  $pane->subtype = 'desktop_first_rightrail_ad';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'override_title' => 0,
    'override_title_text' => '',
    'override_title_heading' => 'span',
  );
  $pane->cache = array();
  $pane->style = array(
    'settings' => NULL,
  );
  $pane->css = array();
  $pane->extras = array();
  $pane->position = 3;
  $pane->locks = array();
  $pane->uuid = 'dd32377e-b133-4382-9654-ae387d26ef71';
  $display->content['new-dd32377e-b133-4382-9654-ae387d26ef71'] = $pane;
  $display->panels['middle'][3] = 'new-dd32377e-b133-4382-9654-ae387d26ef71';
  $pane = new stdClass();
  $pane->pid = 'new-da3ad3c7-744f-4284-bb4a-26c8478e80de';
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
  $pane->position = 4;
  $pane->locks = array();
  $pane->uuid = 'da3ad3c7-744f-4284-bb4a-26c8478e80de';
  $display->content['new-da3ad3c7-744f-4284-bb4a-26c8478e80de'] = $pane;
  $display->panels['middle'][4] = 'new-da3ad3c7-744f-4284-bb4a-26c8478e80de';
  $pane = new stdClass();
  $pane->pid = 'new-ce0133ed-efe3-4ec7-8b6e-b0660e34423c';
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
  $pane->position = 5;
  $pane->locks = array();
  $pane->uuid = 'ce0133ed-efe3-4ec7-8b6e-b0660e34423c';
  $display->content['new-ce0133ed-efe3-4ec7-8b6e-b0660e34423c'] = $pane;
  $display->panels['middle'][5] = 'new-ce0133ed-efe3-4ec7-8b6e-b0660e34423c';
  $pane = new stdClass();
  $pane->pid = 'new-3d83455b-5079-4d7d-95f4-d8af86a1a0ce';
  $pane->panel = 'middle';
  $pane->type = 'panels_mini';
  $pane->subtype = 'device_second_300x250_ad';
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
  $pane->uuid = '3d83455b-5079-4d7d-95f4-d8af86a1a0ce';
  $display->content['new-3d83455b-5079-4d7d-95f4-d8af86a1a0ce'] = $pane;
  $display->panels['middle'][6] = 'new-3d83455b-5079-4d7d-95f4-d8af86a1a0ce';
  $pane = new stdClass();
  $pane->pid = 'new-7fcfa5c7-e6ed-46ae-a36a-e22286301067';
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
  $pane->uuid = '7fcfa5c7-e6ed-46ae-a36a-e22286301067';
  $display->content['new-7fcfa5c7-e6ed-46ae-a36a-e22286301067'] = $pane;
  $display->panels['middle'][7] = 'new-7fcfa5c7-e6ed-46ae-a36a-e22286301067';
  $pane = new stdClass();
  $pane->pid = 'new-046e9e2f-5d35-475d-9bb3-39c5176a8a8a';
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
  $pane->uuid = '046e9e2f-5d35-475d-9bb3-39c5176a8a8a';
  $display->content['new-046e9e2f-5d35-475d-9bb3-39c5176a8a8a'] = $pane;
  $display->panels['middle'][8] = 'new-046e9e2f-5d35-475d-9bb3-39c5176a8a8a';
  $pane = new stdClass();
  $pane->pid = 'new-8eb024bc-a1e1-4bfb-ac37-0ce1b0ff88dc';
  $pane->panel = 'middle';
  $pane->type = 'tgx_ad';
  $pane->subtype = 'tgx_ad';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'admin_title' => 'Inline Nativo Ad 480x100, 1x5',
    'ad_static_id' => 'nativo_ad_1',
    'ad_slug' => '',
    'ad_type' => 'regular',
    'ad_render_weight' => '0',
    'ad_cmtype' => '',
    'ad_sizes' => array(
      0 => '480x100,1x5',
      700 => '480x100,1x5',
      1000 => '480x100,1x5',
    ),
    'ad_companion' => 0,
    'getAd' => array(
      'setZone' => '',
      'setPosition' => '1',
      'setParam' => '',
    ),
    'ad_sticky' => 0,
    'ad_time_delay' => '',
    'end_sticky_based_selector' => '',
    'override_top_element_height' => '',
    'sticky_ajax_disable' => 0,
    'advanced' => array(
      'ad_refresh' => 0,
      'ad_relocate_position' => 'append',
      'ad_condition' => '',
      'ad_relocate_selector' => '.nativo_ad_1',
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
    'lazy_load_based_on_selector' => '',
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
  $pane->uuid = '8eb024bc-a1e1-4bfb-ac37-0ce1b0ff88dc';
  $display->content['new-8eb024bc-a1e1-4bfb-ac37-0ce1b0ff88dc'] = $pane;
  $display->panels['middle'][9] = 'new-8eb024bc-a1e1-4bfb-ac37-0ce1b0ff88dc';
  $pane = new stdClass();
  $pane->pid = 'new-95a2dbc4-b032-44e2-a5ec-cbe308b3d075';
  $pane->panel = 'middle';
  $pane->type = 'tgx_ad';
  $pane->subtype = 'tgx_ad';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'admin_title' => 'Inline Nativo Ad 481x100, 1x5',
    'ad_static_id' => 'nativo_ad_2',
    'ad_slug' => '',
    'ad_type' => 'regular',
    'ad_render_weight' => '0',
    'ad_cmtype' => '',
    'ad_sizes' => array(
      0 => '481x100,1x5',
      700 => '481x100,1x5',
      1000 => '481x100,1x5',
    ),
    'ad_companion' => 0,
    'getAd' => array(
      'setZone' => '',
      'setPosition' => '1',
      'setParam' => '',
    ),
    'ad_sticky' => 0,
    'ad_time_delay' => '',
    'end_sticky_based_selector' => '',
    'override_top_element_height' => '',
    'sticky_ajax_disable' => 0,
    'advanced' => array(
      'ad_refresh' => 0,
      'ad_relocate_position' => 'append',
      'ad_condition' => '',
      'ad_relocate_selector' => '.nativo_ad_2',
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
    'lazy_load_based_on_selector' => '',
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
  $pane->position = 10;
  $pane->locks = array();
  $pane->uuid = '95a2dbc4-b032-44e2-a5ec-cbe308b3d075';
  $display->content['new-95a2dbc4-b032-44e2-a5ec-cbe308b3d075'] = $pane;
  $display->panels['middle'][10] = 'new-95a2dbc4-b032-44e2-a5ec-cbe308b3d075';
  $pane = new stdClass();
  $pane->pid = 'new-97924d44-1e3f-4690-83ba-f7693659557d';
  $pane->panel = 'middle';
  $pane->type = 'tgx_ad';
  $pane->subtype = 'tgx_ad';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'admin_title' => 'Inline Nativo Ad 482x100, 1x5',
    'ad_static_id' => 'nativo_ad_3',
    'ad_slug' => '',
    'ad_type' => 'regular',
    'ad_render_weight' => '0',
    'ad_cmtype' => '',
    'ad_sizes' => array(
      0 => '482x100,1x5',
      700 => '482x100,1x5',
      1000 => '482x100,1x5',
    ),
    'ad_companion' => 0,
    'getAd' => array(
      'setZone' => '',
      'setPosition' => '1',
      'setParam' => '',
    ),
    'ad_sticky' => 0,
    'ad_time_delay' => '',
    'end_sticky_based_selector' => '',
    'override_top_element_height' => '',
    'sticky_ajax_disable' => 0,
    'advanced' => array(
      'ad_refresh' => 0,
      'ad_relocate_position' => 'append',
      'ad_condition' => '',
      'ad_relocate_selector' => '.nativo_ad_3',
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
    'lazy_load_based_on_selector' => '',
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
  $pane->position = 11;
  $pane->locks = array();
  $pane->uuid = '97924d44-1e3f-4690-83ba-f7693659557d';
  $display->content['new-97924d44-1e3f-4690-83ba-f7693659557d'] = $pane;
  $display->panels['middle'][11] = 'new-97924d44-1e3f-4690-83ba-f7693659557d';
  $pane = new stdClass();
  $pane->pid = 'new-c2dc561b-61fb-4a16-96c8-bc8c63495988';
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
  $pane->position = 12;
  $pane->locks = array();
  $pane->uuid = 'c2dc561b-61fb-4a16-96c8-bc8c63495988';
  $display->content['new-c2dc561b-61fb-4a16-96c8-bc8c63495988'] = $pane;
  $display->panels['middle'][12] = 'new-c2dc561b-61fb-4a16-96c8-bc8c63495988';
  $pane = new stdClass();
  $pane->pid = 'new-d2d519cb-80ef-4cd5-92c1-2aff85d1bbd9';
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
  $pane->position = 13;
  $pane->locks = array();
  $pane->uuid = 'd2d519cb-80ef-4cd5-92c1-2aff85d1bbd9';
  $display->content['new-d2d519cb-80ef-4cd5-92c1-2aff85d1bbd9'] = $pane;
  $display->panels['middle'][13] = 'new-d2d519cb-80ef-4cd5-92c1-2aff85d1bbd9';
  $pane = new stdClass();
  $pane->pid = 'new-9a3c4956-e394-4b78-95bb-ec6eaec340ec';
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
  $pane->position = 14;
  $pane->locks = array();
  $pane->uuid = '9a3c4956-e394-4b78-95bb-ec6eaec340ec';
  $display->content['new-9a3c4956-e394-4b78-95bb-ec6eaec340ec'] = $pane;
  $display->panels['middle'][14] = 'new-9a3c4956-e394-4b78-95bb-ec6eaec340ec';
  $pane = new stdClass();
  $pane->pid = 'new-e753265e-9f4e-4ce2-9ce2-11f9f908c2e5';
  $pane->panel = 'middle';
  $pane->type = 'timeinc_third_party_panel_plugin';
  $pane->subtype = 'timeinc_third_party_panel_plugin';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'third_party_supported_breakpoint' => '0,728,970',
    'third_party_title' => 'Homepage Yieldmo',
    'third_party_insert_content' => '<breakpoint>0</breakpoint><div id="ym_1202102768209607567" class="ym"></div><script type="text/javascript">(function(e,t){if(t._ym===void 0){t._ym="";var m=e.createElement("script");m.type="text/javascript",m.async=!0,m.src="//static.yieldmo.com/ym.m4.js",(e.getElementsByTagName("head")[0]||e.getElementsByTagName("body")[0]).appendChild(m)}else t._ym instanceof String||void 0===t._ym.chkPls||t._ym.chkPls()})(document,window);</script>
',
    'third_party_insert_selector' => '',
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
  $pane->position = 15;
  $pane->locks = array();
  $pane->uuid = 'e753265e-9f4e-4ce2-9ce2-11f9f908c2e5';
  $display->content['new-e753265e-9f4e-4ce2-9ce2-11f9f908c2e5'] = $pane;
  $display->panels['middle'][15] = 'new-e753265e-9f4e-4ce2-9ce2-11f9f908c2e5';
  $display->hide_title = PANELS_TITLE_NONE;
  $display->title_pane = 'new-33fdf377-d2e1-49b4-b268-0a22190d8e3c';
  $handler->conf['display'] = $display;
  $export['node_view__homepage-responsive'] = $handler;

  return $export;
}
