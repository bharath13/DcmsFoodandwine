<?php
/**
 * @file
 * ti_content_api_config.strongarm.inc
 */

/**
 * Implements hook_strongarm().
 */
function ti_content_api_config_strongarm() {
  $export = array();

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'ti_content_api_additional_image_fields';
  $strongarm->value = 'multiple_images';
  $export['ti_content_api_additional_image_fields'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'ti_content_api_app_list_thumbnail_2x_article_style';
  $strongarm->value = '4_3_horizontal_-_1200x900';
  $export['ti_content_api_app_list_thumbnail_2x_article_style'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'ti_content_api_app_list_thumbnail_2x_gallery_style';
  $strongarm->value = '550x550';
  $export['ti_content_api_app_list_thumbnail_2x_gallery_style'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'ti_content_api_app_list_thumbnail_2x_recipe_style';
  $strongarm->value = 'app_list_thumbnail_2x';
  $export['ti_content_api_app_list_thumbnail_2x_recipe_style'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'ti_content_api_app_list_thumbnail_2x_video_style';
  $strongarm->value = '4_3_horizontal_-_1200x900';
  $export['ti_content_api_app_list_thumbnail_2x_video_style'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'ti_content_api_article_image_field_name';
  $strongarm->value = 'images';
  $export['ti_content_api_article_image_field_name'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'ti_content_api_brightcove_pattern';
  $strongarm->value = '/\\[brightcove:(\\d+)[\\s+]?(\\w+)?\\]|\\[tibrightcove_inline videoid="(\\d+)"\\]/is';
  $export['ti_content_api_brightcove_pattern'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'ti_content_api_caption_field_name';
  $strongarm->value = 'deck';
  $export['ti_content_api_caption_field_name'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'ti_content_api_credit_field_name';
  $strongarm->value = 'credit';
  $export['ti_content_api_credit_field_name'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'ti_content_api_disable_jumpstart_viewplay';
  $strongarm->value = '1';
  $export['ti_content_api_disable_jumpstart_viewplay'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'ti_content_api_force_default_gallery_type';
  $strongarm->value = '1';
  $export['ti_content_api_force_default_gallery_type'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'ti_content_api_gallery_ctype';
  $strongarm->value = 'gallery';
  $export['ti_content_api_gallery_ctype'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'ti_content_api_gallery_image_field_name';
  $strongarm->value = 'slide_info';
  $export['ti_content_api_gallery_image_field_name'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'ti_content_api_gallery_seo_path_field';
  $strongarm->value = 'seo_path';
  $export['ti_content_api_gallery_seo_path_field'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'ti_content_api_gallery_type';
  $strongarm->value = 'vertical';
  $export['ti_content_api_gallery_type'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'ti_content_api_galley_fc_deck_field_name';
  $strongarm->value = 'slide_deck';
  $export['ti_content_api_galley_fc_deck_field_name'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'ti_content_api_galley_fc_slide_field_name';
  $strongarm->value = 'slide_image';
  $export['ti_content_api_galley_fc_slide_field_name'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'ti_content_api_galley_fc_title_field_name';
  $strongarm->value = 'slide_title';
  $export['ti_content_api_galley_fc_title_field_name'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'ti_content_api_galley_use_field_collection';
  $strongarm->value = '1';
  $export['ti_content_api_galley_use_field_collection'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'ti_content_api_image_field_name';
  $strongarm->value = 'image';
  $export['ti_content_api_image_field_name'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'ti_content_api_marquee_large_2x_article_style';
  $strongarm->value = '4_3_horizontal_-_1200x900';
  $export['ti_content_api_marquee_large_2x_article_style'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'ti_content_api_marquee_large_2x_gallery_style';
  $strongarm->value = '4_3_horizontal_inbody_900x506';
  $export['ti_content_api_marquee_large_2x_gallery_style'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'ti_content_api_marquee_large_2x_recipe_style';
  $strongarm->value = '4_3_horizontal_-_1200x900';
  $export['ti_content_api_marquee_large_2x_recipe_style'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'ti_content_api_marquee_large_2x_video_style';
  $strongarm->value = '4_3_horizontal_-_1200x900';
  $export['ti_content_api_marquee_large_2x_video_style'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'ti_content_api_node_types';
  $strongarm->value = array(
    'article' => 'article',
    'gallery' => 'gallery',
    'image' => 'image',
    'person' => 'person',
    'recipe' => 'recipe',
    'tout' => 'tout',
    'video' => 'video',
    'page' => 0,
    'blog' => 0,
    'category' => 0,
    'channel_landing_page' => 0,
    'channel_landing_page_responsive' => 0,
    'featured_directory' => 0,
    'home_page' => 0,
    'home_page_responsive' => 0,
    'newsletter' => 0,
    'partner_feed' => 0,
    'place' => 0,
    'storied' => 0,
    'sub_menu_settings' => 0,
    'video_landing_page' => 0,
    'webform' => 0,
  );
  $export['ti_content_api_node_types'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'ti_content_api_polldaddy_pattern';
  $strongarm->value = '/\\[polldaddy:(\\d+) ?([A-Za-z0-9\\-\\_]+)?\\]|\\[polldaddy [a-z]+=\\"(\\d+)\\".*\\]/';
  $export['ti_content_api_polldaddy_pattern'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'ti_content_api_send_recipe_attribution';
  $strongarm->value = '1';
  $export['ti_content_api_send_recipe_attribution'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'ti_content_api_send_recipe_rating';
  $strongarm->value = '1';
  $export['ti_content_api_send_recipe_rating'] = $strongarm;

  return $export;
}
