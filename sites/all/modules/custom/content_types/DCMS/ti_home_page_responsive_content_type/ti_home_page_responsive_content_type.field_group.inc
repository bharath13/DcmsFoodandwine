<?php
/**
 * @file
 * ti_home_page_responsive_content_type.field_group.inc
 */

/**
 * Implements hook_field_group_info().
 */
function ti_home_page_responsive_content_type_field_group_info() {
  $field_groups = array();

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_feature_image|node|home_page_responsive|form';
  $field_group->group_name = 'group_feature_image';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'home_page_responsive';
  $field_group->mode = 'form';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Feature Image',
    'weight' => '9',
    'children' => array(
      0 => 'field_feature_title',
      1 => 'field_feature_image',
      2 => 'field_feature_content',
    ),
    'format_type' => 'fieldset',
    'format_settings' => array(
      'label' => 'Feature Image',
      'instance_settings' => array(
        'required_fields' => 1,
        'id' => '',
        'classes' => 'group-feature-image field-group-fieldset',
        'description' => '',
      ),
      'formatter' => 'open',
    ),
  );
  $field_groups['group_feature_image|node|home_page_responsive|form'] = $field_group;

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
    'label' => 'Hero Section',
    'weight' => '6',
    'children' => array(
      0 => 'field_hero_slide',
    ),
    'format_type' => 'fieldset',
    'format_settings' => array(
      'label' => 'Hero Section',
      'instance_settings' => array(
        'required_fields' => 1,
        'id' => '',
        'classes' => 'group-hero-carousel field-group-fieldset',
        'description' => '',
      ),
      'formatter' => 'open',
    ),
  );
  $field_groups['group_hero_carousel|node|home_page_responsive|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_latest_stories_section|node|home_page_responsive|form';
  $field_group->group_name = 'group_latest_stories_section';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'home_page_responsive';
  $field_group->mode = 'form';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Latest Stories Section',
    'weight' => '7',
    'children' => array(
      0 => 'field_latest_stories_title',
      1 => 'field_latest_story',
    ),
    'format_type' => 'fieldset',
    'format_settings' => array(
      'label' => 'Latest Stories Section',
      'instance_settings' => array(
        'required_fields' => 1,
        'classes' => 'group-latest-stories-section field-group-fieldset',
        'description' => '',
      ),
      'formatter' => 'open',
    ),
  );
  $field_groups['group_latest_stories_section|node|home_page_responsive|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_most_popular_section|node|home_page_responsive|form';
  $field_group->group_name = 'group_most_popular_section';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'home_page_responsive';
  $field_group->mode = 'form';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Most Popular Section',
    'weight' => '8',
    'children' => array(
      0 => 'field_most_popular_entity',
      1 => 'field_most_popular_title',
    ),
    'format_type' => 'fieldset',
    'format_settings' => array(
      'label' => 'Most Popular Section',
      'instance_settings' => array(
        'required_fields' => 1,
        'classes' => 'group-most-popular-section field-group-fieldset',
        'description' => '',
      ),
      'formatter' => 'open',
    ),
  );
  $field_groups['group_most_popular_section|node|home_page_responsive|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_recipe_guides|node|home_page_responsive|form';
  $field_group->group_name = 'group_recipe_guides';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'home_page_responsive';
  $field_group->mode = 'form';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Recipe Guides Section',
    'weight' => '10',
    'children' => array(
      0 => 'field_hp_recipe_guides',
      1 => 'field_recipe_guides_header',
    ),
    'format_type' => 'fieldset',
    'format_settings' => array(
      'label' => 'Recipe Guides Section',
      'instance_settings' => array(
        'required_fields' => 1,
        'classes' => 'group-recipe-guides field-group-fieldset',
        'description' => '',
      ),
      'formatter' => 'open',
    ),
  );
  $field_groups['group_recipe_guides|node|home_page_responsive|form'] = $field_group;

  // Translatables
  // Included for use with string extractors like potx.
  t('Feature Image');
  t('Hero Section');
  t('Latest Stories Section');
  t('Most Popular Section');
  t('Recipe Guides Section');

  return $field_groups;
}
