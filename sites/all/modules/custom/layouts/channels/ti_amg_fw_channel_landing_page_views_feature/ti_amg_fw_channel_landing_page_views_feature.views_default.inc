<?php
/**
 * @file
 * ti_amg_fw_channel_landing_page_views_feature.views_default.inc
 */

/**
 * Implements hook_views_default_views().
 */
function ti_amg_fw_channel_landing_page_views_feature_views_default_views() {
  $export = array();

  $view = new view();
  $view->name = 'ti_amg_fw_channel_landing_page_best_block';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'node';
  $view->human_name = 'TI AMG FW Channel Landing Page Best Block';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['title'] = 'TI AMG FW Channel Landing Page Best Block';
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

  /* Display: F&W's Best Lists */
  $handler = $view->new_display('block', 'F&W\'s Best Lists', 'block');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['defaults']['css_class'] = FALSE;
  $handler->display->display_options['css_class'] = 'the-best-of';
  $handler->display->display_options['defaults']['header'] = FALSE;
  $handler->display->display_options['defaults']['relationships'] = FALSE;
  /* Relationship: Content: The Best Of (field_clp_best_of) */
  $handler->display->display_options['relationships']['field_clp_best_of_value']['id'] = 'field_clp_best_of_value';
  $handler->display->display_options['relationships']['field_clp_best_of_value']['table'] = 'field_data_field_clp_best_of';
  $handler->display->display_options['relationships']['field_clp_best_of_value']['field'] = 'field_clp_best_of_value';
  $handler->display->display_options['relationships']['field_clp_best_of_value']['delta'] = '-1';
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Field collection item: Block Title */
  $handler->display->display_options['fields']['field_clp_best_of_title']['id'] = 'field_clp_best_of_title';
  $handler->display->display_options['fields']['field_clp_best_of_title']['table'] = 'field_data_field_clp_best_of_title';
  $handler->display->display_options['fields']['field_clp_best_of_title']['field'] = 'field_clp_best_of_title';
  $handler->display->display_options['fields']['field_clp_best_of_title']['relationship'] = 'field_clp_best_of_value';
  $handler->display->display_options['fields']['field_clp_best_of_title']['label'] = '';
  $handler->display->display_options['fields']['field_clp_best_of_title']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['field_clp_best_of_title']['alter']['text'] = '<div class ="tbo-hdr-main"><h2 class ="tbo-hdr">[field_clp_best_of_title]</h2></div>';
  $handler->display->display_options['fields']['field_clp_best_of_title']['element_label_colon'] = FALSE;
  /* Field: Field collection item: Link */
  $handler->display->display_options['fields']['field_clp_best_of_link']['id'] = 'field_clp_best_of_link';
  $handler->display->display_options['fields']['field_clp_best_of_link']['table'] = 'field_data_field_clp_best_of_link';
  $handler->display->display_options['fields']['field_clp_best_of_link']['field'] = 'field_clp_best_of_link';
  $handler->display->display_options['fields']['field_clp_best_of_link']['relationship'] = 'field_clp_best_of_value';
  $handler->display->display_options['fields']['field_clp_best_of_link']['label'] = '';
  $handler->display->display_options['fields']['field_clp_best_of_link']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['field_clp_best_of_link']['alter']['text'] = '<a href="[field_clp_best_of_link-url]" title="[field_clp_best_of_link-title]">[field_clp_best_of_link-title]</a>';
  $handler->display->display_options['fields']['field_clp_best_of_link']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_clp_best_of_link']['click_sort_column'] = 'url';
  $handler->display->display_options['fields']['field_clp_best_of_link']['delta_offset'] = '0';
  $handler->display->display_options['fields']['field_clp_best_of_link']['multi_type'] = 'ul';
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
  $handler->display->display_options['arguments']['nid']['specify_validation'] = TRUE;
  $handler->display->display_options['arguments']['nid']['validate']['type'] = 'node';
  $handler->display->display_options['arguments']['nid']['validate_options']['types'] = array(
    'channel_landing_page' => 'channel_landing_page',
  );
  $handler->display->display_options['block_description'] = 'TI AMG FW Channel Landing Page Best Block';
  $handler->display->display_options['block_caching'] = '4';
  $export['ti_amg_fw_channel_landing_page_best_block'] = $view;

  $view = new view();
  $view->name = 'ti_amg_fw_channel_landing_page_front_features';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'node';
  $view->human_name = 'TI AMG FW Channel Landing Page Front Features';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['title'] = 'TI AMG FW Channel Landing Page Front Features';
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

  /* Display: Block */
  $handler = $view->new_display('block', 'Block', 'block');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['defaults']['css_class'] = FALSE;
  $handler->display->display_options['css_class'] = 'left-column four-columns';
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'default';
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['row_plugin'] = 'fields';
  $handler->display->display_options['defaults']['row_options'] = FALSE;
  $handler->display->display_options['defaults']['header'] = FALSE;
  $handler->display->display_options['defaults']['footer'] = FALSE;
  /* Footer: Global: Text area */
  $handler->display->display_options['footer']['area']['id'] = 'area';
  $handler->display->display_options['footer']['area']['table'] = 'views';
  $handler->display->display_options['footer']['area']['field'] = 'area';
  $handler->display->display_options['footer']['area']['content'] = '<div class="clearer"></div>';
  $handler->display->display_options['footer']['area']['format'] = 'wysiwyg';
  $handler->display->display_options['defaults']['relationships'] = FALSE;
  /* Relationship: Content: Feature Front (field_clp_ff) */
  $handler->display->display_options['relationships']['field_clp_ff_value']['id'] = 'field_clp_ff_value';
  $handler->display->display_options['relationships']['field_clp_ff_value']['table'] = 'field_data_field_clp_ff';
  $handler->display->display_options['relationships']['field_clp_ff_value']['field'] = 'field_clp_ff_value';
  $handler->display->display_options['relationships']['field_clp_ff_value']['delta'] = '-1';
  /* Relationship: Entity Reference: Referenced Entity */
  $handler->display->display_options['relationships']['field_clp_ff_image_target_id']['id'] = 'field_clp_ff_image_target_id';
  $handler->display->display_options['relationships']['field_clp_ff_image_target_id']['table'] = 'field_data_field_clp_ff_image';
  $handler->display->display_options['relationships']['field_clp_ff_image_target_id']['field'] = 'field_clp_ff_image_target_id';
  $handler->display->display_options['relationships']['field_clp_ff_image_target_id']['relationship'] = 'field_clp_ff_value';
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Field collection item: Title & URL */
  $handler->display->display_options['fields']['field_clp_ff_title_1']['id'] = 'field_clp_ff_title_1';
  $handler->display->display_options['fields']['field_clp_ff_title_1']['table'] = 'field_data_field_clp_ff_title';
  $handler->display->display_options['fields']['field_clp_ff_title_1']['field'] = 'field_clp_ff_title';
  $handler->display->display_options['fields']['field_clp_ff_title_1']['relationship'] = 'field_clp_ff_value';
  $handler->display->display_options['fields']['field_clp_ff_title_1']['label'] = '';
  $handler->display->display_options['fields']['field_clp_ff_title_1']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_clp_ff_title_1']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_clp_ff_title_1']['click_sort_column'] = 'url';
  $handler->display->display_options['fields']['field_clp_ff_title_1']['type'] = 'link_absolute';
  /* Field: Field collection item: Title & URL */
  $handler->display->display_options['fields']['field_clp_ff_title_2']['id'] = 'field_clp_ff_title_2';
  $handler->display->display_options['fields']['field_clp_ff_title_2']['table'] = 'field_data_field_clp_ff_title';
  $handler->display->display_options['fields']['field_clp_ff_title_2']['field'] = 'field_clp_ff_title';
  $handler->display->display_options['fields']['field_clp_ff_title_2']['relationship'] = 'field_clp_ff_value';
  $handler->display->display_options['fields']['field_clp_ff_title_2']['label'] = '';
  $handler->display->display_options['fields']['field_clp_ff_title_2']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_clp_ff_title_2']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_clp_ff_title_2']['click_sort_column'] = 'url';
  $handler->display->display_options['fields']['field_clp_ff_title_2']['type'] = 'link_title_plain';
  /* Field: Content: Image */
  $handler->display->display_options['fields']['field_image']['id'] = 'field_image';
  $handler->display->display_options['fields']['field_image']['table'] = 'field_data_field_image';
  $handler->display->display_options['fields']['field_image']['field'] = 'field_image';
  $handler->display->display_options['fields']['field_image']['relationship'] = 'field_clp_ff_image_target_id';
  $handler->display->display_options['fields']['field_image']['label'] = '';
  $handler->display->display_options['fields']['field_image']['exclude'] = TRUE;
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
  $handler->display->display_options['fields']['nothing']['id'] = 'nothing';
  $handler->display->display_options['fields']['nothing']['table'] = 'views';
  $handler->display->display_options['fields']['nothing']['field'] = 'nothing';
  $handler->display->display_options['fields']['nothing']['label'] = '';
  $handler->display->display_options['fields']['nothing']['alter']['text'] = '<div class="image">
