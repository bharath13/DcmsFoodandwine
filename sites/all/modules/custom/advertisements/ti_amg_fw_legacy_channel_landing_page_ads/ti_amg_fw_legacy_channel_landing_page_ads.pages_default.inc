<?php
/**
 * @file
 * ti_amg_fw_legacy_channel_landing_page_ads.pages_default.inc
 */

/**
 * Implements hook_default_page_manager_handlers().
 */
function ti_amg_fw_legacy_channel_landing_page_ads_default_page_manager_handlers() {
  $export = array();

  $handler = new stdClass();
  $handler->disabled = FALSE; /* Edit this to true to make a default handler disabled initially */
  $handler->api_version = 1;
  $handler->name = 'node_view__legacy-channel-landing-page';
  $handler->task = 'node_view';
  $handler->subtask = '';
  $handler->handler = 'panel_context';
  $handler->weight = 8;
  $handler->conf = array(
    'title' => 'Legacy Channel Landing Page',
    'no_blocks' => 0,
    'pipeline' => 'standard',
    'body_classes_to_remove' => '',
    'body_classes_to_add' => '',
    'css_id' => '',
    'css' => '',
    'contexts' => array(),
    'relationships' => array(),
    'name' => 'legacy-channel-landing-page',
    'access' => array(
      'plugins' => array(
        0 => array(
          'name' => 'node_type',
          'settings' => array(
            'type' => array(
              'channel_landing_page' => 'channel_landing_page',
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
      'setZone' => '[tgx:ad-zone]',
      'setChannel' => '[tgx:ad-channel]',
      'setSubchannel' => '[tgx:ad-subchannel]',
      'setArticleId' => '',
      'setContentType' => '[node:type]',
      'setPackageId' => '',
      'setContentPage' => FALSE,
      'setChannelPage' => FALSE,
      'setParam' => array(
        'ptype' => 'main',
        'site' => 'fw',
        'nid' => '%node:nid',
        'theme' => '[node:theme]',
        'tags' => '[node:tags]',
        'frnch' => '[node:field_ad_keys]',
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
      'middle' => NULL,
    ),
  );
  $display->cache = array();
  $display->title = '%node:title';
  $display->uuid = 'bc1cdf58-58e7-4e00-ba6c-34e21d692cf9';
  $display->storage_type = 'page_manager';
  $display->storage_id = 'node_view__basic-page';
  $display->content = array();
  $display->panels = array();
  $pane = new stdClass();
  $pane->pid = 'new-925c4c6e-e281-4455-9060-6b43451d50b7';
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
  $pane->uuid = '925c4c6e-e281-4455-9060-6b43451d50b7';
  $display->content['new-925c4c6e-e281-4455-9060-6b43451d50b7'] = $pane;
  $display->panels['middle'][0] = 'new-925c4c6e-e281-4455-9060-6b43451d50b7';
  $pane = new stdClass();
  $pane->pid = 'new-8b48e802-e1db-401e-b7e9-807240c768e8';
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
  $pane->uuid = '8b48e802-e1db-401e-b7e9-807240c768e8';
  $display->content['new-8b48e802-e1db-401e-b7e9-807240c768e8'] = $pane;
  $display->panels['middle'][1] = 'new-8b48e802-e1db-401e-b7e9-807240c768e8';
  $pane = new stdClass();
  $pane->pid = 'new-5333bf38-a41b-44e8-b8f8-506198b6de6b';
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
  $pane->uuid = '5333bf38-a41b-44e8-b8f8-506198b6de6b';
  $display->content['new-5333bf38-a41b-44e8-b8f8-506198b6de6b'] = $pane;
  $display->panels['middle'][2] = 'new-5333bf38-a41b-44e8-b8f8-506198b6de6b';
  $pane = new stdClass();
  $pane->pid = 'new-02f34572-eb8a-49f0-b06f-330e35046aba';
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
  $pane->uuid = '02f34572-eb8a-49f0-b06f-330e35046aba';
  $display->content['new-02f34572-eb8a-49f0-b06f-330e35046aba'] = $pane;
  $display->panels['middle'][3] = 'new-02f34572-eb8a-49f0-b06f-330e35046aba';
  $pane = new stdClass();
  $pane->pid = 'new-8a3b38da-34ec-4829-993b-4b73a97015d1';
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
  $pane->position = 4;
  $pane->locks = array();
  $pane->uuid = '8a3b38da-34ec-4829-993b-4b73a97015d1';
  $display->content['new-8a3b38da-34ec-4829-993b-4b73a97015d1'] = $pane;
  $display->panels['middle'][4] = 'new-8a3b38da-34ec-4829-993b-4b73a97015d1';
  $pane = new stdClass();
  $pane->pid = 'new-fe0a7db1-1b8d-4d75-b333-6a4ac05835ec';
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
  $pane->uuid = 'fe0a7db1-1b8d-4d75-b333-6a4ac05835ec';
  $display->content['new-fe0a7db1-1b8d-4d75-b333-6a4ac05835ec'] = $pane;
  $display->panels['middle'][5] = 'new-fe0a7db1-1b8d-4d75-b333-6a4ac05835ec';
  $pane = new stdClass();
  $pane->pid = 'new-4d047fbe-0653-4763-8b97-07bac14b193e';
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
  $pane->uuid = '4d047fbe-0653-4763-8b97-07bac14b193e';
  $display->content['new-4d047fbe-0653-4763-8b97-07bac14b193e'] = $pane;
  $display->panels['middle'][6] = 'new-4d047fbe-0653-4763-8b97-07bac14b193e';
  $pane = new stdClass();
  $pane->pid = 'new-13be79ea-f129-4424-91d6-ddebff2e5c8e';
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
  $pane->uuid = '13be79ea-f129-4424-91d6-ddebff2e5c8e';
  $display->content['new-13be79ea-f129-4424-91d6-ddebff2e5c8e'] = $pane;
  $display->panels['middle'][7] = 'new-13be79ea-f129-4424-91d6-ddebff2e5c8e';
  $display->hide_title = PANELS_TITLE_NONE;
  $display->title_pane = '0';
  $handler->conf['display'] = $display;
  $export['node_view__legacy-channel-landing-page'] = $handler;

  return $export;
}
