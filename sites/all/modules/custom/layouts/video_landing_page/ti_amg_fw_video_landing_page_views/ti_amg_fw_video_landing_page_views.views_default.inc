<?php
/**
 * @file
 * ti_amg_fw_video_landing_page_views.views_default.inc
 */

/**
 * Implements hook_views_default_views().
 */
function ti_amg_fw_video_landing_page_views_views_default_views() {
  $export = array();

  $view = new view();
  $view->name = 'ti_amg_fw_tags_related_videos';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'node';
  $view->human_name = 'TI AMG FW Tags Related Videos';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['title'] = 'TI AMG FW Tags Related Videos';
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['access']['type'] = 'perm';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['pager']['type'] = 'none';
  $handler->display->display_options['style_plugin'] = 'grid';
  $handler->display->display_options['style_options']['default_row_class'] = FALSE;
  $handler->display->display_options['style_options']['row_class_special'] = FALSE;
  $handler->display->display_options['style_options']['columns'] = '5';
  $handler->display->display_options['row_plugin'] = 'fields';
  /* Header: Global: Text area */
  $handler->display->display_options['header']['area']['id'] = 'area';
  $handler->display->display_options['header']['area']['table'] = 'views';
  $handler->display->display_options['header']['area']['field'] = 'area';
  /* Relationship: Content: Video Category (field_vlp_category) */
  $handler->display->display_options['relationships']['field_vlp_category_value']['id'] = 'field_vlp_category_value';
  $handler->display->display_options['relationships']['field_vlp_category_value']['table'] = 'field_data_field_vlp_category';
  $handler->display->display_options['relationships']['field_vlp_category_value']['field'] = 'field_vlp_category_value';
  $handler->display->display_options['relationships']['field_vlp_category_value']['delta'] = '-1';
  /* Field: Content: Path */
  $handler->display->display_options['fields']['path']['id'] = 'path';
  $handler->display->display_options['fields']['path']['table'] = 'node';
  $handler->display->display_options['fields']['path']['field'] = 'path';
  $handler->display->display_options['fields']['path']['label'] = '';
  $handler->display->display_options['fields']['path']['exclude'] = TRUE;
  $handler->display->display_options['fields']['path']['element_label_colon'] = FALSE;
  /* Field: Content: Video Tags */
  $handler->display->display_options['fields']['field_video_tags']['id'] = 'field_video_tags';
  $handler->display->display_options['fields']['field_video_tags']['table'] = 'field_data_field_video_tags';
  $handler->display->display_options['fields']['field_video_tags']['field'] = 'field_video_tags';
  $handler->display->display_options['fields']['field_video_tags']['label'] = '';
  $handler->display->display_options['fields']['field_video_tags']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_video_tags']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['field_video_tags']['alter']['text'] = '[field_video_tags-tid]';
  $handler->display->display_options['fields']['field_video_tags']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_video_tags']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['field_video_tags']['type'] = 'taxonomy_term_reference_plain';
  $handler->display->display_options['fields']['field_video_tags']['group_rows'] = FALSE;
  $handler->display->display_options['fields']['field_video_tags']['delta_offset'] = '0';
  /* Field: Content: Video Thumbnail */
  $handler->display->display_options['fields']['field_video_thumbnail']['id'] = 'field_video_thumbnail';
  $handler->display->display_options['fields']['field_video_thumbnail']['table'] = 'field_data_field_video_thumbnail';
  $handler->display->display_options['fields']['field_video_thumbnail']['field'] = 'field_video_thumbnail';
  $handler->display->display_options['fields']['field_video_thumbnail']['label'] = '';
  $handler->display->display_options['fields']['field_video_thumbnail']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['field_video_thumbnail']['alter']['text'] = '<div class="video-thumbnail-gallery">

<span class="play-video"></span>

<a href="[path]">

[field_video_thumbnail]

</a>

</div>';
  $handler->display->display_options['fields']['field_video_thumbnail']['alter']['path'] = '[path]';
  $handler->display->display_options['fields']['field_video_thumbnail']['alter']['absolute'] = TRUE;
  $handler->display->display_options['fields']['field_video_thumbnail']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_video_thumbnail']['element_wrapper_type'] = '0';
  $handler->display->display_options['fields']['field_video_thumbnail']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['field_video_thumbnail']['hide_alter_empty'] = FALSE;
  $handler->display->display_options['fields']['field_video_thumbnail']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_video_thumbnail']['type'] = 'file_url_plain';
  $handler->display->display_options['fields']['field_video_thumbnail']['settings'] = array(
    'file_view_mode' => 'media_preview',
  );
  $handler->display->display_options['fields']['field_video_thumbnail']['field_api_classes'] = TRUE;
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['title']['alter']['text'] = '<div class="desc">

<a href="[path]">[title]</a>

</div>';
  $handler->display->display_options['fields']['title']['alter']['path'] = '[path]';
  $handler->display->display_options['fields']['title']['alter']['absolute'] = TRUE;
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  $handler->display->display_options['fields']['title']['element_label_colon'] = FALSE;
  /* Field: Field collection item: Video Category Headline */
  $handler->display->display_options['fields']['field_vlp_category_headline']['id'] = 'field_vlp_category_headline';
  $handler->display->display_options['fields']['field_vlp_category_headline']['table'] = 'field_data_field_vlp_category_headline';
  $handler->display->display_options['fields']['field_vlp_category_headline']['field'] = 'field_vlp_category_headline';
  $handler->display->display_options['fields']['field_vlp_category_headline']['relationship'] = 'field_vlp_category_value';
  $handler->display->display_options['fields']['field_vlp_category_headline']['label'] = '';
  $handler->display->display_options['fields']['field_vlp_category_headline']['element_type'] = '0';
  $handler->display->display_options['fields']['field_vlp_category_headline']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_vlp_category_headline']['element_wrapper_type'] = '0';
  $handler->display->display_options['fields']['field_vlp_category_headline']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['field_vlp_category_headline']['field_api_classes'] = TRUE;
  /* Sort criterion: Content: Post date */
  $handler->display->display_options['sorts']['created']['id'] = 'created';
  $handler->display->display_options['sorts']['created']['table'] = 'node';
  $handler->display->display_options['sorts']['created']['field'] = 'created';
  $handler->display->display_options['sorts']['created']['order'] = 'DESC';
  /* Contextual filter: Content: Video Tags (field_video_tags) */
  $handler->display->display_options['arguments']['field_video_tags_tid']['id'] = 'field_video_tags_tid';
  $handler->display->display_options['arguments']['field_video_tags_tid']['table'] = 'field_data_field_video_tags';
  $handler->display->display_options['arguments']['field_video_tags_tid']['field'] = 'field_video_tags_tid';
  $handler->display->display_options['arguments']['field_video_tags_tid']['default_action'] = 'default';
  $handler->display->display_options['arguments']['field_video_tags_tid']['default_argument_type'] = 'taxonomy_tid';
  $handler->display->display_options['arguments']['field_video_tags_tid']['summary']['number_of_records'] = '0';
  $handler->display->display_options['arguments']['field_video_tags_tid']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['field_video_tags_tid']['summary_options']['items_per_page'] = '25';
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
    'video' => 'video',
  );

  /* Display: Block */
  $handler = $view->new_display('block', 'Block', 'block');
  $handler->display->display_options['defaults']['header'] = FALSE;
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Content: Path */
  $handler->display->display_options['fields']['path']['id'] = 'path';
  $handler->display->display_options['fields']['path']['table'] = 'node';
  $handler->display->display_options['fields']['path']['field'] = 'path';
  $handler->display->display_options['fields']['path']['label'] = '';
  $handler->display->display_options['fields']['path']['exclude'] = TRUE;
  $handler->display->display_options['fields']['path']['element_label_colon'] = FALSE;
  /* Field: Content: Video Tags */
  $handler->display->display_options['fields']['field_video_tags']['id'] = 'field_video_tags';
  $handler->display->display_options['fields']['field_video_tags']['table'] = 'field_data_field_video_tags';
  $handler->display->display_options['fields']['field_video_tags']['field'] = 'field_video_tags';
  $handler->display->display_options['fields']['field_video_tags']['label'] = '';
  $handler->display->display_options['fields']['field_video_tags']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_video_tags']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['field_video_tags']['alter']['text'] = '[field_video_tags-tid]';
  $handler->display->display_options['fields']['field_video_tags']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_video_tags']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['field_video_tags']['type'] = 'taxonomy_term_reference_plain';
  $handler->display->display_options['fields']['field_video_tags']['group_rows'] = FALSE;
  $handler->display->display_options['fields']['field_video_tags']['delta_offset'] = '0';
  /* Field: Content: Video Thumbnail */
  $handler->display->display_options['fields']['field_video_thumbnail']['id'] = 'field_video_thumbnail';
  $handler->display->display_options['fields']['field_video_thumbnail']['table'] = 'field_data_field_video_thumbnail';
  $handler->display->display_options['fields']['field_video_thumbnail']['field'] = 'field_video_thumbnail';
  $handler->display->display_options['fields']['field_video_thumbnail']['label'] = '';
  $handler->display->display_options['fields']['field_video_thumbnail']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_video_thumbnail']['element_type'] = '0';
  $handler->display->display_options['fields']['field_video_thumbnail']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_video_thumbnail']['element_wrapper_type'] = '0';
  $handler->display->display_options['fields']['field_video_thumbnail']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['field_video_thumbnail']['click_sort_column'] = 'fid';
  /* Field: Content: Video Still */
  $handler->display->display_options['fields']['field_video_still']['id'] = 'field_video_still';
  $handler->display->display_options['fields']['field_video_still']['table'] = 'field_data_field_video_still';
  $handler->display->display_options['fields']['field_video_still']['field'] = 'field_video_still';
  $handler->display->display_options['fields']['field_video_still']['label'] = '';
  $handler->display->display_options['fields']['field_video_still']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['field_video_still']['alter']['text'] = '<div class="video-thumbnail-gallery">