<a title=\'[field_clp_ff_title_2]\' href=\'[field_clp_ff_title_1]\'>[field_image]</a>
</div>';
  $handler->display->display_options['fields']['nothing']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['nothing']['hide_empty'] = TRUE;
  /* Field: Field collection item: Slug */
  $handler->display->display_options['fields']['field_clp_ff_slug']['id'] = 'field_clp_ff_slug';
  $handler->display->display_options['fields']['field_clp_ff_slug']['table'] = 'field_data_field_clp_ff_slug';
  $handler->display->display_options['fields']['field_clp_ff_slug']['field'] = 'field_clp_ff_slug';
  $handler->display->display_options['fields']['field_clp_ff_slug']['relationship'] = 'field_clp_ff_value';
  $handler->display->display_options['fields']['field_clp_ff_slug']['label'] = '';
  $handler->display->display_options['fields']['field_clp_ff_slug']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_clp_ff_slug']['element_class'] = 'slug';
  $handler->display->display_options['fields']['field_clp_ff_slug']['element_label_colon'] = FALSE;
  /* Field: Field collection item: Title & URL */
  $handler->display->display_options['fields']['field_clp_ff_title']['id'] = 'field_clp_ff_title';
  $handler->display->display_options['fields']['field_clp_ff_title']['table'] = 'field_data_field_clp_ff_title';
  $handler->display->display_options['fields']['field_clp_ff_title']['field'] = 'field_clp_ff_title';
  $handler->display->display_options['fields']['field_clp_ff_title']['relationship'] = 'field_clp_ff_value';
  $handler->display->display_options['fields']['field_clp_ff_title']['label'] = '';
  $handler->display->display_options['fields']['field_clp_ff_title']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_clp_ff_title']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['field_clp_ff_title']['alter']['text'] = '<a href=\'[field_clp_ff_title-url] \' title=\'[field_clp_ff_title] \'>[field_clp_ff_title_2] </a>';
  $handler->display->display_options['fields']['field_clp_ff_title']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_clp_ff_title']['click_sort_column'] = 'url';
  $handler->display->display_options['fields']['field_clp_ff_title']['type'] = 'link_title_plain';
  /* Field: Field collection item: Deck */
  $handler->display->display_options['fields']['field_clp_ff_deck']['id'] = 'field_clp_ff_deck';
  $handler->display->display_options['fields']['field_clp_ff_deck']['table'] = 'field_data_field_clp_ff_deck';
  $handler->display->display_options['fields']['field_clp_ff_deck']['field'] = 'field_clp_ff_deck';
  $handler->display->display_options['fields']['field_clp_ff_deck']['relationship'] = 'field_clp_ff_value';
  $handler->display->display_options['fields']['field_clp_ff_deck']['label'] = '';
  $handler->display->display_options['fields']['field_clp_ff_deck']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_clp_ff_deck']['element_label_colon'] = FALSE;
  /* Field: Global: Custom text */
  $handler->display->display_options['fields']['nothing_1']['id'] = 'nothing_1';
  $handler->display->display_options['fields']['nothing_1']['table'] = 'views';
  $handler->display->display_options['fields']['nothing_1']['field'] = 'nothing';
  $handler->display->display_options['fields']['nothing_1']['label'] = '';
  $handler->display->display_options['fields']['nothing_1']['alter']['text'] = '<div class="feature-text">
    <div class="slug">
      [field_clp_ff_slug]
    </div>
<h2>[field_clp_ff_title]</h2>
[field_clp_ff_deck] 
  </div>';
  $handler->display->display_options['fields']['nothing_1']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['nothing_1']['hide_empty'] = TRUE;
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
  $handler->display->display_options['arguments']['nid']['specify_validation'] = TRUE;
  $handler->display->display_options['arguments']['nid']['validate']['type'] = 'node';
  $handler->display->display_options['arguments']['nid']['validate_options']['types'] = array(
    'channel_landing_page' => 'channel_landing_page',
  );
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
    'channel_landing_page' => 'channel_landing_page',
  );
  /* Filter criterion: Content: Feature Front (field_clp_ff) */
  $handler->display->display_options['filters']['field_clp_ff_value']['id'] = 'field_clp_ff_value';
  $handler->display->display_options['filters']['field_clp_ff_value']['table'] = 'field_data_field_clp_ff';
  $handler->display->display_options['filters']['field_clp_ff_value']['field'] = 'field_clp_ff_value';
  $handler->display->display_options['filters']['field_clp_ff_value']['operator'] = 'not empty';
  $handler->display->display_options['block_description'] = 'TI AMG FW Channel Landing Page Front Features';
  $export['ti_amg_fw_channel_landing_page_front_features'] = $view;

  $view = new view();
  $view->name = 'ti_amg_fw_channel_landing_page_front_features_video_block';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'node';
  $view->human_name = 'TI AMG FW Channel Landing Page Front Features Video Block';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['title'] = 'TI AMG FW Channel Landing Page Front Features Video Block';
  $handler->display->display_options['css_class'] = 'vid-switcher';
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

  /* Display: Block */
  $handler = $view->new_display('block', 'Block', 'block');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['defaults']['relationships'] = FALSE;
  /* Relationship: Entity Reference: Referenced Entity */
  $handler->display->display_options['relationships']['field_related_videos_target_id']['id'] = 'field_related_videos_target_id';
  $handler->display->display_options['relationships']['field_related_videos_target_id']['table'] = 'field_data_field_related_videos';
  $handler->display->display_options['relationships']['field_related_videos_target_id']['field'] = 'field_related_videos_target_id';
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Content: Video */
  $handler->display->display_options['fields']['field_clp_video']['id'] = 'field_clp_video';
  $handler->display->display_options['fields']['field_clp_video']['table'] = 'field_data_field_clp_video';
  $handler->display->display_options['fields']['field_clp_video']['field'] = 'field_clp_video';
  $handler->display->display_options['fields']['field_clp_video']['label'] = '';
  $handler->display->display_options['fields']['field_clp_video']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['field_clp_video']['alter']['text'] = '[field_clp_video]';
  $handler->display->display_options['fields']['field_clp_video']['element_label_colon'] = FALSE;
  /* Field: Content: Video ID */
  $handler->display->display_options['fields']['field_video_id']['id'] = 'field_video_id';
  $handler->display->display_options['fields']['field_video_id']['table'] = 'field_data_field_video_id';
  $handler->display->display_options['fields']['field_video_id']['field'] = 'field_video_id';
  $handler->display->display_options['fields']['field_video_id']['relationship'] = 'field_related_videos_target_id';
  $handler->display->display_options['fields']['field_video_id']['label'] = '';
  $handler->display->display_options['fields']['field_video_id']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_video_id']['hide_empty'] = TRUE;
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
  $handler->display->display_options['arguments']['nid']['specify_validation'] = TRUE;
  $handler->display->display_options['arguments']['nid']['validate']['type'] = 'node';
  $handler->display->display_options['arguments']['nid']['validate_options']['types'] = array(
    'channel_landing_page' => 'channel_landing_page',
  );
  $handler->display->display_options['block_description'] = 'TI AMG FW Channel Landing Page Front Features Video Block';
  $export['ti_amg_fw_channel_landing_page_front_features_video_block'] = $view;

  $view = new view();
  $view->name = 'ti_amg_fw_channel_landing_page_slideshows';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'node';
  $view->human_name = 'TI AMG FW Channel Landing Page Slideshows';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['title'] = 'TI AMG FW Channel Landing Page Slideshows';
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['access']['type'] = 'perm';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['pager']['type'] = 'some';
  $handler->display->display_options['pager']['options']['items_per_page'] = '12';
  $handler->display->display_options['style_plugin'] = 'default';
  $handler->display->display_options['style_options']['row_class'] = 'one-column';
  $handler->display->display_options['row_plugin'] = 'fields';
  /* Header: Global: Text area */
  $handler->display->display_options['header']['area']['id'] = 'area';
  $handler->display->display_options['header']['area']['table'] = 'views';
  $handler->display->display_options['header']['area']['field'] = 'area';
  $handler->display->display_options['header']['area']['content'] = '<div class="subsection-banner">Featured Slideshows</div>';
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
    'channel_landing_page' => 'channel_landing_page',
  );

  /* Display: Featured Slideshows */
  $handler = $view->new_display('block', 'Featured Slideshows', 'block');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['defaults']['css_class'] = FALSE;
  $handler->display->display_options['css_class'] = 'featured-slideshows';
  $handler->display->display_options['defaults']['header'] = FALSE;
  /* Header: Global: Text area */
  $handler->display->display_options['header']['area']['id'] = 'area';
  $handler->display->display_options['header']['area']['table'] = 'views';
  $handler->display->display_options['header']['area']['field'] = 'area';
  $handler->display->display_options['header']['area']['content'] = '<h1 class="slideshows" title="slideshows">Slideshows</h1>
