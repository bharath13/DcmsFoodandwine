<?php
/**
 * @file
 * ti_recipe_content_type.field_group.inc
 */

/**
 * Implements hook_field_group_info().
 */
function ti_recipe_content_type_field_group_info() {
  $field_groups = array();

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_attributes|node|recipe|form';
  $field_group->group_name = 'group_attributes';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'recipe';
  $field_group->mode = 'form';
  $field_group->parent_name = 'group_recipe_multistep';
  $field_group->data = array(
    'label' => 'Attributes',
    'weight' => '5',
    'children' => array(
      0 => 'field_active_time',
      1 => 'field_recipe_time',
      2 => 'field_yield',
    ),
    'format_type' => 'fieldset',
    'format_settings' => array(
      'formatter' => 'open',
      'instance_settings' => array(
        'description' => '',
        'classes' => 'group-attributes field-group-fieldset',
        'required_fields' => 1,
      ),
    ),
  );
  $field_groups['group_attributes|node|recipe|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_authoring|node|recipe|form';
  $field_group->group_name = 'group_authoring';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'recipe';
  $field_group->mode = 'form';
  $field_group->parent_name = 'group_recipe_info';
  $field_group->data = array(
    'label' => 'Authoring',
    'weight' => '14',
    'children' => array(
      0 => 'field_chefs_author',
      1 => 'field_people_author',
      2 => 'field_source_author',
    ),
    'format_type' => 'fieldset',
    'format_settings' => array(
      'formatter' => 'open',
      'instance_settings' => array(
        'description' => '',
        'classes' => 'group-authoring field-group-fieldset',
        'required_fields' => 1,
      ),
    ),
  );
  $field_groups['group_authoring|node|recipe|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_directions|node|recipe|form';
  $field_group->group_name = 'group_directions';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'recipe';
  $field_group->mode = 'form';
  $field_group->parent_name = 'group_recipe_multistep';
  $field_group->data = array(
    'label' => 'Directions',
    'weight' => '7',
    'children' => array(
      0 => 'field_directions',
      1 => 'field_make_ahead',
      2 => 'field_serve_notes',
      3 => 'field_serve_with',
    ),
    'format_type' => 'htab',
    'format_settings' => array(
      'formatter' => 'closed',
      'instance_settings' => array(
        'description' => '',
        'classes' => '',
        'required_fields' => 1,
        'id' => '',
      ),
    ),
  );
  $field_groups['group_directions|node|recipe|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_ets|node|recipe|form';
  $field_group->group_name = 'group_ets';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'recipe';
  $field_group->mode = 'form';
  $field_group->parent_name = 'group_recipe_info';
  $field_group->data = array(
    'label' => 'ETS',
    'weight' => '21',
    'children' => array(
      0 => 'field_ets_rights',
      1 => 'field_ets_rights_notes',
      2 => 'field_ets_sn',
      3 => 'field_ets_story_id',
    ),
    'format_type' => 'fieldset',
    'format_settings' => array(
      'formatter' => 'collapsible',
      'instance_settings' => array(
        'description' => '',
        'classes' => 'group-ets field-group-fieldset',
        'required_fields' => 1,
      ),
    ),
  );
  $field_groups['group_ets|node|recipe|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_headlines|node|recipe|form';
  $field_group->group_name = 'group_headlines';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'recipe';
  $field_group->mode = 'form';
  $field_group->parent_name = 'group_hide_fields';
  $field_group->data = array(
    'label' => 'Headlines',
    'weight' => '27',
    'children' => array(
      0 => 'field_headline',
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
  $field_groups['group_headlines|node|recipe|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_hide_fields|field_collection_item|field_ingredients|form';
  $field_group->group_name = 'group_hide_fields';
  $field_group->entity_type = 'field_collection_item';
  $field_group->bundle = 'field_ingredients';
  $field_group->mode = 'form';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'HIDE DCMS FIELDS',
    'weight' => '13',
    'children' => array(
      0 => 'field_ingredient_shopping_info',
    ),
    'format_type' => 'fieldset',
    'format_settings' => array(
      'label' => 'HIDE DCMS FIELDS',
      'instance_settings' => array(
        'required_fields' => 1,
        'classes' => 'group-hide-fields field-group-fieldset',
        'description' => '',
      ),
      'formatter' => 'collapsed',
    ),
  );
  $field_groups['group_hide_fields|field_collection_item|field_ingredients|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_hide_fields|field_collection_item|field_recipe_time|form';
  $field_group->group_name = 'group_hide_fields';
  $field_group->entity_type = 'field_collection_item';
  $field_group->bundle = 'field_recipe_time';
  $field_group->mode = 'form';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Hide DCMS Fields',
    'weight' => '3',
    'children' => array(
      0 => 'field_recipe_time_duration',
      1 => 'field_recipe_time_type',
      2 => 'field_recipe_time_unit',
    ),
    'format_type' => 'fieldset',
    'format_settings' => array(
      'label' => 'Hide DCMS Fields',
      'instance_settings' => array(
        'required_fields' => 1,
        'classes' => 'group-hide-fields field-group-fieldset',
        'description' => '',
      ),
      'formatter' => 'collapsed',
    ),
  );
  $field_groups['group_hide_fields|field_collection_item|field_recipe_time|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_hide_fields|node|recipe|form';
  $field_group->group_name = 'group_hide_fields';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'recipe';
  $field_group->mode = 'form';
  $field_group->parent_name = 'group_misc';
  $field_group->data = array(
    'label' => 'Unused Fields',
    'weight' => '13',
    'children' => array(
      0 => 'field_category',
      1 => 'field_description',
      2 => 'field_author',
      3 => 'field_chef_author',
      4 => 'field_eyebrow',
      5 => 'field_legacy_id',
      6 => 'field_notes',
      7 => 'field_nutrition_data',
      8 => 'field_serving_notes',
      9 => 'field_serving_size',
      10 => 'field_serving_units',
      11 => 'field_overwrite_image_alt_text',
      12 => 'field_overwrite_image_caption',
      13 => 'field_overwrite_image_credit',
      14 => 'field_ad_keys',
      15 => 'syndicated_from',
      16 => 'group_nutrition_data',
      17 => 'group_recipe_rating_info',
      18 => 'group_headlines',
      19 => 'group_instructions',
      20 => 'group_notes',
      21 => 'group_servings',
      22 => 'group_source',
      23 => 'group_tags',
    ),
    'format_type' => 'fieldset',
    'format_settings' => array(
      'label' => 'Unused Fields',
      'instance_settings' => array(
        'required_fields' => 1,
        'classes' => 'group-hide-fields field-group-fieldset',
        'description' => '',
      ),
      'formatter' => 'collapsed',
    ),
  );
  $field_groups['group_hide_fields|node|recipe|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_image_rights|node|recipe|form';
  $field_group->group_name = 'group_image_rights';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'recipe';
  $field_group->mode = 'form';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Image Rights',
    'weight' => '2',
    'children' => array(),
    'format_type' => 'fieldset',
    'format_settings' => array(
      'label' => 'Image Rights',
      'instance_settings' => array(
        'required_fields' => 1,
        'classes' => 'group-image-rights field-group-fieldset',
        'description' => '',
      ),
      'formatter' => 'open',
    ),
  );
  $field_groups['group_image_rights|node|recipe|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_images|node|recipe|form';
  $field_group->group_name = 'group_images';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'recipe';
  $field_group->mode = 'form';
  $field_group->parent_name = 'group_recipe_multistep';
  $field_group->data = array(
    'label' => 'Photos',
    'weight' => '10',
    'children' => array(
      0 => 'field_image_rights',
      1 => 'field_image_rights_notes',
      2 => 'field_images',
      3 => 'field_hero_video',
    ),
    'format_type' => 'fieldset',
    'format_settings' => array(
      'label' => 'Photos',
      'instance_settings' => array(
        'required_fields' => 1,
        'classes' => 'group-images field-group-fieldset',
        'description' => '',
      ),
      'formatter' => 'open',
    ),
  );
  $field_groups['group_images|node|recipe|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_ingredients|node|recipe|form';
  $field_group->group_name = 'group_ingredients';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'recipe';
  $field_group->mode = 'form';
  $field_group->parent_name = 'group_recipe_multistep';
  $field_group->data = array(
    'label' => 'Ingredients',
    'weight' => '6',
    'children' => array(
      0 => 'field_exclusions',
      1 => 'field_ingredient_category',
      2 => 'field_ingredients',
    ),
    'format_type' => 'fieldset',
    'format_settings' => array(
      'formatter' => 'open',
      'instance_settings' => array(
        'description' => '',
        'classes' => 'group-ingredients field-group-fieldset',
        'required_fields' => 1,
      ),
    ),
  );
  $field_groups['group_ingredients|node|recipe|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_instructions|node|recipe|form';
  $field_group->group_name = 'group_instructions';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'recipe';
  $field_group->mode = 'form';
  $field_group->parent_name = 'group_hide_fields';
  $field_group->data = array(
    'label' => 'Instructions',
    'weight' => '29',
    'children' => array(
      0 => 'field_instructions',
    ),
    'format_type' => 'fieldset',
    'format_settings' => array(
      'formatter' => 'open',
      'instance_settings' => array(
        'description' => '',
        'classes' => 'group-instructions field-group-fieldset',
        'required_fields' => 1,
      ),
    ),
  );
  $field_groups['group_instructions|node|recipe|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_misc|node|recipe|form';
  $field_group->group_name = 'group_misc';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'recipe';
  $field_group->mode = 'form';
  $field_group->parent_name = 'group_recipe_multistep';
  $field_group->data = array(
    'label' => 'Misc',
    'weight' => '12',
    'children' => array(
      0 => 'field_rebelmouse_tag',
      1 => 'field_exclude_relvideo_module',
      2 => 'field_related_cnt_links',
      3 => 'field_ad_value',
      4 => 'metatags',
      5 => 'path',
      6 => 'redirect',
      7 => 'xmlsitemap',
      8 => 'group_hide_fields',
    ),
    'format_type' => 'fieldset',
    'format_settings' => array(
      'formatter' => 'open',
      'instance_settings' => array(
        'description' => '',
        'classes' => 'group-misc field-group-fieldset',
        'required_fields' => 1,
      ),
    ),
  );
  $field_groups['group_misc|node|recipe|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_notes|node|recipe|form';
  $field_group->group_name = 'group_notes';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'recipe';
  $field_group->mode = 'form';
  $field_group->parent_name = 'group_hide_fields';
  $field_group->data = array(
    'label' => 'Notes',
    'weight' => '32',
    'children' => array(
      0 => 'field_test_kitchen_notes',
    ),
    'format_type' => 'fieldset',
    'format_settings' => array(
      'formatter' => 'open',
      'instance_settings' => array(
        'description' => '',
        'classes' => 'group-notes field-group-fieldset',
        'required_fields' => 1,
      ),
    ),
  );
  $field_groups['group_notes|node|recipe|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_pairings|node|recipe|form';
  $field_group->group_name = 'group_pairings';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'recipe';
  $field_group->mode = 'form';
  $field_group->parent_name = 'group_recipe_multistep';
  $field_group->data = array(
    'label' => 'Pairings',
    'weight' => '8',
    'children' => array(
      0 => 'field_pairing_notes',
    ),
    'format_type' => 'htab',
    'format_settings' => array(
      'label' => 'Pairings',
      'instance_settings' => array(
        'required_fields' => 1,
        'id' => '',
        'classes' => '',
        'description' => '',
      ),
      'formatter' => 'closed',
    ),
  );
  $field_groups['group_pairings|node|recipe|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_parsed_data|field_collection_item|field_ingredients|form';
  $field_group->group_name = 'group_parsed_data';
  $field_group->entity_type = 'field_collection_item';
  $field_group->bundle = 'field_ingredients';
  $field_group->mode = 'form';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Parsed Data',
    'weight' => '2',
    'children' => array(
      0 => 'field_ingredient_fraction',
      1 => 'field_ingredient_is_main',
      2 => 'field_ingredient_is_primary',
      3 => 'field_ingredient_mea_notes',
      4 => 'field_ingredient_name',
      5 => 'field_ingredient_primary',
      6 => 'field_ingredient_quantity',
      7 => 'field_ingredient_unit',
      8 => 'field_ingredient_whole',
      9 => 'field_prep_notes',
      10 => 'group_hide_fields',
    ),
    'format_type' => 'fieldset',
    'format_settings' => array(
      'label' => 'Parsed Data',
      'instance_settings' => array(
        'required_fields' => 1,
        'classes' => 'group-parsed-data field-group-fieldset',
        'description' => '',
      ),
      'formatter' => 'collapsed',
    ),
  );
  $field_groups['group_parsed_data|field_collection_item|field_ingredients|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_popular_recipes|node|recipe|form';
  $field_group->group_name = 'group_popular_recipes';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'recipe';
  $field_group->mode = 'form';
  $field_group->parent_name = 'group_recipe_info';
  $field_group->data = array(
    'label' => 'Popular Recipes',
    'weight' => '19',
    'children' => array(
      0 => 'field_popular_recipes_recipe',
      1 => 'field_popular_recipes_title',
    ),
    'format_type' => 'fieldset',
    'format_settings' => array(
      'label' => 'Popular Recipes',
      'instance_settings' => array(
        'required_fields' => 1,
        'classes' => 'group-popular-recipes field-group-fieldset',
        'description' => '',
      ),
      'formatter' => 'open',
    ),
  );
  $field_groups['group_popular_recipes|node|recipe|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_ratings|node|recipe|form';
  $field_group->group_name = 'group_ratings';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'recipe';
  $field_group->mode = 'form';
  $field_group->parent_name = 'group_recipe_info';
  $field_group->data = array(
    'label' => 'Ratings',
    'weight' => '22',
    'children' => array(
      0 => 'field_rating',
    ),
    'format_type' => 'fieldset',
    'format_settings' => array(
      'label' => 'Ratings',
      'instance_settings' => array(
        'required_fields' => 1,
        'classes' => 'group-ratings field-group-fieldset',
        'description' => '',
      ),
      'formatter' => 'open',
    ),
  );
  $field_groups['group_ratings|node|recipe|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_recipe_info|node|recipe|form';
  $field_group->group_name = 'group_recipe_info';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'recipe';
  $field_group->mode = 'form';
  $field_group->parent_name = 'group_recipe_multistep';
  $field_group->data = array(
    'label' => 'Recipe Info',
    'weight' => '4',
    'children' => array(
      0 => 'field_sponsor_flag',
      1 => 'field_sponsor_list',
      2 => 'field_tap_badge',
      3 => 'field_deck',
      4 => 'field_issue',
      5 => 'field_recipe_rating',
      6 => 'field_seo_path',
      7 => 'title',
      8 => 'group_authoring',
      9 => 'group_ets',
      10 => 'group_popular_recipes',
      11 => 'group_ratings',
      12 => 'group_related_artciles_galleries',
      13 => 'group_related_videos',
      14 => 'group_top_video_tout',
    ),
    'format_type' => 'htab',
    'format_settings' => array(
      'label' => 'Recipe Info',
      'instance_settings' => array(
        'required_fields' => 1,
        'id' => '',
        'classes' => '',
        'description' => '',
      ),
      'formatter' => 'open',
    ),
  );
  $field_groups['group_recipe_info|node|recipe|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_recipe_multistep|node|recipe|form';
  $field_group->group_name = 'group_recipe_multistep';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'recipe';
  $field_group->mode = 'form';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Recipe Multi step',
    'weight' => '1',
    'children' => array(
      0 => 'group_publishing_options',
      1 => 'group_attributes',
      2 => 'group_directions',
      3 => 'group_images',
      4 => 'group_ingredients',
      5 => 'group_misc',
      6 => 'group_pairings',
      7 => 'group_recipe_info',
      8 => 'group_themes',
    ),
    'format_type' => 'htabs',
    'format_settings' => array(
      'label' => 'Recipe Multi step',
      'instance_settings' => array(
        'classes' => 'group-recipe-multistep field-group-htabs',
      ),
    ),
  );
  $field_groups['group_recipe_multistep|node|recipe|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_related_artciles_galleries|node|recipe|form';
  $field_group->group_name = 'group_related_artciles_galleries';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'recipe';
  $field_group->mode = 'form';
  $field_group->parent_name = 'group_recipe_info';
  $field_group->data = array(
    'label' => 'Related Articles and Galleries',
    'weight' => '20',
    'children' => array(
      0 => 'field_articles_and_galleries',
      1 => 'field_related_contents_title',
    ),
    'format_type' => 'fieldset',
    'format_settings' => array(
      'label' => 'Related Articles and Galleries',
      'instance_settings' => array(
        'required_fields' => 1,
        'classes' => 'group-related-artciles-galleries field-group-fieldset',
        'description' => '',
      ),
      'formatter' => 'open',
    ),
  );
  $field_groups['group_related_artciles_galleries|node|recipe|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_related_videos|node|recipe|form';
  $field_group->group_name = 'group_related_videos';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'recipe';
  $field_group->mode = 'form';
  $field_group->parent_name = 'group_recipe_info';
  $field_group->data = array(
    'label' => 'Related Videos',
    'weight' => '16',
    'children' => array(
      0 => 'field_related_videos',
      1 => 'field_related_videos_title',
    ),
    'format_type' => 'fieldset',
    'format_settings' => array(
      'label' => 'Related Videos',
      'instance_settings' => array(
        'required_fields' => 1,
        'classes' => 'group-related-videos field-group-fieldset',
        'description' => '',
      ),
      'formatter' => 'open',
    ),
  );
  $field_groups['group_related_videos|node|recipe|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_servings|node|recipe|form';
  $field_group->group_name = 'group_servings';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'recipe';
  $field_group->mode = 'form';
  $field_group->parent_name = 'group_hide_fields';
  $field_group->data = array(
    'label' => 'Servings',
    'weight' => '28',
    'children' => array(
      0 => 'field_cost_per_serving',
    ),
    'format_type' => 'fieldset',
    'format_settings' => array(
      'formatter' => 'open',
      'instance_settings' => array(
        'description' => '',
        'classes' => 'group-servings field-group-fieldset',
        'required_fields' => 1,
      ),
    ),
  );
  $field_groups['group_servings|node|recipe|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_source|node|recipe|form';
  $field_group->group_name = 'group_source';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'recipe';
  $field_group->mode = 'form';
  $field_group->parent_name = 'group_hide_fields';
  $field_group->data = array(
    'label' => 'Source',
    'weight' => '31',
    'children' => array(
      0 => 'field_cookbook_source',
      1 => 'field_restaurant_source',
    ),
    'format_type' => 'fieldset',
    'format_settings' => array(
      'formatter' => 'open',
      'instance_settings' => array(
        'description' => '',
        'classes' => 'group-source field-group-fieldset',
        'required_fields' => 1,
      ),
    ),
  );
  $field_groups['group_source|node|recipe|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_tags|node|recipe|form';
  $field_group->group_name = 'group_tags';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'recipe';
  $field_group->mode = 'form';
  $field_group->parent_name = 'group_hide_fields';
  $field_group->data = array(
    'label' => 'Tags',
    'weight' => '33',
    'children' => array(
      0 => 'field_tags',
    ),
    'format_type' => 'fieldset',
    'format_settings' => array(
      'formatter' => 'open',
      'instance_settings' => array(
        'description' => '',
        'classes' => 'group-tags field-group-fieldset',
        'required_fields' => 1,
      ),
    ),
  );
  $field_groups['group_tags|node|recipe|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_themes|node|recipe|form';
  $field_group->group_name = 'group_themes';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'recipe';
  $field_group->mode = 'form';
  $field_group->parent_name = 'group_recipe_multistep';
  $field_group->data = array(
    'label' => 'Themes',
    'weight' => '9',
    'children' => array(
      0 => 'field_complex_theme',
      1 => 'field_related_links',
      2 => 'field_flavors',
      3 => 'field_global_tags',
      4 => 'field_seasonal_tags',
      5 => 'field_fw_category',
      6 => 'field_fw_course',
      7 => 'field_fw_cuisine',
      8 => 'field_fw_season',
      9 => 'field_fw_style',
      10 => 'field_fw_tags',
      11 => 'field_digital_desk',
    ),
    'format_type' => 'htab',
    'format_settings' => array(
      'formatter' => 'closed',
      'instance_settings' => array(
        'description' => '',
        'classes' => '',
        'required_fields' => 1,
        'id' => '',
      ),
    ),
  );
  $field_groups['group_themes|node|recipe|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_top_video_tout|node|recipe|form';
  $field_group->group_name = 'group_top_video_tout';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'recipe';
  $field_group->mode = 'form';
  $field_group->parent_name = 'group_recipe_info';
  $field_group->data = array(
    'label' => 'Top Video Tout',
    'weight' => '18',
    'children' => array(
      0 => 'field_top_video_tout_title',
      1 => 'field_top_video_tout_video',
    ),
    'format_type' => 'fieldset',
    'format_settings' => array(
      'label' => 'Top Video Tout',
      'instance_settings' => array(
        'required_fields' => 1,
        'classes' => 'group-top-video-tout field-group-fieldset',
        'description' => '',
      ),
      'formatter' => 'open',
    ),
  );
  $field_groups['group_top_video_tout|node|recipe|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_workflow_tags|node|recipe|form';
  $field_group->group_name = 'group_workflow_tags';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'recipe';
  $field_group->mode = 'form';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Workflow Flags',
    'weight' => '0',
    'children' => array(
      0 => 'field_wf_edit_check_1',
      1 => 'field_wf_edit_check_2',
      2 => 'field_wf_final_check',
      3 => 'field_wf_parsing',
      4 => 'field_wf_parsing_qa',
      5 => 'field_wf_photo_added',
      6 => 'field_wf_photo_qa',
      7 => 'field_wf_producer_qa',
      8 => 'field_wf_rights_check',
    ),
    'format_type' => 'fieldset',
    'format_settings' => array(
      'label' => 'Workflow Flags',
      'instance_settings' => array(
        'required_fields' => 1,
        'classes' => 'group-workflow-tags field-group-fieldset',
        'description' => '',
      ),
      'formatter' => 'collapsed',
    ),
  );
  $field_groups['group_workflow_tags|node|recipe|form'] = $field_group;

  // Translatables
  // Included for use with string extractors like potx.
  t('Attributes');
  t('Authoring');
  t('Directions');
  t('ETS');
  t('HIDE DCMS FIELDS');
  t('Headlines');
  t('Hide DCMS Fields');
  t('Image Rights');
  t('Ingredients');
  t('Instructions');
  t('Misc');
  t('Notes');
  t('Pairings');
  t('Parsed Data');
  t('Photos');
  t('Popular Recipes');
  t('Ratings');
  t('Recipe Info');
  t('Recipe Multi step');
  t('Related Articles and Galleries');
  t('Related Videos');
  t('Servings');
  t('Source');
  t('Tags');
  t('Themes');
  t('Top Video Tout');
  t('Unused Fields');
  t('Workflow Flags');

  return $field_groups;
}
