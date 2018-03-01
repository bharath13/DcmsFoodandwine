<?php
/**
 * @file
 * ti_amg_fw_category_pagination_ads.pages_default.inc
 */

/**
 * Implements hook_default_page_manager_handlers().
 */
function ti_amg_fw_category_pagination_ads_default_page_manager_handlers() {
  $export = array();

  $handler = new stdClass();
  $handler->disabled = FALSE; /* Edit this to true to make a default handler disabled initially */
  $handler->api_version = 1;
  $handler->name = 'node_view__category-pagination';
  $handler->task = 'node_view';
  $handler->subtask = '';
  $handler->handler = 'panel_context';
  $handler->weight = -1;
  $handler->conf = array(
    'title' => 'Category Pagination',
    'no_blocks' => 1,
    'pipeline' => 'standard',
    'body_classes_to_remove' => '',
    'body_classes_to_add' => '',
    'css_id' => '',
    'css' => '',
    'contexts' => array(),
    'relationships' => array(),
    'name' => 'category-pagination',
    'access' => array(
      'plugins' => array(
        0 => array(
          'name' => 'node_type',
          'settings' => array(
            'type' => array(
              'category' => 'category',
            ),
          ),
          'context' => 'argument_entity_id:node_1',
          'not' => FALSE,
        ),
        1 => array(
          'name' => 'path_visibility',
          'settings' => array(
            'visibility_setting' => '1',
            'paths' => 'node/*/page*',
          ),
          'context' => 'empty',
          'not' => FALSE,
        ),
      ),
      'logic' => 'and',
    ),
    'timeinc_ad_enable' => 1,
    'adFactory' => array(
      'setZone' => '[tgx:ad-zone]',
      'setChannel' => '[tgx:ad-channel]',
      'setSubchannel' => '[tgx:ad-subchannel]',
      'setArticleId' => '',
      'setContentType' => '',
      'setPackageId' => '',
      'setContentPage' => FALSE,
      'setChannelPage' => FALSE,
      'setParam' => array(
        'ptype' => 'main',
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
  $display->uuid = '09a7e7d6-4749-4f87-aa59-5a8f1648351f';
  $display->storage_type = 'page_manager';
  $display->storage_id = 'node_view__category-pagination';
  $display->content = array();
  $display->panels = array();
  $pane = new stdClass();
  $pane->pid = 'new-c1340745-6a35-48d9-ba45-dbcce6088cca';
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
  $pane->uuid = 'c1340745-6a35-48d9-ba45-dbcce6088cca';
  $display->content['new-c1340745-6a35-48d9-ba45-dbcce6088cca'] = $pane;
  $display->panels['middle'][0] = 'new-c1340745-6a35-48d9-ba45-dbcce6088cca';
  $pane = new stdClass();
  $pane->pid = 'new-68a7881f-b1c1-4afb-83b7-363f563bf0f1';
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
  $pane->uuid = '68a7881f-b1c1-4afb-83b7-363f563bf0f1';
  $display->content['new-68a7881f-b1c1-4afb-83b7-363f563bf0f1'] = $pane;
  $display->panels['middle'][1] = 'new-68a7881f-b1c1-4afb-83b7-363f563bf0f1';
  $pane = new stdClass();
  $pane->pid = 'new-f3e72f6b-7d37-4b1b-b347-28f90b27c152';
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
  $pane->uuid = 'f3e72f6b-7d37-4b1b-b347-28f90b27c152';
  $display->content['new-f3e72f6b-7d37-4b1b-b347-28f90b27c152'] = $pane;
  $display->panels['middle'][2] = 'new-f3e72f6b-7d37-4b1b-b347-28f90b27c152';
  $pane = new stdClass();
  $pane->pid = 'new-2174c38f-7c0c-4924-8c83-144deb3c1943';
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
    'ad_render_weight' => '-95',
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
      'ad_relocate_selector' => '#desktop-lazy-load-first-ad-holder',
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
  $pane->uuid = '2174c38f-7c0c-4924-8c83-144deb3c1943';
  $display->content['new-2174c38f-7c0c-4924-8c83-144deb3c1943'] = $pane;
  $display->panels['middle'][3] = 'new-2174c38f-7c0c-4924-8c83-144deb3c1943';
  $pane = new stdClass();
  $pane->pid = 'new-869524ea-80ea-48db-92da-0a3d627ad9e0';
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
    'ad_render_weight' => '-95',
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
  $pane->position = 4;
  $pane->locks = array();
  $pane->uuid = '869524ea-80ea-48db-92da-0a3d627ad9e0';
  $display->content['new-869524ea-80ea-48db-92da-0a3d627ad9e0'] = $pane;
  $display->panels['middle'][4] = 'new-869524ea-80ea-48db-92da-0a3d627ad9e0';
  $pane = new stdClass();
  $pane->pid = 'new-2130568a-51ed-462b-9673-eb1981ba694f';
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
    'ad_render_weight' => '-90',
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
      'ad_relocate_selector' => '#desktop-lazy-load-ad-holder',
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
  $pane->uuid = '2130568a-51ed-462b-9673-eb1981ba694f';
  $display->content['new-2130568a-51ed-462b-9673-eb1981ba694f'] = $pane;
  $display->panels['middle'][5] = 'new-2130568a-51ed-462b-9673-eb1981ba694f';
  $pane = new stdClass();
  $pane->pid = 'new-6d48de69-9850-463f-8ef4-d773cd4893a5';
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
      'ad_relocate_selector' => '#ad_300x100_1_wrapper',
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
  $pane->position = 6;
  $pane->locks = array();
  $pane->uuid = '6d48de69-9850-463f-8ef4-d773cd4893a5';
  $display->content['new-6d48de69-9850-463f-8ef4-d773cd4893a5'] = $pane;
  $display->panels['middle'][6] = 'new-6d48de69-9850-463f-8ef4-d773cd4893a5';
  $pane = new stdClass();
  $pane->pid = 'new-43131a44-4cb0-47c3-afa1-6402c586cb1a';
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
      0 => '480x100,1x5',
      750 => '480x100,1x5',
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
    'end_sticky_based_selector' => '',
    'override_top_element_height' => '',
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
  $pane->css = array(
    'css_id' => '',
    'css_class' => 'advertisement-nativo-300x100',
  );
  $pane->extras = array();
  $pane->position = 7;
  $pane->locks = array();
  $pane->uuid = '43131a44-4cb0-47c3-afa1-6402c586cb1a';
  $display->content['new-43131a44-4cb0-47c3-afa1-6402c586cb1a'] = $pane;
  $display->panels['middle'][7] = 'new-43131a44-4cb0-47c3-afa1-6402c586cb1a';
  $pane = new stdClass();
  $pane->pid = 'new-fa54a4ae-be3d-4e0a-8d4c-5e776d84e726';
  $pane->panel = 'middle';
  $pane->type = 'tgx_ad';
  $pane->subtype = 'tgx_ad';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'admin_title' => 'Mobile & Tablet : First Lazyload Ad ',
    'ad_static_id' => '',
    'ad_slug' => '',
    'ad_type' => 'regular',
    'ad_render_weight' => '0',
    'ad_cmtype' => '',
    'ad_sizes' => array(
      0 => '300x250',
      700 => '300x250,300x600',
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
      'ad_relocate_selector' => '#phone-tablet-lazy-load-first-ad-holder',
      'ad_relocate_remove' => 1,
    ),
    '3rd_party_vendor' => array(
      'add_script' => 0,
      'script_type' => 'external',
      'attr_async' => 0,
      'script' => '',
    ),
    'lazy_load' => TRUE,
    'lazy_load_viewport_offset' => '100',
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
  $pane->position = 8;
  $pane->locks = array();
  $pane->uuid = 'fa54a4ae-be3d-4e0a-8d4c-5e776d84e726';
  $display->content['new-fa54a4ae-be3d-4e0a-8d4c-5e776d84e726'] = $pane;
  $display->panels['middle'][8] = 'new-fa54a4ae-be3d-4e0a-8d4c-5e776d84e726';
  $pane = new stdClass();
  $pane->pid = 'new-93477103-32bb-4478-a2c6-86084a563d9b';
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
    'ad_render_weight' => '95',
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
  $pane->uuid = '93477103-32bb-4478-a2c6-86084a563d9b';
  $display->content['new-93477103-32bb-4478-a2c6-86084a563d9b'] = $pane;
  $display->panels['middle'][9] = 'new-93477103-32bb-4478-a2c6-86084a563d9b';
  $pane = new stdClass();
  $pane->pid = 'new-717e8dc6-366e-4a9b-b76d-0aee81e5c5fd';
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
  $pane->uuid = '717e8dc6-366e-4a9b-b76d-0aee81e5c5fd';
  $display->content['new-717e8dc6-366e-4a9b-b76d-0aee81e5c5fd'] = $pane;
  $display->panels['middle'][10] = 'new-717e8dc6-366e-4a9b-b76d-0aee81e5c5fd';
  $pane = new stdClass();
  $pane->pid = 'new-27157338-eabb-4bc1-b0fe-e61158e2ce87';
  $pane->panel = 'middle';
  $pane->type = 'tgx_ad';
  $pane->subtype = 'tgx_ad';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'admin_title' => 'Mobile & Tablet : Second Lazyload Ad',
    'ad_static_id' => '',
    'ad_slug' => '',
    'ad_type' => 'regular',
    'ad_render_weight' => '0',
    'ad_cmtype' => '',
    'ad_sizes' => array(
      0 => '300x250',
      700 => '300x250',
      1000 => '',
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
      'ad_relocate_selector' => '#phone-tablet-lazy-load-ad-holder',
      'ad_relocate_remove' => 1,
    ),
    '3rd_party_vendor' => array(
      'add_script' => 0,
      'script_type' => 'external',
      'attr_async' => 0,
      'script' => '',
    ),
    'lazy_load' => TRUE,
    'lazy_load_viewport_offset' => '100',
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
  $pane->position = 11;
  $pane->locks = array();
  $pane->uuid = '27157338-eabb-4bc1-b0fe-e61158e2ce87';
  $display->content['new-27157338-eabb-4bc1-b0fe-e61158e2ce87'] = $pane;
  $display->panels['middle'][11] = 'new-27157338-eabb-4bc1-b0fe-e61158e2ce87';
  $pane = new stdClass();
  $pane->pid = 'new-cedab1a4-b826-4c8f-95b7-d0f6c37a5a3f';
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
  $pane->position = 12;
  $pane->locks = array();
  $pane->uuid = 'cedab1a4-b826-4c8f-95b7-d0f6c37a5a3f';
  $display->content['new-cedab1a4-b826-4c8f-95b7-d0f6c37a5a3f'] = $pane;
  $display->panels['middle'][12] = 'new-cedab1a4-b826-4c8f-95b7-d0f6c37a5a3f';
  $pane = new stdClass();
  $pane->pid = 'new-c82035a8-2f4f-4abb-aefe-3197dfc92d9e';
  $pane->panel = 'middle';
  $pane->type = 'timeinc_third_party_panel_plugin';
  $pane->subtype = 'timeinc_third_party_panel_plugin';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'third_party_supported_breakpoint' => '0,728,970',
    'third_party_title' => 'SectionFront Yieldmo',
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
  $pane->position = 13;
  $pane->locks = array();
  $pane->uuid = 'c82035a8-2f4f-4abb-aefe-3197dfc92d9e';
  $display->content['new-c82035a8-2f4f-4abb-aefe-3197dfc92d9e'] = $pane;
  $display->panels['middle'][13] = 'new-c82035a8-2f4f-4abb-aefe-3197dfc92d9e';
  $display->hide_title = PANELS_TITLE_NONE;
  $display->title_pane = 'new-c1340745-6a35-48d9-ba45-dbcce6088cca';
  $handler->conf['display'] = $display;
  $export['node_view__category-pagination'] = $handler;

  return $export;
}
