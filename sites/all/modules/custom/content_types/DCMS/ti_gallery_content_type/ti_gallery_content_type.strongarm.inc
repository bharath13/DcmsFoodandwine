<?php
/**
 * @file
 * ti_gallery_content_type.strongarm.inc
 */

/**
 * Implements hook_strongarm().
 */
function ti_gallery_content_type_strongarm() {
  $export = array();

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'field_bundle_settings_node__gallery';
  $strongarm->value = array(
    'view_modes' => array(
      'teaser' => array(
        'custom_settings' => TRUE,
      ),
      'tout_150x150' => array(
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
      'tout_featured' => array(
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
      'calendar_day_image' => array(
        'custom_settings' => FALSE,
      ),
      'image_420x420' => array(
        'custom_settings' => FALSE,
      ),
      'image_768x768' => array(
        'custom_settings' => FALSE,
      ),
      'foodandwine' => array(
        'custom_settings' => FALSE,
      ),
      'tout_related_videos' => array(
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
      'pronto_json_sub_recipe' => array(
        'custom_settings' => FALSE,
      ),
      'pronto_json_figure' => array(
        'custom_settings' => FALSE,
      ),
      'pronto_json_slides' => array(
        'custom_settings' => FALSE,
      ),
      'xmlsitemap' => array(
        'custom_settings' => TRUE,
      ),
      'xmlsitemap_image' => array(
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
      'ut_video_embed' => array(
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
      'xmlsitemap_news' => array(
        'custom_settings' => TRUE,
      ),
      'xmlsitemap_video' => array(
        'custom_settings' => FALSE,
      ),
      'daily' => array(
        'custom_settings' => FALSE,
      ),
    ),
    'extra_fields' => array(
      'form' => array(
        'title' => array(
          'weight' => '2',
        ),
        'path' => array(
          'weight' => '75',
        ),
        'metatags' => array(
          'weight' => '76',
        ),
        'redirect' => array(
          'weight' => '74',
        ),
        'xmlsitemap' => array(
          'weight' => '77',
        ),
      ),
      'display' => array(
        'pronto_component_author_node_title' => array(
          'default' => array(
            'weight' => '0',
            'label' => 'above',
            'type' => 'hidden',
            'visible' => FALSE,
            'settings' => array(),
          ),
          'pronto_json' => array(
            'weight' => '19',
            'label' => 'hidden',
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
          'xmlsitemap_image' => array(
            'weight' => '6',
            'label' => 'above',
            'type' => 'hidden',
            'visible' => FALSE,
            'settings' => array(),
          ),
          'xmlsitemap_news' => array(
            'weight' => '8',
            'label' => 'above',
            'type' => 'hidden',
            'visible' => FALSE,
            'settings' => array(),
          ),
        ),
        'pronto_component_node_created' => array(
          'default' => array(
            'weight' => '0',
            'label' => 'above',
            'type' => 'hidden',
            'visible' => FALSE,
            'settings' => array(),
          ),
          'pronto_json' => array(
            'weight' => '2',
            'label' => 'hidden',
            'type' => 'visible',
            'visible' => TRUE,
            'settings' => array(),
          ),
          'xmlsitemap' => array(
            'weight' => '0',
            'label' => 'above',
            'type' => 'hidden',
            'visible' => FALSE,
            'settings' => array(),
          ),
          'xmlsitemap_image' => array(
            'weight' => '17',
            'label' => 'above',
            'type' => 'hidden',
            'visible' => FALSE,
            'settings' => array(),
          ),
          'xmlsitemap_news' => array(
            'weight' => '14',
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
            'type' => 'hidden',
            'visible' => FALSE,
            'settings' => array(),
          ),
          'pronto_json' => array(
            'weight' => '3',
            'label' => 'hidden',
            'type' => 'visible',
            'visible' => TRUE,
            'settings' => array(),
          ),
          'xmlsitemap' => array(
            'weight' => '0',
            'label' => 'above',
            'type' => 'hidden',
            'visible' => FALSE,
            'settings' => array(),
          ),
          'xmlsitemap_image' => array(
            'weight' => '4',
            'label' => 'above',
            'type' => 'hidden',
            'visible' => FALSE,
            'settings' => array(),
          ),
          'xmlsitemap_news' => array(
            'weight' => '16',
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
            'type' => 'hidden',
            'visible' => FALSE,
            'settings' => array(),
          ),
          'pronto_json' => array(
            'weight' => '9',
            'label' => 'hidden',
            'type' => 'visible',
            'visible' => TRUE,
            'settings' => array(),
          ),
          'xmlsitemap' => array(
            'weight' => '0',
            'label' => 'above',
            'type' => 'hidden',
            'visible' => FALSE,
            'settings' => array(),
          ),
          'xmlsitemap_image' => array(
            'weight' => '10',
            'label' => 'above',
            'type' => 'hidden',
            'visible' => FALSE,
            'settings' => array(),
          ),
          'xmlsitemap_news' => array(
            'weight' => '17',
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
            'type' => 'hidden',
            'visible' => FALSE,
            'settings' => array(),
          ),
          'pronto_json' => array(
            'weight' => '0',
            'label' => 'hidden',
            'type' => 'visible',
            'visible' => TRUE,
            'settings' => array(),
          ),
          'xmlsitemap' => array(
            'weight' => '0',
            'label' => 'above',
            'type' => 'hidden',
            'visible' => FALSE,
            'settings' => array(),
          ),
          'xmlsitemap_image' => array(
            'weight' => '16',
            'label' => 'above',
            'type' => 'hidden',
            'visible' => FALSE,
            'settings' => array(),
          ),
          'xmlsitemap_news' => array(
            'weight' => '15',
            'label' => 'above',
            'type' => 'hidden',
            'visible' => FALSE,
            'settings' => array(),
          ),
        ),
        'pronto_component_node_title' => array(
          'pronto_json' => array(
            'weight' => '4',
            'label' => 'above',
            'type' => 'pronto_component_text',
            'visible' => TRUE,
            'settings' => array(
              'set' => array(
                0 => array(
                  'component_type' => 'components/article/title',
                  'version' => '1',
                  'value_key' => 'data][title',
                  'merge_group' => 'article/title',
                  'bubble_up' => 0,
                  'uri_friendly' => 0,
                  'pronto_filter_text_field' => 'pronto_inline_html',
                  'source_key' => 'value',
                ),
              ),
            ),
          ),
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
          'xmlsitemap_image' => array(
            'weight' => '12',
            'label' => 'above',
            'type' => 'hidden',
            'visible' => FALSE,
            'settings' => array(),
          ),
          'xmlsitemap_news' => array(
            'weight' => '6',
            'label' => 'above',
            'type' => 'hidden',
            'visible' => FALSE,
            'settings' => array(),
          ),
        ),
        'pronto_component_recipe_active_time' => array(
          'pronto_json' => array(
            'weight' => '48',
            'label' => 'above',
            'type' => 'hidden',
            'visible' => FALSE,
            'settings' => array(),
          ),
          'default' => array(
            'weight' => '99',
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
          'xmlsitemap_image' => array(
            'weight' => '59',
            'label' => 'above',
            'type' => 'hidden',
            'visible' => FALSE,
            'settings' => array(),
          ),
          'xmlsitemap_news' => array(
            'weight' => '63',
            'label' => 'above',
            'type' => 'hidden',
            'visible' => FALSE,
            'settings' => array(),
          ),
        ),
        'pronto_component_recipe_total_time' => array(
          'pronto_json' => array(
            'weight' => '47',
            'label' => 'above',
            'type' => 'hidden',
            'visible' => FALSE,
            'settings' => array(),
          ),
          'default' => array(
            'weight' => '98',
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
          'xmlsitemap_image' => array(
            'weight' => '58',
            'label' => 'above',
            'type' => 'hidden',
            'visible' => FALSE,
            'settings' => array(),
          ),
          'xmlsitemap_news' => array(
            'weight' => '62',
            'label' => 'above',
            'type' => 'hidden',
            'visible' => FALSE,
            'settings' => array(),
          ),
        ),
        'title' => array(
          'pronto_json' => array(
            'weight' => '12',
            'label' => 'above',
            'type' => 'hidden',
            'visible' => FALSE,
            'settings' => array(),
          ),
          'default' => array(
            'weight' => '-5',
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
          'xmlsitemap_image' => array(
            'weight' => '3',
            'label' => 'above',
            'type' => 'hidden',
            'visible' => FALSE,
            'settings' => array(),
          ),
          'xmlsitemap_news' => array(
            'weight' => '3',
            'label' => 'hidden',
            'type' => 'xmlsitemap_text',
            'visible' => TRUE,
            'settings' => array(
              'xmlsitemap_tag' => 'news:news][news:title',
              'items_output_limit' => '1',
              'filter_format' => 'xmlsitemap_html_removed',
              'default_value_when_empty' => '',
              'forced_value' => '',
            ),
          ),
        ),
        'pronto_component_metatag' => array(
          'pronto_json' => array(
            'weight' => '1',
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
          'xmlsitemap' => array(
            'weight' => '0',
            'label' => 'above',
            'type' => 'hidden',
            'visible' => FALSE,
            'settings' => array(),
          ),
          'xmlsitemap_image' => array(
            'weight' => '7',
            'label' => 'above',
            'type' => 'hidden',
            'visible' => FALSE,
            'settings' => array(),
          ),
          'xmlsitemap_news' => array(
            'weight' => '18',
            'label' => 'above',
            'type' => 'hidden',
            'visible' => FALSE,
            'settings' => array(),
          ),
        ),
        'pronto_component_item_hash' => array(
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
          'xmlsitemap' => array(
            'weight' => '0',
            'label' => 'above',
            'type' => 'hidden',
            'visible' => FALSE,
            'settings' => array(),
          ),
          'xmlsitemap_image' => array(
            'weight' => '13',
            'label' => 'above',
            'type' => 'hidden',
            'visible' => FALSE,
            'settings' => array(),
          ),
          'xmlsitemap_news' => array(
            'weight' => '7',
            'label' => 'above',
            'type' => 'hidden',
            'visible' => FALSE,
            'settings' => array(),
          ),
        ),
        'pronto_component_video_embed' => array(
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
          'xmlsitemap' => array(
            'weight' => '0',
            'label' => 'above',
            'type' => 'hidden',
            'visible' => FALSE,
            'settings' => array(),
          ),
          'xmlsitemap_image' => array(
            'weight' => '14',
            'label' => 'above',
            'type' => 'hidden',
            'visible' => FALSE,
            'settings' => array(),
          ),
          'xmlsitemap_news' => array(
            'weight' => '5',
            'label' => 'above',
            'type' => 'hidden',
            'visible' => FALSE,
            'settings' => array(),
          ),
        ),
        'ti_schema_org_jsonld_date_node_created' => array(
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
          'xmlsitemap' => array(
            'weight' => '0',
            'label' => 'above',
            'type' => 'hidden',
            'visible' => FALSE,
            'settings' => array(),
          ),
          'xmlsitemap_image' => array(
            'weight' => '15',
            'label' => 'above',
            'type' => 'hidden',
            'visible' => FALSE,
            'settings' => array(),
          ),
          'xmlsitemap_news' => array(
            'weight' => '9',
            'label' => 'above',
            'type' => 'hidden',
            'visible' => FALSE,
            'settings' => array(),
          ),
        ),
        'ti_schema_org_jsonld_date_published_at' => array(
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
          'xmlsitemap' => array(
            'weight' => '0',
            'label' => 'above',
            'type' => 'hidden',
            'visible' => FALSE,
            'settings' => array(),
          ),
          'xmlsitemap_image' => array(
            'weight' => '11',
            'label' => 'above',
            'type' => 'hidden',
            'visible' => FALSE,
            'settings' => array(),
          ),
          'xmlsitemap_news' => array(
            'weight' => '11',
            'label' => 'above',
            'type' => 'hidden',
            'visible' => FALSE,
            'settings' => array(),
          ),
        ),
        'ti_schema_org_jsonld_publisher_extra_field' => array(
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
          'xmlsitemap' => array(
            'weight' => '0',
            'label' => 'above',
            'type' => 'hidden',
            'visible' => FALSE,
            'settings' => array(),
          ),
          'xmlsitemap_image' => array(
            'weight' => '9',
            'label' => 'above',
            'type' => 'hidden',
            'visible' => FALSE,
            'settings' => array(),
          ),
          'xmlsitemap_news' => array(
            'weight' => '10',
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
          'xmlsitemap_image' => array(
            'weight' => '8',
            'label' => 'above',
            'type' => 'hidden',
            'visible' => FALSE,
            'settings' => array(),
          ),
          'xmlsitemap_news' => array(
            'weight' => '1',
            'label' => 'hidden',
            'type' => 'xmlsitemap_text',
            'visible' => TRUE,
            'settings' => array(
              'xmlsitemap_tag' => 'news:news][news:publication][news:language',
              'items_output_limit' => '1',
              'filter_format' => 'xmlsitemap_html_removed',
              'default_value_when_empty' => '',
              'forced_value' => '',
            ),
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
          'xmlsitemap_image' => array(
            'weight' => '18',
            'label' => 'above',
            'type' => 'hidden',
            'visible' => FALSE,
            'settings' => array(),
          ),
          'xmlsitemap_news' => array(
            'weight' => '0',
            'label' => 'hidden',
            'type' => 'xmlsitemap_text',
            'visible' => TRUE,
            'settings' => array(
              'xmlsitemap_tag' => 'news:news][news:publication][news:name',
              'items_output_limit' => '1',
              'filter_format' => 'xmlsitemap_html_removed',
              'default_value_when_empty' => '',
              'forced_value' => '',
            ),
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
          'xmlsitemap_image' => array(
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
          'xmlsitemap_news' => array(
            'weight' => '12',
            'label' => 'above',
            'type' => 'hidden',
            'visible' => FALSE,
            'settings' => array(),
          ),
        ),
        'xmlsitemap_published_date' => array(
          'default' => array(
            'weight' => '0',
            'label' => 'above',
            'type' => 'hidden',
            'visible' => FALSE,
            'settings' => array(),
          ),
          'xmlsitemap_news' => array(
            'weight' => '2',
            'label' => 'hidden',
            'type' => 'xmlsitemap_text',
            'visible' => TRUE,
            'settings' => array(
              'xmlsitemap_tag' => 'news:news][news:publication_date',
              'items_output_limit' => '1',
              'filter_format' => 'xmlsitemap_html_removed',
              'default_value_when_empty' => '',
              'forced_value' => '',
            ),
          ),
        ),
      ),
    ),
  );
  $export['field_bundle_settings_node__gallery'] = $strongarm;

  return $export;
}
