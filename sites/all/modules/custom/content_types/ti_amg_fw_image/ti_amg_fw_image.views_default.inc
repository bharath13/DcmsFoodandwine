<?php
/**
 * @file
 * ti_amg_fw_image.views_default.inc
 */

/**
 * Implements hook_views_default_views().
 */
function ti_amg_fw_image_views_default_views() {
  $export = array();

  $view = new view();
  $view->name = 'ti_amg_fw_image_slideshow';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'node';
  $view->human_name = 'Image Slideshow';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['title'] = '<none>';
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['access']['type'] = 'perm';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['pager']['type'] = 'some';
  $handler->display->display_options['pager']['options']['items_per_page'] = '3';
  $handler->display->display_options['pager']['options']['offset'] = '1';
  $handler->display->display_options['style_plugin'] = 'default';
  $handler->display->display_options['row_plugin'] = 'fields';
  /* Relationship: Entity Reference: Referenced Entity */
  $handler->display->display_options['relationships']['field_images_target_id']['id'] = 'field_images_target_id';
  $handler->display->display_options['relationships']['field_images_target_id']['table'] = 'field_data_field_images';
  $handler->display->display_options['relationships']['field_images_target_id']['field'] = 'field_images_target_id';
  $handler->display->display_options['relationships']['field_images_target_id']['required'] = TRUE;
  /* Field: Content: Nid */
  $handler->display->display_options['fields']['nid']['id'] = 'nid';
  $handler->display->display_options['fields']['nid']['table'] = 'node';
  $handler->display->display_options['fields']['nid']['field'] = 'nid';
  $handler->display->display_options['fields']['nid']['label'] = '';
  $handler->display->display_options['fields']['nid']['exclude'] = TRUE;
  $handler->display->display_options['fields']['nid']['element_label_colon'] = FALSE;
  /* Field: Content: Nid */
  $handler->display->display_options['fields']['nid_1']['id'] = 'nid_1';
  $handler->display->display_options['fields']['nid_1']['table'] = 'node';
  $handler->display->display_options['fields']['nid_1']['field'] = 'nid';
  $handler->display->display_options['fields']['nid_1']['label'] = '';
  $handler->display->display_options['fields']['nid_1']['exclude'] = TRUE;
  $handler->display->display_options['fields']['nid_1']['element_label_colon'] = FALSE;
  /* Field: Broken/missing handler */
  $handler->display->display_options['fields']['delta']['id'] = 'delta';
  $handler->display->display_options['fields']['delta']['table'] = 'field_data_field_images';
  $handler->display->display_options['fields']['delta']['field'] = 'delta';
  $handler->display->display_options['fields']['delta']['label'] = '';
  $handler->display->display_options['fields']['delta']['exclude'] = TRUE;
  $handler->display->display_options['fields']['delta']['element_label_colon'] = FALSE;
  /* Field: Broken/missing handler */
  $handler->display->display_options['fields']['field_image_150x150']['id'] = 'field_image_150x150';
  $handler->display->display_options['fields']['field_image_150x150']['table'] = 'field_data_field_image_150x150';
  $handler->display->display_options['fields']['field_image_150x150']['field'] = 'field_image_150x150';
  $handler->display->display_options['fields']['field_image_150x150']['relationship'] = 'field_images_target_id';
  $handler->display->display_options['fields']['field_image_150x150']['label'] = '';
  $handler->display->display_options['fields']['field_image_150x150']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_image_150x150']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['field_image_150x150']['alter']['text'] = '[field_image_150x150]
<span class="enlarge">Click to Enlarge</span>';
  $handler->display->display_options['fields']['field_image_150x150']['element_label_colon'] = FALSE;
  /* Field: Broken/missing handler */
  $handler->display->display_options['fields']['field_image_500xvariable']['id'] = 'field_image_500xvariable';
  $handler->display->display_options['fields']['field_image_500xvariable']['table'] = 'field_data_field_image_500xvariable';
  $handler->display->display_options['fields']['field_image_500xvariable']['field'] = 'field_image_500xvariable';
  $handler->display->display_options['fields']['field_image_500xvariable']['relationship'] = 'field_images_target_id';
  $handler->display->display_options['fields']['field_image_500xvariable']['label'] = '';
  $handler->display->display_options['fields']['field_image_500xvariable']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_image_500xvariable']['element_label_colon'] = FALSE;
  /* Field: Colorbox: Colorbox trigger */
  $handler->display->display_options['fields']['colorbox']['id'] = 'colorbox';
  $handler->display->display_options['fields']['colorbox']['table'] = 'colorbox';
  $handler->display->display_options['fields']['colorbox']['field'] = 'colorbox';
  $handler->display->display_options['fields']['colorbox']['label'] = '';
  $handler->display->display_options['fields']['colorbox']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['colorbox']['trigger_field'] = 'field_image_150x150';
  $handler->display->display_options['fields']['colorbox']['popup'] = '[field_image_500xvariable]';
  $handler->display->display_options['fields']['colorbox']['gid'] = 1;
  $handler->display->display_options['fields']['colorbox']['width'] = '500px';
  $handler->display->display_options['fields']['colorbox']['height'] = '500px';
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
  /* Filter criterion: Content: Published */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = 1;
  $handler->display->display_options['filters']['status']['group'] = 1;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;

  /* Display: Test Page */
  $handler = $view->new_display('page', 'Test Page', 'page_1');
  $handler->display->display_options['path'] = 'image-test/%';

  /* Display: Page 1 Images Block */
  $handler = $view->new_display('block', 'Page 1 Images Block', 'block');
  $handler->display->display_options['defaults']['pager'] = FALSE;
  $handler->display->display_options['pager']['type'] = 'some';
  $handler->display->display_options['pager']['options']['items_per_page'] = '1';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Content: Nid */
  $handler->display->display_options['fields']['nid']['id'] = 'nid';
  $handler->display->display_options['fields']['nid']['table'] = 'node';
  $handler->display->display_options['fields']['nid']['field'] = 'nid';
  $handler->display->display_options['fields']['nid']['label'] = '';
  $handler->display->display_options['fields']['nid']['exclude'] = TRUE;
  $handler->display->display_options['fields']['nid']['element_label_colon'] = FALSE;
  /* Field: Content: Nid */
  $handler->display->display_options['fields']['nid_1']['id'] = 'nid_1';
  $handler->display->display_options['fields']['nid_1']['table'] = 'node';
  $handler->display->display_options['fields']['nid_1']['field'] = 'nid';
  $handler->display->display_options['fields']['nid_1']['relationship'] = 'field_images_target_id';
  $handler->display->display_options['fields']['nid_1']['label'] = '';
  $handler->display->display_options['fields']['nid_1']['exclude'] = TRUE;
  $handler->display->display_options['fields']['nid_1']['element_label_colon'] = FALSE;
  /* Field: Broken/missing handler */
  $handler->display->display_options['fields']['delta']['id'] = 'delta';
  $handler->display->display_options['fields']['delta']['table'] = 'field_data_field_images';
  $handler->display->display_options['fields']['delta']['field'] = 'delta';
  $handler->display->display_options['fields']['delta']['label'] = '';
  $handler->display->display_options['fields']['delta']['exclude'] = TRUE;
  $handler->display->display_options['fields']['delta']['element_label_colon'] = FALSE;
  /* Field: Broken/missing handler */
  $handler->display->display_options['fields']['field_image_300x300']['id'] = 'field_image_300x300';
  $handler->display->display_options['fields']['field_image_300x300']['table'] = 'field_data_field_image_300x300';
  $handler->display->display_options['fields']['field_image_300x300']['field'] = 'field_image_300x300';
  $handler->display->display_options['fields']['field_image_300x300']['relationship'] = 'field_images_target_id';
  $handler->display->display_options['fields']['field_image_300x300']['label'] = '';
  $handler->display->display_options['fields']['field_image_300x300']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_image_300x300']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['field_image_300x300']['alter']['text'] = '[field_image_300x300]
<span class="enlarge">Click to Enlarge</span>';
  $handler->display->display_options['fields']['field_image_300x300']['alter']['path'] = '[field_image_620x350]';
  $handler->display->display_options['fields']['field_image_300x300']['alter']['link_class'] = 'colorbox-load';
  $handler->display->display_options['fields']['field_image_300x300']['alter']['target'] = '_blank';
  $handler->display->display_options['fields']['field_image_300x300']['element_label_colon'] = FALSE;
  /* Field: Broken/missing handler */
  $handler->display->display_options['fields']['field_image_500xvariable']['id'] = 'field_image_500xvariable';
  $handler->display->display_options['fields']['field_image_500xvariable']['table'] = 'field_data_field_image_500xvariable';
  $handler->display->display_options['fields']['field_image_500xvariable']['field'] = 'field_image_500xvariable';
  $handler->display->display_options['fields']['field_image_500xvariable']['relationship'] = 'field_images_target_id';
  $handler->display->display_options['fields']['field_image_500xvariable']['label'] = '';
  $handler->display->display_options['fields']['field_image_500xvariable']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_image_500xvariable']['element_label_colon'] = FALSE;
  /* Field: Colorbox: Colorbox trigger */
  $handler->display->display_options['fields']['colorbox']['id'] = 'colorbox';
  $handler->display->display_options['fields']['colorbox']['table'] = 'colorbox';
  $handler->display->display_options['fields']['colorbox']['field'] = 'colorbox';
  $handler->display->display_options['fields']['colorbox']['label'] = '';
  $handler->display->display_options['fields']['colorbox']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['colorbox']['trigger_field'] = 'field_image_300x300';
  $handler->display->display_options['fields']['colorbox']['popup'] = '[field_image_500xvariable]';
  $handler->display->display_options['fields']['colorbox']['gid'] = 1;
  $handler->display->display_options['fields']['colorbox']['width'] = '500px';
  $handler->display->display_options['fields']['colorbox']['height'] = '500px';
  $handler->display->display_options['block_description'] = 'Page 1 Images';

  /* Display: Page 1 thumbs */
  $handler = $view->new_display('attachment', 'Page 1 thumbs', 'attachment_1');
  $handler->display->display_options['display_description'] = 'Articles: Page 1 Thumbnails Block';
  $handler->display->display_options['pager']['type'] = 'some';
  $handler->display->display_options['pager']['options']['items_per_page'] = '3';
  $handler->display->display_options['pager']['options']['offset'] = '1';
  $handler->display->display_options['displays'] = array(
    'block' => 'block',
    'page_1' => 'page_1',
    'default' => 0,
    'block_1' => 0,
    'block_2' => 0,
  );
  $handler->display->display_options['attachment_position'] = 'after';

  /* Display: Page 2 Images Block */
  $handler = $view->new_display('block', 'Page 2 Images Block', 'block_1');
  $handler->display->display_options['defaults']['pager'] = FALSE;
  $handler->display->display_options['pager']['type'] = 'some';
  $handler->display->display_options['pager']['options']['items_per_page'] = '1';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['defaults']['relationships'] = FALSE;
  /* Relationship: Broken/missing handler */
  $handler->display->display_options['relationships']['field_images_page2_target_id']['id'] = 'field_images_page2_target_id';
  $handler->display->display_options['relationships']['field_images_page2_target_id']['table'] = 'field_data_field_images_page2';
  $handler->display->display_options['relationships']['field_images_page2_target_id']['field'] = 'field_images_page2_target_id';
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Content: Nid */
  $handler->display->display_options['fields']['nid']['id'] = 'nid';
  $handler->display->display_options['fields']['nid']['table'] = 'node';
  $handler->display->display_options['fields']['nid']['field'] = 'nid';
  $handler->display->display_options['fields']['nid']['label'] = '';
  $handler->display->display_options['fields']['nid']['exclude'] = TRUE;
  $handler->display->display_options['fields']['nid']['element_label_colon'] = FALSE;
  /* Field: Content: Nid */
  $handler->display->display_options['fields']['nid_1']['id'] = 'nid_1';
  $handler->display->display_options['fields']['nid_1']['table'] = 'node';
  $handler->display->display_options['fields']['nid_1']['field'] = 'nid';
  $handler->display->display_options['fields']['nid_1']['relationship'] = 'field_images_page2_target_id';
  $handler->display->display_options['fields']['nid_1']['label'] = '';
  $handler->display->display_options['fields']['nid_1']['exclude'] = TRUE;
  $handler->display->display_options['fields']['nid_1']['element_label_colon'] = FALSE;
  /* Field: Broken/missing handler */
  $handler->display->display_options['fields']['delta']['id'] = 'delta';
  $handler->display->display_options['fields']['delta']['table'] = 'field_data_field_images';
  $handler->display->display_options['fields']['delta']['field'] = 'delta';
  $handler->display->display_options['fields']['delta']['label'] = '';
  $handler->display->display_options['fields']['delta']['exclude'] = TRUE;
  $handler->display->display_options['fields']['delta']['element_label_colon'] = FALSE;
  /* Field: Broken/missing handler */
  $handler->display->display_options['fields']['field_image_300x300']['id'] = 'field_image_300x300';
  $handler->display->display_options['fields']['field_image_300x300']['table'] = 'field_data_field_image_300x300';
  $handler->display->display_options['fields']['field_image_300x300']['field'] = 'field_image_300x300';
  $handler->display->display_options['fields']['field_image_300x300']['relationship'] = 'field_images_page2_target_id';
  $handler->display->display_options['fields']['field_image_300x300']['label'] = '';
  $handler->display->display_options['fields']['field_image_300x300']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_image_300x300']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['field_image_300x300']['alter']['text'] = '[field_image_300x300] 
<span class="enlarge">Click to Enlarge</span>';
  $handler->display->display_options['fields']['field_image_300x300']['element_label_colon'] = FALSE;
  /* Field: Broken/missing handler */
  $handler->display->display_options['fields']['field_image_500xvariable']['id'] = 'field_image_500xvariable';
  $handler->display->display_options['fields']['field_image_500xvariable']['table'] = 'field_data_field_image_500xvariable';
  $handler->display->display_options['fields']['field_image_500xvariable']['field'] = 'field_image_500xvariable';
  $handler->display->display_options['fields']['field_image_500xvariable']['relationship'] = 'field_images_page2_target_id';
  $handler->display->display_options['fields']['field_image_500xvariable']['label'] = '';
  $handler->display->display_options['fields']['field_image_500xvariable']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_image_500xvariable']['element_label_colon'] = FALSE;
  /* Field: Colorbox: Colorbox trigger */
  $handler->display->display_options['fields']['colorbox']['id'] = 'colorbox';
  $handler->display->display_options['fields']['colorbox']['table'] = 'colorbox';
  $handler->display->display_options['fields']['colorbox']['field'] = 'colorbox';
  $handler->display->display_options['fields']['colorbox']['label'] = '';
  $handler->display->display_options['fields']['colorbox']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['colorbox']['trigger_field'] = 'field_image_300x300';
  $handler->display->display_options['fields']['colorbox']['popup'] = '[field_image_500xvariable]';
  $handler->display->display_options['fields']['colorbox']['gid'] = 1;
  $handler->display->display_options['fields']['colorbox']['width'] = '500px';
  $handler->display->display_options['fields']['colorbox']['height'] = '500px';
  $handler->display->display_options['block_description'] = 'Page 2 Image';

  /* Display: Page 3 Images Block */
  $handler = $view->new_display('block', 'Page 3 Images Block', 'block_2');
  $handler->display->display_options['defaults']['pager'] = FALSE;
  $handler->display->display_options['pager']['type'] = 'some';
  $handler->display->display_options['pager']['options']['items_per_page'] = '1';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['defaults']['relationships'] = FALSE;
  /* Relationship: Broken/missing handler */
  $handler->display->display_options['relationships']['field_images_page3_target_id']['id'] = 'field_images_page3_target_id';
  $handler->display->display_options['relationships']['field_images_page3_target_id']['table'] = 'field_data_field_images_page3';
  $handler->display->display_options['relationships']['field_images_page3_target_id']['field'] = 'field_images_page3_target_id';
  $handler->display->display_options['relationships']['field_images_page3_target_id']['required'] = TRUE;
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Content: Nid */
  $handler->display->display_options['fields']['nid']['id'] = 'nid';
  $handler->display->display_options['fields']['nid']['table'] = 'node';
  $handler->display->display_options['fields']['nid']['field'] = 'nid';
  $handler->display->display_options['fields']['nid']['label'] = '';
  $handler->display->display_options['fields']['nid']['exclude'] = TRUE;
  $handler->display->display_options['fields']['nid']['element_label_colon'] = FALSE;
  /* Field: Content: Nid */
  $handler->display->display_options['fields']['nid_1']['id'] = 'nid_1';
  $handler->display->display_options['fields']['nid_1']['table'] = 'node';
  $handler->display->display_options['fields']['nid_1']['field'] = 'nid';
  $handler->display->display_options['fields']['nid_1']['relationship'] = 'field_images_page3_target_id';
  $handler->display->display_options['fields']['nid_1']['label'] = '';
  $handler->display->display_options['fields']['nid_1']['exclude'] = TRUE;
  $handler->display->display_options['fields']['nid_1']['element_label_colon'] = FALSE;
  /* Field: Broken/missing handler */
  $handler->display->display_options['fields']['delta']['id'] = 'delta';
  $handler->display->display_options['fields']['delta']['table'] = 'field_data_field_images';
  $handler->display->display_options['fields']['delta']['field'] = 'delta';
  $handler->display->display_options['fields']['delta']['label'] = '';
  $handler->display->display_options['fields']['delta']['exclude'] = TRUE;
  $handler->display->display_options['fields']['delta']['element_label_colon'] = FALSE;
  /* Field: Broken/missing handler */
  $handler->display->display_options['fields']['field_image_300x300']['id'] = 'field_image_300x300';
  $handler->display->display_options['fields']['field_image_300x300']['table'] = 'field_data_field_image_300x300';
  $handler->display->display_options['fields']['field_image_300x300']['field'] = 'field_image_300x300';
  $handler->display->display_options['fields']['field_image_300x300']['relationship'] = 'field_images_page3_target_id';
  $handler->display->display_options['fields']['field_image_300x300']['label'] = '';
  $handler->display->display_options['fields']['field_image_300x300']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_image_300x300']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['field_image_300x300']['alter']['text'] = '[field_image_300x300]
<span class="enlarge">Click to Enlarge</span>';
  $handler->display->display_options['fields']['field_image_300x300']['element_label_colon'] = FALSE;
  /* Field: Broken/missing handler */
  $handler->display->display_options['fields']['field_image_500xvariable']['id'] = 'field_image_500xvariable';
  $handler->display->display_options['fields']['field_image_500xvariable']['table'] = 'field_data_field_image_500xvariable';
  $handler->display->display_options['fields']['field_image_500xvariable']['field'] = 'field_image_500xvariable';
  $handler->display->display_options['fields']['field_image_500xvariable']['relationship'] = 'field_images_page3_target_id';
  $handler->display->display_options['fields']['field_image_500xvariable']['label'] = '';
  $handler->display->display_options['fields']['field_image_500xvariable']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_image_500xvariable']['element_label_colon'] = FALSE;
  /* Field: Colorbox: Colorbox trigger */
  $handler->display->display_options['fields']['colorbox']['id'] = 'colorbox';
  $handler->display->display_options['fields']['colorbox']['table'] = 'colorbox';
  $handler->display->display_options['fields']['colorbox']['field'] = 'colorbox';
  $handler->display->display_options['fields']['colorbox']['label'] = '';
  $handler->display->display_options['fields']['colorbox']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['colorbox']['trigger_field'] = 'field_image_300x300';
  $handler->display->display_options['fields']['colorbox']['popup'] = '[field_image_500xvariable]';
  $handler->display->display_options['fields']['colorbox']['gid'] = 1;
  $handler->display->display_options['fields']['colorbox']['width'] = '500px';
  $handler->display->display_options['fields']['colorbox']['height'] = '500px';
  $handler->display->display_options['block_description'] = 'Page 3 Image';
  $export['ti_amg_fw_image_slideshow'] = $view;

  return $export;
}
