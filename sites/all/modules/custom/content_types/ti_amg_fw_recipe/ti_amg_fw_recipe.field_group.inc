<?php
/**
 * @file
 * ti_amg_fw_recipe.field_group.inc
 */

/**
 * Implements hook_field_group_info().
 */
function ti_amg_fw_recipe_field_group_info() {
  $field_groups = array();

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_nutrition_data|node|recipe|form';
  $field_group->group_name = 'group_nutrition_data';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'recipe';
  $field_group->mode = 'form';
  $field_group->parent_name = 'group_hide_fields';
  $field_group->data = array(
    'label' => 'Nutrition Data',
    'weight' => '18',
    'children' => array(),
    'format_type' => 'fieldset',
    'format_settings' => array(
      'label' => 'Nutrition Data',
      'instance_settings' => array(
        'required_fields' => 1,
        'classes' => 'group-nutrition-data field-group-fieldset',
        'description' => '',
      ),
      'formatter' => 'open',
    ),
  );
  $field_groups['group_nutrition_data|node|recipe|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_publishing_options|node|recipe|form';
  $field_group->group_name = 'group_publishing_options';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'recipe';
  $field_group->mode = 'form';
  $field_group->parent_name = 'group_recipe_multistep';
  $field_group->data = array(
    'label' => 'Publishing Options',
    'weight' => '13',
    'children' => array(
      0 => 'field_syndication',
    ),
    'format_type' => 'fieldset',
    'format_settings' => array(
      'label' => 'Publishing Options',
      'instance_settings' => array(
        'required_fields' => 1,
        'classes' => 'group-publishing-options field-group-fieldset',
        'description' => '',
      ),
      'formatter' => 'open',
    ),
  );
  $field_groups['group_publishing_options|node|recipe|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_recipe_rating_info|node|recipe|form';
  $field_group->group_name = 'group_recipe_rating_info';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'recipe';
  $field_group->mode = 'form';
  $field_group->parent_name = 'group_hide_fields';
  $field_group->data = array(
    'label' => 'Recipe Rating Info',
    'weight' => '28',
    'children' => array(
      0 => 'field_rating_info',
    ),
    'format_type' => 'fieldset',
    'format_settings' => array(
      'formatter' => 'collapsible',
      'instance_settings' => array(
        'description' => '',
        'classes' => 'group-recipe-rating-info field-group-fieldset',
        'required_fields' => 1,
      ),
    ),
  );
  $field_groups['group_recipe_rating_info|node|recipe|form'] = $field_group;

  // Translatables
  // Included for use with string extractors like potx.
  t('Nutrition Data');
  t('Publishing Options');
  t('Recipe Rating Info');

  return $field_groups;
}
