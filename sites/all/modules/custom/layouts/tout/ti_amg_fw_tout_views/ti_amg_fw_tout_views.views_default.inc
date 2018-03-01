<?php
/**
 * @file
 * ti_amg_fw_tout_views.views_default.inc
 */

/**
 * Implements hook_views_default_views().
 */
function ti_amg_fw_tout_views_views_default_views() {
  $export = array();

  $view = new view();
  $view->name = 'ti_amg_fw_right_rail_top_chef';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'node';
  $view->human_name = 'TI AMG FW Right Rail Top Chef';
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
  $handler->display->display_options['pager']['options']['items_per_page'] = '10';
  $handler->display->display_options['style_plugin'] = 'default';
  $handler->display->display_options['row_plugin'] = 'fields';
  /* Relationship: Entity Reference: Referenced Entity */
  $handler->display->display_options['relationships']['field_image_ref_target_id']['id'] = 'field_image_ref_target_id';
  $handler->display->display_options['relationships']['field_image_ref_target_id']['table'] = 'field_data_field_image_ref';
  $handler->display->display_options['relationships']['field_image_ref_target_id']['field'] = 'field_image_ref_target_id';
  /* Field: Content: Position */
  $handler->display->display_options['fields']['field_image_position']['id'] = 'field_image_position';
  $handler->display->display_options['fields']['field_image_position']['table'] = 'field_data_field_image_position';
  $handler->display->display_options['fields']['field_image_position']['field'] = 'field_image_position';
  $handler->display->display_options['fields']['field_image_position']['label'] = '';
  $handler->display->display_options['fields']['field_image_position']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_image_position']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_image_position']['element_default_classes'] = FALSE;
  /* Field: Field: External Link */
  $handler->display->display_options['fields']['field_external_link_4']['id'] = 'field_external_link_4';
  $handler->display->display_options['fields']['field_external_link_4']['table'] = 'field_data_field_external_link';
  $handler->display->display_options['fields']['field_external_link_4']['field'] = 'field_external_link';
  $handler->display->display_options['fields']['field_external_link_4']['label'] = '';
  $handler->display->display_options['fields']['field_external_link_4']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_external_link_4']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['field_external_link_4']['alter']['text'] = '[field_external_link_4-title]';
  $handler->display->display_options['fields']['field_external_link_4']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_external_link_4']['click_sort_column'] = 'url';
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
  /* Field: External link2 */
  $handler->display->display_options['fields']['field_external_link_1']['id'] = 'field_external_link_1';
  $handler->display->display_options['fields']['field_external_link_1']['table'] = 'field_data_field_external_link';
  $handler->display->display_options['fields']['field_external_link_1']['field'] = 'field_external_link';
  $handler->display->display_options['fields']['field_external_link_1']['ui_name'] = 'External link2';
  $handler->display->display_options['fields']['field_external_link_1']['label'] = '';
  $handler->display->display_options['fields']['field_external_link_1']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_external_link_1']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['field_external_link_1']['alter']['text'] = '<a href=\'[field_external_link_1-url] \' alt=\'[title]\' title=\'[title]\'>[field_external_link_1]</a>';
  $handler->display->display_options['fields']['field_external_link_1']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_external_link_1']['click_sort_column'] = 'url';
  $handler->display->display_options['fields']['field_external_link_1']['type'] = 'link_title_plain';
  /* Field: External link3 */
  $handler->display->display_options['fields']['field_external_link_2']['id'] = 'field_external_link_2';
  $handler->display->display_options['fields']['field_external_link_2']['table'] = 'field_data_field_external_link';
  $handler->display->display_options['fields']['field_external_link_2']['field'] = 'field_external_link';
  $handler->display->display_options['fields']['field_external_link_2']['ui_name'] = 'External link3';
  $handler->display->display_options['fields']['field_external_link_2']['label'] = '';
  $handler->display->display_options['fields']['field_external_link_2']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_external_link_2']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['field_external_link_2']['alter']['text'] = '[field_external_link_2-url]';
  $handler->display->display_options['fields']['field_external_link_2']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_external_link_2']['click_sort_column'] = 'url';
  /* Field: Content: Image */
  $handler->display->display_options['fields']['field_image']['id'] = 'field_image';
  $handler->display->display_options['fields']['field_image']['table'] = 'field_data_field_image';
  $handler->display->display_options['fields']['field_image']['field'] = 'field_image';
  $handler->display->display_options['fields']['field_image']['relationship'] = 'field_image_ref_target_id';
  $handler->display->display_options['fields']['field_image']['label'] = '';
  $handler->display->display_options['fields']['field_image']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['field_image']['alter']['text'] = '<div class =\'top-chef-[field_image_position]\'>
