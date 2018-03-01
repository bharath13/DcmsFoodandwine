<?php

/**
 * @file
 * Administrator functions.
 */

/**
 * Admin page.
 */
function skyword_adminpage() {
  $form = array();

  $markup = t("
<p>The Skyword Module allows articles written with the Skyword platform to be
published in Drupal.</p>
<p>To learn more about how Skyword help you reach and engage your audience,
please contact us at
<a href='mailto:learnmore@skyword.com'>learnmore@skyword.com</a> or visit
<a href='www.skyword.com' target='_blank'>www.skyword.com</a>.</p>
<p>This is a beta plugin. Please contact Skyword Support
(<a href='mailto:support@skyword.com'>support@skyword.com</a>)
if you have any questions.</p>");

  $form['skyword_adminpage'] = array(
    '#type' => 'item',
    '#title' => t("Skyword Module"),
    '#markup' => $markup,
  );

  $description = t('The Skyword API Key is used to verify your program and allow the Skyword platform to publish to this site.');
  $form['skyword_api_key'] = array(
    '#type' => 'textfield',
    '#title' => t('Skyword API Key'),
    '#default_value' => variable_get('skyword_api_key'),
    '#description' => $description,
    '#required' => TRUE,
  );

  $description = t('The OpenGraph tags are used to properly send information to');
  $form['skyword_enable_og'] = array(
    '#type' => 'checkbox',
    '#title' => t('Include the Facebook OpenGraph tags on the article node'),
    '#default_value' => variable_get('skyword_enable_og'),
    '#description' => $description,
    '#required' => FALSE,
  );

  $description = t('The meta description tag provides additional information for search engines to properly index the web page.');
  $form['skyword_enable_meta'] = array(
    '#type' => 'checkbox',
    '#title' => t('Include the meta description tag on the article node.'),
    '#default_value' => variable_get('skyword_enable_meta'),
    '#description' => $description,
    '#required' => FALSE,
  );

  $description = t('The Google News Keyword tag provides additional information for Google to properly index the web page for news searches.');
  $form['skyword_enable_keywords'] = array(
    '#type' => 'checkbox',
    '#title' => t('Include the Google News Keyword tag on the article node.'),
    '#default_value' => variable_get('skyword_enable_keywords'),
    '#description' => $description,
    '#required' => FALSE,
  );

  $description = t('The SEO Optimized title provided by Skyword will replace the title of the article.');
  $form['skyword_enable_title'] = array(
    '#type' => 'checkbox',
    '#title' => t('Update the page title tag with an SEO Optimized title'),
    '#default_value' => variable_get('skyword_enable_title'),
    '#description' => $description,
    '#required' => FALSE,
  );

  return system_settings_form($form);
}
