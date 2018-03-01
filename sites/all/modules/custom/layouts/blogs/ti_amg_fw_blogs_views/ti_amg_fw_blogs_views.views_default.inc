<?php
/**
 * @file
 * ti_amg_fw_blogs_views.views_default.inc
 */

/**
 * Implements hook_views_default_views().
 */
function ti_amg_fw_blogs_views_views_default_views() {
  $export = array();

  $view = new view();
  $view->name = 'ti_amg_fw_blogs_topics_listing';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'node';
  $view->human_name = 'TI AMG FW Blogs Topics Listing';
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
  $handler->display->display_options['pager']['type'] = 'full';
  $handler->display->display_options['pager']['options']['items_per_page'] = '5';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['pager']['options']['id'] = '0';
  $handler->display->display_options['pager']['options']['quantity'] = '9';
  $handler->display->display_options['pager']['options']['tags']['first'] = '';
  $handler->display->display_options['pager']['options']['tags']['previous'] = 'previous';
  $handler->display->display_options['pager']['options']['tags']['next'] = 'next';
  $handler->display->display_options['pager']['options']['tags']['last'] = '';
  $handler->display->display_options['style_plugin'] = 'default';
  $handler->display->display_options['row_plugin'] = 'fields';
  /* Relationship: Entity Reference: Referenced Entity */
  $handler->display->display_options['relationships']['field_author_target_id']['id'] = 'field_author_target_id';
  $handler->display->display_options['relationships']['field_author_target_id']['table'] = 'field_data_field_author';
  $handler->display->display_options['relationships']['field_author_target_id']['field'] = 'field_author_target_id';
  /* Relationship: Entity Reference: Referenced Entity */
  $handler->display->display_options['relationships']['field_images_target_id']['id'] = 'field_images_target_id';
  $handler->display->display_options['relationships']['field_images_target_id']['table'] = 'field_data_field_images';
  $handler->display->display_options['relationships']['field_images_target_id']['field'] = 'field_images_target_id';
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  /* Field: Content: Author */
  $handler->display->display_options['fields']['field_author']['id'] = 'field_author';
  $handler->display->display_options['fields']['field_author']['table'] = 'field_data_field_author';
  $handler->display->display_options['fields']['field_author']['field'] = 'field_author';
  /* Field: Content: Body */
  $handler->display->display_options['fields']['body']['id'] = 'body';
  $handler->display->display_options['fields']['body']['table'] = 'field_data_body';
  $handler->display->display_options['fields']['body']['field'] = 'body';
  /* Field: Content: Image */
  $handler->display->display_options['fields']['field_image']['id'] = 'field_image';
  $handler->display->display_options['fields']['field_image']['table'] = 'field_data_field_image';
  $handler->display->display_options['fields']['field_image']['field'] = 'field_image';
  /* Field: Content: Main Video Embed Code */
  $handler->display->display_options['fields']['field_blog_video']['id'] = 'field_blog_video';
  $handler->display->display_options['fields']['field_blog_video']['table'] = 'field_data_field_blog_video';
  $handler->display->display_options['fields']['field_blog_video']['field'] = 'field_blog_video';
  /* Field: Content: Published */
  $handler->display->display_options['fields']['status']['id'] = 'status';
  $handler->display->display_options['fields']['status']['table'] = 'node';
  $handler->display->display_options['fields']['status']['field'] = 'status';
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

  /* Display: Blogs Landing Page */
  $handler = $view->new_display('page', 'Blogs Landing Page', 'page');
  $handler->display->display_options['defaults']['pager'] = FALSE;
  $handler->display->display_options['pager']['type'] = 'full';
  $handler->display->display_options['pager']['options']['items_per_page'] = '5';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['pager']['options']['id'] = '0';
  $handler->display->display_options['pager']['options']['quantity'] = '9';
  $handler->display->display_options['pager']['options']['tags']['first'] = '';
  $handler->display->display_options['pager']['options']['tags']['previous'] = 'Previous';
  $handler->display->display_options['pager']['options']['tags']['next'] = 'Next';
  $handler->display->display_options['pager']['options']['tags']['last'] = '';
  $handler->display->display_options['defaults']['header'] = FALSE;
  $handler->display->display_options['defaults']['relationships'] = FALSE;
  /* Relationship: Entity Reference: Referenced Entity */
  $handler->display->display_options['relationships']['field_images_target_id']['id'] = 'field_images_target_id';
  $handler->display->display_options['relationships']['field_images_target_id']['table'] = 'field_data_field_images';
  $handler->display->display_options['relationships']['field_images_target_id']['field'] = 'field_images_target_id';
  /* Relationship: Entity Reference: Referenced Entity */
  $handler->display->display_options['relationships']['field_video_hero_target_id']['id'] = 'field_video_hero_target_id';
  $handler->display->display_options['relationships']['field_video_hero_target_id']['table'] = 'field_data_field_video_hero';
  $handler->display->display_options['relationships']['field_video_hero_target_id']['field'] = 'field_video_hero_target_id';
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Content: Path */
  $handler->display->display_options['fields']['path']['id'] = 'path';
  $handler->display->display_options['fields']['path']['table'] = 'node';
  $handler->display->display_options['fields']['path']['field'] = 'path';
  $handler->display->display_options['fields']['path']['label'] = '';
  $handler->display->display_options['fields']['path']['exclude'] = TRUE;
  $handler->display->display_options['fields']['path']['element_label_colon'] = FALSE;
  /* Field: Content: Topic */
  $handler->display->display_options['fields']['field_topic']['id'] = 'field_topic';
  $handler->display->display_options['fields']['field_topic']['table'] = 'field_data_field_topic';
  $handler->display->display_options['fields']['field_topic']['field'] = 'field_topic';
  $handler->display->display_options['fields']['field_topic']['label'] = '';
  $handler->display->display_options['fields']['field_topic']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['field_topic']['alter']['text'] = '<div class="bubble">
[field_topic]
<span class="pointer"></span>
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
  $handler->display->display_options['fields']['title']['element_type'] = 'h2';
  $handler->display->display_options['fields']['title']['element_label_colon'] = FALSE;
  /* Field: Content: Author */
  $handler->display->display_options['fields']['field_author_1']['id'] = 'field_author_1';
  $handler->display->display_options['fields']['field_author_1']['table'] = 'field_data_field_author';
  $handler->display->display_options['fields']['field_author_1']['field'] = 'field_author';
  $handler->display->display_options['fields']['field_author_1']['label'] = '';
  $handler->display->display_options['fields']['field_author_1']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_author_1']['alter']['text'] = 'BY [field_author_1] ';
  $handler->display->display_options['fields']['field_author_1']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_author_1']['settings'] = array(
    'link' => 1,
  );
  /* Field: Node: Published at */
  $handler->display->display_options['fields']['published_at']['id'] = 'published_at';
  $handler->display->display_options['fields']['published_at']['table'] = 'publication_date';
  $handler->display->display_options['fields']['published_at']['field'] = 'published_at';
  $handler->display->display_options['fields']['published_at']['label'] = '';
  $handler->display->display_options['fields']['published_at']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['published_at']['alter']['text'] = 'BY [field_author_1] | POSTED [published_at]';
  $handler->display->display_options['fields']['published_at']['element_type'] = 'div';
  $handler->display->display_options['fields']['published_at']['element_class'] = 'byline';
  $handler->display->display_options['fields']['published_at']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['published_at']['date_format'] = 'custom';
  $handler->display->display_options['fields']['published_at']['custom_date_format'] = 'F j, Y  \\A\\T g:iA T';
  /* Field: Content: Main Video Embed Code */
  $handler->display->display_options['fields']['field_blog_video']['id'] = 'field_blog_video';
  $handler->display->display_options['fields']['field_blog_video']['table'] = 'field_data_field_blog_video';
  $handler->display->display_options['fields']['field_blog_video']['field'] = 'field_blog_video';
  $handler->display->display_options['fields']['field_blog_video']['label'] = '';
  $handler->display->display_options['fields']['field_blog_video']['element_type'] = 'div';
  $handler->display->display_options['fields']['field_blog_video']['element_class'] = 'blog-listing-video';
  $handler->display->display_options['fields']['field_blog_video']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_blog_video']['element_wrapper_type'] = '0';
  $handler->display->display_options['fields']['field_blog_video']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['field_blog_video']['hide_empty'] = TRUE;
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
  $handler->display->display_options['fields']['field_image']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_image']['settings'] = array(
    'image_style' => 'thumbnail',
    'image_link' => '',
  );
  $handler->display->display_options['fields']['field_image']['field_api_classes'] = TRUE;
  /* Field: Field: Deck */
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
  $handler->display->display_options['fields']['field_video_id']['relationship'] = 'field_video_hero_target_id';
  $handler->display->display_options['fields']['field_video_id']['label'] = '';
  $handler->display->display_options['fields']['field_video_id']['element_type'] = '0';
  $handler->display->display_options['fields']['field_video_id']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_video_id']['element_wrapper_type'] = '0';
  $handler->display->display_options['fields']['field_video_id']['hide_empty'] = TRUE;
  $handler->display->display_options['defaults']['arguments'] = FALSE;
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
    'article' => 'article',
  );
  $handler->display->display_options['metatags'] = array(
    'title' => array(
      'value' => 'Hungry Crowd | [site:name]',
    ),
    'canonical' => array(
      'value' => '[view:url:absolute]?page=[current-page:query:page]',
    ),
    'og:title' => array(
      'value' => 'Hungry Crowd',
    ),
    'og:image' => array(
      'value' => '[site:url]sites/default/files/foodandwine-social.jpg',
    ),
  );
  $handler->display->display_options['path'] = 'legacy-blogs';

  /* Display: Blogs Topics Page */
  $handler = $view->new_display('page', 'Blogs Topics Page', 'page_1');
  $handler->display->display_options['defaults']['pager'] = FALSE;
  $handler->display->display_options['pager']['type'] = 'full';
  $handler->display->display_options['pager']['options']['items_per_page'] = '10';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['pager']['options']['id'] = '0';
  $handler->display->display_options['pager']['options']['quantity'] = '9';
  $handler->display->display_options['pager']['options']['tags']['first'] = '';
  $handler->display->display_options['pager']['options']['tags']['previous'] = 'Previous';
  $handler->display->display_options['pager']['options']['tags']['next'] = 'Next';
  $handler->display->display_options['pager']['options']['tags']['last'] = '';
  $handler->display->display_options['defaults']['relationships'] = FALSE;
  /* Relationship: Entity Reference: Referenced Entity */
  $handler->display->display_options['relationships']['field_images_target_id']['id'] = 'field_images_target_id';
  $handler->display->display_options['relationships']['field_images_target_id']['table'] = 'field_data_field_images';
  $handler->display->display_options['relationships']['field_images_target_id']['field'] = 'field_images_target_id';
  /* Relationship: Content: Topic (field_topic) */
  $handler->display->display_options['relationships']['field_topic_tid']['id'] = 'field_topic_tid';
  $handler->display->display_options['relationships']['field_topic_tid']['table'] = 'field_data_field_topic';
  $handler->display->display_options['relationships']['field_topic_tid']['field'] = 'field_topic_tid';
  /* Relationship: Entity Reference: Referenced Entity */
  $handler->display->display_options['relationships']['field_video_hero_target_id']['id'] = 'field_video_hero_target_id';
  $handler->display->display_options['relationships']['field_video_hero_target_id']['table'] = 'field_data_field_video_hero';
  $handler->display->display_options['relationships']['field_video_hero_target_id']['field'] = 'field_video_hero_target_id';
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Content: Path */
  $handler->display->display_options['fields']['path']['id'] = 'path';
  $handler->display->display_options['fields']['path']['table'] = 'node';
  $handler->display->display_options['fields']['path']['field'] = 'path';
  $handler->display->display_options['fields']['path']['label'] = '';
  $handler->display->display_options['fields']['path']['exclude'] = TRUE;
  $handler->display->display_options['fields']['path']['element_label_colon'] = FALSE;
  /* Field: Content: Topic */
  $handler->display->display_options['fields']['field_topic']['id'] = 'field_topic';
  $handler->display->display_options['fields']['field_topic']['table'] = 'field_data_field_topic';
  $handler->display->display_options['fields']['field_topic']['field'] = 'field_topic';
  $handler->display->display_options['fields']['field_topic']['label'] = '';
  $handler->display->display_options['fields']['field_topic']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['field_topic']['alter']['text'] = '<div class="bubble">