<div class=\'[field_image_position]\'>
<a alt="[title]" title="[field_external_link_4]" href="[field_external_link_2]">[field_image]</a>
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
  /* Field: External link4 */
  $handler->display->display_options['fields']['field_external_link_3']['id'] = 'field_external_link_3';
  $handler->display->display_options['fields']['field_external_link_3']['table'] = 'field_data_field_external_link';
  $handler->display->display_options['fields']['field_external_link_3']['field'] = 'field_external_link';
  $handler->display->display_options['fields']['field_external_link_3']['ui_name'] = 'External link4';
  $handler->display->display_options['fields']['field_external_link_3']['label'] = '';
  $handler->display->display_options['fields']['field_external_link_3']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_external_link_3']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['field_external_link_3']['alter']['text'] = '<a alt=\'[title]\' title=\'[field_external_link_3-title]\' href=\'[field_external_link_3-url]\'>[title]</a>';
  $handler->display->display_options['fields']['field_external_link_3']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_external_link_3']['click_sort_column'] = 'url';
  /* Field: Field: Description */
  $handler->display->display_options['fields']['field_description']['id'] = 'field_description';
  $handler->display->display_options['fields']['field_description']['table'] = 'field_data_field_description';
  $handler->display->display_options['fields']['field_description']['field'] = 'field_description';
  $handler->display->display_options['fields']['field_description']['label'] = '';
  $handler->display->display_options['fields']['field_description']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_description']['element_type'] = '0';
  $handler->display->display_options['fields']['field_description']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_description']['element_wrapper_type'] = '0';
  $handler->display->display_options['fields']['field_description']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['field_description']['field_api_classes'] = TRUE;
  /* Field: Field: More Link */
  $handler->display->display_options['fields']['field_more_link_1']['id'] = 'field_more_link_1';
  $handler->display->display_options['fields']['field_more_link_1']['table'] = 'field_data_field_more_link';
  $handler->display->display_options['fields']['field_more_link_1']['field'] = 'field_more_link';
  $handler->display->display_options['fields']['field_more_link_1']['label'] = '';
  $handler->display->display_options['fields']['field_more_link_1']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_more_link_1']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_more_link_1']['click_sort_column'] = 'url';
  $handler->display->display_options['fields']['field_more_link_1']['type'] = 'link_plain';
  /* Field: Field: More Link */
  $handler->display->display_options['fields']['field_more_link']['id'] = 'field_more_link';
  $handler->display->display_options['fields']['field_more_link']['table'] = 'field_data_field_more_link';
  $handler->display->display_options['fields']['field_more_link']['field'] = 'field_more_link';
  $handler->display->display_options['fields']['field_more_link']['label'] = '';
  $handler->display->display_options['fields']['field_more_link']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_more_link']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['field_more_link']['alter']['text'] = '<a href=\'[field_more_link_1]\' alt=\'[title]\' title=\'[title]\'>[field_more_link]</a>';
  $handler->display->display_options['fields']['field_more_link']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_more_link']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['field_more_link']['click_sort_column'] = 'url';
  $handler->display->display_options['fields']['field_more_link']['type'] = 'link_title_plain';
  $handler->display->display_options['fields']['field_more_link']['field_api_classes'] = TRUE;
  /* Field: External link1 */
  $handler->display->display_options['fields']['field_external_link']['id'] = 'field_external_link';
  $handler->display->display_options['fields']['field_external_link']['table'] = 'field_data_field_external_link';
  $handler->display->display_options['fields']['field_external_link']['field'] = 'field_external_link';
  $handler->display->display_options['fields']['field_external_link']['ui_name'] = 'External link1';
  $handler->display->display_options['fields']['field_external_link']['label'] = '';
  $handler->display->display_options['fields']['field_external_link']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['field_external_link']['alter']['text'] = '<div class="promo-body">
<div class="title">
[field_external_link_3]
</div>
<div class="desc">
[field_description]
</div>
<div class="link lmore" style="clear: left;">
[field_more_link]
</div>
</div>
<div class="double-divider"></div>';
  $handler->display->display_options['fields']['field_external_link']['element_type'] = '0';
  $handler->display->display_options['fields']['field_external_link']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_external_link']['element_wrapper_type'] = '0';
  $handler->display->display_options['fields']['field_external_link']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['field_external_link']['click_sort_column'] = 'url';
  $handler->display->display_options['fields']['field_external_link']['field_api_classes'] = TRUE;
  /* Sort criterion: Content: Block Order (field_block_order) */
  $handler->display->display_options['sorts']['field_block_order_value']['id'] = 'field_block_order_value';
  $handler->display->display_options['sorts']['field_block_order_value']['table'] = 'field_data_field_block_order';
  $handler->display->display_options['sorts']['field_block_order_value']['field'] = 'field_block_order_value';
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
    'tout' => 'tout',
  );

  /* Display: Block */
  $handler = $view->new_display('block', 'Block', 'block');
  $handler->display->display_options['block_caching'] = '8';
  $export['ti_amg_fw_right_rail_top_chef'] = $view;

  return $export;
}
