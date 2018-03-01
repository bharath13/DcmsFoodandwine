<?php
/**
 * @file
 * ti_amg_fw_homepage_views.views_default.inc
 */

/**
 * Implements hook_views_default_views().
 */
function ti_amg_fw_homepage_views_views_default_views() {
  $export = array();

  $view = new view();
  $view->name = 'ti_amg_fw_homepage_blocks';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'node';
  $view->human_name = 'TI AMG FW Homepage Blocks';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['css_class'] = 'editor-picks-container';
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
  /* Filter criterion: Content: Published */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = 1;
  $handler->display->display_options['filters']['status']['group'] = 1;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;

  /* Display: Editor Picks */
  $handler = $view->new_display('block', 'Editor Picks', 'block');
  $handler->display->display_options['defaults']['css_class'] = FALSE;
  $handler->display->display_options['css_class'] = 'editor-picks-container';
  $handler->display->display_options['defaults']['pager'] = FALSE;
  $handler->display->display_options['pager']['type'] = 'some';
  $handler->display->display_options['pager']['options']['items_per_page'] = '3';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['defaults']['header'] = FALSE;
  /* Header: Global: Text area */
  $handler->display->display_options['header']['area']['id'] = 'area';
  $handler->display->display_options['header']['area']['table'] = 'views';
  $handler->display->display_options['header']['area']['field'] = 'area';
  $handler->display->display_options['header']['area']['content'] = '<h2>[field_hp_editor_picks_header]</h2>';
  $handler->display->display_options['header']['area']['format'] = 'wysiwyg';
  $handler->display->display_options['header']['area']['tokenize'] = TRUE;
  $handler->display->display_options['defaults']['relationships'] = FALSE;
  /* Relationship: Content: Editor Picks (field_hp_editor_picks) */
  $handler->display->display_options['relationships']['field_hp_editor_picks_value']['id'] = 'field_hp_editor_picks_value';
  $handler->display->display_options['relationships']['field_hp_editor_picks_value']['table'] = 'field_data_field_hp_editor_picks';
  $handler->display->display_options['relationships']['field_hp_editor_picks_value']['field'] = 'field_hp_editor_picks_value';
  $handler->display->display_options['relationships']['field_hp_editor_picks_value']['delta'] = '-1';
  /* Relationship: Entity Reference: Referenced Entity */
  $handler->display->display_options['relationships']['field_editor_pick_image_target_id']['id'] = 'field_editor_pick_image_target_id';
  $handler->display->display_options['relationships']['field_editor_pick_image_target_id']['table'] = 'field_data_field_editor_pick_image';
  $handler->display->display_options['relationships']['field_editor_pick_image_target_id']['field'] = 'field_editor_pick_image_target_id';
  $handler->display->display_options['relationships']['field_editor_pick_image_target_id']['relationship'] = 'field_hp_editor_picks_value';
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Content: Editor Picks Header */
  $handler->display->display_options['fields']['field_hp_editor_picks_header']['id'] = 'field_hp_editor_picks_header';
  $handler->display->display_options['fields']['field_hp_editor_picks_header']['table'] = 'field_data_field_hp_editor_picks_header';
  $handler->display->display_options['fields']['field_hp_editor_picks_header']['field'] = 'field_hp_editor_picks_header';
  $handler->display->display_options['fields']['field_hp_editor_picks_header']['label'] = '';
  $handler->display->display_options['fields']['field_hp_editor_picks_header']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_hp_editor_picks_header']['alter']['text'] = '[field_hp_editor_picks_header-url]';
  $handler->display->display_options['fields']['field_hp_editor_picks_header']['element_type'] = '0';
  $handler->display->display_options['fields']['field_hp_editor_picks_header']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_hp_editor_picks_header']['element_wrapper_type'] = '0';
  $handler->display->display_options['fields']['field_hp_editor_picks_header']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['field_hp_editor_picks_header']['click_sort_column'] = 'url';
  $handler->display->display_options['fields']['field_hp_editor_picks_header']['field_api_classes'] = TRUE;
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['relationship'] = 'field_editor_pick_image_target_id';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['exclude'] = TRUE;
  $handler->display->display_options['fields']['title']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['title']['link_to_node'] = FALSE;
  /* Field: Field collection item: Editor Pick */
  $handler->display->display_options['fields']['field_editor_pick_title_1']['id'] = 'field_editor_pick_title_1';
  $handler->display->display_options['fields']['field_editor_pick_title_1']['table'] = 'field_data_field_editor_pick_title';
  $handler->display->display_options['fields']['field_editor_pick_title_1']['field'] = 'field_editor_pick_title';
  $handler->display->display_options['fields']['field_editor_pick_title_1']['relationship'] = 'field_hp_editor_picks_value';
  $handler->display->display_options['fields']['field_editor_pick_title_1']['label'] = '';
  $handler->display->display_options['fields']['field_editor_pick_title_1']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_editor_pick_title_1']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_editor_pick_title_1']['click_sort_column'] = 'url';
  $handler->display->display_options['fields']['field_editor_pick_title_1']['type'] = 'link_plain';
  /* Field: Content: Image */
  $handler->display->display_options['fields']['field_image']['id'] = 'field_image';
  $handler->display->display_options['fields']['field_image']['table'] = 'field_data_field_image';
  $handler->display->display_options['fields']['field_image']['field'] = 'field_image';
  $handler->display->display_options['fields']['field_image']['relationship'] = 'field_editor_pick_image_target_id';
  $handler->display->display_options['fields']['field_image']['label'] = '';
  $handler->display->display_options['fields']['field_image']['alter']['text'] = '<a href="[field_editor_pick_title_1]">[field_image]</a>';
  $handler->display->display_options['fields']['field_image']['alter']['make_link'] = TRUE;
  $handler->display->display_options['fields']['field_image']['alter']['path'] = '[field_editor_pick_title_1]';
  $handler->display->display_options['fields']['field_image']['alter']['alt'] = '[title]';
  $handler->display->display_options['fields']['field_image']['element_type'] = '0';
  $handler->display->display_options['fields']['field_image']['element_class'] = 'editor-pick-column-image';
  $handler->display->display_options['fields']['field_image']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_image']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_image']['settings'] = array(
    'image_style' => '',
    'image_link' => '',
  );
  /* Field: Field collection item: Editor Pick */
  $handler->display->display_options['fields']['field_editor_pick_title']['id'] = 'field_editor_pick_title';
  $handler->display->display_options['fields']['field_editor_pick_title']['table'] = 'field_data_field_editor_pick_title';
  $handler->display->display_options['fields']['field_editor_pick_title']['field'] = 'field_editor_pick_title';
  $handler->display->display_options['fields']['field_editor_pick_title']['relationship'] = 'field_hp_editor_picks_value';
  $handler->display->display_options['fields']['field_editor_pick_title']['label'] = '';
  $handler->display->display_options['fields']['field_editor_pick_title']['alter']['text'] = '<div class="editor-pick-column-title">
