<?php
/**
 * @file
 * ti_amg_fw_newsletter.strongarm.inc
 */

/**
 * Implements hook_strongarm().
 */
function ti_amg_fw_newsletter_strongarm() {
  $export = array();

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'auto_entitylabel_node_newsletter';
  $strongarm->value = '';
  $export['auto_entitylabel_node_newsletter'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'auto_entitylabel_pattern_node_newsletter';
  $strongarm->value = '';
  $export['auto_entitylabel_pattern_node_newsletter'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'auto_entitylabel_php_node_newsletter';
  $strongarm->value = '';
  $export['auto_entitylabel_php_node_newsletter'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'comment_anonymous_newsletter';
  $strongarm->value = 0;
  $export['comment_anonymous_newsletter'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'comment_default_mode_newsletter';
  $strongarm->value = 1;
  $export['comment_default_mode_newsletter'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'comment_default_per_page_newsletter';
  $strongarm->value = '50';
  $export['comment_default_per_page_newsletter'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'comment_form_location_newsletter';
  $strongarm->value = 1;
  $export['comment_form_location_newsletter'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'comment_newsletter';
  $strongarm->value = '1';
  $export['comment_newsletter'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'comment_preview_newsletter';
  $strongarm->value = '1';
  $export['comment_preview_newsletter'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'comment_subject_field_newsletter';
  $strongarm->value = 1;
  $export['comment_subject_field_newsletter'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'field_bundle_settings_node__newsletter';
  $strongarm->value = array(
    'view_modes' => array(
      'teaser' => array(
        'custom_settings' => TRUE,
      ),
      'just-in' => array(
        'custom_settings' => TRUE,
      ),
      'full' => array(
        'custom_settings' => TRUE,
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
      'newsletter' => array(
        'custom_settings' => FALSE,
      ),
      'tout_related_videos' => array(
        'custom_settings' => FALSE,
      ),
      'pronto_json' => array(
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
      'token' => array(
        'custom_settings' => FALSE,
      ),
      'just_in' => array(
        'custom_settings' => TRUE,
      ),
      'daily' => array(
        'custom_settings' => TRUE,
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
    ),
    'extra_fields' => array(
      'form' => array(
        'metatags' => array(
          'weight' => '14',
        ),
        'title' => array(
          'weight' => '0',
        ),
        'path' => array(
          'weight' => '13',
        ),
        'redirect' => array(
          'weight' => '12',
        ),
        'xmlsitemap' => array(
          'weight' => '11',
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
          'just-in' => array(
            'weight' => '0',
            'visible' => FALSE,
          ),
          'just_in' => array(
            'weight' => '12',
            'label' => 'above',
            'type' => 'hidden',
            'visible' => FALSE,
            'settings' => array(),
          ),
          'full' => array(
            'weight' => '0',
            'visible' => FALSE,
          ),
          'daily' => array(
            'weight' => '16',
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
          'just-in' => array(
            'weight' => '0',
            'visible' => FALSE,
          ),
          'just_in' => array(
            'weight' => '13',
            'label' => 'above',
            'type' => 'hidden',
            'visible' => FALSE,
            'settings' => array(),
          ),
          'full' => array(
            'weight' => '0',
            'visible' => FALSE,
          ),
          'daily' => array(
            'weight' => '18',
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
          'just-in' => array(
            'weight' => '0',
            'visible' => FALSE,
          ),
          'just_in' => array(
            'weight' => '10',
            'label' => 'above',
            'type' => 'hidden',
            'visible' => FALSE,
            'settings' => array(),
          ),
          'full' => array(
            'weight' => '0',
            'visible' => FALSE,
          ),
          'daily' => array(
            'weight' => '19',
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
          'just-in' => array(
            'weight' => '0',
            'visible' => FALSE,
          ),
          'just_in' => array(
            'weight' => '11',
            'label' => 'above',
            'type' => 'hidden',
            'visible' => FALSE,
            'settings' => array(),
          ),
          'full' => array(
            'weight' => '0',
            'visible' => FALSE,
          ),
          'daily' => array(
            'weight' => '20',
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
          'just-in' => array(
            'weight' => '0',
            'visible' => FALSE,
          ),
          'just_in' => array(
            'weight' => '8',
            'label' => 'above',
            'type' => 'hidden',
            'visible' => FALSE,
            'settings' => array(),
          ),
          'full' => array(
            'weight' => '0',
            'visible' => FALSE,
          ),
          'daily' => array(
            'weight' => '17',
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
          'just-in' => array(
            'weight' => '0',
            'visible' => FALSE,
          ),
          'just_in' => array(
            'weight' => '9',
            'label' => 'above',
            'type' => 'hidden',
            'visible' => FALSE,
            'settings' => array(),
          ),
          'full' => array(
            'weight' => '0',
            'visible' => FALSE,
          ),
          'daily' => array(
            'weight' => '13',
            'label' => 'above',
            'type' => 'hidden',
            'visible' => FALSE,
            'settings' => array(),
          ),
        ),
        'fw_node_title' => array(
          'just_in' => array(
            'weight' => '0',
            'label' => 'above',
            'type' => 'hidden',
            'visible' => FALSE,
            'settings' => array(),
          ),
          'daily' => NULL,
        ),
        'title' => array(
          'just_in' => array(
            'weight' => '7',
            'label' => 'above',
            'type' => 'hidden',
            'visible' => FALSE,
            'settings' => array(),
          ),
          'daily' => array(
            'weight' => '8',
            'label' => 'above',
            'type' => 'hidden',
            'visible' => FALSE,
            'settings' => array(),
          ),
        ),
        'pronto_component_recipe_active_time' => array(
          'just_in' => array(
            'weight' => '16',
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
          'daily' => array(
            'weight' => '23',
            'label' => 'above',
            'type' => 'hidden',
            'visible' => FALSE,
            'settings' => array(),
          ),
        ),
        'pronto_component_recipe_total_time' => array(
          'just_in' => array(
            'weight' => '15',
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
          'daily' => array(
            'weight' => '22',
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
          'daily' => array(
            'weight' => '14',
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
          'daily' => array(
            'weight' => '15',
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
          'daily' => array(
            'weight' => '21',
            'label' => 'above',
            'type' => 'hidden',
            'visible' => FALSE,
            'settings' => array(),
          ),
        ),
        'pronto_component_metatag' => array(
          'daily' => array(
            'weight' => '10',
            'label' => 'above',
            'type' => 'hidden',
            'visible' => FALSE,
            'settings' => array(),
          ),
        ),
        'pronto_component_item_hash' => array(
          'daily' => array(
            'weight' => '11',
            'label' => 'above',
            'type' => 'hidden',
            'visible' => FALSE,
            'settings' => array(),
          ),
        ),
        'pronto_component_video_embed' => array(
          'daily' => array(
            'weight' => '9',
            'label' => 'above',
            'type' => 'hidden',
            'visible' => FALSE,
            'settings' => array(),
          ),
        ),
      ),
    ),
  );
  $export['field_bundle_settings_node__newsletter'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'menu_options_newsletter';
  $strongarm->value = array(
    0 => 'main-menu',
  );
  $export['menu_options_newsletter'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'menu_parent_newsletter';
  $strongarm->value = 'main-menu:0';
  $export['menu_parent_newsletter'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'node_options_newsletter';
  $strongarm->value = array();
  $export['node_options_newsletter'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'node_preview_newsletter';
  $strongarm->value = '1';
  $export['node_preview_newsletter'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'node_submitted_newsletter';
  $strongarm->value = 1;
  $export['node_submitted_newsletter'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'pathauto_node_newsletter_pattern';
  $strongarm->value = 'newsletter/[node:newsletter_type]-[node:newsletter_display_date]';
  $export['pathauto_node_newsletter_pattern'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'xmlsitemap_settings_node_newsletter';
  $strongarm->value = array(
    'entity' => 'node',
    'bundle' => 'newsletter_just_in',
    'info' => array(
      'label' => 'Newsletter',
      'admin' => array(
        'path' => 'admin/structure/types/manage/%node_type',
        'real path' => 'admin/structure/types/manage/newsletter-just-in',
        'bundle argument' => 4,
        'access arguments' => array(
          0 => 'administer content types',
        ),
      ),
      'rdf_mapping' => array(
        'rdftype' => array(
          0 => 'sioc:Item',
          1 => 'foaf:Document',
        ),
        'title' => array(
          'predicates' => array(
            0 => 'dc:title',
          ),
        ),
        'created' => array(
          'predicates' => array(
            0 => 'dc:date',
            1 => 'dc:created',
          ),
          'datatype' => 'xsd:dateTime',
          'callback' => 'date_iso8601',
        ),
        'changed' => array(
          'predicates' => array(
            0 => 'dc:modified',
          ),
          'datatype' => 'xsd:dateTime',
          'callback' => 'date_iso8601',
        ),
        'body' => array(
          'predicates' => array(
            0 => 'content:encoded',
          ),
        ),
        'uid' => array(
          'predicates' => array(
            0 => 'sioc:has_creator',
          ),
          'type' => 'rel',
        ),
        'name' => array(
          'predicates' => array(
            0 => 'foaf:name',
          ),
        ),
        'comment_count' => array(
          'predicates' => array(
            0 => 'sioc:num_replies',
          ),
          'datatype' => 'xsd:integer',
        ),
        'last_activity' => array(
          'predicates' => array(
            0 => 'sioc:last_activity_date',
          ),
          'datatype' => 'xsd:dateTime',
          'callback' => 'date_iso8601',
        ),
      ),
      'apachesolr' => array(
        'index' => TRUE,
      ),
      'xmlsitemap' => array(
        'entity' => 'node',
        'bundle' => 'newsletter_just_in',
        'status' => '0',
        'priority' => '0.5',
      ),
    ),
    'status' => '0',
    'priority' => '0.5',
  );
  $export['xmlsitemap_settings_node_newsletter'] = $strongarm;

  return $export;
}
