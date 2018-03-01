<?php
/**
 * @file
 * ti_tout_content_type.strongarm.inc
 */

/**
 * Implements hook_strongarm().
 */
function ti_tout_content_type_strongarm() {
  $export = array();

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'field_bundle_settings_node__tout';
  $strongarm->value = array(
    'view_modes' => array(
      'teaser' => array(
        'custom_settings' => TRUE,
      ),
      'tout_featured' => array(
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
      'tout_item' => array(
        'custom_settings' => FALSE,
      ),
      'calendar_day_text' => array(
        'custom_settings' => FALSE,
      ),
      'calendar_day_thumbnail' => array(
        'custom_settings' => FALSE,
      ),
      'tout_channel_left_nav' => array(
        'custom_settings' => TRUE,
      ),
      'franchise_hero_600x300' => array(
        'custom_settings' => FALSE,
      ),
      'franchise_hero_400x400' => array(
        'custom_settings' => FALSE,
      ),
      'gallery_slide_text' => array(
        'custom_settings' => FALSE,
      ),
      'gallery_slide_thumbnail' => array(
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
      'image_gallery_slide' => array(
        'custom_settings' => FALSE,
      ),
      'index_featured_image' => array(
        'custom_settings' => FALSE,
      ),
      'index_featured_text' => array(
        'custom_settings' => FALSE,
      ),
      'html_email' => array(
        'custom_settings' => FALSE,
      ),
      'text_email' => array(
        'custom_settings' => FALSE,
      ),
      'token' => array(
        'custom_settings' => FALSE,
      ),
      'tout_network' => array(
        'custom_settings' => TRUE,
      ),
    ),
    'extra_fields' => array(
      'form' => array(
        'title' => array(
          'weight' => '1',
        ),
        'path' => array(
          'weight' => '9',
        ),
        'redirect' => array(
          'weight' => '10',
        ),
        'metatags' => array(
          'weight' => '11',
        ),
        'xmlsitemap' => array(
          'weight' => '12',
        ),
      ),
      'display' => array(),
    ),
  );
  $export['field_bundle_settings_node__tout'] = $strongarm;

  return $export;
}
