<?php
/**
 * @file
 * ti_amg_fw_gallery.field_group.inc
 */

/**
 * Implements hook_field_group_info().
 */
function ti_amg_fw_gallery_field_group_info() {
  $field_groups = array();

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_authoring|node|gallery|form';
  $field_group->group_name = 'group_authoring';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'gallery';
  $field_group->mode = 'form';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Authoring',
    'weight' => '1',
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
  $field_groups['group_authoring|node|gallery|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_campaign_logo|node|gallery|form';
  $field_group->group_name = 'group_campaign_logo';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'gallery';
  $field_group->mode = 'form';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Campaign Logo',
    'weight' => '10',
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
  $field_groups['group_campaign_logo|node|gallery|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_gallery_hero_image|node|gallery|form';
  $field_group->group_name = 'group_gallery_hero_image';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'gallery';
  $field_group->mode = 'form';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Main Image',
    'weight' => '4',
    'children' => array(
      0 => 'field_hero_image',
    ),
    'format_type' => 'fieldset',
    'format_settings' => array(
      'label' => 'Main Image',
      'instance_settings' => array(
        'required_fields' => 1,
        'id' => '',
        'classes' => 'group-gallery-main-image field-group-fieldset',
        'description' => '',
      ),
      'formatter' => 'collapsible',
    ),
  );
  $field_groups['group_gallery_hero_image|node|gallery|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_hide_fields|node|gallery|form';
  $field_group->group_name = 'group_hide_fields';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'gallery';
  $field_group->mode = 'form';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Unused Fields',
    'weight' => '12',
    'children' => array(
      0 => 'field_tags',
      1 => 'field_category',
      2 => 'field_headline',
      3 => 'field_related_content',
      4 => 'group_gallery_image',
      5 => 'group_publishing_options',
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
  $field_groups['group_hide_fields|node|gallery|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_related_content|node|gallery|form';
  $field_group->group_name = 'group_related_content';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'gallery';
  $field_group->mode = 'form';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Related Content',
    'weight' => '8',
    'children' => array(
      0 => 'field_related_gallery',
      1 => 'field_related_links',
      2 => 'field_related_content_title',
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
  $field_groups['group_related_content|node|gallery|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_slides_info|node|gallery|form';
  $field_group->group_name = 'group_slides_info';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'gallery';
  $field_group->mode = 'form';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Field Collection Slides',
    'weight' => '11',
    'children' => array(
      0 => 'field_slide_info',
    ),
    'format_type' => 'fieldset',
    'format_settings' => array(
      'label' => 'Field Collection Slides',
      'instance_settings' => array(
        'required_fields' => 0,
        'id' => '',
        'classes' => 'group-slides-info field-group-fieldset',
        'description' => '',
      ),
      'formatter' => 'collapsed',
    ),
  );
  $field_groups['group_slides_info|node|gallery|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_slideshow_breadcrumbs|node|gallery|form';
  $field_group->group_name = 'group_slideshow_breadcrumbs';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'gallery';
  $field_group->mode = 'form';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Breadcrumbs',
    'weight' => '5',
    'children' => array(
      0 => 'field_blog_breadcrumb_link',
    ),
    'format_type' => 'fieldset',
    'format_settings' => array(
      'formatter' => 'collapsible',
      'instance_settings' => array(
        'description' => '',
        'classes' => 'group-slideshow-breadcrumbs field-group-fieldset',
        'required_fields' => 1,
      ),
    ),
  );
  $field_groups['group_slideshow_breadcrumbs|node|gallery|form'] = $field_group;

  // Translatables
  // Included for use with string extractors like potx.
  t('Authoring');
  t('Breadcrumbs');
  t('Campaign Logo');
  t('Field Collection Slides');
  t('Main Image');
  t('Related Content');
  t('Unused Fields');

  return $field_groups;
}