<a href="http://www.facebook.com">Video: Chefs in Conversation</a>
</div>';
  $handler->display->display_options['fields']['field_editor_pick_title']['alter']['make_link'] = TRUE;
  $handler->display->display_options['fields']['field_editor_pick_title']['alter']['path'] = '[field_editor_pick_title_1]';
  $handler->display->display_options['fields']['field_editor_pick_title']['alter']['alt'] = '[title]';
  $handler->display->display_options['fields']['field_editor_pick_title']['element_type'] = '0';
  $handler->display->display_options['fields']['field_editor_pick_title']['element_class'] = 'editor-pick-column-title';
  $handler->display->display_options['fields']['field_editor_pick_title']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_editor_pick_title']['element_wrapper_type'] = '0';
  $handler->display->display_options['fields']['field_editor_pick_title']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['field_editor_pick_title']['click_sort_column'] = 'url';
  $handler->display->display_options['fields']['field_editor_pick_title']['type'] = 'link_title_plain';
  $handler->display->display_options['fields']['field_editor_pick_title']['field_api_classes'] = TRUE;
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
    'home_page' => 'home_page',
  );
  $handler->display->display_options['block_description'] = 'TI AMG FW Homepage Editor Picks';
  $handler->display->display_options['block_caching'] = '4';

  /* Display: Mad Genious Tips */
  $handler = $view->new_display('block', 'Mad Genious Tips', 'block_1');
  $handler->display->display_options['defaults']['css_class'] = FALSE;
  $handler->display->display_options['css_class'] = 'mad-genius-tips';
  $handler->display->display_options['defaults']['pager'] = FALSE;
  $handler->display->display_options['pager']['type'] = 'some';
  $handler->display->display_options['pager']['options']['items_per_page'] = '8';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'default';
  $handler->display->display_options['style_options']['row_class'] = 'recipe-guide-post';
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['row_plugin'] = 'fields';
  $handler->display->display_options['defaults']['row_options'] = FALSE;
  $handler->display->display_options['defaults']['header'] = FALSE;
  /* Header: Global: Text area */
  $handler->display->display_options['header']['area']['id'] = 'area';
  $handler->display->display_options['header']['area']['table'] = 'views';
  $handler->display->display_options['header']['area']['field'] = 'area';
  $handler->display->display_options['header']['area']['content'] = '<h2>[field_hp_mad_genious_tips_header]</h2>';
  $handler->display->display_options['header']['area']['format'] = 'wysiwyg';
  $handler->display->display_options['header']['area']['tokenize'] = TRUE;
  $handler->display->display_options['defaults']['relationships'] = FALSE;
  /* Relationship: Content: Mad Genious Tips  (field_hp_mad_genious_tips) */
  $handler->display->display_options['relationships']['field_hp_mad_genious_tips_value']['id'] = 'field_hp_mad_genious_tips_value';
  $handler->display->display_options['relationships']['field_hp_mad_genious_tips_value']['table'] = 'field_data_field_hp_mad_genious_tips';
  $handler->display->display_options['relationships']['field_hp_mad_genious_tips_value']['field'] = 'field_hp_mad_genious_tips_value';
  $handler->display->display_options['relationships']['field_hp_mad_genious_tips_value']['delta'] = '-1';
  /* Relationship: Entity Reference: Referenced Entity */
  $handler->display->display_options['relationships']['field_mad_genious_tip_image_target_id']['id'] = 'field_mad_genious_tip_image_target_id';
  $handler->display->display_options['relationships']['field_mad_genious_tip_image_target_id']['table'] = 'field_data_field_mad_genious_tip_image';
  $handler->display->display_options['relationships']['field_mad_genious_tip_image_target_id']['field'] = 'field_mad_genious_tip_image_target_id';
  $handler->display->display_options['relationships']['field_mad_genious_tip_image_target_id']['relationship'] = 'field_hp_mad_genious_tips_value';
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Content: Mad Genious Tip Header */
  $handler->display->display_options['fields']['field_hp_mad_genious_tips_header']['id'] = 'field_hp_mad_genious_tips_header';
  $handler->display->display_options['fields']['field_hp_mad_genious_tips_header']['table'] = 'field_data_field_hp_mad_genious_tips_header';
  $handler->display->display_options['fields']['field_hp_mad_genious_tips_header']['field'] = 'field_hp_mad_genious_tips_header';
  $handler->display->display_options['fields']['field_hp_mad_genious_tips_header']['label'] = '';
  $handler->display->display_options['fields']['field_hp_mad_genious_tips_header']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_hp_mad_genious_tips_header']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_hp_mad_genious_tips_header']['click_sort_column'] = 'url';
  /* Field: Field collection item: Mad Genious Tip */
  $handler->display->display_options['fields']['field_mad_genious_tip_title_1']['id'] = 'field_mad_genious_tip_title_1';
  $handler->display->display_options['fields']['field_mad_genious_tip_title_1']['table'] = 'field_data_field_mad_genious_tip_title';
  $handler->display->display_options['fields']['field_mad_genious_tip_title_1']['field'] = 'field_mad_genious_tip_title';
  $handler->display->display_options['fields']['field_mad_genious_tip_title_1']['relationship'] = 'field_hp_mad_genious_tips_value';
  $handler->display->display_options['fields']['field_mad_genious_tip_title_1']['label'] = '';
  $handler->display->display_options['fields']['field_mad_genious_tip_title_1']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_mad_genious_tip_title_1']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_mad_genious_tip_title_1']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['field_mad_genious_tip_title_1']['click_sort_column'] = 'url';
  $handler->display->display_options['fields']['field_mad_genious_tip_title_1']['type'] = 'link_plain';
  /* Field: Field collection item: Mad Genious Tip */
  $handler->display->display_options['fields']['field_mad_genious_tip_title_2']['id'] = 'field_mad_genious_tip_title_2';
  $handler->display->display_options['fields']['field_mad_genious_tip_title_2']['table'] = 'field_data_field_mad_genious_tip_title';
  $handler->display->display_options['fields']['field_mad_genious_tip_title_2']['field'] = 'field_mad_genious_tip_title';
  $handler->display->display_options['fields']['field_mad_genious_tip_title_2']['relationship'] = 'field_hp_mad_genious_tips_value';
  $handler->display->display_options['fields']['field_mad_genious_tip_title_2']['label'] = '';
  $handler->display->display_options['fields']['field_mad_genious_tip_title_2']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_mad_genious_tip_title_2']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_mad_genious_tip_title_2']['click_sort_column'] = 'url';
  $handler->display->display_options['fields']['field_mad_genious_tip_title_2']['type'] = 'link_title_plain';
  /* Field: Content: Image */
  $handler->display->display_options['fields']['field_image']['id'] = 'field_image';
  $handler->display->display_options['fields']['field_image']['table'] = 'field_data_field_image';
  $handler->display->display_options['fields']['field_image']['field'] = 'field_image';
  $handler->display->display_options['fields']['field_image']['relationship'] = 'field_mad_genious_tip_image_target_id';
  $handler->display->display_options['fields']['field_image']['label'] = '';
  $handler->display->display_options['fields']['field_image']['alter']['make_link'] = TRUE;
  $handler->display->display_options['fields']['field_image']['alter']['path'] = '[field_mad_genious_tip_title_1]';
  $handler->display->display_options['fields']['field_image']['alter']['alt'] = '[field_mad_genious_tip_title_2]';
  $handler->display->display_options['fields']['field_image']['alter']['link_class'] = 'mad-genious-tips-column-image';
  $handler->display->display_options['fields']['field_image']['element_type'] = '0';
  $handler->display->display_options['fields']['field_image']['element_class'] = 'mad-genious-tips-column-image';
  $handler->display->display_options['fields']['field_image']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_image']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_image']['settings'] = array(
    'image_style' => '',
    'image_link' => '',
  );
  /* Field: Field collection item: Mad Genious Tip */
  $handler->display->display_options['fields']['field_mad_genious_tip_title']['id'] = 'field_mad_genious_tip_title';
  $handler->display->display_options['fields']['field_mad_genious_tip_title']['table'] = 'field_data_field_mad_genious_tip_title';
  $handler->display->display_options['fields']['field_mad_genious_tip_title']['field'] = 'field_mad_genious_tip_title';
  $handler->display->display_options['fields']['field_mad_genious_tip_title']['relationship'] = 'field_hp_mad_genious_tips_value';
  $handler->display->display_options['fields']['field_mad_genious_tip_title']['label'] = '';
  $handler->display->display_options['fields']['field_mad_genious_tip_title']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['field_mad_genious_tip_title']['alter']['text'] = '<div class="mad-genious-tips-column-title">
