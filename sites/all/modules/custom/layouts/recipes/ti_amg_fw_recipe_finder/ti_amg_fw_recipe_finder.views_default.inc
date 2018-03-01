<?php
/**
 * @file
 * ti_amg_fw_recipe_finder.views_default.inc
 */

/**
 * Implements hook_views_default_views().
 */
function ti_amg_fw_recipe_finder_views_default_views() {
  $export = array();

  $view = new view();
  $view->name = 'ti_amg_fw_recipe_finder';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'node';
  $view->human_name = 'TI AMG FW Recipe Finder';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['title'] = 'TI AMG FW Channel Landing Recipes Directory';
  $handler->display->display_options['css_class'] = 'recipes-directory';
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['access']['type'] = 'perm';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['pager']['type'] = 'full';
  $handler->display->display_options['pager']['options']['items_per_page'] = '15';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['pager']['options']['id'] = '0';
  $handler->display->display_options['pager']['options']['quantity'] = '9';
  $handler->display->display_options['style_plugin'] = 'grid';
  $handler->display->display_options['style_options']['row_class'] = 'recipes-directory-section';
  $handler->display->display_options['style_options']['columns'] = '3';
  $handler->display->display_options['row_plugin'] = 'fields';
  /* Header: Global: Text area */
  $handler->display->display_options['header']['area']['id'] = 'area';
  $handler->display->display_options['header']['area']['table'] = 'views';
  $handler->display->display_options['header']['area']['field'] = 'area';
  $handler->display->display_options['header']['area']['content'] = '<img src="/sites/all/themes/foodandwine/images/hd_recipes_directory.png" class="directory-title" alt="Recipes Directory">';
  $handler->display->display_options['header']['area']['format'] = 'wysiwyg';
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  /* Sort criterion: Content: Post date */
  $handler->display->display_options['sorts']['created']['id'] = 'created';
  $handler->display->display_options['sorts']['created']['table'] = 'node';
  $handler->display->display_options['sorts']['created']['field'] = 'created';
  $handler->display->display_options['sorts']['created']['order'] = 'DESC';
  /* Filter criterion: Content: Published */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = 1;
  $handler->display->display_options['filters']['status']['group'] = 1;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
  /* Filter criterion: Content: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'channel_landing_page' => 'channel_landing_page',
  );
  /* Filter criterion: Content: Recipes Directory (field_clp_recipes_directory) */
  $handler->display->display_options['filters']['field_clp_recipes_directory_value']['id'] = 'field_clp_recipes_directory_value';
  $handler->display->display_options['filters']['field_clp_recipes_directory_value']['table'] = 'field_data_field_clp_recipes_directory';
  $handler->display->display_options['filters']['field_clp_recipes_directory_value']['field'] = 'field_clp_recipes_directory_value';
  $handler->display->display_options['filters']['field_clp_recipes_directory_value']['operator'] = 'not empty';

  /* Display: Recipe Finder */
  $handler = $view->new_display('block', 'Recipe Finder', 'block_1');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['defaults']['relationships'] = FALSE;
  /* Relationship: Content: Featured Directory (field_featured_directory) */
  $handler->display->display_options['relationships']['field_featured_directory_value']['id'] = 'field_featured_directory_value';
  $handler->display->display_options['relationships']['field_featured_directory_value']['table'] = 'field_data_field_featured_directory';
  $handler->display->display_options['relationships']['field_featured_directory_value']['field'] = 'field_featured_directory_value';
  $handler->display->display_options['relationships']['field_featured_directory_value']['delta'] = '-1';
  /* Relationship: Entity Reference: Referenced Entity */
  $handler->display->display_options['relationships']['field_images_target_id']['id'] = 'field_images_target_id';
  $handler->display->display_options['relationships']['field_images_target_id']['table'] = 'field_data_field_images';
  $handler->display->display_options['relationships']['field_images_target_id']['field'] = 'field_images_target_id';
  $handler->display->display_options['relationships']['field_images_target_id']['relationship'] = 'field_featured_directory_value';
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Content: Caption */
  $handler->display->display_options['fields']['field_caption']['id'] = 'field_caption';
  $handler->display->display_options['fields']['field_caption']['table'] = 'field_data_field_caption';
  $handler->display->display_options['fields']['field_caption']['field'] = 'field_caption';
  $handler->display->display_options['fields']['field_caption']['relationship'] = 'field_images_target_id';
  $handler->display->display_options['fields']['field_caption']['label'] = '';
  $handler->display->display_options['fields']['field_caption']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_caption']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_caption']['hide_empty'] = TRUE;
  $handler->display->display_options['fields']['field_caption']['type'] = 'text_plain';
  /* Field: Field collection item: Image URL */
  $handler->display->display_options['fields']['field_image_url']['id'] = 'field_image_url';
  $handler->display->display_options['fields']['field_image_url']['table'] = 'field_data_field_image_url';
  $handler->display->display_options['fields']['field_image_url']['field'] = 'field_image_url';
  $handler->display->display_options['fields']['field_image_url']['relationship'] = 'field_featured_directory_value';
  $handler->display->display_options['fields']['field_image_url']['label'] = '';
  $handler->display->display_options['fields']['field_image_url']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_image_url']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_image_url']['click_sort_column'] = 'url';
  $handler->display->display_options['fields']['field_image_url']['type'] = 'link_plain';
  /* Field: Content: Image */
  $handler->display->display_options['fields']['field_image']['id'] = 'field_image';
  $handler->display->display_options['fields']['field_image']['table'] = 'field_data_field_image';
  $handler->display->display_options['fields']['field_image']['field'] = 'field_image';
  $handler->display->display_options['fields']['field_image']['relationship'] = 'field_images_target_id';
  $handler->display->display_options['fields']['field_image']['label'] = '';
  $handler->display->display_options['fields']['field_image']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['field_image']['alter']['text'] = '<a href="[field_image_url]" title="[field_caption]">[field_image]</a>';
  $handler->display->display_options['fields']['field_image']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_image']['hide_empty'] = TRUE;
  $handler->display->display_options['fields']['field_image']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_image']['settings'] = array(
    'image_style' => '',
    'image_link' => '',
  );
  /* Field: Field collection item: Headline Title */
  $handler->display->display_options['fields']['field_headline_title']['id'] = 'field_headline_title';
  $handler->display->display_options['fields']['field_headline_title']['table'] = 'field_data_field_headline_title';
  $handler->display->display_options['fields']['field_headline_title']['field'] = 'field_headline_title';
  $handler->display->display_options['fields']['field_headline_title']['relationship'] = 'field_featured_directory_value';
  $handler->display->display_options['fields']['field_headline_title']['label'] = '';
  $handler->display->display_options['fields']['field_headline_title']['element_label_colon'] = FALSE;
  /* Field: Field collection item: Directory links */
  $handler->display->display_options['fields']['field_fd_links']['id'] = 'field_fd_links';
  $handler->display->display_options['fields']['field_fd_links']['table'] = 'field_data_field_fd_links';
  $handler->display->display_options['fields']['field_fd_links']['field'] = 'field_fd_links';
  $handler->display->display_options['fields']['field_fd_links']['relationship'] = 'field_featured_directory_value';
  $handler->display->display_options['fields']['field_fd_links']['label'] = '';
  $handler->display->display_options['fields']['field_fd_links']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_fd_links']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['field_fd_links']['hide_empty'] = TRUE;
  $handler->display->display_options['fields']['field_fd_links']['click_sort_column'] = 'url';
  $handler->display->display_options['fields']['field_fd_links']['delta_offset'] = '0';
  $handler->display->display_options['fields']['field_fd_links']['multi_type'] = 'ul';
  $handler->display->display_options['fields']['field_fd_links']['field_api_classes'] = TRUE;
  /* Field: Field collection item: More Link */
  $handler->display->display_options['fields']['field_more_link']['id'] = 'field_more_link';
  $handler->display->display_options['fields']['field_more_link']['table'] = 'field_data_field_more_link';
  $handler->display->display_options['fields']['field_more_link']['field'] = 'field_more_link';
  $handler->display->display_options['fields']['field_more_link']['relationship'] = 'field_featured_directory_value';
  $handler->display->display_options['fields']['field_more_link']['label'] = '';
  $handler->display->display_options['fields']['field_more_link']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_more_link']['click_sort_column'] = 'url';
  $handler->display->display_options['defaults']['filter_groups'] = FALSE;
  $handler->display->display_options['defaults']['filters'] = FALSE;
  /* Filter criterion: Content: Published */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = 1;
  $handler->display->display_options['filters']['status']['group'] = 1;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
  /* Filter criterion: Content: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'featured_directory' => 'featured_directory',
  );
  $handler->display->display_options['block_description'] = 'TI AMG FW Recipe Finder';
  $export['ti_amg_fw_recipe_finder'] = $view;

  return $export;
}
