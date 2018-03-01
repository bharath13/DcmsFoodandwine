<?php
/**
 * @file
 * ti_video_content_type.strongarm.inc
 */

/**
 * Implements hook_strongarm().
 */
function ti_video_content_type_strongarm() {
  $export = array();

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'comment_anonymous_video';
  $strongarm->value = 0;
  $export['comment_anonymous_video'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'comment_default_mode_video';
  $strongarm->value = 1;
  $export['comment_default_mode_video'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'comment_default_per_page_video';
  $strongarm->value = '50';
  $export['comment_default_per_page_video'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'comment_form_location_video';
  $strongarm->value = 1;
  $export['comment_form_location_video'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'comment_preview_video';
  $strongarm->value = '1';
  $export['comment_preview_video'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'comment_subject_field_video';
  $strongarm->value = 1;
  $export['comment_subject_field_video'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'comment_video';
  $strongarm->value = '2';
  $export['comment_video'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'field_bundle_settings_node__video';
  $strongarm->value = array(
    'view_modes' => array(
      'teaser' => array(
        'custom_settings' => TRUE,
      ),
      'tout_150x150' => array(
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
        'custom_settings' => TRUE,
      ),
      'search_result' => array(
        'custom_settings' => FALSE,
      ),
      'diff_standard' => array(
        'custom_settings' => FALSE,
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
      'tout_related_videos' => array(
        'custom_settings' => TRUE,
      ),
      'calendar_day_image' => array(
        'custom_settings' => FALSE,
      ),
      'gallery_slide_image' => array(
        'custom_settings' => FALSE,
      ),
      'foodandwine' => array(
        'custom_settings' => FALSE,
      ),
      'image_420x420' => array(
        'custom_settings' => FALSE,
      ),
      'image_768x768' => array(
        'custom_settings' => FALSE,
      ),
      'topic_150' => array(
        'custom_settings' => TRUE,
      ),
      'homepage_feature_promo_image' => array(
        'custom_settings' => FALSE,
      ),
      'homepage_feature_promo_text' => array(
        'custom_settings' => FALSE,
      ),
      'foodandwine_75' => array(
        'custom_settings' => FALSE,
      ),
      'pronto_json' => array(
        'custom_settings' => TRUE,
      ),
      'pronto_brightcove_video_json' => array(
        'custom_settings' => FALSE,
      ),
      'ut_video_embed' => array(
        'custom_settings' => TRUE,
      ),
      'pronto_json_slides' => array(
        'custom_settings' => TRUE,
      ),
      'newsletter' => array(
        'custom_settings' => FALSE,
      ),
      'just_in' => array(
        'custom_settings' => FALSE,
      ),
      'solr_search_author' => array(
        'custom_settings' => FALSE,
      ),
      'solr_search_author_reference' => array(
        'custom_settings' => FALSE,
      ),
      'pronto_json_sub_recipe' => array(
        'custom_settings' => FALSE,
      ),
      'pronto_json_figure' => array(
        'custom_settings' => FALSE,
      ),
      'pronto_json_inline_embed' => array(
        'custom_settings' => FALSE,
      ),
      'json_ld_json' => array(
        'custom_settings' => FALSE,
      ),
      'ti_schema_org_in_article' => array(
        'custom_settings' => FALSE,
      ),
      'ti_schema_org_in_gallery' => array(
        'custom_settings' => FALSE,
      ),
      'ut_image_embed' => array(
        'custom_settings' => FALSE,
      ),
      'ut_article_related_link' => array(
        'custom_settings' => FALSE,
      ),
      'ut_article_related_content' => array(
        'custom_settings' => FALSE,
      ),
      'ut_gallery_embed' => array(
        'custom_settings' => FALSE,
      ),
      'ut_article_body' => array(
        'custom_settings' => FALSE,
      ),
      'xmlsitemap' => array(
        'custom_settings' => TRUE,
      ),
      'xmlsitemap_video' => array(
        'custom_settings' => TRUE,
      ),
      'xmlsitemap_news' => array(
        'custom_settings' => FALSE,
      ),
      'xmlsitemap_image' => array(
        'custom_settings' => FALSE,
      ),
    ),
    'extra_fields' => array(
      'form' => array(
        'title' => array(
          'weight' => '6',
        ),
        'path' => array(
          'weight' => '14',
        ),
        'metatags' => array(
          'weight' => '16',
        ),
        'redirect' => array(
          'weight' => '13',
        ),
        'xmlsitemap' => array(
          'weight' => '15',
        ),
      ),
      'display' => array(
        'pronto_component_node_created' => array(
          'default' => array(
            'weight' => '0',
            'label' => 'above',
            'type' => 'visible',
            'visible' => TRUE,
            'settings' => array(),
          ),
          'pronto_json' => array(
            'weight' => '0',
            'label' => 'above',
            'type' => 'hidden',
            'visible' => FALSE,
            'settings' => array(),
          ),
          'pronto_json_slides' => array(
            'weight' => '42',
            'label' => 'above',
            'type' => 'hidden',
            'visible' => FALSE,
            'settings' => array(),
          ),
          'ut_video_embed' => array(
            'weight' => '4',
            'label' => 'above',
            'type' => 'hidden',
            'visible' => FALSE,
            'settings' => array(),
          ),
          'xmlsitemap' => array(
            'weight' => '0',
            'label' => 'above',
            'type' => 'hidden',
            'visible' => FALSE,
            'settings' => array(),
          ),
          'xmlsitemap_video' => array(
            'weight' => '0',
            'label' => 'above',
            'type' => 'hidden',
            'visible' => FALSE,
            'settings' => array(),
          ),
        ),
        'pronto_component_published_at' => array(
          'default' => array(
            'weight' => '0',
            'label' => 'above',
            'type' => 'visible',
            'visible' => TRUE,
            'settings' => array(),
          ),
          'pronto_json' => array(
            'weight' => '0',
            'label' => 'above',
            'type' => 'hidden',
            'visible' => FALSE,
            'settings' => array(),
          ),
          'pronto_json_slides' => array(
            'weight' => '43',
            'label' => 'above',
            'type' => 'hidden',
            'visible' => FALSE,
            'settings' => array(),
          ),
          'ut_video_embed' => array(
            'weight' => '1',
            'label' => 'above',
            'type' => 'hidden',
            'visible' => FALSE,
            'settings' => array(),
          ),
          'xmlsitemap' => array(
            'weight' => '0',
            'label' => 'above',
            'type' => 'hidden',
            'visible' => FALSE,
            'settings' => array(),
          ),
          'xmlsitemap_video' => array(
            'weight' => '0',
            'label' => 'above',
            'type' => 'hidden',
            'visible' => FALSE,
            'settings' => array(),
          ),
        ),
        'pronto_component_metatag' => array(
          'default' => array(
            'weight' => '0',
            'label' => 'above',
            'type' => 'visible',
            'visible' => TRUE,
            'settings' => array(),
          ),
          'pronto_json' => array(
            'weight' => '0',
            'visible' => FALSE,
          ),
          'ut_video_embed' => array(
            'weight' => '0',
            'label' => 'hidden',
            'type' => 'hidden',
            'visible' => FALSE,
            'settings' => array(),
          ),
          'pronto_json_slides' => array(
            'weight' => '0',
            'visible' => TRUE,
          ),
          'xmlsitemap' => array(
            'weight' => '0',
            'label' => 'above',
            'type' => 'hidden',
            'visible' => FALSE,
            'settings' => array(),
          ),
          'xmlsitemap_video' => array(
            'weight' => '0',
            'label' => 'above',
            'type' => 'hidden',
            'visible' => FALSE,
            'settings' => array(),
          ),
        ),
        'pronto_component_social_share' => array(
          'default' => array(
            'weight' => '0',
            'label' => 'above',
            'type' => 'visible',
            'visible' => TRUE,
            'settings' => array(),
          ),
          'pronto_json' => array(
            'weight' => '0',
            'label' => 'above',
            'type' => 'hidden',
            'visible' => FALSE,
            'settings' => array(),
          ),
          'pronto_json_slides' => array(
            'weight' => '40',
            'label' => 'above',
            'type' => 'hidden',
            'visible' => FALSE,
            'settings' => array(),
          ),
          'ut_video_embed' => array(
            'weight' => '2',
            'label' => 'above',
            'type' => 'hidden',
            'visible' => FALSE,
            'settings' => array(),
          ),
          'xmlsitemap' => array(
            'weight' => '0',
            'label' => 'above',
            'type' => 'hidden',
            'visible' => FALSE,
            'settings' => array(),
          ),
          'xmlsitemap_video' => array(
            'weight' => '0',
            'label' => 'above',
            'type' => 'hidden',
            'visible' => FALSE,
            'settings' => array(),
          ),
        ),
        'pronto_component_url' => array(
          'default' => array(
            'weight' => '0',
            'label' => 'above',
            'type' => 'visible',
            'visible' => TRUE,
            'settings' => array(),
          ),
          'pronto_json' => array(
            'weight' => '0',
            'label' => 'above',
            'type' => 'hidden',
            'visible' => FALSE,
            'settings' => array(),
          ),
          'pronto_json_slides' => array(
            'weight' => '45',
            'label' => 'above',
            'type' => 'hidden',
            'visible' => FALSE,
            'settings' => array(),
          ),
          'ut_video_embed' => array(
            'weight' => '3',
            'label' => 'above',
            'type' => 'hidden',
            'visible' => FALSE,
            'settings' => array(),
          ),
          'xmlsitemap' => array(
            'weight' => '0',
            'label' => 'above',
            'type' => 'hidden',
            'visible' => FALSE,
            'settings' => array(),
          ),
          'xmlsitemap_video' => array(
            'weight' => '0',
            'label' => 'above',
            'type' => 'hidden',
            'visible' => FALSE,
            'settings' => array(),
          ),
        ),
        'pronto_component_author_node_title' => array(
          'pronto_json' => array(
            'weight' => '0',
            'label' => 'above',
            'type' => 'hidden',
            'visible' => FALSE,
            'settings' => array(),
          ),
          'default' => array(
            'weight' => '0',
            'label' => 'above',
            'type' => 'hidden',
            'visible' => FALSE,
            'settings' => array(),
          ),
          'pronto_json_slides' => array(
            'weight' => '44',
            'label' => 'above',
            'type' => 'hidden',
            'visible' => FALSE,
            'settings' => array(),
          ),
          'xmlsitemap' => array(
            'weight' => '0',
            'label' => 'above',
            'type' => 'hidden',
            'visible' => FALSE,
            'settings' => array(),
          ),
          'xmlsitemap_video' => array(
            'weight' => '0',
            'label' => 'above',
            'type' => 'hidden',
            'visible' => FALSE,
            'settings' => array(),
          ),
          'ut_video_embed' => array(
            'weight' => '0',
            'label' => 'above',
            'type' => 'hidden',
            'visible' => FALSE,
            'settings' => array(),
          ),
        ),
        'pronto_component_recipe_active_time' => array(
          'default' => array(
            'weight' => '99',
            'label' => 'above',
            'type' => 'hidden',
            'visible' => FALSE,
            'settings' => array(),
          ),
          'ut_video_embed' => array(
            'weight' => '62',
            'label' => 'above',
            'type' => 'hidden',
            'visible' => FALSE,
            'settings' => array(),
          ),
          'xmlsitemap' => array(
            'weight' => '99',
            'label' => 'above',
            'type' => 'hidden',
            'visible' => FALSE,
            'settings' => array(),
          ),
          'xmlsitemap_video' => array(
            'weight' => '99',
            'label' => 'above',
            'type' => 'hidden',
            'visible' => FALSE,
            'settings' => array(),
          ),
        ),
        'pronto_component_recipe_total_time' => array(
          'default' => array(
            'weight' => '98',
            'label' => 'above',
            'type' => 'hidden',
            'visible' => FALSE,
            'settings' => array(),
          ),
          'ut_video_embed' => array(
            'weight' => '61',
            'label' => 'above',
            'type' => 'hidden',
            'visible' => FALSE,
            'settings' => array(),
          ),
          'xmlsitemap' => array(
            'weight' => '98',
            'label' => 'above',
            'type' => 'hidden',
            'visible' => FALSE,
            'settings' => array(),
          ),
          'xmlsitemap_video' => array(
            'weight' => '98',
            'label' => 'above',
            'type' => 'hidden',
            'visible' => FALSE,
            'settings' => array(),
          ),
        ),
        'pronto_component_node_title' => array(
          'default' => array(
            'weight' => '0',
            'label' => 'above',
            'type' => 'hidden',
            'visible' => FALSE,
            'settings' => array(),
          ),
          'ut_video_embed' => array(
            'weight' => '45',
            'label' => 'above',
            'type' => 'hidden',
            'visible' => FALSE,
            'settings' => array(),
          ),
          'xmlsitemap' => array(
            'weight' => '0',
            'label' => 'above',
            'type' => 'hidden',
            'visible' => FALSE,
            'settings' => array(),
          ),
          'xmlsitemap_video' => array(
            'weight' => '0',
            'label' => 'above',
            'type' => 'hidden',
            'visible' => FALSE,
            'settings' => array(),
          ),
        ),
        'title' => array(
          'default' => array(
            'weight' => '-5',
            'label' => 'above',
            'type' => 'hidden',
            'visible' => FALSE,
            'settings' => array(),
          ),
          'ut_video_embed' => array(
            'weight' => '37',
            'label' => 'above',
            'type' => 'hidden',
            'visible' => FALSE,
            'settings' => array(),
          ),
          'xmlsitemap' => array(
            'weight' => '-5',
            'label' => 'above',
            'type' => 'hidden',
            'visible' => FALSE,
            'settings' => array(),
          ),
          'xmlsitemap_video' => array(
            'weight' => '-5',
            'label' => 'above',
            'type' => 'hidden',
            'visible' => FALSE,
            'settings' => array(),
          ),
        ),
        'ti_schema_org_jsonld_date_node_created' => array(
          'default' => array(
            'weight' => '0',
            'label' => 'above',
            'type' => 'hidden',
            'visible' => FALSE,
            'settings' => array(),
          ),
          'ut_video_embed' => array(
            'weight' => '46',
            'label' => 'above',
            'type' => 'hidden',
            'visible' => FALSE,
            'settings' => array(),
          ),
          'xmlsitemap' => array(
            'weight' => '0',
            'label' => 'above',
            'type' => 'hidden',
            'visible' => FALSE,
            'settings' => array(),
          ),
          'xmlsitemap_video' => array(
            'weight' => '0',
            'label' => 'above',
            'type' => 'hidden',
            'visible' => FALSE,
            'settings' => array(),
          ),
        ),
        'ti_schema_org_jsonld_date_published_at' => array(
          'default' => array(
            'weight' => '0',
            'label' => 'above',
            'type' => 'hidden',
            'visible' => FALSE,
            'settings' => array(),
          ),
          'ut_video_embed' => array(
            'weight' => '47',
            'label' => 'above',
            'type' => 'hidden',
            'visible' => FALSE,
            'settings' => array(),
          ),
          'xmlsitemap' => array(
            'weight' => '0',
            'label' => 'above',
            'type' => 'hidden',
            'visible' => FALSE,
            'settings' => array(),
          ),
          'xmlsitemap_video' => array(
            'weight' => '0',
            'label' => 'above',
            'type' => 'hidden',
            'visible' => FALSE,
            'settings' => array(),
          ),
        ),
        'ti_schema_org_jsonld_publisher_extra_field' => array(
          'default' => array(
            'weight' => '0',
            'label' => 'above',
            'type' => 'hidden',
            'visible' => FALSE,
            'settings' => array(),
          ),
          'ut_video_embed' => array(
            'weight' => '44',
            'label' => 'above',
            'type' => 'hidden',
            'visible' => FALSE,
            'settings' => array(),
          ),
          'xmlsitemap' => array(
            'weight' => '0',
            'label' => 'above',
            'type' => 'hidden',
            'visible' => FALSE,
            'settings' => array(),
          ),
          'xmlsitemap_video' => array(
            'weight' => '0',
            'label' => 'above',
            'type' => 'hidden',
            'visible' => FALSE,
            'settings' => array(),
          ),
        ),
        'pronto_component_item_hash' => array(
          'default' => array(
            'weight' => '0',
            'label' => 'above',
            'type' => 'hidden',
            'visible' => FALSE,
            'settings' => array(),
          ),
          'xmlsitemap' => array(
            'weight' => '0',
            'label' => 'above',
            'type' => 'hidden',
            'visible' => FALSE,
            'settings' => array(),
          ),
          'xmlsitemap_video' => array(
            'weight' => '0',
            'label' => 'above',
            'type' => 'hidden',
            'visible' => FALSE,
            'settings' => array(),
          ),
          'ut_video_embed' => array(
            'weight' => '0',
            'label' => 'above',
            'type' => 'hidden',
            'visible' => FALSE,
            'settings' => array(),
          ),
        ),
        'pronto_component_video_embed' => array(
          'default' => array(
            'weight' => '0',
            'label' => 'above',
            'type' => 'hidden',
            'visible' => FALSE,
            'settings' => array(),
          ),
          'xmlsitemap' => array(
            'weight' => '0',
            'label' => 'above',
            'type' => 'hidden',
            'visible' => FALSE,
            'settings' => array(),
          ),
          'xmlsitemap_video' => array(
            'weight' => '0',
            'label' => 'above',
            'type' => 'hidden',
            'visible' => FALSE,
            'settings' => array(),
          ),
          'ut_video_embed' => array(
            'weight' => '0',
            'label' => 'above',
            'type' => 'hidden',
            'visible' => FALSE,
            'settings' => array(),
          ),
        ),
        'xmlsitemap_language' => array(
          'default' => array(
            'weight' => '0',
            'label' => 'above',
            'type' => 'hidden',
            'visible' => FALSE,
            'settings' => array(),
          ),
          'xmlsitemap' => array(
            'weight' => '0',
            'label' => 'above',
            'type' => 'hidden',
            'visible' => FALSE,
            'settings' => array(),
          ),
          'xmlsitemap_video' => array(
            'weight' => '0',
            'label' => 'above',
            'type' => 'hidden',
            'visible' => FALSE,
            'settings' => array(),
          ),
          'ut_video_embed' => array(
            'weight' => '0',
            'label' => 'above',
            'type' => 'hidden',
            'visible' => FALSE,
            'settings' => array(),
          ),
        ),
        'xmlsitemap_site_name' => array(
          'default' => array(
            'weight' => '0',
            'label' => 'above',
            'type' => 'hidden',
            'visible' => FALSE,
            'settings' => array(),
          ),
          'xmlsitemap' => array(
            'weight' => '0',
            'label' => 'above',
            'type' => 'hidden',
            'visible' => FALSE,
            'settings' => array(),
          ),
          'xmlsitemap_video' => array(
            'weight' => '0',
            'label' => 'above',
            'type' => 'hidden',
            'visible' => FALSE,
            'settings' => array(),
          ),
          'ut_video_embed' => array(
            'weight' => '0',
            'label' => 'above',
            'type' => 'hidden',
            'visible' => FALSE,
            'settings' => array(),
          ),
        ),
        'xmlsitemap_title' => array(
          'default' => array(
            'weight' => '0',
            'label' => 'above',
            'type' => 'hidden',
            'visible' => FALSE,
            'settings' => array(),
          ),
          'xmlsitemap' => array(
            'weight' => '0',
            'label' => 'above',
            'type' => 'hidden',
            'visible' => FALSE,
            'settings' => array(),
          ),
          'xmlsitemap_video' => array(
            'weight' => '0',
            'label' => 'hidden',
            'type' => 'xmlsitemap_text',
            'visible' => TRUE,
            'settings' => array(
              'xmlsitemap_tag' => 'changefreq',
              'items_output_limit' => '1',
              'filter_format' => 'xmlsitemap_html_removed',
              'default_value_when_empty' => '',
              'forced_value' => 'daily',
            ),
          ),
          'ut_video_embed' => array(
            'weight' => '0',
            'label' => 'above',
            'type' => 'hidden',
            'visible' => FALSE,
            'settings' => array(),
          ),
        ),
      ),
    ),
  );
  $export['field_bundle_settings_node__video'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'menu_options_video';
  $strongarm->value = array(
    0 => 'main-menu',
  );
  $export['menu_options_video'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'menu_parent_video';
  $strongarm->value = 'main-menu:0';
  $export['menu_parent_video'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'node_options_video';
  $strongarm->value = array();
  $export['node_options_video'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'node_preview_video';
  $strongarm->value = '1';
  $export['node_preview_video'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'node_submitted_video';
  $strongarm->value = 1;
  $export['node_submitted_video'] = $strongarm;

  return $export;
}