<div class="subsection-banner">Featured Slideshows</div>';
  $handler->display->display_options['header']['area']['format'] = 'wysiwyg';
  $handler->display->display_options['defaults']['relationships'] = FALSE;
  /* Relationship: Content: Featured Slideshows (field_clp_featured_slideshows) */
  $handler->display->display_options['relationships']['field_clp_featured_slideshows_value']['id'] = 'field_clp_featured_slideshows_value';
  $handler->display->display_options['relationships']['field_clp_featured_slideshows_value']['table'] = 'field_data_field_clp_featured_slideshows';
  $handler->display->display_options['relationships']['field_clp_featured_slideshows_value']['field'] = 'field_clp_featured_slideshows_value';
  $handler->display->display_options['relationships']['field_clp_featured_slideshows_value']['delta'] = '-1';
  /* Relationship: Entity Reference: Referenced Entity */
  $handler->display->display_options['relationships']['field_fs_image_target_id']['id'] = 'field_fs_image_target_id';
  $handler->display->display_options['relationships']['field_fs_image_target_id']['table'] = 'field_data_field_fs_image';
  $handler->display->display_options['relationships']['field_fs_image_target_id']['field'] = 'field_fs_image_target_id';
  $handler->display->display_options['relationships']['field_fs_image_target_id']['relationship'] = 'field_clp_featured_slideshows_value';
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Field collection item: Featured Slideshow URL  */
  $handler->display->display_options['fields']['field_fs_url_2']['id'] = 'field_fs_url_2';
  $handler->display->display_options['fields']['field_fs_url_2']['table'] = 'field_data_field_fs_url';
  $handler->display->display_options['fields']['field_fs_url_2']['field'] = 'field_fs_url';
  $handler->display->display_options['fields']['field_fs_url_2']['relationship'] = 'field_clp_featured_slideshows_value';
  $handler->display->display_options['fields']['field_fs_url_2']['label'] = '';
  $handler->display->display_options['fields']['field_fs_url_2']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_fs_url_2']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_fs_url_2']['click_sort_column'] = 'url';
  $handler->display->display_options['fields']['field_fs_url_2']['type'] = 'link_title_plain';
  /* Field: Field collection item: Featured Slideshow URL  */
  $handler->display->display_options['fields']['field_fs_url_1']['id'] = 'field_fs_url_1';
  $handler->display->display_options['fields']['field_fs_url_1']['table'] = 'field_data_field_fs_url';
  $handler->display->display_options['fields']['field_fs_url_1']['field'] = 'field_fs_url';
  $handler->display->display_options['fields']['field_fs_url_1']['relationship'] = 'field_clp_featured_slideshows_value';
  $handler->display->display_options['fields']['field_fs_url_1']['label'] = '';
  $handler->display->display_options['fields']['field_fs_url_1']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_fs_url_1']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_fs_url_1']['click_sort_column'] = 'url';
  $handler->display->display_options['fields']['field_fs_url_1']['type'] = 'link_plain';
  /* Field: Content: Image */
  $handler->display->display_options['fields']['field_image']['id'] = 'field_image';
  $handler->display->display_options['fields']['field_image']['table'] = 'field_data_field_image';
  $handler->display->display_options['fields']['field_image']['field'] = 'field_image';
  $handler->display->display_options['fields']['field_image']['relationship'] = 'field_fs_image_target_id';
  $handler->display->display_options['fields']['field_image']['label'] = '';
  $handler->display->display_options['fields']['field_image']['alter']['make_link'] = TRUE;
  $handler->display->display_options['fields']['field_image']['alter']['path'] = '[field_fs_url_1]';
  $handler->display->display_options['fields']['field_image']['alter']['alt'] = '[field_fs_url_2] ';
  $handler->display->display_options['fields']['field_image']['element_type'] = '0';
  $handler->display->display_options['fields']['field_image']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_image']['element_wrapper_type'] = '0';
  $handler->display->display_options['fields']['field_image']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['field_image']['hide_empty'] = TRUE;
  $handler->display->display_options['fields']['field_image']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_image']['settings'] = array(
    'image_style' => '',
    'image_link' => '',
  );
  $handler->display->display_options['fields']['field_image']['field_api_classes'] = TRUE;
  /* Field: Field collection item: Featured Slideshow URL  */
  $handler->display->display_options['fields']['field_fs_url']['id'] = 'field_fs_url';
  $handler->display->display_options['fields']['field_fs_url']['table'] = 'field_data_field_fs_url';
  $handler->display->display_options['fields']['field_fs_url']['field'] = 'field_fs_url';
  $handler->display->display_options['fields']['field_fs_url']['relationship'] = 'field_clp_featured_slideshows_value';
  $handler->display->display_options['fields']['field_fs_url']['label'] = '';
  $handler->display->display_options['fields']['field_fs_url']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['field_fs_url']['alter']['text'] = '<a href="[field_fs_url-url]" title="[field_fs_url-title]">[field_fs_url-title]</a>';
  $handler->display->display_options['fields']['field_fs_url']['alter']['path'] = '[field_fs_url-url]';
  $handler->display->display_options['fields']['field_fs_url']['alter']['alt'] = '[field_fs_url-title]';
  $handler->display->display_options['fields']['field_fs_url']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_fs_url']['hide_empty'] = TRUE;
  $handler->display->display_options['fields']['field_fs_url']['click_sort_column'] = 'url';
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
    'channel_landing_page' => 'channel_landing_page',
  );
  /* Filter criterion: Content: Featured Slideshows (field_clp_featured_slideshows) */
  $handler->display->display_options['filters']['field_clp_featured_slideshows_value']['id'] = 'field_clp_featured_slideshows_value';
  $handler->display->display_options['filters']['field_clp_featured_slideshows_value']['table'] = 'field_data_field_clp_featured_slideshows';
  $handler->display->display_options['filters']['field_clp_featured_slideshows_value']['field'] = 'field_clp_featured_slideshows_value';
  $handler->display->display_options['filters']['field_clp_featured_slideshows_value']['operator'] = 'not empty';
  $handler->display->display_options['block_caching'] = '4';

  /* Display: Recipe Slideshows */
  $handler = $view->new_display('block', 'Recipe Slideshows', 'block_1');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['defaults']['css_class'] = FALSE;
  $handler->display->display_options['css_class'] = 'slideshow-wrapper';
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'default';
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['row_plugin'] = 'fields';
  $handler->display->display_options['defaults']['row_options'] = FALSE;
  $handler->display->display_options['defaults']['header'] = FALSE;
  /* Header: Global: Text area */
  $handler->display->display_options['header']['area']['id'] = 'area';
  $handler->display->display_options['header']['area']['table'] = 'views';
  $handler->display->display_options['header']['area']['field'] = 'area';
  $handler->display->display_options['header']['area']['content'] = '<div class="subsection-banner">recipe slideshows</div>';
  $handler->display->display_options['header']['area']['format'] = 'wysiwyg';
  $handler->display->display_options['defaults']['relationships'] = FALSE;
  /* Relationship: Content: Recipe Slideshows (field_clp_recipe_slideshows) */
  $handler->display->display_options['relationships']['field_clp_recipe_slideshows_value']['id'] = 'field_clp_recipe_slideshows_value';
  $handler->display->display_options['relationships']['field_clp_recipe_slideshows_value']['table'] = 'field_data_field_clp_recipe_slideshows';
  $handler->display->display_options['relationships']['field_clp_recipe_slideshows_value']['field'] = 'field_clp_recipe_slideshows_value';
  $handler->display->display_options['relationships']['field_clp_recipe_slideshows_value']['delta'] = '-1';
  /* Relationship: Entity Reference: Referenced Entity */
  $handler->display->display_options['relationships']['field_rs_image_target_id']['id'] = 'field_rs_image_target_id';
  $handler->display->display_options['relationships']['field_rs_image_target_id']['table'] = 'field_data_field_rs_image';
  $handler->display->display_options['relationships']['field_rs_image_target_id']['field'] = 'field_rs_image_target_id';
  $handler->display->display_options['relationships']['field_rs_image_target_id']['relationship'] = 'field_clp_recipe_slideshows_value';
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Field collection item: Recipe Slideshow Image Caption */
  $handler->display->display_options['fields']['field_recipe_rs_image_caption_1']['id'] = 'field_recipe_rs_image_caption_1';
  $handler->display->display_options['fields']['field_recipe_rs_image_caption_1']['table'] = 'field_data_field_recipe_rs_image_caption';
  $handler->display->display_options['fields']['field_recipe_rs_image_caption_1']['field'] = 'field_recipe_rs_image_caption';
  $handler->display->display_options['fields']['field_recipe_rs_image_caption_1']['relationship'] = 'field_clp_recipe_slideshows_value';
  $handler->display->display_options['fields']['field_recipe_rs_image_caption_1']['label'] = '';
  $handler->display->display_options['fields']['field_recipe_rs_image_caption_1']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_recipe_rs_image_caption_1']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_recipe_rs_image_caption_1']['click_sort_column'] = 'url';
  $handler->display->display_options['fields']['field_recipe_rs_image_caption_1']['type'] = 'link_plain';
  /* Field: Field collection item: Recipe Slideshow Image Caption */
  $handler->display->display_options['fields']['field_recipe_rs_image_caption_2']['id'] = 'field_recipe_rs_image_caption_2';
  $handler->display->display_options['fields']['field_recipe_rs_image_caption_2']['table'] = 'field_data_field_recipe_rs_image_caption';
  $handler->display->display_options['fields']['field_recipe_rs_image_caption_2']['field'] = 'field_recipe_rs_image_caption';
  $handler->display->display_options['fields']['field_recipe_rs_image_caption_2']['relationship'] = 'field_clp_recipe_slideshows_value';
  $handler->display->display_options['fields']['field_recipe_rs_image_caption_2']['label'] = '';
  $handler->display->display_options['fields']['field_recipe_rs_image_caption_2']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_recipe_rs_image_caption_2']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_recipe_rs_image_caption_2']['click_sort_column'] = 'url';
  $handler->display->display_options['fields']['field_recipe_rs_image_caption_2']['type'] = 'link_title_plain';
  /* Field: Content: Image */
  $handler->display->display_options['fields']['field_image']['id'] = 'field_image';
  $handler->display->display_options['fields']['field_image']['table'] = 'field_data_field_image';
  $handler->display->display_options['fields']['field_image']['field'] = 'field_image';
  $handler->display->display_options['fields']['field_image']['relationship'] = 'field_rs_image_target_id';
  $handler->display->display_options['fields']['field_image']['label'] = '';
  $handler->display->display_options['fields']['field_image']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_image']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['field_image']['alter']['text'] = '<a href="[field_recipe_rs_image_caption_1]" title="[field_recipe_rs_image_caption_2]">[field_image]  </a>';
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
  /* Field: Field collection item: Recipe Slideshow Image Caption */
  $handler->display->display_options['fields']['field_recipe_rs_image_caption']['id'] = 'field_recipe_rs_image_caption';
  $handler->display->display_options['fields']['field_recipe_rs_image_caption']['table'] = 'field_data_field_recipe_rs_image_caption';
  $handler->display->display_options['fields']['field_recipe_rs_image_caption']['field'] = 'field_recipe_rs_image_caption';
  $handler->display->display_options['fields']['field_recipe_rs_image_caption']['relationship'] = 'field_clp_recipe_slideshows_value';
  $handler->display->display_options['fields']['field_recipe_rs_image_caption']['label'] = '';
  $handler->display->display_options['fields']['field_recipe_rs_image_caption']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['field_recipe_rs_image_caption']['alter']['text'] = '<div class="one-column">[field_image]
