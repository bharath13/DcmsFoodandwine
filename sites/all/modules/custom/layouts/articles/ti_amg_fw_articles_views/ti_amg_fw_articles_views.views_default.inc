<?php
/**
 * @file
 * ti_amg_fw_articles_views.views_default.inc
 */

/**
 * Implements hook_views_default_views().
 */
function ti_amg_fw_articles_views_views_default_views() {
  $export = array();

  $view = new view();
  $view->name = 'ti_amg_fw_featured_recipes';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'node';
  $view->human_name = 'TI AMG FW FEATURED RECIPES';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['title'] = 'TI AMG FW FEATURED RECIPES';
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['access']['type'] = 'perm';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['pager']['type'] = 'none';
  $handler->display->display_options['style_plugin'] = 'default';
  $handler->display->display_options['row_plugin'] = 'fields';
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  /* Filter criterion: Content: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'article' => 'article',
  );

  /* Display: Block */
  $handler = $view->new_display('block', 'Block', 'block');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['defaults']['css_class'] = FALSE;
  $handler->display->display_options['css_class'] = 'featured-recipes';
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'default';
  $handler->display->display_options['style_options']['row_class'] = 'frame';
  $handler->display->display_options['style_options']['default_row_class'] = FALSE;
  $handler->display->display_options['style_options']['row_class_special'] = FALSE;
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['row_plugin'] = 'fields';
  $handler->display->display_options['row_options']['default_field_elements'] = FALSE;
  $handler->display->display_options['defaults']['row_options'] = FALSE;
  $handler->display->display_options['defaults']['header'] = FALSE;
  /* Header: Global: Text area */
  $handler->display->display_options['header']['area']['id'] = 'area';
  $handler->display->display_options['header']['area']['table'] = 'views';
  $handler->display->display_options['header']['area']['field'] = 'area';
  $handler->display->display_options['header']['area']['content'] = '<img alt="Featured Recipes" title="Featured Recipes" class="featured-title" src="/sites/all/themes/foodandwine/images/featured_recipes.png">';
  $handler->display->display_options['header']['area']['format'] = 'wysiwyg';
  $handler->display->display_options['defaults']['footer'] = FALSE;
  $handler->display->display_options['defaults']['empty'] = FALSE;
  $handler->display->display_options['defaults']['relationships'] = FALSE;
  /* Relationship: Entity Reference: Referenced Entity */
  $handler->display->display_options['relationships']['field_related_recipes_target_id']['id'] = 'field_related_recipes_target_id';
  $handler->display->display_options['relationships']['field_related_recipes_target_id']['table'] = 'field_data_field_related_recipes';
  $handler->display->display_options['relationships']['field_related_recipes_target_id']['field'] = 'field_related_recipes_target_id';
  /* Relationship: Entity Reference: Referenced Entity */
  $handler->display->display_options['relationships']['field_images_target_id']['id'] = 'field_images_target_id';
  $handler->display->display_options['relationships']['field_images_target_id']['table'] = 'field_data_field_images';
  $handler->display->display_options['relationships']['field_images_target_id']['field'] = 'field_images_target_id';
  $handler->display->display_options['relationships']['field_images_target_id']['relationship'] = 'field_related_recipes_target_id';
  /* Relationship: Entity Reference: Referenced Entity */
  $handler->display->display_options['relationships']['field_images_target_id_1']['id'] = 'field_images_target_id_1';
  $handler->display->display_options['relationships']['field_images_target_id_1']['table'] = 'field_data_field_images';
  $handler->display->display_options['relationships']['field_images_target_id_1']['field'] = 'field_images_target_id';
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Content: Nid */
  $handler->display->display_options['fields']['nid']['id'] = 'nid';
  $handler->display->display_options['fields']['nid']['table'] = 'node';
  $handler->display->display_options['fields']['nid']['field'] = 'nid';
  $handler->display->display_options['fields']['nid']['relationship'] = 'field_related_recipes_target_id';
  $handler->display->display_options['fields']['nid']['label'] = '';
  $handler->display->display_options['fields']['nid']['exclude'] = TRUE;
  $handler->display->display_options['fields']['nid']['element_label_colon'] = FALSE;
  /* Field: Content: Photo */
  $handler->display->display_options['fields']['field_image_1']['id'] = 'field_image_1';
  $handler->display->display_options['fields']['field_image_1']['table'] = 'field_data_field_image';
  $handler->display->display_options['fields']['field_image_1']['field'] = 'field_image';
  $handler->display->display_options['fields']['field_image_1']['relationship'] = 'field_images_target_id_1';
  $handler->display->display_options['fields']['field_image_1']['label'] = '';
  $handler->display->display_options['fields']['field_image_1']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_image_1']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_image_1']['element_wrapper_type'] = '0';
  $handler->display->display_options['fields']['field_image_1']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['field_image_1']['hide_alter_empty'] = FALSE;
  $handler->display->display_options['fields']['field_image_1']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_image_1']['settings'] = array(
    'image_style' => '200x250',
    'image_link' => '',
  );
  /* Field: Content: Caption */
  $handler->display->display_options['fields']['field_caption']['id'] = 'field_caption';
  $handler->display->display_options['fields']['field_caption']['table'] = 'field_data_field_caption';
  $handler->display->display_options['fields']['field_caption']['field'] = 'field_caption';
  $handler->display->display_options['fields']['field_caption']['relationship'] = 'field_images_target_id_1';
  $handler->display->display_options['fields']['field_caption']['label'] = '';
  $handler->display->display_options['fields']['field_caption']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_caption']['element_type'] = '0';
  $handler->display->display_options['fields']['field_caption']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_caption']['element_wrapper_type'] = '0';
  $handler->display->display_options['fields']['field_caption']['element_default_classes'] = FALSE;
  /* Field: Content: Credit */
  $handler->display->display_options['fields']['field_credit']['id'] = 'field_credit';
  $handler->display->display_options['fields']['field_credit']['table'] = 'field_data_field_credit';
  $handler->display->display_options['fields']['field_credit']['field'] = 'field_credit';
  $handler->display->display_options['fields']['field_credit']['relationship'] = 'field_images_target_id_1';
  $handler->display->display_options['fields']['field_credit']['label'] = '';
  $handler->display->display_options['fields']['field_credit']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_credit']['element_type'] = '0';
  $handler->display->display_options['fields']['field_credit']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_credit']['element_wrapper_type'] = '0';
  $handler->display->display_options['fields']['field_credit']['element_default_classes'] = FALSE;
  /* Field: Content: Alt Text */
  $handler->display->display_options['fields']['field_alt_text']['id'] = 'field_alt_text';
  $handler->display->display_options['fields']['field_alt_text']['table'] = 'field_data_field_alt_text';
  $handler->display->display_options['fields']['field_alt_text']['field'] = 'field_alt_text';
  $handler->display->display_options['fields']['field_alt_text']['relationship'] = 'field_images_target_id_1';
  $handler->display->display_options['fields']['field_alt_text']['label'] = '';
  $handler->display->display_options['fields']['field_alt_text']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_alt_text']['element_type'] = '0';
  $handler->display->display_options['fields']['field_alt_text']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_alt_text']['element_wrapper_type'] = '0';
  $handler->display->display_options['fields']['field_alt_text']['element_default_classes'] = FALSE;
  /* Field: Field: Image Caption */
  $handler->display->display_options['fields']['field_overwrite_image_caption']['id'] = 'field_overwrite_image_caption';
  $handler->display->display_options['fields']['field_overwrite_image_caption']['table'] = 'field_data_field_overwrite_image_caption';
  $handler->display->display_options['fields']['field_overwrite_image_caption']['field'] = 'field_overwrite_image_caption';
  $handler->display->display_options['fields']['field_overwrite_image_caption']['label'] = '';
  $handler->display->display_options['fields']['field_overwrite_image_caption']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_overwrite_image_caption']['element_type'] = '0';
  $handler->display->display_options['fields']['field_overwrite_image_caption']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_overwrite_image_caption']['element_wrapper_type'] = '0';
  $handler->display->display_options['fields']['field_overwrite_image_caption']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['field_overwrite_image_caption']['empty'] = '[field_caption]';
  $handler->display->display_options['fields']['field_overwrite_image_caption']['hide_empty'] = TRUE;
  /* Field: Field: Image Credit */
  $handler->display->display_options['fields']['field_overwrite_image_credit']['id'] = 'field_overwrite_image_credit';
  $handler->display->display_options['fields']['field_overwrite_image_credit']['table'] = 'field_data_field_overwrite_image_credit';
  $handler->display->display_options['fields']['field_overwrite_image_credit']['field'] = 'field_overwrite_image_credit';
  $handler->display->display_options['fields']['field_overwrite_image_credit']['label'] = '';
  $handler->display->display_options['fields']['field_overwrite_image_credit']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_overwrite_image_credit']['element_type'] = '0';
  $handler->display->display_options['fields']['field_overwrite_image_credit']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_overwrite_image_credit']['element_wrapper_type'] = '0';
  $handler->display->display_options['fields']['field_overwrite_image_credit']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['field_overwrite_image_credit']['empty'] = '[field_credit]';
  $handler->display->display_options['fields']['field_overwrite_image_credit']['hide_empty'] = TRUE;
  /* Field: Field: Image Alt Text */
  $handler->display->display_options['fields']['field_overwrite_image_alt_text']['id'] = 'field_overwrite_image_alt_text';
  $handler->display->display_options['fields']['field_overwrite_image_alt_text']['table'] = 'field_data_field_overwrite_image_alt_text';
  $handler->display->display_options['fields']['field_overwrite_image_alt_text']['field'] = 'field_overwrite_image_alt_text';
  $handler->display->display_options['fields']['field_overwrite_image_alt_text']['label'] = '';
  $handler->display->display_options['fields']['field_overwrite_image_alt_text']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_overwrite_image_alt_text']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['field_overwrite_image_alt_text']['alter']['text'] = '[field_overwrite_image_alt_text]';
  $handler->display->display_options['fields']['field_overwrite_image_alt_text']['element_type'] = '0';
  $handler->display->display_options['fields']['field_overwrite_image_alt_text']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_overwrite_image_alt_text']['element_wrapper_type'] = '0';
  $handler->display->display_options['fields']['field_overwrite_image_alt_text']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['field_overwrite_image_alt_text']['empty'] = '[field_alt_text]';
  $handler->display->display_options['fields']['field_overwrite_image_alt_text']['hide_empty'] = TRUE;
  /* Field: Content: Path */
  $handler->display->display_options['fields']['path']['id'] = 'path';
  $handler->display->display_options['fields']['path']['table'] = 'node';
  $handler->display->display_options['fields']['path']['field'] = 'path';
  $handler->display->display_options['fields']['path']['relationship'] = 'field_related_recipes_target_id';
  $handler->display->display_options['fields']['path']['label'] = '';
  $handler->display->display_options['fields']['path']['exclude'] = TRUE;
  $handler->display->display_options['fields']['path']['element_label_colon'] = FALSE;
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['relationship'] = 'field_related_recipes_target_id';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['exclude'] = TRUE;
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  $handler->display->display_options['fields']['title']['element_type'] = '0';
  $handler->display->display_options['fields']['title']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['title']['element_default_classes'] = FALSE;
  /* Field: Content: Photo */
  $handler->display->display_options['fields']['field_image']['id'] = 'field_image';
  $handler->display->display_options['fields']['field_image']['table'] = 'field_data_field_image';
  $handler->display->display_options['fields']['field_image']['field'] = 'field_image';
  $handler->display->display_options['fields']['field_image']['relationship'] = 'field_images_target_id';
  $handler->display->display_options['fields']['field_image']['label'] = '';
  $handler->display->display_options['fields']['field_image']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_image']['alter']['make_link'] = TRUE;
  $handler->display->display_options['fields']['field_image']['alter']['path'] = 'node/[nid]';
  $handler->display->display_options['fields']['field_image']['alter']['absolute'] = TRUE;
  $handler->display->display_options['fields']['field_image']['alter']['alt'] = '[title]';
  $handler->display->display_options['fields']['field_image']['element_type'] = '0';
  $handler->display->display_options['fields']['field_image']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_image']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['field_image']['empty'] = '<a href=\'[path]\'><img class=\'fr-default-img\' alt=\'FoodandWine Recipe\' src=\'/sites/default/files/recipe-placeholder.gif\' /></a>';
  $handler->display->display_options['fields']['field_image']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_image']['settings'] = array(
    'image_style' => '200x250',
    'image_link' => '',
  );
  /* Field: Global: Custom text */
  $handler->display->display_options['fields']['nothing']['id'] = 'nothing';
  $handler->display->display_options['fields']['nothing']['table'] = 'views';
  $handler->display->display_options['fields']['nothing']['field'] = 'nothing';
  $handler->display->display_options['fields']['nothing']['label'] = '';
  $handler->display->display_options['fields']['nothing']['alter']['text'] = '<div class="picture">[field_image]</div>
<div class="title">[title]</div>';
  $handler->display->display_options['fields']['nothing']['element_type'] = '0';
  $handler->display->display_options['fields']['nothing']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['nothing']['element_default_classes'] = FALSE;
  $handler->display->display_options['defaults']['arguments'] = FALSE;
  /* Contextual filter: Content: Nid */
  $handler->display->display_options['arguments']['nid']['id'] = 'nid';
  $handler->display->display_options['arguments']['nid']['table'] = 'node';
  $handler->display->display_options['arguments']['nid']['field'] = 'nid';
  $handler->display->display_options['arguments']['nid']['default_action'] = 'default';
  $handler->display->display_options['arguments']['nid']['default_argument_type'] = 'node';
  $handler->display->display_options['arguments']['nid']['summary']['number_of_records'] = '0';
  $handler->display->display_options['arguments']['nid']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['nid']['summary_options']['items_per_page'] = '25';
  $handler->display->display_options['block_description'] = 'TI AMG FW FEATURED RECIPES';
  $export['ti_amg_fw_featured_recipes'] = $view;

  return $export;
}
