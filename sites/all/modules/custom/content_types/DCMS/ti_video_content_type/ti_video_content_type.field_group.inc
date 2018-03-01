<?php
/**
 * @file
 * ti_video_content_type.field_group.inc
 */

/**
 * Implements hook_field_group_info().
 */
function ti_video_content_type_field_group_info() {
  $field_groups = array();

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_advertising|node|video|form';
  $field_group->group_name = 'group_advertising';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'video';
  $field_group->mode = 'form';
  $field_group->parent_name = 'group_hide_fields';
  $field_group->data = array(
    'label' => 'Advertising',
    'weight' => '39',
    'children' => array(
      0 => 'field_economic_type',
    ),
    'format_type' => 'fieldset',
    'format_settings' => array(
      'label' => 'Advertising',
      'instance_settings' => array(
        'required_fields' => 1,
        'classes' => 'group-advertising field-group-fieldset',
        'description' => '',
      ),
      'formatter' => 'open',
    ),
  );
  $field_groups['group_advertising|node|video|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_file_assets|node|video|form';
  $field_group->group_name = 'group_file_assets';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'video';
  $field_group->mode = 'form';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Video',
    'weight' => '4',
    'children' => array(
      0 => 'field_video_still',
      1 => 'field_video_thumbnail',
    ),
    'format_type' => 'fieldset',
    'format_settings' => array(
      'label' => 'Video',
      'instance_settings' => array(
        'required_fields' => 1,
        'classes' => 'group-file-assets field-group-fieldset',
        'description' => '',
      ),
      'formatter' => 'open',
    ),
  );
  $field_groups['group_file_assets|node|video|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_headlines|node|video|form';
  $field_group->group_name = 'group_headlines';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'video';
  $field_group->mode = 'form';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Headlines',
    'weight' => '0',
    'children' => array(
      0 => 'field_video_slug',
      1 => 'field_deck',
      2 => 'field_headline',
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
  $field_groups['group_headlines|node|video|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_ids|node|video|form';
  $field_group->group_name = 'group_ids';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'video';
  $field_group->mode = 'form';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Brightcove IDs',
    'weight' => '3',
    'children' => array(
      0 => 'field_player_id',
      1 => 'field_video_id',
    ),
    'format_type' => 'fieldset',
    'format_settings' => array(
      'label' => 'Brightcove IDs',
      'instance_settings' => array(
        'required_fields' => 1,
        'classes' => 'group-ids field-group-fieldset',
        'description' => '',
      ),
      'formatter' => 'open',
    ),
  );
  $field_groups['group_ids|node|video|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_logo_overlay|node|video|form';
  $field_group->group_name = 'group_logo_overlay';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'video';
  $field_group->mode = 'form';
  $field_group->parent_name = 'group_hide_fields';
  $field_group->data = array(
    'label' => 'Logo Overlay',
    'weight' => '38',
    'children' => array(
      0 => 'field_logo_overlay',
      1 => 'field_logo_overlay_url',
      2 => 'field_overlay_alignment',
      3 => 'field_overlay_display_name',
    ),
    'format_type' => 'fieldset',
    'format_settings' => array(
      'label' => 'Logo Overlay',
      'instance_settings' => array(
        'required_fields' => 1,
        'classes' => 'group-logo-overlay field-group-fieldset',
        'description' => '',
      ),
      'formatter' => 'open',
    ),
  );
  $field_groups['group_logo_overlay|node|video|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_metadata|node|video|form';
  $field_group->group_name = 'group_metadata';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'video';
  $field_group->mode = 'form';
  $field_group->parent_name = 'group_hide_fields';
  $field_group->data = array(
    'label' => 'Metadata',
    'weight' => '29',
    'children' => array(
      0 => 'field_credit',
      1 => 'field_transcript',
    ),
    'format_type' => 'fieldset',
    'format_settings' => array(
      'label' => 'Metadata',
      'instance_settings' => array(
        'required_fields' => 1,
        'classes' => 'group-metadata field-group-fieldset',
        'description' => '',
      ),
      'formatter' => 'open',
    ),
  );
  $field_groups['group_metadata|node|video|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_misc|node|video|form';
  $field_group->group_name = 'group_misc';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'video';
  $field_group->mode = 'form';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Misc',
    'weight' => '9',
    'children' => array(
      0 => 'field_ad_keys',
      1 => 'field_exclude_video',
      2 => 'field_ad_value',
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
  $field_groups['group_misc|node|video|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_publishing_options|node|video|form';
  $field_group->group_name = 'group_publishing_options';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'video';
  $field_group->mode = 'form';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Publishing Option',
    'weight' => '12',
    'children' => array(),
    'format_type' => 'fieldset',
    'format_settings' => array(
      'label' => 'Publishing Option',
      'instance_settings' => array(
        'required_fields' => 1,
        'classes' => 'group-publishing-options field-group-fieldset',
        'description' => '',
      ),
      'formatter' => 'open',
    ),
  );
  $field_groups['group_publishing_options|node|video|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_sharing|node|video|form';
  $field_group->group_name = 'group_sharing';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'video';
  $field_group->mode = 'form';
  $field_group->parent_name = 'group_hide_fields';
  $field_group->data = array(
    'label' => 'Sharing',
    'weight' => '31',
    'children' => array(
      0 => 'field_allow_syndication',
      1 => 'field_syndication',
    ),
    'format_type' => 'fieldset',
    'format_settings' => array(
      'label' => 'Sharing',
      'instance_settings' => array(
        'required_fields' => 1,
        'classes' => 'group-sharing field-group-fieldset',
        'description' => '',
      ),
      'formatter' => 'open',
    ),
  );
  $field_groups['group_sharing|node|video|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_status|node|video|form';
  $field_group->group_name = 'group_status';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'video';
  $field_group->mode = 'form';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Status',
    'weight' => '5',
    'children' => array(
      0 => 'field_brightcove_status',
    ),
    'format_type' => 'fieldset',
    'format_settings' => array(
      'label' => 'Status',
      'instance_settings' => array(
        'required_fields' => 1,
        'classes' => 'group-status field-group-fieldset',
        'description' => '',
      ),
      'formatter' => 'open',
    ),
  );
  $field_groups['group_status|node|video|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_tags|node|video|form';
  $field_group->group_name = 'group_tags';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'video';
  $field_group->mode = 'form';
  $field_group->parent_name = 'group_hide_fields';
  $field_group->data = array(
    'label' => 'Tags',
    'weight' => '32',
    'children' => array(
      0 => 'field_tags',
    ),
    'format_type' => 'fieldset',
    'format_settings' => array(
      'label' => 'Tags',
      'instance_settings' => array(
        'required_fields' => 1,
        'classes' => 'group-tags field-group-fieldset',
        'description' => '',
      ),
      'formatter' => 'open',
    ),
  );
  $field_groups['group_tags|node|video|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_video_breadcrumbs|node|video|form';
  $field_group->group_name = 'group_video_breadcrumbs';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'video';
  $field_group->mode = 'form';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Breadcrumbs',
    'weight' => '2',
    'children' => array(
      0 => 'field_blog_breadcrumb_link',
    ),
    'format_type' => 'fieldset',
    'format_settings' => array(
      'label' => 'Breadcrumbs',
      'instance_settings' => array(
        'required_fields' => 1,
        'classes' => 'group-video-breadcrumbs field-group-fieldset',
        'description' => '',
      ),
      'formatter' => 'open',
    ),
  );
  $field_groups['group_video_breadcrumbs|node|video|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_video_bumper|node|video|form';
  $field_group->group_name = 'group_video_bumper';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'video';
  $field_group->mode = 'form';
  $field_group->parent_name = 'group_hide_fields';
  $field_group->data = array(
    'label' => 'Video Bumper',
    'weight' => '30',
    'children' => array(
      0 => 'field_bumper_display',
      1 => 'field_flv_bumper',
    ),
    'format_type' => 'fieldset',
    'format_settings' => array(
      'label' => 'Video Bumper',
      'instance_settings' => array(
        'required_fields' => 1,
        'classes' => 'group-video-bumper field-group-fieldset',
        'description' => '',
      ),
      'formatter' => 'open',
    ),
  );
  $field_groups['group_video_bumper|node|video|form'] = $field_group;

  // Translatables
  // Included for use with string extractors like potx.
  t('Advertising');
  t('Breadcrumbs');
  t('Brightcove IDs');
  t('Headlines');
  t('Logo Overlay');
  t('Metadata');
  t('Misc');
  t('Publishing Option');
  t('Sharing');
  t('Status');
  t('Tags');
  t('Video');
  t('Video Bumper');

  return $field_groups;
}
