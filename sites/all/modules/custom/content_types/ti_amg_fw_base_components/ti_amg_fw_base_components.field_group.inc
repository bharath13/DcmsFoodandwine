<?php
/**
 * @file
 * ti_amg_fw_base_components.field_group.inc
 */

/**
 * Implements hook_field_group_info().
 */
function ti_amg_fw_base_components_field_group_info() {
  $field_groups = array();

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_custom_microsite_content|node|page|form';
  $field_group->group_name = 'group_custom_microsite_content';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'page';
  $field_group->mode = 'form';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Custom Microsite Content',
    'weight' => '5',
    'children' => array(
      0 => 'field_custom_css',
      1 => 'field_custom_js',
      2 => 'field_custom_html',
    ),
    'format_type' => 'fieldset',
    'format_settings' => array(
      'label' => 'Custom Microsite Content',
      'instance_settings' => array(
        'required_fields' => 1,
        'classes' => 'group-custom-microsite-content field-group-fieldset',
        'description' => '',
      ),
      'formatter' => 'open',
    ),
  );
  $field_groups['group_custom_microsite_content|node|page|form'] = $field_group;

  // Translatables
  // Included for use with string extractors like potx.
  t('Custom Microsite Content');

  return $field_groups;
}