<a href="[path]">

<span class="play-video"></span>

[field_video_still] 

</a>

</div>';
  $handler->display->display_options['fields']['field_video_still']['element_type'] = '0';
  $handler->display->display_options['fields']['field_video_still']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_video_still']['element_wrapper_type'] = '0';
  $handler->display->display_options['fields']['field_video_still']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['field_video_still']['click_sort_column'] = 'fid';
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['title']['alter']['text'] = '<div class="desc">

<a href="[path]" title=\'[title]\'>[title]</a>

</div>';
  $handler->display->display_options['fields']['title']['alter']['path'] = '[path]';
  $handler->display->display_options['fields']['title']['alter']['absolute'] = TRUE;
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  $handler->display->display_options['fields']['title']['element_label_colon'] = FALSE;
  /* Field: Field collection item: Video Category Headline */
  $handler->display->display_options['fields']['field_vlp_category_headline']['id'] = 'field_vlp_category_headline';
  $handler->display->display_options['fields']['field_vlp_category_headline']['table'] = 'field_data_field_vlp_category_headline';
  $handler->display->display_options['fields']['field_vlp_category_headline']['field'] = 'field_vlp_category_headline';
  $handler->display->display_options['fields']['field_vlp_category_headline']['relationship'] = 'field_vlp_category_value';
  $handler->display->display_options['fields']['field_vlp_category_headline']['label'] = '';
  $handler->display->display_options['fields']['field_vlp_category_headline']['element_type'] = '0';
  $handler->display->display_options['fields']['field_vlp_category_headline']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_vlp_category_headline']['element_wrapper_type'] = '0';
  $handler->display->display_options['fields']['field_vlp_category_headline']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['field_vlp_category_headline']['field_api_classes'] = TRUE;
  $handler->display->display_options['block_caching'] = '4';
  $export['ti_amg_fw_tags_related_videos'] = $view;

  $view = new view();
  $view->name = 'ti_amg_fw_video_landing_page';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'node';
  $view->human_name = 'TI AMG FW Video Landing Page';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['access']['type'] = 'perm';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['pager']['type'] = 'none';
  $handler->display->display_options['style_plugin'] = 'default';
  $handler->display->display_options['row_plugin'] = 'fields';
  /* Header: Global: Text area */
  $handler->display->display_options['header']['area']['id'] = 'area';
  $handler->display->display_options['header']['area']['table'] = 'views';
  $handler->display->display_options['header']['area']['field'] = 'area';
  $handler->display->display_options['header']['area']['content'] = '[nothing]';
  $handler->display->display_options['header']['area']['format'] = 'wysiwyg';
  $handler->display->display_options['header']['area']['tokenize'] = TRUE;
  /* Relationship: Entity Reference: Referenced Entity */
  $handler->display->display_options['relationships']['field_related_videos_target_id']['id'] = 'field_related_videos_target_id';
  $handler->display->display_options['relationships']['field_related_videos_target_id']['table'] = 'field_data_field_related_videos';
  $handler->display->display_options['relationships']['field_related_videos_target_id']['field'] = 'field_related_videos_target_id';
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['exclude'] = TRUE;
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  $handler->display->display_options['fields']['title']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['title']['link_to_node'] = FALSE;
  /* Field: Content: Deck */
  $handler->display->display_options['fields']['field_deck']['id'] = 'field_deck';
  $handler->display->display_options['fields']['field_deck']['table'] = 'field_data_field_deck';
  $handler->display->display_options['fields']['field_deck']['field'] = 'field_deck';
  $handler->display->display_options['fields']['field_deck']['label'] = '';
  $handler->display->display_options['fields']['field_deck']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_deck']['element_type'] = '0';
  $handler->display->display_options['fields']['field_deck']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_deck']['element_wrapper_type'] = '0';
  $handler->display->display_options['fields']['field_deck']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['field_deck']['field_api_classes'] = TRUE;
  /* Field: Field: Headline Title */
  $handler->display->display_options['fields']['field_headline_title']['id'] = 'field_headline_title';
  $handler->display->display_options['fields']['field_headline_title']['table'] = 'field_data_field_headline_title';
  $handler->display->display_options['fields']['field_headline_title']['field'] = 'field_headline_title';
  $handler->display->display_options['fields']['field_headline_title']['relationship'] = 'field_featured_video_value';
  $handler->display->display_options['fields']['field_headline_title']['label'] = '';
  $handler->display->display_options['fields']['field_headline_title']['element_type'] = '0';
  $handler->display->display_options['fields']['field_headline_title']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_headline_title']['element_wrapper_type'] = '0';
  $handler->display->display_options['fields']['field_headline_title']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['field_headline_title']['field_api_classes'] = TRUE;
  /* Field: Field: Related Videos */
  $handler->display->display_options['fields']['field_related_videos']['id'] = 'field_related_videos';
  $handler->display->display_options['fields']['field_related_videos']['table'] = 'field_data_field_related_videos';
  $handler->display->display_options['fields']['field_related_videos']['field'] = 'field_related_videos';
  $handler->display->display_options['fields']['field_related_videos']['relationship'] = 'field_featured_video_value';
  $handler->display->display_options['fields']['field_related_videos']['label'] = '';
  $handler->display->display_options['fields']['field_related_videos']['element_type'] = '0';
  $handler->display->display_options['fields']['field_related_videos']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_related_videos']['element_wrapper_type'] = '0';
  $handler->display->display_options['fields']['field_related_videos']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['field_related_videos']['type'] = 'entityreference_entity_view';
  $handler->display->display_options['fields']['field_related_videos']['settings'] = array(
    'view_mode' => 'default',
    'links' => 1,
  );
  $handler->display->display_options['fields']['field_related_videos']['delta_offset'] = '0';
  $handler->display->display_options['fields']['field_related_videos']['field_api_classes'] = TRUE;
  /* Sort criterion: Content: Post date */
  $handler->display->display_options['sorts']['created']['id'] = 'created';
  $handler->display->display_options['sorts']['created']['table'] = 'node';
  $handler->display->display_options['sorts']['created']['field'] = 'created';
  $handler->display->display_options['sorts']['created']['order'] = 'DESC';
  /* Contextual filter: Content: Nid */
  $handler->display->display_options['arguments']['nid']['id'] = 'nid';
  $handler->display->display_options['arguments']['nid']['table'] = 'node';
  $handler->display->display_options['arguments']['nid']['field'] = 'nid';
  $handler->display->display_options['arguments']['nid']['default_argument_type'] = 'fixed';
  $handler->display->display_options['arguments']['nid']['summary']['format'] = 'default_summary';
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
    'video_landing_page' => 'video_landing_page',
  );

  /* Display: Block */
  $handler = $view->new_display('block', 'Block', 'block');
  $handler->display->display_options['defaults']['relationships'] = FALSE;
  /* Relationship: Content: Featured Video (field_featured_video) */
  $handler->display->display_options['relationships']['field_featured_video_value']['id'] = 'field_featured_video_value';
  $handler->display->display_options['relationships']['field_featured_video_value']['table'] = 'field_data_field_featured_video';
  $handler->display->display_options['relationships']['field_featured_video_value']['field'] = 'field_featured_video_value';
  $handler->display->display_options['relationships']['field_featured_video_value']['delta'] = '-1';
  /* Relationship: Entity Reference: Referenced Entity */
  $handler->display->display_options['relationships']['field_related_videos_target_id']['id'] = 'field_related_videos_target_id';
  $handler->display->display_options['relationships']['field_related_videos_target_id']['table'] = 'field_data_field_related_videos';
  $handler->display->display_options['relationships']['field_related_videos_target_id']['field'] = 'field_related_videos_target_id';
  $handler->display->display_options['relationships']['field_related_videos_target_id']['relationship'] = 'field_featured_video_value';
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['exclude'] = TRUE;
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  $handler->display->display_options['fields']['title']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['title']['link_to_node'] = FALSE;
  /* Field: Content: Deck */
  $handler->display->display_options['fields']['field_deck']['id'] = 'field_deck';
  $handler->display->display_options['fields']['field_deck']['table'] = 'field_data_field_deck';
  $handler->display->display_options['fields']['field_deck']['field'] = 'field_deck';
  $handler->display->display_options['fields']['field_deck']['label'] = '';
  $handler->display->display_options['fields']['field_deck']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_deck']['element_type'] = '0';
  $handler->display->display_options['fields']['field_deck']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_deck']['element_wrapper_type'] = '0';
  $handler->display->display_options['fields']['field_deck']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['field_deck']['field_api_classes'] = TRUE;
  /* Field: Title_Deck */
  $handler->display->display_options['fields']['nothing']['id'] = 'nothing';
  $handler->display->display_options['fields']['nothing']['table'] = 'views';
  $handler->display->display_options['fields']['nothing']['field'] = 'nothing';
  $handler->display->display_options['fields']['nothing']['ui_name'] = 'Title_Deck';
  $handler->display->display_options['fields']['nothing']['label'] = '';
  $handler->display->display_options['fields']['nothing']['exclude'] = TRUE;
  $handler->display->display_options['fields']['nothing']['alter']['text'] = '<div id="travel-hero">
