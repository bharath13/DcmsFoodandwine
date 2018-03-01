<?php
/**
 * @file
 * ti_amg_fw_channel_landing_page_context_feature.field_group.inc
 */

/**
 * Implements hook_field_group_info().
 */
function ti_amg_fw_channel_landing_page_context_feature_field_group_info() {
  $export = array();

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_featured_slideshows|node|channel_landing_page|form';
  $field_group->group_name = 'group_featured_slideshows';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'channel_landing_page';
  $field_group->mode = 'form';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Featured Slideshows',
    'weight' => '11',
    'children' => array(
      0 => 'field_clp_featured_slideshows',
    ),
    'format_type' => 'fieldset',
    'format_settings' => array(
      'formatter' => 'collapsible',
      'instance_settings' => array(
        'description' => '',
        'classes' => 'group-featured-slideshows field-group-fieldset',
        'required_fields' => 1,
      ),
    ),
  );
  $export['group_featured_slideshows|node|channel_landing_page|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_recipe_slideshows|node|channel_landing_page|form';
  $field_group->group_name = 'group_recipe_slideshows';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'channel_landing_page';
  $field_group->mode = 'form';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Recipe Slideshows',
    'weight' => '12',
    'children' => array(
      0 => 'field_clp_recipe_slideshows',
    ),
    'format_type' => 'fieldset',
    'format_settings' => array(
      'formatter' => 'collapsible',
      'instance_settings' => array(
        'description' => '',
        'classes' => 'group-recipe-slideshows field-group-fieldset',
        'required_fields' => 1,
      ),
    ),
  );
  $export['group_recipe_slideshows|node|channel_landing_page|form'] = $field_group;

  return $export;
}
