<?php
/**
 * @file
 * ti_amg_fw_blog_content_type.strongarm.inc
 */

/**
 * Implements hook_strongarm().
 */
function ti_amg_fw_blog_content_type_strongarm() {
  $export = array();

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'comment_anonymous_blog';
  $strongarm->value = 0;
  $export['comment_anonymous_blog'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'comment_blog';
  $strongarm->value = '1';
  $export['comment_blog'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'comment_default_mode_blog';
  $strongarm->value = 1;
  $export['comment_default_mode_blog'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'comment_default_per_page_blog';
  $strongarm->value = '50';
  $export['comment_default_per_page_blog'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'comment_form_location_blog';
  $strongarm->value = 1;
  $export['comment_form_location_blog'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'comment_preview_blog';
  $strongarm->value = '1';
  $export['comment_preview_blog'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'comment_subject_field_blog';
  $strongarm->value = 1;
  $export['comment_subject_field_blog'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'expire_node_actions_blog';
  $strongarm->value = array(
    0 => 1,
    1 => 2,
    2 => 3,
  );
  $export['expire_node_actions_blog'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'expire_node_custom_blog';
  $strongarm->value = 1;
  $export['expire_node_custom_blog'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'expire_node_custom_pages_blog';
  $strongarm->value = 'blogs';
  $export['expire_node_custom_pages_blog'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'expire_node_front_page_blog';
  $strongarm->value = 1;
  $export['expire_node_front_page_blog'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'expire_node_node_page_blog';
  $strongarm->value = 1;
  $export['expire_node_node_page_blog'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'expire_node_override_defaults_blog';
  $strongarm->value = 1;
  $export['expire_node_override_defaults_blog'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'field_bundle_settings_node__blog';
  $strongarm->value = array(
    'view_modes' => array(
      'teaser' => array(
        'custom_settings' => TRUE,
      ),
      'pronto_json' => array(
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
      'pronto_brightcove_video_json' => array(
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
      'pronto_json_sub_recipe' => array(
        'custom_settings' => FALSE,
      ),
      'pronto_json_figure' => array(
        'custom_settings' => FALSE,
      ),
      'pronto_json_slides' => array(
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
        'custom_settings' => FALSE,
      ),
      'xmlsitemap_video' => array(
        'custom_settings' => FALSE,
      ),
    ),
    'extra_fields' => array(
      'form' => array(
        'metatags' => array(
          'weight' => '10',
        ),
        'title' => array(
          'weight' => '1',
        ),
        'path' => array(
          'weight' => '8',
        ),
        'redirect' => array(
          'weight' => '9',
        ),
        'xmlsitemap' => array(
          'weight' => '11',
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
            'weight' => '4',
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
            'weight' => '6',
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
            'weight' => '7',
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
            'weight' => '5',
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
            'weight' => '0',
            'label' => 'above',
            'type' => 'hidden',
            'visible' => FALSE,
            'settings' => array(),
          ),
        ),
        'pronto_component_author_node_title' => array(
          'pronto_json' => array(
            'weight' => '23',
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
            'weight' => '0',
            'label' => 'above',
            'type' => 'hidden',
            'visible' => FALSE,
            'settings' => array(),
          ),
        ),
        'pronto_component_recipe_active_time' => array(
          'pronto_json' => array(
            'weight' => '53',
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
            'weight' => '99',
            'label' => 'above',
            'type' => 'hidden',
            'visible' => FALSE,
            'settings' => array(),
          ),
        ),
        'pronto_component_recipe_total_time' => array(
          'pronto_json' => array(
            'weight' => '52',
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
            'weight' => '98',
            'label' => 'above',
            'type' => 'hidden',
            'visible' => FALSE,
            'settings' => array(),
          ),
        ),
        'pronto_component_node_title' => array(
          'pronto_json' => array(
            'weight' => '1',
            'label' => 'hidden',
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
                1 => array(
                  'component_type' => '',
                  'version' => '1',
                  'value_key' => '',
                  'merge_group' => '',
                  'bubble_up' => 0,
                  'uri_friendly' => 0,
                  'pronto_filter_text_field' => 'wysiwyg',
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
            'weight' => '0',
            'label' => 'above',
            'type' => 'hidden',
            'visible' => FALSE,
            'settings' => array(),
          ),
        ),
        'title' => array(
          'pronto_json' => array(
            'weight' => '18',
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
            'weight' => '-5',
            'label' => 'above',
            'type' => 'hidden',
            'visible' => FALSE,
            'settings' => array(),
          ),
        ),
        'pronto_component_video_embed' => array(
          'pronto_json' => array(
            'weight' => '3',
            'label' => 'above',
            'type' => 'visible',
            'visible' => TRUE,
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
            'weight' => '0',
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
            'weight' => '0',
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
            'weight' => '0',
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
            'weight' => '0',
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
          'xmlsitemap_image' => array(
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
          'xmlsitemap_image' => array(
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
        ),
      ),
    ),
  );
  $export['field_bundle_settings_node__blog'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'menu_options_blog';
  $strongarm->value = array(
    0 => 'main-menu',
  );
  $export['menu_options_blog'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'menu_parent_blog';
  $strongarm->value = 'main-menu:0';
  $export['menu_parent_blog'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'node_options_blog';
  $strongarm->value = array();
  $export['node_options_blog'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'node_preview_blog';
  $strongarm->value = '1';
  $export['node_preview_blog'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'node_submitted_blog';
  $strongarm->value = 1;
  $export['node_submitted_blog'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'pathauto_node_blog_pattern';
  $strongarm->value = '[node:category_top_two_levels_with_title_url]';
  $export['pathauto_node_blog_pattern'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'scheduler_publish_enable_blog';
  $strongarm->value = 1;
  $export['scheduler_publish_enable_blog'] = $strongarm;

  return $export;
}
