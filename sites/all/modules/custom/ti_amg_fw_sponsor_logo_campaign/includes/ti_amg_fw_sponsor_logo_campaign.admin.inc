<?php

/**
 * @file
 * Admin page callbacks for the sponsor logo campaign module.
 */

/**
 * Form builder for sponsor logo campaign settings tab.
 */
function ti_amg_fw_sponsor_logo_campaign_settings($form, &$form_state) {
  $form = array();

  $form['campaign_nativo'] = array(
    '#title' => 'Nativo Partner Page',
    '#type' => 'fieldset',
  );

  $form['campaign_nativo']['nativo_campaign'] = array(
    '#title' => 'Adding Natovo Partner Page for Sponsor Logo Campaign.',
    '#description' => 'To enable Nativo Partner Page for Sponsor Logo Campaign.',
    '#type' => 'checkbox',
    '#default_value' => variable_get('nativo_campaign', ''),
  );

  $form['sponsor_campaign'] = array(
    '#title' => 'Sponsor Logo Campaign Content Types',
    '#type' => 'fieldset',
  );

  $form['sponsor_campaign']['sponsor_content_types'] = array(
    '#type' => 'checkboxes',
    '#multiple' => TRUE,
    '#options' => array_map('check_plain', node_type_get_names()),
    '#title' => t('Include Content Types'),
    '#default_value' => variable_get('sponsor_content_types', array()),
  );

  $form['sponsor_campaign']['sponsor_content_range'] = array(
    '#title' => 'No.of Items to show in Autocomplete',
    '#description' => 'No.of Items to show in Autocomplete. Performance will decrease, if it is more',
    '#type' => 'textfield',
    '#default_value' => variable_get('sponsor_content_range', 10),
  );

  return system_settings_form($form);
}

/**
 * Form builder for sponsor logo campaign Adding content.
 */
function ti_amg_fw_sponsor_logo_campaign_content_form($form, &$form_state) {
  $campaign_items = variable_get('ti_lsg_fw_sponsor_logo_campaign_content', array());
  $campaign_items_count = variable_get('ti_lsg_fw_sponsor_logo_campaign_count', 1);

  $form['#tree'] = TRUE;
  $form['sponsor_campaign'] = array(
    '#title' => 'Add Content for Sponsor Logo Campaign',
    '#type' => 'fieldset',
    '#prefix' => '<div id="campaign-content-fieldset-wrapper">',
    '#suffix' => '</div>',
  );

  if ($campaign_items_count == 0) {
    $campaign_items_count = 1;
  }

  $form_state['num_items'] = isset($form_state['num_items']) ? $form_state['num_items'] : $campaign_items_count;

  for ($i = 0; $i < $form_state['num_items']; $i++) {
    $form['sponsor_campaign'][$i]['node'] = array(
      '#type' => 'textfield',
      '#autocomplete_path' => 'campaign_autocomplete',
      '#default_value' => (isset($campaign_items[$i])) ? $campaign_items[$i] : '',
    );
  }

  $form['sponsor_campaign']['add_more'] = array(
    '#type' => 'submit',
    '#value' => t('Add one more'),
    '#submit' => array('ti_amg_fw_sponsor_logo_campaign_add_more_content'),
    '#ajax' => array(
      'callback' => 'ti_amg_fw_sponsor_logo_campaign_add_more_callback',
      'wrapper' => 'campaign-content-fieldset-wrapper',
    ),
  );

  $form['submit'] = array(
    '#type' => 'submit',
    '#value' => t('Submit'),
  );

  return $form;
}

/**
 * Callback function for Add more button.
 */
function ti_amg_fw_sponsor_logo_campaign_add_more_callback($form, $form_state) {
  return $form['sponsor_campaign'];
}

/**
 * Submit handler for the "add-one-more" button.
 *
 * Increments the max counter and causes a rebuild.
 */
function ti_amg_fw_sponsor_logo_campaign_add_more_content($form, &$form_state) {
  $form_state['num_items']++;
  $form_state['rebuild'] = TRUE;
}

/**
 * Implements hook_form_submit().
 */
function ti_amg_fw_sponsor_logo_campaign_content_form_submit($form, $form_state) {
  $campaign_content = array();
  $campaign_count = 0;
  foreach ($form_state['input']['sponsor_campaign'] as $key => $item) {
    if (!empty($item['node'])) {
      $campaign_content[] = $item['node'];
      $campaign_count++;
   }
 }
  variable_set('ti_lsg_fw_sponsor_logo_campaign_content', $campaign_content);
  variable_set('ti_lsg_fw_sponsor_logo_campaign_count', $campaign_count);
}

/**
 * Form builder for sponsor logo campaign marketplace settings.
 */
function ti_amg_fw_sponsor_logo_campaign_marketplace_form($form, &$form_state) {
  $campaign_items = variable_get('ti_lsg_fw_sponsor_logo_campaign_marketplace', array());
  $campaign_items_count = variable_get('ti_lsg_fw_sponsor_logo_campaign_marketplace_count', 1);

  $form['#tree'] = TRUE;
  $form['sponsor_campaign'] = array(
    '#title' => 'Suppress Marketplace Ad For the Selected Pages',
    '#type' => 'fieldset',
    '#prefix' => '<div id="campaign-content-marketplace-fieldset-wrapper">',
    '#suffix' => '</div>',
  );

  if ($campaign_items_count == 0) {
    $campaign_items_count = 1;
  }

  $form_state['num_items'] = isset($form_state['num_items']) ? $form_state['num_items'] : $campaign_items_count;

  for ($i = 0; $i < $form_state['num_items']; $i++) {
    $form['sponsor_campaign'][$i]['node'] = array(
      '#type' => 'textfield',
      '#autocomplete_path' => 'campaign_autocomplete',
      '#default_value' => (isset($campaign_items[$i])) ? $campaign_items[$i] : '',
    );
  }

  $form['sponsor_campaign']['add_more'] = array(
    '#type' => 'submit',
    '#value' => t('Add one more'),
    '#submit' => array('ti_amg_fw_sponsor_logo_campaign_add_more_content'),
    '#ajax' => array(
      'callback' => 'ti_amg_fw_sponsor_logo_campaign_add_more_callback',
      'wrapper' => 'campaign-content-marketplace-fieldset-wrapper',
    ),
  );

  $form['submit'] = array(
    '#type' => 'submit',
    '#value' => t('Submit'),
  );

  return $form;
}

/**
 * Implements hook_form_submit().
 */
function ti_amg_fw_sponsor_logo_campaign_marketplace_form_submit($form, $form_state) {
  $campaign_content = array();
  $campaign_count = 0;
  foreach ($form_state['input']['sponsor_campaign'] as $key => $item) {
    if (!empty($item['node'])) {
      $campaign_content[] = $item['node'];
      $campaign_count++;
   }
 }
  variable_set('ti_lsg_fw_sponsor_logo_campaign_marketplace', $campaign_content);
  variable_set('ti_lsg_fw_sponsor_logo_campaign_marketplace_count', $campaign_count);
}
