<?php
/**
 * @file
 * ti_amg_fw_blog_content_type.field_group.inc
 */

/**
 * Implements hook_field_group_info().
 */
function ti_amg_fw_blog_content_type_field_group_info() {
  $field_groups = array();

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_authoring|node|blog|form';
  $field_group->group_name = 'group_authoring';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'blog';
  $field_group->mode = 'form';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Authoring',
    'weight' => '2',
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
  $field_groups['group_authoring|node|blog|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_block_breadcrumbs|node|blog|form';
  $field_group->group_name = 'group_block_breadcrumbs';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'blog';
  $field_group->mode = 'form';
  $field_group->parent_name = 'group_hide_fields';
  $field_group->data = array(
    'label' => 'Breadcrumbs',
    'weight' => '17',
    'children' => array(
      0 => 'field_blog_breadcrumb_link',
    ),
    'format_type' => 'fieldset',
    'format_settings' => array(
      'label' => 'Breadcrumbs',
      'instance_settings' => array(
        'required_fields' => 1,
        'classes' => 'group-block-breadcrumbs field-group-fieldset',
        'description' => '',
      ),
      'formatter' => 'collapsed',
    ),
  );
  $field_groups['group_block_breadcrumbs|node|blog|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_blog_hero_image|node|blog|form';
  $field_group->group_name = 'group_blog_hero_image';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'blog';
  $field_group->mode = 'form';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Hero Image',
    'weight' => '3',
    'children' => array(
      0 => 'field_blog_hero_image',
      1 => 'field_enable_hero',
    ),
    'format_type' => 'fieldset',
    'format_settings' => array(
      'label' => 'Hero Image',
      'instance_settings' => array(
        'required_fields' => 1,
        'classes' => 'group-blog-hero-image field-group-fieldset',
        'description' => '',
      ),
      'formatter' => 'collapsed',
    ),
  );
  $field_groups['group_blog_hero_image|node|blog|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_blog_list_left_section|node|blog|form';
  $field_group->group_name = 'group_blog_list_left_section';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'blog';
  $field_group->mode = 'form';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'List Left Section',
    'weight' => '7',
    'children' => array(
      0 => 'field_blog_left_section_content',
      1 => 'field_list_left_section_title',
    ),
    'format_type' => 'fieldset',
    'format_settings' => array(
      'label' => 'List Left Section',
      'instance_settings' => array(
        'required_fields' => 1,
        'classes' => 'group-blog-list-left-section field-group-fieldset',
        'description' => '',
      ),
      'formatter' => 'collapsed',
    ),
  );
  $field_groups['group_blog_list_left_section|node|blog|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_body|node|blog|form';
  $field_group->group_name = 'group_body';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'blog';
  $field_group->mode = 'form';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Blog Body',
    'weight' => '1',
    'children' => array(
      0 => 'body',
      1 => 'field_blog_video',
      2 => 'field_related_videos',
      3 => 'field_images',
      4 => 'field_related_cnt_links',
      5 => 'field_multiple_images',
      6 => 'field_embedded_video',
    ),
    'format_type' => 'fieldset',
    'format_settings' => array(
      'label' => 'Blog Body',
      'instance_settings' => array(
        'required_fields' => 1,
        'classes' => 'group-body field-group-fieldset',
        'description' => '',
      ),
      'formatter' => 'open',
    ),
  );
  $field_groups['group_body|node|blog|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_campaign_logo|node|blog|form';
  $field_group->group_name = 'group_campaign_logo';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'blog';
  $field_group->mode = 'form';
  $field_group->parent_name = 'group_misc';
  $field_group->data = array(
    'label' => 'Campaign Logo',
    'weight' => '18',
    'children' => array(
      0 => 'field_campaign_logo',
      1 => 'field_campaign_url',
    ),
    'format_type' => 'fieldset',
    'format_settings' => array(
      'label' => 'Campaign Logo',
      'instance_settings' => array(
        'required_fields' => 1,
        'classes' => 'group-campaign-logo field-group-fieldset',
        'description' => '',
      ),
      'formatter' => 'open',
    ),
  );
  $field_groups['group_campaign_logo|node|blog|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_categories|node|blog|form';
  $field_group->group_name = 'group_categories';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'blog';
  $field_group->mode = 'form';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Categorization',
    'weight' => '4',
    'children' => array(
      0 => 'field_topic',
      1 => 'field_fw_category',
      2 => 'field_fw_course',
      3 => 'field_fw_cuisine',
      4 => 'field_fw_season',
      5 => 'field_fw_style',
      6 => 'field_fw_tags',
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
  $field_groups['group_categories|node|blog|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_headlines|node|blog|form';
  $field_group->group_name = 'group_headlines';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'blog';
  $field_group->mode = 'form';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Headlines',
    'weight' => '0',
    'children' => array(
      0 => 'field_deck',
      1 => 'title',
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
  $field_groups['group_headlines|node|blog|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_hide_fields|node|blog|form';
  $field_group->group_name = 'group_hide_fields';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'blog';
  $field_group->mode = 'form';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Unused Fields',
    'weight' => '9',
    'children' => array(
      0 => 'field_image_position',
      1 => 'field_legacy_id',
      2 => 'field_overwrite_image_alt_text',
      3 => 'field_overwrite_image_caption',
      4 => 'field_overwrite_image_credit',
      5 => 'field_pull_quote',
      6 => 'field_news_keywords',
      7 => 'group_block_breadcrumbs',
    ),
    'format_type' => 'fieldset',
    'format_settings' => array(
      'label' => 'Unused Fields',
      'instance_settings' => array(
        'required_fields' => 1,
        'classes' => 'group-hide-fields field-group-fieldset',
        'description' => '',
      ),
      'formatter' => 'collapsed',
    ),
  );
  $field_groups['group_hide_fields|node|blog|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_misc|node|blog|form';
  $field_group->group_name = 'group_misc';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'blog';
  $field_group->mode = 'form';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Misc',
    'weight' => '5',
    'children' => array(
      0 => 'field_ad_keys',
      1 => 'field_rebelmouse_tag',
      2 => 'field_exclude_relvideo_module',
      3 => 'field_blog_pull_quote_headline',
      4 => 'field_blog_turn_off_publish_date',
      5 => 'skyword_tracking_tag',
      6 => 'skyword_metadescription',
      7 => 'skyword_seo_title',
      8 => 'skyword_content_id',
      9 => 'field_block_indexing',
      10 => 'metatags',
      11 => 'path',
      12 => 'redirect',
      13 => 'xmlsitemap',
      14 => 'group_campaign_logo',
    ),
    'format_type' => 'fieldset',
    'format_settings' => array(
      'label' => 'Misc',
      'instance_settings' => array(
        'required_fields' => 1,
        'classes' => 'group-misc field-group-fieldset',
        'description' => '',
      ),
      'formatter' => 'collapsed',
    ),
  );
  $field_groups['group_misc|node|blog|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_publishing_options|node|blog|form';
  $field_group->group_name = 'group_publishing_options';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'blog';
  $field_group->mode = 'form';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Publishing Options',
    'weight' => '11',
    'children' => array(
      0 => 'field_syndication',
    ),
    'format_type' => 'fieldset',
    'format_settings' => array(
      'label' => 'Publishing Options',
      'instance_settings' => array(
        'required_fields' => 1,
        'id' => '',
        'classes' => 'group-publishing-options field-group-fieldset',
        'description' => '',
      ),
      'formatter' => 'open',
    ),
  );
  $field_groups['group_publishing_options|node|blog|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_social|node|blog|form';
  $field_group->group_name = 'group_social';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'blog';
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
  $field_groups['group_social|node|blog|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_use_classic_aspen_menu|node|blog|form';
  $field_group->group_name = 'group_use_classic_aspen_menu';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'blog';
  $field_group->mode = 'form';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Use Classic Aspen Menu',
    'weight' => '8',
    'children' => array(
      0 => 'field_show_classic_aspen_menu',
    ),
    'format_type' => 'fieldset',
    'format_settings' => array(
      'label' => 'Use Classic Aspen Menu',
      'instance_settings' => array(
        'required_fields' => 1,
        'classes' => 'group-use-classic-aspen-menu field-group-fieldset',
        'description' => '',
      ),
      'formatter' => 'collapsed',
    ),
  );
  $field_groups['group_use_classic_aspen_menu|node|blog|form'] = $field_group;

  // Translatables
  // Included for use with string extractors like potx.
  t('Authoring');
  t('Blog Body');
  t('Breadcrumbs');
  t('Campaign Logo');
  t('Categorization');
  t('Headlines');
  t('Hero Image');
  t('List Left Section');
  t('Misc');
  t('Publishing Options');
  t('Social');
  t('Unused Fields');
  t('Use Classic Aspen Menu');

  return $field_groups;
}