[field_topic]
<span class="pointer"></span>
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
  $handler->display->display_options['fields']['title']['element_type'] = 'h2';
  $handler->display->display_options['fields']['title']['element_label_colon'] = FALSE;
  /* Field: Content: Author */
  $handler->display->display_options['fields']['field_author']['id'] = 'field_author';
  $handler->display->display_options['fields']['field_author']['table'] = 'field_data_field_author';
  $handler->display->display_options['fields']['field_author']['field'] = 'field_author';
  $handler->display->display_options['fields']['field_author']['label'] = '';
  $handler->display->display_options['fields']['field_author']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_author']['alter']['text'] = 'BY [field_author]';
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
  $handler->display->display_options['fields']['published_at']['alter']['text'] = 'BY 
[field_author] | [published_at]';
  $handler->display->display_options['fields']['published_at']['element_type'] = 'div';
  $handler->display->display_options['fields']['published_at']['element_class'] = 'byline';
  $handler->display->display_options['fields']['published_at']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['published_at']['date_format'] = 'custom';
  $handler->display->display_options['fields']['published_at']['custom_date_format'] = 'F j, Y  \\A\\T g:iA T';
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
  $handler->display->display_options['fields']['field_image']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_image']['settings'] = array(
    'image_style' => 'thumbnail',
    'image_link' => '',
  );
  $handler->display->display_options['fields']['field_image']['field_api_classes'] = TRUE;
  /* Field: Content: Main Video Embed Code */
  $handler->display->display_options['fields']['field_blog_video']['id'] = 'field_blog_video';
  $handler->display->display_options['fields']['field_blog_video']['table'] = 'field_data_field_blog_video';
  $handler->display->display_options['fields']['field_blog_video']['field'] = 'field_blog_video';
  $handler->display->display_options['fields']['field_blog_video']['label'] = '';
  $handler->display->display_options['fields']['field_blog_video']['element_type'] = 'div';
  $handler->display->display_options['fields']['field_blog_video']['element_class'] = 'blog-listing-video';
  $handler->display->display_options['fields']['field_blog_video']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_blog_video']['element_wrapper_type'] = '0';
  $handler->display->display_options['fields']['field_blog_video']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['field_blog_video']['hide_empty'] = TRUE;
  /* Field: Field: Deck */
  $handler->display->display_options['fields']['field_deck']['id'] = 'field_deck';
  $handler->display->display_options['fields']['field_deck']['table'] = 'field_data_field_deck';
  $handler->display->display_options['fields']['field_deck']['field'] = 'field_deck';
  $handler->display->display_options['fields']['field_deck']['label'] = '';
  $handler->display->display_options['fields']['field_deck']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['field_deck']['alter']['text'] = '[field_deck] <a class="readmore" href="[path]">READ MORE</a>';
  $handler->display->display_options['fields']['field_deck']['element_label_colon'] = FALSE;
  /* Field: Content: Video ID */
  $handler->display->display_options['fields']['field_video_id']['id'] = 'field_video_id';
  $handler->display->display_options['fields']['field_video_id']['table'] = 'field_data_field_video_id';
  $handler->display->display_options['fields']['field_video_id']['field'] = 'field_video_id';
  $handler->display->display_options['fields']['field_video_id']['relationship'] = 'field_video_hero_target_id';
  $handler->display->display_options['fields']['field_video_id']['label'] = '';
  $handler->display->display_options['fields']['field_video_id']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_video_id']['element_type'] = '0';
  $handler->display->display_options['fields']['field_video_id']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_video_id']['element_wrapper_type'] = '0';
  $handler->display->display_options['fields']['field_video_id']['hide_empty'] = TRUE;
  $handler->display->display_options['defaults']['arguments'] = FALSE;
  /* Contextual filter: Taxonomy term: Label (field_taxo_topic_label) */
  $handler->display->display_options['arguments']['field_taxo_topic_label_value']['id'] = 'field_taxo_topic_label_value';
  $handler->display->display_options['arguments']['field_taxo_topic_label_value']['table'] = 'field_data_field_taxo_topic_label';
  $handler->display->display_options['arguments']['field_taxo_topic_label_value']['field'] = 'field_taxo_topic_label_value';
  $handler->display->display_options['arguments']['field_taxo_topic_label_value']['relationship'] = 'field_topic_tid';
  $handler->display->display_options['arguments']['field_taxo_topic_label_value']['default_action'] = 'default';
  $handler->display->display_options['arguments']['field_taxo_topic_label_value']['default_argument_type'] = 'raw';
  $handler->display->display_options['arguments']['field_taxo_topic_label_value']['default_argument_options']['index'] = '1';
  $handler->display->display_options['arguments']['field_taxo_topic_label_value']['summary']['number_of_records'] = '0';
  $handler->display->display_options['arguments']['field_taxo_topic_label_value']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['field_taxo_topic_label_value']['summary_options']['items_per_page'] = '25';
  $handler->display->display_options['arguments']['field_taxo_topic_label_value']['limit'] = '0';
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
    'article' => 'article',
  );
  $handler->display->display_options['metatags'] = array(
    'title' => array(
      'value' => 'Hungry Crowd | [site:name]',
    ),
    'canonical' => array(
      'value' => '[view:url:absolute]?page=[current-page:query:page]',
    ),
  );
  $handler->display->display_options['path'] = 'legacy-blogs/%';

  /* Display: Blogs Related Tags Page */
  $handler = $view->new_display('page', 'Blogs Related Tags Page', 'page_2');
  $handler->display->display_options['defaults']['pager'] = FALSE;
  $handler->display->display_options['pager']['type'] = 'full';
  $handler->display->display_options['pager']['options']['items_per_page'] = '10';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['pager']['options']['id'] = '0';
  $handler->display->display_options['pager']['options']['quantity'] = '9';
  $handler->display->display_options['pager']['options']['tags']['first'] = '';
  $handler->display->display_options['pager']['options']['tags']['previous'] = 'Previous';
  $handler->display->display_options['pager']['options']['tags']['next'] = 'Next';
  $handler->display->display_options['pager']['options']['tags']['last'] = '';
  $handler->display->display_options['defaults']['relationships'] = FALSE;
  /* Relationship: Entity Reference: Referenced Entity */
  $handler->display->display_options['relationships']['field_images_target_id']['id'] = 'field_images_target_id';
  $handler->display->display_options['relationships']['field_images_target_id']['table'] = 'field_data_field_images';
  $handler->display->display_options['relationships']['field_images_target_id']['field'] = 'field_images_target_id';
  /* Relationship: Field: Tags (field_tags) */
  $handler->display->display_options['relationships']['field_tags_tid']['id'] = 'field_tags_tid';
  $handler->display->display_options['relationships']['field_tags_tid']['table'] = 'field_data_field_tags';
  $handler->display->display_options['relationships']['field_tags_tid']['field'] = 'field_tags_tid';
  /* Relationship: Entity Reference: Referenced Entity */
  $handler->display->display_options['relationships']['field_video_hero_target_id']['id'] = 'field_video_hero_target_id';
  $handler->display->display_options['relationships']['field_video_hero_target_id']['table'] = 'field_data_field_video_hero';
  $handler->display->display_options['relationships']['field_video_hero_target_id']['field'] = 'field_video_hero_target_id';
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Content: Path */
  $handler->display->display_options['fields']['path']['id'] = 'path';
  $handler->display->display_options['fields']['path']['table'] = 'node';
  $handler->display->display_options['fields']['path']['field'] = 'path';
  $handler->display->display_options['fields']['path']['label'] = '';
  $handler->display->display_options['fields']['path']['exclude'] = TRUE;
  $handler->display->display_options['fields']['path']['element_label_colon'] = FALSE;
  /* Field: Field: Tags */
  $handler->display->display_options['fields']['field_tags']['id'] = 'field_tags';
  $handler->display->display_options['fields']['field_tags']['table'] = 'field_data_field_tags';
  $handler->display->display_options['fields']['field_tags']['field'] = 'field_tags';
  $handler->display->display_options['fields']['field_tags']['label'] = '';
  $handler->display->display_options['fields']['field_tags']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['field_tags']['alter']['text'] = '<div class="bubble">
