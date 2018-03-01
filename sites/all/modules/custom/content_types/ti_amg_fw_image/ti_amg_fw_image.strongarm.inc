<?php
/**
 * @file
 * ti_amg_fw_image.strongarm.inc
 */

/**
 * Implements hook_strongarm().
 */
function ti_amg_fw_image_strongarm() {
  $export = array();

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'colorbox_inline';
  $strongarm->value = 1;
  $export['colorbox_inline'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'colorbox_load';
  $strongarm->value = 1;
  $export['colorbox_load'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'comment_anonymous_image';
  $strongarm->value = '0';
  $export['comment_anonymous_image'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'comment_default_mode_image';
  $strongarm->value = 1;
  $export['comment_default_mode_image'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'comment_default_per_page_image';
  $strongarm->value = '50';
  $export['comment_default_per_page_image'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'comment_form_location_image';
  $strongarm->value = 1;
  $export['comment_form_location_image'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'comment_image';
  $strongarm->value = '1';
  $export['comment_image'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'comment_preview_image';
  $strongarm->value = '1';
  $export['comment_preview_image'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'comment_subject_field_image';
  $strongarm->value = 1;
  $export['comment_subject_field_image'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'field_bundle_settings_taxonomy_term__brands';
  $strongarm->value = array(
    'view_modes' => array(
      'full' => array(
        'custom_settings' => FALSE,
      ),
      'diff_standard' => array(
        'custom_settings' => FALSE,
      ),
      'solr_search_author' => array(
        'custom_settings' => FALSE,
      ),
      'solr_search_author_reference' => array(
        'custom_settings' => FALSE,
      ),
      'pronto_json' => array(
        'custom_settings' => TRUE,
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
      'token' => array(
        'custom_settings' => FALSE,
      ),
      'xmlsitemap' => array(
        'custom_settings' => FALSE,
      ),
      'xmlsitemap_news' => array(
        'custom_settings' => FALSE,
      ),
      'xmlsitemap_video' => array(
        'custom_settings' => FALSE,
      ),
      'xmlsitemap_image' => array(
        'custom_settings' => FALSE,
      ),
    ),
    'extra_fields' => array(
      'form' => array(),
      'display' => array(
        'description' => array(
          'default' => array(
            'weight' => '0',
            'label' => 'above',
            'type' => 'hidden',
            'visible' => FALSE,
            'settings' => array(),
          ),
          'pronto_json' => array(
            'weight' => '0',
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
          'pronto_json' => array(
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
          'pronto_json' => array(
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
          'pronto_json' => array(
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
          'pronto_json' => array(
            'weight' => '0',
            'label' => 'above',
            'type' => 'hidden',
            'visible' => FALSE,
            'settings' => array(),
          ),
        ),
        'name' => array(
          'default' => array(
            'weight' => '-5',
            'label' => 'above',
            'type' => 'hidden',
            'visible' => FALSE,
            'settings' => array(
              'set' => array(
                0 => array(
                  'component_type' => 'components/article/buying-information',
                  'version' => '1',
                  'value_key' => 'data][brand',
                  'merge_group' => 'buying-information',
                  'bubble_up' => 0,
                  'uri_friendly' => 0,
                  'pronto_filter_text_field' => 'pronto_inline_html',
                  'source_key' => 'value',
                  'remove_bubble_up_conditions' => '',
                  'value_replace_tokens_template' => '',
                ),
              ),
            ),
          ),
          'pronto_json' => array(
            'weight' => '-5',
            'label' => 'above',
            'type' => 'pronto_component_text',
            'visible' => TRUE,
            'settings' => array(
              'set' => array(
                0 => array(
                  'component_type' => 'components/article/buying-information',
                  'version' => '1',
                  'value_key' => 'data][brand',
                  'merge_group' => 'buying-information',
                  'bubble_up' => 0,
                  'uri_friendly' => 0,
                  'pronto_filter_text_field' => 'pronto_inline_html',
                  'source_key' => 'value',
                  'remove_bubble_up_conditions' => '',
                  'value_replace_tokens_template' => '',
                ),
              ),
            ),
          ),
        ),
      ),
    ),
  );
  $export['field_bundle_settings_taxonomy_term__brands'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'ti_ers_biu_fields_image';
  $strongarm->value = array(
    0 => 'title--Title',
    1 => 'field_caption--Caption',
    2 => 'field_headline--Headline',
    3 => 'field_alt_text--Alt Text',
    4 => 'field_deck--Deck',
    5 => 'field_seo_path--SEO Path',
    6 => 'field_image_rights_asset_type--Asset Type',
    7 => 'field_image_rights_assignment_id--Assignment Id',
    8 => 'field_image_rights_source--Source',
    9 => 'field_image_rights_source_img_id--Source Image Id',
    10 => 'field_image_rights_usage--Usage',
    11 => 'field_image_rights_cleared--Rights Cleared',
    12 => 'field_image_rights_notes--Rights Notes',
    13 => 'field_image_rights_source_parent--Source Parent',
    14 => 'field_credit--Credits',
    15 => 'field_image_rights_keywords--Keywords',
    16 => 'field_image_rights_meta_caption--Meta Caption',
    17 => 'field_image_rights_photographer--Contributor/Photographer',
  );
  $export['ti_ers_biu_fields_image'] = $strongarm;

  return $export;
}