<div id="travel-hero-copy">
<h1>
[title]
</h1>
<hr>
<p>
[field_deck] 
</p>
<hr>
</div>
</div>';
  $handler->display->display_options['fields']['nothing']['element_label_colon'] = FALSE;
  /* Field: Field: Headline Title */
  $handler->display->display_options['fields']['field_headline_title']['id'] = 'field_headline_title';
  $handler->display->display_options['fields']['field_headline_title']['table'] = 'field_data_field_headline_title';
  $handler->display->display_options['fields']['field_headline_title']['field'] = 'field_headline_title';
  $handler->display->display_options['fields']['field_headline_title']['relationship'] = 'field_featured_video_value';
  $handler->display->display_options['fields']['field_headline_title']['label'] = '';
  $handler->display->display_options['fields']['field_headline_title']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['field_headline_title']['alter']['text'] = '<div class="title-bar">
[field_headline_title]
</div>';
  $handler->display->display_options['fields']['field_headline_title']['element_type'] = '0';
  $handler->display->display_options['fields']['field_headline_title']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_headline_title']['element_wrapper_type'] = '0';
  $handler->display->display_options['fields']['field_headline_title']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['field_headline_title']['field_api_classes'] = TRUE;
  /* Field: Field: Related Videos */
  $handler->display->display_options['fields']['field_related_videos']['id'] = 'field_related_videos';
  $handler->display->display_options['fields']['field_related_videos']['table'] = 'field_data_field_related_videos';
  $handler->display->display_options['fields']['field_related_videos']['field'] = 'field_related_videos';
  $handler->display->display_options['fields']['field_related_videos']['relationship'] = 'field_featured_video_value';
  $handler->display->display_options['fields']['field_related_videos']['label'] = '';
  $handler->display->display_options['fields']['field_related_videos']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_related_videos']['element_type'] = '0';
  $handler->display->display_options['fields']['field_related_videos']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_related_videos']['element_wrapper_type'] = '0';
  $handler->display->display_options['fields']['field_related_videos']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['field_related_videos']['type'] = 'entityreference_entity_view';
  $handler->display->display_options['fields']['field_related_videos']['settings'] = array(
    'view_mode' => 'default',
    'links' => 1,
  );
  $handler->display->display_options['fields']['field_related_videos']['delta_offset'] = '0';
  $handler->display->display_options['fields']['field_related_videos']['field_api_classes'] = TRUE;
  /* Field: Content: Video ID */
  $handler->display->display_options['fields']['field_video_id']['id'] = 'field_video_id';
  $handler->display->display_options['fields']['field_video_id']['table'] = 'field_data_field_video_id';
  $handler->display->display_options['fields']['field_video_id']['field'] = 'field_video_id';
  $handler->display->display_options['fields']['field_video_id']['relationship'] = 'field_related_videos_target_id';
  $handler->display->display_options['fields']['field_video_id']['label'] = '';
  $handler->display->display_options['fields']['field_video_id']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_video_id']['element_wrapper_type'] = '0';
  $handler->display->display_options['fields']['field_video_id']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['field_video_id']['field_api_classes'] = TRUE;
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title_1']['id'] = 'title_1';
  $handler->display->display_options['fields']['title_1']['table'] = 'node';
  $handler->display->display_options['fields']['title_1']['field'] = 'title';
  $handler->display->display_options['fields']['title_1']['relationship'] = 'field_related_videos_target_id';
  $handler->display->display_options['fields']['title_1']['label'] = '';
  $handler->display->display_options['fields']['title_1']['element_label_colon'] = FALSE;
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
  $handler->display->display_options['block_caching'] = '4';
  $export['ti_amg_fw_video_landing_page'] = $view;

  $view = new view();
  $view->name = 'ti_amg_fw_video_tags_listing';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'node';
  $view->human_name = 'TI AMG FW Video Tags Listing';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['access']['type'] = 'perm';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['pager']['type'] = 'none';
  $handler->display->display_options['style_plugin'] = 'grid';
  $handler->display->display_options['style_options']['grouping'] = array(
    0 => array(
      'field' => 'field_vlp_category_headline',
      'rendered' => 1,
      'rendered_strip' => 0,
    ),
  );
  $handler->display->display_options['style_options']['default_row_class'] = FALSE;
  $handler->display->display_options['style_options']['row_class_special'] = FALSE;
  $handler->display->display_options['style_options']['columns'] = '2';
  $handler->display->display_options['style_options']['fill_single_line'] = FALSE;
  $handler->display->display_options['row_plugin'] = 'fields';
  /* Footer: Global: Text area */
  $handler->display->display_options['footer']['area']['id'] = 'area';
  $handler->display->display_options['footer']['area']['table'] = 'views';
  $handler->display->display_options['footer']['area']['field'] = 'area';
  $handler->display->display_options['footer']['area']['content'] = '<div class="feature-separator player-separator"></div>';
  $handler->display->display_options['footer']['area']['format'] = 'wysiwyg';
  /* Relationship: Content: Video Category (field_vlp_category) */
  $handler->display->display_options['relationships']['field_vlp_category_value']['id'] = 'field_vlp_category_value';
  $handler->display->display_options['relationships']['field_vlp_category_value']['table'] = 'field_data_field_vlp_category';
  $handler->display->display_options['relationships']['field_vlp_category_value']['field'] = 'field_vlp_category_value';
  $handler->display->display_options['relationships']['field_vlp_category_value']['delta'] = '-1';
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['exclude'] = TRUE;
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  $handler->display->display_options['fields']['title']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['title']['link_to_node'] = FALSE;
  /* Field: Field collection item: Video Category Headline */
  $handler->display->display_options['fields']['field_vlp_category_headline']['id'] = 'field_vlp_category_headline';
  $handler->display->display_options['fields']['field_vlp_category_headline']['table'] = 'field_data_field_vlp_category_headline';
  $handler->display->display_options['fields']['field_vlp_category_headline']['field'] = 'field_vlp_category_headline';
  $handler->display->display_options['fields']['field_vlp_category_headline']['relationship'] = 'field_vlp_category_value';
  $handler->display->display_options['fields']['field_vlp_category_headline']['label'] = '';
  $handler->display->display_options['fields']['field_vlp_category_headline']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_vlp_category_headline']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['field_vlp_category_headline']['alter']['text'] = '<div class="title-bar">
