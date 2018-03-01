<?php

/**
 * @file
 * Admin page callbacks for Gallery Custom Settings.
 */

/**
 * Form builder for Gallery Page custom settings.
 */
function ti_amg_fwrd_gallery_custom_settings($form, &$form_state) {
  $form = array();

  $form['ad_refresh_setting'] = array(
    '#title' => 'Gallery Ad Refresh Setting',
    '#type' => 'fieldset',
  );

  $form['ad_refresh_setting']['ad_refresh_time'] = array(
    '#title' => 'Gallery Ad Refresh Time in MilliSeconds (1sec = 1000ms)',
    '#description' => 'Time should be in milliseconds. '
    . '1 second is equal to 1000ms.',
    '#type' => 'textfield',
    '#default_value' => variable_get('ad_refresh_time', '1000'),
  );
  $form['interstitial_ad_timeout_setting'] = array(
    '#title' => 'Gallery Intestitial Ad Timeout Setting',
    '#type' => 'fieldset',
  );

  $form['interstitial_ad_timeout_setting']['interstitial_ad_timeout_time'] = array(
    '#title' => 'Gallery Inrestitial Ad Waiting Time in MilliSeconds (1sec = 1000ms)',
    '#description' => 'Time should be in milliseconds. '
    . '1 second is equal to 1000ms.',
    '#type' => 'textfield',
    '#default_value' => variable_get('interstitial_ad_timeout_time', '3000'),
  );

  return system_settings_form($form);
}

/**
 * Implements hook_form_validate().
 */
function ti_amg_fwrd_gallery_custom_settings_validate($form, &$form_state) {
  if (isset($form_state['values']['ad_refresh_time']) &&
      !empty($form_state['values']['ad_refresh_time'])) {
    $ad_refresh_tiime = $form_state['values']['ad_refresh_time'];
    if (!is_numeric($ad_refresh_tiime)) {
      form_set_error('ad_refresh_time', 'Please enter valid integer value.');
    }
    elseif ($ad_refresh_tiime < 0) {
      form_set_error('ad_refresh_time', 'Please enter positive integer value.');
    }
  }
if (isset($form_state['values']['interstitial_ad_timeout_time']) &&
      !empty($form_state['values']['interstitial_ad_timeout_time'])) {
    $interstitial_ad_time = $form_state['values']['interstitial_ad_timeout_time'];
    if (!is_numeric($interstitial_ad_time)) {
      form_set_error('interstitial_ad_timeout_time', 'Please enter valid integer value.');
    }
    elseif ($interstitial_ad_time < 0) {
      form_set_error('interstitial_ad_timeout_time', 'Please enter positive integer value.');
    }
  }
}
