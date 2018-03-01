<?php

/**
 * @file
 * Boolean Conversion.
 */

$plugin = array(
  'form' => 'springboard_load_author_form',
  'callback' => 'springboard_load_author',
  'name' => 'Get springboard author',
  'multi' => 'loop',
  'category' => 'Springboard',
);

/**
 * Callback function to build form.
 */
function springboard_load_author_form($importer, $element_key, $settings) {
  $users = entity_load('user');
  $user_names = array();
  foreach ($users as $user) {
    $user_names[$user->name] = $user->name;
  }
  $form = array();
  $form['springboard_user'] = array(
    '#type' => 'select',
    '#title' => t('Select Springboard User'),
    '#default_value' => $settings['springboard_user'] ? $settings['springboard_user'] : '' ,
    '#options' => $user_names,
    '#multiple' => FALSE,
    '#weight' => 8,
  );
  return $form;
}

/**
 * Callback function for boolean tamper plugin.
 */
function springboard_load_author($source, $item_key, $element_key, &$field, $settings) {
  if (isset($settings['springboard_user'])) {
    $user = user_load_by_name($settings['springboard_user']);
    if (is_object($user)) {
      $field = $user->uid;
    }
    else {
      $field = 0;
    }
  }
}
