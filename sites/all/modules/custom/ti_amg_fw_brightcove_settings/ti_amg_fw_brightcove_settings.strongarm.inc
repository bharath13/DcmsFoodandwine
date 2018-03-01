<?php
/**
 * @file
 * ti_amg_fw_brightcove_settings.strongarm.inc
 */

/**
 * Implements hook_strongarm().
 */
function ti_amg_fw_brightcove_settings_strongarm() {
  $export = array();

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'ti_editorial_brightcove_notify_callback';
  $strongarm->value = 'https://editor.foodandwine.com/brightcove-status/brightcove';
  $export['ti_editorial_brightcove_notify_callback'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'ti_editorial_brightcove_notify_emails';
  $strongarm->value = 'drupal-dcms-admin@timeinc.net';
  $export['ti_editorial_brightcove_notify_emails'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'ti_editorial_brightcove_preparer';
  $strongarm->value = 'Time INC';
  $export['ti_editorial_brightcove_preparer'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'ti_editorial_brightcove_publisher_id';
  $strongarm->value = '1660653193';
  $export['ti_editorial_brightcove_publisher_id'] = $strongarm;

  return $export;
}
