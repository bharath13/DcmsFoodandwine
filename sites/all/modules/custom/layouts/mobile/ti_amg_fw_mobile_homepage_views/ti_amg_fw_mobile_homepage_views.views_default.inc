<?php
/**
 * @file
 * ti_amg_fw_mobile_homepage_views.views_default.inc
 */

/**
 * Implements hook_views_default_views().
 */
function ti_amg_fw_mobile_homepage_views_views_default_views() {
  $export = array();

  $view = new view();
  $view->name = 'foodandwine_mobile_search';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'search_api_index_foodandwine_search';
  $view->human_name = 'FoodAndWine Mobile Search';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['css_class'] = 'mobile-search-view mobile-view';
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['access']['type'] = 'none';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['pager']['type'] = 'mini';
  $handler->display->display_options['pager']['options']['items_per_page'] = '10';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['pager']['options']['id'] = '0';
  $handler->display->display_options['pager']['options']['expose']['items_per_page_options'] = '10, 25, 50';
  $handler->display->display_options['pager']['options']['tags']['previous'] = 'Previous';
  $handler->display->display_options['pager']['options']['tags']['next'] = 'Next';
  $handler->display->display_options['style_plugin'] = 'default';
  $handler->display->display_options['style_options']['row_class'] = 'result-row result-text';
  $handler->display->display_options['row_plugin'] = 'fields';
  /* Header: Global: Result summary */
  $handler->display->display_options['header']['result']['id'] = 'result';
  $handler->display->display_options['header']['result']['table'] = 'views';
  $handler->display->display_options['header']['result']['field'] = 'result';
  $handler->display->display_options['header']['result']['content'] = '<div class="result-count-header">
<h4>Results</h4>
<div class="info">Showing @start - @end of @total</div>
</div>';
  /* No results behavior: Global: Text area */
  $handler->display->display_options['empty']['area']['id'] = 'area';
  $handler->display->display_options['empty']['area']['table'] = 'views';
  $handler->display->display_options['empty']['area']['field'] = 'area';
  $handler->display->display_options['empty']['area']['empty'] = TRUE;
  $handler->display->display_options['empty']['area']['content'] = 'No Matches Found';
  $handler->display->display_options['empty']['area']['format'] = 'wysiwyg';
  /* Field: Indexed Content: Main Image */
  $handler->display->display_options['fields']['field_images']['id'] = 'field_images';
  $handler->display->display_options['fields']['field_images']['table'] = 'search_api_index_foodandwine_search';
  $handler->display->display_options['fields']['field_images']['field'] = 'field_images';
  $handler->display->display_options['fields']['field_images']['label'] = '';
  $handler->display->display_options['fields']['field_images']['element_class'] = 'result-image';
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
  $handler->display->display_options['fields']['field_chefs_author']['link_to_entity'] = 0;
  $handler->display->display_options['fields']['field_chefs_author']['view_mode'] = 'full';
  $handler->display->display_options['fields']['field_chefs_author']['bypass_access'] = 0;
  /* Field: Indexed Content: Issue */
  $handler->display->display_options['fields']['field_issue']['id'] = 'field_issue';
  $handler->display->display_options['fields']['field_issue']['table'] = 'search_api_index_foodandwine_search';
  $handler->display->display_options['fields']['field_issue']['field'] = 'field_issue';
  $handler->display->display_options['fields']['field_issue']['label'] = '';
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
  $handler->display->display_options['sorts']['published_at']['expose']['label'] = 'Published at';
  /* Sort criterion: Indexed Content: Main Image */
  $handler->display->display_options['sorts']['field_images']['id'] = 'field_images';
  $handler->display->display_options['sorts']['field_images']['table'] = 'search_api_index_foodandwine_search';
  $handler->display->display_options['sorts']['field_images']['field'] = 'field_images';
  $handler->display->display_options['sorts']['field_images']['order'] = 'DESC';
  $handler->display->display_options['sorts']['field_images']['exposed'] = TRUE;
  $handler->display->display_options['sorts']['field_images']['expose']['label'] = 'Recipe Images';
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
  $handler->display->display_options['filters']['search_api_views_fulltext']['expose']['label'] = 'Fulltext search';
  $handler->display->display_options['filters']['search_api_views_fulltext']['expose']['operator'] = 'search_api_views_fulltext_op';
  $handler->display->display_options['filters']['search_api_views_fulltext']['expose']['identifier'] = 'keyword';
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
  $handler->display->display_options['exposed_block'] = TRUE;
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
  $handler->display->display_options['path'] = 'search_temp.mobi';
  $export['foodandwine_mobile_search'] = $view;

  $view = new view();
  $view->name = 'ti_amg_fw_mobile_blog_blocks';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'node';
  $view->human_name = 'TI AMG FW Mobile Blog Blocks';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['css_class'] = 'mobile-home-blogs-top mobile-home-blogs mobile-view';
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['access']['type'] = 'perm';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['pager']['type'] = 'some';
  $handler->display->display_options['pager']['options']['items_per_page'] = '3';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['style_plugin'] = 'default';
  $handler->display->display_options['row_plugin'] = 'fields';
  /* Header: Global: Text area */
  $handler->display->display_options['header']['area']['id'] = 'area';
  $handler->display->display_options['header']['area']['table'] = 'views';
  $handler->display->display_options['header']['area']['field'] = 'area';
  $handler->display->display_options['header']['area']['content'] = '<h2>Editor Picks</h2>';
  $handler->display->display_options['header']['area']['format'] = 'wysiwyg';
  /* Relationship: Entity Reference: Referenced Entity */
  $handler->display->display_options['relationships']['field_images_target_id']['id'] = 'field_images_target_id';
  $handler->display->display_options['relationships']['field_images_target_id']['table'] = 'field_data_field_images';
  $handler->display->display_options['relationships']['field_images_target_id']['field'] = 'field_images_target_id';
  /* Field: Content: Path */
  $handler->display->display_options['fields']['path']['id'] = 'path';
  $handler->display->display_options['fields']['path']['table'] = 'node';
  $handler->display->display_options['fields']['path']['field'] = 'path';
  $handler->display->display_options['fields']['path']['label'] = '';
  $handler->display->display_options['fields']['path']['exclude'] = TRUE;
  $handler->display->display_options['fields']['path']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['path']['absolute'] = TRUE;
  /* Field: Field: Tags */
  $handler->display->display_options['fields']['field_tags']['id'] = 'field_tags';
  $handler->display->display_options['fields']['field_tags']['table'] = 'field_data_field_tags';
  $handler->display->display_options['fields']['field_tags']['field'] = 'field_tags';
  $handler->display->display_options['fields']['field_tags']['label'] = '';
  $handler->display->display_options['fields']['field_tags']['alter']['text'] = '<p class="caption">[field_tags]</p>';
  $handler->display->display_options['fields']['field_tags']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_tags']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['field_tags']['hide_empty'] = TRUE;
  $handler->display->display_options['fields']['field_tags']['type'] = 'taxonomy_term_reference_plain';
  $handler->display->display_options['fields']['field_tags']['delta_limit'] = '1';
  $handler->display->display_options['fields']['field_tags']['delta_offset'] = '0';
  $handler->display->display_options['fields']['field_tags']['field_api_classes'] = TRUE;
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  $handler->display->display_options['fields']['title']['element_type'] = 'h2';
  $handler->display->display_options['fields']['title']['element_label_colon'] = FALSE;
  /* Field: Content: Author */
  $handler->display->display_options['fields']['field_author']['id'] = 'field_author';
  $handler->display->display_options['fields']['field_author']['table'] = 'field_data_field_author';
  $handler->display->display_options['fields']['field_author']['field'] = 'field_author';
  $handler->display->display_options['fields']['field_author']['label'] = '';
  $handler->display->display_options['fields']['field_author']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_author']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['field_author']['alter']['text'] = '<span>By</span> [field_author] |';
  $handler->display->display_options['fields']['field_author']['element_type'] = '0';
  $handler->display->display_options['fields']['field_author']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_author']['element_wrapper_type'] = '0';
  $handler->display->display_options['fields']['field_author']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['field_author']['hide_empty'] = TRUE;
  $handler->display->display_options['fields']['field_author']['settings'] = array(
    'link' => 1,
  );
  $handler->display->display_options['fields']['field_author']['field_api_classes'] = TRUE;
  /* Field: Node: Published at */
  $handler->display->display_options['fields']['published_at']['id'] = 'published_at';
  $handler->display->display_options['fields']['published_at']['table'] = 'publication_date';
  $handler->display->display_options['fields']['published_at']['field'] = 'published_at';
  $handler->display->display_options['fields']['published_at']['label'] = '';
  $handler->display->display_options['fields']['published_at']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['published_at']['alter']['text'] = '[field_author] [published_at] ago';
  $handler->display->display_options['fields']['published_at']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['published_at']['date_format'] = 'raw time ago';
  $handler->display->display_options['fields']['published_at']['custom_date_format'] = '1';
  /* Field: Content: Image */
  $handler->display->display_options['fields']['field_image']['id'] = 'field_image';
  $handler->display->display_options['fields']['field_image']['table'] = 'field_data_field_image';
  $handler->display->display_options['fields']['field_image']['field'] = 'field_image';
  $handler->display->display_options['fields']['field_image']['relationship'] = 'field_images_target_id';
  $handler->display->display_options['fields']['field_image']['label'] = '';
  $handler->display->display_options['fields']['field_image']['element_type'] = '0';
  $handler->display->display_options['fields']['field_image']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_image']['element_wrapper_type'] = '0';
  $handler->display->display_options['fields']['field_image']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['field_image']['empty'] = '<div class="field field-name-field-image"><a href="[path]"><img src="/sites/all/themes/foodandwine/images/fw-default-img.jpeg" height="550" width="550"/></a></div>';
  $handler->display->display_options['fields']['field_image']['hide_empty'] = TRUE;
  $handler->display->display_options['fields']['field_image']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_image']['settings'] = array(
    'image_style' => '',
    'image_link' => 'content',
  );
  $handler->display->display_options['fields']['field_image']['field_api_classes'] = TRUE;
  /* Field: Content: Body */
  $handler->display->display_options['fields']['body']['id'] = 'body';
  $handler->display->display_options['fields']['body']['table'] = 'field_data_body';
  $handler->display->display_options['fields']['body']['field'] = 'body';
  $handler->display->display_options['fields']['body']['label'] = '';
  $handler->display->display_options['fields']['body']['alter']['max_length'] = '200';
  $handler->display->display_options['fields']['body']['alter']['more_link_text'] = 'Read More';
  $handler->display->display_options['fields']['body']['alter']['more_link_path'] = '[path]';
  $handler->display->display_options['fields']['body']['alter']['preserve_tags'] = '200';
  $handler->display->display_options['fields']['body']['element_type'] = '0';
  $handler->display->display_options['fields']['body']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['body']['element_wrapper_type'] = '0';
  $handler->display->display_options['fields']['body']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['body']['hide_empty'] = TRUE;
  $handler->display->display_options['fields']['body']['type'] = 'text_trimmed';
  $handler->display->display_options['fields']['body']['settings'] = array(
    'trim_length' => '200',
  );
  $handler->display->display_options['fields']['body']['field_api_classes'] = TRUE;
  /* Sort criterion: Node: Published at */
  $handler->display->display_options['sorts']['published_at']['id'] = 'published_at';
  $handler->display->display_options['sorts']['published_at']['table'] = 'publication_date';
  $handler->display->display_options['sorts']['published_at']['field'] = 'published_at';
  $handler->display->display_options['sorts']['published_at']['order'] = 'DESC';
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

  /* Display: Blogs Landing */
  $handler = $view->new_display('block', 'Blogs Landing', 'block_1');
  $handler->display->display_options['defaults']['css_class'] = FALSE;
  $handler->display->display_options['css_class'] = 'mobile-home-blogs-bottom mobile-home-blogs mobile-view';
  $handler->display->display_options['defaults']['pager'] = FALSE;
  $handler->display->display_options['pager']['type'] = 'mini';
  $handler->display->display_options['pager']['options']['items_per_page'] = '5';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['pager']['options']['id'] = '0';
  $handler->display->display_options['pager']['options']['tags']['previous'] = 'previous';
  $handler->display->display_options['pager']['options']['tags']['next'] = 'next';
  $handler->display->display_options['defaults']['header'] = FALSE;
  /* Header: Global: Text area */
  $handler->display->display_options['header']['area']['id'] = 'area';
  $handler->display->display_options['header']['area']['table'] = 'views';
  $handler->display->display_options['header']['area']['field'] = 'area';
  $handler->display->display_options['header']['area']['content'] = '<div id="blogbanner-title"></div>';
  $handler->display->display_options['header']['area']['format'] = 'wysiwyg';
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
  $handler->display->display_options['fields']['field_image']['hide_empty'] = TRUE;
  $handler->display->display_options['fields']['field_image']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_image']['settings'] = array(
    'image_style' => '150x150',
    'image_link' => '',
  );
  $handler->display->display_options['fields']['field_image']['field_api_classes'] = TRUE;
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  $handler->display->display_options['fields']['title']['element_type'] = 'h2';
  $handler->display->display_options['fields']['title']['element_label_colon'] = FALSE;
  /* Field: Content: Author */
  $handler->display->display_options['fields']['field_author']['id'] = 'field_author';
  $handler->display->display_options['fields']['field_author']['table'] = 'field_data_field_author';
  $handler->display->display_options['fields']['field_author']['field'] = 'field_author';
  $handler->display->display_options['fields']['field_author']['label'] = '';
  $handler->display->display_options['fields']['field_author']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_author']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['field_author']['alter']['text'] = '[field_author] . ';
  $handler->display->display_options['fields']['field_author']['element_type'] = '0';
  $handler->display->display_options['fields']['field_author']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_author']['element_wrapper_type'] = '0';
  $handler->display->display_options['fields']['field_author']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['field_author']['hide_empty'] = TRUE;
  $handler->display->display_options['fields']['field_author']['settings'] = array(
    'link' => 0,
  );
  $handler->display->display_options['fields']['field_author']['delta_offset'] = '0';
  $handler->display->display_options['fields']['field_author']['field_api_classes'] = TRUE;
  /* Field: Node: Published at */
  $handler->display->display_options['fields']['published_at']['id'] = 'published_at';
  $handler->display->display_options['fields']['published_at']['table'] = 'publication_date';
  $handler->display->display_options['fields']['published_at']['field'] = 'published_at';
  $handler->display->display_options['fields']['published_at']['label'] = '';
  $handler->display->display_options['fields']['published_at']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['published_at']['alter']['text'] = '[field_author] [published_at]';
  $handler->display->display_options['fields']['published_at']['alter']['make_link'] = TRUE;
  $handler->display->display_options['fields']['published_at']['alter']['path'] = '[path]';
  $handler->display->display_options['fields']['published_at']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['published_at']['date_format'] = 'custom';
  $handler->display->display_options['fields']['published_at']['custom_date_format'] = 'F Y';
  /* Field: Content: Embedded Video */
  $handler->display->display_options['fields']['field_blog_video']['id'] = 'field_blog_video';
  $handler->display->display_options['fields']['field_blog_video']['table'] = 'field_data_field_blog_video';
  $handler->display->display_options['fields']['field_blog_video']['field'] = 'field_blog_video';
  $handler->display->display_options['fields']['field_blog_video']['label'] = '';
  $handler->display->display_options['fields']['field_blog_video']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_blog_video']['element_wrapper_type'] = 'div';
  $handler->display->display_options['fields']['field_blog_video']['element_wrapper_class'] = 'flex-video-container';
  $handler->display->display_options['fields']['field_blog_video']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['field_blog_video']['hide_empty'] = TRUE;
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
  $handler->display->display_options['fields']['field_video_id']['element_default_classes'] = FALSE;
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
  $export['ti_amg_fw_mobile_blog_blocks'] = $view;

  $view = new view();
  $view->name = 'ti_amg_fw_mobile_home_page_blocks';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'node';
  $view->human_name = 'TI AMG FW Mobile Home Page Blocks';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['css_class'] = 'mobile-home-blogs-top mobile-home-blogs mobile-view';
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['access']['type'] = 'perm';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['pager']['type'] = 'some';
  $handler->display->display_options['pager']['options']['items_per_page'] = '3';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['style_plugin'] = 'default';
  $handler->display->display_options['row_plugin'] = 'fields';
  /* Header: Global: Text area */
  $handler->display->display_options['header']['area']['id'] = 'area';
  $handler->display->display_options['header']['area']['table'] = 'views';
  $handler->display->display_options['header']['area']['field'] = 'area';
  $handler->display->display_options['header']['area']['content'] = '<h2>Editor Picks</h2>';
  $handler->display->display_options['header']['area']['format'] = 'wysiwyg';
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
  /* Relationship: Entity Reference: Referenced Entity */
  $handler->display->display_options['relationships']['field_images_target_id']['id'] = 'field_images_target_id';
  $handler->display->display_options['relationships']['field_images_target_id']['table'] = 'field_data_field_images';
  $handler->display->display_options['relationships']['field_images_target_id']['field'] = 'field_images_target_id';
  /* Field: Content: Path */
  $handler->display->display_options['fields']['path']['id'] = 'path';
  $handler->display->display_options['fields']['path']['table'] = 'node';
  $handler->display->display_options['fields']['path']['field'] = 'path';
  $handler->display->display_options['fields']['path']['label'] = '';
  $handler->display->display_options['fields']['path']['exclude'] = TRUE;
  $handler->display->display_options['fields']['path']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['path']['absolute'] = TRUE;
  /* Field: Field: Tags */
  $handler->display->display_options['fields']['field_tags']['id'] = 'field_tags';
  $handler->display->display_options['fields']['field_tags']['table'] = 'field_data_field_tags';
  $handler->display->display_options['fields']['field_tags']['field'] = 'field_tags';
  $handler->display->display_options['fields']['field_tags']['label'] = '';
  $handler->display->display_options['fields']['field_tags']['alter']['text'] = '<p class="caption">[field_tags]</p>';
  $handler->display->display_options['fields']['field_tags']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_tags']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['field_tags']['hide_empty'] = TRUE;
  $handler->display->display_options['fields']['field_tags']['type'] = 'taxonomy_term_reference_plain';
  $handler->display->display_options['fields']['field_tags']['delta_limit'] = '1';
  $handler->display->display_options['fields']['field_tags']['delta_offset'] = '0';
  $handler->display->display_options['fields']['field_tags']['field_api_classes'] = TRUE;
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  $handler->display->display_options['fields']['title']['element_type'] = 'h2';
  $handler->display->display_options['fields']['title']['element_label_colon'] = FALSE;
  /* Field: Content: Author */
  $handler->display->display_options['fields']['field_author']['id'] = 'field_author';
  $handler->display->display_options['fields']['field_author']['table'] = 'field_data_field_author';
  $handler->display->display_options['fields']['field_author']['field'] = 'field_author';
  $handler->display->display_options['fields']['field_author']['label'] = '';
  $handler->display->display_options['fields']['field_author']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_author']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['field_author']['alter']['text'] = '<span>By</span> [field_author] |';
  $handler->display->display_options['fields']['field_author']['element_type'] = '0';
  $handler->display->display_options['fields']['field_author']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_author']['element_wrapper_type'] = '0';
  $handler->display->display_options['fields']['field_author']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['field_author']['hide_empty'] = TRUE;
  $handler->display->display_options['fields']['field_author']['settings'] = array(
    'link' => 1,
  );
  $handler->display->display_options['fields']['field_author']['field_api_classes'] = TRUE;
  /* Field: Node: Published at */
  $handler->display->display_options['fields']['published_at']['id'] = 'published_at';
  $handler->display->display_options['fields']['published_at']['table'] = 'publication_date';
  $handler->display->display_options['fields']['published_at']['field'] = 'published_at';
  $handler->display->display_options['fields']['published_at']['label'] = '';
  $handler->display->display_options['fields']['published_at']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['published_at']['alter']['text'] = '[field_author] [published_at] ago';
  $handler->display->display_options['fields']['published_at']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['published_at']['date_format'] = 'raw time ago';
  $handler->display->display_options['fields']['published_at']['custom_date_format'] = '1';
  /* Field: Content: Image */
  $handler->display->display_options['fields']['field_image']['id'] = 'field_image';
  $handler->display->display_options['fields']['field_image']['table'] = 'field_data_field_image';
  $handler->display->display_options['fields']['field_image']['field'] = 'field_image';
  $handler->display->display_options['fields']['field_image']['relationship'] = 'field_images_target_id';
  $handler->display->display_options['fields']['field_image']['label'] = '';
  $handler->display->display_options['fields']['field_image']['element_type'] = '0';
  $handler->display->display_options['fields']['field_image']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_image']['element_wrapper_type'] = '0';
  $handler->display->display_options['fields']['field_image']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['field_image']['empty'] = '<div class="field field-name-field-image"><a href="[path]"><img src="/sites/all/themes/foodandwine/images/fw-default-img.jpeg" height="550" width="550"/></a></div>';
  $handler->display->display_options['fields']['field_image']['hide_empty'] = TRUE;
  $handler->display->display_options['fields']['field_image']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_image']['settings'] = array(
    'image_style' => '',
    'image_link' => 'content',
  );
  $handler->display->display_options['fields']['field_image']['field_api_classes'] = TRUE;
  /* Field: Content: Body */
  $handler->display->display_options['fields']['body']['id'] = 'body';
  $handler->display->display_options['fields']['body']['table'] = 'field_data_body';
  $handler->display->display_options['fields']['body']['field'] = 'body';
  $handler->display->display_options['fields']['body']['label'] = '';
  $handler->display->display_options['fields']['body']['alter']['max_length'] = '200';
  $handler->display->display_options['fields']['body']['alter']['more_link_text'] = 'Read More';
  $handler->display->display_options['fields']['body']['alter']['more_link_path'] = '[path]';
  $handler->display->display_options['fields']['body']['alter']['preserve_tags'] = '200';
  $handler->display->display_options['fields']['body']['element_type'] = '0';
  $handler->display->display_options['fields']['body']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['body']['element_wrapper_type'] = '0';
  $handler->display->display_options['fields']['body']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['body']['hide_empty'] = TRUE;
  $handler->display->display_options['fields']['body']['type'] = 'text_trimmed';
  $handler->display->display_options['fields']['body']['settings'] = array(
    'trim_length' => '200',
  );
  $handler->display->display_options['fields']['body']['field_api_classes'] = TRUE;
  /* Sort criterion: Node: Published at */
  $handler->display->display_options['sorts']['published_at']['id'] = 'published_at';
  $handler->display->display_options['sorts']['published_at']['table'] = 'publication_date';
  $handler->display->display_options['sorts']['published_at']['field'] = 'published_at';
  $handler->display->display_options['sorts']['published_at']['order'] = 'DESC';
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

  /* Display: Home Blogs Top */
  $handler = $view->new_display('block', 'Home Blogs Top', 'block');
  $handler->display->display_options['defaults']['header'] = FALSE;
  $handler->display->display_options['defaults']['footer'] = FALSE;
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
  /* Field: Field: Tags */
  $handler->display->display_options['fields']['field_tags']['id'] = 'field_tags';
  $handler->display->display_options['fields']['field_tags']['table'] = 'field_data_field_tags';
  $handler->display->display_options['fields']['field_tags']['field'] = 'field_tags';
  $handler->display->display_options['fields']['field_tags']['label'] = '';
  $handler->display->display_options['fields']['field_tags']['alter']['text'] = '<p class="caption">[field_tags]</p>';
  $handler->display->display_options['fields']['field_tags']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_tags']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['field_tags']['hide_empty'] = TRUE;
  $handler->display->display_options['fields']['field_tags']['type'] = 'taxonomy_term_reference_plain';
  $handler->display->display_options['fields']['field_tags']['delta_limit'] = '1';
  $handler->display->display_options['fields']['field_tags']['delta_offset'] = '0';
  $handler->display->display_options['fields']['field_tags']['field_api_classes'] = TRUE;
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  $handler->display->display_options['fields']['title']['element_type'] = 'h2';
  $handler->display->display_options['fields']['title']['element_label_colon'] = FALSE;
  /* Field: Content: Author */
  $handler->display->display_options['fields']['field_author']['id'] = 'field_author';
  $handler->display->display_options['fields']['field_author']['table'] = 'field_data_field_author';
  $handler->display->display_options['fields']['field_author']['field'] = 'field_author';
  $handler->display->display_options['fields']['field_author']['label'] = '';
  $handler->display->display_options['fields']['field_author']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_author']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['field_author']['alter']['text'] = '<span>By</span> [field_author] |';
  $handler->display->display_options['fields']['field_author']['element_type'] = '0';
  $handler->display->display_options['fields']['field_author']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_author']['element_wrapper_type'] = '0';
  $handler->display->display_options['fields']['field_author']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['field_author']['hide_empty'] = TRUE;
  $handler->display->display_options['fields']['field_author']['settings'] = array(
    'link' => 1,
  );
  $handler->display->display_options['fields']['field_author']['field_api_classes'] = TRUE;
  /* Field: Node: Published at */
  $handler->display->display_options['fields']['published_at']['id'] = 'published_at';
  $handler->display->display_options['fields']['published_at']['table'] = 'publication_date';
  $handler->display->display_options['fields']['published_at']['field'] = 'published_at';
  $handler->display->display_options['fields']['published_at']['label'] = '';
  $handler->display->display_options['fields']['published_at']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['published_at']['alter']['text'] = '[field_author] [published_at] ago';
  $handler->display->display_options['fields']['published_at']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['published_at']['date_format'] = 'raw time ago';
  $handler->display->display_options['fields']['published_at']['custom_date_format'] = '1';
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
  $handler->display->display_options['fields']['field_image']['hide_empty'] = TRUE;
  $handler->display->display_options['fields']['field_image']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_image']['settings'] = array(
    'image_style' => '500x500',
    'image_link' => '',
  );
  $handler->display->display_options['fields']['field_image']['field_api_classes'] = TRUE;
  /* Field: Content: Embedded Video */
  $handler->display->display_options['fields']['field_blog_video']['id'] = 'field_blog_video';
  $handler->display->display_options['fields']['field_blog_video']['table'] = 'field_data_field_blog_video';
  $handler->display->display_options['fields']['field_blog_video']['field'] = 'field_blog_video';
  $handler->display->display_options['fields']['field_blog_video']['label'] = '';
  $handler->display->display_options['fields']['field_blog_video']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_blog_video']['element_wrapper_type'] = 'div';
  $handler->display->display_options['fields']['field_blog_video']['element_wrapper_class'] = 'flex-video-container';
  $handler->display->display_options['fields']['field_blog_video']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['field_blog_video']['hide_empty'] = TRUE;
  /* Field: Content: Body */
  $handler->display->display_options['fields']['body']['id'] = 'body';
  $handler->display->display_options['fields']['body']['table'] = 'field_data_body';
  $handler->display->display_options['fields']['body']['field'] = 'body';
  $handler->display->display_options['fields']['body']['label'] = '';
  $handler->display->display_options['fields']['body']['alter']['max_length'] = '200';
  $handler->display->display_options['fields']['body']['alter']['more_link'] = TRUE;
  $handler->display->display_options['fields']['body']['alter']['more_link_text'] = 'Read More';
  $handler->display->display_options['fields']['body']['alter']['more_link_path'] = '[path]';
  $handler->display->display_options['fields']['body']['alter']['strip_tags'] = TRUE;
  $handler->display->display_options['fields']['body']['alter']['trim'] = TRUE;
  $handler->display->display_options['fields']['body']['alter']['preserve_tags'] = '200';
  $handler->display->display_options['fields']['body']['element_type'] = '0';
  $handler->display->display_options['fields']['body']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['body']['element_wrapper_type'] = '0';
  $handler->display->display_options['fields']['body']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['body']['hide_empty'] = TRUE;
  $handler->display->display_options['fields']['body']['settings'] = array(
    'trim_length' => '200',
  );
  $handler->display->display_options['fields']['body']['field_api_classes'] = TRUE;
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
  $handler->display->display_options['fields']['field_video_id']['element_default_classes'] = FALSE;
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

  /* Display: Home Blogs Bottom */
  $handler = $view->new_display('block', 'Home Blogs Bottom', 'block_1');
  $handler->display->display_options['defaults']['css_class'] = FALSE;
  $handler->display->display_options['css_class'] = 'mobile-home-blogs-bottom mobile-home-blogs mobile-view';
  $handler->display->display_options['defaults']['pager'] = FALSE;
  $handler->display->display_options['pager']['type'] = 'some';
  $handler->display->display_options['pager']['options']['items_per_page'] = '2';
  $handler->display->display_options['pager']['options']['offset'] = '3';
  $handler->display->display_options['defaults']['header'] = FALSE;
  $handler->display->display_options['defaults']['fields'] = FALSE;
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
  $handler->display->display_options['fields']['field_image']['empty'] = '<div class="field field-name-field-image"><a href="[path]"><img src="/sites/all/themes/foodandwine/images/fw-default-img.jpeg" height="550" width="550"/></a></div>';
  $handler->display->display_options['fields']['field_image']['hide_empty'] = TRUE;
  $handler->display->display_options['fields']['field_image']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_image']['settings'] = array(
    'image_style' => '500x500',
    'image_link' => '',
  );
  $handler->display->display_options['fields']['field_image']['field_api_classes'] = TRUE;
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  $handler->display->display_options['fields']['title']['element_type'] = 'h2';
  $handler->display->display_options['fields']['title']['element_label_colon'] = FALSE;
  /* Field: Content: Author */
  $handler->display->display_options['fields']['field_author']['id'] = 'field_author';
  $handler->display->display_options['fields']['field_author']['table'] = 'field_data_field_author';
  $handler->display->display_options['fields']['field_author']['field'] = 'field_author';
  $handler->display->display_options['fields']['field_author']['label'] = '';
  $handler->display->display_options['fields']['field_author']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_author']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['field_author']['alter']['text'] = '<span>By</span> [field_author] |';
  $handler->display->display_options['fields']['field_author']['element_type'] = '0';
  $handler->display->display_options['fields']['field_author']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_author']['element_wrapper_type'] = '0';
  $handler->display->display_options['fields']['field_author']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['field_author']['hide_empty'] = TRUE;
  $handler->display->display_options['fields']['field_author']['settings'] = array(
    'link' => 1,
  );
  $handler->display->display_options['fields']['field_author']['field_api_classes'] = TRUE;
  /* Field: Node: Published at */
  $handler->display->display_options['fields']['published_at']['id'] = 'published_at';
  $handler->display->display_options['fields']['published_at']['table'] = 'publication_date';
  $handler->display->display_options['fields']['published_at']['field'] = 'published_at';
  $handler->display->display_options['fields']['published_at']['label'] = '';
  $handler->display->display_options['fields']['published_at']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['published_at']['alter']['text'] = '[field_author] [published_at] ago';
  $handler->display->display_options['fields']['published_at']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['published_at']['date_format'] = 'raw time ago';
  $handler->display->display_options['fields']['published_at']['custom_date_format'] = '1';
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

  /* Display: Home Editor Pics */
  $handler = $view->new_display('block', 'Home Editor Pics', 'block_2');
  $handler->display->display_options['defaults']['css_class'] = FALSE;
  $handler->display->display_options['css_class'] = 'mobile-home-blogs-bottom mobile-home-blogs mobile-view';
  $handler->display->display_options['defaults']['pager'] = FALSE;
  $handler->display->display_options['pager']['type'] = 'some';
  $handler->display->display_options['pager']['options']['items_per_page'] = '3';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['defaults']['header'] = FALSE;
  /* Header: Global: Text area */
  $handler->display->display_options['header']['area']['id'] = 'area';
  $handler->display->display_options['header']['area']['table'] = 'views';
  $handler->display->display_options['header']['area']['field'] = 'area';
  $handler->display->display_options['header']['area']['content'] = '<h2>Editor Picks</h2>';
  $handler->display->display_options['header']['area']['format'] = 'wysiwyg';
  $handler->display->display_options['defaults']['footer'] = FALSE;
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
  /* Field: Field collection item: Editor Pick */
  $handler->display->display_options['fields']['field_editor_pick_title_1']['id'] = 'field_editor_pick_title_1';
  $handler->display->display_options['fields']['field_editor_pick_title_1']['table'] = 'field_data_field_editor_pick_title';
  $handler->display->display_options['fields']['field_editor_pick_title_1']['field'] = 'field_editor_pick_title';
  $handler->display->display_options['fields']['field_editor_pick_title_1']['relationship'] = 'field_hp_editor_picks_value';
  $handler->display->display_options['fields']['field_editor_pick_title_1']['label'] = '';
  $handler->display->display_options['fields']['field_editor_pick_title_1']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_editor_pick_title_1']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_editor_pick_title_1']['click_sort_column'] = 'url';
  $handler->display->display_options['fields']['field_editor_pick_title_1']['type'] = 'link_absolute';
  /* Field: Content: Image */
  $handler->display->display_options['fields']['field_image']['id'] = 'field_image';
  $handler->display->display_options['fields']['field_image']['table'] = 'field_data_field_image';
  $handler->display->display_options['fields']['field_image']['field'] = 'field_image';
  $handler->display->display_options['fields']['field_image']['relationship'] = 'field_editor_pick_image_target_id';
  $handler->display->display_options['fields']['field_image']['label'] = '';
  $handler->display->display_options['fields']['field_image']['alter']['make_link'] = TRUE;
  $handler->display->display_options['fields']['field_image']['alter']['path'] = '[field_editor_pick_title_1]';
  $handler->display->display_options['fields']['field_image']['element_type'] = '0';
  $handler->display->display_options['fields']['field_image']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_image']['element_wrapper_type'] = '0';
  $handler->display->display_options['fields']['field_image']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['field_image']['empty'] = '<div class="field field-name-field-image"><a href="[field_editor_pick_title_1]"><img src="/sites/all/themes/foodandwine/images/fw-default-img.jpeg" height="550" width="550"/></a></div>';
  $handler->display->display_options['fields']['field_image']['hide_empty'] = TRUE;
  $handler->display->display_options['fields']['field_image']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_image']['settings'] = array(
    'image_style' => '',
    'image_link' => '',
  );
  $handler->display->display_options['fields']['field_image']['field_api_classes'] = TRUE;
  /* Field: Field collection item: Editor Pick */
  $handler->display->display_options['fields']['field_editor_pick_title']['id'] = 'field_editor_pick_title';
  $handler->display->display_options['fields']['field_editor_pick_title']['table'] = 'field_data_field_editor_pick_title';
  $handler->display->display_options['fields']['field_editor_pick_title']['field'] = 'field_editor_pick_title';
  $handler->display->display_options['fields']['field_editor_pick_title']['relationship'] = 'field_hp_editor_picks_value';
  $handler->display->display_options['fields']['field_editor_pick_title']['label'] = '';
  $handler->display->display_options['fields']['field_editor_pick_title']['element_type'] = '0';
  $handler->display->display_options['fields']['field_editor_pick_title']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_editor_pick_title']['element_wrapper_type'] = '0';
  $handler->display->display_options['fields']['field_editor_pick_title']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['field_editor_pick_title']['click_sort_column'] = 'url';
  $handler->display->display_options['fields']['field_editor_pick_title']['field_api_classes'] = TRUE;
  $handler->display->display_options['defaults']['sorts'] = FALSE;

  /* Display: Home New Recipes */
  $handler = $view->new_display('block', 'Home New Recipes', 'block_3');
  $handler->display->display_options['defaults']['css_class'] = FALSE;
  $handler->display->display_options['css_class'] = 'mobile-home-blogs-bottom mobile-home-blogs mobile-view';
  $handler->display->display_options['defaults']['pager'] = FALSE;
  $handler->display->display_options['pager']['type'] = 'some';
  $handler->display->display_options['pager']['options']['items_per_page'] = '3';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['defaults']['header'] = FALSE;
  /* Header: Global: Text area */
  $handler->display->display_options['header']['area']['id'] = 'area';
  $handler->display->display_options['header']['area']['table'] = 'views';
  $handler->display->display_options['header']['area']['field'] = 'area';
  $handler->display->display_options['header']['area']['content'] = '<h2>New Recipes</h2>';
  $handler->display->display_options['header']['area']['format'] = 'wysiwyg';
  $handler->display->display_options['defaults']['footer'] = FALSE;
  $handler->display->display_options['defaults']['fields'] = FALSE;
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
  $handler->display->display_options['fields']['field_image']['empty'] = '<div class="field field-name-field-image"><a href="[path]"><img src="/sites/all/themes/foodandwine/images/recipe-placeholder.gif" height="550" width="550"/></a></div>';
  $handler->display->display_options['fields']['field_image']['hide_empty'] = TRUE;
  $handler->display->display_options['fields']['field_image']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_image']['settings'] = array(
    'image_style' => '300x300',
    'image_link' => '',
  );
  $handler->display->display_options['fields']['field_image']['field_api_classes'] = TRUE;
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  $handler->display->display_options['fields']['title']['element_type'] = 'h2';
  $handler->display->display_options['fields']['title']['element_label_colon'] = FALSE;
  /* Field: Content: Author */
  $handler->display->display_options['fields']['field_author']['id'] = 'field_author';
  $handler->display->display_options['fields']['field_author']['table'] = 'field_data_field_author';
  $handler->display->display_options['fields']['field_author']['field'] = 'field_author';
  $handler->display->display_options['fields']['field_author']['label'] = '';
  $handler->display->display_options['fields']['field_author']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_author']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['field_author']['alter']['text'] = '<span>By</span> [field_author] |';
  $handler->display->display_options['fields']['field_author']['element_type'] = '0';
  $handler->display->display_options['fields']['field_author']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_author']['element_wrapper_type'] = '0';
  $handler->display->display_options['fields']['field_author']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['field_author']['hide_empty'] = TRUE;
  $handler->display->display_options['fields']['field_author']['settings'] = array(
    'link' => 1,
  );
  $handler->display->display_options['fields']['field_author']['field_api_classes'] = TRUE;
  /* Field: Node: Published at */
  $handler->display->display_options['fields']['published_at']['id'] = 'published_at';
  $handler->display->display_options['fields']['published_at']['table'] = 'publication_date';
  $handler->display->display_options['fields']['published_at']['field'] = 'published_at';
  $handler->display->display_options['fields']['published_at']['label'] = '';
  $handler->display->display_options['fields']['published_at']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['published_at']['alter']['text'] = '[field_author] [published_at] ago';
  $handler->display->display_options['fields']['published_at']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['published_at']['date_format'] = 'raw time ago';
  $handler->display->display_options['fields']['published_at']['custom_date_format'] = '1';
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
    'recipe' => 'recipe',
  );
  $export['ti_amg_fw_mobile_home_page_blocks'] = $view;

  $view = new view();
  $view->name = 'ti_amg_fw_mobile_related_slideshows';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'node';
  $view->human_name = 'TI AMG FW Mobile Related Slideshows';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['css_class'] = 'related-recipe-row mobile-related-links';
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['access']['type'] = 'perm';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['pager']['type'] = 'some';
  $handler->display->display_options['pager']['options']['items_per_page'] = '5';
  $handler->display->display_options['style_plugin'] = 'default';
  $handler->display->display_options['row_plugin'] = 'fields';
  /* Header: Global: Text area */
  $handler->display->display_options['header']['area']['id'] = 'area';
  $handler->display->display_options['header']['area']['table'] = 'views';
  $handler->display->display_options['header']['area']['field'] = 'area';
  $handler->display->display_options['header']['area']['content'] = '<h4> Editors\' Favorite Slideshows </h4>';
  $handler->display->display_options['header']['area']['format'] = 'wysiwyg';
  /* Relationship: Entity Reference: Referenced Entity */
  $handler->display->display_options['relationships']['field_related_gallery_target_id']['id'] = 'field_related_gallery_target_id';
  $handler->display->display_options['relationships']['field_related_gallery_target_id']['table'] = 'field_data_field_related_gallery';
  $handler->display->display_options['relationships']['field_related_gallery_target_id']['field'] = 'field_related_gallery_target_id';
  /* Relationship: Content: Slides (field_slide_info) */
  $handler->display->display_options['relationships']['field_slide_info_value']['id'] = 'field_slide_info_value';
  $handler->display->display_options['relationships']['field_slide_info_value']['table'] = 'field_data_field_slide_info';
  $handler->display->display_options['relationships']['field_slide_info_value']['field'] = 'field_slide_info_value';
  $handler->display->display_options['relationships']['field_slide_info_value']['relationship'] = 'field_related_gallery_target_id';
  $handler->display->display_options['relationships']['field_slide_info_value']['delta'] = '0';
  /* Relationship: Entity Reference: Referenced Entity */
  $handler->display->display_options['relationships']['field_slide_image_target_id']['id'] = 'field_slide_image_target_id';
  $handler->display->display_options['relationships']['field_slide_image_target_id']['table'] = 'field_data_field_slide_image';
  $handler->display->display_options['relationships']['field_slide_image_target_id']['field'] = 'field_slide_image_target_id';
  $handler->display->display_options['relationships']['field_slide_image_target_id']['relationship'] = 'field_slide_info_value';
  /* Field: Content: Path */
  $handler->display->display_options['fields']['path']['id'] = 'path';
  $handler->display->display_options['fields']['path']['table'] = 'node';
  $handler->display->display_options['fields']['path']['field'] = 'path';
  $handler->display->display_options['fields']['path']['relationship'] = 'field_related_gallery_target_id';
  $handler->display->display_options['fields']['path']['label'] = '';
  $handler->display->display_options['fields']['path']['exclude'] = TRUE;
  $handler->display->display_options['fields']['path']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['path']['alter']['text'] = '[path]/1';
  $handler->display->display_options['fields']['path']['element_label_colon'] = FALSE;
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['relationship'] = 'field_related_gallery_target_id';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['title']['alter']['text'] = '<div class="related-slideshow-titles">
<a class="slideshow-title" href="[path]">[title]</a>
</div>';
  $handler->display->display_options['fields']['title']['alter']['path'] = '[path]';
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  $handler->display->display_options['fields']['title']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['title']['link_to_node'] = FALSE;
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
    'gallery' => 'gallery',
  );
  /* Filter criterion: Content: Layout (field_gallery_layout) */
  $handler->display->display_options['filters']['field_gallery_layout_value']['id'] = 'field_gallery_layout_value';
  $handler->display->display_options['filters']['field_gallery_layout_value']['table'] = 'field_data_field_gallery_layout';
  $handler->display->display_options['filters']['field_gallery_layout_value']['field'] = 'field_gallery_layout_value';
  $handler->display->display_options['filters']['field_gallery_layout_value']['value'] = array(
    'STD' => 'STD',
    'HD' => 'HD',
  );

  /* Display: Block */
  $handler = $view->new_display('block', 'Block', 'block');
  $handler->display->display_options['defaults']['header'] = FALSE;
  /* Header: Global: Text area */
  $handler->display->display_options['header']['area']['id'] = 'area';
  $handler->display->display_options['header']['area']['table'] = 'views';
  $handler->display->display_options['header']['area']['field'] = 'area';
  $handler->display->display_options['header']['area']['content'] = '<h4> Editors\' Favorite Slideshows </h4>';
  $handler->display->display_options['header']['area']['format'] = 'wysiwyg';
  $handler->display->display_options['block_caching'] = '4';

  /* Display: Block */
  $handler = $view->new_display('block', 'Block', 'block_1');
  $handler->display->display_options['defaults']['css_class'] = FALSE;
  $handler->display->display_options['css_class'] = 'hd-last-slide';
  $handler->display->display_options['defaults']['pager'] = FALSE;
  $handler->display->display_options['pager']['type'] = 'some';
  $handler->display->display_options['pager']['options']['items_per_page'] = '1';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['defaults']['header'] = FALSE;
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Content: Path */
  $handler->display->display_options['fields']['path']['id'] = 'path';
  $handler->display->display_options['fields']['path']['table'] = 'node';
  $handler->display->display_options['fields']['path']['field'] = 'path';
  $handler->display->display_options['fields']['path']['relationship'] = 'field_related_gallery_target_id';
  $handler->display->display_options['fields']['path']['label'] = '';
  $handler->display->display_options['fields']['path']['exclude'] = TRUE;
  $handler->display->display_options['fields']['path']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['path']['alter']['text'] = '[path]/1';
  $handler->display->display_options['fields']['path']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['path']['absolute'] = TRUE;
  /* Field: Global: Custom text */
  $handler->display->display_options['fields']['nothing']['id'] = 'nothing';
  $handler->display->display_options['fields']['nothing']['table'] = 'views';
  $handler->display->display_options['fields']['nothing']['field'] = 'nothing';
  $handler->display->display_options['fields']['nothing']['label'] = '';
  $handler->display->display_options['fields']['nothing']['alter']['text'] = '<p class="end-slide-title style-three">You might also like the next slideshow:</p>';
  $handler->display->display_options['fields']['nothing']['element_label_colon'] = FALSE;
  /* Field: Content: Image */
  $handler->display->display_options['fields']['field_image_1']['id'] = 'field_image_1';
  $handler->display->display_options['fields']['field_image_1']['table'] = 'field_data_field_image';
  $handler->display->display_options['fields']['field_image_1']['field'] = 'field_image';
  $handler->display->display_options['fields']['field_image_1']['relationship'] = 'field_slide_image_target_id';
  $handler->display->display_options['fields']['field_image_1']['label'] = '';
  $handler->display->display_options['fields']['field_image_1']['alter']['make_link'] = TRUE;
  $handler->display->display_options['fields']['field_image_1']['alter']['path'] = '[path]';
  $handler->display->display_options['fields']['field_image_1']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_image_1']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_image_1']['settings'] = array(
    'image_style' => '150x150',
    'image_link' => '',
  );
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['relationship'] = 'field_related_gallery_target_id';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['title']['alter']['text'] = '<div class="related-slideshow-titles">
<a class="slideshow-title" href="[path]">[title]</a>
</div>';
  $handler->display->display_options['fields']['title']['alter']['path'] = '[path]';
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  $handler->display->display_options['fields']['title']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['title']['link_to_node'] = FALSE;
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
    'gallery' => 'gallery',
  );
  /* Filter criterion: Content: Layout (field_gallery_layout) */
  $handler->display->display_options['filters']['field_gallery_layout_value']['id'] = 'field_gallery_layout_value';
  $handler->display->display_options['filters']['field_gallery_layout_value']['table'] = 'field_data_field_gallery_layout';
  $handler->display->display_options['filters']['field_gallery_layout_value']['field'] = 'field_gallery_layout_value';
  $handler->display->display_options['filters']['field_gallery_layout_value']['value'] = array(
    'HD' => 'HD',
  );
  $export['ti_amg_fw_mobile_related_slideshows'] = $view;

  $view = new view();
  $view->name = 'ti_amg_fw_mobile_standard_slideshow';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'node';
  $view->human_name = 'TI AMG FW Mobile Standard Slideshow';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['css_class'] = 'slider mobile-view';
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['access']['type'] = 'perm';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['pager']['type'] = 'none';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['style_plugin'] = 'list';
  $handler->display->display_options['style_options']['class'] = 'slides';
  $handler->display->display_options['style_options']['wrapper_class'] = 'flexslider';
  $handler->display->display_options['row_plugin'] = 'fields';
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
  /* Field: Content: Image */
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
  /* Field: Global: View result counter */
  $handler->display->display_options['fields']['counter']['id'] = 'counter';
  $handler->display->display_options['fields']['counter']['table'] = 'views';
  $handler->display->display_options['fields']['counter']['field'] = 'counter';
  $handler->display->display_options['fields']['counter']['label'] = '';
  $handler->display->display_options['fields']['counter']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['counter']['counter_start'] = '1';
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
  $handler->display->display_options['fields']['field_slide_title_1']['alter']['text'] = '<a href="[field_slide_link_url]">go to recipe</a>';
  $handler->display->display_options['fields']['field_slide_title_1']['alter']['path'] = '[field_slide_link_url]';
  $handler->display->display_options['fields']['field_slide_title_1']['alter']['external'] = TRUE;
  $handler->display->display_options['fields']['field_slide_title_1']['alter']['alt'] = '[field_slide_title_2]';
  $handler->display->display_options['fields']['field_slide_title_1']['element_label_colon'] = FALSE;
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
  /* Filter criterion: Content: Layout (field_gallery_layout) */
  $handler->display->display_options['filters']['field_gallery_layout_value']['id'] = 'field_gallery_layout_value';
  $handler->display->display_options['filters']['field_gallery_layout_value']['table'] = 'field_data_field_gallery_layout';
  $handler->display->display_options['filters']['field_gallery_layout_value']['field'] = 'field_gallery_layout_value';
  $handler->display->display_options['filters']['field_gallery_layout_value']['value'] = array(
    'STD' => 'STD',
    'HD' => 'HD',
  );

  /* Display: Slide View */
  $handler = $view->new_display('block', 'Slide View', 'block');
  $handler->display->display_options['defaults']['fields'] = FALSE;
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
  /* Field: Content: Image */
  $handler->display->display_options['fields']['field_image']['id'] = 'field_image';
  $handler->display->display_options['fields']['field_image']['table'] = 'field_data_field_image';
  $handler->display->display_options['fields']['field_image']['field'] = 'field_image';
  $handler->display->display_options['fields']['field_image']['relationship'] = 'field_slide_image_target_id';
  $handler->display->display_options['fields']['field_image']['label'] = '';
  $handler->display->display_options['fields']['field_image']['alter']['path'] = '[field_slide_link_url]';
  $handler->display->display_options['fields']['field_image']['alter']['external'] = TRUE;
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
  /* Field: Global: View result counter */
  $handler->display->display_options['fields']['counter']['id'] = 'counter';
  $handler->display->display_options['fields']['counter']['table'] = 'views';
  $handler->display->display_options['fields']['counter']['field'] = 'counter';
  $handler->display->display_options['fields']['counter']['label'] = '';
  $handler->display->display_options['fields']['counter']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['counter']['counter_start'] = '1';
  /* Field: Field collection item: Slide Title */
  $handler->display->display_options['fields']['field_slide_title']['id'] = 'field_slide_title';
  $handler->display->display_options['fields']['field_slide_title']['table'] = 'field_data_field_slide_title';
  $handler->display->display_options['fields']['field_slide_title']['field'] = 'field_slide_title';
  $handler->display->display_options['fields']['field_slide_title']['relationship'] = 'field_slide_info_value';
  $handler->display->display_options['fields']['field_slide_title']['label'] = '';
  $handler->display->display_options['fields']['field_slide_title']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['field_slide_title']['alter']['text'] = '<a href ="[field_slide_link_url]">[field_slide_title]</a>';
  $handler->display->display_options['fields']['field_slide_title']['element_label_colon'] = FALSE;
  /* Field: Field collection item: Slide Title */
  $handler->display->display_options['fields']['field_slide_title_1']['id'] = 'field_slide_title_1';
  $handler->display->display_options['fields']['field_slide_title_1']['table'] = 'field_data_field_slide_title';
  $handler->display->display_options['fields']['field_slide_title_1']['field'] = 'field_slide_title';
  $handler->display->display_options['fields']['field_slide_title_1']['relationship'] = 'field_slide_info_value';
  $handler->display->display_options['fields']['field_slide_title_1']['label'] = '';
  $handler->display->display_options['fields']['field_slide_title_1']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['field_slide_title_1']['alter']['text'] = '<a href="[field_slide_link_url]">go to recipe</a>';
  $handler->display->display_options['fields']['field_slide_title_1']['alter']['path'] = '[field_slide_link_url]';
  $handler->display->display_options['fields']['field_slide_title_1']['alter']['external'] = TRUE;
  $handler->display->display_options['fields']['field_slide_title_1']['alter']['alt'] = '[field_slide_title_2]';
  $handler->display->display_options['fields']['field_slide_title_1']['element_label_colon'] = FALSE;
  /* Field: Field collection item: Slide Deck */
  $handler->display->display_options['fields']['field_slide_deck']['id'] = 'field_slide_deck';
  $handler->display->display_options['fields']['field_slide_deck']['table'] = 'field_data_field_slide_deck';
  $handler->display->display_options['fields']['field_slide_deck']['field'] = 'field_slide_deck';
  $handler->display->display_options['fields']['field_slide_deck']['relationship'] = 'field_slide_info_value';
  $handler->display->display_options['fields']['field_slide_deck']['label'] = '';
  $handler->display->display_options['fields']['field_slide_deck']['element_type'] = '0';
  $handler->display->display_options['fields']['field_slide_deck']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_slide_deck']['element_wrapper_type'] = '0';
  $handler->display->display_options['fields']['field_slide_deck']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['field_slide_deck']['field_api_classes'] = TRUE;
  $handler->display->display_options['block_description'] = 'Slide View';
  $handler->display->display_options['block_caching'] = '4';

  /* Display: List View */
  $handler = $view->new_display('block', 'List View', 'block_1');
  $handler->display->display_options['defaults']['css_class'] = FALSE;
  $handler->display->display_options['css_class'] = 'mobile-view slides-grid-view';
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'default';
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['row_plugin'] = 'fields';
  $handler->display->display_options['defaults']['row_options'] = FALSE;
  $handler->display->display_options['defaults']['fields'] = FALSE;
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
  /* Field: Content: Image */
  $handler->display->display_options['fields']['field_image']['id'] = 'field_image';
  $handler->display->display_options['fields']['field_image']['table'] = 'field_data_field_image';
  $handler->display->display_options['fields']['field_image']['field'] = 'field_image';
  $handler->display->display_options['fields']['field_image']['relationship'] = 'field_slide_image_target_id';
  $handler->display->display_options['fields']['field_image']['label'] = '';
  $handler->display->display_options['fields']['field_image']['alter']['make_link'] = TRUE;
  $handler->display->display_options['fields']['field_image']['alter']['path'] = '[field_slide_link_url]';
  $handler->display->display_options['fields']['field_image']['alter']['external'] = TRUE;
  $handler->display->display_options['fields']['field_image']['alter']['link_class'] = 'thumb-container';
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
  /* Field: Field collection item: Slide Title */
  $handler->display->display_options['fields']['field_slide_title']['id'] = 'field_slide_title';
  $handler->display->display_options['fields']['field_slide_title']['table'] = 'field_data_field_slide_title';
  $handler->display->display_options['fields']['field_slide_title']['field'] = 'field_slide_title';
  $handler->display->display_options['fields']['field_slide_title']['relationship'] = 'field_slide_info_value';
  $handler->display->display_options['fields']['field_slide_title']['label'] = '';
  $handler->display->display_options['fields']['field_slide_title']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['field_slide_title']['alter']['text'] = '<a href ="[field_slide_link_url]">[field_slide_title]</a>';
  $handler->display->display_options['fields']['field_slide_title']['element_label_colon'] = FALSE;
  /* Field: Field collection item: Slide Deck */
  $handler->display->display_options['fields']['field_slide_deck']['id'] = 'field_slide_deck';
  $handler->display->display_options['fields']['field_slide_deck']['table'] = 'field_data_field_slide_deck';
  $handler->display->display_options['fields']['field_slide_deck']['field'] = 'field_slide_deck';
  $handler->display->display_options['fields']['field_slide_deck']['relationship'] = 'field_slide_info_value';
  $handler->display->display_options['fields']['field_slide_deck']['label'] = '';
  $handler->display->display_options['fields']['field_slide_deck']['element_type'] = '0';
  $handler->display->display_options['fields']['field_slide_deck']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_slide_deck']['element_wrapper_type'] = '0';
  $handler->display->display_options['fields']['field_slide_deck']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['field_slide_deck']['field_api_classes'] = TRUE;
  $handler->display->display_options['block_description'] = 'List-View';
  $handler->display->display_options['block_caching'] = '4';
  $export['ti_amg_fw_mobile_standard_slideshow'] = $view;

  return $export;
}
