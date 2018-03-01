<?php
/**
 * @file
 * ti_amg_fw_video.field_group.inc
 */

/**
 * Implements hook_field_group_info().
 */
function ti_amg_fw_video_field_group_info() {
  $field_groups = array();

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_categories|node|video|form';
  $field_group->group_name = 'group_categories';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'video';
  $field_group->mode = 'form';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Categorization',
    'weight' => '5',
    'children' => array(
      0 => 'field_video_tags',
      1 => 'field_global_tags',
      2 => 'field_fw_category',
      3 => 'field_fw_course',
      4 => 'field_fw_cuisine',
      5 => 'field_fw_season',
      6 => 'field_fw_style',
      7 => 'field_fw_tags',
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
  $field_groups['group_categories|node|video|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_contextual|node|video|form';
  $field_group->group_name = 'group_contextual';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'video';
  $field_group->mode = 'form';
  $field_group->parent_name = 'group_hide_fields';
  $field_group->data = array(
    'label' => 'Contextual Links',
    'weight' => '35',
    'children' => array(
      0 => 'field_contextual_links',
    ),
    'format_type' => 'fieldset',
    'format_settings' => array(
      'label' => 'Contextual Links',
      'instance_settings' => array(
        'required_fields' => 1,
        'classes' => 'group-contextual field-group-fieldset',
        'description' => '',
      ),
      'formatter' => 'open',
    ),
  );
  $field_groups['group_contextual|node|video|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_hide_fields|node|video|form';
  $field_group->group_name = 'group_hide_fields';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'video';
  $field_group->mode = 'form';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Unused Fields',
    'weight' => '11',
    'children' => array(
      0 => 'field_bumper_display_name',
      1 => 'field_caption',
      2 => 'field_comments',
      3 => 'field_eyebrow',
      4 => 'field_legacy_id',
      5 => 'field_related_link_text',
      6 => 'field_related_link_url',
      7 => 'field_tool_tip',
      8 => 'field_video_file',
      9 => 'field_video_source',
      10 => 'field_video_image_url',
      11 => 'group_contextual',
      12 => 'group_related',
      13 => 'group_advertising',
      14 => 'group_logo_overlay',
      15 => 'group_metadata',
      16 => 'group_sharing',
      17 => 'group_tags',
      18 => 'group_video_bumper',
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
  $field_groups['group_hide_fields|node|video|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_related_articles|node|video|form';
  $field_group->group_name = 'group_related_articles';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'video';
  $field_group->mode = 'form';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Related Articles Group',
    'weight' => '8',
    'children' => array(
      0 => 'field_related_links',
    ),
    'format_type' => 'fieldset',
    'format_settings' => array(
      'formatter' => 'collapsible',
      'instance_settings' => array(
        'description' => '',
        'classes' => 'group-related-articles field-group-fieldset',
        'required_fields' => 1,
      ),
    ),
  );
  $field_groups['group_related_articles|node|video|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_related_blocks|node|video|form';
  $field_group->group_name = 'group_related_blocks';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'video';
  $field_group->mode = 'form';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Related Blocks',
    'weight' => '9',
    'children' => array(
      0 => 'field_headline_title',
      1 => 'field_related_blocks',
    ),
    'format_type' => 'fieldset',
    'format_settings' => array(
      'formatter' => 'collapsible',
      'instance_settings' => array(
        'description' => '',
        'classes' => 'group-related-blocks field-group-fieldset',
        'required_fields' => 1,
      ),
    ),
  );
  $field_groups['group_related_blocks|node|video|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_related_videos|node|video|form';
  $field_group->group_name = 'group_related_videos';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'video';
  $field_group->mode = 'form';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Related Videos',
    'weight' => '6',
    'children' => array(
      0 => 'field_related_videos',
      1 => 'field_related_videos_headline',
      2 => 'field_videos_see_more_link',
    ),
    'format_type' => 'fieldset',
    'format_settings' => array(
      'formatter' => 'collapsible',
      'instance_settings' => array(
        'description' => '',
        'classes' => 'group-related-videos field-group-fieldset',
        'required_fields' => 1,
      ),
    ),
  );
  $field_groups['group_related_videos|node|video|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_related|node|video|form';
  $field_group->group_name = 'group_related';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'video';
  $field_group->mode = 'form';
  $field_group->parent_name = 'group_hide_fields';
  $field_group->data = array(
    'label' => 'Related Content',
    'weight' => '34',
    'children' => array(
      0 => 'field_related_content',
    ),
    'format_type' => 'fieldset',
    'format_settings' => array(
      'label' => 'Related Content',
      'instance_settings' => array(
        'required_fields' => 1,
        'classes' => 'group-related field-group-fieldset',
        'description' => '',
      ),
      'formatter' => 'open',
    ),
  );
  $field_groups['group_related|node|video|form'] = $field_group;

  // Translatables
  // Included for use with string extractors like potx.
  t('Categorization');
  t('Contextual Links');
  t('Related Articles Group');
  t('Related Blocks');
  t('Related Content');
  t('Related Videos');
  t('Unused Fields');

  return $field_groups;
}
