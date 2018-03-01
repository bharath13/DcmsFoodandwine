<?php
/**
 * @file
 * ti_place_content_type.field_group.inc
 */

/**
 * Implements hook_field_group_info().
 */
function ti_place_content_type_field_group_info() {
  $export = array();

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_address|node|place|form';
  $field_group->group_name = 'group_address';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'place';
  $field_group->mode = 'form';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Address',
    'weight' => '0',
    'children' => array(
      0 => 'field_country',
      1 => 'field_locality',
      2 => 'field_postal_code',
      3 => 'field_region',
      4 => 'field_street_address',
      5 => 'title',
    ),
    'format_type' => 'fieldset',
    'format_settings' => array(
      'formatter' => 'open',
      'instance_settings' => array(
        'description' => '',
        'classes' => 'group-address field-group-fieldset',
        'required_fields' => 1,
      ),
    ),
  );
  $export['group_address|node|place|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_coordinates|node|place|form';
  $field_group->group_name = 'group_coordinates';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'place';
  $field_group->mode = 'form';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Coordinates',
    'weight' => '11',
    'children' => array(
      0 => 'field_geo_latitude',
      1 => 'field_geo_longitude',
      2 => 'field_map_url',
    ),
    'format_type' => 'fieldset',
    'format_settings' => array(
      'formatter' => 'open',
      'instance_settings' => array(
        'description' => '',
        'classes' => 'group-coordinates field-group-fieldset',
        'required_fields' => 1,
      ),
    ),
  );
  $export['group_coordinates|node|place|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_description|node|place|form';
  $field_group->group_name = 'group_description';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'place';
  $field_group->mode = 'form';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Description',
    'weight' => '4',
    'children' => array(
      0 => 'field_description',
      1 => 'field_image_ref',
      2 => 'field_place_type',
    ),
    'format_type' => 'fieldset',
    'format_settings' => array(
      'formatter' => 'open',
      'instance_settings' => array(
        'description' => '',
        'classes' => 'group-description field-group-fieldset',
        'required_fields' => 1,
      ),
    ),
  );
  $export['group_description|node|place|form'] = $field_group;

  return $export;
}
