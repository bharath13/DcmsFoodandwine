<?php
/**
 * @file
 * ti_amg_fw_vertical_gallery_ads.pages_default.inc
 */

/**
 * Implements hook_default_page_manager_handlers().
 */
function ti_amg_fw_vertical_gallery_ads_default_page_manager_handlers() {
  $export = array();

  $handler = new stdClass();
  $handler->disabled = FALSE; /* Edit this to true to make a default handler disabled initially */
  $handler->api_version = 1;
  $handler->name = 'node_view__vertical-gallery';
  $handler->task = 'node_view';
  $handler->subtask = '';
  $handler->handler = 'panel_context';
  $handler->weight = 0;
  $handler->conf = array(
    'title' => 'Vertical Gallery',
    'no_blocks' => 1,
    'pipeline' => 'standard',
    'body_classes_to_remove' => '',
    'body_classes_to_add' => '',
    'css_id' => '',
    'css' => '',
    'contexts' => array(),
    'relationships' => array(),
    'name' => 'vertical-gallery',
    'access' => array(
      'plugins' => array(
        0 => array(
          'name' => 'node_type',
          'settings' => array(
            'type' => array(
              'gallery' => 'gallery',
            ),
          ),
          'context' => 'argument_entity_id:node_1',
          'not' => FALSE,
        ),
        1 => array(
          'name' => 'entity_field_value:node:gallery:field_gallery_template',
          'settings' => array(
            'field_gallery_template' => array(
              'und' => array(
                0 => array(
                  'value' => 'Vertical',
                ),
              ),
            ),
            'field_gallery_template_value' => array(
              0 => 'Vertical',
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
      'setZone' => 'slideshows',
      'setChannel' => '[tgx:ad-channel]',
      'setSubchannel' => '[tgx:ad-subchannel]',
      'setArticleId' => '',
      'setContentType' => 'vertical_gallery',
      'setPackageId' => '',
      'setContentPage' => TRUE,
      'setChannelPage' => FALSE,
      'setParam' => array(
        'ptype' => 'content',
        'site' => 'fw',
        'nid' => '%node:nid',
        'tags' => '[node:tags]',
        'theme' => '[node:theme]',
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
  $display->uuid = '17ae1ca9-53d5-40f6-8676-5766569aae49';
  $display->storage_type = 'page_manager';
  $display->storage_id = 'node_view__gallery';
  $display->content = array();
  $display->panels = array();
  $pane = new stdClass();
  $pane->pid = 'new-17aa3411-3ae7-4324-b5cc-f68bd689e2b2';
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
  $pane->uuid = '17aa3411-3ae7-4324-b5cc-f68bd689e2b2';
  $display->content['new-17aa3411-3ae7-4324-b5cc-f68bd689e2b2'] = $pane;
  $display->panels['middle'][0] = 'new-17aa3411-3ae7-4324-b5cc-f68bd689e2b2';
  $pane = new stdClass();
  $pane->pid = 'new-58332cae-dca6-426b-883b-7e3d7fb7035b';
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
      1000 => '101x1, 970x90, 970x66, 728x90',
    ),
    'ad_companion' => 0,
    'getAd' => array(
      'setZone' => '',
      'setPosition' => '',
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
      'ad_relocate_selector' => '#gallery_leaderboard_ad_holder',
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
    'css_class' => 'ad ad--leaderboard centered',
  );
  $pane->extras = array();
  $pane->position = 1;
  $pane->locks = array();
  $pane->uuid = '58332cae-dca6-426b-883b-7e3d7fb7035b';
  $display->content['new-58332cae-dca6-426b-883b-7e3d7fb7035b'] = $pane;
  $display->panels['middle'][1] = 'new-58332cae-dca6-426b-883b-7e3d7fb7035b';
  $pane = new stdClass();
  $pane->pid = 'new-368e935a-03ae-4753-a121-c3a3dd70aec4';
  $pane->panel = 'middle';
  $pane->type = 'panels_mini';
  $pane->subtype = 'mobile_gallery_top_102x1_ad';
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
  $pane->uuid = '368e935a-03ae-4753-a121-c3a3dd70aec4';
  $display->content['new-368e935a-03ae-4753-a121-c3a3dd70aec4'] = $pane;
  $display->panels['middle'][2] = 'new-368e935a-03ae-4753-a121-c3a3dd70aec4';
  $pane = new stdClass();
  $pane->pid = 'new-607976f1-c8f5-41b0-9837-cd01e2b63491';
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
      'setPosition' => '',
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
      'ad_relocate_selector' => '#gallery_leaderboard_ad_holder',
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
  $pane->position = 3;
  $pane->locks = array();
  $pane->uuid = '607976f1-c8f5-41b0-9837-cd01e2b63491';
  $display->content['new-607976f1-c8f5-41b0-9837-cd01e2b63491'] = $pane;
  $display->panels['middle'][3] = 'new-607976f1-c8f5-41b0-9837-cd01e2b63491';
  $pane = new stdClass();
  $pane->pid = 'new-16e1429d-651d-4e6d-ae0b-9f68a94e60fe';
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
  $pane->position = 4;
  $pane->locks = array();
  $pane->uuid = '16e1429d-651d-4e6d-ae0b-9f68a94e60fe';
  $display->content['new-16e1429d-651d-4e6d-ae0b-9f68a94e60fe'] = $pane;
  $display->panels['middle'][4] = 'new-16e1429d-651d-4e6d-ae0b-9f68a94e60fe';
  $pane = new stdClass();
  $pane->pid = 'new-750a9817-4baf-4854-bd2a-75f3d96bd9d6';
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
  $pane->position = 5;
  $pane->locks = array();
  $pane->uuid = '750a9817-4baf-4854-bd2a-75f3d96bd9d6';
  $display->content['new-750a9817-4baf-4854-bd2a-75f3d96bd9d6'] = $pane;
  $display->panels['middle'][5] = 'new-750a9817-4baf-4854-bd2a-75f3d96bd9d6';
  $pane = new stdClass();
  $pane->pid = 'new-8ed0643c-3173-413b-89fe-cc3b8d812555';
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
  $pane->position = 6;
  $pane->locks = array();
  $pane->uuid = '8ed0643c-3173-413b-89fe-cc3b8d812555';
  $display->content['new-8ed0643c-3173-413b-89fe-cc3b8d812555'] = $pane;
  $display->panels['middle'][6] = 'new-8ed0643c-3173-413b-89fe-cc3b8d812555';
  $pane = new stdClass();
  $pane->pid = 'new-73426b4f-3be8-48d9-a14e-efae5da1d9cc';
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
  $pane->position = 7;
  $pane->locks = array();
  $pane->uuid = '73426b4f-3be8-48d9-a14e-efae5da1d9cc';
  $display->content['new-73426b4f-3be8-48d9-a14e-efae5da1d9cc'] = $pane;
  $display->panels['middle'][7] = 'new-73426b4f-3be8-48d9-a14e-efae5da1d9cc';
  $pane = new stdClass();
  $pane->pid = 'new-86fb3eb0-25c2-4096-9d78-49585232e1db';
  $pane->panel = 'middle';
  $pane->type = 'tgx_ad';
  $pane->subtype = 'tgx_ad';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'admin_title' => 'Vertical Galllery Interstitial Ad',
    'ad_static_id' => '',
    'ad_slug' => '',
    'ad_type' => 'regular',
    'ad_render_weight' => '0',
    'ad_cmtype' => '',
    'ad_sizes' => array(
      0 => '300x250',
      700 => '728x90',
      1000 => '728x90, 970x250',
    ),
    'ad_companion' => 0,
    'getAd' => array(
      'setZone' => '',
      'setPosition' => '',
      'setParam' => '',
    ),
    'ad_sticky' => 0,
    'ad_time_delay' => '',
    'end_sticky_based_selector' => '',
    'override_top_element_height' => '',
    'sticky_ajax_disable' => 0,
    'advanced' => array(
      'ad_refresh' => 0,
      'ad_relocate_position' => '0',
      'ad_condition' => '',
      'ad_relocate_selector' => '',
      'ad_relocate_remove' => 0,
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
      'use_universal_ad_logic' => TRUE,
      'ad_placements' => array(
        2 => '5x5',
      ),
      'pixels_between' => '',
      'outbrain_selector' => '',
      'outbrain_offset_pixel' => '',
      'selector' => '.gallery__container .slide:nth-child(3n+3):not(:last-child)',
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
  $pane->position = 8;
  $pane->locks = array();
  $pane->uuid = '86fb3eb0-25c2-4096-9d78-49585232e1db';
  $display->content['new-86fb3eb0-25c2-4096-9d78-49585232e1db'] = $pane;
  $display->panels['middle'][8] = 'new-86fb3eb0-25c2-4096-9d78-49585232e1db';
  $pane = new stdClass();
  $pane->pid = 'new-7a540b6e-a348-4e13-a583-2264940b7426';
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
  $pane->position = 9;
  $pane->locks = array();
  $pane->uuid = '7a540b6e-a348-4e13-a583-2264940b7426';
  $display->content['new-7a540b6e-a348-4e13-a583-2264940b7426'] = $pane;
  $display->panels['middle'][9] = 'new-7a540b6e-a348-4e13-a583-2264940b7426';
  $pane = new stdClass();
  $pane->pid = 'new-84c10234-e980-4417-aac7-5447114de00d';
  $pane->panel = 'middle';
  $pane->type = 'timeinc_third_party_panel_plugin';
  $pane->subtype = 'timeinc_third_party_panel_plugin';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'third_party_supported_breakpoint' => '0,728,970',
    'third_party_title' => 'Vertical Gallery Yieldmo',
    'third_party_insert_content' => '<breakpoint>0</breakpoint><div id="ym_1202105485002914804" class="ym"></div><script type="text/javascript">(function(e,t){if(t._ym===void 0){t._ym="";var m=e.createElement("script");m.type="text/javascript",m.async=!0,m.src="//static.yieldmo.com/ym.m4.js",(e.getElementsByTagName("head")[0]||e.getElementsByTagName("body")[0]).appendChild(m)}else t._ym instanceof String||void 0===t._ym.chkPls||t._ym.chkPls()})(document,window);</script>',
    'third_party_insert_selector' => '',
    'third_party_insert_condition' => array(
      0 => 'jQuery("#campaign-nav-bar-ad-holder").length == 0',
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
  $pane->uuid = '84c10234-e980-4417-aac7-5447114de00d';
  $display->content['new-84c10234-e980-4417-aac7-5447114de00d'] = $pane;
  $display->panels['middle'][10] = 'new-84c10234-e980-4417-aac7-5447114de00d';
  $display->hide_title = PANELS_TITLE_NONE;
  $display->title_pane = 'new-17aa3411-3ae7-4324-b5cc-f68bd689e2b2';
  $handler->conf['display'] = $display;
  $export['node_view__vertical-gallery'] = $handler;

  return $export;
}
