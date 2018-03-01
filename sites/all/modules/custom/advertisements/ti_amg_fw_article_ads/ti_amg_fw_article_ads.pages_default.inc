<?php
/**
 * @file
 * ti_amg_fw_article_ads.pages_default.inc
 */

/**
 * Implements hook_default_page_manager_handlers().
 */
function ti_amg_fw_article_ads_default_page_manager_handlers() {
  $export = array();

  $handler = new stdClass();
  $handler->disabled = FALSE; /* Edit this to true to make a default handler disabled initially */
  $handler->api_version = 1;
  $handler->name = 'node_view__panel_context_79020d91-4813-409b-bfe1-bcb9ddf40761';
  $handler->task = 'node_view';
  $handler->subtask = '';
  $handler->handler = 'panel_context';
  $handler->weight = 2;
  $handler->conf = array(
    'title' => 'Article',
    'no_blocks' => 1,
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
          'name' => 'node_type',
          'settings' => array(
            'type' => array(
              'article' => 'article',
            ),
          ),
          'context' => 'argument_entity_id:node_1',
          'not' => FALSE,
        ),
        1 => array(
          'name' => 'theme',
          'settings' => array(
            'theme' => 'fwresponsive',
          ),
          'not' => FALSE,
        ),
      ),
      'logic' => 'and',
    ),
    'timeinc_ad_enable' => 1,
    'adFactory' => array(
      'setZone' => 'articles',
      'setChannel' => '[tgx:ad-channel]',
      'setSubchannel' => '[tgx:ad-subchannel]',
      'setArticleId' => '',
      'setContentType' => '[node:type]',
      'setPackageId' => '',
      'setContentPage' => FALSE,
      'setChannelPage' => FALSE,
      'setParam' => array(
        'ptype' => 'content',
        'site' => 'fw',
        'nid' => '%node:nid',
        'tags' => '[node:tags]',
        'theme' => '[node:theme]',
        '%node:field_ad_keys' => '%node:field_ad_value',
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
  $display->uuid = 'e41e3d26-5d58-45e2-a958-bf2b10e88ea9';
  $display->storage_type = 'page_manager';
  $display->storage_id = 'node_view__panel_context_79020d91-4813-409b-bfe1-bcb9ddf40761';
  $display->content = array();
  $display->panels = array();
  $pane = new stdClass();
  $pane->pid = 'new-545754f3-77cc-4b7d-a399-6cf4883f9c91';
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
  $pane->uuid = '545754f3-77cc-4b7d-a399-6cf4883f9c91';
  $display->content['new-545754f3-77cc-4b7d-a399-6cf4883f9c91'] = $pane;
  $display->panels['middle'][0] = 'new-545754f3-77cc-4b7d-a399-6cf4883f9c91';
  $pane = new stdClass();
  $pane->pid = 'new-fbd5e32e-1f05-4c53-868c-57a70f502d21';
  $pane->panel = 'middle';
  $pane->type = 'tgx_ad';
  $pane->subtype = 'tgx_ad';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'admin_title' => 'Leaderboard Ad (Top Ad)',
    'ad_static_id' => 'multi_ad_leaderboard',
    'ad_slug' => '',
    'ad_type' => 'regular',
    'ad_render_weight' => '-100',
    'ad_cmtype' => '',
    'ad_sizes' => array(
      0 => '',
      750 => '728x90',
      1000 => '101x1, 970x250, 970x90, 970x66, 728x90',
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
      'ad_relocate_selector' => '#leaderboard_ad_holder',
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
      'minimum_time_to_show_ad' => '2000',
    ),
    'override_title' => 1,
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
  $pane->uuid = 'fbd5e32e-1f05-4c53-868c-57a70f502d21';
  $display->content['new-fbd5e32e-1f05-4c53-868c-57a70f502d21'] = $pane;
  $display->panels['middle'][1] = 'new-fbd5e32e-1f05-4c53-868c-57a70f502d21';
  $pane = new stdClass();
  $pane->pid = 'new-54eb9f10-6efc-4b83-84f2-2e8b394bbe0d';
  $pane->panel = 'middle';
  $pane->type = 'tgx_ad';
  $pane->subtype = 'tgx_ad';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'admin_title' => 'Mobile Leaderboard',
    'ad_static_id' => 'mobile_ad_leaderboard',
    'ad_slug' => '',
    'ad_type' => 'regular',
    'ad_render_weight' => '-100',
    'ad_cmtype' => '',
    'ad_sizes' => array(
      0 => '320x50, 300x50',
      750 => '',
      1000 => '',
    ),
    'ad_companion' => 0,
    'getAd' => array(
      'setZone' => '',
      'setPosition' => '1',
      'setParam' => '',
    ),
    'ad_sticky' => 0,
    'ad_time_delay' => '',
    'sticky_ajax_disable' => 0,
    'advanced' => array(
      'ad_refresh' => 0,
      'ad_relocate_position' => 'append',
      'ad_condition' => '',
      'ad_relocate_selector' => '#leaderboard_ad_holder',
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
      'hide_when_ads_in_view' => TRUE,
      'hide_selector' => '',
      'minimum_time_to_show_ad' => '2000',
    ),
    'override_title' => 1,
    'override_title_text' => '',
    'override_title_heading' => 'h2',
  );
  $pane->cache = array();
  $pane->style = array(
    'settings' => NULL,
  );
  $pane->css = array(
    'css_id' => '',
    'css_class' => 'ad--mobile-leaderboard',
  );
  $pane->extras = array();
  $pane->position = 2;
  $pane->locks = array();
  $pane->uuid = '54eb9f10-6efc-4b83-84f2-2e8b394bbe0d';
  $display->content['new-54eb9f10-6efc-4b83-84f2-2e8b394bbe0d'] = $pane;
  $display->panels['middle'][2] = 'new-54eb9f10-6efc-4b83-84f2-2e8b394bbe0d';
  $pane = new stdClass();
  $pane->pid = 'new-86967d97-00d6-4a4a-b4ad-cd4f6d04b81f';
  $pane->panel = 'middle';
  $pane->type = 'tgx_ad';
  $pane->subtype = 'tgx_ad';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'admin_title' => 'Desktop : Sidebar MultiAd 300x250',
    'ad_static_id' => 'ad_multiad_300x250',
    'ad_slug' => '',
    'ad_type' => 'regular',
    'ad_render_weight' => '0',
    'ad_cmtype' => '',
    'ad_sizes' => array(
      1000 => '300x1050,300x600,300x250',
    ),
    'ad_companion' => 0,
    'getAd' => array(
      'setZone' => '',
      'setPosition' => '1',
      'setParam' => '',
    ),
    'ad_sticky' => 0,
    'ad_time_delay' => '',
    'sticky_ajax_disable' => 0,
    'advanced' => array(
      'ad_refresh' => 0,
      'ad_relocate_position' => 'append',
      'ad_condition' => '',
      'ad_relocate_selector' => '#ad_multiad_300x250_wrapper',
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
    'override_title' => 1,
    'override_title_text' => 'Advertisement',
    'override_title_heading' => 'span',
  );
  $pane->cache = array();
  $pane->style = array(
    'settings' => NULL,
  );
  $pane->css = array(
    'css_id' => '',
    'css_class' => '',
  );
  $pane->extras = array();
  $pane->position = 3;
  $pane->locks = array();
  $pane->uuid = '86967d97-00d6-4a4a-b4ad-cd4f6d04b81f';
  $display->content['new-86967d97-00d6-4a4a-b4ad-cd4f6d04b81f'] = $pane;
  $display->panels['middle'][3] = 'new-86967d97-00d6-4a4a-b4ad-cd4f6d04b81f';
  $pane = new stdClass();
  $pane->pid = 'new-3da69a1a-197f-45cb-8f40-c0fb88336594';
  $pane->panel = 'middle';
  $pane->type = 'tgx_ad';
  $pane->subtype = 'tgx_ad';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'admin_title' => 'Mobile & Tablet : 300x250 Ad',
    'ad_static_id' => 'device_ad_300_250',
    'ad_slug' => '',
    'ad_type' => 'regular',
    'ad_render_weight' => '0',
    'ad_cmtype' => '',
    'ad_sizes' => array(
      0 => '300x250',
      750 => '300x250,300x600',
      1000 => '',
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
      'ad_relocate_selector' => '#device_multiad_300x250_wrapper',
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
    'announce_in_view' => TRUE,
    'hide_ad' => array(
      'hide_when_ads_in_view' => 0,
      'hide_selector' => '',
      'minimum_time_to_show_ad' => '',
    ),
    'override_title' => 1,
    'override_title_text' => 'Advertisement',
    'override_title_heading' => 'span',
  );
  $pane->cache = array();
  $pane->style = array(
    'settings' => NULL,
  );
  $pane->css = array();
  $pane->extras = array();
  $pane->position = 4;
  $pane->locks = array();
  $pane->uuid = '3da69a1a-197f-45cb-8f40-c0fb88336594';
  $display->content['new-3da69a1a-197f-45cb-8f40-c0fb88336594'] = $pane;
  $display->panels['middle'][4] = 'new-3da69a1a-197f-45cb-8f40-c0fb88336594';
  $pane = new stdClass();
  $pane->pid = 'new-8a713c34-6fd5-4be6-ae5d-b3f828255a3d';
  $pane->panel = 'middle';
  $pane->type = 'tgx_ad';
  $pane->subtype = 'tgx_ad';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'admin_title' => 'Desktop : Sidebar Ad 300x250',
    'ad_static_id' => 'ad_300x250_2',
    'ad_slug' => '',
    'ad_type' => 'regular',
    'ad_render_weight' => '0',
    'ad_cmtype' => '',
    'ad_sizes' => array(
      1000 => '300x250',
    ),
    'ad_companion' => 0,
    'getAd' => array(
      'setZone' => '',
      'setPosition' => '2',
      'setParam' => '',
    ),
    'ad_sticky' => 0,
    'ad_time_delay' => '',
    'sticky_ajax_disable' => 0,
    'advanced' => array(
      'ad_refresh' => 0,
      'ad_relocate_position' => 'append',
      'ad_condition' => '',
      'ad_relocate_selector' => '#ad_300x250_wrapper',
      'ad_relocate_remove' => 1,
    ),
    '3rd_party_vendor' => array(
      'add_script' => 0,
      'script_type' => 'external',
      'attr_async' => 0,
      'script' => '',
    ),
    'lazy_load' => TRUE,
    'lazy_load_viewport_offset' => '200',
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
    'override_title' => 1,
    'override_title_text' => 'Advertisement',
    'override_title_heading' => 'span',
  );
  $pane->cache = array();
  $pane->style = array(
    'settings' => NULL,
  );
  $pane->css = array();
  $pane->extras = array();
  $pane->position = 5;
  $pane->locks = array();
  $pane->uuid = '8a713c34-6fd5-4be6-ae5d-b3f828255a3d';
  $display->content['new-8a713c34-6fd5-4be6-ae5d-b3f828255a3d'] = $pane;
  $display->panels['middle'][5] = 'new-8a713c34-6fd5-4be6-ae5d-b3f828255a3d';
  $pane = new stdClass();
  $pane->pid = 'new-609f2578-156e-432e-a685-577b3bf9476c';
  $pane->panel = 'middle';
  $pane->type = 'tgx_ad';
  $pane->subtype = 'tgx_ad';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'admin_title' => 'Desktop : Sidebar 300x100',
    'ad_static_id' => 'ad_300x100_1',
    'ad_slug' => '',
    'ad_type' => 'regular',
    'ad_render_weight' => '0',
    'ad_cmtype' => '',
    'ad_sizes' => array(
      0 => '',
      750 => '',
      1000 => '300x100',
    ),
    'ad_companion' => 0,
    'getAd' => array(
      'setZone' => '',
      'setPosition' => '1',
      'setParam' => '',
    ),
    'ad_sticky' => 0,
    'ad_time_delay' => '',
    'sticky_ajax_disable' => 0,
    'advanced' => array(
      'ad_refresh' => 0,
      'ad_relocate_position' => 'append',
      'ad_condition' => '',
      'ad_relocate_selector' => '#ad_300x100_wrapper',
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
  $pane->position = 6;
  $pane->locks = array();
  $pane->uuid = '609f2578-156e-432e-a685-577b3bf9476c';
  $display->content['new-609f2578-156e-432e-a685-577b3bf9476c'] = $pane;
  $display->panels['middle'][6] = 'new-609f2578-156e-432e-a685-577b3bf9476c';
  $pane = new stdClass();
  $pane->pid = 'new-ffae0c2a-ce86-483b-9778-b06fa51f065b';
  $pane->panel = 'middle';
  $pane->type = 'tgx_ad';
  $pane->subtype = 'tgx_ad';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'admin_title' => 'Mobile & Tablet Ad 300x100',
    'ad_static_id' => 'ad_300x100_mobile',
    'ad_slug' => '',
    'ad_type' => 'regular',
    'ad_render_weight' => '0',
    'ad_cmtype' => '',
    'ad_sizes' => array(
      0 => '300x100',
      750 => '300x100',
      1000 => '',
    ),
    'ad_companion' => 0,
    'getAd' => array(
      'setZone' => '',
      'setPosition' => '1',
      'setParam' => '',
    ),
    'ad_sticky' => 0,
    'ad_time_delay' => '',
    'sticky_ajax_disable' => 0,
    'advanced' => array(
      'ad_refresh' => 0,
      'ad_relocate_position' => 'append',
      'ad_condition' => '',
      'ad_relocate_selector' => '#device_ad_300x100_wrapper',
      'ad_relocate_remove' => 1,
    ),
    '3rd_party_vendor' => array(
      'add_script' => 0,
      'script_type' => 'external',
      'attr_async' => 0,
      'script' => '',
    ),
    'lazy_load' => TRUE,
    'lazy_load_viewport_offset' => '200',
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
  $pane->css = array(
    'css_id' => '',
    'css_class' => 'advertisement-nativo-300x100',
  );
  $pane->extras = array();
  $pane->position = 7;
  $pane->locks = array();
  $pane->uuid = 'ffae0c2a-ce86-483b-9778-b06fa51f065b';
  $display->content['new-ffae0c2a-ce86-483b-9778-b06fa51f065b'] = $pane;
  $display->panels['middle'][7] = 'new-ffae0c2a-ce86-483b-9778-b06fa51f065b';
  $pane = new stdClass();
  $pane->pid = 'new-1ff17d50-7160-494b-b785-38a13d33f842';
  $pane->panel = 'middle';
  $pane->type = 'panels_mini';
  $pane->subtype = 'market_place_ads';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'override_title' => 1,
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
  $pane->uuid = '1ff17d50-7160-494b-b785-38a13d33f842';
  $display->content['new-1ff17d50-7160-494b-b785-38a13d33f842'] = $pane;
  $display->panels['middle'][8] = 'new-1ff17d50-7160-494b-b785-38a13d33f842';
  $pane = new stdClass();
  $pane->pid = 'new-9f441217-a8c4-41d3-b230-7c2787f4295a';
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
      'setPosition' => '1',
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
  $pane->uuid = '9f441217-a8c4-41d3-b230-7c2787f4295a';
  $display->content['new-9f441217-a8c4-41d3-b230-7c2787f4295a'] = $pane;
  $display->panels['middle'][9] = 'new-9f441217-a8c4-41d3-b230-7c2787f4295a';
  $pane = new stdClass();
  $pane->pid = 'new-66e4e5d1-1088-4f8b-bdbc-b9bb3e42ff59';
  $pane->panel = 'middle';
  $pane->type = 'tgx_ad';
  $pane->subtype = 'tgx_ad';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'admin_title' => 'Teads AD 5x5',
    'ad_static_id' => 'teads_ad_5x5',
    'ad_slug' => '',
    'ad_type' => 'regular',
    'ad_render_weight' => '100',
    'ad_cmtype' => '',
    'ad_sizes' => array(
      0 => '5x5',
    ),
    'ad_companion' => 0,
    'getAd' => array(
      'setZone' => '',
      'setPosition' => '1',
      'setParam' => '',
    ),
    'ad_sticky' => 0,
    'ad_time_delay' => '',
    'sticky_ajax_disable' => 0,
    'advanced' => array(
      'ad_refresh' => 0,
      'ad_relocate_position' => 'append',
      'ad_condition' => '',
      'ad_relocate_selector' => '#teads_ad_holder',
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
  $pane->position = 10;
  $pane->locks = array();
  $pane->uuid = '66e4e5d1-1088-4f8b-bdbc-b9bb3e42ff59';
  $display->content['new-66e4e5d1-1088-4f8b-bdbc-b9bb3e42ff59'] = $pane;
  $display->panels['middle'][10] = 'new-66e4e5d1-1088-4f8b-bdbc-b9bb3e42ff59';
  $pane = new stdClass();
  $pane->pid = 'new-76c92989-a346-49b2-988e-0ab402faa1e3';
  $pane->panel = 'middle';
  $pane->type = 'timeinc_third_party_panel_plugin';
  $pane->subtype = 'timeinc_third_party_panel_plugin';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'third_party_supported_breakpoint' => '0,728,970',
    'third_party_title' => 'Article Yieldmo',
    'third_party_insert_content' => '<breakpoint>0</breakpoint><div id="ym_1202107329892694202" class="ym"></div><script type="text/javascript">(function(e,t){if(t._ym===void 0){t._ym="";var m=e.createElement("script");m.type="text/javascript",m.async=!0,m.src="//static.yieldmo.com/ym.m4.js",(e.getElementsByTagName("head")[0]||e.getElementsByTagName("body")[0]).appendChild(m)}else t._ym instanceof String||void 0===t._ym.chkPls||t._ym.chkPls()})(document,window);</script>
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
  $pane->position = 11;
  $pane->locks = array();
  $pane->uuid = '76c92989-a346-49b2-988e-0ab402faa1e3';
  $display->content['new-76c92989-a346-49b2-988e-0ab402faa1e3'] = $pane;
  $display->panels['middle'][11] = 'new-76c92989-a346-49b2-988e-0ab402faa1e3';
  $display->hide_title = PANELS_TITLE_NONE;
  $display->title_pane = 'new-545754f3-77cc-4b7d-a399-6cf4883f9c91';
  $handler->conf['display'] = $display;
  $export['node_view__panel_context_79020d91-4813-409b-bfe1-bcb9ddf40761'] = $handler;

  return $export;
}
