<?php
/**
 * @file
 * ti_article_content_type.field_group.inc
 */

/**
 * Implements hook_field_group_info().
 */
function ti_article_content_type_field_group_info() {
  $field_groups = array();

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_authoring|node|article|form';
  $field_group->group_name = 'group_authoring';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'article';
  $field_group->mode = 'form';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Authoring',
    'weight' => '3',
    'children' => array(
      0 => 'field_author',
    ),
    'format_type' => 'fieldset',
    'format_settings' => array(
      'label' => 'Authoring',
      'instance_settings' => array(
        'required_fields' => 1,
        'classes' => 'group-authoring field-group-fieldset',
        'description' => '',
      ),
      'formatter' => 'open',
    ),
  );
  $field_groups['group_authoring|node|article|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_body|node|article|form';
  $field_group->group_name = 'group_body';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'article';
  $field_group->mode = 'form';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Article Body',
    'weight' => '1',
    'children' => array(
      0 => 'body',
      1 => 'field_images',
      2 => 'field_video_hero',
      3 => 'field_blog_video',
      4 => 'field_embedded_video',
      5 => 'field_multiple_images',
    ),
    'format_type' => 'fieldset',
    'format_settings' => array(
      'label' => 'Article Body',
      'instance_settings' => array(
        'required_fields' => 1,
        'classes' => 'group-body field-group-fieldset',
        'description' => '',
      ),
      'formatter' => 'open',
    ),
  );
  $field_groups['group_body|node|article|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_categories|node|article|form';
  $field_group->group_name = 'group_categories';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'article';
  $field_group->mode = 'form';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Categorization',
    'weight' => '2',
    'children' => array(
      0 => 'field_fw_category',
      1 => 'field_fw_tags',
      2 => 'field_topic',
      3 => 'field_digital_desk',
    ),
    'format_type' => 'fieldset',
    'format_settings' => array(
      'label' => 'Categorization',
      'instance_settings' => array(
        'required_fields' => 1,
        'classes' => 'group-categories field-group-fieldset',
        'description' => '',
      ),
      'formatter' => 'open',
    ),
  );
  $field_groups['group_categories|node|article|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_headlines|node|article|form';
  $field_group->group_name = 'group_headlines';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'article';
  $field_group->mode = 'form';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Headlines',
    'weight' => '0',
    'children' => array(
      0 => 'field_deck',
      1 => 'field_headline',
      2 => 'field_seo_path',
      3 => 'title',
    ),
    'format_type' => 'fieldset',
    'format_settings' => array(
      'label' => 'Headlines',
      'instance_settings' => array(
        'required_fields' => 1,
        'classes' => 'group-headlines field-group-fieldset',
        'description' => '',
      ),
      'formatter' => 'open',
    ),
  );
  $field_groups['group_headlines|node|article|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_hide_fields|node|article|form';
  $field_group->group_name = 'group_hide_fields';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'article';
  $field_group->mode = 'form';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Unused Fields',
    'weight' => '7',
    'children' => array(
      0 => 'field_category',
      1 => 'field_column',
      2 => 'field_related_recipes',
      3 => 'field_overwrite_image_alt_text',
      4 => 'field_overwrite_image_caption',
      5 => 'field_overwrite_image_credit',
      6 => 'field_ad_keys',
      7 => 'field_blog_left_section_content',
      8 => 'field_blog_pull_quote_headline',
      9 => 'field_fw_course',
      10 => 'field_fw_cuisine',
      11 => 'field_fw_season',
      12 => 'field_fw_style',
      13 => 'field_list_left_section_title',
      14 => 'field_converted_from_blog',
    ),
    'format_type' => 'fieldset',
    'format_settings' => array(
      'label' => 'Unused Fields',
      'instance_settings' => array(
        'required_fields' => 1,
        'classes' => 'group-hide-fields field-group-fieldset',
        'description' => 'These are Core DCMS Fields Not Used in FW',
      ),
      'formatter' => 'collapsed',
    ),
  );
  $field_groups['group_hide_fields|node|article|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_misc|node|article|form';
  $field_group->group_name = 'group_misc';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'article';
  $field_group->mode = 'form';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Misc',
    'weight' => '5',
    'children' => array(
      0 => 'field_blog_hero_image',
      1 => 'field_enable_hero',
      2 => 'field_show_classic_aspen_menu',
      3 => 'skyword_content_id',
      4 => 'skyword_metadescription',
      5 => 'skyword_seo_title',
      6 => 'skyword_tracking_tag',
      7 => 'field_ad_value',
      8 => 'metatags',
      9 => 'path',
      10 => 'redirect',
      11 => 'xmlsitemap',
    ),
    'format_type' => 'fieldset',
    'format_settings' => array(
      'label' => 'Misc',
      'instance_settings' => array(
        'required_fields' => 1,
        'id' => '',
        'classes' => 'group-misc field-group-fieldset',
        'description' => '',
      ),
      'formatter' => 'collapsed',
    ),
  );
  $field_groups['group_misc|node|article|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_publishing_options|node|article|form';
  $field_group->group_name = 'group_publishing_options';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'article';
  $field_group->mode = 'form';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Publishing Options',
    'weight' => '8',
    'children' => array(
      0 => 'field_not_searchable',
      1 => 'field_syndication',
    ),
    'format_type' => 'fieldset',
    'format_settings' => array(
      'label' => 'Publishing Options',
      'instance_settings' => array(
        'required_fields' => 1,
        'classes' => 'group-publishing-options field-group-fieldset',
        'description' => '',
      ),
      'formatter' => 'open',
    ),
  );
  $field_groups['group_publishing_options|node|article|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_related_content|node|article|form';
  $field_group->group_name = 'group_related_content';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'article';
  $field_group->mode = 'form';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Related Content',
    'weight' => '4',
    'children' => array(
      0 => 'field_related_content',
    ),
    'format_type' => 'fieldset',
    'format_settings' => array(
      'label' => 'Related Content',
      'instance_settings' => array(
        'required_fields' => 1,
        'classes' => 'group-related-content field-group-fieldset',
        'description' => '',
      ),
      'formatter' => 'open',
    ),
  );
  $field_groups['group_related_content|node|article|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_social|node|article|form';
  $field_group->group_name = 'group_social';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'article';
  $field_group->mode = 'form';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Social',
    'weight' => '6',
    'children' => array(
      0 => 'field_twitter_title',
    ),
    'format_type' => 'fieldset',
    'format_settings' => array(
      'label' => 'Social',
      'instance_settings' => array(
        'required_fields' => 1,
        'id' => '',
        'classes' => 'group-social field-group-fieldset',
        'description' => '',
      ),
      'formatter' => 'open',
    ),
  );
  $field_groups['group_social|node|article|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_springboard|node|article|form';
  $field_group->group_name = 'group_springboard';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'article';
  $field_group->mode = 'form';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Springboard',
    'weight' => 94,
    'children' => array(
      0 => 'field_springboard_id',
      1 => 'field_springboard_author_name',
      2 => 'field_springboard_author_email',
      3 => 'field_springboard_is_locked',
      4 => 'field_springboard_is_prepaid',
      5 => 'field_springboard_prepaid_price',
      6 => 'field_springboard_comment',
    ),
    'format_type' => 'fieldset',
    'format_settings' => array(
      'formatter' => 'collapsible',
      'instance_settings' => array(
        'description' => '',
        'classes' => 'group-springboard field-group-fieldset',
        'required_fields' => 1,
      ),
    ),
  );
  $field_groups['group_springboard|node|article|form'] = $field_group;

  // Translatables
  // Included for use with string extractors like potx.
  t('Article Body');
  t('Authoring');
  t('Categorization');
  t('Headlines');
  t('Misc');
  t('Publishing Options');
  t('Related Content');
  t('Social');
  t('Springboard');
  t('Unused Fields');

  return $field_groups;
}
