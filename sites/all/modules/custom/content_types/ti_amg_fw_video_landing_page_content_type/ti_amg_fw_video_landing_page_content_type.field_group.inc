<?php
/**
 * @file
 * ti_amg_fw_video_landing_page_content_type.field_group.inc
 */

/**
 * Implements hook_field_group_info().
 */
function ti_amg_fw_video_landing_page_content_type_field_group_info() {
  $field_groups = array();

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_featured_video|node|video_landing_page|form';
  $field_group->group_name = 'group_featured_video';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'video_landing_page';
  $field_group->mode = 'form';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Hero Video',
    'weight' => '6',
    'children' => array(
      0 => 'field_featured_video',
    ),
    'format_type' => 'fieldset',
    'format_settings' => array(
      'label' => 'Hero Video',
      'instance_settings' => array(
        'required_fields' => 1,
        'classes' => 'group-featured-video field-group-fieldset',
        'description' => '',
      ),
      'formatter' => 'open',
    ),
  );
  $field_groups['group_featured_video|node|video_landing_page|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_video_section_breadrumbs|node|video_landing_page|form';
  $field_group->group_name = 'group_video_section_breadrumbs';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'video_landing_page';
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
      'label' => 'Breadcrumbs',
      'instance_settings' => array(
        'required_fields' => 1,
        'classes' => 'group-video-section-breadrumbs field-group-fieldset',
        'description' => '',
      ),
      'formatter' => 'open',
    ),
  );
  $field_groups['group_video_section_breadrumbs|node|video_landing_page|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_video_section_most_popular|node|video_landing_page|form';
  $field_group->group_name = 'group_video_section_most_popular';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'video_landing_page';
  $field_group->mode = 'form';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Most Popular',
    'weight' => '8',
    'children' => array(
      0 => 'field_video_section_pop_item',
      1 => 'field_video_section_pop_title',
    ),
    'format_type' => 'fieldset',
    'format_settings' => array(
      'label' => 'Most Popular',
      'instance_settings' => array(
        'required_fields' => 1,
        'classes' => 'group-video-section-most-popular field-group-fieldset',
        'description' => '',
      ),
      'formatter' => 'open',
    ),
  );
  $field_groups['group_video_section_most_popular|node|video_landing_page|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_vlp_category|node|video_landing_page|form';
  $field_group->group_name = 'group_vlp_category';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'video_landing_page';
  $field_group->mode = 'form';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Video Category',
    'weight' => '7',
    'children' => array(
      0 => 'field_vlp_category',
      1 => 'field_video_category_title',
    ),
    'format_type' => 'fieldset',
    'format_settings' => array(
      'label' => 'Video Category',
      'instance_settings' => array(
        'required_fields' => 1,
        'classes' => 'group-vlp-category field-group-fieldset',
        'description' => '',
      ),
      'formatter' => 'open',
    ),
  );
  $field_groups['group_vlp_category|node|video_landing_page|form'] = $field_group;

  // Translatables
  // Included for use with string extractors like potx.
  t('Breadcrumbs');
  t('Hero Video');
  t('Most Popular');
  t('Video Category');

  return $field_groups;
}
