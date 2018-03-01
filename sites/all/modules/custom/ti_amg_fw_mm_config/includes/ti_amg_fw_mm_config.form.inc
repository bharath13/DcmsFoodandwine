<?php

/**
 * @file
 * Alters the mm_config form to include a toggle checkbox.
 */

/**
 * Implements hook_form_FORM_ID_alter().
 */
function ti_amg_fw_mm_config_form_ti_mm_fallthrough_components_settings_form_alter(&$form, &$form_state, $form_id) {
  $form['mm_navigation']['mm_toggle_nav_header'] = [
    '#type' => 'checkbox',
    '#title' => t('Use MM Page Header?'),
    '#default_value' => variable_get('mm_toggle_nav_header', 1),
    '#description' => t('Check to use MM header, leave unchecked to use old header.'),
  ];
  $form['mm_navigation']['mm_toggle_footer'] = [
    '#type' => 'checkbox',
    '#title' => t('Use MM Page Footer?'),
    '#default_value' => variable_get('mm_toggle_footer', 1),
    '#description' => t('Check to use MM footer, leave unchecked to use old footer.'),
  ];
  $form['mm_navigation']['mm_components_subscribe_title'] = array(
    '#type' => 'textfield',
    '#maxlength' => 256,
    '#title' => t('Magazine Subscribe Title'),
    '#default_value' => variable_get('mm_components_subscribe_title', ''),
  );
  $form['mm_navigation']['mm_components_subscribe_dek'] = array(
    '#type' => 'textfield',
    '#maxlength' => 256,
    '#title' => t('Magazine Subscribe Dek'),
    '#default_value' => variable_get('mm_components_subscribe_dek', ''),
  );
  $form['mm_navigation']['mm_components_subscribe_link_text'] = array(
    '#type' => 'textfield',
    '#maxlength' => 256,
    '#title' => t('Magazine Subscribe URL Text'),
    '#default_value' => variable_get('mm_components_subscribe_link_text', ''),
  );
  $form['mm_navigation']['mm_components_subscribe_cover_image_evergreen'] = array(
    '#type' => 'textfield',
    '#maxlength' => 256,
    '#title' => t('Magazine Subscribe Cover Evergreen'),
    '#default_value' => variable_get('mm_components_subscribe_cover_image_evergreen', ''),
  );
  $form['mm_navigation']['mm_components_newsletter_title'] = array(
    '#type' => 'textfield',
    '#maxlength' => 256,
    '#title' => t('Newsletter Sign Up Title'),
    '#default_value' => variable_get('mm_components_newsletter_title', ''),
  );
  $form['mm_navigation']['mm_components_newsletter_dek'] = array(
    '#type' => 'textfield',
    '#maxlength' => 256,
    '#title' => t('Newsletter Sign Up Dek'),
    '#default_value' => variable_get('mm_components_newsletter_dek', ''),
  );
  $form['mm_navigation']['mm_components_newsletter_link'] = array(
    '#type' => 'textfield',
    '#maxlength' => 256,
    '#title' => t('Newsletter Sign Up URL'),
    '#default_value' => variable_get('mm_components_newsletter_link', ''),
  );
  $form['mm_navigation']['mm_components_newsletter_link_text'] = array(
    '#type' => 'textfield',
    '#maxlength' => 256,
    '#title' => t('Newsletter Sign Up URL Text'),
    '#default_value' => variable_get('mm_components_newsletter_link_text', ''),
  );
}
