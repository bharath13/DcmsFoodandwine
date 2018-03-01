<?php
/**
 * @file
 * ti_channel_landing_responsive_content_type.field_group.inc
 */

/**
 * Implements hook_field_group_info().
 */
function ti_channel_landing_responsive_content_type_field_group_info() {
  $field_groups = array();

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_campaign_logo|node|channel_landing_page_responsive|form';
  $field_group->group_name = 'group_campaign_logo';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'channel_landing_page_responsive';
  $field_group->mode = 'form';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Campaign Logo',
    'weight' => '19',
    'children' => array(
      0 => 'field_campaign_logo',
      1 => 'field_campaign_url',
    ),
    'format_type' => 'fieldset',
    'format_settings' => array(
      'label' => 'Campaign Logo',
      'instance_settings' => array(
        'required_fields' => 1,
        'classes' => 'group-campaign-logo field-group-fieldset',
        'description' => '',
      ),
      'formatter' => 'open',
    ),
  );
  $field_groups['group_campaign_logo|node|channel_landing_page_responsive|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_channel_filmstrip|node|channel_landing_page_responsive|form';
  $field_group->group_name = 'group_channel_filmstrip';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'channel_landing_page_responsive';
  $field_group->mode = 'form';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Filmstrip',
    'weight' => '8',
    'children' => array(
      0 => 'field_channel_film_slide',
      1 => 'field_filmstrip_tags',
    ),
    'format_type' => 'fieldset',
    'format_settings' => array(
      'label' => 'Filmstrip',
      'instance_settings' => array(
        'required_fields' => 1,
        'classes' => 'group-channel-filmstrip field-group-fieldset',
        'description' => '',
      ),
      'formatter' => 'open',
    ),
  );
  $field_groups['group_channel_filmstrip|node|channel_landing_page_responsive|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_channel_guides_section|node|channel_landing_page_responsive|form';
  $field_group->group_name = 'group_channel_guides_section';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'channel_landing_page_responsive';
  $field_group->mode = 'form';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Guides Section',
    'weight' => '13',
    'children' => array(
      0 => 'field_guides_more_link',
      1 => 'field_guides_section_title',
      2 => 'field_guides_stories',
      3 => 'field_guides_deck',
      4 => 'field_guides_subheading',
      5 => 'field_recipe_guide_tags',
    ),
    'format_type' => 'fieldset',
    'format_settings' => array(
      'label' => 'Guides Section',
      'instance_settings' => array(
        'required_fields' => 1,
        'classes' => 'group-channel-guides-section field-group-fieldset',
        'description' => '',
      ),
      'formatter' => 'open',
    ),
  );
  $field_groups['group_channel_guides_section|node|channel_landing_page_responsive|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_channel_hero_carousel|node|channel_landing_page_responsive|form';
  $field_group->group_name = 'group_channel_hero_carousel';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'channel_landing_page_responsive';
  $field_group->mode = 'form';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Hero Carousel',
    'weight' => '9',
    'children' => array(
      0 => 'field_hero_slide',
      1 => 'field_hero_tags',
    ),
    'format_type' => 'fieldset',
    'format_settings' => array(
      'label' => 'Hero Carousel',
      'instance_settings' => array(
        'required_fields' => 1,
        'classes' => 'group-channel-hero-carousel field-group-fieldset',
        'description' => '',
      ),
      'formatter' => 'open',
    ),
  );
  $field_groups['group_channel_hero_carousel|node|channel_landing_page_responsive|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_channel_latest_slugs|field_collection_item|field_channel_latest_stories|form';
  $field_group->group_name = 'group_channel_latest_slugs';
  $field_group->entity_type = 'field_collection_item';
  $field_group->bundle = 'field_channel_latest_stories';
  $field_group->mode = 'form';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Slugs',
    'weight' => '5',
    'children' => array(
      0 => 'field_channel_latest_slug',
    ),
    'format_type' => 'fieldset',
    'format_settings' => array(
      'formatter' => 'collapsible',
      'instance_settings' => array(
        'description' => '',
        'classes' => 'group-channel-latest-slugs field-group-fieldset',
        'required_fields' => 1,
      ),
    ),
  );
  $field_groups['group_channel_latest_slugs|field_collection_item|field_channel_latest_stories|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_channel_latest_stories|node|channel_landing_page_responsive|form';
  $field_group->group_name = 'group_channel_latest_stories';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'channel_landing_page_responsive';
  $field_group->mode = 'form';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Latest Stories Section',
    'weight' => '12',
    'children' => array(
      0 => 'field_channel_latest_stories',
      1 => 'field_latest_stories_more_link',
      2 => 'field_topic',
      3 => 'field_latest_stories_tags',
      4 => 'group_large_tout_section',
      5 => 'group_small_tout_section',
      6 => 'group_video_section',
    ),
    'format_type' => 'fieldset',
    'format_settings' => array(
      'label' => 'Latest Stories Section',
      'instance_settings' => array(
        'required_fields' => 1,
        'classes' => 'group-channel-latest-stories field-group-fieldset',
        'description' => '',
      ),
      'formatter' => 'open',
    ),
  );
  $field_groups['group_channel_latest_stories|node|channel_landing_page_responsive|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_channel_most_popular|node|channel_landing_page_responsive|form';
  $field_group->group_name = 'group_channel_most_popular';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'channel_landing_page_responsive';
  $field_group->mode = 'form';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Most Popular Section',
    'weight' => '14',
    'children' => array(
      0 => 'field_most_popular_entity',
      1 => 'field_most_popular_title',
    ),
    'format_type' => 'fieldset',
    'format_settings' => array(
      'label' => 'Most Popular Section',
      'instance_settings' => array(
        'required_fields' => 1,
        'classes' => 'group-channel-most-popular field-group-fieldset',
        'description' => '',
      ),
      'formatter' => 'open',
    ),
  );
  $field_groups['group_channel_most_popular|node|channel_landing_page_responsive|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_daily_recipes|node|channel_landing_page_responsive|form';
  $field_group->group_name = 'group_daily_recipes';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'channel_landing_page_responsive';
  $field_group->mode = 'form';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Daily Recipes Section',
    'weight' => '11',
    'children' => array(
      0 => 'field_daily_recipe_tags',
    ),
    'format_type' => 'fieldset',
    'format_settings' => array(
      'label' => 'Daily Recipes Section',
      'instance_settings' => array(
        'required_fields' => 1,
        'classes' => 'group-daily-recipes field-group-fieldset',
        'description' => '',
      ),
      'formatter' => 'open',
    ),
  );
  $field_groups['group_daily_recipes|node|channel_landing_page_responsive|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_featured_col_1|node|channel_landing_page_responsive|form';
  $field_group->group_name = 'group_featured_col_1';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'channel_landing_page_responsive';
  $field_group->mode = 'form';
  $field_group->parent_name = 'group_seo_links_section';
  $field_group->data = array(
    'label' => 'Featured Column 1',
    'weight' => '41',
    'children' => array(
      0 => 'field_featured_col_1_content',
      1 => 'field_featured_col_1_image',
      2 => 'field_featured_col_1_link',
      3 => 'field_featured_col_1_link_text',
      4 => 'field_subsection_col_1_title',
    ),
    'format_type' => 'fieldset',
    'format_settings' => array(
      'label' => 'Featured Column 1',
      'instance_settings' => array(
        'required_fields' => 1,
        'classes' => 'group-featured-col-1 field-group-fieldset',
        'description' => '',
      ),
      'formatter' => 'open',
    ),
  );
  $field_groups['group_featured_col_1|node|channel_landing_page_responsive|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_featured_col_3|node|channel_landing_page_responsive|form';
  $field_group->group_name = 'group_featured_col_3';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'channel_landing_page_responsive';
  $field_group->mode = 'form';
  $field_group->parent_name = 'group_seo_links_section';
  $field_group->data = array(
    'label' => 'Featured Column 3',
    'weight' => '43',
    'children' => array(
      0 => 'field_featured_col_3_content',
      1 => 'field_featured_col_3_image',
      2 => 'field_featured_col_3_link',
      3 => 'field_featured_col_3_link_text',
      4 => 'field_subsection_col_3_title',
    ),
    'format_type' => 'fieldset',
    'format_settings' => array(
      'label' => 'Featured Column 3',
      'instance_settings' => array(
        'required_fields' => 1,
        'classes' => 'group-featured-col-3 field-group-fieldset',
        'description' => '',
      ),
      'formatter' => 'open',
    ),
  );
  $field_groups['group_featured_col_3|node|channel_landing_page_responsive|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_large_tout_section|node|channel_landing_page_responsive|form';
  $field_group->group_name = 'group_large_tout_section';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'channel_landing_page_responsive';
  $field_group->mode = 'form';
  $field_group->parent_name = 'group_channel_latest_stories';
  $field_group->data = array(
    'label' => 'Large Tout Section',
    'weight' => '65',
    'children' => array(
      0 => 'field_large_tout_section_deck',
      1 => 'field_large_tout_section_title',
      2 => 'field_large_tout_sub_heading',
    ),
    'format_type' => 'fieldset',
    'format_settings' => array(
      'label' => 'Large Tout Section',
      'instance_settings' => array(
        'required_fields' => 1,
        'classes' => 'group-large-tout-section field-group-fieldset',
        'description' => '',
      ),
      'formatter' => 'open',
    ),
  );
  $field_groups['group_large_tout_section|node|channel_landing_page_responsive|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_links_col_2|node|channel_landing_page_responsive|form';
  $field_group->group_name = 'group_links_col_2';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'channel_landing_page_responsive';
  $field_group->mode = 'form';
  $field_group->parent_name = 'group_seo_links_section';
  $field_group->data = array(
    'label' => 'Links Column 2',
    'weight' => '42',
    'children' => array(
      0 => 'field_link_column_2_content',
      1 => 'field_subsection_col_2_title',
    ),
    'format_type' => 'fieldset',
    'format_settings' => array(
      'label' => 'Links Column 2',
      'instance_settings' => array(
        'required_fields' => 1,
        'classes' => 'group-links-col-2 field-group-fieldset',
        'description' => '',
      ),
      'formatter' => 'open',
    ),
  );
  $field_groups['group_links_col_2|node|channel_landing_page_responsive|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_links_col_4|node|channel_landing_page_responsive|form';
  $field_group->group_name = 'group_links_col_4';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'channel_landing_page_responsive';
  $field_group->mode = 'form';
  $field_group->parent_name = 'group_seo_links_section';
  $field_group->data = array(
    'label' => 'Links Column 4',
    'weight' => '44',
    'children' => array(
      0 => 'field_link_column_4_content',
      1 => 'field_subsection_col_4_title',
    ),
    'format_type' => 'fieldset',
    'format_settings' => array(
      'label' => 'Links Column 4',
      'instance_settings' => array(
        'required_fields' => 1,
        'classes' => 'group-links-col-4 field-group-fieldset',
        'description' => '',
      ),
      'formatter' => 'open',
    ),
  );
  $field_groups['group_links_col_4|node|channel_landing_page_responsive|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_pull_quote_sect|node|channel_landing_page_responsive|form';
  $field_group->group_name = 'group_pull_quote_sect';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'channel_landing_page_responsive';
  $field_group->mode = 'form';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Pull Quote Section',
    'weight' => '10',
    'children' => array(
      0 => 'field_pull_quote',
      1 => 'field_pull_quote_tags',
    ),
    'format_type' => 'fieldset',
    'format_settings' => array(
      'label' => 'Pull Quote Section',
      'instance_settings' => array(
        'required_fields' => 1,
        'classes' => 'group-pull-quote-sect field-group-fieldset',
        'description' => '',
      ),
      'formatter' => 'open',
    ),
  );
  $field_groups['group_pull_quote_sect|node|channel_landing_page_responsive|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_seo_links_section|node|channel_landing_page_responsive|form';
  $field_group->group_name = 'group_seo_links_section';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'channel_landing_page_responsive';
  $field_group->mode = 'form';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Seo Links Section',
    'weight' => '17',
    'children' => array(
      0 => 'field_seo_link_section_title',
      1 => 'group_featured_col_1',
      2 => 'group_featured_col_3',
      3 => 'group_links_col_2',
      4 => 'group_links_col_4',
    ),
    'format_type' => 'fieldset',
    'format_settings' => array(
      'label' => 'Seo Links Section',
      'instance_settings' => array(
        'required_fields' => 1,
        'classes' => 'group-seo-links-section field-group-fieldset',
        'description' => '',
      ),
      'formatter' => 'open',
    ),
  );
  $field_groups['group_seo_links_section|node|channel_landing_page_responsive|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_small_tout_section|node|channel_landing_page_responsive|form';
  $field_group->group_name = 'group_small_tout_section';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'channel_landing_page_responsive';
  $field_group->mode = 'form';
  $field_group->parent_name = 'group_channel_latest_stories';
  $field_group->data = array(
    'label' => 'Small Tout Section',
    'weight' => '66',
    'children' => array(
      0 => 'field_small_tout_section_deck',
      1 => 'field_small_tout_section_title',
      2 => 'field_small_tout_sub_heading',
    ),
    'format_type' => 'fieldset',
    'format_settings' => array(
      'label' => 'Small Tout Section',
      'instance_settings' => array(
        'required_fields' => 1,
        'classes' => 'group-small-tout-section field-group-fieldset',
        'description' => '',
      ),
      'formatter' => 'open',
    ),
  );
  $field_groups['group_small_tout_section|node|channel_landing_page_responsive|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_use_classic_aspen_menu|node|channel_landing_page_responsive|form';
  $field_group->group_name = 'group_use_classic_aspen_menu';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'channel_landing_page_responsive';
  $field_group->mode = 'form';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Use Classic Aspen Menu',
    'weight' => '18',
    'children' => array(
      0 => 'field_show_classic_aspen_menu',
    ),
    'format_type' => 'fieldset',
    'format_settings' => array(
      'label' => 'Use Classic Aspen Menu',
      'instance_settings' => array(
        'required_fields' => 1,
        'classes' => 'group-use-classic-aspen-menu field-group-fieldset',
        'description' => '',
      ),
      'formatter' => 'open',
    ),
  );
  $field_groups['group_use_classic_aspen_menu|node|channel_landing_page_responsive|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_video_section|node|channel_landing_page_responsive|form';
  $field_group->group_name = 'group_video_section';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'channel_landing_page_responsive';
  $field_group->mode = 'form';
  $field_group->parent_name = 'group_channel_latest_stories';
  $field_group->data = array(
    'label' => 'Video Section',
    'weight' => '64',
    'children' => array(
      0 => 'field_channel_video_tout',
      1 => 'field_latest_section_title',
      2 => 'field_video_section_deck',
      3 => 'field_video_section_subheading',
    ),
    'format_type' => 'fieldset',
    'format_settings' => array(
      'label' => 'Video Section',
      'instance_settings' => array(
        'required_fields' => 0,
        'classes' => 'group-video-section field-group-fieldset',
        'description' => '',
      ),
      'formatter' => 'open',
    ),
  );
  $field_groups['group_video_section|node|channel_landing_page_responsive|form'] = $field_group;

  // Translatables
  // Included for use with string extractors like potx.
  t('Campaign Logo');
  t('Daily Recipes Section');
  t('Featured Column 1');
  t('Featured Column 3');
  t('Filmstrip');
  t('Guides Section');
  t('Hero Carousel');
  t('Large Tout Section');
  t('Latest Stories Section');
  t('Links Column 2');
  t('Links Column 4');
  t('Most Popular Section');
  t('Pull Quote Section');
  t('Seo Links Section');
  t('Slugs');
  t('Small Tout Section');
  t('Use Classic Aspen Menu');
  t('Video Section');

  return $field_groups;
}
