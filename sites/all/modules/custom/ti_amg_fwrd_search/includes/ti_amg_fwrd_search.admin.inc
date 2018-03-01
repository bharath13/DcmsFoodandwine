<?php
/**
 * @file
 * Admin page callbacks for FW Search Auto suggested items.
 */
/**
 * Form builder for FW Search Auto Suggested Items Settings.
 * 
 */
function ti_amg_fwrd_search_solr_settings($form, &$form_state) {
  $form = array();
  $form['enable_solr_auto_suggested_items'] = array(
    '#title' => 'Enable Auto Suggested Items in FW Search',
    '#type' => 'fieldset',
  );
  $form['enable_solr_auto_suggested_items']['enable_fwsearch_auto_suggested'] = array(
    '#title' => 'Enable Auto Suggested Items in FW Search.',
    '#description' => 'If check the checkbox, it will enable ',
    '#type' => 'checkbox',
    '#default_value' => variable_get('enable_fwsearch_auto_suggested', FALSE),
  );
  return system_settings_form($form);
}
