<?php
/**
 * @file
 * ti_amg_fw_slideshow_views.views_default.inc
 */

/**
 * Implements hook_views_default_views().
 */
function ti_amg_fw_slideshow_views_views_default_views() {
  $export = array();

  $view = new view();
  $view->name = 'standard_slideshow';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'node';
  $view->human_name = 'Standard Slideshow';
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
  $handler->display->display_options['pager']['options']['items_per_page'] = '1';
  $handler->display->display_options['style_plugin'] = 'default';
  $handler->display->display_options['row_plugin'] = 'fields';
  /* Header: Global: Text area */
  $handler->display->display_options['header']['area']['id'] = 'area';
  $handler->display->display_options['header']['area']['table'] = 'views';
  $handler->display->display_options['header']['area']['field'] = 'area';
  $handler->display->display_options['header']['area']['format'] = 'wysiwyg';
  /* Relationship: Content: Slides (field_slide_info) */
  $handler->display->display_options['relationships']['field_slide_info_value']['id'] = 'field_slide_info_value';
  $handler->display->display_options['relationships']['field_slide_info_value']['table'] = 'field_data_field_slide_info';
  $handler->display->display_options['relationships']['field_slide_info_value']['field'] = 'field_slide_info_value';
  $handler->display->display_options['relationships']['field_slide_info_value']['delta'] = '-1';
  /* Relationship: Entity Reference: Referenced Entity */
  $handler->display->display_options['relationships']['field_slide_image_target_id']['id'] = 'field_slide_image_target_id';
  $handler->display->display_options['relationships']['field_slide_image_target_id']['table'] = 'field_data_field_slide_image';
  $handler->display->display_options['relationships']['field_slide_image_target_id']['field'] = 'field_slide_image_target_id';
  $handler->display->display_options['relationships']['field_slide_image_target_id']['relationship'] = 'field_slide_info_value';
  /* Field: Global: Custom text */
  $handler->display->display_options['fields']['nothing']['id'] = 'nothing';
  $handler->display->display_options['fields']['nothing']['table'] = 'views';
  $handler->display->display_options['fields']['nothing']['field'] = 'nothing';
  $handler->display->display_options['fields']['nothing']['label'] = '';
  $handler->display->display_options['fields']['nothing']['element_label_colon'] = FALSE;
  /* Field: Field collection item: Slide Title */
  $handler->display->display_options['fields']['field_slide_title_2']['id'] = 'field_slide_title_2';
  $handler->display->display_options['fields']['field_slide_title_2']['table'] = 'field_data_field_slide_title';
  $handler->display->display_options['fields']['field_slide_title_2']['field'] = 'field_slide_title';
  $handler->display->display_options['fields']['field_slide_title_2']['relationship'] = 'field_slide_info_value';
  $handler->display->display_options['fields']['field_slide_title_2']['label'] = '';
  $handler->display->display_options['fields']['field_slide_title_2']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_slide_title_2']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_slide_title_2']['element_default_classes'] = FALSE;
  /* Field: Field collection item: Slide Link URL */
  $handler->display->display_options['fields']['field_slide_link_url']['id'] = 'field_slide_link_url';
  $handler->display->display_options['fields']['field_slide_link_url']['table'] = 'field_data_field_slide_link_url';
  $handler->display->display_options['fields']['field_slide_link_url']['field'] = 'field_slide_link_url';
  $handler->display->display_options['fields']['field_slide_link_url']['relationship'] = 'field_slide_info_value';
  $handler->display->display_options['fields']['field_slide_link_url']['label'] = '';
  $handler->display->display_options['fields']['field_slide_link_url']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_slide_link_url']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_slide_link_url']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['field_slide_link_url']['click_sort_column'] = 'url';
  $handler->display->display_options['fields']['field_slide_link_url']['type'] = 'link_plain';
  /* Field: Content: Photo */
  $handler->display->display_options['fields']['field_image']['id'] = 'field_image';
  $handler->display->display_options['fields']['field_image']['table'] = 'field_data_field_image';
  $handler->display->display_options['fields']['field_image']['field'] = 'field_image';
  $handler->display->display_options['fields']['field_image']['relationship'] = 'field_slide_image_target_id';
  $handler->display->display_options['fields']['field_image']['label'] = '';
  $handler->display->display_options['fields']['field_image']['alter']['make_link'] = TRUE;
  $handler->display->display_options['fields']['field_image']['alter']['path'] = '[field_slide_link_url]';
  $handler->display->display_options['fields']['field_image']['alter']['external'] = TRUE;
  $handler->display->display_options['fields']['field_image']['alter']['alt'] = '[field_slide_title_2]';
  $handler->display->display_options['fields']['field_image']['element_type'] = '0';
  $handler->display->display_options['fields']['field_image']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_image']['element_wrapper_type'] = '0';
  $handler->display->display_options['fields']['field_image']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['field_image']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_image']['settings'] = array(
    'image_style' => '',
    'image_link' => '',
  );
  $handler->display->display_options['fields']['field_image']['field_api_classes'] = TRUE;
  /* Field: Global: Custom text */
  $handler->display->display_options['fields']['nothing_1']['id'] = 'nothing_1';
  $handler->display->display_options['fields']['nothing_1']['table'] = 'views';
  $handler->display->display_options['fields']['nothing_1']['field'] = 'nothing';
  $handler->display->display_options['fields']['nothing_1']['label'] = '';
  $handler->display->display_options['fields']['nothing_1']['element_label_colon'] = FALSE;
  /* Field: Field collection item: Slide Title */
  $handler->display->display_options['fields']['field_slide_title']['id'] = 'field_slide_title';
  $handler->display->display_options['fields']['field_slide_title']['table'] = 'field_data_field_slide_title';
  $handler->display->display_options['fields']['field_slide_title']['field'] = 'field_slide_title';
  $handler->display->display_options['fields']['field_slide_title']['relationship'] = 'field_slide_info_value';
  $handler->display->display_options['fields']['field_slide_title']['label'] = '';
  $handler->display->display_options['fields']['field_slide_title']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_slide_title']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['field_slide_title']['alter']['text'] = '<a href ="[field_slide_link_url]" title="[field_slide_title_2]">[field_slide_title_2]</a>';
  $handler->display->display_options['fields']['field_slide_title']['element_label_colon'] = FALSE;
  /* Field: Field collection item: Slide Deck */
  $handler->display->display_options['fields']['field_slide_deck']['id'] = 'field_slide_deck';
  $handler->display->display_options['fields']['field_slide_deck']['table'] = 'field_data_field_slide_deck';
  $handler->display->display_options['fields']['field_slide_deck']['field'] = 'field_slide_deck';
  $handler->display->display_options['fields']['field_slide_deck']['relationship'] = 'field_slide_info_value';
  $handler->display->display_options['fields']['field_slide_deck']['label'] = '';
  $handler->display->display_options['fields']['field_slide_deck']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_slide_deck']['element_type'] = '0';
  $handler->display->display_options['fields']['field_slide_deck']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_slide_deck']['element_wrapper_type'] = '0';
  $handler->display->display_options['fields']['field_slide_deck']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['field_slide_deck']['field_api_classes'] = TRUE;
  /* Field: Field collection item: Slide Title */
  $handler->display->display_options['fields']['field_slide_title_1']['id'] = 'field_slide_title_1';
  $handler->display->display_options['fields']['field_slide_title_1']['table'] = 'field_data_field_slide_title';
  $handler->display->display_options['fields']['field_slide_title_1']['field'] = 'field_slide_title';
  $handler->display->display_options['fields']['field_slide_title_1']['relationship'] = 'field_slide_info_value';
  $handler->display->display_options['fields']['field_slide_title_1']['label'] = '';
  $handler->display->display_options['fields']['field_slide_title_1']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_slide_title_1']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['field_slide_title_1']['alter']['text'] = 'go to [field_slide_title] ';
  $handler->display->display_options['fields']['field_slide_title_1']['alter']['path'] = '[field_slide_link_url]';
  $handler->display->display_options['fields']['field_slide_title_1']['alter']['external'] = TRUE;
  $handler->display->display_options['fields']['field_slide_title_1']['alter']['alt'] = '[field_slide_title_2]';
  $handler->display->display_options['fields']['field_slide_title_1']['element_label_colon'] = FALSE;
  /* Field: Content: Credit */
  $handler->display->display_options['fields']['field_credit']['id'] = 'field_credit';
  $handler->display->display_options['fields']['field_credit']['table'] = 'field_data_field_credit';
  $handler->display->display_options['fields']['field_credit']['field'] = 'field_credit';
  $handler->display->display_options['fields']['field_credit']['relationship'] = 'field_slide_image_target_id';
  $handler->display->display_options['fields']['field_credit']['label'] = '';
  $handler->display->display_options['fields']['field_credit']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_credit']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_credit']['type'] = 'text_plain';
  /* Field: Field: Image Credit */
  $handler->display->display_options['fields']['field_overwrite_image_credit']['id'] = 'field_overwrite_image_credit';
  $handler->display->display_options['fields']['field_overwrite_image_credit']['table'] = 'field_data_field_overwrite_image_credit';
  $handler->display->display_options['fields']['field_overwrite_image_credit']['field'] = 'field_overwrite_image_credit';
  $handler->display->display_options['fields']['field_overwrite_image_credit']['relationship'] = 'field_slide_info_value';
  $handler->display->display_options['fields']['field_overwrite_image_credit']['label'] = '';
  $handler->display->display_options['fields']['field_overwrite_image_credit']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_overwrite_image_credit']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['field_overwrite_image_credit']['alter']['text'] = '<div class="credit">[field_overwrite_image_credit]</div>';
  $handler->display->display_options['fields']['field_overwrite_image_credit']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_overwrite_image_credit']['empty'] = '<div class="credit">[field_credit]</div>';
  $handler->display->display_options['fields']['field_overwrite_image_credit']['type'] = 'text_plain';
  /* Field: Content: Nid */
  $handler->display->display_options['fields']['nid']['id'] = 'nid';
  $handler->display->display_options['fields']['nid']['table'] = 'node';
  $handler->display->display_options['fields']['nid']['field'] = 'nid';
  $handler->display->display_options['fields']['nid']['label'] = '';
  $handler->display->display_options['fields']['nid']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['nid']['alter']['text'] = '<div id="slide-dek">