<a href="[field_recipe_rs_image_caption-url]" title="[field_recipe_rs_image_caption-title]">
     <span class="image-credit">[field_recipe_rs_image_caption-title]</span>
</a>
</div>';
  $handler->display->display_options['fields']['field_recipe_rs_image_caption']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_recipe_rs_image_caption']['click_sort_column'] = 'url';
  /* Field: Field collection item: Recipe Slideshow More Link */
  $handler->display->display_options['fields']['field_rs_more_link']['id'] = 'field_rs_more_link';
  $handler->display->display_options['fields']['field_rs_more_link']['table'] = 'field_data_field_rs_more_link';
  $handler->display->display_options['fields']['field_rs_more_link']['field'] = 'field_rs_more_link';
  $handler->display->display_options['fields']['field_rs_more_link']['relationship'] = 'field_clp_recipe_slideshows_value';
  $handler->display->display_options['fields']['field_rs_more_link']['label'] = '';
  $handler->display->display_options['fields']['field_rs_more_link']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['field_rs_more_link']['alter']['text'] = '<span class="links">
<a href="[field_rs_more_link-url]" title="[field_rs_more_link-title]">[field_rs_more_link-title]</a>
</span>';
  $handler->display->display_options['fields']['field_rs_more_link']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_rs_more_link']['click_sort_column'] = 'url';
  /* Field: Field collection item: Recipe Slideshow Title */
  $handler->display->display_options['fields']['field_rs_title']['id'] = 'field_rs_title';
  $handler->display->display_options['fields']['field_rs_title']['table'] = 'field_data_field_rs_title';
  $handler->display->display_options['fields']['field_rs_title']['field'] = 'field_rs_title';
  $handler->display->display_options['fields']['field_rs_title']['relationship'] = 'field_clp_recipe_slideshows_value';
  $handler->display->display_options['fields']['field_rs_title']['label'] = '';
  $handler->display->display_options['fields']['field_rs_title']['element_type'] = 'h3';
  $handler->display->display_options['fields']['field_rs_title']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_rs_title']['element_wrapper_type'] = '0';
  $handler->display->display_options['fields']['field_rs_title']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['field_rs_title']['field_api_classes'] = TRUE;
  /* Field: Field collection item: Recipe Slideshow Links */
  $handler->display->display_options['fields']['field_rs_links']['id'] = 'field_rs_links';
  $handler->display->display_options['fields']['field_rs_links']['table'] = 'field_data_field_rs_links';
  $handler->display->display_options['fields']['field_rs_links']['field'] = 'field_rs_links';
  $handler->display->display_options['fields']['field_rs_links']['relationship'] = 'field_clp_recipe_slideshows_value';
  $handler->display->display_options['fields']['field_rs_links']['label'] = '';
  $handler->display->display_options['fields']['field_rs_links']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['field_rs_links']['alter']['text'] = '<a href="[field_rs_links-url]" title="[field_rs_links-title]"> [field_rs_links-title]</a>';
  $handler->display->display_options['fields']['field_rs_links']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_rs_links']['click_sort_column'] = 'url';
  $handler->display->display_options['fields']['field_rs_links']['delta_offset'] = '0';
  $handler->display->display_options['fields']['field_rs_links']['multi_type'] = 'ul';
  /* Field: Global: Custom text */
  $handler->display->display_options['fields']['nothing']['id'] = 'nothing';
  $handler->display->display_options['fields']['nothing']['table'] = 'views';
  $handler->display->display_options['fields']['nothing']['field'] = 'nothing';
  $handler->display->display_options['fields']['nothing']['label'] = '';
  $handler->display->display_options['fields']['nothing']['alter']['text'] = '<div class="section-separator"></div>';
  $handler->display->display_options['fields']['nothing']['element_label_colon'] = FALSE;
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
    'channel_landing_page' => 'channel_landing_page',
  );
  /* Filter criterion: Content: Recipe Slideshows (field_clp_recipe_slideshows) */
  $handler->display->display_options['filters']['field_clp_recipe_slideshows_value']['id'] = 'field_clp_recipe_slideshows_value';
  $handler->display->display_options['filters']['field_clp_recipe_slideshows_value']['table'] = 'field_data_field_clp_recipe_slideshows';
  $handler->display->display_options['filters']['field_clp_recipe_slideshows_value']['field'] = 'field_clp_recipe_slideshows_value';
  $handler->display->display_options['filters']['field_clp_recipe_slideshows_value']['operator'] = 'not empty';
  $handler->display->display_options['block_caching'] = '4';
  $export['ti_amg_fw_channel_landing_page_slideshows'] = $view;

  $view = new view();
  $view->name = 'ti_amg_fw_channel_landing_page_style_find';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'node';
  $view->human_name = 'TI AMG FW Channel Landing Page Style Find';
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
  /* Field: Content: Title & URL */
  $handler->display->display_options['fields']['field_clp_of_day_title']['id'] = 'field_clp_of_day_title';
  $handler->display->display_options['fields']['field_clp_of_day_title']['table'] = 'field_data_field_clp_of_day_title';
  $handler->display->display_options['fields']['field_clp_of_day_title']['field'] = 'field_clp_of_day_title';
  $handler->display->display_options['fields']['field_clp_of_day_title']['label'] = '';
  $handler->display->display_options['fields']['field_clp_of_day_title']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_clp_of_day_title']['click_sort_column'] = 'url';
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

  /* Display: Block */
  $handler = $view->new_display('block', 'Block', 'block');
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'default';
  $handler->display->display_options['style_options']['row_class'] = 'of-the-day';
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['row_plugin'] = 'fields';
  $handler->display->display_options['defaults']['row_options'] = FALSE;
  $handler->display->display_options['defaults']['header'] = FALSE;
  $handler->display->display_options['defaults']['relationships'] = FALSE;
  /* Relationship: Entity Reference: Referenced Entity */
  $handler->display->display_options['relationships']['field_clp_of_day_image_target_id']['id'] = 'field_clp_of_day_image_target_id';
  $handler->display->display_options['relationships']['field_clp_of_day_image_target_id']['table'] = 'field_data_field_clp_of_day_image';
  $handler->display->display_options['relationships']['field_clp_of_day_image_target_id']['field'] = 'field_clp_of_day_image_target_id';
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Content: Title & URL */
  $handler->display->display_options['fields']['field_clp_of_day_title_1']['id'] = 'field_clp_of_day_title_1';
  $handler->display->display_options['fields']['field_clp_of_day_title_1']['table'] = 'field_data_field_clp_of_day_title';
  $handler->display->display_options['fields']['field_clp_of_day_title_1']['field'] = 'field_clp_of_day_title';
  $handler->display->display_options['fields']['field_clp_of_day_title_1']['label'] = '';
  $handler->display->display_options['fields']['field_clp_of_day_title_1']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_clp_of_day_title_1']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_clp_of_day_title_1']['hide_empty'] = TRUE;
  $handler->display->display_options['fields']['field_clp_of_day_title_1']['click_sort_column'] = 'url';
  $handler->display->display_options['fields']['field_clp_of_day_title_1']['type'] = 'link_absolute';
  /* Field: Content: Image */
  $handler->display->display_options['fields']['field_image']['id'] = 'field_image';
  $handler->display->display_options['fields']['field_image']['table'] = 'field_data_field_image';
  $handler->display->display_options['fields']['field_image']['field'] = 'field_image';
  $handler->display->display_options['fields']['field_image']['relationship'] = 'field_clp_of_day_image_target_id';
  $handler->display->display_options['fields']['field_image']['label'] = '';
  $handler->display->display_options['fields']['field_image']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_image']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['field_image']['alter']['text'] = '<div class ="right-image">[field_image]</div>';
  $handler->display->display_options['fields']['field_image']['element_class'] = 'right-image';
  $handler->display->display_options['fields']['field_image']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_image']['hide_empty'] = TRUE;
  $handler->display->display_options['fields']['field_image']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_image']['settings'] = array(
    'image_style' => '',
    'image_link' => '',
  );
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['relationship'] = 'field_clp_of_day_image_target_id';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['exclude'] = TRUE;
  $handler->display->display_options['fields']['title']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['title']['hide_empty'] = TRUE;
  $handler->display->display_options['fields']['title']['link_to_node'] = FALSE;
  /* Field: Content: Slug */
  $handler->display->display_options['fields']['field_clp_of_day_slug']['id'] = 'field_clp_of_day_slug';
  $handler->display->display_options['fields']['field_clp_of_day_slug']['table'] = 'field_data_field_clp_of_day_slug';
  $handler->display->display_options['fields']['field_clp_of_day_slug']['field'] = 'field_clp_of_day_slug';
  $handler->display->display_options['fields']['field_clp_of_day_slug']['label'] = '';
  $handler->display->display_options['fields']['field_clp_of_day_slug']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['field_clp_of_day_slug']['alter']['text'] = '<span class="black-slug">[field_clp_of_day_slug]</span><div class ="slug-pointer"></div>';
  $handler->display->display_options['fields']['field_clp_of_day_slug']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_clp_of_day_slug']['hide_empty'] = TRUE;
  /* Field: Content: Title & URL */
  $handler->display->display_options['fields']['field_clp_of_day_title']['id'] = 'field_clp_of_day_title';
  $handler->display->display_options['fields']['field_clp_of_day_title']['table'] = 'field_data_field_clp_of_day_title';
  $handler->display->display_options['fields']['field_clp_of_day_title']['field'] = 'field_clp_of_day_title';
  $handler->display->display_options['fields']['field_clp_of_day_title']['label'] = '';
  $handler->display->display_options['fields']['field_clp_of_day_title']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['field_clp_of_day_title']['alter']['text'] = '<a href=\'[field_clp_of_day_title-url]\' title=\'[field_clp_of_day_title]\'>[field_clp_of_day_title-title]</a>';
  $handler->display->display_options['fields']['field_clp_of_day_title']['alter']['path'] = '[field_clp_of_day_title-url]';
  $handler->display->display_options['fields']['field_clp_of_day_title']['alter']['absolute'] = TRUE;
  $handler->display->display_options['fields']['field_clp_of_day_title']['alter']['alt'] = '[field_clp_of_day_title-title]';
  $handler->display->display_options['fields']['field_clp_of_day_title']['element_type'] = 'h2';
  $handler->display->display_options['fields']['field_clp_of_day_title']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_clp_of_day_title']['hide_empty'] = TRUE;
  $handler->display->display_options['fields']['field_clp_of_day_title']['click_sort_column'] = 'url';
  $handler->display->display_options['fields']['field_clp_of_day_title']['type'] = 'link_title_plain';
  /* Field: Global: Custom text */
  $handler->display->display_options['fields']['nothing']['id'] = 'nothing';
  $handler->display->display_options['fields']['nothing']['table'] = 'views';
  $handler->display->display_options['fields']['nothing']['field'] = 'nothing';
  $handler->display->display_options['fields']['nothing']['label'] = '';
  $handler->display->display_options['fields']['nothing']['alter']['text'] = '<a href="[field_clp_of_day_title_1]" target="_blank" title="[title]">[field_image]</a>';
  $handler->display->display_options['fields']['nothing']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['nothing']['hide_empty'] = TRUE;
  $handler->display->display_options['fields']['nothing']['hide_alter_empty'] = TRUE;
  /* Field: Content: Deck */
  $handler->display->display_options['fields']['field_clp_of_day_deck']['id'] = 'field_clp_of_day_deck';
  $handler->display->display_options['fields']['field_clp_of_day_deck']['table'] = 'field_data_field_clp_of_day_deck';
  $handler->display->display_options['fields']['field_clp_of_day_deck']['field'] = 'field_clp_of_day_deck';
  $handler->display->display_options['fields']['field_clp_of_day_deck']['label'] = '';
  $handler->display->display_options['fields']['field_clp_of_day_deck']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_clp_of_day_deck']['hide_empty'] = TRUE;
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
  $handler->display->display_options['arguments']['nid']['specify_validation'] = TRUE;
  $handler->display->display_options['arguments']['nid']['validate']['type'] = 'node';
  $handler->display->display_options['arguments']['nid']['validate_options']['types'] = array(
    'channel_landing_page' => 'channel_landing_page',
  );
  $handler->display->display_options['block_description'] = 'TI AMG FW Channel Landing Page Style Find';
  $export['ti_amg_fw_channel_landing_page_style_find'] = $view;

  $view = new view();
  $view->name = 'ti_amg_fw_channel_landing_page_top_promo_carousel';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'node';
  $view->human_name = 'TI AMG FW Channel Landing Page Top Promo Carousel';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['title'] = 'TI AMG FW Channel Landing Page Top Promo Carousel';
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
  /* Filter criterion: Content: Featured Slideshows (field_clp_featured_slideshows) */
  $handler->display->display_options['filters']['field_clp_featured_slideshows_value']['id'] = 'field_clp_featured_slideshows_value';
  $handler->display->display_options['filters']['field_clp_featured_slideshows_value']['table'] = 'field_data_field_clp_featured_slideshows';
  $handler->display->display_options['filters']['field_clp_featured_slideshows_value']['field'] = 'field_clp_featured_slideshows_value';

  /* Display: Block */
  $handler = $view->new_display('block', 'Block', 'block');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['defaults']['css_class'] = FALSE;
  $handler->display->display_options['css_class'] = 'top-promo section';
  $handler->display->display_options['defaults']['pager'] = FALSE;
  $handler->display->display_options['pager']['type'] = 'none';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['defaults']['header'] = FALSE;
  /* Header: Global: Text area */
  $handler->display->display_options['header']['area']['id'] = 'area';
  $handler->display->display_options['header']['area']['table'] = 'views';
  $handler->display->display_options['header']['area']['field'] = 'area';
  $handler->display->display_options['header']['area']['content'] = '<h1 class="promo_blk_title">[field_image_1]</h1>';
  $handler->display->display_options['header']['area']['format'] = 'wysiwyg';
  $handler->display->display_options['header']['area']['tokenize'] = TRUE;
  $handler->display->display_options['defaults']['footer'] = FALSE;
  /* Footer: Global: Text area */
  $handler->display->display_options['footer']['area']['id'] = 'area';
  $handler->display->display_options['footer']['area']['table'] = 'views';
  $handler->display->display_options['footer']['area']['field'] = 'area';
  $handler->display->display_options['footer']['area']['content'] = '<div class="content-separator feature-separator design-separator"></div>';
  $handler->display->display_options['footer']['area']['format'] = 'wysiwyg';
  $handler->display->display_options['defaults']['relationships'] = FALSE;
  /* Relationship: Content: Promo (field_clp_promo) */
  $handler->display->display_options['relationships']['field_clp_promo_value']['id'] = 'field_clp_promo_value';
  $handler->display->display_options['relationships']['field_clp_promo_value']['table'] = 'field_data_field_clp_promo';
  $handler->display->display_options['relationships']['field_clp_promo_value']['field'] = 'field_clp_promo_value';
  $handler->display->display_options['relationships']['field_clp_promo_value']['delta'] = '-1';
  /* Relationship: Entity Reference: Referenced Entity */
  $handler->display->display_options['relationships']['field_clp_promo_image_target_id']['id'] = 'field_clp_promo_image_target_id';
  $handler->display->display_options['relationships']['field_clp_promo_image_target_id']['table'] = 'field_data_field_clp_promo_image';
  $handler->display->display_options['relationships']['field_clp_promo_image_target_id']['field'] = 'field_clp_promo_image_target_id';
  $handler->display->display_options['relationships']['field_clp_promo_image_target_id']['relationship'] = 'field_clp_promo_value';
  /* Relationship: Entity Reference: Referenced Entity */
  $handler->display->display_options['relationships']['field_clp_promo_title_image_target_id']['id'] = 'field_clp_promo_title_image_target_id';
  $handler->display->display_options['relationships']['field_clp_promo_title_image_target_id']['table'] = 'field_data_field_clp_promo_title_image';
  $handler->display->display_options['relationships']['field_clp_promo_title_image_target_id']['field'] = 'field_clp_promo_title_image_target_id';
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Global: View result counter */
  $handler->display->display_options['fields']['counter']['id'] = 'counter';
  $handler->display->display_options['fields']['counter']['table'] = 'views';
  $handler->display->display_options['fields']['counter']['field'] = 'counter';
  $handler->display->display_options['fields']['counter']['label'] = '';
  $handler->display->display_options['fields']['counter']['exclude'] = TRUE;
  $handler->display->display_options['fields']['counter']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['counter']['hide_empty'] = TRUE;
  $handler->display->display_options['fields']['counter']['counter_start'] = '1';
  /* Field: Content: Promo Block Title */
  $handler->display->display_options['fields']['field_clp_promo_block_title']['id'] = 'field_clp_promo_block_title';
  $handler->display->display_options['fields']['field_clp_promo_block_title']['table'] = 'field_data_field_clp_promo_block_title';
  $handler->display->display_options['fields']['field_clp_promo_block_title']['field'] = 'field_clp_promo_block_title';
  $handler->display->display_options['fields']['field_clp_promo_block_title']['label'] = '';
  $handler->display->display_options['fields']['field_clp_promo_block_title']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_clp_promo_block_title']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_clp_promo_block_title']['hide_empty'] = TRUE;
  /* Field: Content: Image */
  $handler->display->display_options['fields']['field_image_1']['id'] = 'field_image_1';
  $handler->display->display_options['fields']['field_image_1']['table'] = 'field_data_field_image';
  $handler->display->display_options['fields']['field_image_1']['field'] = 'field_image';
  $handler->display->display_options['fields']['field_image_1']['relationship'] = 'field_clp_promo_title_image_target_id';
  $handler->display->display_options['fields']['field_image_1']['label'] = '';
  $handler->display->display_options['fields']['field_image_1']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_image_1']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_image_1']['empty'] = '[field_clp_promo_block_title]';
  $handler->display->display_options['fields']['field_image_1']['hide_empty'] = TRUE;
  $handler->display->display_options['fields']['field_image_1']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_image_1']['settings'] = array(
    'image_style' => '',
    'image_link' => '',
  );
  /* Field: Field collection item: Title & URL */
  $handler->display->display_options['fields']['field_clp_promo_title_2']['id'] = 'field_clp_promo_title_2';
  $handler->display->display_options['fields']['field_clp_promo_title_2']['table'] = 'field_data_field_clp_promo_title';
  $handler->display->display_options['fields']['field_clp_promo_title_2']['field'] = 'field_clp_promo_title';
  $handler->display->display_options['fields']['field_clp_promo_title_2']['relationship'] = 'field_clp_promo_value';
  $handler->display->display_options['fields']['field_clp_promo_title_2']['label'] = '';
  $handler->display->display_options['fields']['field_clp_promo_title_2']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_clp_promo_title_2']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_clp_promo_title_2']['hide_empty'] = TRUE;
  $handler->display->display_options['fields']['field_clp_promo_title_2']['click_sort_column'] = 'url';
  $handler->display->display_options['fields']['field_clp_promo_title_2']['type'] = 'link_title_plain';
  /* Field: Field collection item: Title & URL */
  $handler->display->display_options['fields']['field_clp_promo_title_1']['id'] = 'field_clp_promo_title_1';
  $handler->display->display_options['fields']['field_clp_promo_title_1']['table'] = 'field_data_field_clp_promo_title';
  $handler->display->display_options['fields']['field_clp_promo_title_1']['field'] = 'field_clp_promo_title';
  $handler->display->display_options['fields']['field_clp_promo_title_1']['relationship'] = 'field_clp_promo_value';
  $handler->display->display_options['fields']['field_clp_promo_title_1']['label'] = '';
  $handler->display->display_options['fields']['field_clp_promo_title_1']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_clp_promo_title_1']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_clp_promo_title_1']['hide_empty'] = TRUE;
  $handler->display->display_options['fields']['field_clp_promo_title_1']['click_sort_column'] = 'url';
  $handler->display->display_options['fields']['field_clp_promo_title_1']['type'] = 'link_absolute';
  /* Field: Content: Image */
  $handler->display->display_options['fields']['field_image']['id'] = 'field_image';
  $handler->display->display_options['fields']['field_image']['table'] = 'field_data_field_image';
  $handler->display->display_options['fields']['field_image']['field'] = 'field_image';
  $handler->display->display_options['fields']['field_image']['relationship'] = 'field_clp_promo_image_target_id';
  $handler->display->display_options['fields']['field_image']['label'] = '';
  $handler->display->display_options['fields']['field_image']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_image']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_image']['hide_empty'] = TRUE;
  $handler->display->display_options['fields']['field_image']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_image']['settings'] = array(
    'image_style' => '',
    'image_link' => '',
  );
  /* Field: Field collection item: Image Caption */
  $handler->display->display_options['fields']['field_clp_promo_img_caption']['id'] = 'field_clp_promo_img_caption';
  $handler->display->display_options['fields']['field_clp_promo_img_caption']['table'] = 'field_data_field_clp_promo_img_caption';
  $handler->display->display_options['fields']['field_clp_promo_img_caption']['field'] = 'field_clp_promo_img_caption';
  $handler->display->display_options['fields']['field_clp_promo_img_caption']['relationship'] = 'field_clp_promo_value';
  $handler->display->display_options['fields']['field_clp_promo_img_caption']['label'] = '';
  $handler->display->display_options['fields']['field_clp_promo_img_caption']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_clp_promo_img_caption']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_clp_promo_img_caption']['hide_empty'] = TRUE;
  /* Field: Global: Custom text */
  $handler->display->display_options['fields']['nothing']['id'] = 'nothing';
  $handler->display->display_options['fields']['nothing']['table'] = 'views';
  $handler->display->display_options['fields']['nothing']['field'] = 'nothing';
  $handler->display->display_options['fields']['nothing']['label'] = '';
  $handler->display->display_options['fields']['nothing']['alter']['text'] = '<div class="preview">
