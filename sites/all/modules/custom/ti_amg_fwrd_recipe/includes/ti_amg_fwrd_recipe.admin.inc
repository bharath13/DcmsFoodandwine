<?php

/**
 * @file
 * Admin page callbacks for recipe page.
 */

/**
 * Form builder for recipe carousel SOLR settings.
 * 
 */
function ti_amg_fwrd_recipe_carousel_solr_settings($form, &$form_state) {
  $form = array();

  $form['enable_solr_recipe_carousel'] = array(
    '#title' => 'Enable SOLR on Recipe Carousel.',
    '#type' => 'fieldset',
  );

  $form['enable_solr_recipe_carousel']['enable_solr_on_recipe_carousel'] = array(
    '#title' => 'Enable SOLR for Recipe Carousel.',
    '#description' => 'If check the checkbox, it will enable SOLR for recipe carousel',
    '#type' => 'checkbox',
    '#default_value' => variable_get('enable_solr_on_recipe_carousel', FALSE),
  );

  return system_settings_form($form);
}

/**
 * Form builder for SOLR recipe carousel cache settings.
 */
function ti_amg_fwrd_recipe_carousel_cache_settings($form, &$form_state) {
  $form = array();
  if (variable_get('enable_solr_on_recipe_carousel', FALSE)) {
    $form['enable_caching_solr_recipe_carousel'] = array(
      '#title' => 'Enable cache on Recipe Carousel.',
      '#type' => 'fieldset',
    );
    $form['enable_caching_solr_recipe_carousel']['enable_cache_on_solr_carousel'] = array(
      '#title' => 'Enable cache on Recipe Carousel.',
      '#description' => 'If check the checkbox, it will enable caching on SOLR recipe carousel',
      '#type' => 'checkbox',
      '#default_value' => variable_get('enable_cache_on_solr_carousel', FALSE),
    );
    if (variable_get('enable_cache_on_solr_carousel', FALSE)) {
      $form['recipe_carousel_cache_settings']['recipe_carousel_cache_bin'] = array(
        '#title' => 'Cache Bin for SOLR recipe carousel',
        '#description' => 'Cache-Bin name on which the SOLR recipe carousel to get cache',
        '#type' => 'textfield',
        '#default_value' => variable_get('recipe_carousel_cache_bin', 'cache_recipe_carousel'),
      );
      $form['clear_recipe_carousel_cache_bin'] = array(
        '#description' => 'If check the checkbox, it will enable caching on SOLR recipe carousel',
        '#type' => 'submit',
        '#value' => 'Clear Cache bin',
        '#submit' => array('ti_amg_fwrd_recipe_clear_cache_bin'),
      );
    }

    return system_settings_form($form);
  }
  else {
    // Showing Waring message, if no SOLR is enabled on recipe carousel.
    $form['cache_settings_warning'] = array(
      '#markup' => 'Please Enable SOLR on recipe carousel to add Cache.',
    );
    return $form;
  }
}

/**
 * Call back function to clear custom cache bin for SOLR recipe carousel.
 */
function ti_amg_fwrd_recipe_clear_cache_bin() {
  $recipe_carousel_cache_bin = variable_get('recipe_carousel_cache_bin', FALSE);
  if ($recipe_carousel_cache_bin) {
    cache_clear_all('*', $recipe_carousel_cache_bin, TRUE);
  }
}