[field_vlp_category_headline]
</div>';
  $handler->display->display_options['fields']['field_vlp_category_headline']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_vlp_category_headline']['element_wrapper_type'] = '0';
  $handler->display->display_options['fields']['field_vlp_category_headline']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['field_vlp_category_headline']['field_api_classes'] = TRUE;
  /* Field: Field collection item: Video Category Tags */
  $handler->display->display_options['fields']['field_vlp_category_tags']['id'] = 'field_vlp_category_tags';
  $handler->display->display_options['fields']['field_vlp_category_tags']['table'] = 'field_data_field_vlp_category_tags';
  $handler->display->display_options['fields']['field_vlp_category_tags']['field'] = 'field_vlp_category_tags';
  $handler->display->display_options['fields']['field_vlp_category_tags']['relationship'] = 'field_vlp_category_value';
  $handler->display->display_options['fields']['field_vlp_category_tags']['label'] = '';
  $handler->display->display_options['fields']['field_vlp_category_tags']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['field_vlp_category_tags']['alter']['text'] = '<div class="rel-articles video_tags_clear_fix">
[field_vlp_category_tags]
<div>';
  $handler->display->display_options['fields']['field_vlp_category_tags']['alter']['path'] = '[field_vlp_category_tags]';
  $handler->display->display_options['fields']['field_vlp_category_tags']['alter']['replace_spaces'] = TRUE;
  $handler->display->display_options['fields']['field_vlp_category_tags']['alter']['link_class'] = '[field_vlp_category_tags]';
  $handler->display->display_options['fields']['field_vlp_category_tags']['element_type'] = '0';
  $handler->display->display_options['fields']['field_vlp_category_tags']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_vlp_category_tags']['element_wrapper_type'] = '0';
  $handler->display->display_options['fields']['field_vlp_category_tags']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['field_vlp_category_tags']['type'] = 'taxonomy_term_reference_plain';
  $handler->display->display_options['fields']['field_vlp_category_tags']['group_rows'] = FALSE;
  $handler->display->display_options['fields']['field_vlp_category_tags']['delta_offset'] = '0';
  $handler->display->display_options['fields']['field_vlp_category_tags']['field_api_classes'] = TRUE;
  /* Contextual filter: Content: Nid */
  $handler->display->display_options['arguments']['nid']['id'] = 'nid';
  $handler->display->display_options['arguments']['nid']['table'] = 'node';
  $handler->display->display_options['arguments']['nid']['field'] = 'nid';
  $handler->display->display_options['arguments']['nid']['default_action'] = 'default';
  $handler->display->display_options['arguments']['nid']['default_argument_type'] = 'node';
  $handler->display->display_options['arguments']['nid']['summary']['number_of_records'] = '0';
  $handler->display->display_options['arguments']['nid']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['nid']['summary_options']['items_per_page'] = '25';
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
    'video_landing_page' => 'video_landing_page',
  );

  /* Display: Block */
  $handler = $view->new_display('block', 'Block', 'block');
  $export['ti_amg_fw_video_tags_listing'] = $view;

  return $export;
}