<div class="frame frame[counter]"><a title="[field_clp_promo_title_2]" href="[field_clp_promo_title_1]">[field_image]</a></div>
<div class="caption frame[counter]"><a title="[field_clp_promo_title_2]" href="[field_clp_promo_title_1]">[field_clp_promo_img_caption]</a></div>

</div>';
  $handler->display->display_options['fields']['nothing']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['nothing']['hide_empty'] = TRUE;
  $handler->display->display_options['fields']['nothing']['hide_alter_empty'] = TRUE;
  /* Field: Field collection item: Title & URL */
  $handler->display->display_options['fields']['field_clp_promo_title']['id'] = 'field_clp_promo_title';
  $handler->display->display_options['fields']['field_clp_promo_title']['table'] = 'field_data_field_clp_promo_title';
  $handler->display->display_options['fields']['field_clp_promo_title']['field'] = 'field_clp_promo_title';
  $handler->display->display_options['fields']['field_clp_promo_title']['relationship'] = 'field_clp_promo_value';
  $handler->display->display_options['fields']['field_clp_promo_title']['label'] = '';
  $handler->display->display_options['fields']['field_clp_promo_title']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_clp_promo_title']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_clp_promo_title']['hide_empty'] = TRUE;
  $handler->display->display_options['fields']['field_clp_promo_title']['click_sort_column'] = 'url';
  /* Field: Field collection item: Deck */
  $handler->display->display_options['fields']['field_clp_promo_deck']['id'] = 'field_clp_promo_deck';
  $handler->display->display_options['fields']['field_clp_promo_deck']['table'] = 'field_data_field_clp_promo_deck';
  $handler->display->display_options['fields']['field_clp_promo_deck']['field'] = 'field_clp_promo_deck';
  $handler->display->display_options['fields']['field_clp_promo_deck']['relationship'] = 'field_clp_promo_value';
  $handler->display->display_options['fields']['field_clp_promo_deck']['label'] = '';
  $handler->display->display_options['fields']['field_clp_promo_deck']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_clp_promo_deck']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_clp_promo_deck']['hide_empty'] = TRUE;
  /* Field: Global: Custom text */
  $handler->display->display_options['fields']['nothing_1']['id'] = 'nothing_1';
  $handler->display->display_options['fields']['nothing_1']['table'] = 'views';
  $handler->display->display_options['fields']['nothing_1']['field'] = 'nothing';
  $handler->display->display_options['fields']['nothing_1']['label'] = '';
  $handler->display->display_options['fields']['nothing_1']['alter']['text'] = '<div class="features">

     <div class="feature frame[counter]" data-frame="[counter]">