<h2>
[field_slide_title]
</h2>
[field_slide_deck]
<div class="recipe-link">
[field_slide_title_1]
</div>
[field_overwrite_image_credit] 
</div>';
  $handler->display->display_options['fields']['nid']['element_label_colon'] = FALSE;
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
  /* Contextual filter: Content: Slides (field_slide_info:delta) */
  $handler->display->display_options['arguments']['delta']['id'] = 'delta';
  $handler->display->display_options['arguments']['delta']['table'] = 'field_data_field_slide_info';
  $handler->display->display_options['arguments']['delta']['field'] = 'delta';
  $handler->display->display_options['arguments']['delta']['default_action'] = 'default';
  $handler->display->display_options['arguments']['delta']['default_argument_type'] = 'fixed';
  $handler->display->display_options['arguments']['delta']['default_argument_options']['argument'] = '0';
  $handler->display->display_options['arguments']['delta']['summary']['number_of_records'] = '0';
  $handler->display->display_options['arguments']['delta']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['delta']['summary_options']['items_per_page'] = '25';
  /* Contextual filter: Global: Null */
  $handler->display->display_options['arguments']['null']['id'] = 'null';
  $handler->display->display_options['arguments']['null']['table'] = 'views';
  $handler->display->display_options['arguments']['null']['field'] = 'null';
  $handler->display->display_options['arguments']['null']['default_action'] = 'default';
  $handler->display->display_options['arguments']['null']['default_argument_type'] = 'fixed';
  $handler->display->display_options['arguments']['null']['default_argument_options']['argument'] = '0';
  $handler->display->display_options['arguments']['null']['summary']['number_of_records'] = '0';
  $handler->display->display_options['arguments']['null']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['null']['summary_options']['items_per_page'] = '25';
  /* Filter criterion: Content: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'gallery' => 'gallery',
  );
  /* Filter criterion: Content: Layout (field_gallery_layout) */
  $handler->display->display_options['filters']['field_gallery_layout_value']['id'] = 'field_gallery_layout_value';
  $handler->display->display_options['filters']['field_gallery_layout_value']['table'] = 'field_data_field_gallery_layout';
  $handler->display->display_options['filters']['field_gallery_layout_value']['field'] = 'field_gallery_layout_value';
  $handler->display->display_options['filters']['field_gallery_layout_value']['value'] = array(
    'STD' => 'STD',
  );

  /* Display: Block */
  $handler = $view->new_display('block', 'Block', 'block');
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Global: Custom text */
  $handler->display->display_options['fields']['nothing']['id'] = 'nothing';
  $handler->display->display_options['fields']['nothing']['table'] = 'views';
  $handler->display->display_options['fields']['nothing']['field'] = 'nothing';
  $handler->display->display_options['fields']['nothing']['label'] = '';
  $handler->display->display_options['fields']['nothing']['element_label_colon'] = FALSE;
  /* Field: Field collection item: Slide Title */
  $handler->display->display_options['fields']['field_slide_title_2']['id'] = 'field_slide_title_2';
  $handler->display->display_options['fields']['field_slide_title_2']['table'] = 'field_data_field_slide_title';
  $handler->display->display_options['fields']['field_slide_title_2']['field'] = 'field_slide_title';
  $handler->display->display_options['fields']['field_slide_title_2']['relationship'] = 'field_slide_info_value';
  $handler->display->display_options['fields']['field_slide_title_2']['label'] = '';
  $handler->display->display_options['fields']['field_slide_title_2']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_slide_title_2']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_slide_title_2']['element_default_classes'] = FALSE;
  /* Field: Field collection item: Slide Link URL */
  $handler->display->display_options['fields']['field_slide_link_url']['id'] = 'field_slide_link_url';
  $handler->display->display_options['fields']['field_slide_link_url']['table'] = 'field_data_field_slide_link_url';
  $handler->display->display_options['fields']['field_slide_link_url']['field'] = 'field_slide_link_url';
  $handler->display->display_options['fields']['field_slide_link_url']['relationship'] = 'field_slide_info_value';
  $handler->display->display_options['fields']['field_slide_link_url']['label'] = '';
  $handler->display->display_options['fields']['field_slide_link_url']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_slide_link_url']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_slide_link_url']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['field_slide_link_url']['click_sort_column'] = 'url';
  $handler->display->display_options['fields']['field_slide_link_url']['type'] = 'link_plain';
  /* Field: Field: Image Alt Text */
  $handler->display->display_options['fields']['field_overwrite_image_alt_text']['id'] = 'field_overwrite_image_alt_text';
  $handler->display->display_options['fields']['field_overwrite_image_alt_text']['table'] = 'field_data_field_overwrite_image_alt_text';
  $handler->display->display_options['fields']['field_overwrite_image_alt_text']['field'] = 'field_overwrite_image_alt_text';
  $handler->display->display_options['fields']['field_overwrite_image_alt_text']['relationship'] = 'field_slide_info_value';
  $handler->display->display_options['fields']['field_overwrite_image_alt_text']['label'] = '';
  $handler->display->display_options['fields']['field_overwrite_image_alt_text']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_overwrite_image_alt_text']['element_type'] = '0';
  $handler->display->display_options['fields']['field_overwrite_image_alt_text']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_overwrite_image_alt_text']['element_wrapper_type'] = '0';
  $handler->display->display_options['fields']['field_overwrite_image_alt_text']['element_default_classes'] = FALSE;
  /* Field: Content: Photo */
  $handler->display->display_options['fields']['field_image']['id'] = 'field_image';
  $handler->display->display_options['fields']['field_image']['table'] = 'field_data_field_image';
  $handler->display->display_options['fields']['field_image']['field'] = 'field_image';
  $handler->display->display_options['fields']['field_image']['relationship'] = 'field_slide_image_target_id';
  $handler->display->display_options['fields']['field_image']['label'] = '';
  $handler->display->display_options['fields']['field_image']['alter']['make_link'] = TRUE;
  $handler->display->display_options['fields']['field_image']['alter']['path'] = '[field_slide_link_url]';
  $handler->display->display_options['fields']['field_image']['alter']['external'] = TRUE;
  $handler->display->display_options['fields']['field_image']['alter']['alt'] = '[field_slide_title_2]';
  $handler->display->display_options['fields']['field_image']['element_type'] = 'div';
  $handler->display->display_options['fields']['field_image']['element_class'] = 'sd-image field-name-field-image';
  $handler->display->display_options['fields']['field_image']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_image']['element_wrapper_type'] = '0';
  $handler->display->display_options['fields']['field_image']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['field_image']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_image']['settings'] = array(
    'image_style' => '',
    'image_link' => '',
  );
  /* Field: Global: Custom text */
  $handler->display->display_options['fields']['nothing_1']['id'] = 'nothing_1';
  $handler->display->display_options['fields']['nothing_1']['table'] = 'views';
  $handler->display->display_options['fields']['nothing_1']['field'] = 'nothing';
  $handler->display->display_options['fields']['nothing_1']['label'] = '';
  $handler->display->display_options['fields']['nothing_1']['element_label_colon'] = FALSE;
  /* Field: Field collection item: Slide Title */
  $handler->display->display_options['fields']['field_slide_title']['id'] = 'field_slide_title';
  $handler->display->display_options['fields']['field_slide_title']['table'] = 'field_data_field_slide_title';
  $handler->display->display_options['fields']['field_slide_title']['field'] = 'field_slide_title';
  $handler->display->display_options['fields']['field_slide_title']['relationship'] = 'field_slide_info_value';
  $handler->display->display_options['fields']['field_slide_title']['label'] = '';
  $handler->display->display_options['fields']['field_slide_title']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_slide_title']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['field_slide_title']['alter']['text'] = '<a href ="[field_slide_link_url]" title="[field_slide_title_2]">[field_slide_title_2]</a>';
  $handler->display->display_options['fields']['field_slide_title']['element_label_colon'] = FALSE;
  /* Field: Field collection item: Slide Deck */
  $handler->display->display_options['fields']['field_slide_deck']['id'] = 'field_slide_deck';
  $handler->display->display_options['fields']['field_slide_deck']['table'] = 'field_data_field_slide_deck';
  $handler->display->display_options['fields']['field_slide_deck']['field'] = 'field_slide_deck';
  $handler->display->display_options['fields']['field_slide_deck']['relationship'] = 'field_slide_info_value';
  $handler->display->display_options['fields']['field_slide_deck']['label'] = '';
  $handler->display->display_options['fields']['field_slide_deck']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_slide_deck']['element_type'] = '0';
  $handler->display->display_options['fields']['field_slide_deck']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_slide_deck']['element_wrapper_type'] = '0';
  $handler->display->display_options['fields']['field_slide_deck']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['field_slide_deck']['field_api_classes'] = TRUE;
  /* Field: Field collection item: Slide Title */
  $handler->display->display_options['fields']['field_slide_title_1']['id'] = 'field_slide_title_1';
  $handler->display->display_options['fields']['field_slide_title_1']['table'] = 'field_data_field_slide_title';
  $handler->display->display_options['fields']['field_slide_title_1']['field'] = 'field_slide_title';
  $handler->display->display_options['fields']['field_slide_title_1']['relationship'] = 'field_slide_info_value';
  $handler->display->display_options['fields']['field_slide_title_1']['label'] = '';
  $handler->display->display_options['fields']['field_slide_title_1']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_slide_title_1']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['field_slide_title_1']['alter']['text'] = 'go to [field_slide_title] ';
  $handler->display->display_options['fields']['field_slide_title_1']['alter']['path'] = '[field_slide_link_url]';
  $handler->display->display_options['fields']['field_slide_title_1']['alter']['external'] = TRUE;
  $handler->display->display_options['fields']['field_slide_title_1']['alter']['alt'] = '[field_slide_title_2]';
  $handler->display->display_options['fields']['field_slide_title_1']['element_label_colon'] = FALSE;
  /* Field: Content: Credit */
  $handler->display->display_options['fields']['field_credit']['id'] = 'field_credit';
  $handler->display->display_options['fields']['field_credit']['table'] = 'field_data_field_credit';
  $handler->display->display_options['fields']['field_credit']['field'] = 'field_credit';
  $handler->display->display_options['fields']['field_credit']['relationship'] = 'field_slide_image_target_id';
  $handler->display->display_options['fields']['field_credit']['label'] = '';
  $handler->display->display_options['fields']['field_credit']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_credit']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_credit']['type'] = 'text_plain';
  /* Field: Field: Image Credit */
  $handler->display->display_options['fields']['field_overwrite_image_credit']['id'] = 'field_overwrite_image_credit';
  $handler->display->display_options['fields']['field_overwrite_image_credit']['table'] = 'field_data_field_overwrite_image_credit';
  $handler->display->display_options['fields']['field_overwrite_image_credit']['field'] = 'field_overwrite_image_credit';
  $handler->display->display_options['fields']['field_overwrite_image_credit']['relationship'] = 'field_slide_info_value';
  $handler->display->display_options['fields']['field_overwrite_image_credit']['label'] = '';
  $handler->display->display_options['fields']['field_overwrite_image_credit']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_overwrite_image_credit']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['field_overwrite_image_credit']['alter']['text'] = '<div class="credit">[field_overwrite_image_credit]</div>';
  $handler->display->display_options['fields']['field_overwrite_image_credit']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_overwrite_image_credit']['empty'] = '<div class="credit">[field_credit]</div>';
  /* Field: Content: Nid */
  $handler->display->display_options['fields']['nid']['id'] = 'nid';
  $handler->display->display_options['fields']['nid']['table'] = 'node';
  $handler->display->display_options['fields']['nid']['field'] = 'nid';
  $handler->display->display_options['fields']['nid']['label'] = '';
  $handler->display->display_options['fields']['nid']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['nid']['alter']['text'] = '<div id="slide-dek">
<h2>
[field_slide_title]
</h2>
[field_slide_deck]
<div class="recipe-link">
[field_slide_title_1]
</div>
[field_overwrite_image_credit] 
</div>';
  $handler->display->display_options['fields']['nid']['element_label_colon'] = FALSE;
  $handler->display->display_options['block_caching'] = '4';
  $export['standard_slideshow'] = $view;

  return $export;
}
