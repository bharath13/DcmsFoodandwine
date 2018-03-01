<?php
/**
 * @file
 * ti_amg_fw_video_views.views_default.inc
 */

/**
 * Implements hook_views_default_views().
 */
function ti_amg_fw_video_views_views_default_views() {
  $export = array();

  $view = new view();
  $view->name = 'ti_amg_fw_related_blocks';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'node';
  $view->human_name = 'TI AMG FW Related Blocks';
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
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['style_plugin'] = 'grid';
  $handler->display->display_options['style_options']['default_row_class'] = FALSE;
  $handler->display->display_options['style_options']['row_class_special'] = FALSE;
  $handler->display->display_options['style_options']['columns'] = '6';
  $handler->display->display_options['row_plugin'] = 'fields';
  /* Header: Global: Text area */
  $handler->display->display_options['header']['area']['id'] = 'area';
  $handler->display->display_options['header']['area']['table'] = 'views';
  $handler->display->display_options['header']['area']['field'] = 'area';
  $handler->display->display_options['header']['area']['content'] = '<div class="lnd-separator feature-separator"></div>
<h2>[field_headline_title]<h2>';
  $handler->display->display_options['header']['area']['format'] = 'wysiwyg';
  $handler->display->display_options['header']['area']['tokenize'] = TRUE;
  /* Relationship: Entity Reference: Referenced Entity */
  $handler->display->display_options['relationships']['field_image_ref_target_id']['id'] = 'field_image_ref_target_id';
  $handler->display->display_options['relationships']['field_image_ref_target_id']['table'] = 'field_data_field_image_ref';
  $handler->display->display_options['relationships']['field_image_ref_target_id']['field'] = 'field_image_ref_target_id';
  /* Relationship: Content: Items (field_related_blocks) */
  $handler->display->display_options['relationships']['field_related_blocks_value']['id'] = 'field_related_blocks_value';
  $handler->display->display_options['relationships']['field_related_blocks_value']['table'] = 'field_data_field_related_blocks';
  $handler->display->display_options['relationships']['field_related_blocks_value']['field'] = 'field_related_blocks_value';
  $handler->display->display_options['relationships']['field_related_blocks_value']['delta'] = '-1';
  /* Relationship: Entity Reference: Referenced Entity */
  $handler->display->display_options['relationships']['field_images_target_id_1']['id'] = 'field_images_target_id_1';
  $handler->display->display_options['relationships']['field_images_target_id_1']['table'] = 'field_data_field_images';
  $handler->display->display_options['relationships']['field_images_target_id_1']['field'] = 'field_images_target_id';
  $handler->display->display_options['relationships']['field_images_target_id_1']['relationship'] = 'field_related_blocks_value';
  /* Field: Field: Headline Title */
  $handler->display->display_options['fields']['field_headline_title']['id'] = 'field_headline_title';
  $handler->display->display_options['fields']['field_headline_title']['table'] = 'field_data_field_headline_title';
  $handler->display->display_options['fields']['field_headline_title']['field'] = 'field_headline_title';
  $handler->display->display_options['fields']['field_headline_title']['label'] = '';
  $handler->display->display_options['fields']['field_headline_title']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_headline_title']['element_type'] = '0';
  $handler->display->display_options['fields']['field_headline_title']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_headline_title']['element_wrapper_type'] = '0';
  $handler->display->display_options['fields']['field_headline_title']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['field_headline_title']['field_api_classes'] = TRUE;
  /* Field: Field: External Link */
  $handler->display->display_options['fields']['field_external_link_1']['id'] = 'field_external_link_1';
  $handler->display->display_options['fields']['field_external_link_1']['table'] = 'field_data_field_external_link';
  $handler->display->display_options['fields']['field_external_link_1']['field'] = 'field_external_link';
  $handler->display->display_options['fields']['field_external_link_1']['relationship'] = 'field_related_blocks_value';
  $handler->display->display_options['fields']['field_external_link_1']['label'] = '';
  $handler->display->display_options['fields']['field_external_link_1']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_external_link_1']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_external_link_1']['click_sort_column'] = 'url';
  $handler->display->display_options['fields']['field_external_link_1']['type'] = 'link_plain';
  /* Field: Content: Photo */
  $handler->display->display_options['fields']['field_image']['id'] = 'field_image';
  $handler->display->display_options['fields']['field_image']['table'] = 'field_data_field_image';
  $handler->display->display_options['fields']['field_image']['field'] = 'field_image';
  $handler->display->display_options['fields']['field_image']['relationship'] = 'field_images_target_id_1';
  $handler->display->display_options['fields']['field_image']['label'] = '';
  $handler->display->display_options['fields']['field_image']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['field_image']['alter']['text'] = '<div class=\'section\'>
