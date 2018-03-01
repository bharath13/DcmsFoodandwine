<?php
/**
 * @file
 * ti_amg_fw_featured_directory_content_type.field_group.inc
 */

/**
 * Implements hook_field_group_info().
 */
function ti_amg_fw_featured_directory_content_type_field_group_info() {
  $field_groups = array();

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_featured_directory|node|featured_directory|form';
  $field_group->group_name = 'group_featured_directory';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'featured_directory';
  $field_group->mode = 'form';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Featured Directory Group',
    'weight' => '1',
    'children' => array(
      0 => 'field_featured_directory',
    ),
    'format_type' => 'fieldset',
    'format_settings' => array(
      'formatter' => 'collapsible',
      'instance_settings' => array(
        'description' => '',
        'classes' => 'group-featured-directory field-group-fieldset',
        'required_fields' => 1,
      ),
    ),
  );
  $field_groups['group_featured_directory|node|featured_directory|form'] = $field_group;

  // Translatables
  // Included for use with string extractors like potx.
  t('Featured Directory Group');

  return $field_groups;
}
