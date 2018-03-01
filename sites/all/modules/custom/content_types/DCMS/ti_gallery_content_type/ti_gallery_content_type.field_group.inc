<?php
/**
 * @file
 * ti_gallery_content_type.field_group.inc
 */

/**
 * Implements hook_field_group_info().
 */
function ti_gallery_content_type_field_group_info() {
  $field_groups = array();

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_categorization|node|gallery|form';
  $field_group->group_name = 'group_categorization';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'gallery';
  $field_group->mode = 'form';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Categorization',
    'weight' => '2',
    'children' => array(
      0 => 'field_complex_theme',
      1 => 'field_gallery_layout',
      2 => 'field_gallery_type',
      3 => 'field_fw_category',
      4 => 'field_fw_course',
      5 => 'field_fw_cuisine',
      6 => 'field_fw_season',
      7 => 'field_fw_style',
      8 => 'field_fw_tags',
      9 => 'field_gallery_template',
      10 => 'field_support_square_images',
      11 => 'field_digital_desk',
    ),
    'format_type' => 'fieldset',
    'format_settings' => array(
      'label' => 'Categorization',
      'instance_settings' => array(
        'required_fields' => 1,
        'classes' => 'group-categorization field-group-fieldset',
        'description' => '',
      ),
      'formatter' => 'open',
    ),
  );
  $field_groups['group_categorization|node|gallery|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_gallery_image|node|gallery|form';
  $field_group->group_name = 'group_gallery_image';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'gallery';
  $field_group->mode = 'form';
  $field_group->parent_name = 'group_hide_fields';
  $field_group->data = array(
    'label' => 'Gallery Image',
    'weight' => '10',
    'children' => array(
      0 => 'field_description',
      1 => 'field_image_ref',
      2 => 'field_legacy_id',
      3 => 'field_slides',
      4 => 'field_subcategory',
    ),
    'format_type' => 'fieldset',
    'format_settings' => array(
      'label' => 'Gallery Image',
      'instance_settings' => array(
        'required_fields' => 1,
        'classes' => 'group-gallery-image field-group-fieldset',
        'description' => '',
      ),
      'formatter' => 'collapsed',
    ),
  );
  $field_groups['group_gallery_image|node|gallery|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_headlines|node|gallery|form';
  $field_group->group_name = 'group_headlines';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'gallery';
  $field_group->mode = 'form';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Headlines',
    'weight' => '0',
    'children' => array(
      0 => 'field_deck',
      1 => 'body',
      2 => 'title',
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
  $field_groups['group_headlines|node|gallery|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_misc|node|gallery|form';
  $field_group->group_name = 'group_misc';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'gallery';
  $field_group->mode = 'form';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Misc',
    'weight' => '5',
    'children' => array(
      0 => 'field_canonical_url',
      1 => 'field_editors_note',
      2 => 'field_ad_logo',
      3 => 'field_ad_url',
      4 => 'field_native_advertising',
      5 => 'field_blog_turn_off_publish_date',
      6 => 'field_ad_value',
      7 => 'metatags',
      8 => 'path',
      9 => 'redirect',
      10 => 'xmlsitemap',
    ),
    'format_type' => 'fieldset',
    'format_settings' => array(
      'label' => 'Misc',
      'instance_settings' => array(
        'required_fields' => 1,
        'classes' => 'group-misc field-group-fieldset',
        'description' => '',
      ),
      'formatter' => 'open',
    ),
  );
  $field_groups['group_misc|node|gallery|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_publishing_options|node|gallery|form';
  $field_group->group_name = 'group_publishing_options';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'gallery';
  $field_group->mode = 'form';
  $field_group->parent_name = 'group_hide_fields';
  $field_group->data = array(
    'label' => 'Publishing Options',
    'weight' => '8',
    'children' => array(
      0 => 'field_syndication',
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
  $field_groups['group_publishing_options|node|gallery|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_slides|node|gallery|form';
  $field_group->group_name = 'group_slides';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'gallery';
  $field_group->mode = 'form';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Slides',
    'weight' => '1',
    'children' => array(
      0 => 'field_multiple_images',
    ),
    'format_type' => 'fieldset',
    'format_settings' => array(
      'label' => 'Slides',
      'instance_settings' => array(
        'required_fields' => 1,
        'classes' => 'group-slides field-group-fieldset',
        'description' => '',
      ),
      'formatter' => 'open',
    ),
  );
  $field_groups['group_slides|node|gallery|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_social|node|gallery|form';
  $field_group->group_name = 'group_social';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'gallery';
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
  $field_groups['group_social|node|gallery|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_use_classic_aspen_menu|node|gallery|form';
  $field_group->group_name = 'group_use_classic_aspen_menu';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'gallery';
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
      'formatter' => 'open',
    ),
  );
  $field_groups['group_use_classic_aspen_menu|node|gallery|form'] = $field_group;

  // Translatables
  // Included for use with string extractors like potx.
  t('Categorization');
  t('Gallery Image');
  t('Headlines');
  t('Misc');
  t('Publishing Options');
  t('Slides');
  t('Social');
  t('Use Classic Aspen Menu');

  return $field_groups;
}