<div class=\'frame one-column\'>  
<a href=\'[field_external_link_1] \'>[field_image]</a>
</div>
</div>';
  $handler->display->display_options['fields']['field_image']['element_type'] = '0';
  $handler->display->display_options['fields']['field_image']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_image']['element_wrapper_type'] = '0';
  $handler->display->display_options['fields']['field_image']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['field_image']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_image']['settings'] = array(
    'image_style' => '90x112',
    'image_link' => '',
  );
  $handler->display->display_options['fields']['field_image']['field_api_classes'] = TRUE;
  /* Field: Field: External Link */
  $handler->display->display_options['fields']['field_external_link']['id'] = 'field_external_link';
  $handler->display->display_options['fields']['field_external_link']['table'] = 'field_data_field_external_link';
  $handler->display->display_options['fields']['field_external_link']['field'] = 'field_external_link';
  $handler->display->display_options['fields']['field_external_link']['relationship'] = 'field_related_blocks_value';
  $handler->display->display_options['fields']['field_external_link']['label'] = '';
  $handler->display->display_options['fields']['field_external_link']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['field_external_link']['alter']['text'] = '<div class=\'section\'>
<div class=\'frame one-column\'> 
[field_external_link] 
</div>
</div>';
  $handler->display->display_options['fields']['field_external_link']['element_type'] = '0';
  $handler->display->display_options['fields']['field_external_link']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_external_link']['element_wrapper_type'] = '0';
  $handler->display->display_options['fields']['field_external_link']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['field_external_link']['click_sort_column'] = 'url';
  $handler->display->display_options['fields']['field_external_link']['field_api_classes'] = TRUE;
  /* Sort criterion: Node: Published at */
  $handler->display->display_options['sorts']['published_at']['id'] = 'published_at';
  $handler->display->display_options['sorts']['published_at']['table'] = 'publication_date';
  $handler->display->display_options['sorts']['published_at']['field'] = 'published_at';
  $handler->display->display_options['sorts']['published_at']['order'] = 'DESC';
  /* Contextual filter: Content: Nid */
  $handler->display->display_options['arguments']['nid']['id'] = 'nid';
  $handler->display->display_options['arguments']['nid']['table'] = 'node';
  $handler->display->display_options['arguments']['nid']['field'] = 'nid';
  $handler->display->display_options['arguments']['nid']['default_action'] = 'default';
  $handler->display->display_options['arguments']['nid']['default_argument_type'] = 'node';
  $handler->display->display_options['arguments']['nid']['summary']['number_of_records'] = '0';
  $handler->display->display_options['arguments']['nid']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['nid']['summary_options']['items_per_page'] = '25';
  /* Filter criterion: Content: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'video' => 'video',
  );

  /* Display: Block */
  $handler = $view->new_display('block', 'Block', 'block');
  $handler->display->display_options['block_caching'] = '4';
  $export['ti_amg_fw_related_blocks'] = $view;

  $view = new view();
  $view->name = 'ti_amg_fw_video_list';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'node';
  $view->human_name = 'TI AMG FW Video List';
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
  $handler->display->display_options['pager']['type'] = 'some';
  $handler->display->display_options['pager']['options']['items_per_page'] = '5';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['style_plugin'] = 'grid';
  $handler->display->display_options['style_options']['default_row_class'] = FALSE;
  $handler->display->display_options['style_options']['row_class_special'] = FALSE;
  $handler->display->display_options['style_options']['columns'] = '6';
  $handler->display->display_options['row_plugin'] = 'fields';
  /* Header: Global: Text area */
  $handler->display->display_options['header']['area']['id'] = 'area';
  $handler->display->display_options['header']['area']['table'] = 'views';
  $handler->display->display_options['header']['area']['field'] = 'area';
  /* Relationship: Entity Reference: Referenced Entity */
  $handler->display->display_options['relationships']['field_related_videos_target_id']['id'] = 'field_related_videos_target_id';
  $handler->display->display_options['relationships']['field_related_videos_target_id']['table'] = 'field_data_field_related_videos';
  $handler->display->display_options['relationships']['field_related_videos_target_id']['field'] = 'field_related_videos_target_id';
  /* Field: Content: Path */
  $handler->display->display_options['fields']['path']['id'] = 'path';
  $handler->display->display_options['fields']['path']['table'] = 'node';
  $handler->display->display_options['fields']['path']['field'] = 'path';
  $handler->display->display_options['fields']['path']['label'] = '';
  $handler->display->display_options['fields']['path']['exclude'] = TRUE;
  $handler->display->display_options['fields']['path']['element_label_colon'] = FALSE;
  /* Field: Content: Video Thumbnail */
  $handler->display->display_options['fields']['field_video_thumbnail']['id'] = 'field_video_thumbnail';
  $handler->display->display_options['fields']['field_video_thumbnail']['table'] = 'field_data_field_video_thumbnail';
  $handler->display->display_options['fields']['field_video_thumbnail']['field'] = 'field_video_thumbnail';
  $handler->display->display_options['fields']['field_video_thumbnail']['relationship'] = 'field_related_videos_target_id';
  $handler->display->display_options['fields']['field_video_thumbnail']['label'] = '';
  $handler->display->display_options['fields']['field_video_thumbnail']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_video_thumbnail']['alter']['text'] = '<a href=\'[title_1]\'> [field_video_thumbnail] </a>';
  $handler->display->display_options['fields']['field_video_thumbnail']['alter']['path'] = '[title_1]';
  $handler->display->display_options['fields']['field_video_thumbnail']['alter']['absolute'] = TRUE;
  $handler->display->display_options['fields']['field_video_thumbnail']['alter']['replace_spaces'] = TRUE;
  $handler->display->display_options['fields']['field_video_thumbnail']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_video_thumbnail']['element_wrapper_type'] = '0';
  $handler->display->display_options['fields']['field_video_thumbnail']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['field_video_thumbnail']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_video_thumbnail']['type'] = 'file_rendered';
  $handler->display->display_options['fields']['field_video_thumbnail']['settings'] = array(
    'file_view_mode' => 'media_original',
  );
  $handler->display->display_options['fields']['field_video_thumbnail']['field_api_classes'] = TRUE;
  /* Field: Video_thumbnails_url */
  $handler->display->display_options['fields']['title_1']['id'] = 'title_1';
  $handler->display->display_options['fields']['title_1']['table'] = 'node';
  $handler->display->display_options['fields']['title_1']['field'] = 'title';
  $handler->display->display_options['fields']['title_1']['relationship'] = 'field_related_videos_target_id';
  $handler->display->display_options['fields']['title_1']['ui_name'] = 'Video_thumbnails_url';
  $handler->display->display_options['fields']['title_1']['label'] = '';
  $handler->display->display_options['fields']['title_1']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['title_1']['alter']['text'] = '<div class="section">[field_video_thumbnail]</div>';
  $handler->display->display_options['fields']['title_1']['element_label_colon'] = FALSE;
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['relationship'] = 'field_related_videos_target_id';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['title']['alter']['text'] = '<<div class="section">[title]</div>';
  $handler->display->display_options['fields']['title']['alter']['path'] = '[path]';
  $handler->display->display_options['fields']['title']['alter']['absolute'] = TRUE;
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  $handler->display->display_options['fields']['title']['element_label_colon'] = FALSE;
  /* Field: Global: Custom text */
  $handler->display->display_options['fields']['nothing']['id'] = 'nothing';
  $handler->display->display_options['fields']['nothing']['table'] = 'views';
  $handler->display->display_options['fields']['nothing']['field'] = 'nothing';
  /* Sort criterion: Content: Post date */
  $handler->display->display_options['sorts']['created']['id'] = 'created';
  $handler->display->display_options['sorts']['created']['table'] = 'node';
  $handler->display->display_options['sorts']['created']['field'] = 'created';
  $handler->display->display_options['sorts']['created']['order'] = 'DESC';
  /* Contextual filter: Content: Nid */
  $handler->display->display_options['arguments']['nid']['id'] = 'nid';
  $handler->display->display_options['arguments']['nid']['table'] = 'node';
  $handler->display->display_options['arguments']['nid']['field'] = 'nid';
  $handler->display->display_options['arguments']['nid']['default_action'] = 'default';
  $handler->display->display_options['arguments']['nid']['default_argument_type'] = 'node';
  $handler->display->display_options['arguments']['nid']['summary']['number_of_records'] = '0';
  $handler->display->display_options['arguments']['nid']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['nid']['summary_options']['items_per_page'] = '25';
  /* Filter criterion: Content: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'video' => 'video',
  );

  /* Display: Block */
  $handler = $view->new_display('block', 'Block', 'block');
  $handler->display->display_options['defaults']['pager'] = FALSE;
  $handler->display->display_options['pager']['type'] = 'none';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['defaults']['header'] = FALSE;
  /* Header: Global: Text area */
  $handler->display->display_options['header']['area']['id'] = 'area';
  $handler->display->display_options['header']['area']['table'] = 'views';
  $handler->display->display_options['header']['area']['field'] = 'area';
  $handler->display->display_options['header']['area']['content'] = '<div class="section">
