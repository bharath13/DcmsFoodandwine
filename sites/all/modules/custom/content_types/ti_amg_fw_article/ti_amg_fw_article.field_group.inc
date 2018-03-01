<?php
/**
 * @file
 * ti_lsg_mr_article.field_group.inc
 */

/**
 * Implements hook_field_group_info().
 */
function ti_lsg_mr_article_field_group_info() {
  $export = array();

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_options|node|article|form';
  $field_group->group_name = 'group_options';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'article';
  $field_group->mode = 'form';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Options',
    'weight' => '8',
    'children' => array(
      0 => 'field_convenience_spec_consid',
      1 => 'field_courses',
      2 => 'field_cuisines',
      3 => 'field_dietary_considerations',
      4 => 'field_excluded_ingredients',
      5 => 'field_franchise',
      6 => 'field_main_ingredient',
      7 => 'field_prep_and_equipment',
      8 => 'field_season_occasion',
      9 => 'field_source',
    ),
    'format_type' => 'fieldset',
    'format_settings' => array(
      'label' => 'Options',
      'instance_settings' => array(
        'required_fields' => 1,
        'classes' => 'group-options field-group-fieldset',
        'description' => '',
      ),
      'formatter' => 'collapsed',
    ),
  );
  $export['group_options|node|article|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_touts|node|article|form';
  $field_group->group_name = 'group_touts';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'article';
  $field_group->mode = 'form';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Tout Information',
    'weight' => '6',
    'children' => array(
      0 => 'field_tout_deck',
      1 => 'field_tout_headline',
      2 => 'field_tout_image',
    ),
    'format_type' => 'fieldset',
    'format_settings' => array(
      'label' => 'Tout Information',
      'instance_settings' => array(
        'required_fields' => 1,
        'classes' => 'group-touts field-group-fieldset',
        'description' => '',
      ),
      'formatter' => 'open',
    ),
  );
  $export['group_touts|node|article|form'] = $field_group;

  return $export;
}