<h4><a href=\'[field_mad_genious_tip_title_1]\' title=\'[field_mad_genious_tip_title_2]\'>[field_mad_genious_tip_title_2]</a></h4>
</div>';
  $handler->display->display_options['fields']['field_mad_genious_tip_title']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_mad_genious_tip_title']['click_sort_column'] = 'url';
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
    'home_page' => 'home_page',
  );
  $handler->display->display_options['block_description'] = 'TI AMG FW Homepage Mad Genious Tips';
  $handler->display->display_options['block_caching'] = '4';

  /* Display: TI AMG FW Homepage */
  $handler = $view->new_display('page', 'TI AMG FW Homepage', 'page_1');
  $handler->display->display_options['defaults']['css_class'] = FALSE;
  $handler->display->display_options['css_class'] = 'recipe-guides';
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'default';
  $handler->display->display_options['style_options']['row_class'] = 'recipe-guides';
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['row_plugin'] = 'fields';
  $handler->display->display_options['defaults']['row_options'] = FALSE;
  $handler->display->display_options['defaults']['header'] = FALSE;
  /* Header: Global: Text area */
  $handler->display->display_options['header']['area']['id'] = 'area';
  $handler->display->display_options['header']['area']['table'] = 'views';
  $handler->display->display_options['header']['area']['field'] = 'area';
  $handler->display->display_options['header']['area']['content'] = '<h2>[field_hp_recipe_guides_header]</h2>';
  $handler->display->display_options['header']['area']['format'] = 'wysiwyg';
  $handler->display->display_options['header']['area']['tokenize'] = TRUE;
  $handler->display->display_options['defaults']['footer'] = FALSE;
  /* Footer: Global: Text area */
  $handler->display->display_options['footer']['area']['id'] = 'area';
  $handler->display->display_options['footer']['area']['table'] = 'views';
  $handler->display->display_options['footer']['area']['field'] = 'area';
  $handler->display->display_options['footer']['area']['content'] = '<div class="button-container">
