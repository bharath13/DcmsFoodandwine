<?php
/**
 * @file
 * ti_amg_fw_tout.strongarm.inc
 */

/**
 * Implements hook_strongarm().
 */
function ti_amg_fw_tout_strongarm() {
  $export = array();

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'comment_anonymous_tout';
  $strongarm->value = '0';
  $export['comment_anonymous_tout'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'comment_default_mode_tout';
  $strongarm->value = 1;
  $export['comment_default_mode_tout'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'comment_default_per_page_tout';
  $strongarm->value = '50';
  $export['comment_default_per_page_tout'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'comment_form_location_tout';
  $strongarm->value = 1;
  $export['comment_form_location_tout'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'comment_preview_tout';
  $strongarm->value = '1';
  $export['comment_preview_tout'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'comment_subject_field_tout';
  $strongarm->value = 1;
  $export['comment_subject_field_tout'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'comment_tout';
  $strongarm->value = '1';
  $export['comment_tout'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'field_bundle_settings_node__tout';
  $strongarm->value = array(
    'view_modes' => array(
      'teaser' => array(
        'custom_settings' => TRUE,
      ),
      'full' => array(
        'custom_settings' => FALSE,
      ),
      'rss' => array(
        'custom_settings' => FALSE,
      ),
      'search_index' => array(
        'custom_settings' => FALSE,
      ),
      'search_result' => array(
        'custom_settings' => FALSE,
      ),
      'diff_standard' => array(
        'custom_settings' => FALSE,
      ),
      'tout_150x150' => array(
        'custom_settings' => TRUE,
      ),
      'tout_75x75' => array(
        'custom_settings' => TRUE,
      ),
      'tout_featured' => array(
        'custom_settings' => TRUE,
      ),
      'gallery_slide_text' => array(
        'custom_settings' => FALSE,
      ),
      'image_thumb' => array(
        'custom_settings' => FALSE,
      ),
      'image_300x300' => array(
        'custom_settings' => FALSE,
      ),
      'image_300xVariable' => array(
        'custom_settings' => FALSE,
      ),
      'image_400xVariable' => array(
        'custom_settings' => FALSE,
      ),
      'image_500xVariable' => array(
        'custom_settings' => FALSE,
      ),
      'image_620x300' => array(
        'custom_settings' => FALSE,
      ),
      'image_273x200' => array(
        'custom_settings' => FALSE,
      ),
      'image_620x350' => array(
        'custom_settings' => FALSE,
      ),
      'image_150x205' => array(
        'custom_settings' => FALSE,
      ),
      'image_150x150' => array(
        'custom_settings' => FALSE,
      ),
      'index_featured_image' => array(
        'custom_settings' => TRUE,
      ),
      'index_featured_text' => array(
        'custom_settings' => TRUE,
      ),
      'token' => array(
        'custom_settings' => FALSE,
      ),
      'tout_item' => array(
        'custom_settings' => TRUE,
      ),
      'html_email' => array(
        'custom_settings' => FALSE,
      ),
      'text_email' => array(
        'custom_settings' => FALSE,
      ),
      'tout_gallery_related_content' => array(
        'custom_settings' => FALSE,
      ),
      'gallery_slide_thumbnail' => array(
        'custom_settings' => FALSE,
      ),
      'calendar_day_text' => array(
        'custom_settings' => FALSE,
      ),
      'calendar_day_thumbnail' => array(
        'custom_settings' => FALSE,
      ),
      'dfs_75x75' => array(
        'custom_settings' => FALSE,
      ),
      'franchise_hero_600x300' => array(
        'custom_settings' => TRUE,
      ),
      'franchise_hero_400x400' => array(
        'custom_settings' => TRUE,
      ),
      'gallery_print' => array(
        'custom_settings' => FALSE,
      ),
      'gallery_franchise_tout_600x300' => array(
        'custom_settings' => FALSE,
      ),
      'image_gallery_slide' => array(
        'custom_settings' => FALSE,
      ),
    ),
    'extra_fields' => array(
      'form' => array(
        'metatags' => array(
          'weight' => '1',
        ),
        'title' => array(
          'weight' => '0',
        ),
        'path' => array(
          'weight' => '5',
        ),
        'redirect' => array(
          'weight' => '7',
        ),
        'xmlsitemap' => array(
          'weight' => '8',
        ),
      ),
      'display' => array(),
    ),
  );
  $export['field_bundle_settings_node__tout'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'menu_options_tout';
  $strongarm->value = array();
  $export['menu_options_tout'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'menu_parent_tout';
  $strongarm->value = 'main-menu:0';
  $export['menu_parent_tout'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'node_options_tout';
  $strongarm->value = array(
    0 => 'status',
  );
  $export['node_options_tout'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'node_preview_tout';
  $strongarm->value = '1';
  $export['node_preview_tout'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'node_submitted_tout';
  $strongarm->value = 0;
  $export['node_submitted_tout'] = $strongarm;

  return $export;
}
