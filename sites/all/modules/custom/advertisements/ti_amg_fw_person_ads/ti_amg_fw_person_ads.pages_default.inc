<?php
/**
 * @file
 * ti_amg_fw_person_ads.pages_default.inc
 */

/**
 * Implements hook_default_page_manager_handlers().
 */
function ti_amg_fw_person_ads_default_page_manager_handlers() {
  $export = array();

  $handler = new stdClass();
  $handler->disabled = FALSE; /* Edit this to true to make a default handler disabled initially */
  $handler->api_version = 1;
  $handler->name = 'node_view__person';
  $handler->task = 'node_view';
  $handler->subtask = '';
  $handler->handler = 'panel_context';
  $handler->weight = -7;
  $handler->conf = array(
    'title' => 'Person',
    'no_blocks' => 1,
    'pipeline' => 'standard',
    'body_classes_to_remove' => '',
    'body_classes_to_add' => '',
    'css_id' => '',
    'css' => '',
    'contexts' => array(),
    'relationships' => array(),
    'name' => 'person',
    'access' => array(
      'plugins' => array(
        0 => array(
          'name' => 'node_type',
          'settings' => array(
            'type' => array(
              'person' => 'person',
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
      'setZone' => 'chef_pages',
      'setChannel' => '[tgx:ad-channel]',
      'setSubchannel' => '[tgx:ad-subchannel]',
      'setArticleId' => '',
      'setContentType' => 'contributors',
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
  $display->uuid = '48c82dfc-75f2-4972-b34c-5946ed5a0873';
  $display->storage_type = 'page_manager';
  $display->storage_id = 'node_view__person';
  $display->content = array();
  $display->panels = array();
  $pane = new stdClass();
  $pane->pid = 'new-2dd260a6-08e6-4e92-9bb3-1af81895bbe5';
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
  $pane->uuid = '2dd260a6-08e6-4e92-9bb3-1af81895bbe5';
  $display->content['new-2dd260a6-08e6-4e92-9bb3-1af81895bbe5'] = $pane;
  $display->panels['middle'][0] = 'new-2dd260a6-08e6-4e92-9bb3-1af81895bbe5';
  $pane = new stdClass();
  $pane->pid = 'new-7144102a-f541-4d83-b959-24ea54fea592';
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
  $pane->uuid = '7144102a-f541-4d83-b959-24ea54fea592';
  $display->content['new-7144102a-f541-4d83-b959-24ea54fea592'] = $pane;
  $display->panels['middle'][1] = 'new-7144102a-f541-4d83-b959-24ea54fea592';
  $pane = new stdClass();
  $pane->pid = 'new-d49cb5d4-0253-40b9-8270-2097e3444d08';
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
  $pane->uuid = 'd49cb5d4-0253-40b9-8270-2097e3444d08';
  $display->content['new-d49cb5d4-0253-40b9-8270-2097e3444d08'] = $pane;
  $display->panels['middle'][2] = 'new-d49cb5d4-0253-40b9-8270-2097e3444d08';
  $pane = new stdClass();
  $pane->pid = 'new-870f3856-3f6f-4e1b-8100-9084dc4616dd';
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
  $pane->css = array(
    'css_id' => '',
    'css_class' => '',
  );
  $pane->extras = array();
  $pane->position = 3;
  $pane->locks = array();
  $pane->uuid = '870f3856-3f6f-4e1b-8100-9084dc4616dd';
  $display->content['new-870f3856-3f6f-4e1b-8100-9084dc4616dd'] = $pane;
  $display->panels['middle'][3] = 'new-870f3856-3f6f-4e1b-8100-9084dc4616dd';
  $pane = new stdClass();
  $pane->pid = 'new-59a33913-5272-495e-8869-430671f198cc';
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
  $pane->uuid = '59a33913-5272-495e-8869-430671f198cc';
  $display->content['new-59a33913-5272-495e-8869-430671f198cc'] = $pane;
  $display->panels['middle'][4] = 'new-59a33913-5272-495e-8869-430671f198cc';
  $pane = new stdClass();
  $pane->pid = 'new-de831c84-d99f-4f14-b822-e65d636edc45';
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
  $pane->uuid = 'de831c84-d99f-4f14-b822-e65d636edc45';
  $display->content['new-de831c84-d99f-4f14-b822-e65d636edc45'] = $pane;
  $display->panels['middle'][5] = 'new-de831c84-d99f-4f14-b822-e65d636edc45';
  $pane = new stdClass();
  $pane->pid = 'new-0f45c042-6d1b-45f6-a764-d7452e6b5f43';
  $pane->panel = 'middle';
  $pane->type = 'tgx_ad';
  $pane->subtype = 'tgx_ad';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'admin_title' => 'Tablet : Second Ad 300x250',
    'ad_static_id' => '',
    'ad_slug' => '',
    'ad_type' => 'regular',
    'ad_render_weight' => '0',
    'ad_cmtype' => '',
    'ad_sizes' => array(
      0 => '',
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
      'ad_relocate_selector' => '#device_ad_300x250_wrapper',
      'ad_relocate_remove' => 0,
    ),
    '3rd_party_vendor' => array(
      'add_script' => 0,
      'script_type' => 'external',
      'attr_async' => 0,
      'script' => '',
    ),
    'lazy_load' => TRUE,
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
  $pane->position = 6;
  $pane->locks = array();
  $pane->uuid = '0f45c042-6d1b-45f6-a764-d7452e6b5f43';
  $display->content['new-0f45c042-6d1b-45f6-a764-d7452e6b5f43'] = $pane;
  $display->panels['middle'][6] = 'new-0f45c042-6d1b-45f6-a764-d7452e6b5f43';
  $pane = new stdClass();
  $pane->pid = 'new-a6fe502c-e542-45bf-9785-cf93a65cf456';
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
  $pane->position = 7;
  $pane->locks = array();
  $pane->uuid = 'a6fe502c-e542-45bf-9785-cf93a65cf456';
  $display->content['new-a6fe502c-e542-45bf-9785-cf93a65cf456'] = $pane;
  $display->panels['middle'][7] = 'new-a6fe502c-e542-45bf-9785-cf93a65cf456';
  $pane = new stdClass();
  $pane->pid = 'new-e61f85db-b549-4ee5-bfa3-a7085a8bcf30';
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
  $pane->position = 8;
  $pane->locks = array();
  $pane->uuid = 'e61f85db-b549-4ee5-bfa3-a7085a8bcf30';
  $display->content['new-e61f85db-b549-4ee5-bfa3-a7085a8bcf30'] = $pane;
  $display->panels['middle'][8] = 'new-e61f85db-b549-4ee5-bfa3-a7085a8bcf30';
  $pane = new stdClass();
  $pane->pid = 'new-09b2c7a4-78a5-4f49-b6ab-e78f4193bcfd';
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
  $pane->position = 9;
  $pane->locks = array();
  $pane->uuid = '09b2c7a4-78a5-4f49-b6ab-e78f4193bcfd';
  $display->content['new-09b2c7a4-78a5-4f49-b6ab-e78f4193bcfd'] = $pane;
  $display->panels['middle'][9] = 'new-09b2c7a4-78a5-4f49-b6ab-e78f4193bcfd';
  $pane = new stdClass();
  $pane->pid = 'new-5404da30-7bc5-423d-a33a-9e479106762a';
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
  $pane->position = 10;
  $pane->locks = array();
  $pane->uuid = '5404da30-7bc5-423d-a33a-9e479106762a';
  $display->content['new-5404da30-7bc5-423d-a33a-9e479106762a'] = $pane;
  $display->panels['middle'][10] = 'new-5404da30-7bc5-423d-a33a-9e479106762a';
  $pane = new stdClass();
  $pane->pid = 'new-d5af1722-1c71-468d-8429-ea975d629116';
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
  $pane->position = 11;
  $pane->locks = array();
  $pane->uuid = 'd5af1722-1c71-468d-8429-ea975d629116';
  $display->content['new-d5af1722-1c71-468d-8429-ea975d629116'] = $pane;
  $display->panels['middle'][11] = 'new-d5af1722-1c71-468d-8429-ea975d629116';
  $pane = new stdClass();
  $pane->pid = 'new-34aacfb5-b5a0-4c26-97b7-1df18d1ac8e7';
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
  $pane->uuid = '34aacfb5-b5a0-4c26-97b7-1df18d1ac8e7';
  $display->content['new-34aacfb5-b5a0-4c26-97b7-1df18d1ac8e7'] = $pane;
  $display->panels['middle'][12] = 'new-34aacfb5-b5a0-4c26-97b7-1df18d1ac8e7';
  $display->hide_title = PANELS_TITLE_NONE;
  $display->title_pane = 'new-2dd260a6-08e6-4e92-9bb3-1af81895bbe5';
  $handler->conf['display'] = $display;
  $export['node_view__person'] = $handler;

  return $export;
}