<a title="see more" href="/recipe-finder" class="black-button">
see all in recipe directory
</a>
</div>';
  $handler->display->display_options['footer']['area']['format'] = 'wysiwyg';
  $handler->display->display_options['defaults']['relationships'] = FALSE;
  /* Relationship: Content: Recipe Guides (field_hp_recipe_guides) */
  $handler->display->display_options['relationships']['field_hp_recipe_guides_value']['id'] = 'field_hp_recipe_guides_value';
  $handler->display->display_options['relationships']['field_hp_recipe_guides_value']['table'] = 'field_data_field_hp_recipe_guides';
  $handler->display->display_options['relationships']['field_hp_recipe_guides_value']['field'] = 'field_hp_recipe_guides_value';
  $handler->display->display_options['relationships']['field_hp_recipe_guides_value']['delta'] = '-1';
  /* Relationship: Entity Reference: Referenced Entity */
  $handler->display->display_options['relationships']['field_recipe_guide_image_target_id']['id'] = 'field_recipe_guide_image_target_id';
  $handler->display->display_options['relationships']['field_recipe_guide_image_target_id']['table'] = 'field_data_field_recipe_guide_image';
  $handler->display->display_options['relationships']['field_recipe_guide_image_target_id']['field'] = 'field_recipe_guide_image_target_id';
  $handler->display->display_options['relationships']['field_recipe_guide_image_target_id']['relationship'] = 'field_hp_recipe_guides_value';
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Content: Recipe Guides Header */
  $handler->display->display_options['fields']['field_hp_recipe_guides_header']['id'] = 'field_hp_recipe_guides_header';
  $handler->display->display_options['fields']['field_hp_recipe_guides_header']['table'] = 'field_data_field_hp_recipe_guides_header';
  $handler->display->display_options['fields']['field_hp_recipe_guides_header']['field'] = 'field_hp_recipe_guides_header';
  $handler->display->display_options['fields']['field_hp_recipe_guides_header']['label'] = '';
  $handler->display->display_options['fields']['field_hp_recipe_guides_header']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_hp_recipe_guides_header']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_hp_recipe_guides_header']['click_sort_column'] = 'url';
  /* Field: Field collection item: Recipe Guide */
  $handler->display->display_options['fields']['field_recipe_guide_title_1']['id'] = 'field_recipe_guide_title_1';
  $handler->display->display_options['fields']['field_recipe_guide_title_1']['table'] = 'field_data_field_recipe_guide_title';
  $handler->display->display_options['fields']['field_recipe_guide_title_1']['field'] = 'field_recipe_guide_title';
  $handler->display->display_options['fields']['field_recipe_guide_title_1']['relationship'] = 'field_hp_recipe_guides_value';
  $handler->display->display_options['fields']['field_recipe_guide_title_1']['label'] = '';
  $handler->display->display_options['fields']['field_recipe_guide_title_1']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_recipe_guide_title_1']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_recipe_guide_title_1']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['field_recipe_guide_title_1']['click_sort_column'] = 'url';
  $handler->display->display_options['fields']['field_recipe_guide_title_1']['type'] = 'link_plain';
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['relationship'] = 'field_recipe_guide_image_target_id';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['exclude'] = TRUE;
  $handler->display->display_options['fields']['title']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['title']['link_to_node'] = FALSE;
  /* Field: Content: Image */
  $handler->display->display_options['fields']['field_image']['id'] = 'field_image';
  $handler->display->display_options['fields']['field_image']['table'] = 'field_data_field_image';
  $handler->display->display_options['fields']['field_image']['field'] = 'field_image';
  $handler->display->display_options['fields']['field_image']['relationship'] = 'field_recipe_guide_image_target_id';
  $handler->display->display_options['fields']['field_image']['label'] = '';
  $handler->display->display_options['fields']['field_image']['alter']['make_link'] = TRUE;
  $handler->display->display_options['fields']['field_image']['alter']['path'] = '[field_recipe_guide_title_1]';
  $handler->display->display_options['fields']['field_image']['alter']['alt'] = '[title]';
  $handler->display->display_options['fields']['field_image']['element_class'] = 'recipe-guide-column-image';
  $handler->display->display_options['fields']['field_image']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_image']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_image']['settings'] = array(
    'image_style' => '',
    'image_link' => '',
  );
  /* Field: Field collection item: Recipe Guide */
  $handler->display->display_options['fields']['field_recipe_guide_title']['id'] = 'field_recipe_guide_title';
  $handler->display->display_options['fields']['field_recipe_guide_title']['table'] = 'field_data_field_recipe_guide_title';
  $handler->display->display_options['fields']['field_recipe_guide_title']['field'] = 'field_recipe_guide_title';
  $handler->display->display_options['fields']['field_recipe_guide_title']['relationship'] = 'field_hp_recipe_guides_value';
  $handler->display->display_options['fields']['field_recipe_guide_title']['label'] = '';
  $handler->display->display_options['fields']['field_recipe_guide_title']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['field_recipe_guide_title']['alter']['text'] = '<div class="recipe-guide-column-title">
