<?php
/**
 * @file
 * ti_packagehub_content_type.field_group.inc
 */

/**
 * Implements hook_field_group_info().
 */
function ti_packagehub_content_type_field_group_info() {
  $export = array();

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_headlines|node|packagehub|form';
  $field_group->group_name = 'group_headlines';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'packagehub';
  $field_group->mode = 'form';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Headlines',
    'weight' => '0',
    'children' => array(
      0 => 'field_description',
      1 => 'field_headline',
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
  $export['group_headlines|node|packagehub|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_hub_items|node|packagehub|form';
  $field_group->group_name = 'group_hub_items';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'packagehub';
  $field_group->mode = 'form';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Hub Items',
    'weight' => '3',
    'children' => array(
      0 => 'field_hub_items',
    ),
    'format_type' => 'fieldset',
    'format_settings' => array(
      'label' => 'Hub Items',
      'instance_settings' => array(
        'required_fields' => 1,
        'classes' => 'group-hub-items field-group-fieldset',
        'description' => '',
      ),
      'formatter' => 'open',
    ),
  );
  $export['group_hub_items|node|packagehub|form'] = $field_group;

  return $export;
}
