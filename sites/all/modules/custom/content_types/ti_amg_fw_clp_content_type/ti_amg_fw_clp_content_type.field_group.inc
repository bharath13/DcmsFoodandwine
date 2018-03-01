<?php
/**
 * @file
 * ti_amg_fw_clp_content_type.field_group.inc
 */

/**
 * Implements hook_field_group_info().
 */
function ti_amg_fw_clp_content_type_field_group_info() {
  $field_groups = array();

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_clp_best_of|node|channel_landing_page|form';
  $field_group->group_name = 'group_clp_best_of';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'channel_landing_page';
  $field_group->mode = 'form';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'The Best Of Group',
    'weight' => '4',
    'children' => array(
      0 => 'field_clp_best_of',
    ),
    'format_type' => 'fieldset',
    'format_settings' => array(
      'formatter' => 'collapsible',
      'instance_settings' => array(
        'description' => '',
        'classes' => 'group-clp-best-of field-group-fieldset',
        'required_fields' => 1,
      ),
    ),
  );
  $field_groups['group_clp_best_of|node|channel_landing_page|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_clp_ff|node|channel_landing_page|form';
  $field_group->group_name = 'group_clp_ff';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'channel_landing_page';
  $field_group->mode = 'form';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Feature Front Group',
    'weight' => '2',
    'children' => array(
      0 => 'field_clp_ff',
    ),
    'format_type' => 'fieldset',
    'format_settings' => array(
      'formatter' => 'collapsible',
      'instance_settings' => array(
        'description' => '',
        'classes' => 'group-clp-ff field-group-fieldset',
        'required_fields' => 1,
      ),
    ),
  );
  $field_groups['group_clp_ff|node|channel_landing_page|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_clp_hide_fields|node|channel_landing_page|form';
  $field_group->group_name = 'group_clp_hide_fields';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'channel_landing_page';
  $field_group->mode = 'form';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Unused Fields',
    'weight' => '23',
    'children' => array(
      0 => 'group_clp_recipes_directory',
    ),
    'format_type' => 'fieldset',
    'format_settings' => array(
      'label' => 'Unused Fields',
      'instance_settings' => array(
        'required_fields' => 1,
        'classes' => 'group-clp-hide-fields field-group-fieldset',
        'description' => 'Fields Not Used in FW',
      ),
      'formatter' => 'collapsed',
    ),
  );
  $field_groups['group_clp_hide_fields|node|channel_landing_page|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_clp_of_day|node|channel_landing_page|form';
  $field_group->group_name = 'group_clp_of_day';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'channel_landing_page';
  $field_group->mode = 'form';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Of The Day Group',
    'weight' => '3',
    'children' => array(
      0 => 'field_clp_of_day_deck',
      1 => 'field_clp_of_day_image',
      2 => 'field_clp_of_day_img_alt',
      3 => 'field_clp_of_day_img_caption',
      4 => 'field_clp_of_day_slug',
      5 => 'field_clp_of_day_title',
    ),
    'format_type' => 'fieldset',
    'format_settings' => array(
      'label' => 'Of The Day Group',
      'instance_settings' => array(
        'required_fields' => 1,
        'classes' => 'group-clp-of-day field-group-fieldset',
        'description' => '',
      ),
      'formatter' => 'collapsible',
    ),
  );
  $field_groups['group_clp_of_day|node|channel_landing_page|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_clp_promo|node|channel_landing_page|form';
  $field_group->group_name = 'group_clp_promo';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'channel_landing_page';
  $field_group->mode = 'form';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Promo Group',
    'weight' => '1',
    'children' => array(
      0 => 'field_clp_promo',
      1 => 'field_clp_promo_block_title',
      2 => 'field_clp_promo_title_image',
    ),
    'format_type' => 'fieldset',
    'format_settings' => array(
      'label' => 'Promo Group',
      'instance_settings' => array(
        'required_fields' => 1,
        'classes' => 'group-clp-promo field-group-fieldset',
        'description' => '',
      ),
      'formatter' => 'collapsible',
    ),
  );
  $field_groups['group_clp_promo|node|channel_landing_page|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_clp_recipes_directory|node|channel_landing_page|form';
  $field_group->group_name = 'group_clp_recipes_directory';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'channel_landing_page';
  $field_group->mode = 'form';
  $field_group->parent_name = 'group_clp_hide_fields';
  $field_group->data = array(
    'label' => 'Recipes Directory',
    'weight' => '7',
    'children' => array(
      0 => 'field_clp_recipes_directory',
    ),
    'format_type' => 'fieldset',
    'format_settings' => array(
      'label' => 'Recipes Directory',
      'instance_settings' => array(
        'required_fields' => 1,
        'classes' => 'group-clp-recipes-directory field-group-fieldset',
        'description' => '',
      ),
      'formatter' => 'collapsed',
    ),
  );
  $field_groups['group_clp_recipes_directory|node|channel_landing_page|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_clp_video|node|channel_landing_page|form';
  $field_group->group_name = 'group_clp_video';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'channel_landing_page';
  $field_group->mode = 'form';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Video Group',
    'weight' => '5',
    'children' => array(
      0 => 'field_clp_video',
      1 => 'field_related_videos',
    ),
    'format_type' => 'fieldset',
    'format_settings' => array(
      'formatter' => 'collapsible',
      'instance_settings' => array(
        'description' => '',
        'classes' => 'group-clp-video field-group-fieldset',
        'required_fields' => 1,
      ),
    ),
  );
  $field_groups['group_clp_video|node|channel_landing_page|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_featured_directory|node|channel_landing_page|form';
  $field_group->group_name = 'group_featured_directory';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'channel_landing_page';
  $field_group->mode = 'form';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Featured Directory',
    'weight' => '14',
    'children' => array(
      0 => 'field_fd_reference',
    ),
    'format_type' => 'fieldset',
    'format_settings' => array(
      'formatter' => 'collapsible',
      'instance_settings' => array(
        'description' => '',
        'classes' => 'group-featured-directory field-group-fieldset',
        'required_fields' => 1,
      ),
    ),
  );
  $field_groups['group_featured_directory|node|channel_landing_page|form'] = $field_group;

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
    'weight' => '12',
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
  $field_groups['group_featured_slideshows|node|channel_landing_page|form'] = $field_group;

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
    'weight' => '13',
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
  $field_groups['group_recipe_slideshows|node|channel_landing_page|form'] = $field_group;

  // Translatables
  // Included for use with string extractors like potx.
  t('Feature Front Group');
  t('Featured Directory');
  t('Featured Slideshows');
  t('Of The Day Group');
  t('Promo Group');
  t('Recipe Slideshows');
  t('Recipes Directory');
  t('The Best Of Group');
  t('Unused Fields');
  t('Video Group');

  return $field_groups;
}