<h4>
<a href=\'[field_recipe_guide_title-url]\' title=\'[field_recipe_guide_title-title]\'>[field_recipe_guide_title-title] </a>
</h4>
</div>';
  $handler->display->display_options['fields']['field_recipe_guide_title']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_recipe_guide_title']['click_sort_column'] = 'url';
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
    'home_page' => 'home_page',
  );
  $handler->display->display_options['metatags'] = array(
    'title' => array(
      'value' => '[site:name] Magazine | Recipes, Menus, Chefs, Wine, Cooking, Holidays, Entertaining',
    ),
    'description' => array(
      'value' => 'Food & Wine goes way beyond mere eating and drinking. We\'re on a mission to find the most exciting places, new experiences, emerging trends and sensations.',
    ),
    'canonical' => array(
      'value' => '[site:url]',
    ),
  );
  $handler->display->display_options['path'] = 'home';

  /* Display: Featured Blog */
  $handler = $view->new_display('block', 'Featured Blog', 'block_3');
  $handler->display->display_options['defaults']['css_class'] = FALSE;
  $handler->display->display_options['css_class'] = 'top-blog';
  $handler->display->display_options['defaults']['pager'] = FALSE;
  $handler->display->display_options['pager']['type'] = 'some';
  $handler->display->display_options['pager']['options']['items_per_page'] = '1';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['defaults']['relationships'] = FALSE;
  /* Relationship: Entity Reference: Referenced Entity */
  $handler->display->display_options['relationships']['field_images_target_id']['id'] = 'field_images_target_id';
  $handler->display->display_options['relationships']['field_images_target_id']['table'] = 'field_data_field_images';
  $handler->display->display_options['relationships']['field_images_target_id']['field'] = 'field_images_target_id';
  /* Relationship: Entity Reference: Referenced Entity */
  $handler->display->display_options['relationships']['field_related_videos_target_id']['id'] = 'field_related_videos_target_id';
  $handler->display->display_options['relationships']['field_related_videos_target_id']['table'] = 'field_data_field_related_videos';
  $handler->display->display_options['relationships']['field_related_videos_target_id']['field'] = 'field_related_videos_target_id';
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Content: Path */
  $handler->display->display_options['fields']['path']['id'] = 'path';
  $handler->display->display_options['fields']['path']['table'] = 'node';
  $handler->display->display_options['fields']['path']['field'] = 'path';
  $handler->display->display_options['fields']['path']['label'] = '';
  $handler->display->display_options['fields']['path']['exclude'] = TRUE;
  $handler->display->display_options['fields']['path']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['path']['absolute'] = TRUE;
  /* Field: Content: Topic */
  $handler->display->display_options['fields']['field_topic']['id'] = 'field_topic';
  $handler->display->display_options['fields']['field_topic']['table'] = 'field_data_field_topic';
  $handler->display->display_options['fields']['field_topic']['field'] = 'field_topic';
  $handler->display->display_options['fields']['field_topic']['label'] = '';
  $handler->display->display_options['fields']['field_topic']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['field_topic']['alter']['text'] = '<div class="bubble-container">
