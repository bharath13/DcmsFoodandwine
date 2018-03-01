<?php
/**
 * @file
 * ti_amg_fw_category.field_group.inc
 */

/**
 * Implements hook_field_group_info().
 */
function ti_amg_fw_category_field_group_info() {
  $field_groups = array();

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_breadcrumbs_section|node|category|form';
  $field_group->group_name = 'group_breadcrumbs_section';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'category';
  $field_group->mode = 'form';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Breadcrumbs Section',
    'weight' => '2',
    'children' => array(
      0 => 'field_breadcrumbs',
    ),
    'format_type' => 'fieldset',
    'format_settings' => array(
      'label' => 'Breadcrumbs Section',
      'instance_settings' => array(
        'required_fields' => 1,
        'classes' => 'group-breadcrumbs-section field-group-fieldset',
        'description' => '',
      ),
      'formatter' => 'open',
    ),
  );
  $field_groups['group_breadcrumbs_section|node|category|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_categorization|node|category|form';
  $field_group->group_name = 'group_categorization';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'category';
  $field_group->mode = 'form';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Categorization',
    'weight' => '3',
    'children' => array(
      0 => 'field_fw_category',
      1 => 'field_fw_course',
      2 => 'field_fw_cuisine',
      3 => 'field_fw_season',
      4 => 'field_fw_style',
      5 => 'field_fw_tags',
    ),
    'format_type' => 'fieldset',
    'format_settings' => array(
      'label' => 'Categorization',
      'instance_settings' => array(
        'required_fields' => 1,
        'classes' => 'group-categorization field-group-fieldset',
        'description' => '',
      ),
      'formatter' => 'open',
    ),
  );
  $field_groups['group_categorization|node|category|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_hero_section|node|category|form';
  $field_group->group_name = 'group_hero_section';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'category';
  $field_group->mode = 'form';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Hero Section',
    'weight' => '4',
    'children' => array(
      0 => 'field_deck',
      1 => 'field_hero_image',
      2 => 'field_override_link_content',
      3 => 'field_hero_section_content',
    ),
    'format_type' => 'fieldset',
    'format_settings' => array(
      'label' => 'Hero Section',
      'instance_settings' => array(
        'required_fields' => 1,
        'classes' => 'group-hero-section field-group-fieldset',
        'description' => '',
      ),
      'formatter' => 'open',
    ),
  );
  $field_groups['group_hero_section|node|category|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_latest_section|node|category|form';
  $field_group->group_name = 'group_latest_section';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'category';
  $field_group->mode = 'form';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Latest Section',
    'weight' => '5',
    'children' => array(
      0 => 'field_latest_section_title',
    ),
    'format_type' => 'fieldset',
    'format_settings' => array(
      'label' => 'Latest Section',
      'instance_settings' => array(
        'required_fields' => 1,
        'classes' => 'group-latest-section field-group-fieldset',
        'description' => '',
      ),
      'formatter' => 'open',
    ),
  );
  $field_groups['group_latest_section|node|category|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_recipe_section|node|category|form';
  $field_group->group_name = 'group_recipe_section';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'category';
  $field_group->mode = 'form';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Feature Section',
    'weight' => '6',
    'children' => array(
      0 => 'field_popular_recipes_title',
      1 => 'field_recipe_fw_tags',
      2 => 'field_enable_other_bundles',
    ),
    'format_type' => 'fieldset',
    'format_settings' => array(
      'label' => 'Feature Section',
      'instance_settings' => array(
        'required_fields' => 1,
        'id' => '',
        'classes' => 'group-recipe-section field-group-fieldset',
        'description' => '',
      ),
      'formatter' => 'open',
    ),
  );
  $field_groups['group_recipe_section|node|category|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_text_link_section|node|category|form';
  $field_group->group_name = 'group_text_link_section';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'category';
  $field_group->mode = 'form';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Text Link Section',
    'weight' => '7',
    'children' => array(
      0 => 'field_related_content_title',
      1 => 'field_enable_section',
    ),
    'format_type' => 'fieldset',
    'format_settings' => array(
      'label' => 'Text Link Section',
      'instance_settings' => array(
        'required_fields' => 1,
        'classes' => 'group-text-link-section field-group-fieldset',
        'description' => '',
      ),
      'formatter' => 'open',
    ),
  );
  $field_groups['group_text_link_section|node|category|form'] = $field_group;

  // Translatables
  // Included for use with string extractors like potx.
  t('Breadcrumbs Section');
  t('Categorization');
  t('Feature Section');
  t('Hero Section');
  t('Latest Section');
  t('Text Link Section');

  return $field_groups;
}