<img src="/sites/all/themes/foodandwine/images/feature_pointer.png" class="pointer"/>
<h2 class="theme"><a title="[field_clp_promo_title_2]" href="[field_clp_promo_title_1]">[field_clp_promo_title_2]</a></h2><div class="promo-deck-description">[field_clp_promo_deck]</div></div>
</div>';
  $handler->display->display_options['fields']['nothing_1']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['nothing_1']['hide_empty'] = TRUE;
  $handler->display->display_options['fields']['nothing_1']['hide_alter_empty'] = TRUE;
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
  $handler->display->display_options['arguments']['nid']['specify_validation'] = TRUE;
  $handler->display->display_options['arguments']['nid']['validate']['type'] = 'node';
  $handler->display->display_options['arguments']['nid']['validate_options']['types'] = array(
    'channel_landing_page' => 'channel_landing_page',
  );
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
    'channel_landing_page' => 'channel_landing_page',
  );
  /* Filter criterion: Content: Promo (field_clp_promo) */
  $handler->display->display_options['filters']['field_clp_promo_value']['id'] = 'field_clp_promo_value';
  $handler->display->display_options['filters']['field_clp_promo_value']['table'] = 'field_data_field_clp_promo';
  $handler->display->display_options['filters']['field_clp_promo_value']['field'] = 'field_clp_promo_value';
  $handler->display->display_options['filters']['field_clp_promo_value']['operator'] = 'not empty';
  $handler->display->display_options['block_description'] = 'TI AMG FW Channel Landing Page Top Promo Carousel';
  $export['ti_amg_fw_channel_landing_page_top_promo_carousel'] = $view;

  $view = new view();
  $view->name = 'ti_amg_fw_channel_landing_recipes_directory';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'node';
  $view->human_name = 'TI AMG FW Channel Landing Recipes Directory';
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
    'channel_landing_page' => 'channel_landing_page',
  );

  /* Display: Recipes Directory */
  $handler = $view->new_display('block', 'Recipes Directory', 'block');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['defaults']['header'] = FALSE;
  /* Header: Global: Text area */
  $handler->display->display_options['header']['area']['id'] = 'area';
  $handler->display->display_options['header']['area']['table'] = 'views';
  $handler->display->display_options['header']['area']['field'] = 'area';
  $handler->display->display_options['header']['area']['content'] = '<img id="browse-recipes" src="/sites/all/themes/foodandwine/images/hd_recipes_directory.png" class="directory-title" alt="Recipes Directory">';
  $handler->display->display_options['header']['area']['format'] = 'wysiwyg';
  $handler->display->display_options['defaults']['relationships'] = FALSE;
  /* Relationship: Content: Recipes Directory (field_clp_recipes_directory) */
  $handler->display->display_options['relationships']['field_clp_recipes_directory_value']['id'] = 'field_clp_recipes_directory_value';
  $handler->display->display_options['relationships']['field_clp_recipes_directory_value']['table'] = 'field_data_field_clp_recipes_directory';
  $handler->display->display_options['relationships']['field_clp_recipes_directory_value']['field'] = 'field_clp_recipes_directory_value';
  $handler->display->display_options['relationships']['field_clp_recipes_directory_value']['delta'] = '-1';
  /* Relationship: Entity Reference: Referenced Entity */
  $handler->display->display_options['relationships']['field_clp_rd_image_target_id']['id'] = 'field_clp_rd_image_target_id';
  $handler->display->display_options['relationships']['field_clp_rd_image_target_id']['table'] = 'field_data_field_clp_rd_image';
  $handler->display->display_options['relationships']['field_clp_rd_image_target_id']['field'] = 'field_clp_rd_image_target_id';
  $handler->display->display_options['relationships']['field_clp_rd_image_target_id']['relationship'] = 'field_clp_recipes_directory_value';
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Content: Caption */
  $handler->display->display_options['fields']['field_caption']['id'] = 'field_caption';
  $handler->display->display_options['fields']['field_caption']['table'] = 'field_data_field_caption';
  $handler->display->display_options['fields']['field_caption']['field'] = 'field_caption';
  $handler->display->display_options['fields']['field_caption']['relationship'] = 'field_clp_rd_image_target_id';
  $handler->display->display_options['fields']['field_caption']['label'] = '';
  $handler->display->display_options['fields']['field_caption']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_caption']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_caption']['hide_empty'] = TRUE;
  $handler->display->display_options['fields']['field_caption']['type'] = 'text_plain';
  /* Field: Field collection item: Directory Image URL */
  $handler->display->display_options['fields']['field_clp_rd_image_url']['id'] = 'field_clp_rd_image_url';
  $handler->display->display_options['fields']['field_clp_rd_image_url']['table'] = 'field_data_field_clp_rd_image_url';
  $handler->display->display_options['fields']['field_clp_rd_image_url']['field'] = 'field_clp_rd_image_url';
  $handler->display->display_options['fields']['field_clp_rd_image_url']['relationship'] = 'field_clp_recipes_directory_value';
  $handler->display->display_options['fields']['field_clp_rd_image_url']['label'] = '';
  $handler->display->display_options['fields']['field_clp_rd_image_url']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_clp_rd_image_url']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_clp_rd_image_url']['hide_empty'] = TRUE;
  $handler->display->display_options['fields']['field_clp_rd_image_url']['click_sort_column'] = 'url';
  $handler->display->display_options['fields']['field_clp_rd_image_url']['type'] = 'link_plain';
  /* Field: Content: Image */
  $handler->display->display_options['fields']['field_image']['id'] = 'field_image';
  $handler->display->display_options['fields']['field_image']['table'] = 'field_data_field_image';
  $handler->display->display_options['fields']['field_image']['field'] = 'field_image';
  $handler->display->display_options['fields']['field_image']['relationship'] = 'field_clp_rd_image_target_id';
  $handler->display->display_options['fields']['field_image']['label'] = '';
  $handler->display->display_options['fields']['field_image']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['field_image']['alter']['text'] = '<a href="[field_clp_rd_image_url]" title="[field_caption]">[field_image]</a>';
  $handler->display->display_options['fields']['field_image']['alter']['path'] = '[field_clp_rd_image_url]';
  $handler->display->display_options['fields']['field_image']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_image']['hide_empty'] = TRUE;
  $handler->display->display_options['fields']['field_image']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_image']['settings'] = array(
    'image_style' => '',
    'image_link' => '',
  );
  /* Field: Field collection item: Directory Title */
  $handler->display->display_options['fields']['field_clp_rd_title']['id'] = 'field_clp_rd_title';
  $handler->display->display_options['fields']['field_clp_rd_title']['table'] = 'field_data_field_clp_rd_title';
  $handler->display->display_options['fields']['field_clp_rd_title']['field'] = 'field_clp_rd_title';
  $handler->display->display_options['fields']['field_clp_rd_title']['relationship'] = 'field_clp_recipes_directory_value';
  $handler->display->display_options['fields']['field_clp_rd_title']['label'] = '';
  $handler->display->display_options['fields']['field_clp_rd_title']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_clp_rd_title']['hide_empty'] = TRUE;
  /* Field: Field collection item: Directory Link */
  $handler->display->display_options['fields']['field_clp_rd_link']['id'] = 'field_clp_rd_link';
  $handler->display->display_options['fields']['field_clp_rd_link']['table'] = 'field_data_field_clp_rd_link';
  $handler->display->display_options['fields']['field_clp_rd_link']['field'] = 'field_clp_rd_link';
  $handler->display->display_options['fields']['field_clp_rd_link']['relationship'] = 'field_clp_recipes_directory_value';
  $handler->display->display_options['fields']['field_clp_rd_link']['label'] = '';
  $handler->display->display_options['fields']['field_clp_rd_link']['alter']['text'] = '<a href="[field_clp_rd_link-url]" title="[field_clp_rd_link-title]">[field_clp_rd_link-title]</a>