<div class="bubble">
[field_topic]
<span class="pointer"></span>
</div>
</div>';
  $handler->display->display_options['fields']['field_topic']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_topic']['type'] = 'taxonomy_term_reference_plain';
  $handler->display->display_options['fields']['field_topic']['delta_limit'] = '1';
  $handler->display->display_options['fields']['field_topic']['delta_offset'] = '0';
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  $handler->display->display_options['fields']['title']['element_type'] = 'h1';
  $handler->display->display_options['fields']['title']['element_label_colon'] = FALSE;
  /* Field: Content: Author */
  $handler->display->display_options['fields']['field_author']['id'] = 'field_author';
  $handler->display->display_options['fields']['field_author']['table'] = 'field_data_field_author';
  $handler->display->display_options['fields']['field_author']['field'] = 'field_author';
  $handler->display->display_options['fields']['field_author']['label'] = '';
  $handler->display->display_options['fields']['field_author']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_author']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_author']['settings'] = array(
    'link' => 1,
  );
  /* Field: Node: Published at */
  $handler->display->display_options['fields']['published_at']['id'] = 'published_at';
  $handler->display->display_options['fields']['published_at']['table'] = 'publication_date';
  $handler->display->display_options['fields']['published_at']['field'] = 'published_at';
  $handler->display->display_options['fields']['published_at']['label'] = '';
  $handler->display->display_options['fields']['published_at']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['published_at']['alter']['text'] = 'BY [field_author]  | [published_at] ';
  $handler->display->display_options['fields']['published_at']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['published_at']['date_format'] = 'time ago';
  /* Field: Content: Main Video */
  $handler->display->display_options['fields']['field_blog_video']['id'] = 'field_blog_video';
  $handler->display->display_options['fields']['field_blog_video']['table'] = 'field_data_field_blog_video';
  $handler->display->display_options['fields']['field_blog_video']['field'] = 'field_blog_video';
  $handler->display->display_options['fields']['field_blog_video']['label'] = '';
  $handler->display->display_options['fields']['field_blog_video']['element_class'] = 'flex-video-container';
  $handler->display->display_options['fields']['field_blog_video']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_blog_video']['hide_empty'] = TRUE;
  /* Field: Content: Image */
  $handler->display->display_options['fields']['field_image']['id'] = 'field_image';
  $handler->display->display_options['fields']['field_image']['table'] = 'field_data_field_image';
  $handler->display->display_options['fields']['field_image']['field'] = 'field_image';
  $handler->display->display_options['fields']['field_image']['relationship'] = 'field_images_target_id';
  $handler->display->display_options['fields']['field_image']['label'] = '';
  $handler->display->display_options['fields']['field_image']['alter']['make_link'] = TRUE;
  $handler->display->display_options['fields']['field_image']['alter']['path'] = '[path]';
  $handler->display->display_options['fields']['field_image']['element_type'] = '0';
  $handler->display->display_options['fields']['field_image']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_image']['element_wrapper_type'] = '0';
  $handler->display->display_options['fields']['field_image']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['field_image']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_image']['settings'] = array(
    'image_style' => '445x445',
    'image_link' => '',
  );
  $handler->display->display_options['fields']['field_image']['field_api_classes'] = TRUE;
  /* Field: Content: Deck */
  $handler->display->display_options['fields']['field_deck']['id'] = 'field_deck';
  $handler->display->display_options['fields']['field_deck']['table'] = 'field_data_field_deck';
  $handler->display->display_options['fields']['field_deck']['field'] = 'field_deck';
  $handler->display->display_options['fields']['field_deck']['label'] = '';
  $handler->display->display_options['fields']['field_deck']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['field_deck']['alter']['text'] = '[field_deck] <a class="readmore" href="[path]">READ MORE</a>
 ';
  $handler->display->display_options['fields']['field_deck']['element_label_colon'] = FALSE;
  /* Field: Content: Video ID */
  $handler->display->display_options['fields']['field_video_id']['id'] = 'field_video_id';
  $handler->display->display_options['fields']['field_video_id']['table'] = 'field_data_field_video_id';
  $handler->display->display_options['fields']['field_video_id']['field'] = 'field_video_id';
  $handler->display->display_options['fields']['field_video_id']['relationship'] = 'field_related_videos_target_id';
  $handler->display->display_options['fields']['field_video_id']['label'] = '';
  $handler->display->display_options['fields']['field_video_id']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_video_id']['element_type'] = '0';
  $handler->display->display_options['fields']['field_video_id']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_video_id']['element_wrapper_type'] = '0';
  $handler->display->display_options['defaults']['sorts'] = FALSE;
  /* Sort criterion: Node: Published at */
  $handler->display->display_options['sorts']['published_at']['id'] = 'published_at';
  $handler->display->display_options['sorts']['published_at']['table'] = 'publication_date';
  $handler->display->display_options['sorts']['published_at']['field'] = 'published_at';
  $handler->display->display_options['sorts']['published_at']['order'] = 'DESC';
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
    'blog' => 'blog',
  );
  $handler->display->display_options['block_caching'] = '4';

  /* Display: Recent Blogs */
  $handler = $view->new_display('block', 'Recent Blogs', 'block_4');
  $handler->display->display_options['defaults']['css_class'] = FALSE;
  $handler->display->display_options['css_class'] = 'blogs-container';
  $handler->display->display_options['defaults']['pager'] = FALSE;
  $handler->display->display_options['pager']['type'] = 'some';
  $handler->display->display_options['pager']['options']['items_per_page'] = '4';
  $handler->display->display_options['pager']['options']['offset'] = '1';
  $handler->display->display_options['defaults']['footer'] = FALSE;
  /* Footer: Global: Text area */
  $handler->display->display_options['footer']['area']['id'] = 'area';
  $handler->display->display_options['footer']['area']['table'] = 'views';
  $handler->display->display_options['footer']['area']['field'] = 'area';
  $handler->display->display_options['footer']['area']['content'] = '<div class="button-container">
