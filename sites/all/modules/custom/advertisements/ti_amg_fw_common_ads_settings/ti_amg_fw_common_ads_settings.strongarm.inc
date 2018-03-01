<?php
/**
 * @file
 * ti_amg_fw_common_ads_settings.strongarm.inc
 */

/**
 * Implements hook_strongarm().
 */
function ti_amg_fw_common_ads_settings_strongarm() {
  $export = array();

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'tgx_ads_cm_sitename';
  $strongarm->value = 'cm.fw';
  $export['tgx_ads_cm_sitename'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'tgx_ads_sitename';
  $strongarm->value = 'fw';
  $export['tgx_ads_sitename'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'tgx_library';
  $strongarm->value = 'https://tia.timeinc.net/foodandwine/tia.min.js';
  $export['tgx_library'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'tgx_library_test';
  $strongarm->value = 'https://test-tia.timeinc.net/foodandwine/tia.js';
  $export['tgx_library_test'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'tgx_sitename';
  $strongarm->value = 'foodandwine';
  $export['tgx_sitename'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'tgx_site_enable_bluekai';
  $strongarm->value = FALSE;
  $export['tgx_site_enable_bluekai'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'tgx_site_enable_comscore';
  $strongarm->value = FALSE;
  $export['tgx_site_enable_comscore'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'tgx_site_enable_evidon';
  $strongarm->value = TRUE;
  $export['tgx_site_enable_evidon'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'tgx_site_enable_realvu';
  $strongarm->value = TRUE;
  $export['tgx_site_enable_realvu'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'timeinc_advertising_breakpoints';
  $strongarm->value = '0';
  $export['timeinc_advertising_breakpoints'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'timeinc_advertising_collapse_empty_divs';
  $strongarm->value = TRUE;
  $export['timeinc_advertising_collapse_empty_divs'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'timeinc_advertising_dequeue_ads';
  $strongarm->value = FALSE;
  $export['timeinc_advertising_dequeue_ads'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'timeinc_advertising_disable_initial_load';
  $strongarm->value = FALSE;
  $export['timeinc_advertising_disable_initial_load'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'timeinc_advertising_enable_single_request';
  $strongarm->value = FALSE;
  $export['timeinc_advertising_enable_single_request'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'timeinc_advertising_set_behavior_tracking';
  $strongarm->value = FALSE;
  $export['timeinc_advertising_set_behavior_tracking'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'timeinc_advertising_set_popups';
  $strongarm->value = FALSE;
  $export['timeinc_advertising_set_popups'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'timeinc_advertising_set_quantcast_tracking';
  $strongarm->value = FALSE;
  $export['timeinc_advertising_set_quantcast_tracking'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'timeinc_advertising_set_rev_sci_tracking';
  $strongarm->value = TRUE;
  $export['timeinc_advertising_set_rev_sci_tracking'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'timeinc_advertising_set_tacoda_tracking';
  $strongarm->value = FALSE;
  $export['timeinc_advertising_set_tacoda_tracking'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'timeinc_advertising_sticky_header_selector';
  $strongarm->value = '.is_stuck';
  $export['timeinc_advertising_sticky_header_selector'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'timeinc_advertising_use_tgx_v2';
  $strongarm->value = TRUE;
  $export['timeinc_advertising_use_tgx_v2'] = $strongarm;

  return $export;
}
