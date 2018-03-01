<?php
/**
 * @file
 * ti_amg_fw_video_landing_page_content_type.strongarm.inc
 */

/**
 * Implements hook_strongarm().
 */
function ti_amg_fw_video_landing_page_content_type_strongarm() {
  $export = array();

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'comment_anonymous_video_landing_page';
  $strongarm->value = 0;
  $export['comment_anonymous_video_landing_page'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'comment_default_mode_video_landing_page';
  $strongarm->value = 0;
  $export['comment_default_mode_video_landing_page'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'comment_default_per_page_video_landing_page';
  $strongarm->value = '50';
  $export['comment_default_per_page_video_landing_page'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'comment_form_location_video_landing_page';
  $strongarm->value = 1;
  $export['comment_form_location_video_landing_page'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'comment_preview_video_landing_page';
  $strongarm->value = '1';
  $export['comment_preview_video_landing_page'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'comment_subject_field_video_landing_page';
  $strongarm->value = 1;
  $export['comment_subject_field_video_landing_page'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'comment_video_landing_page';
  $strongarm->value = '1';
  $export['comment_video_landing_page'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'field_bundle_settings_node__video_landing_page';
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
      'tout_gallery_related_content' => array(
        'custom_settings' => FALSE,
      ),
      'gallery_print' => array(
        'custom_settings' => FALSE,
      ),
      'gallery_franchise_tout_600x300' => array(
        'custom_settings' => FALSE,
      ),
      'image_thumb' => array(
        'custom_settings' => FALSE,
      ),
      'image_150x150' => array(
        'custom_settings' => FALSE,
      ),
      'image_300x300' => array(
        'custom_settings' => FALSE,
      ),
      'image_420x420' => array(
        'custom_settings' => FALSE,
      ),
      'image_500xVariable' => array(
        'custom_settings' => FALSE,
      ),
      'image_768x768' => array(
        'custom_settings' => FALSE,
      ),
      'tout_related_videos' => array(
        'custom_settings' => FALSE,
      ),
      'token' => array(
        'custom_settings' => FALSE,
      ),
    ),
    'extra_fields' => array(
      'form' => array(
        'metatags' => array(
          'weight' => '12',
        ),
        'title' => array(
          'weight' => '0',
        ),
        'path' => array(
          'weight' => '15',
        ),
        'redirect' => array(
          'weight' => '13',
        ),
        'xmlsitemap' => array(
          'weight' => '14',
        ),
      ),
      'display' => array(),
    ),
  );
  $export['field_bundle_settings_node__video_landing_page'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'menu_options_video_landing_page';
  $strongarm->value = array(
    0 => 'main-menu',
  );
  $export['menu_options_video_landing_page'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'menu_parent_video_landing_page';
  $strongarm->value = 'main-menu:0';
  $export['menu_parent_video_landing_page'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'node_options_video_landing_page';
  $strongarm->value = array(
    0 => 'status',
  );
  $export['node_options_video_landing_page'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'node_preview_video_landing_page';
  $strongarm->value = '1';
  $export['node_preview_video_landing_page'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'node_submitted_video_landing_page';
  $strongarm->value = 0;
  $export['node_submitted_video_landing_page'] = $strongarm;

  return $export;
}
