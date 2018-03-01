<?php
/**
 * @file
 * ti_amg_fw_sub_menu_settings_content_type.field_group.inc
 */

/**
 * Implements hook_field_group_info().
 */
function ti_amg_fw_sub_menu_settings_content_type_field_group_info() {
  $field_groups = array();

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_cta|node|sub_menu_settings|form';
  $field_group->group_name = 'group_cta';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'sub_menu_settings';
  $field_group->mode = 'form';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'CTA',
    'weight' => '7',
    'children' => array(
      0 => 'field_cta_title',
      1 => 'field_cta_link',
      2 => 'field_cta_enable_red',
      3 => 'field_cta_new_window',
    ),
    'format_type' => 'fieldset',
    'format_settings' => array(
      'label' => 'CTA',
      'instance_settings' => array(
        'required_fields' => 0,
        'id' => '',
        'classes' => 'group-cta field-group-fieldset',
        'description' => '',
      ),
      'formatter' => 'collapsible',
    ),
  );
  $field_groups['group_cta|node|sub_menu_settings|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_sponsor_details|node|sub_menu_settings|form';
  $field_group->group_name = 'group_sponsor_details';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'sub_menu_settings';
  $field_group->mode = 'form';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Sponsor Details',
    'weight' => '12',
    'children' => array(
      0 => 'field_sponsor_text',
      1 => 'field_sponsor_logo',
    ),
    'format_type' => 'fieldset',
    'format_settings' => array(
      'label' => 'Sponsor Details',
      'instance_settings' => array(
        'required_fields' => 0,
        'id' => '',
        'classes' => 'group-sponsor-details field-group-fieldset',
        'description' => '',
      ),
      'formatter' => 'collapsible',
    ),
  );
  $field_groups['group_sponsor_details|node|sub_menu_settings|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_unused_fields|node|sub_menu_settings|form';
  $field_group->group_name = 'group_unused_fields';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'sub_menu_settings';
  $field_group->mode = 'form';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Unused Fields',
    'weight' => '13',
    'children' => array(
      0 => 'body',
    ),
    'format_type' => 'fieldset',
    'format_settings' => array(
      'label' => 'Unused Fields',
      'instance_settings' => array(
        'required_fields' => 0,
        'id' => '',
        'classes' => 'group-unused-fields field-group-fieldset',
        'description' => '',
      ),
      'formatter' => 'collapsed',
    ),
  );
  $field_groups['group_unused_fields|node|sub_menu_settings|form'] = $field_group;

  // Translatables
  // Included for use with string extractors like potx.
  t('CTA');
  t('Sponsor Details');
  t('Unused Fields');

  return $field_groups;
}