';
  $handler->display->display_options['fields']['field_clp_rd_link']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_clp_rd_link']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['field_clp_rd_link']['hide_empty'] = TRUE;
  $handler->display->display_options['fields']['field_clp_rd_link']['click_sort_column'] = 'url';
  $handler->display->display_options['fields']['field_clp_rd_link']['delta_offset'] = '0';
  $handler->display->display_options['fields']['field_clp_rd_link']['multi_type'] = 'ul';
  $handler->display->display_options['fields']['field_clp_rd_link']['field_api_classes'] = TRUE;
  /* Field: Field collection item: More Link */
  $handler->display->display_options['fields']['field_clp_more_link']['id'] = 'field_clp_more_link';
  $handler->display->display_options['fields']['field_clp_more_link']['table'] = 'field_data_field_clp_more_link';
  $handler->display->display_options['fields']['field_clp_more_link']['field'] = 'field_clp_more_link';
  $handler->display->display_options['fields']['field_clp_more_link']['relationship'] = 'field_clp_recipes_directory_value';
  $handler->display->display_options['fields']['field_clp_more_link']['label'] = '';
  $handler->display->display_options['fields']['field_clp_more_link']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_clp_more_link']['hide_empty'] = TRUE;
  $handler->display->display_options['fields']['field_clp_more_link']['click_sort_column'] = 'url';
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
    'channel_landing_page' => 'channel_landing_page',
  );
  /* Filter criterion: Content: Recipes Directory (field_clp_recipes_directory) */
  $handler->display->display_options['filters']['field_clp_recipes_directory_value']['id'] = 'field_clp_recipes_directory_value';
  $handler->display->display_options['filters']['field_clp_recipes_directory_value']['table'] = 'field_data_field_clp_recipes_directory';
  $handler->display->display_options['filters']['field_clp_recipes_directory_value']['field'] = 'field_clp_recipes_directory_value';
  $handler->display->display_options['filters']['field_clp_recipes_directory_value']['operator'] = 'not empty';
  $handler->display->display_options['block_description'] = 'Recipes Directory';

  /* Display: CLP Featured Directory */
  $handler = $view->new_display('block', 'CLP Featured Directory', 'block_1');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['defaults']['header'] = FALSE;
  /* Header: Global: Text area */
  $handler->display->display_options['header']['area']['id'] = 'area';
  $handler->display->display_options['header']['area']['table'] = 'views';
  $handler->display->display_options['header']['area']['field'] = 'area';
  $handler->display->display_options['header']['area']['content'] = '<img id="browse-recipes" src="/sites/all/themes/foodandwine/images/hd_recipes_directory.png" class="directory-title" alt="Recipes Directory">';
  $handler->display->display_options['header']['area']['format'] = 'wysiwyg';
  $handler->display->display_options['defaults']['relationships'] = FALSE;
  /* Relationship: Entity Reference: Referenced Entity */
  $handler->display->display_options['relationships']['field_fd_reference_target_id']['id'] = 'field_fd_reference_target_id';
  $handler->display->display_options['relationships']['field_fd_reference_target_id']['table'] = 'field_data_field_fd_reference';
  $handler->display->display_options['relationships']['field_fd_reference_target_id']['field'] = 'field_fd_reference_target_id';
  /* Relationship: Content: Featured Directory (field_featured_directory) */
  $handler->display->display_options['relationships']['field_featured_directory_value']['id'] = 'field_featured_directory_value';
  $handler->display->display_options['relationships']['field_featured_directory_value']['table'] = 'field_data_field_featured_directory';
  $handler->display->display_options['relationships']['field_featured_directory_value']['field'] = 'field_featured_directory_value';
  $handler->display->display_options['relationships']['field_featured_directory_value']['relationship'] = 'field_fd_reference_target_id';
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
  $handler->display->display_options['fields']['field_image']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_image']['settings'] = array(
    'image_style' => '',
    'image_link' => '',
  );
  /* Field: Field: Headline Title */
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
  /* Field: Field: More Link */
  $handler->display->display_options['fields']['field_more_link']['id'] = 'field_more_link';
  $handler->display->display_options['fields']['field_more_link']['table'] = 'field_data_field_more_link';
  $handler->display->display_options['fields']['field_more_link']['field'] = 'field_more_link';
  $handler->display->display_options['fields']['field_more_link']['relationship'] = 'field_featured_directory_value';
  $handler->display->display_options['fields']['field_more_link']['label'] = '';
  $handler->display->display_options['fields']['field_more_link']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_more_link']['hide_empty'] = TRUE;
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
    'channel_landing_page' => 'channel_landing_page',
  );
  /* Filter criterion: Content: Featured Directory (field_fd_reference) */
  $handler->display->display_options['filters']['field_fd_reference_target_id']['id'] = 'field_fd_reference_target_id';
  $handler->display->display_options['filters']['field_fd_reference_target_id']['table'] = 'field_data_field_fd_reference';
  $handler->display->display_options['filters']['field_fd_reference_target_id']['field'] = 'field_fd_reference_target_id';
  $handler->display->display_options['filters']['field_fd_reference_target_id']['operator'] = 'not empty';
  $handler->display->display_options['block_description'] = 'CLP Featured Directory';
  $export['ti_amg_fw_channel_landing_recipes_directory'] = $view;

  return $export;
}
