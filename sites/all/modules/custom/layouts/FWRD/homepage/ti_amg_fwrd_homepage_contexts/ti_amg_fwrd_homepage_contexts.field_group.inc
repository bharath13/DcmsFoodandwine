<?php
/**
 * @file
 * ti_amg_fwrd_homepage_contexts.field_group.inc
 */

/**
 * Implements hook_field_group_info().
 */
function ti_amg_fwrd_homepage_contexts_field_group_info() {
  $export = array();

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_hero_carousel|node|home_page_responsive|form';
  $field_group->group_name = 'group_hero_carousel';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'home_page_responsive';
  $field_group->mode = 'form';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Hero Carousel Section',
    'weight' => '7',
    'children' => array(
      0 => 'field_slideshow_image',
    ),
    'format_type' => 'fieldset',
    'format_settings' => array(
      'label' => 'Hero Carousel Section',
      'instance_settings' => array(
        'required_fields' => 1,
        'classes' => 'group-hero-carousel field-group-fieldset',
        'description' => '',
      ),
      'formatter' => 'open',
    ),
  );
  $export['group_hero_carousel|node|home_page_responsive|form'] = $field_group;

  return $export;
}