<h2>Related Videos</h2>
</div>';
  $handler->display->display_options['header']['area']['format'] = 'wysiwyg';
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Content: Path */
  $handler->display->display_options['fields']['path']['id'] = 'path';
  $handler->display->display_options['fields']['path']['table'] = 'node';
  $handler->display->display_options['fields']['path']['field'] = 'path';
  $handler->display->display_options['fields']['path']['label'] = '';
  $handler->display->display_options['fields']['path']['exclude'] = TRUE;
  $handler->display->display_options['fields']['path']['element_label_colon'] = FALSE;
  /* Field: Content: Video Thumbnail */
  $handler->display->display_options['fields']['field_video_thumbnail']['id'] = 'field_video_thumbnail';
  $handler->display->display_options['fields']['field_video_thumbnail']['table'] = 'field_data_field_video_thumbnail';
  $handler->display->display_options['fields']['field_video_thumbnail']['field'] = 'field_video_thumbnail';
  $handler->display->display_options['fields']['field_video_thumbnail']['relationship'] = 'field_related_videos_target_id';
  $handler->display->display_options['fields']['field_video_thumbnail']['label'] = '';
  $handler->display->display_options['fields']['field_video_thumbnail']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_video_thumbnail']['alter']['text'] = '<a href=\'[title_1]\'> [field_video_thumbnail] </a>';
  $handler->display->display_options['fields']['field_video_thumbnail']['alter']['path'] = '[title_1]';
  $handler->display->display_options['fields']['field_video_thumbnail']['alter']['absolute'] = TRUE;
  $handler->display->display_options['fields']['field_video_thumbnail']['alter']['replace_spaces'] = TRUE;
  $handler->display->display_options['fields']['field_video_thumbnail']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_video_thumbnail']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['field_video_thumbnail']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_video_thumbnail']['settings'] = array(
    'file_view_mode' => 'media_original',
  );
  /* Field: Content: Video Still */
  $handler->display->display_options['fields']['field_video_still']['id'] = 'field_video_still';
  $handler->display->display_options['fields']['field_video_still']['table'] = 'field_data_field_video_still';
  $handler->display->display_options['fields']['field_video_still']['field'] = 'field_video_still';
  $handler->display->display_options['fields']['field_video_still']['relationship'] = 'field_related_videos_target_id';
  $handler->display->display_options['fields']['field_video_still']['label'] = '';
  $handler->display->display_options['fields']['field_video_still']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_video_still']['element_type'] = '0';
  $handler->display->display_options['fields']['field_video_still']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_video_still']['element_wrapper_type'] = '0';
  $handler->display->display_options['fields']['field_video_still']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['field_video_still']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_video_still']['settings'] = array(
    'file_view_mode' => 'media_original',
  );
  /* Field: Video_thumbnails_url */
  $handler->display->display_options['fields']['title_1']['id'] = 'title_1';
  $handler->display->display_options['fields']['title_1']['table'] = 'node';
  $handler->display->display_options['fields']['title_1']['field'] = 'title';
  $handler->display->display_options['fields']['title_1']['relationship'] = 'field_related_videos_target_id';
  $handler->display->display_options['fields']['title_1']['ui_name'] = 'Video_thumbnails_url';
  $handler->display->display_options['fields']['title_1']['label'] = '';
  $handler->display->display_options['fields']['title_1']['exclude'] = TRUE;
  $handler->display->display_options['fields']['title_1']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['title_1']['alter']['text'] = '<span class="play-video"></span><div class=\'section\'>[field_video_still]</div>';
  $handler->display->display_options['fields']['title_1']['element_label_colon'] = FALSE;
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['relationship'] = 'field_related_videos_target_id';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['exclude'] = TRUE;
  $handler->display->display_options['fields']['title']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['title']['alter']['text'] = '<div class="section">[title]</div>';
  $handler->display->display_options['fields']['title']['alter']['path'] = '[path]';
  $handler->display->display_options['fields']['title']['alter']['absolute'] = TRUE;
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  $handler->display->display_options['fields']['title']['element_label_colon'] = FALSE;
  /* Field: Final Result */
  $handler->display->display_options['fields']['nothing']['id'] = 'nothing';
  $handler->display->display_options['fields']['nothing']['table'] = 'views';
  $handler->display->display_options['fields']['nothing']['field'] = 'nothing';
  $handler->display->display_options['fields']['nothing']['ui_name'] = 'Final Result';
  $handler->display->display_options['fields']['nothing']['label'] = '';
  $handler->display->display_options['fields']['nothing']['alter']['text'] = '<div class=\'section\'>