[field_tags]
<span class="pointer"></span>
</div>';
  $handler->display->display_options['fields']['field_tags']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_tags']['type'] = 'taxonomy_term_reference_plain';
  $handler->display->display_options['fields']['field_tags']['delta_limit'] = '1';
  $handler->display->display_options['fields']['field_tags']['delta_offset'] = '0';
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
  $handler->display->display_options['fields']['field_author']['alter']['text'] = 'BY [field_author]';
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
  $handler->display->display_options['fields']['published_at']['alter']['text'] = 'BY 
[field_author] | [published_at]';
  $handler->display->display_options['fields']['published_at']['element_type'] = 'div';
  $handler->display->display_options['fields']['published_at']['element_class'] = 'byline';
  $handler->display->display_options['fields']['published_at']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['published_at']['date_format'] = 'custom';
  $handler->display->display_options['fields']['published_at']['custom_date_format'] = 'F j, Y  \\A\\T g:iA T';
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
  $handler->display->display_options['fields']['field_image']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_image']['settings'] = array(
    'image_style' => 'thumbnail',
    'image_link' => '',
  );
  $handler->display->display_options['fields']['field_image']['field_api_classes'] = TRUE;
  /* Field: Content: Main Video Embed Code */
  $handler->display->display_options['fields']['field_blog_video']['id'] = 'field_blog_video';
  $handler->display->display_options['fields']['field_blog_video']['table'] = 'field_data_field_blog_video';
  $handler->display->display_options['fields']['field_blog_video']['field'] = 'field_blog_video';
  $handler->display->display_options['fields']['field_blog_video']['label'] = '';
  $handler->display->display_options['fields']['field_blog_video']['element_type'] = 'div';
  $handler->display->display_options['fields']['field_blog_video']['element_class'] = 'blog-listing-video';
  $handler->display->display_options['fields']['field_blog_video']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_blog_video']['element_wrapper_type'] = '0';
  $handler->display->display_options['fields']['field_blog_video']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['field_blog_video']['hide_empty'] = TRUE;
  /* Field: Field: Deck */
  $handler->display->display_options['fields']['field_deck']['id'] = 'field_deck';
  $handler->display->display_options['fields']['field_deck']['table'] = 'field_data_field_deck';
  $handler->display->display_options['fields']['field_deck']['field'] = 'field_deck';
  $handler->display->display_options['fields']['field_deck']['label'] = '';
  $handler->display->display_options['fields']['field_deck']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['field_deck']['alter']['text'] = '[field_deck] <a class="readmore" href="[path]">READ MORE</a>';
  $handler->display->display_options['fields']['field_deck']['element_label_colon'] = FALSE;
  /* Field: Content: Video ID */
  $handler->display->display_options['fields']['field_video_id']['id'] = 'field_video_id';
  $handler->display->display_options['fields']['field_video_id']['table'] = 'field_data_field_video_id';
  $handler->display->display_options['fields']['field_video_id']['field'] = 'field_video_id';
  $handler->display->display_options['fields']['field_video_id']['label'] = '';
  $handler->display->display_options['fields']['field_video_id']['element_type'] = '0';
  $handler->display->display_options['fields']['field_video_id']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_video_id']['element_wrapper_type'] = '0';
  $handler->display->display_options['fields']['field_video_id']['hide_empty'] = TRUE;
  $handler->display->display_options['defaults']['arguments'] = FALSE;
  /* Contextual filter: Taxonomy term: Label (field_taxo_tags_label) */
  $handler->display->display_options['arguments']['field_taxo_tags_label_value']['id'] = 'field_taxo_tags_label_value';
  $handler->display->display_options['arguments']['field_taxo_tags_label_value']['table'] = 'field_data_field_taxo_tags_label';
  $handler->display->display_options['arguments']['field_taxo_tags_label_value']['field'] = 'field_taxo_tags_label_value';
  $handler->display->display_options['arguments']['field_taxo_tags_label_value']['relationship'] = 'field_tags_tid';
  $handler->display->display_options['arguments']['field_taxo_tags_label_value']['default_action'] = 'default';
  $handler->display->display_options['arguments']['field_taxo_tags_label_value']['default_argument_type'] = 'raw';
  $handler->display->display_options['arguments']['field_taxo_tags_label_value']['default_argument_options']['index'] = '2';
  $handler->display->display_options['arguments']['field_taxo_tags_label_value']['summary']['number_of_records'] = '0';
  $handler->display->display_options['arguments']['field_taxo_tags_label_value']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['field_taxo_tags_label_value']['summary_options']['items_per_page'] = '25';
  $handler->display->display_options['arguments']['field_taxo_tags_label_value']['limit'] = '0';
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
    'article' => 'article',
  );
  $handler->display->display_options['metatags'] = array(
    'title' => array(
      'value' => 'Hungry Crowd | [site:name]',
    ),
  );
  $handler->display->display_options['path'] = 'legacy-blogs/tag/%';
  $export['ti_amg_fw_blogs_topics_listing'] = $view;

  $view = new view();
  $view->name = 'ti_amg_fw_blogs_topics_navigator';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'taxonomy_term_data';
  $view->human_name = 'TI AMG FW Blogs Topics Navigator';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['title'] = 'Topics';
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['group_by'] = TRUE;
  $handler->display->display_options['access']['type'] = 'perm';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['query']['options']['disable_sql_rewrite'] = TRUE;
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['pager']['type'] = 'none';
  $handler->display->display_options['style_plugin'] = 'grid';
  $handler->display->display_options['style_options']['columns'] = '1';
  $handler->display->display_options['row_plugin'] = 'fields';
  /* Relationship: Taxonomy term: Content using Topic */
  $handler->display->display_options['relationships']['reverse_field_topic_node']['id'] = 'reverse_field_topic_node';
  $handler->display->display_options['relationships']['reverse_field_topic_node']['table'] = 'taxonomy_term_data';
  $handler->display->display_options['relationships']['reverse_field_topic_node']['field'] = 'reverse_field_topic_node';
  /* Field: Taxonomy term: Label */
  $handler->display->display_options['fields']['field_taxo_topic_label']['id'] = 'field_taxo_topic_label';
  $handler->display->display_options['fields']['field_taxo_topic_label']['table'] = 'field_data_field_taxo_topic_label';
  $handler->display->display_options['fields']['field_taxo_topic_label']['field'] = 'field_taxo_topic_label';
  $handler->display->display_options['fields']['field_taxo_topic_label']['label'] = '';
  $handler->display->display_options['fields']['field_taxo_topic_label']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_taxo_topic_label']['element_label_colon'] = FALSE;
  /* Field: Taxonomy term: Name */
  $handler->display->display_options['fields']['name']['id'] = 'name';
  $handler->display->display_options['fields']['name']['table'] = 'taxonomy_term_data';
  $handler->display->display_options['fields']['name']['field'] = 'name';
  $handler->display->display_options['fields']['name']['label'] = '';
  $handler->display->display_options['fields']['name']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['name']['alter']['make_link'] = TRUE;
  $handler->display->display_options['fields']['name']['alter']['path'] = 'blog/[field_taxo_topic_label]';
  $handler->display->display_options['fields']['name']['alter']['absolute'] = TRUE;
  $handler->display->display_options['fields']['name']['alter']['path_case'] = 'lower';
  $handler->display->display_options['fields']['name']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['name']['alter']['ellipsis'] = FALSE;
  $handler->display->display_options['fields']['name']['element_label_colon'] = FALSE;
  /* Field: COUNT(Taxonomy term: Term ID) */
  $handler->display->display_options['fields']['tid']['id'] = 'tid';
  $handler->display->display_options['fields']['tid']['table'] = 'taxonomy_term_data';
  $handler->display->display_options['fields']['tid']['field'] = 'tid';
  $handler->display->display_options['fields']['tid']['group_type'] = 'count';
  $handler->display->display_options['fields']['tid']['label'] = '';
  $handler->display->display_options['fields']['tid']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['tid']['prefix'] = '(';
  $handler->display->display_options['fields']['tid']['suffix'] = ')';
  /* Sort criterion: Taxonomy term: Name */
  $handler->display->display_options['sorts']['name']['id'] = 'name';
  $handler->display->display_options['sorts']['name']['table'] = 'taxonomy_term_data';
  $handler->display->display_options['sorts']['name']['field'] = 'name';
  /* Filter criterion: Taxonomy vocabulary: Machine name */
  $handler->display->display_options['filters']['machine_name']['id'] = 'machine_name';
  $handler->display->display_options['filters']['machine_name']['table'] = 'taxonomy_vocabulary';
  $handler->display->display_options['filters']['machine_name']['field'] = 'machine_name';
  $handler->display->display_options['filters']['machine_name']['value'] = array(
    'topic' => 'topic',
  );
  /* Filter criterion: Content: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['relationship'] = 'reverse_field_topic_node';
  $handler->display->display_options['filters']['type']['value'] = array(
    'blog' => 'blog',
  );

  /* Display: TI AMG FW Blogs Topics Navigator - Horizontal */
  $handler = $view->new_display('block', 'TI AMG FW Blogs Topics Navigator - Horizontal', 'block');
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'list';
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['row_plugin'] = 'fields';
  $handler->display->display_options['defaults']['row_options'] = FALSE;
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Taxonomy term: Label */
  $handler->display->display_options['fields']['field_taxo_topic_label']['id'] = 'field_taxo_topic_label';
  $handler->display->display_options['fields']['field_taxo_topic_label']['table'] = 'field_data_field_taxo_topic_label';
  $handler->display->display_options['fields']['field_taxo_topic_label']['field'] = 'field_taxo_topic_label';
  $handler->display->display_options['fields']['field_taxo_topic_label']['label'] = '';
  $handler->display->display_options['fields']['field_taxo_topic_label']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_taxo_topic_label']['element_label_colon'] = FALSE;
  /* Field: Taxonomy term: Name */
  $handler->display->display_options['fields']['name']['id'] = 'name';
  $handler->display->display_options['fields']['name']['table'] = 'taxonomy_term_data';
  $handler->display->display_options['fields']['name']['field'] = 'name';
  $handler->display->display_options['fields']['name']['label'] = '';
  $handler->display->display_options['fields']['name']['alter']['make_link'] = TRUE;
  $handler->display->display_options['fields']['name']['alter']['path'] = 'blogs/[field_taxo_topic_label]';
  $handler->display->display_options['fields']['name']['alter']['absolute'] = TRUE;
  $handler->display->display_options['fields']['name']['alter']['path_case'] = 'lower';
  $handler->display->display_options['fields']['name']['alter']['max_length'] = '18';
  $handler->display->display_options['fields']['name']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['name']['alter']['trim'] = TRUE;
  $handler->display->display_options['fields']['name']['element_label_colon'] = FALSE;
  /* Field: COUNT(Taxonomy term: Term ID) */
  $handler->display->display_options['fields']['tid']['id'] = 'tid';
  $handler->display->display_options['fields']['tid']['table'] = 'taxonomy_term_data';
  $handler->display->display_options['fields']['tid']['field'] = 'tid';
  $handler->display->display_options['fields']['tid']['group_type'] = 'count';
  $handler->display->display_options['fields']['tid']['label'] = '';
  $handler->display->display_options['fields']['tid']['alter']['text'] = '[name] [tid] ';
  $handler->display->display_options['fields']['tid']['alter']['max_length'] = '20';
  $handler->display->display_options['fields']['tid']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['tid']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['tid']['prefix'] = '(';
  $handler->display->display_options['fields']['tid']['suffix'] = ')';
  $handler->display->display_options['defaults']['filter_groups'] = FALSE;
  $handler->display->display_options['defaults']['filters'] = FALSE;
  /* Filter criterion: Taxonomy vocabulary: Machine name */
  $handler->display->display_options['filters']['machine_name']['id'] = 'machine_name';
  $handler->display->display_options['filters']['machine_name']['table'] = 'taxonomy_vocabulary';
  $handler->display->display_options['filters']['machine_name']['field'] = 'machine_name';
  $handler->display->display_options['filters']['machine_name']['value'] = array(
    'topic' => 'topic',
  );
  /* Filter criterion: Content: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['relationship'] = 'reverse_field_topic_node';
  $handler->display->display_options['filters']['type']['value'] = array(
    'article' => 'article',
    'blog' => 'blog',
  );
  /* Filter criterion: Content: Published */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['relationship'] = 'reverse_field_topic_node';
  $handler->display->display_options['filters']['status']['value'] = '1';
  $handler->display->display_options['block_caching'] = '8';

  /* Display: TI AMG FW Blogs Topics Navigator - Vertical */
  $handler = $view->new_display('block', 'TI AMG FW Blogs Topics Navigator - Vertical', 'block_1');
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'grid';
  $handler->display->display_options['style_options']['columns'] = '1';
  $handler->display->display_options['style_options']['alignment'] = 'vertical';
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['row_plugin'] = 'fields';
  $handler->display->display_options['defaults']['row_options'] = FALSE;
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Taxonomy term: Label */
  $handler->display->display_options['fields']['field_taxo_topic_label']['id'] = 'field_taxo_topic_label';
  $handler->display->display_options['fields']['field_taxo_topic_label']['table'] = 'field_data_field_taxo_topic_label';
  $handler->display->display_options['fields']['field_taxo_topic_label']['field'] = 'field_taxo_topic_label';
  $handler->display->display_options['fields']['field_taxo_topic_label']['label'] = '';
  $handler->display->display_options['fields']['field_taxo_topic_label']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_taxo_topic_label']['element_label_colon'] = FALSE;
  /* Field: Taxonomy term: Name */
  $handler->display->display_options['fields']['name']['id'] = 'name';
  $handler->display->display_options['fields']['name']['table'] = 'taxonomy_term_data';
  $handler->display->display_options['fields']['name']['field'] = 'name';
  $handler->display->display_options['fields']['name']['label'] = '';
  $handler->display->display_options['fields']['name']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['name']['alter']['make_link'] = TRUE;
  $handler->display->display_options['fields']['name']['alter']['path'] = 'blogs/[field_taxo_topic_label]';
  $handler->display->display_options['fields']['name']['alter']['absolute'] = TRUE;
  $handler->display->display_options['fields']['name']['alter']['path_case'] = 'lower';
  $handler->display->display_options['fields']['name']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['name']['alter']['ellipsis'] = FALSE;
  $handler->display->display_options['fields']['name']['element_label_colon'] = FALSE;
  /* Field: COUNT(Taxonomy term: Term ID) */
  $handler->display->display_options['fields']['tid']['id'] = 'tid';
  $handler->display->display_options['fields']['tid']['table'] = 'taxonomy_term_data';
  $handler->display->display_options['fields']['tid']['field'] = 'tid';
  $handler->display->display_options['fields']['tid']['group_type'] = 'count';
  $handler->display->display_options['fields']['tid']['label'] = '';
  $handler->display->display_options['fields']['tid']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['tid']['prefix'] = '(';
  $handler->display->display_options['fields']['tid']['suffix'] = ')';
  $handler->display->display_options['defaults']['filter_groups'] = FALSE;
  $handler->display->display_options['defaults']['filters'] = FALSE;
  /* Filter criterion: Taxonomy vocabulary: Machine name */
  $handler->display->display_options['filters']['machine_name']['id'] = 'machine_name';
  $handler->display->display_options['filters']['machine_name']['table'] = 'taxonomy_vocabulary';
  $handler->display->display_options['filters']['machine_name']['field'] = 'machine_name';
  $handler->display->display_options['filters']['machine_name']['value'] = array(
    'topic' => 'topic',
  );
  /* Filter criterion: Content: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['relationship'] = 'reverse_field_topic_node';
  $handler->display->display_options['filters']['type']['value'] = array(
    'article' => 'article',
    'blog' => 'blog',
  );
  /* Filter criterion: Content: Published */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['relationship'] = 'reverse_field_topic_node';
  $handler->display->display_options['filters']['status']['value'] = '1';
  $handler->display->display_options['block_caching'] = '8';
  $export['ti_amg_fw_blogs_topics_navigator'] = $view;

  $view = new view();
  $view->name = 'ti_amg_fw_related_links';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'node';
  $view->human_name = 'TI AMG FW RELATED LINKS';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['title'] = 'TI AMG FW RELATED LINKS';
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
    'blog' => 'blog',
  );

  /* Display: Block */
  $handler = $view->new_display('block', 'Block', 'block');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['title'] = 'Related Links';
  $handler->display->display_options['defaults']['pager'] = FALSE;
  $handler->display->display_options['pager']['type'] = 'none';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'default';
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['row_plugin'] = 'fields';
  $handler->display->display_options['row_options']['hide_empty'] = TRUE;
  $handler->display->display_options['row_options']['default_field_elements'] = FALSE;
  $handler->display->display_options['defaults']['row_options'] = FALSE;
  $handler->display->display_options['defaults']['relationships'] = FALSE;
  /* Relationship: Entity Reference: Referenced Entity */
  $handler->display->display_options['relationships']['field_related_cnt_links_target_id']['id'] = 'field_related_cnt_links_target_id';
  $handler->display->display_options['relationships']['field_related_cnt_links_target_id']['table'] = 'field_data_field_related_cnt_links';
  $handler->display->display_options['relationships']['field_related_cnt_links_target_id']['field'] = 'field_related_cnt_links_target_id';
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['relationship'] = 'field_related_cnt_links_target_id';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  $handler->display->display_options['fields']['title']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['title']['hide_empty'] = TRUE;
  $handler->display->display_options['defaults']['sorts'] = FALSE;
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
    'recipe' => 'recipe',
  );
  /* Filter criterion: Content: Related Links (field_related_cnt_links) */
  $handler->display->display_options['filters']['field_related_cnt_links_target_id']['id'] = 'field_related_cnt_links_target_id';
  $handler->display->display_options['filters']['field_related_cnt_links_target_id']['table'] = 'field_data_field_related_cnt_links';
  $handler->display->display_options['filters']['field_related_cnt_links_target_id']['field'] = 'field_related_cnt_links_target_id';
  $handler->display->display_options['filters']['field_related_cnt_links_target_id']['operator'] = 'not empty';
  $handler->display->display_options['block_description'] = 'Related Links';
  $export['ti_amg_fw_related_links'] = $view;

  $view = new view();
  $view->name = 'ti_amg_fw_sites_we_like';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'taxonomy_term_data';
  $view->human_name = 'FW Sites We Like';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['title'] = 'Sites We Like';
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['access']['type'] = 'perm';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['query']['options']['disable_sql_rewrite'] = TRUE;
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['pager']['type'] = 'none';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['style_plugin'] = 'grid';
  $handler->display->display_options['row_plugin'] = 'fields';
  /* Field: Taxonomy term: Name */
  $handler->display->display_options['fields']['name']['id'] = 'name';
  $handler->display->display_options['fields']['name']['table'] = 'taxonomy_term_data';
  $handler->display->display_options['fields']['name']['field'] = 'name';
  $handler->display->display_options['fields']['name']['label'] = '';
  $handler->display->display_options['fields']['name']['exclude'] = TRUE;
  $handler->display->display_options['fields']['name']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['name']['alter']['ellipsis'] = FALSE;
  $handler->display->display_options['fields']['name']['element_label_colon'] = FALSE;
  /* Field: Taxonomy term: Site Link */
  $handler->display->display_options['fields']['field_site_link']['id'] = 'field_site_link';
  $handler->display->display_options['fields']['field_site_link']['table'] = 'field_data_field_site_link';
  $handler->display->display_options['fields']['field_site_link']['field'] = 'field_site_link';
  $handler->display->display_options['fields']['field_site_link']['label'] = '';
  $handler->display->display_options['fields']['field_site_link']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['field_site_link']['alter']['text'] = '<a title="[name]" href=\'[field_site_link]\' target=\'_blank\'>[name]</a>';
  $handler->display->display_options['fields']['field_site_link']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_site_link']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['field_site_link']['click_sort_column'] = 'url';
  $handler->display->display_options['fields']['field_site_link']['type'] = 'link_absolute';
  /* Sort criterion: Taxonomy term: Name */
  $handler->display->display_options['sorts']['name']['id'] = 'name';
  $handler->display->display_options['sorts']['name']['table'] = 'taxonomy_term_data';
  $handler->display->display_options['sorts']['name']['field'] = 'name';

  /* Display: TI AMG FW Sites We Like - Blog Detail */
  $handler = $view->new_display('block', 'TI AMG FW Sites We Like - Blog Detail', 'block');
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'list';
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['row_plugin'] = 'fields';
  $handler->display->display_options['defaults']['row_options'] = FALSE;
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Taxonomy term: Name */
  $handler->display->display_options['fields']['name']['id'] = 'name';
  $handler->display->display_options['fields']['name']['table'] = 'taxonomy_term_data';
  $handler->display->display_options['fields']['name']['field'] = 'name';
  $handler->display->display_options['fields']['name']['label'] = '';
  $handler->display->display_options['fields']['name']['exclude'] = TRUE;
  $handler->display->display_options['fields']['name']['alter']['max_length'] = '24';
  $handler->display->display_options['fields']['name']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['name']['alter']['trim'] = TRUE;
  $handler->display->display_options['fields']['name']['element_label_colon'] = FALSE;
  /* Field: Taxonomy term: Site Link */
  $handler->display->display_options['fields']['field_site_link']['id'] = 'field_site_link';
  $handler->display->display_options['fields']['field_site_link']['table'] = 'field_data_field_site_link';
  $handler->display->display_options['fields']['field_site_link']['field'] = 'field_site_link';
  $handler->display->display_options['fields']['field_site_link']['label'] = '';
  $handler->display->display_options['fields']['field_site_link']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['field_site_link']['alter']['text'] = '<a title="[name]" href=\'[field_site_link]\' target=\'_blank\'>[name]</a>';
  $handler->display->display_options['fields']['field_site_link']['alter']['max_length'] = '25';
  $handler->display->display_options['fields']['field_site_link']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['field_site_link']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_site_link']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['field_site_link']['click_sort_column'] = 'url';
  $handler->display->display_options['fields']['field_site_link']['type'] = 'link_absolute';
  $handler->display->display_options['defaults']['filter_groups'] = FALSE;
  $handler->display->display_options['defaults']['filters'] = FALSE;
  /* Filter criterion: Taxonomy vocabulary: Machine name */
  $handler->display->display_options['filters']['machine_name']['id'] = 'machine_name';
  $handler->display->display_options['filters']['machine_name']['table'] = 'taxonomy_vocabulary';
  $handler->display->display_options['filters']['machine_name']['field'] = 'machine_name';
  $handler->display->display_options['filters']['machine_name']['value'] = array(
    'sites_we_like' => 'sites_we_like',
  );
  $handler->display->display_options['block_caching'] = '8';

  /* Display: TI AMG FW Sites We Like - Blogs & Topics */
  $handler = $view->new_display('block', 'TI AMG FW Sites We Like - Blogs & Topics', 'block_1');
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'grid';
  $handler->display->display_options['style_options']['columns'] = '1';
  $handler->display->display_options['style_options']['alignment'] = 'vertical';
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['row_plugin'] = 'fields';
  $handler->display->display_options['defaults']['row_options'] = FALSE;
  $handler->display->display_options['defaults']['filter_groups'] = FALSE;
  $handler->display->display_options['defaults']['filters'] = FALSE;
  /* Filter criterion: Taxonomy vocabulary: Machine name */
  $handler->display->display_options['filters']['machine_name']['id'] = 'machine_name';
  $handler->display->display_options['filters']['machine_name']['table'] = 'taxonomy_vocabulary';
  $handler->display->display_options['filters']['machine_name']['field'] = 'machine_name';
  $handler->display->display_options['filters']['machine_name']['value'] = array(
    'sites_we_like' => 'sites_we_like',
  );
  $handler->display->display_options['block_caching'] = '8';
  $export['ti_amg_fw_sites_we_like'] = $view;

  return $export;
}
