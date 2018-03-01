<?php
/**
 * @file
 * ti_amg_fw_homepage_content_type.field_group.inc
 */

/**
 * Implements hook_field_group_info().
 */
function ti_amg_fw_homepage_content_type_field_group_info() {
  $field_groups = array();

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_editor_picks|node|home_page|form';
  $field_group->group_name = 'group_editor_picks';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'home_page';
  $field_group->mode = 'form';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Editor Picks',
    'weight' => '6',
    'children' => array(
      0 => 'field_hp_editor_picks',
      1 => 'field_hp_editor_picks_header',
    ),
    'format_type' => 'fieldset',
    'format_settings' => array(
      'formatter' => 'collapsible',
      'instance_settings' => array(
        'description' => '',
        'classes' => 'group-editor-picks field-group-fieldset',
        'required_fields' => 1,
      ),
    ),
  );
  $field_groups['group_editor_picks|node|home_page|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_mad_genious_tips|node|home_page|form';
  $field_group->group_name = 'group_mad_genious_tips';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'home_page';
  $field_group->mode = 'form';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Mad Genious Tips',
    'weight' => '7',
    'children' => array(
      0 => 'field_hp_mad_genious_tips',
      1 => 'field_hp_mad_genious_tips_header',
    ),
    'format_type' => 'fieldset',
    'format_settings' => array(
      'formatter' => 'collapsible',
      'instance_settings' => array(
        'description' => '',
        'classes' => 'group-mad-genious-tips field-group-fieldset',
        'required_fields' => 1,
      ),
    ),
  );
  $field_groups['group_mad_genious_tips|node|home_page|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_recipe_guides|node|home_page|form';
  $field_group->group_name = 'group_recipe_guides';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'home_page';
  $field_group->mode = 'form';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Recipe Guides',
    'weight' => '59',
    'children' => array(
      0 => 'field_hp_recipe_guides',
      1 => 'field_hp_recipe_guides_header',
    ),
    'format_type' => 'fieldset',
    'format_settings' => array(
      'formatter' => 'collapsible',
      'instance_settings' => array(
        'description' => '',
        'classes' => 'group-recipe-guides field-group-fieldset',
        'required_fields' => 1,
      ),
    ),
  );
  $field_groups['group_recipe_guides|node|home_page|form'] = $field_group;

  // Translatables
  // Included for use with string extractors like potx.
  t('Editor Picks');
  t('Mad Genious Tips');
  t('Recipe Guides');

  return $field_groups;
}