<div class=\'frame one-column\'>  
[title_1]
[title]
</div>
</div>
';
  $handler->display->display_options['fields']['nothing']['element_label_colon'] = FALSE;
  $handler->display->display_options['block_caching'] = '4';
  $export['ti_amg_fw_video_list'] = $view;

  $view = new view();
  $view->name = 'ti_amg_fw_video_related_articles';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'node';
  $view->human_name = 'TI AMG FW Video Related Articles';
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
  $handler->display->display_options['style_options']['columns'] = '2';
  $handler->display->display_options['style_options']['fill_single_line'] = FALSE;
  $handler->display->display_options['row_plugin'] = 'fields';
  /* Header: Global: Text area */
  $handler->display->display_options['header']['area']['id'] = 'area';
  $handler->display->display_options['header']['area']['table'] = 'views';
  $handler->display->display_options['header']['area']['field'] = 'area';
  $handler->display->display_options['header']['area']['content'] = '<div class="lnd-separator feature-separator"></div>
<div class="related_articles">
<h4>RELATED ARTICLES</h4>
</div>';
  $handler->display->display_options['header']['area']['format'] = 'wysiwyg';
  /* Footer: Global: Text area */
  $handler->display->display_options['footer']['area']['id'] = 'area';
  $handler->display->display_options['footer']['area']['table'] = 'views';
  $handler->display->display_options['footer']['area']['field'] = 'area';
  $handler->display->display_options['footer']['area']['content'] = '<div class="lnd-separator feature-separator"></div>';
  $handler->display->display_options['footer']['area']['format'] = 'wysiwyg';
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['exclude'] = TRUE;
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  $handler->display->display_options['fields']['title']['element_label_colon'] = FALSE;
  /* Field: Content: Related Links */
  $handler->display->display_options['fields']['field_related_links']['id'] = 'field_related_links';
  $handler->display->display_options['fields']['field_related_links']['table'] = 'field_data_field_related_links';
  $handler->display->display_options['fields']['field_related_links']['field'] = 'field_related_links';
  $handler->display->display_options['fields']['field_related_links']['label'] = '';
  $handler->display->display_options['fields']['field_related_links']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['field_related_links']['alter']['text'] = '<div class="rel-articles">
