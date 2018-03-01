<?php

/**
 * @file
 * Module used for FoodAndWine customizations.
 */

/**
 * Implements hook_menu().
 */
function ti_amg_fwrd_custom_menu() {

  $items = array();

  $items['admin/config/development/performance/cache-settings'] = array(
    'title' => t('Custom Cache Settings'),
    'type' => MENU_LOCAL_TASK,
    'page callback' => 'drupal_get_form',
    'page arguments' => array('ti_amg_fwrd_custom_cache_settings_form'),
    'access arguments' => array('administer site configuration'),
    'weight' => 1,
  );

  $items['admin/config/foodandwine/general-settings/video-transcript-settings'] = array(
    'title' => t('Video Transcript Settings'),
    'type' => MENU_LOCAL_TASK,
    'access arguments' => array('editor settings'),
    'page callback' => 'drupal_get_form',
    'page arguments' => array('ti_amg_fwrd_custom_video_transcript_settings'),
    'weight' => -7,
  );

  // HTML Sitemaps.
  $items['sitemap'] = array(
    'title' => 'Sitemap',
    'page callback' => 'ti_amg_fwrd_custom_sitemap_html_links',
    'access arguments' => array('access content'),
    'type' => MENU_CALLBACK,
  );

  // HTML Sitemap Channel Paths.
  $children = _ti_amg_fwrd_custom_parent_catergory_list();
  if ($children) {
    foreach ($children as $child) {
      $title = ti_amg_fwrd_custom_convert_accented_char(ti_amg_fw_custom_remove_accents(strtolower($child['name'])));
      $title = pathauto_cleanstring($title);

      $items['sitemap/' . $title] = array(
        'title' => $child['name'] . ' Sitemap',
        'page callback' => 'ti_amg_fwrd_custom_children_list_details',
        'page arguments' => array($child['name'], $child['tid']),
        'access arguments' => array('access content'),
        'type' => MENU_CALLBACK,
      );

      $children_terms = ti_amg_fwrd_custom_children_list($child['name']);
      if ($children_terms) {
        foreach ($children_terms as $children_term) {
          $children_title = $children_term['title'];
          $items['sitemap/' . $title . '/' . $children_title] = array(
            'title' => $children_term['name'] . ' Sitemap',
            'page callback' => 'ti_amg_fwrd_custom_grand_children_list_details',
            'page arguments' => array($children_term['name'], $child['name'], $children_term['tid']),
            'access arguments' => array('access content'),
            'type' => MENU_CALLBACK,
          );

          $grand_children = ti_amg_fwrd_custom_grand_children_list($children_term['name'], $child['name']);
          if ($grand_children) {
            foreach ($grand_children as $grand_child) {
              $grand_child_title = $grand_child['title'];
              $items['sitemap/' . $title . '/' . $children_title . '/' . $grand_child_title] = array(
                'title' => $grand_child['name'] . ' Sitemap',
                'page callback' => 'ti_amg_fwrd_custom_greatgrand_children_list_details',
                'page arguments' => array($grand_child['name'], $children_term['name'], $child['name'], $grand_child['tid']),
                'access arguments' => array('access content'),
                'type' => MENU_CALLBACK,
              );


              $great_grand_children = ti_amg_fwrd_custom_greatgrand_children_list($grand_child['name'], $children_term['name'], $child['name']);
              if ($great_grand_children) {
                foreach ($great_grand_children as $great_grand_child) {
                  $great_grand_child_title = $great_grand_child['title'];
                  $items['sitemap/' . $title . '/' . $children_title . '/' . $grand_child_title . '/' . $great_grand_child_title] = array(
                    'title' => $great_grand_child['name'] . ' Sitemap',
                    'page callback' => 'ti_amg_fwrd_category_get_nodes_by_ggterm',
                    'page arguments' => array($great_grand_child['tid'], $great_grand_child['name']),
                    'access arguments' => array('access content'),
                    'type' => MENU_CALLBACK,
                  );
                }
              }
            }
          }
        }
      }
    }
  }

  return $items;
}

/**
 * Implements custom cache_settings_form().
 */
function ti_amg_fwrd_custom_cache_settings_form() {
  $form['cache_settings'] = array(
    '#title' => 'Custom Cache Settings',
    '#type' => 'fieldset',
  );
  $form['cache_settings']['home_edge_control_maxage'] = array(
    '#type' => 'textfield',
    '#title' => t('Home page edge control maxage (in seconds)'),
    '#default_value' => variable_get('home_edge_control_maxage', ''),
  );
  $form['cache_settings']['home_browser_maxage'] = array(
    '#type' => 'textfield',
    '#title' => t('Home page browser maxage (in seconds)'),
    '#default_value' => variable_get('home_browser_maxage', ''),
  );
  $form['cache_settings']['site_edge_control_maxage'] = array(
    '#type' => 'textfield',
    '#title' => t('Sitewide edge control maxage (in seconds)'),
    '#default_value' => variable_get('site_edge_control_maxage', ''),
  );
  $form['cache_settings']['site_browser_maxage'] = array(
    '#type' => 'textfield',
    '#title' => t('Sitewide browser maxage (in seconds)'),
    '#default_value' => variable_get('site_browser_maxage', ''),
  );

  return system_settings_form($form);
}

function ti_amg_fwrd_custom_get_ajax() {
  return '';
}

/**
 * Video Transcript Settings Form.
 */
function ti_amg_fwrd_custom_video_transcript_settings() {
  $form['video_transcript_settings'] = array(
    '#title' => 'Video Transcript Settings',
    '#type' => 'fieldset',
  );
  $form['video_transcript_settings']['video_transcript'] = array(
    '#type' => 'checkbox',
    '#title' => t('Enable Video Transcripts'),
    '#default_value' => variable_get('video_transcript', ''),
  );
  return system_settings_form($form);
}
