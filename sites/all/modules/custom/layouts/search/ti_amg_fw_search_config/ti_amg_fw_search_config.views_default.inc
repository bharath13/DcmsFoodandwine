<?php
/**
 * @file
 * ti_amg_fw_search_config.views_default.inc
 */

/**
 * Implements hook_views_default_views().
 */
function ti_amg_fw_search_config_views_default_views() {
  $export = array();

  $view = new view();
  $view->name = 'advanced_recipe_backend_search';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'search_api_index_foodandwine_search';
  $view->human_name = 'Advanced Recipe Backend Search';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['title'] = 'Advanced Recipe Backend Search';
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['access']['type'] = 'none';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['query']['options']['search_api_bypass_access'] = 0;
  $handler->display->display_options['query']['options']['entity_access'] = 0;
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['exposed_form']['options']['submit_button'] = 'Search';
  $handler->display->display_options['exposed_form']['options']['reset_button'] = TRUE;
  $handler->display->display_options['exposed_form']['options']['reset_button_label'] = 'Clear Form';
  $handler->display->display_options['pager']['type'] = 'full';
  $handler->display->display_options['pager']['options']['items_per_page'] = '10';
  $handler->display->display_options['style_plugin'] = 'table';
  $handler->display->display_options['style_options']['columns'] = array(
    'title' => 'title',
    'author' => 'author',
    'changed' => 'changed',
    'state' => 'state',
    'state_1' => 'state_1',
    'edit_node' => 'delete_node',
    'nid' => 'delete_node',
    'delete_node' => 'delete_node',
  );
  $handler->display->display_options['style_options']['default'] = '-1';
  $handler->display->display_options['style_options']['info'] = array(
    'title' => array(
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'author' => array(
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'changed' => array(
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'state' => array(
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'state_1' => array(
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'edit_node' => array(
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'nid' => array(
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'delete_node' => array(
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
  );
  /* Field: Indexed Content: Bulk operations */
  $handler->display->display_options['fields']['views_bulk_operations']['id'] = 'views_bulk_operations';
  $handler->display->display_options['fields']['views_bulk_operations']['table'] = 'search_api_index_foodandwine_search';
  $handler->display->display_options['fields']['views_bulk_operations']['field'] = 'views_bulk_operations';
  $handler->display->display_options['fields']['views_bulk_operations']['label'] = '';
  $handler->display->display_options['fields']['views_bulk_operations']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['views_bulk_operations']['vbo_settings']['display_type'] = '0';
  $handler->display->display_options['fields']['views_bulk_operations']['vbo_settings']['enable_select_all_pages'] = 1;
  $handler->display->display_options['fields']['views_bulk_operations']['vbo_settings']['force_single'] = 0;
  $handler->display->display_options['fields']['views_bulk_operations']['vbo_settings']['entity_load_capacity'] = '10';
  $handler->display->display_options['fields']['views_bulk_operations']['vbo_operations'] = array(
    'action::node_assign_owner_action' => array(
      'selected' => 1,
      'postpone_processing' => 0,
      'skip_confirmation' => 0,
      'override_label' => 0,
      'label' => '',
    ),
    'action::clone_action_clone' => array(
      'selected' => 1,
      'postpone_processing' => 0,
      'skip_confirmation' => 0,
      'override_label' => 0,
      'label' => '',
    ),
    'action::views_bulk_operations_delete_item' => array(
      'selected' => 1,
      'postpone_processing' => 0,
      'skip_confirmation' => 0,
      'override_label' => 0,
      'label' => '',
    ),
    'action::ti_editorial_state_flow_workflow_publish_action' => array(
      'selected' => 1,
      'postpone_processing' => 0,
      'skip_confirmation' => 0,
      'override_label' => 1,
      'label' => 'Publish',
    ),
    'action::ti_editorial_state_flow_workflow_unpublish_action' => array(
      'selected' => 1,
      'postpone_processing' => 0,
      'skip_confirmation' => 0,
      'override_label' => 1,
      'label' => 'Unpublish',
    ),
  );
  /* Field: Indexed Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'search_api_index_foodandwine_search';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['title']['link_to_entity'] = 1;
  /* Field: Indexed Content: Chefs */
  $handler->display->display_options['fields']['field_chefs_author']['id'] = 'field_chefs_author';
  $handler->display->display_options['fields']['field_chefs_author']['table'] = 'search_api_index_foodandwine_search';
  $handler->display->display_options['fields']['field_chefs_author']['field'] = 'field_chefs_author';
  $handler->display->display_options['fields']['field_chefs_author']['label'] = 'Contributors';
  $handler->display->display_options['fields']['field_chefs_author']['link_to_entity'] = 1;
  $handler->display->display_options['fields']['field_chefs_author']['view_mode'] = 'full';
  $handler->display->display_options['fields']['field_chefs_author']['bypass_access'] = 0;
  /* Field: Indexed Content: Date changed */
  $handler->display->display_options['fields']['changed']['id'] = 'changed';
  $handler->display->display_options['fields']['changed']['table'] = 'search_api_index_foodandwine_search';
  $handler->display->display_options['fields']['changed']['field'] = 'changed';
  $handler->display->display_options['fields']['changed']['label'] = 'Last Modified';
  $handler->display->display_options['fields']['changed']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['changed']['date_format'] = 'custom';
  $handler->display->display_options['fields']['changed']['custom_date_format'] = 'M j, Y - g:i a';
  $handler->display->display_options['fields']['changed']['link_to_entity'] = 0;
  /* Field: Indexed Content: Workflow state */
  $handler->display->display_options['fields']['state']['id'] = 'state';
  $handler->display->display_options['fields']['state']['table'] = 'search_api_index_foodandwine_search';
  $handler->display->display_options['fields']['state']['field'] = 'state';
  $handler->display->display_options['fields']['state']['exclude'] = TRUE;
  $handler->display->display_options['fields']['state']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['state']['link_to_entity'] = 0;
  $handler->display->display_options['fields']['state']['format_name'] = 0;
  /* Field: Indexed Content: Workflow state */
  $handler->display->display_options['fields']['state_1']['id'] = 'state_1';
  $handler->display->display_options['fields']['state_1']['table'] = 'search_api_index_foodandwine_search';
  $handler->display->display_options['fields']['state_1']['field'] = 'state';
  $handler->display->display_options['fields']['state_1']['label'] = 'Status';
  $handler->display->display_options['fields']['state_1']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['state_1']['alter']['text'] = '<div class="[state]">[state_1]</div>';
  $handler->display->display_options['fields']['state_1']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['state_1']['link_to_entity'] = 0;
  $handler->display->display_options['fields']['state_1']['format_name'] = 1;
  /* Field: Content: Edit link */
  $handler->display->display_options['fields']['edit_node']['id'] = 'edit_node';
  $handler->display->display_options['fields']['edit_node']['table'] = 'views_entity_node';
  $handler->display->display_options['fields']['edit_node']['field'] = 'edit_node';
  $handler->display->display_options['fields']['edit_node']['label'] = '';
  $handler->display->display_options['fields']['edit_node']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['edit_node']['text'] = 'Edit';
  /* Field: Indexed Content: Node ID */
  $handler->display->display_options['fields']['nid']['id'] = 'nid';
  $handler->display->display_options['fields']['nid']['table'] = 'search_api_index_foodandwine_search';
  $handler->display->display_options['fields']['nid']['field'] = 'nid';
  $handler->display->display_options['fields']['nid']['label'] = '';
  $handler->display->display_options['fields']['nid']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['nid']['alter']['text'] = 'Clone';
  $handler->display->display_options['fields']['nid']['alter']['make_link'] = TRUE;
  $handler->display->display_options['fields']['nid']['alter']['path'] = 'node/[nid]/clone/confirm';
  $handler->display->display_options['fields']['nid']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['nid']['link_to_entity'] = 0;
  /* Field: Content: Delete link */
  $handler->display->display_options['fields']['delete_node']['id'] = 'delete_node';
  $handler->display->display_options['fields']['delete_node']['table'] = 'views_entity_node';
  $handler->display->display_options['fields']['delete_node']['field'] = 'delete_node';
  $handler->display->display_options['fields']['delete_node']['label'] = 'Operations';
  $handler->display->display_options['fields']['delete_node']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['delete_node']['text'] = 'Delete';
  /* Filter criterion: Indexed Content: Content type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'search_api_index_foodandwine_search';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'recipe' => 'recipe',
  );
  $handler->display->display_options['filters']['type']['group'] = 1;
  /* Filter criterion: Search: Fulltext search */
  $handler->display->display_options['filters']['search_api_views_fulltext']['id'] = 'search_api_views_fulltext';
  $handler->display->display_options['filters']['search_api_views_fulltext']['table'] = 'search_api_index_foodandwine_search';
  $handler->display->display_options['filters']['search_api_views_fulltext']['field'] = 'search_api_views_fulltext';
  $handler->display->display_options['filters']['search_api_views_fulltext']['operator'] = 'OR';
  $handler->display->display_options['filters']['search_api_views_fulltext']['group'] = 1;
  $handler->display->display_options['filters']['search_api_views_fulltext']['exposed'] = TRUE;
  $handler->display->display_options['filters']['search_api_views_fulltext']['expose']['operator_id'] = 'search_api_views_fulltext_op';
  $handler->display->display_options['filters']['search_api_views_fulltext']['expose']['label'] = 'Recipe search';
  $handler->display->display_options['filters']['search_api_views_fulltext']['expose']['operator'] = 'search_api_views_fulltext_op';
  $handler->display->display_options['filters']['search_api_views_fulltext']['expose']['identifier'] = 'search_api_views_fulltext';
  $handler->display->display_options['filters']['search_api_views_fulltext']['expose']['remember_roles'] = array(
    2 => '2',
    1 => 0,
    3 => 0,
    8 => 0,
    7 => 0,
    5 => 0,
    6 => 0,
    4 => 0,
    9 => 0,
    10 => 0,
    11 => 0,
  );
  $handler->display->display_options['filters']['search_api_views_fulltext']['fields'] = array(
    'title' => 'title',
  );
  /* Filter criterion: Indexed Content: Issue */
  $handler->display->display_options['filters']['field_issue']['id'] = 'field_issue';
  $handler->display->display_options['filters']['field_issue']['table'] = 'search_api_index_foodandwine_search';
  $handler->display->display_options['filters']['field_issue']['field'] = 'field_issue';
  $handler->display->display_options['filters']['field_issue']['value'] = array();
  $handler->display->display_options['filters']['field_issue']['group'] = 1;
  $handler->display->display_options['filters']['field_issue']['exposed'] = TRUE;
  $handler->display->display_options['filters']['field_issue']['expose']['operator_id'] = 'field_issue_op';
  $handler->display->display_options['filters']['field_issue']['expose']['label'] = 'Issue Date';
  $handler->display->display_options['filters']['field_issue']['expose']['operator'] = 'field_issue_op';
  $handler->display->display_options['filters']['field_issue']['expose']['identifier'] = 'field_issue';
  $handler->display->display_options['filters']['field_issue']['expose']['remember_roles'] = array(
    2 => '2',
    1 => 0,
    3 => 0,
    8 => 0,
    7 => 0,
    5 => 0,
    6 => 0,
    4 => 0,
    9 => 0,
    10 => 0,
    11 => 0,
  );
  $handler->display->display_options['filters']['field_issue']['expose']['reduce'] = 0;
  /* Filter criterion: Indexed Content: Published at */
  $handler->display->display_options['filters']['published_at']['id'] = 'published_at';
  $handler->display->display_options['filters']['published_at']['table'] = 'search_api_index_foodandwine_search';
  $handler->display->display_options['filters']['published_at']['field'] = 'published_at';
  $handler->display->display_options['filters']['published_at']['operator'] = '>=';
  $handler->display->display_options['filters']['published_at']['group'] = 1;
  $handler->display->display_options['filters']['published_at']['exposed'] = TRUE;
  $handler->display->display_options['filters']['published_at']['expose']['operator_id'] = 'published_at_op';
  $handler->display->display_options['filters']['published_at']['expose']['label'] = 'Published Between';
  $handler->display->display_options['filters']['published_at']['expose']['operator'] = 'published_at_op';
  $handler->display->display_options['filters']['published_at']['expose']['identifier'] = 'published_at';
  $handler->display->display_options['filters']['published_at']['expose']['remember_roles'] = array(
    2 => '2',
    1 => 0,
    3 => 0,
    8 => 0,
    7 => 0,
    5 => 0,
    6 => 0,
    4 => 0,
    9 => 0,
    10 => 0,
    11 => 0,
  );
  $handler->display->display_options['filters']['published_at']['widget_type'] = 'date_popup';
  /* Filter criterion: Indexed Content: Published at */
  $handler->display->display_options['filters']['published_at_1']['id'] = 'published_at_1';
  $handler->display->display_options['filters']['published_at_1']['table'] = 'search_api_index_foodandwine_search';
  $handler->display->display_options['filters']['published_at_1']['field'] = 'published_at';
  $handler->display->display_options['filters']['published_at_1']['operator'] = '<=';
  $handler->display->display_options['filters']['published_at_1']['group'] = 1;
  $handler->display->display_options['filters']['published_at_1']['exposed'] = TRUE;
  $handler->display->display_options['filters']['published_at_1']['expose']['operator_id'] = 'published_at_1_op';
  $handler->display->display_options['filters']['published_at_1']['expose']['operator'] = 'published_at_1_op';
  $handler->display->display_options['filters']['published_at_1']['expose']['identifier'] = 'published_at_1';
  $handler->display->display_options['filters']['published_at_1']['expose']['remember_roles'] = array(
    2 => '2',
    1 => 0,
    3 => 0,
    8 => 0,
    7 => 0,
    5 => 0,
    6 => 0,
    4 => 0,
    9 => 0,
    10 => 0,
    11 => 0,
  );
  $handler->display->display_options['filters']['published_at_1']['widget_type'] = 'date_popup';
  /* Filter criterion: Indexed Content: Chefs */
  $handler->display->display_options['filters']['field_chefs_author']['id'] = 'field_chefs_author';
  $handler->display->display_options['filters']['field_chefs_author']['table'] = 'search_api_index_foodandwine_search';
  $handler->display->display_options['filters']['field_chefs_author']['field'] = 'field_chefs_author';
  $handler->display->display_options['filters']['field_chefs_author']['group'] = 1;
  $handler->display->display_options['filters']['field_chefs_author']['exposed'] = TRUE;
  $handler->display->display_options['filters']['field_chefs_author']['expose']['operator_id'] = 'field_chefs_author_op';
  $handler->display->display_options['filters']['field_chefs_author']['expose']['label'] = 'Contributor';
  $handler->display->display_options['filters']['field_chefs_author']['expose']['operator'] = 'field_chefs_author_op';
  $handler->display->display_options['filters']['field_chefs_author']['expose']['identifier'] = 'field_chefs_author';
  $handler->display->display_options['filters']['field_chefs_author']['expose']['remember_roles'] = array(
    2 => '2',
    1 => 0,
    3 => 0,
    8 => 0,
    7 => 0,
    5 => 0,
    6 => 0,
    4 => 0,
    9 => 0,
    10 => 0,
    11 => 0,
  );
  /* Filter criterion: Complex Theme: All parent terms (indexed) */
  $handler->display->display_options['filters']['field_complex_theme_parents_all']['id'] = 'field_complex_theme_parents_all';
  $handler->display->display_options['filters']['field_complex_theme_parents_all']['table'] = 'search_api_index_foodandwine_search';
  $handler->display->display_options['filters']['field_complex_theme_parents_all']['field'] = 'field_complex_theme_parents_all';
  $handler->display->display_options['filters']['field_complex_theme_parents_all']['group'] = 1;
  $handler->display->display_options['filters']['field_complex_theme_parents_all']['exposed'] = TRUE;
  $handler->display->display_options['filters']['field_complex_theme_parents_all']['expose']['operator_id'] = 'field_complex_theme_parents_all_op';
  $handler->display->display_options['filters']['field_complex_theme_parents_all']['expose']['label'] = 'Theme';
  $handler->display->display_options['filters']['field_complex_theme_parents_all']['expose']['operator'] = 'field_complex_theme_parents_all_op';
  $handler->display->display_options['filters']['field_complex_theme_parents_all']['expose']['identifier'] = 'field_complex_theme_parents_all';
  $handler->display->display_options['filters']['field_complex_theme_parents_all']['expose']['multiple'] = TRUE;
  $handler->display->display_options['filters']['field_complex_theme_parents_all']['expose']['remember_roles'] = array(
    2 => '2',
    1 => 0,
    3 => 0,
    8 => 0,
    7 => 0,
    5 => 0,
    6 => 0,
    4 => 0,
    9 => 0,
    10 => 0,
    11 => 0,
  );
  $handler->display->display_options['filters']['field_complex_theme_parents_all']['error_message'] = FALSE;
  /* Filter criterion: Ingredients: Primary Ingredient (indexed) */
  $handler->display->display_options['filters']['field_ingredients_field_ingredient_primary']['id'] = 'field_ingredients_field_ingredient_primary';
  $handler->display->display_options['filters']['field_ingredients_field_ingredient_primary']['table'] = 'search_api_index_foodandwine_search';
  $handler->display->display_options['filters']['field_ingredients_field_ingredient_primary']['field'] = 'field_ingredients_field_ingredient_primary';
  $handler->display->display_options['filters']['field_ingredients_field_ingredient_primary']['group'] = 1;
  $handler->display->display_options['filters']['field_ingredients_field_ingredient_primary']['exposed'] = TRUE;
  $handler->display->display_options['filters']['field_ingredients_field_ingredient_primary']['expose']['operator_id'] = 'field_ingredients_field_ingredient_primary_op';
  $handler->display->display_options['filters']['field_ingredients_field_ingredient_primary']['expose']['label'] = 'Ingredient';
  $handler->display->display_options['filters']['field_ingredients_field_ingredient_primary']['expose']['operator'] = 'field_ingredients_field_ingredient_primary_op';
  $handler->display->display_options['filters']['field_ingredients_field_ingredient_primary']['expose']['identifier'] = 'field_ingredients_field_ingredient_primary';
  $handler->display->display_options['filters']['field_ingredients_field_ingredient_primary']['expose']['multiple'] = TRUE;
  $handler->display->display_options['filters']['field_ingredients_field_ingredient_primary']['expose']['remember_roles'] = array(
    2 => '2',
    1 => 0,
    3 => 0,
    8 => 0,
    7 => 0,
    5 => 0,
    6 => 0,
    4 => 0,
    9 => 0,
    10 => 0,
    11 => 0,
  );
  $handler->display->display_options['filters']['field_ingredients_field_ingredient_primary']['error_message'] = FALSE;
  /* Filter criterion: Indexed Content: Status */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'search_api_index_foodandwine_search';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = array();
  $handler->display->display_options['filters']['status']['group'] = 1;
  $handler->display->display_options['filters']['status']['exposed'] = TRUE;
  $handler->display->display_options['filters']['status']['expose']['operator_id'] = 'status_op';
  $handler->display->display_options['filters']['status']['expose']['label'] = 'Publish Status';
  $handler->display->display_options['filters']['status']['expose']['operator'] = 'status_op';
  $handler->display->display_options['filters']['status']['expose']['identifier'] = 'status';
  $handler->display->display_options['filters']['status']['expose']['remember_roles'] = array(
    2 => '2',
    1 => 0,
    3 => 0,
    8 => 0,
    7 => 0,
    5 => 0,
    6 => 0,
    4 => 0,
    9 => 0,
    10 => 0,
    11 => 0,
  );
  $handler->display->display_options['filters']['status']['expose']['reduce'] = 0;
  /* Filter criterion: Indexed Content: Producer QA */
  $handler->display->display_options['filters']['field_wf_producer_qa']['id'] = 'field_wf_producer_qa';
  $handler->display->display_options['filters']['field_wf_producer_qa']['table'] = 'search_api_index_foodandwine_search';
  $handler->display->display_options['filters']['field_wf_producer_qa']['field'] = 'field_wf_producer_qa';
  $handler->display->display_options['filters']['field_wf_producer_qa']['value'] = array();
  $handler->display->display_options['filters']['field_wf_producer_qa']['group'] = 1;
  $handler->display->display_options['filters']['field_wf_producer_qa']['exposed'] = TRUE;
  $handler->display->display_options['filters']['field_wf_producer_qa']['expose']['operator_id'] = 'field_wf_producer_qa_op';
  $handler->display->display_options['filters']['field_wf_producer_qa']['expose']['label'] = 'Producer QA';
  $handler->display->display_options['filters']['field_wf_producer_qa']['expose']['operator'] = 'field_wf_producer_qa_op';
  $handler->display->display_options['filters']['field_wf_producer_qa']['expose']['identifier'] = 'field_wf_producer_qa';
  $handler->display->display_options['filters']['field_wf_producer_qa']['expose']['remember_roles'] = array(
    2 => '2',
    1 => 0,
    3 => 0,
    8 => 0,
    7 => 0,
    5 => 0,
    6 => 0,
    4 => 0,
    9 => 0,
    10 => 0,
    11 => 0,
  );
  $handler->display->display_options['filters']['field_wf_producer_qa']['expose']['reduce'] = 0;
  /* Filter criterion: Indexed Content: Photo Added */
  $handler->display->display_options['filters']['field_wf_photo_added']['id'] = 'field_wf_photo_added';
  $handler->display->display_options['filters']['field_wf_photo_added']['table'] = 'search_api_index_foodandwine_search';
  $handler->display->display_options['filters']['field_wf_photo_added']['field'] = 'field_wf_photo_added';
  $handler->display->display_options['filters']['field_wf_photo_added']['value'] = array();
  $handler->display->display_options['filters']['field_wf_photo_added']['group'] = 1;
  $handler->display->display_options['filters']['field_wf_photo_added']['exposed'] = TRUE;
  $handler->display->display_options['filters']['field_wf_photo_added']['expose']['operator_id'] = 'field_wf_photo_added_op';
  $handler->display->display_options['filters']['field_wf_photo_added']['expose']['label'] = 'Photo Added';
  $handler->display->display_options['filters']['field_wf_photo_added']['expose']['operator'] = 'field_wf_photo_added_op';
  $handler->display->display_options['filters']['field_wf_photo_added']['expose']['identifier'] = 'field_wf_photo_added';
  $handler->display->display_options['filters']['field_wf_photo_added']['expose']['remember_roles'] = array(
    2 => '2',
    1 => 0,
    3 => 0,
    8 => 0,
    7 => 0,
    5 => 0,
    6 => 0,
    4 => 0,
    9 => 0,
    10 => 0,
    11 => 0,
  );
  $handler->display->display_options['filters']['field_wf_photo_added']['expose']['reduce'] = 0;
  /* Filter criterion: Indexed Content: Photo QA */
  $handler->display->display_options['filters']['field_wf_photo_qa']['id'] = 'field_wf_photo_qa';
  $handler->display->display_options['filters']['field_wf_photo_qa']['table'] = 'search_api_index_foodandwine_search';
  $handler->display->display_options['filters']['field_wf_photo_qa']['field'] = 'field_wf_photo_qa';
  $handler->display->display_options['filters']['field_wf_photo_qa']['value'] = array();
  $handler->display->display_options['filters']['field_wf_photo_qa']['group'] = 1;
  $handler->display->display_options['filters']['field_wf_photo_qa']['exposed'] = TRUE;
  $handler->display->display_options['filters']['field_wf_photo_qa']['expose']['operator_id'] = 'field_wf_photo_qa_op';
  $handler->display->display_options['filters']['field_wf_photo_qa']['expose']['label'] = 'Photo QA';
  $handler->display->display_options['filters']['field_wf_photo_qa']['expose']['operator'] = 'field_wf_photo_qa_op';
  $handler->display->display_options['filters']['field_wf_photo_qa']['expose']['identifier'] = 'field_wf_photo_qa';
  $handler->display->display_options['filters']['field_wf_photo_qa']['expose']['remember_roles'] = array(
    2 => '2',
    1 => 0,
    3 => 0,
    8 => 0,
    7 => 0,
    5 => 0,
    6 => 0,
    4 => 0,
    9 => 0,
    10 => 0,
    11 => 0,
  );
  $handler->display->display_options['filters']['field_wf_photo_qa']['expose']['reduce'] = 0;
  /* Filter criterion: Indexed Content: Parsing */
  $handler->display->display_options['filters']['field_wf_parsing']['id'] = 'field_wf_parsing';
  $handler->display->display_options['filters']['field_wf_parsing']['table'] = 'search_api_index_foodandwine_search';
  $handler->display->display_options['filters']['field_wf_parsing']['field'] = 'field_wf_parsing';
  $handler->display->display_options['filters']['field_wf_parsing']['value'] = array();
  $handler->display->display_options['filters']['field_wf_parsing']['group'] = 1;
  $handler->display->display_options['filters']['field_wf_parsing']['exposed'] = TRUE;
  $handler->display->display_options['filters']['field_wf_parsing']['expose']['operator_id'] = 'field_wf_parsing_op';
  $handler->display->display_options['filters']['field_wf_parsing']['expose']['label'] = 'Parsing';
  $handler->display->display_options['filters']['field_wf_parsing']['expose']['operator'] = 'field_wf_parsing_op';
  $handler->display->display_options['filters']['field_wf_parsing']['expose']['identifier'] = 'field_wf_parsing';
  $handler->display->display_options['filters']['field_wf_parsing']['expose']['remember_roles'] = array(
    2 => '2',
    1 => 0,
    3 => 0,
    8 => 0,
    7 => 0,
    5 => 0,
    6 => 0,
    4 => 0,
    9 => 0,
    10 => 0,
    11 => 0,
  );
  $handler->display->display_options['filters']['field_wf_parsing']['expose']['reduce'] = 0;
  /* Filter criterion: Indexed Content: Parsing QA */
  $handler->display->display_options['filters']['field_wf_parsing_qa']['id'] = 'field_wf_parsing_qa';
  $handler->display->display_options['filters']['field_wf_parsing_qa']['table'] = 'search_api_index_foodandwine_search';
  $handler->display->display_options['filters']['field_wf_parsing_qa']['field'] = 'field_wf_parsing_qa';
  $handler->display->display_options['filters']['field_wf_parsing_qa']['value'] = array();
  $handler->display->display_options['filters']['field_wf_parsing_qa']['group'] = 1;
  $handler->display->display_options['filters']['field_wf_parsing_qa']['exposed'] = TRUE;
  $handler->display->display_options['filters']['field_wf_parsing_qa']['expose']['operator_id'] = 'field_wf_parsing_qa_op';
  $handler->display->display_options['filters']['field_wf_parsing_qa']['expose']['label'] = 'Parsing QA';
  $handler->display->display_options['filters']['field_wf_parsing_qa']['expose']['operator'] = 'field_wf_parsing_qa_op';
  $handler->display->display_options['filters']['field_wf_parsing_qa']['expose']['identifier'] = 'field_wf_parsing_qa';
  $handler->display->display_options['filters']['field_wf_parsing_qa']['expose']['remember_roles'] = array(
    2 => '2',
    1 => 0,
    3 => 0,
    8 => 0,
    7 => 0,
    5 => 0,
    6 => 0,
    4 => 0,
    9 => 0,
    10 => 0,
    11 => 0,
  );
  $handler->display->display_options['filters']['field_wf_parsing_qa']['expose']['reduce'] = 0;
  /* Filter criterion: Indexed Content: Edit Check 1 */
  $handler->display->display_options['filters']['field_wf_edit_check_1']['id'] = 'field_wf_edit_check_1';
  $handler->display->display_options['filters']['field_wf_edit_check_1']['table'] = 'search_api_index_foodandwine_search';
  $handler->display->display_options['filters']['field_wf_edit_check_1']['field'] = 'field_wf_edit_check_1';
  $handler->display->display_options['filters']['field_wf_edit_check_1']['value'] = array();
  $handler->display->display_options['filters']['field_wf_edit_check_1']['group'] = 1;
  $handler->display->display_options['filters']['field_wf_edit_check_1']['exposed'] = TRUE;
  $handler->display->display_options['filters']['field_wf_edit_check_1']['expose']['operator_id'] = 'field_wf_edit_check_1_op';
  $handler->display->display_options['filters']['field_wf_edit_check_1']['expose']['label'] = 'Edit Check 1';
  $handler->display->display_options['filters']['field_wf_edit_check_1']['expose']['operator'] = 'field_wf_edit_check_1_op';
  $handler->display->display_options['filters']['field_wf_edit_check_1']['expose']['identifier'] = 'field_wf_edit_check_1';
  $handler->display->display_options['filters']['field_wf_edit_check_1']['expose']['remember_roles'] = array(
    2 => '2',
    1 => 0,
    3 => 0,
    8 => 0,
    7 => 0,
    5 => 0,
    6 => 0,
    4 => 0,
    9 => 0,
    10 => 0,
    11 => 0,
  );
  $handler->display->display_options['filters']['field_wf_edit_check_1']['expose']['reduce'] = 0;
  /* Filter criterion: Indexed Content: Edit Check 2 */
  $handler->display->display_options['filters']['field_wf_edit_check_2']['id'] = 'field_wf_edit_check_2';
  $handler->display->display_options['filters']['field_wf_edit_check_2']['table'] = 'search_api_index_foodandwine_search';
  $handler->display->display_options['filters']['field_wf_edit_check_2']['field'] = 'field_wf_edit_check_2';
  $handler->display->display_options['filters']['field_wf_edit_check_2']['value'] = array();
  $handler->display->display_options['filters']['field_wf_edit_check_2']['group'] = 1;
  $handler->display->display_options['filters']['field_wf_edit_check_2']['exposed'] = TRUE;
  $handler->display->display_options['filters']['field_wf_edit_check_2']['expose']['operator_id'] = 'field_wf_edit_check_2_op';
  $handler->display->display_options['filters']['field_wf_edit_check_2']['expose']['label'] = 'Edit Check 2';
  $handler->display->display_options['filters']['field_wf_edit_check_2']['expose']['operator'] = 'field_wf_edit_check_2_op';
  $handler->display->display_options['filters']['field_wf_edit_check_2']['expose']['identifier'] = 'field_wf_edit_check_2';
  $handler->display->display_options['filters']['field_wf_edit_check_2']['expose']['remember_roles'] = array(
    2 => '2',
    1 => 0,
    3 => 0,
    8 => 0,
    7 => 0,
    5 => 0,
    6 => 0,
    4 => 0,
    9 => 0,
    10 => 0,
    11 => 0,
  );
  $handler->display->display_options['filters']['field_wf_edit_check_2']['expose']['reduce'] = 0;
  /* Filter criterion: Indexed Content: Rights Check */
  $handler->display->display_options['filters']['field_wf_rights_check']['id'] = 'field_wf_rights_check';
  $handler->display->display_options['filters']['field_wf_rights_check']['table'] = 'search_api_index_foodandwine_search';
  $handler->display->display_options['filters']['field_wf_rights_check']['field'] = 'field_wf_rights_check';
  $handler->display->display_options['filters']['field_wf_rights_check']['value'] = array();
  $handler->display->display_options['filters']['field_wf_rights_check']['group'] = 1;
  $handler->display->display_options['filters']['field_wf_rights_check']['exposed'] = TRUE;
  $handler->display->display_options['filters']['field_wf_rights_check']['expose']['operator_id'] = 'field_wf_rights_check_op';
  $handler->display->display_options['filters']['field_wf_rights_check']['expose']['label'] = 'Rights Check';
  $handler->display->display_options['filters']['field_wf_rights_check']['expose']['operator'] = 'field_wf_rights_check_op';
  $handler->display->display_options['filters']['field_wf_rights_check']['expose']['identifier'] = 'field_wf_rights_check';
  $handler->display->display_options['filters']['field_wf_rights_check']['expose']['remember_roles'] = array(
    2 => '2',
    1 => 0,
    3 => 0,
    8 => 0,
    7 => 0,
    5 => 0,
    6 => 0,
    4 => 0,
    9 => 0,
    10 => 0,
    11 => 0,
  );
  $handler->display->display_options['filters']['field_wf_rights_check']['expose']['reduce'] = 0;
  /* Filter criterion: Indexed Content: Final Check */
  $handler->display->display_options['filters']['field_wf_final_check']['id'] = 'field_wf_final_check';
  $handler->display->display_options['filters']['field_wf_final_check']['table'] = 'search_api_index_foodandwine_search';
  $handler->display->display_options['filters']['field_wf_final_check']['field'] = 'field_wf_final_check';
  $handler->display->display_options['filters']['field_wf_final_check']['value'] = array();
  $handler->display->display_options['filters']['field_wf_final_check']['group'] = 1;
  $handler->display->display_options['filters']['field_wf_final_check']['exposed'] = TRUE;
  $handler->display->display_options['filters']['field_wf_final_check']['expose']['operator_id'] = 'field_wf_final_check_op';
  $handler->display->display_options['filters']['field_wf_final_check']['expose']['label'] = 'Final Check';
  $handler->display->display_options['filters']['field_wf_final_check']['expose']['operator'] = 'field_wf_final_check_op';
  $handler->display->display_options['filters']['field_wf_final_check']['expose']['identifier'] = 'field_wf_final_check';
  $handler->display->display_options['filters']['field_wf_final_check']['expose']['remember_roles'] = array(
    2 => '2',
    1 => 0,
    3 => 0,
    8 => 0,
    7 => 0,
    5 => 0,
    6 => 0,
    4 => 0,
    9 => 0,
    10 => 0,
    11 => 0,
  );
  $handler->display->display_options['filters']['field_wf_final_check']['expose']['reduce'] = 0;
  /* Filter criterion: Indexed Content: Sponsored? */
  $handler->display->display_options['filters']['field_sponsor_flag']['id'] = 'field_sponsor_flag';
  $handler->display->display_options['filters']['field_sponsor_flag']['table'] = 'search_api_index_foodandwine_search';
  $handler->display->display_options['filters']['field_sponsor_flag']['field'] = 'field_sponsor_flag';
  $handler->display->display_options['filters']['field_sponsor_flag']['value'] = array();
  $handler->display->display_options['filters']['field_sponsor_flag']['group'] = 1;
  $handler->display->display_options['filters']['field_sponsor_flag']['exposed'] = TRUE;
  $handler->display->display_options['filters']['field_sponsor_flag']['expose']['operator_id'] = 'field_sponsor_flag_op';
  $handler->display->display_options['filters']['field_sponsor_flag']['expose']['label'] = 'Sponsored';
  $handler->display->display_options['filters']['field_sponsor_flag']['expose']['operator'] = 'field_sponsor_flag_op';
  $handler->display->display_options['filters']['field_sponsor_flag']['expose']['identifier'] = 'field_sponsor_flag';
  $handler->display->display_options['filters']['field_sponsor_flag']['expose']['remember_roles'] = array(
    2 => '2',
    1 => 0,
    3 => 0,
    8 => 0,
    7 => 0,
    5 => 0,
    6 => 0,
    4 => 0,
    9 => 0,
    10 => 0,
    11 => 0,
  );
  $handler->display->display_options['filters']['field_sponsor_flag']['expose']['reduce'] = 0;
  /* Filter criterion: Indexed Content: Sponsor List */
  $handler->display->display_options['filters']['field_sponsor_list']['id'] = 'field_sponsor_list';
  $handler->display->display_options['filters']['field_sponsor_list']['table'] = 'search_api_index_foodandwine_search';
  $handler->display->display_options['filters']['field_sponsor_list']['field'] = 'field_sponsor_list';
  $handler->display->display_options['filters']['field_sponsor_list']['group'] = 1;
  $handler->display->display_options['filters']['field_sponsor_list']['exposed'] = TRUE;
  $handler->display->display_options['filters']['field_sponsor_list']['expose']['operator_id'] = 'field_sponsor_list_op';
  $handler->display->display_options['filters']['field_sponsor_list']['expose']['label'] = 'Sponsor Name';
  $handler->display->display_options['filters']['field_sponsor_list']['expose']['operator'] = 'field_sponsor_list_op';
  $handler->display->display_options['filters']['field_sponsor_list']['expose']['identifier'] = 'field_sponsor_list';
  $handler->display->display_options['filters']['field_sponsor_list']['expose']['remember_roles'] = array(
    2 => '2',
    1 => 0,
    3 => 0,
    8 => 0,
    7 => 0,
    5 => 0,
    6 => 0,
    4 => 0,
    9 => 0,
    10 => 0,
    11 => 0,
  );
  /* Filter criterion: Indexed Content: Rights */
  $handler->display->display_options['filters']['field_ets_rights']['id'] = 'field_ets_rights';
  $handler->display->display_options['filters']['field_ets_rights']['table'] = 'search_api_index_foodandwine_search';
  $handler->display->display_options['filters']['field_ets_rights']['field'] = 'field_ets_rights';
  $handler->display->display_options['filters']['field_ets_rights']['value'] = array();
  $handler->display->display_options['filters']['field_ets_rights']['group'] = 1;
  $handler->display->display_options['filters']['field_ets_rights']['exposed'] = TRUE;
  $handler->display->display_options['filters']['field_ets_rights']['expose']['operator_id'] = 'field_ets_rights_op';
  $handler->display->display_options['filters']['field_ets_rights']['expose']['label'] = 'Recipe Rights';
  $handler->display->display_options['filters']['field_ets_rights']['expose']['operator'] = 'field_ets_rights_op';
  $handler->display->display_options['filters']['field_ets_rights']['expose']['identifier'] = 'field_ets_rights';
  $handler->display->display_options['filters']['field_ets_rights']['expose']['remember_roles'] = array(
    2 => '2',
    1 => 0,
    3 => 0,
    8 => 0,
    7 => 0,
    5 => 0,
    6 => 0,
    4 => 0,
    9 => 0,
    10 => 0,
    11 => 0,
  );
  $handler->display->display_options['filters']['field_ets_rights']['expose']['reduce'] = 0;
  /* Filter criterion: Indexed Content: Rights */
  $handler->display->display_options['filters']['field_image_rights']['id'] = 'field_image_rights';
  $handler->display->display_options['filters']['field_image_rights']['table'] = 'search_api_index_foodandwine_search';
  $handler->display->display_options['filters']['field_image_rights']['field'] = 'field_image_rights';
  $handler->display->display_options['filters']['field_image_rights']['value'] = array();
  $handler->display->display_options['filters']['field_image_rights']['group'] = 1;
  $handler->display->display_options['filters']['field_image_rights']['exposed'] = TRUE;
  $handler->display->display_options['filters']['field_image_rights']['expose']['operator_id'] = 'field_image_rights_op';
  $handler->display->display_options['filters']['field_image_rights']['expose']['label'] = 'Photo Rights';
  $handler->display->display_options['filters']['field_image_rights']['expose']['operator'] = 'field_image_rights_op';
  $handler->display->display_options['filters']['field_image_rights']['expose']['identifier'] = 'field_image_rights';
  $handler->display->display_options['filters']['field_image_rights']['expose']['remember_roles'] = array(
    2 => '2',
    1 => 0,
    3 => 0,
    8 => 0,
    7 => 0,
    5 => 0,
    6 => 0,
    4 => 0,
    9 => 0,
    10 => 0,
    11 => 0,
  );
  $handler->display->display_options['filters']['field_image_rights']['type'] = 'select';

  /* Display: Page */
  $handler = $view->new_display('page', 'Page', 'page');
  $handler->display->display_options['path'] = 'admin/recipe-search';
  $export['advanced_recipe_backend_search'] = $view;

  $view = new view();
  $view->name = 'blog_topics_facets';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'search_api_index_foodandwine_search';
  $view->human_name = 'Blog Topics Facets';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['title'] = 'Topics';
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['access']['type'] = 'none';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['pager']['type'] = 'some';
  $handler->display->display_options['pager']['options']['items_per_page'] = '5';
  $handler->display->display_options['style_plugin'] = 'grid';
  $handler->display->display_options['style_options']['grouping'] = array(
    0 => array(
      'field' => '',
      'rendered' => 1,
      'rendered_strip' => 0,
    ),
  );
  $handler->display->display_options['style_options']['columns'] = '1';
  $handler->display->display_options['style_options']['alignment'] = 'vertical';
  $handler->display->display_options['row_plugin'] = 'fields';
  $handler->display->display_options['row_options']['hide_empty'] = TRUE;
  /* Field: Topic: Label (indexed) */
  $handler->display->display_options['fields']['field_topic_field_taxo_topic_label']['id'] = 'field_topic_field_taxo_topic_label';
  $handler->display->display_options['fields']['field_topic_field_taxo_topic_label']['table'] = 'search_api_index_foodandwine_search';
  $handler->display->display_options['fields']['field_topic_field_taxo_topic_label']['field'] = 'field_topic_field_taxo_topic_label';
  $handler->display->display_options['fields']['field_topic_field_taxo_topic_label']['label'] = '';
  $handler->display->display_options['fields']['field_topic_field_taxo_topic_label']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_topic_field_taxo_topic_label']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_topic_field_taxo_topic_label']['type'] = 'text_plain';
  /* Field: Indexed Content: Topic */
  $handler->display->display_options['fields']['field_topic']['id'] = 'field_topic';
  $handler->display->display_options['fields']['field_topic']['table'] = 'search_api_index_foodandwine_search';
  $handler->display->display_options['fields']['field_topic']['field'] = 'field_topic';
  $handler->display->display_options['fields']['field_topic']['label'] = '';
  $handler->display->display_options['fields']['field_topic']['alter']['make_link'] = TRUE;
  $handler->display->display_options['fields']['field_topic']['alter']['path'] = 'blogs/[field_topic_field_taxo_topic_label]';
  $handler->display->display_options['fields']['field_topic']['alter']['max_length'] = '18';
  $handler->display->display_options['fields']['field_topic']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['field_topic']['alter']['trim'] = TRUE;
  $handler->display->display_options['fields']['field_topic']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_topic']['link_to_entity'] = 0;
  $handler->display->display_options['fields']['field_topic']['view_mode'] = 'full';
  $handler->display->display_options['fields']['field_topic']['bypass_access'] = 0;

  /* Display: Facets block horiz */
  $handler = $view->new_display('search_api_views_facets_block', 'Facets block horiz', 'search_api_views_facets_block_1');
  $handler->display->display_options['pager']['type'] = 'some';
  $handler->display->display_options['facet_field'] = 'field_topic';

  /* Display: Facets block vertical */
  $handler = $view->new_display('search_api_views_facets_block', 'Facets block vertical', 'search_api_views_facets_block_2');
  $handler->display->display_options['pager']['type'] = 'some';
  $handler->display->display_options['facet_field'] = 'field_topic';
  $export['blog_topics_facets'] = $view;

  $view = new view();
  $view->name = 'foodandwine_search';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'search_api_index_foodandwine_search';
  $view->human_name = 'FoodAndWine Search';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['css_class'] = 'search-directory-wrapper';
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['access']['type'] = 'none';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['pager']['type'] = 'full';
  $handler->display->display_options['pager']['options']['items_per_page'] = '10';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['pager']['options']['id'] = '0';
  $handler->display->display_options['pager']['options']['quantity'] = '9';
  $handler->display->display_options['pager']['options']['expose']['items_per_page_options'] = '10, 25, 50';
  $handler->display->display_options['pager']['options']['tags']['previous'] = '‹ prev';
  $handler->display->display_options['style_plugin'] = 'default';
  $handler->display->display_options['style_options']['row_class'] = 'result-row result-text';
  $handler->display->display_options['row_plugin'] = 'fields';
  /* Header: Global: Result summary */
  $handler->display->display_options['header']['result']['id'] = 'result';
  $handler->display->display_options['header']['result']['table'] = 'views';
  $handler->display->display_options['header']['result']['field'] = 'result';
  $handler->display->display_options['header']['result']['content'] = '<div class="views-result"><div class="results-count">
Showing @start - @end of @total</div>
</div>';
  /* Footer: Global: Result summary */
  $handler->display->display_options['footer']['result']['id'] = 'result';
  $handler->display->display_options['footer']['result']['table'] = 'views';
  $handler->display->display_options['footer']['result']['field'] = 'result';
  $handler->display->display_options['footer']['result']['content'] = '@total Results';
  /* No results behavior: Global: Text area */
  $handler->display->display_options['empty']['area']['id'] = 'area';
  $handler->display->display_options['empty']['area']['table'] = 'views';
  $handler->display->display_options['empty']['area']['field'] = 'area';
  $handler->display->display_options['empty']['area']['empty'] = TRUE;
  $handler->display->display_options['empty']['area']['content'] = 'No Matches Found';
  $handler->display->display_options['empty']['area']['format'] = 'wysiwyg';
  /* Field: Indexed Content: Featured Image */
  $handler->display->display_options['fields']['field_images']['id'] = 'field_images';
  $handler->display->display_options['fields']['field_images']['table'] = 'search_api_index_foodandwine_search';
  $handler->display->display_options['fields']['field_images']['field'] = 'field_images';
  $handler->display->display_options['fields']['field_images']['label'] = '';
  $handler->display->display_options['fields']['field_images']['element_class'] = 'result-thumbnail';
  $handler->display->display_options['fields']['field_images']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_images']['link_to_entity'] = 0;
  $handler->display->display_options['fields']['field_images']['display'] = 'id';
  $handler->display->display_options['fields']['field_images']['view_mode'] = 'full';
  $handler->display->display_options['fields']['field_images']['bypass_access'] = 0;
  /* Field: Indexed Content: Content type */
  $handler->display->display_options['fields']['type']['id'] = 'type';
  $handler->display->display_options['fields']['type']['table'] = 'search_api_index_foodandwine_search';
  $handler->display->display_options['fields']['type']['field'] = 'type';
  $handler->display->display_options['fields']['type']['label'] = '';
  $handler->display->display_options['fields']['type']['element_class'] = 'result-type';
  $handler->display->display_options['fields']['type']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['type']['link_to_entity'] = 0;
  $handler->display->display_options['fields']['type']['format_name'] = 1;
  /* Field: Indexed Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'search_api_index_foodandwine_search';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['element_class'] = 'result-title';
  $handler->display->display_options['fields']['title']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['title']['link_to_entity'] = 1;
  /* Field: Issue: Label (indexed) */
  $handler->display->display_options['fields']['field_issue_field_taxo_issue_label']['id'] = 'field_issue_field_taxo_issue_label';
  $handler->display->display_options['fields']['field_issue_field_taxo_issue_label']['table'] = 'search_api_index_foodandwine_search';
  $handler->display->display_options['fields']['field_issue_field_taxo_issue_label']['field'] = 'field_issue_field_taxo_issue_label';
  $handler->display->display_options['fields']['field_issue_field_taxo_issue_label']['label'] = '';
  $handler->display->display_options['fields']['field_issue_field_taxo_issue_label']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_issue_field_taxo_issue_label']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_issue_field_taxo_issue_label']['hide_empty'] = TRUE;
  /* Field: Indexed Content: Author */
  $handler->display->display_options['fields']['field_author']['id'] = 'field_author';
  $handler->display->display_options['fields']['field_author']['table'] = 'search_api_index_foodandwine_search';
  $handler->display->display_options['fields']['field_author']['field'] = 'field_author';
  $handler->display->display_options['fields']['field_author']['label'] = '';
  $handler->display->display_options['fields']['field_author']['alter']['text'] = '[field_author]  [field_issue] ';
  $handler->display->display_options['fields']['field_author']['element_class'] = 'chef';
  $handler->display->display_options['fields']['field_author']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_author']['hide_empty'] = TRUE;
  $handler->display->display_options['fields']['field_author']['link_to_entity'] = 0;
  $handler->display->display_options['fields']['field_author']['view_mode'] = 'full';
  $handler->display->display_options['fields']['field_author']['bypass_access'] = 0;
  /* Field: Indexed Content: Chefs */
  $handler->display->display_options['fields']['field_chefs_author']['id'] = 'field_chefs_author';
  $handler->display->display_options['fields']['field_chefs_author']['table'] = 'search_api_index_foodandwine_search';
  $handler->display->display_options['fields']['field_chefs_author']['field'] = 'field_chefs_author';
  $handler->display->display_options['fields']['field_chefs_author']['label'] = '';
  $handler->display->display_options['fields']['field_chefs_author']['element_class'] = 'chef';
  $handler->display->display_options['fields']['field_chefs_author']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_chefs_author']['link_to_entity'] = 1;
  $handler->display->display_options['fields']['field_chefs_author']['view_mode'] = 'full';
  $handler->display->display_options['fields']['field_chefs_author']['bypass_access'] = 0;
  /* Field: Indexed Content: Issue */
  $handler->display->display_options['fields']['field_issue']['id'] = 'field_issue';
  $handler->display->display_options['fields']['field_issue']['table'] = 'search_api_index_foodandwine_search';
  $handler->display->display_options['fields']['field_issue']['field'] = 'field_issue';
  $handler->display->display_options['fields']['field_issue']['label'] = '';
  $handler->display->display_options['fields']['field_issue']['alter']['make_link'] = TRUE;
  $handler->display->display_options['fields']['field_issue']['alter']['path'] = 'monthly/[field_issue_field_taxo_issue_label]';
  $handler->display->display_options['fields']['field_issue']['alter']['prefix'] = '• ';
  $handler->display->display_options['fields']['field_issue']['element_class'] = 'chef';
  $handler->display->display_options['fields']['field_issue']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_issue']['link_to_entity'] = 0;
  $handler->display->display_options['fields']['field_issue']['view_mode'] = 'full';
  $handler->display->display_options['fields']['field_issue']['bypass_access'] = 0;
  /* Field: Indexed Content: Excerpt */
  $handler->display->display_options['fields']['field_deck']['id'] = 'field_deck';
  $handler->display->display_options['fields']['field_deck']['table'] = 'search_api_index_foodandwine_search';
  $handler->display->display_options['fields']['field_deck']['field'] = 'field_deck';
  $handler->display->display_options['fields']['field_deck']['label'] = '';
  $handler->display->display_options['fields']['field_deck']['alter']['max_length'] = '125';
  $handler->display->display_options['fields']['field_deck']['alter']['trim'] = TRUE;
  $handler->display->display_options['fields']['field_deck']['element_label_colon'] = FALSE;
  /* Field: Indexed Content: Complex Theme */
  $handler->display->display_options['fields']['field_complex_theme']['id'] = 'field_complex_theme';
  $handler->display->display_options['fields']['field_complex_theme']['table'] = 'search_api_index_foodandwine_search';
  $handler->display->display_options['fields']['field_complex_theme']['field'] = 'field_complex_theme';
  $handler->display->display_options['fields']['field_complex_theme']['label'] = '';
  $handler->display->display_options['fields']['field_complex_theme']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_complex_theme']['hide_empty'] = TRUE;
  $handler->display->display_options['fields']['field_complex_theme']['list']['separator'] = ',';
  $handler->display->display_options['fields']['field_complex_theme']['link_to_entity'] = 0;
  $handler->display->display_options['fields']['field_complex_theme']['view_mode'] = 'full';
  $handler->display->display_options['fields']['field_complex_theme']['bypass_access'] = 0;
  /* Field: Indexed Content: Published at */
  $handler->display->display_options['fields']['published_at']['id'] = 'published_at';
  $handler->display->display_options['fields']['published_at']['table'] = 'search_api_index_foodandwine_search';
  $handler->display->display_options['fields']['published_at']['field'] = 'published_at';
  $handler->display->display_options['fields']['published_at']['label'] = '';
  $handler->display->display_options['fields']['published_at']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['published_at']['date_format'] = 'short';
  $handler->display->display_options['fields']['published_at']['second_date_format'] = 'long';
  $handler->display->display_options['fields']['published_at']['link_to_entity'] = 0;
  /* Sort criterion: Search: Relevance */
  $handler->display->display_options['sorts']['search_api_relevance']['id'] = 'search_api_relevance';
  $handler->display->display_options['sorts']['search_api_relevance']['table'] = 'search_api_index_foodandwine_search';
  $handler->display->display_options['sorts']['search_api_relevance']['field'] = 'search_api_relevance';
  $handler->display->display_options['sorts']['search_api_relevance']['order'] = 'DESC';
  $handler->display->display_options['sorts']['search_api_relevance']['exposed'] = TRUE;
  $handler->display->display_options['sorts']['search_api_relevance']['expose']['label'] = 'Relevance';
  /* Sort criterion: Indexed Content: Published at */
  $handler->display->display_options['sorts']['published_at']['id'] = 'published_at';
  $handler->display->display_options['sorts']['published_at']['table'] = 'search_api_index_foodandwine_search';
  $handler->display->display_options['sorts']['published_at']['field'] = 'published_at';
  $handler->display->display_options['sorts']['published_at']['order'] = 'DESC';
  $handler->display->display_options['sorts']['published_at']['exposed'] = TRUE;
  $handler->display->display_options['sorts']['published_at']['expose']['label'] = 'Date Published';
  /* Sort criterion: Indexed Content: Featured Image */
  $handler->display->display_options['sorts']['field_images']['id'] = 'field_images';
  $handler->display->display_options['sorts']['field_images']['table'] = 'search_api_index_foodandwine_search';
  $handler->display->display_options['sorts']['field_images']['field'] = 'field_images';
  $handler->display->display_options['sorts']['field_images']['order'] = 'DESC';
  $handler->display->display_options['sorts']['field_images']['exposed'] = TRUE;
  $handler->display->display_options['sorts']['field_images']['expose']['label'] = 'Photos Only';
  /* Filter criterion: Indexed Content: Content type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'search_api_index_foodandwine_search';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'article' => 'article',
    'recipe' => 'recipe',
  );
  /* Filter criterion: Search: Fulltext search */
  $handler->display->display_options['filters']['search_api_views_fulltext']['id'] = 'search_api_views_fulltext';
  $handler->display->display_options['filters']['search_api_views_fulltext']['table'] = 'search_api_index_foodandwine_search';
  $handler->display->display_options['filters']['search_api_views_fulltext']['field'] = 'search_api_views_fulltext';
  $handler->display->display_options['filters']['search_api_views_fulltext']['operator'] = 'OR';
  $handler->display->display_options['filters']['search_api_views_fulltext']['exposed'] = TRUE;
  $handler->display->display_options['filters']['search_api_views_fulltext']['expose']['operator_id'] = 'search_api_views_fulltext_op';
  $handler->display->display_options['filters']['search_api_views_fulltext']['expose']['operator'] = 'search_api_views_fulltext_op';
  $handler->display->display_options['filters']['search_api_views_fulltext']['expose']['identifier'] = 'keyword';
  $handler->display->display_options['filters']['search_api_views_fulltext']['expose']['required'] = TRUE;
  $handler->display->display_options['filters']['search_api_views_fulltext']['expose']['remember'] = TRUE;
  $handler->display->display_options['filters']['search_api_views_fulltext']['expose']['remember_roles'] = array(
    2 => '2',
    1 => '1',
    3 => 0,
    8 => 0,
    7 => 0,
    5 => 0,
    6 => 0,
    4 => 0,
    9 => 0,
    10 => 0,
    11 => 0,
  );
  $handler->display->display_options['filters']['search_api_views_fulltext']['fields'] = array(
    'title' => 'title',
    'body:value' => 'body:value',
    'field_deck:value' => 'field_deck:value',
  );
  /* Filter criterion: Indexed Content: Status */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'search_api_index_foodandwine_search';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = array(
    1 => '1',
  );

  /* Display: Page */
  $handler = $view->new_display('page', 'Page', 'page');
  $handler->display->display_options['defaults']['filter_groups'] = FALSE;
  $handler->display->display_options['defaults']['filters'] = FALSE;
  /* Filter criterion: Indexed Content: Content type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'search_api_index_foodandwine_search';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'article' => 'article',
    'blog' => 'blog',
    'gallery' => 'gallery',
    'recipe' => 'recipe',
    'video' => 'video',
  );
  /* Filter criterion: Search: Fulltext search */
  $handler->display->display_options['filters']['search_api_views_fulltext']['id'] = 'search_api_views_fulltext';
  $handler->display->display_options['filters']['search_api_views_fulltext']['table'] = 'search_api_index_foodandwine_search';
  $handler->display->display_options['filters']['search_api_views_fulltext']['field'] = 'search_api_views_fulltext';
  $handler->display->display_options['filters']['search_api_views_fulltext']['operator'] = 'OR';
  $handler->display->display_options['filters']['search_api_views_fulltext']['exposed'] = TRUE;
  $handler->display->display_options['filters']['search_api_views_fulltext']['expose']['operator_id'] = 'search_api_views_fulltext_op';
  $handler->display->display_options['filters']['search_api_views_fulltext']['expose']['operator'] = 'search_api_views_fulltext_op';
  $handler->display->display_options['filters']['search_api_views_fulltext']['expose']['identifier'] = 'keyword';
  $handler->display->display_options['filters']['search_api_views_fulltext']['expose']['required'] = TRUE;
  $handler->display->display_options['filters']['search_api_views_fulltext']['expose']['remember'] = TRUE;
  $handler->display->display_options['filters']['search_api_views_fulltext']['expose']['remember_roles'] = array(
    2 => '2',
    1 => '1',
    3 => 0,
    8 => 0,
    7 => 0,
    5 => 0,
    6 => 0,
    4 => 0,
    9 => 0,
    10 => 0,
    11 => 0,
  );
  $handler->display->display_options['filters']['search_api_views_fulltext']['fields'] = array(
    'title' => 'title',
    'body:value' => 'body:value',
    'field_deck:value' => 'field_deck:value',
  );
  /* Filter criterion: Indexed Content: Status */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'search_api_index_foodandwine_search';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = array(
    1 => '1',
  );
  $handler->display->display_options['metatags'] = array(
    'robots' => array(
      'value' => array(
        'noindex' => 'noindex',
        'nofollow' => 'nofollow',
        'index' => 0,
        'follow' => 0,
        'noarchive' => 0,
        'nosnippet' => 0,
        'noodp' => 0,
        'noydir' => 0,
      ),
    ),
  );
  $handler->display->display_options['path'] = 'search_temp';
  $export['foodandwine_search'] = $view;

  return $export;
}