[field_related_links]
</div>';
  $handler->display->display_options['fields']['field_related_links']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_related_links']['element_wrapper_type'] = '0';
  $handler->display->display_options['fields']['field_related_links']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['field_related_links']['click_sort_column'] = 'url';
  $handler->display->display_options['fields']['field_related_links']['group_rows'] = FALSE;
  $handler->display->display_options['fields']['field_related_links']['delta_offset'] = '0';
  $handler->display->display_options['fields']['field_related_links']['multi_type'] = 'ol';
  $handler->display->display_options['fields']['field_related_links']['field_api_classes'] = TRUE;
  /* Sort criterion: Content: Related Links (field_related_links:title) */
  $handler->display->display_options['sorts']['field_related_links_title']['id'] = 'field_related_links_title';
  $handler->display->display_options['sorts']['field_related_links_title']['table'] = 'field_data_field_related_links';
  $handler->display->display_options['sorts']['field_related_links_title']['field'] = 'field_related_links_title';
  /* Contextual filter: Content: Nid */
  $handler->display->display_options['arguments']['nid']['id'] = 'nid';
  $handler->display->display_options['arguments']['nid']['table'] = 'node';
  $handler->display->display_options['arguments']['nid']['field'] = 'nid';
  $handler->display->display_options['arguments']['nid']['default_action'] = 'default';
  $handler->display->display_options['arguments']['nid']['default_argument_type'] = 'node';
  $handler->display->display_options['arguments']['nid']['summary']['number_of_records'] = '0';
  $handler->display->display_options['arguments']['nid']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['nid']['summary_options']['items_per_page'] = '25';
  /* Filter criterion: Content: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'video' => 'video',
  );

  /* Display: Block */
  $handler = $view->new_display('block', 'Block', 'block');
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'grid';
  $handler->display->display_options['style_options']['row_class_special'] = FALSE;
  $handler->display->display_options['style_options']['columns'] = '2';
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['row_plugin'] = 'fields';
  $handler->display->display_options['defaults']['row_options'] = FALSE;
  $handler->display->display_options['block_caching'] = '4';
  $export['ti_amg_fw_video_related_articles'] = $view;

  return $export;
}