<a title="see more" href="/blogs?page=2" class="black-button">
More from our editors
</a>
</div>';
  $handler->display->display_options['footer']['area']['format'] = 'wysiwyg';
  $handler->display->display_options['defaults']['relationships'] = FALSE;
  /* Relationship: Entity Reference: Referenced Entity */
  $handler->display->display_options['relationships']['field_images_target_id']['id'] = 'field_images_target_id';
  $handler->display->display_options['relationships']['field_images_target_id']['table'] = 'field_data_field_images';
  $handler->display->display_options['relationships']['field_images_target_id']['field'] = 'field_images_target_id';
  /* Relationship: Entity Reference: Referenced Entity */
  $handler->display->display_options['relationships']['field_related_videos_target_id']['id'] = 'field_related_videos_target_id';
  $handler->display->display_options['relationships']['field_related_videos_target_id']['table'] = 'field_data_field_related_videos';
  $handler->display->display_options['relationships']['field_related_videos_target_id']['field'] = 'field_related_videos_target_id';
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Content: Main Video */
  $handler->display->display_options['fields']['field_blog_video']['id'] = 'field_blog_video';
  $handler->display->display_options['fields']['field_blog_video']['table'] = 'field_data_field_blog_video';
  $handler->display->display_options['fields']['field_blog_video']['field'] = 'field_blog_video';
  $handler->display->display_options['fields']['field_blog_video']['label'] = '';
  $handler->display->display_options['fields']['field_blog_video']['element_class'] = 'flex-video-container';
  $handler->display->display_options['fields']['field_blog_video']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_blog_video']['hide_empty'] = TRUE;
  /* Field: Content: Path */
  $handler->display->display_options['fields']['path']['id'] = 'path';
  $handler->display->display_options['fields']['path']['table'] = 'node';
  $handler->display->display_options['fields']['path']['field'] = 'path';
  $handler->display->display_options['fields']['path']['label'] = '';
  $handler->display->display_options['fields']['path']['exclude'] = TRUE;
  $handler->display->display_options['fields']['path']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['path']['absolute'] = TRUE;
  /* Field: Content: Image */
  $handler->display->display_options['fields']['field_image']['id'] = 'field_image';
  $handler->display->display_options['fields']['field_image']['table'] = 'field_data_field_image';
  $handler->display->display_options['fields']['field_image']['field'] = 'field_image';
  $handler->display->display_options['fields']['field_image']['relationship'] = 'field_images_target_id';
  $handler->display->display_options['fields']['field_image']['label'] = '';
  $handler->display->display_options['fields']['field_image']['alter']['make_link'] = TRUE;
  $handler->display->display_options['fields']['field_image']['alter']['path'] = '[path]';
  $handler->display->display_options['fields']['field_image']['element_type'] = '0';
  $handler->display->display_options['fields']['field_image']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_image']['element_wrapper_type'] = '0';
  $handler->display->display_options['fields']['field_image']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['field_image']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_image']['settings'] = array(
    'image_style' => '300x300',
    'image_link' => '',
  );
  $handler->display->display_options['fields']['field_image']['field_api_classes'] = TRUE;
  /* Field: Content: Author */
  $handler->display->display_options['fields']['field_author']['id'] = 'field_author';
  $handler->display->display_options['fields']['field_author']['table'] = 'field_data_field_author';
  $handler->display->display_options['fields']['field_author']['field'] = 'field_author';
  $handler->display->display_options['fields']['field_author']['label'] = '';
  $handler->display->display_options['fields']['field_author']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_author']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_author']['settings'] = array(
    'link' => 1,
  );
  /* Field: Node: Published at */
  $handler->display->display_options['fields']['published_at']['id'] = 'published_at';
  $handler->display->display_options['fields']['published_at']['table'] = 'publication_date';
  $handler->display->display_options['fields']['published_at']['field'] = 'published_at';
  $handler->display->display_options['fields']['published_at']['label'] = '';
  $handler->display->display_options['fields']['published_at']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['published_at']['alter']['text'] = 'BY [field_author]  | [published_at] ';
  $handler->display->display_options['fields']['published_at']['element_class'] = 'timestamp-author';
  $handler->display->display_options['fields']['published_at']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['published_at']['date_format'] = 'time ago';
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['alter']['max_length'] = '80';
  $handler->display->display_options['fields']['title']['alter']['trim'] = TRUE;
  $handler->display->display_options['fields']['title']['element_type'] = 'h3';
  $handler->display->display_options['fields']['title']['element_class'] = 'blog-article-content';
  $handler->display->display_options['fields']['title']['element_label_colon'] = FALSE;
  /* Field: Content: Video ID */
  $handler->display->display_options['fields']['field_video_id']['id'] = 'field_video_id';
  $handler->display->display_options['fields']['field_video_id']['table'] = 'field_data_field_video_id';
  $handler->display->display_options['fields']['field_video_id']['field'] = 'field_video_id';
  $handler->display->display_options['fields']['field_video_id']['relationship'] = 'field_related_videos_target_id';
  $handler->display->display_options['fields']['field_video_id']['label'] = '';
  $handler->display->display_options['fields']['field_video_id']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_video_id']['element_type'] = '0';
  $handler->display->display_options['fields']['field_video_id']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_video_id']['element_wrapper_type'] = '0';
  $handler->display->display_options['defaults']['sorts'] = FALSE;
  /* Sort criterion: Node: Published at */
  $handler->display->display_options['sorts']['published_at']['id'] = 'published_at';
  $handler->display->display_options['sorts']['published_at']['table'] = 'publication_date';
  $handler->display->display_options['sorts']['published_at']['field'] = 'published_at';
  $handler->display->display_options['sorts']['published_at']['order'] = 'DESC';
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
    'blog' => 'blog',
  );
  $handler->display->display_options['block_caching'] = '4';
  $export['ti_amg_fw_homepage_blocks'] = $view;

  $view = new view();
  $view->name = 'ti_amg_fw_new_recipes_section';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'node';
  $view->human_name = 'TI AMG FW New Recipes section';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['css_class'] = 'new-recipes';
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['access']['type'] = 'perm';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['pager']['type'] = 'some';
  $handler->display->display_options['pager']['options']['items_per_page'] = '3';
  $handler->display->display_options['style_plugin'] = 'default';
  $handler->display->display_options['style_options']['row_class'] = 'recipe-post';
  $handler->display->display_options['row_plugin'] = 'fields';
  /* Header: Global: Text area */
  $handler->display->display_options['header']['area']['id'] = 'area';
  $handler->display->display_options['header']['area']['table'] = 'views';
  $handler->display->display_options['header']['area']['field'] = 'area';
  $handler->display->display_options['header']['area']['content'] = '<h2>new recipes</h2>';
  $handler->display->display_options['header']['area']['format'] = 'wysiwyg';
  /* Relationship: Entity Reference: Referenced Entity */
  $handler->display->display_options['relationships']['field_images_target_id']['id'] = 'field_images_target_id';
  $handler->display->display_options['relationships']['field_images_target_id']['table'] = 'field_data_field_images';
  $handler->display->display_options['relationships']['field_images_target_id']['field'] = 'field_images_target_id';
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title_1']['id'] = 'title_1';
  $handler->display->display_options['fields']['title_1']['table'] = 'node';
  $handler->display->display_options['fields']['title_1']['field'] = 'title';
  $handler->display->display_options['fields']['title_1']['label'] = '';
  $handler->display->display_options['fields']['title_1']['exclude'] = TRUE;
  $handler->display->display_options['fields']['title_1']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['title_1']['link_to_node'] = FALSE;
  /* Field: Content: Path */
  $handler->display->display_options['fields']['path']['id'] = 'path';
  $handler->display->display_options['fields']['path']['table'] = 'node';
  $handler->display->display_options['fields']['path']['field'] = 'path';
  $handler->display->display_options['fields']['path']['label'] = '';
  $handler->display->display_options['fields']['path']['exclude'] = TRUE;
  $handler->display->display_options['fields']['path']['element_label_colon'] = FALSE;
  /* Field: Content: Image */
  $handler->display->display_options['fields']['field_image']['id'] = 'field_image';
  $handler->display->display_options['fields']['field_image']['table'] = 'field_data_field_image';
  $handler->display->display_options['fields']['field_image']['field'] = 'field_image';
  $handler->display->display_options['fields']['field_image']['relationship'] = 'field_images_target_id';
  $handler->display->display_options['fields']['field_image']['label'] = '';
  $handler->display->display_options['fields']['field_image']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['field_image']['alter']['text'] = '<a href="[path]" title="[title_1]">[field_image]</a>';
  $handler->display->display_options['fields']['field_image']['alter']['path'] = '[path]';
  $handler->display->display_options['fields']['field_image']['alter']['absolute'] = TRUE;
  $handler->display->display_options['fields']['field_image']['alter']['alt'] = '[title_1]';
  $handler->display->display_options['fields']['field_image']['element_type'] = '0';
  $handler->display->display_options['fields']['field_image']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_image']['empty'] = '<a href="[path]"><img src="/sites/all/themes/foodandwine/images/recipe-placeholder.gif" title="[title_1]"> </a>';
  $handler->display->display_options['fields']['field_image']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_image']['settings'] = array(
    'image_style' => '90x112',
    'image_link' => '',
  );
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['title']['alter']['text'] = '<h4><a href="[path]" title="[title_1]">[title_1]</a></h4>';
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  $handler->display->display_options['fields']['title']['element_label_colon'] = FALSE;
  /* Sort criterion: Content: Updated date */
  $handler->display->display_options['sorts']['changed']['id'] = 'changed';
  $handler->display->display_options['sorts']['changed']['table'] = 'node';
  $handler->display->display_options['sorts']['changed']['field'] = 'changed';
  $handler->display->display_options['sorts']['changed']['order'] = 'DESC';
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
    'recipe' => 'recipe',
  );

  /* Display: Block */
  $handler = $view->new_display('block', 'Block', 'block');
  $handler->display->display_options['block_caching'] = '4';
  $export['ti_amg_fw_new_recipes_section'] = $view;

  $view = new view();
  $view->name = 'ti_amg_fw_new_slideshows_section';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'node';
  $view->human_name = 'TI AMG FW New Slideshows Section';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['css_class'] = 'popular-recipes';
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['access']['type'] = 'perm';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['pager']['type'] = 'some';
  $handler->display->display_options['pager']['options']['items_per_page'] = '3';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['style_plugin'] = 'default';
  $handler->display->display_options['style_options']['row_class'] = 'recipe-post';
  $handler->display->display_options['row_plugin'] = 'fields';
  /* Header: Global: Text area */
  $handler->display->display_options['header']['area']['id'] = 'area';
  $handler->display->display_options['header']['area']['table'] = 'views';
  $handler->display->display_options['header']['area']['field'] = 'area';
  $handler->display->display_options['header']['area']['content'] = '<h2>New Slideshows</h2>';
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
  /* Field: Content: Path */
  $handler->display->display_options['fields']['path']['id'] = 'path';
  $handler->display->display_options['fields']['path']['table'] = 'node';
  $handler->display->display_options['fields']['path']['field'] = 'path';
  $handler->display->display_options['fields']['path']['label'] = '';
  $handler->display->display_options['fields']['path']['exclude'] = TRUE;
  $handler->display->display_options['fields']['path']['element_label_colon'] = FALSE;
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title_1']['id'] = 'title_1';
  $handler->display->display_options['fields']['title_1']['table'] = 'node';
  $handler->display->display_options['fields']['title_1']['field'] = 'title';
  $handler->display->display_options['fields']['title_1']['label'] = '';
  $handler->display->display_options['fields']['title_1']['exclude'] = TRUE;
  $handler->display->display_options['fields']['title_1']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['title_1']['link_to_node'] = FALSE;
  /* Field: Content: Image */
  $handler->display->display_options['fields']['field_image']['id'] = 'field_image';
  $handler->display->display_options['fields']['field_image']['table'] = 'field_data_field_image';
  $handler->display->display_options['fields']['field_image']['field'] = 'field_image';
  $handler->display->display_options['fields']['field_image']['relationship'] = 'field_slide_image_target_id';
  $handler->display->display_options['fields']['field_image']['label'] = '';
  $handler->display->display_options['fields']['field_image']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['field_image']['alter']['text'] = '<a href="[path] " title="[title_1]">[field_image]</a>';
  $handler->display->display_options['fields']['field_image']['alter']['path'] = 'slideshows/[title_1]';
  $handler->display->display_options['fields']['field_image']['alter']['absolute'] = TRUE;
  $handler->display->display_options['fields']['field_image']['alter']['replace_spaces'] = TRUE;
  $handler->display->display_options['fields']['field_image']['alter']['alt'] = '[title_1]';
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
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['title']['alter']['text'] = '<h4><a href="[path] " title="[title_1]">[title_1]</a></h4>';
  $handler->display->display_options['fields']['title']['element_label_colon'] = FALSE;
  /* Sort criterion: Content: Published */
  $handler->display->display_options['sorts']['status']['id'] = 'status';
  $handler->display->display_options['sorts']['status']['table'] = 'node';
  $handler->display->display_options['sorts']['status']['field'] = 'status';
  $handler->display->display_options['sorts']['status']['order'] = 'DESC';
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
    'gallery' => 'gallery',
  );

  /* Display: Block */
  $handler = $view->new_display('block', 'Block', 'block');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['defaults']['sorts'] = FALSE;
  /* Sort criterion: Content: Updated date */
  $handler->display->display_options['sorts']['changed']['id'] = 'changed';
  $handler->display->display_options['sorts']['changed']['table'] = 'node';
  $handler->display->display_options['sorts']['changed']['field'] = 'changed';
  $handler->display->display_options['sorts']['changed']['order'] = 'DESC';
  $handler->display->display_options['block_caching'] = '4';
  $export['ti_amg_fw_new_slideshows_section'] = $view;

  return $export;
}
