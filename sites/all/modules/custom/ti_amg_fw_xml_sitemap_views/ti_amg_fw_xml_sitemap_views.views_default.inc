<?php
/**
 * @file
 * ti_amg_fw_xml_sitemap_views.views_default.inc
 */

/**
 * Implements hook_views_default_views().
 */
function ti_amg_fw_xml_sitemap_views_views_default_views() {
  $export = array();

  $view = new view();
  $view->name = 'xmlsitemap';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'xmlsitemap';
  $view->human_name = 'xmlsitemap';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['group_by'] = TRUE;
  $handler->display->display_options['access']['type'] = 'none';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['pager']['type'] = 'full';
  $handler->display->display_options['pager']['options']['items_per_page'] = '50000';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['style_plugin'] = 'table';
  $handler->display->display_options['style_options']['columns'] = array(
    'id' => 'id',
  );
  $handler->display->display_options['style_options']['default'] = '-1';
  $handler->display->display_options['style_options']['info'] = array(
    'id' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
  );
  /* Relationship: XML Sitemap: Id */
  $handler->display->display_options['relationships']['id']['id'] = 'id';
  $handler->display->display_options['relationships']['id']['table'] = 'xmlsitemap';
  $handler->display->display_options['relationships']['id']['field'] = 'id';
  $handler->display->display_options['relationships']['id']['label'] = 'Node';
  $handler->display->display_options['relationships']['id']['required'] = TRUE;
  /* Relationship: XML Sitemap: Loc -> URL Alias */
  $handler->display->display_options['relationships']['loc']['id'] = 'loc';
  $handler->display->display_options['relationships']['loc']['table'] = 'xmlsitemap';
  $handler->display->display_options['relationships']['loc']['field'] = 'loc';
  $handler->display->display_options['relationships']['loc']['label'] = 'URL Source';
  $handler->display->display_options['relationships']['loc']['required'] = TRUE;
  /* Field: XML Sitemap: Id */
  $handler->display->display_options['fields']['id']['id'] = 'id';
  $handler->display->display_options['fields']['id']['table'] = 'xmlsitemap';
  $handler->display->display_options['fields']['id']['field'] = 'id';
  /* Field: XML Sitemap: Type */
  $handler->display->display_options['fields']['type']['id'] = 'type';
  $handler->display->display_options['fields']['type']['table'] = 'xmlsitemap';
  $handler->display->display_options['fields']['type']['field'] = 'type';
  /* Field: XML Sitemap: Subtype */
  $handler->display->display_options['fields']['subtype']['id'] = 'subtype';
  $handler->display->display_options['fields']['subtype']['table'] = 'xmlsitemap';
  $handler->display->display_options['fields']['subtype']['field'] = 'subtype';
  /* Field: XML Sitemap: Loc / URL */
  $handler->display->display_options['fields']['loc']['id'] = 'loc';
  $handler->display->display_options['fields']['loc']['table'] = 'xmlsitemap';
  $handler->display->display_options['fields']['loc']['field'] = 'loc';
  /* Field: XML Sitemap: Lastmod */
  $handler->display->display_options['fields']['lastmod']['id'] = 'lastmod';
  $handler->display->display_options['fields']['lastmod']['table'] = 'xmlsitemap';
  $handler->display->display_options['fields']['lastmod']['field'] = 'lastmod';
  $handler->display->display_options['fields']['lastmod']['separator'] = '';
  /* Field: XML Sitemap: Change freq */
  $handler->display->display_options['fields']['changefreq']['id'] = 'changefreq';
  $handler->display->display_options['fields']['changefreq']['table'] = 'xmlsitemap';
  $handler->display->display_options['fields']['changefreq']['field'] = 'changefreq';
  $handler->display->display_options['fields']['changefreq']['separator'] = '';
  /* Field: XML Sitemap: Change count */
  $handler->display->display_options['fields']['changecount']['id'] = 'changecount';
  $handler->display->display_options['fields']['changecount']['table'] = 'xmlsitemap';
  $handler->display->display_options['fields']['changecount']['field'] = 'changecount';
  $handler->display->display_options['fields']['changecount']['separator'] = '';
  /* Field: XML Sitemap: Priority */
  $handler->display->display_options['fields']['priority']['id'] = 'priority';
  $handler->display->display_options['fields']['priority']['table'] = 'xmlsitemap';
  $handler->display->display_options['fields']['priority']['field'] = 'priority';
  $handler->display->display_options['fields']['priority']['separator'] = '';
  /* Field: XML Sitemap: Language */
  $handler->display->display_options['fields']['language']['id'] = 'language';
  $handler->display->display_options['fields']['language']['table'] = 'xmlsitemap';
  $handler->display->display_options['fields']['language']['field'] = 'language';
  /* Field: XML Sitemap: Access */
  $handler->display->display_options['fields']['access']['id'] = 'access';
  $handler->display->display_options['fields']['access']['table'] = 'xmlsitemap';
  $handler->display->display_options['fields']['access']['field'] = 'access';
  $handler->display->display_options['fields']['access']['not'] = 0;
  /* Field: XML Sitemap: Status */
  $handler->display->display_options['fields']['status']['id'] = 'status';
  $handler->display->display_options['fields']['status']['table'] = 'xmlsitemap';
  $handler->display->display_options['fields']['status']['field'] = 'status';
  $handler->display->display_options['fields']['status']['not'] = 0;
  /* Sort criterion: XML Sitemap: Language */
  $handler->display->display_options['sorts']['language']['id'] = 'language';
  $handler->display->display_options['sorts']['language']['table'] = 'xmlsitemap';
  $handler->display->display_options['sorts']['language']['field'] = 'language';
  $handler->display->display_options['sorts']['language']['order'] = 'DESC';
  /* Sort criterion: XML Sitemap: Loc / URL */
  $handler->display->display_options['sorts']['loc']['id'] = 'loc';
  $handler->display->display_options['sorts']['loc']['table'] = 'xmlsitemap';
  $handler->display->display_options['sorts']['loc']['field'] = 'loc';
  /* Filter criterion: XML Sitemap: Access */
  $handler->display->display_options['filters']['access']['id'] = 'access';
  $handler->display->display_options['filters']['access']['table'] = 'xmlsitemap';
  $handler->display->display_options['filters']['access']['field'] = 'access';
  $handler->display->display_options['filters']['access']['value'] = '1';
  /* Filter criterion: XML Sitemap: Status */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'xmlsitemap';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = '1';
  /* Filter criterion: URL Alias: Alias */
  $handler->display->display_options['filters']['alias']['id'] = 'alias';
  $handler->display->display_options['filters']['alias']['table'] = 'url_alias';
  $handler->display->display_options['filters']['alias']['field'] = 'alias';
  $handler->display->display_options['filters']['alias']['relationship'] = 'loc';
  /* Filter criterion: Content: Do Not Syndicate (field_syndication) */
  $handler->display->display_options['filters']['field_syndication_value']['id'] = 'field_syndication_value';
  $handler->display->display_options['filters']['field_syndication_value']['table'] = 'field_data_field_syndication';
  $handler->display->display_options['filters']['field_syndication_value']['field'] = 'field_syndication_value';
  $handler->display->display_options['filters']['field_syndication_value']['relationship'] = 'id';
  $handler->display->display_options['filters']['field_syndication_value']['operator'] = 'not';
  $handler->display->display_options['filters']['field_syndication_value']['value'] = array(
    1 => '1',
  );

  /* Display: Legacy Blogs */
  $handler = $view->new_display('xmlsitemap', 'Legacy Blogs', 'blogs');
  $handler->display->display_options['pager']['type'] = 'some';
  $handler->display->display_options['pager']['options']['items_per_page'] = '50000';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['defaults']['filter_groups'] = FALSE;
  $handler->display->display_options['filter_groups']['groups'] = array(
    1 => 'AND',
    2 => 'OR',
  );
  $handler->display->display_options['defaults']['filters'] = FALSE;
  /* Filter criterion: XML Sitemap: Access */
  $handler->display->display_options['filters']['access']['id'] = 'access';
  $handler->display->display_options['filters']['access']['table'] = 'xmlsitemap';
  $handler->display->display_options['filters']['access']['field'] = 'access';
  $handler->display->display_options['filters']['access']['value'] = '1';
  $handler->display->display_options['filters']['access']['group'] = 1;
  /* Filter criterion: XML Sitemap: Status */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'xmlsitemap';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = '1';
  $handler->display->display_options['filters']['status']['group'] = 1;
  /* Filter criterion: URL Alias: Alias */
  $handler->display->display_options['filters']['alias_1']['id'] = 'alias_1';
  $handler->display->display_options['filters']['alias_1']['table'] = 'url_alias';
  $handler->display->display_options['filters']['alias_1']['field'] = 'alias';
  $handler->display->display_options['filters']['alias_1']['relationship'] = 'loc';
  $handler->display->display_options['filters']['alias_1']['value'] = 'blogs';
  $handler->display->display_options['filters']['alias_1']['group'] = 2;
  /* Filter criterion: URL Alias: Alias */
  $handler->display->display_options['filters']['alias']['id'] = 'alias';
  $handler->display->display_options['filters']['alias']['table'] = 'url_alias';
  $handler->display->display_options['filters']['alias']['field'] = 'alias';
  $handler->display->display_options['filters']['alias']['relationship'] = 'loc';
  $handler->display->display_options['filters']['alias']['operator'] = 'starts';
  $handler->display->display_options['filters']['alias']['value'] = 'blogs/';
  $handler->display->display_options['filters']['alias']['group'] = 2;
  /* Filter criterion: Content: Do Not Syndicate (field_syndication) */
  $handler->display->display_options['filters']['field_syndication_value_2']['id'] = 'field_syndication_value_2';
  $handler->display->display_options['filters']['field_syndication_value_2']['table'] = 'field_data_field_syndication';
  $handler->display->display_options['filters']['field_syndication_value_2']['field'] = 'field_syndication_value';
  $handler->display->display_options['filters']['field_syndication_value_2']['relationship'] = 'id';
  $handler->display->display_options['filters']['field_syndication_value_2']['operator'] = 'not';
  $handler->display->display_options['filters']['field_syndication_value_2']['value'] = array(
    1 => '1',
  );
  $handler->display->display_options['filters']['field_syndication_value_2']['group'] = 1;
  $handler->display->display_options['path'] = 'legacy-blogs-sitemap.xml';
  $handler->display->display_options['xmlsitemap_root_attributes'] = 'xmlns:news|http://www.google.com/schemas/sitemap-news/0.9
  xmlns:image|http://www.google.com/schemas/sitemap-image/1.1
  xmlns:video|http://www.google.com/schemas/sitemap-video/1.1';
  $handler->display->display_options['xmlsitemap_view_mode']['node'] = 'xmlsitemap';

  /* Display: Recipes */
  $handler = $view->new_display('xmlsitemap', 'Recipes', 'recipe');
  $handler->display->display_options['defaults']['group_by'] = FALSE;
  $handler->display->display_options['group_by'] = TRUE;
  $handler->display->display_options['pager']['type'] = 'some';
  $handler->display->display_options['pager']['options']['items_per_page'] = '50000';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['defaults']['filter_groups'] = FALSE;
  $handler->display->display_options['filter_groups']['groups'] = array(
    1 => 'AND',
    2 => 'OR',
  );
  $handler->display->display_options['defaults']['filters'] = FALSE;
  /* Filter criterion: XML Sitemap: Access */
  $handler->display->display_options['filters']['access']['id'] = 'access';
  $handler->display->display_options['filters']['access']['table'] = 'xmlsitemap';
  $handler->display->display_options['filters']['access']['field'] = 'access';
  $handler->display->display_options['filters']['access']['value'] = '1';
  $handler->display->display_options['filters']['access']['group'] = 1;
  /* Filter criterion: XML Sitemap: Status */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'xmlsitemap';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = '1';
  $handler->display->display_options['filters']['status']['group'] = 1;
  /* Filter criterion: URL Alias: Alias */
  $handler->display->display_options['filters']['alias_1']['id'] = 'alias_1';
  $handler->display->display_options['filters']['alias_1']['table'] = 'url_alias';
  $handler->display->display_options['filters']['alias_1']['field'] = 'alias';
  $handler->display->display_options['filters']['alias_1']['relationship'] = 'loc';
  $handler->display->display_options['filters']['alias_1']['value'] = 'recipes';
  $handler->display->display_options['filters']['alias_1']['group'] = 2;
  /* Filter criterion: URL Alias: Alias */
  $handler->display->display_options['filters']['alias']['id'] = 'alias';
  $handler->display->display_options['filters']['alias']['table'] = 'url_alias';
  $handler->display->display_options['filters']['alias']['field'] = 'alias';
  $handler->display->display_options['filters']['alias']['relationship'] = 'loc';
  $handler->display->display_options['filters']['alias']['operator'] = 'starts';
  $handler->display->display_options['filters']['alias']['value'] = 'recipes/';
  $handler->display->display_options['filters']['alias']['group'] = 2;
  /* Filter criterion: Content: Do Not Syndicate (field_syndication) */
  $handler->display->display_options['filters']['field_syndication_value_2']['id'] = 'field_syndication_value_2';
  $handler->display->display_options['filters']['field_syndication_value_2']['table'] = 'field_data_field_syndication';
  $handler->display->display_options['filters']['field_syndication_value_2']['field'] = 'field_syndication_value';
  $handler->display->display_options['filters']['field_syndication_value_2']['relationship'] = 'id';
  $handler->display->display_options['filters']['field_syndication_value_2']['operator'] = 'not';
  $handler->display->display_options['filters']['field_syndication_value_2']['value'] = array(
    1 => '1',
  );
  $handler->display->display_options['filters']['field_syndication_value_2']['group'] = 1;
  $handler->display->display_options['path'] = 'recipe-sitemap.xml';
  $handler->display->display_options['xmlsitemap_root_attributes'] = 'xmlns:news|http://www.google.com/schemas/sitemap-news/0.9
  xmlns:image|http://www.google.com/schemas/sitemap-image/1.1
  xmlns:video|http://www.google.com/schemas/sitemap-video/1.1';
  $handler->display->display_options['xmlsitemap_view_mode']['node'] = 'xmlsitemap';

  /* Display: Legacy Galleries */
  $handler = $view->new_display('xmlsitemap', 'Legacy Galleries', 'gallery');
  $handler->display->display_options['pager']['type'] = 'some';
  $handler->display->display_options['pager']['options']['items_per_page'] = '50000';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['defaults']['filter_groups'] = FALSE;
  $handler->display->display_options['filter_groups']['groups'] = array(
    1 => 'AND',
    2 => 'OR',
  );
  $handler->display->display_options['defaults']['filters'] = FALSE;
  /* Filter criterion: XML Sitemap: Access */
  $handler->display->display_options['filters']['access']['id'] = 'access';
  $handler->display->display_options['filters']['access']['table'] = 'xmlsitemap';
  $handler->display->display_options['filters']['access']['field'] = 'access';
  $handler->display->display_options['filters']['access']['value'] = '1';
  $handler->display->display_options['filters']['access']['group'] = 1;
  /* Filter criterion: XML Sitemap: Status */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'xmlsitemap';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = '1';
  $handler->display->display_options['filters']['status']['group'] = 1;
  /* Filter criterion: URL Alias: Alias */
  $handler->display->display_options['filters']['alias_1']['id'] = 'alias_1';
  $handler->display->display_options['filters']['alias_1']['table'] = 'url_alias';
  $handler->display->display_options['filters']['alias_1']['field'] = 'alias';
  $handler->display->display_options['filters']['alias_1']['relationship'] = 'loc';
  $handler->display->display_options['filters']['alias_1']['value'] = 'slideshows';
  $handler->display->display_options['filters']['alias_1']['group'] = 2;
  /* Filter criterion: URL Alias: Alias */
  $handler->display->display_options['filters']['alias']['id'] = 'alias';
  $handler->display->display_options['filters']['alias']['table'] = 'url_alias';
  $handler->display->display_options['filters']['alias']['field'] = 'alias';
  $handler->display->display_options['filters']['alias']['relationship'] = 'loc';
  $handler->display->display_options['filters']['alias']['operator'] = 'starts';
  $handler->display->display_options['filters']['alias']['value'] = 'slideshows/';
  $handler->display->display_options['filters']['alias']['group'] = 2;
  /* Filter criterion: Content: Do Not Syndicate (field_syndication) */
  $handler->display->display_options['filters']['field_syndication_value_2']['id'] = 'field_syndication_value_2';
  $handler->display->display_options['filters']['field_syndication_value_2']['table'] = 'field_data_field_syndication';
  $handler->display->display_options['filters']['field_syndication_value_2']['field'] = 'field_syndication_value';
  $handler->display->display_options['filters']['field_syndication_value_2']['relationship'] = 'id';
  $handler->display->display_options['filters']['field_syndication_value_2']['operator'] = 'not';
  $handler->display->display_options['filters']['field_syndication_value_2']['value'] = array(
    1 => '1',
  );
  $handler->display->display_options['filters']['field_syndication_value_2']['group'] = 1;
  $handler->display->display_options['path'] = 'legacy-gallery-sitemap.xml';
  $handler->display->display_options['xmlsitemap_root_attributes'] = 'xmlns:news|http://www.google.com/schemas/sitemap-news/0.9
  xmlns:image|http://www.google.com/schemas/sitemap-image/1.1
  xmlns:video|http://www.google.com/schemas/sitemap-video/1.1';
  $handler->display->display_options['xmlsitemap_view_mode']['node'] = 'xmlsitemap';

  /* Display: Legacy Articles */
  $handler = $view->new_display('xmlsitemap', 'Legacy Articles', 'articles');
  $handler->display->display_options['pager']['type'] = 'some';
  $handler->display->display_options['pager']['options']['items_per_page'] = '50000';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['defaults']['filter_groups'] = FALSE;
  $handler->display->display_options['filter_groups']['groups'] = array(
    1 => 'AND',
    2 => 'OR',
  );
  $handler->display->display_options['defaults']['filters'] = FALSE;
  /* Filter criterion: XML Sitemap: Access */
  $handler->display->display_options['filters']['access']['id'] = 'access';
  $handler->display->display_options['filters']['access']['table'] = 'xmlsitemap';
  $handler->display->display_options['filters']['access']['field'] = 'access';
  $handler->display->display_options['filters']['access']['value'] = '1';
  $handler->display->display_options['filters']['access']['group'] = 1;
  /* Filter criterion: XML Sitemap: Status */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'xmlsitemap';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = '1';
  $handler->display->display_options['filters']['status']['group'] = 1;
  /* Filter criterion: URL Alias: Alias */
  $handler->display->display_options['filters']['alias_1']['id'] = 'alias_1';
  $handler->display->display_options['filters']['alias_1']['table'] = 'url_alias';
  $handler->display->display_options['filters']['alias_1']['field'] = 'alias';
  $handler->display->display_options['filters']['alias_1']['relationship'] = 'loc';
  $handler->display->display_options['filters']['alias_1']['value'] = 'articles';
  $handler->display->display_options['filters']['alias_1']['group'] = 2;
  /* Filter criterion: URL Alias: Alias */
  $handler->display->display_options['filters']['alias']['id'] = 'alias';
  $handler->display->display_options['filters']['alias']['table'] = 'url_alias';
  $handler->display->display_options['filters']['alias']['field'] = 'alias';
  $handler->display->display_options['filters']['alias']['relationship'] = 'loc';
  $handler->display->display_options['filters']['alias']['operator'] = 'starts';
  $handler->display->display_options['filters']['alias']['value'] = 'articles/';
  $handler->display->display_options['filters']['alias']['group'] = 2;
  /* Filter criterion: Content: Do Not Syndicate (field_syndication) */
  $handler->display->display_options['filters']['field_syndication_value_2']['id'] = 'field_syndication_value_2';
  $handler->display->display_options['filters']['field_syndication_value_2']['table'] = 'field_data_field_syndication';
  $handler->display->display_options['filters']['field_syndication_value_2']['field'] = 'field_syndication_value';
  $handler->display->display_options['filters']['field_syndication_value_2']['relationship'] = 'id';
  $handler->display->display_options['filters']['field_syndication_value_2']['operator'] = 'not';
  $handler->display->display_options['filters']['field_syndication_value_2']['value'] = array(
    1 => '1',
  );
  $handler->display->display_options['filters']['field_syndication_value_2']['group'] = 1;
  $handler->display->display_options['path'] = 'legacy-article-sitemap.xml';
  $handler->display->display_options['xmlsitemap_root_attributes'] = 'xmlns:news|http://www.google.com/schemas/sitemap-news/0.9
  xmlns:image|http://www.google.com/schemas/sitemap-image/1.1
  xmlns:video|http://www.google.com/schemas/sitemap-video/1.1';
  $handler->display->display_options['xmlsitemap_view_mode']['node'] = 'xmlsitemap';

  /* Display: Alcoholic Drinks */
  $handler = $view->new_display('xmlsitemap', 'Alcoholic Drinks', 'alcoholic_drinks');
  $handler->display->display_options['pager']['type'] = 'some';
  $handler->display->display_options['pager']['options']['items_per_page'] = '50000';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['defaults']['filter_groups'] = FALSE;
  $handler->display->display_options['filter_groups']['groups'] = array(
    1 => 'AND',
    2 => 'OR',
  );
  $handler->display->display_options['defaults']['filters'] = FALSE;
  /* Filter criterion: XML Sitemap: Access */
  $handler->display->display_options['filters']['access']['id'] = 'access';
  $handler->display->display_options['filters']['access']['table'] = 'xmlsitemap';
  $handler->display->display_options['filters']['access']['field'] = 'access';
  $handler->display->display_options['filters']['access']['value'] = '1';
  $handler->display->display_options['filters']['access']['group'] = 1;
  /* Filter criterion: XML Sitemap: Status */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'xmlsitemap';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = '1';
  $handler->display->display_options['filters']['status']['group'] = 1;
  /* Filter criterion: URL Alias: Alias */
  $handler->display->display_options['filters']['alias_1']['id'] = 'alias_1';
  $handler->display->display_options['filters']['alias_1']['table'] = 'url_alias';
  $handler->display->display_options['filters']['alias_1']['field'] = 'alias';
  $handler->display->display_options['filters']['alias_1']['relationship'] = 'loc';
  $handler->display->display_options['filters']['alias_1']['value'] = 'beer';
  $handler->display->display_options['filters']['alias_1']['group'] = 2;
  /* Filter criterion: URL Alias: Alias */
  $handler->display->display_options['filters']['alias']['id'] = 'alias';
  $handler->display->display_options['filters']['alias']['table'] = 'url_alias';
  $handler->display->display_options['filters']['alias']['field'] = 'alias';
  $handler->display->display_options['filters']['alias']['relationship'] = 'loc';
  $handler->display->display_options['filters']['alias']['operator'] = 'starts';
  $handler->display->display_options['filters']['alias']['value'] = 'beer/';
  $handler->display->display_options['filters']['alias']['group'] = 2;
  /* Filter criterion: URL Alias: Alias */
  $handler->display->display_options['filters']['alias_2']['id'] = 'alias_2';
  $handler->display->display_options['filters']['alias_2']['table'] = 'url_alias';
  $handler->display->display_options['filters']['alias_2']['field'] = 'alias';
  $handler->display->display_options['filters']['alias_2']['relationship'] = 'loc';
  $handler->display->display_options['filters']['alias_2']['value'] = 'wine';
  $handler->display->display_options['filters']['alias_2']['group'] = 2;
  /* Filter criterion: URL Alias: Alias */
  $handler->display->display_options['filters']['alias_3']['id'] = 'alias_3';
  $handler->display->display_options['filters']['alias_3']['table'] = 'url_alias';
  $handler->display->display_options['filters']['alias_3']['field'] = 'alias';
  $handler->display->display_options['filters']['alias_3']['relationship'] = 'loc';
  $handler->display->display_options['filters']['alias_3']['operator'] = 'starts';
  $handler->display->display_options['filters']['alias_3']['value'] = 'wine/';
  $handler->display->display_options['filters']['alias_3']['group'] = 2;
  /* Filter criterion: URL Alias: Alias */
  $handler->display->display_options['filters']['alias_4']['id'] = 'alias_4';
  $handler->display->display_options['filters']['alias_4']['table'] = 'url_alias';
  $handler->display->display_options['filters']['alias_4']['field'] = 'alias';
  $handler->display->display_options['filters']['alias_4']['relationship'] = 'loc';
  $handler->display->display_options['filters']['alias_4']['value'] = 'wine-regions';
  $handler->display->display_options['filters']['alias_4']['group'] = 2;
  /* Filter criterion: URL Alias: Alias */
  $handler->display->display_options['filters']['alias_5']['id'] = 'alias_5';
  $handler->display->display_options['filters']['alias_5']['table'] = 'url_alias';
  $handler->display->display_options['filters']['alias_5']['field'] = 'alias';
  $handler->display->display_options['filters']['alias_5']['relationship'] = 'loc';
  $handler->display->display_options['filters']['alias_5']['operator'] = 'starts';
  $handler->display->display_options['filters']['alias_5']['value'] = 'wine-regions/';
  $handler->display->display_options['filters']['alias_5']['group'] = 2;
  /* Filter criterion: URL Alias: Alias */
  $handler->display->display_options['filters']['alias_6']['id'] = 'alias_6';
  $handler->display->display_options['filters']['alias_6']['table'] = 'url_alias';
  $handler->display->display_options['filters']['alias_6']['field'] = 'alias';
  $handler->display->display_options['filters']['alias_6']['relationship'] = 'loc';
  $handler->display->display_options['filters']['alias_6']['value'] = 'cocktails-spirits';
  $handler->display->display_options['filters']['alias_6']['group'] = 2;
  /* Filter criterion: URL Alias: Alias */
  $handler->display->display_options['filters']['alias_7']['id'] = 'alias_7';
  $handler->display->display_options['filters']['alias_7']['table'] = 'url_alias';
  $handler->display->display_options['filters']['alias_7']['field'] = 'alias';
  $handler->display->display_options['filters']['alias_7']['relationship'] = 'loc';
  $handler->display->display_options['filters']['alias_7']['operator'] = 'starts';
  $handler->display->display_options['filters']['alias_7']['value'] = 'cocktails-spirits/';
  $handler->display->display_options['filters']['alias_7']['group'] = 2;
  /* Filter criterion: Content: Do Not Syndicate (field_syndication) */
  $handler->display->display_options['filters']['field_syndication_value_2']['id'] = 'field_syndication_value_2';
  $handler->display->display_options['filters']['field_syndication_value_2']['table'] = 'field_data_field_syndication';
  $handler->display->display_options['filters']['field_syndication_value_2']['field'] = 'field_syndication_value';
  $handler->display->display_options['filters']['field_syndication_value_2']['relationship'] = 'id';
  $handler->display->display_options['filters']['field_syndication_value_2']['operator'] = 'not';
  $handler->display->display_options['filters']['field_syndication_value_2']['value'] = array(
    1 => '1',
  );
  $handler->display->display_options['filters']['field_syndication_value_2']['group'] = 1;
  $handler->display->display_options['path'] = 'alcoholic-drinks-sitemap.xml';
  $handler->display->display_options['xmlsitemap_root_attributes'] = 'xmlns:news|http://www.google.com/schemas/sitemap-news/0.9
  xmlns:image|http://www.google.com/schemas/sitemap-image/1.1
  xmlns:video|http://www.google.com/schemas/sitemap-video/1.1';
  $handler->display->display_options['xmlsitemap_view_mode']['node'] = 'xmlsitemap';

  /* Display: Non-Alcoholic Drinks */
  $handler = $view->new_display('xmlsitemap', 'Non-Alcoholic Drinks', 'non_alcoholic_drinks');
  $handler->display->display_options['pager']['type'] = 'some';
  $handler->display->display_options['pager']['options']['items_per_page'] = '50000';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['defaults']['filter_groups'] = FALSE;
  $handler->display->display_options['filter_groups']['groups'] = array(
    1 => 'AND',
    2 => 'OR',
  );
  $handler->display->display_options['defaults']['filters'] = FALSE;
  /* Filter criterion: XML Sitemap: Access */
  $handler->display->display_options['filters']['access']['id'] = 'access';
  $handler->display->display_options['filters']['access']['table'] = 'xmlsitemap';
  $handler->display->display_options['filters']['access']['field'] = 'access';
  $handler->display->display_options['filters']['access']['value'] = '1';
  $handler->display->display_options['filters']['access']['group'] = 1;
  /* Filter criterion: XML Sitemap: Status */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'xmlsitemap';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = '1';
  $handler->display->display_options['filters']['status']['group'] = 1;
  /* Filter criterion: URL Alias: Alias */
  $handler->display->display_options['filters']['alias_1']['id'] = 'alias_1';
  $handler->display->display_options['filters']['alias_1']['table'] = 'url_alias';
  $handler->display->display_options['filters']['alias_1']['field'] = 'alias';
  $handler->display->display_options['filters']['alias_1']['relationship'] = 'loc';
  $handler->display->display_options['filters']['alias_1']['value'] = 'drinks';
  $handler->display->display_options['filters']['alias_1']['group'] = 2;
  /* Filter criterion: URL Alias: Alias */
  $handler->display->display_options['filters']['alias']['id'] = 'alias';
  $handler->display->display_options['filters']['alias']['table'] = 'url_alias';
  $handler->display->display_options['filters']['alias']['field'] = 'alias';
  $handler->display->display_options['filters']['alias']['relationship'] = 'loc';
  $handler->display->display_options['filters']['alias']['operator'] = 'starts';
  $handler->display->display_options['filters']['alias']['value'] = 'drinks/';
  $handler->display->display_options['filters']['alias']['group'] = 2;
  /* Filter criterion: URL Alias: Alias */
  $handler->display->display_options['filters']['alias_2']['id'] = 'alias_2';
  $handler->display->display_options['filters']['alias_2']['table'] = 'url_alias';
  $handler->display->display_options['filters']['alias_2']['field'] = 'alias';
  $handler->display->display_options['filters']['alias_2']['relationship'] = 'loc';
  $handler->display->display_options['filters']['alias_2']['value'] = 'coffee';
  $handler->display->display_options['filters']['alias_2']['group'] = 2;
  /* Filter criterion: URL Alias: Alias */
  $handler->display->display_options['filters']['alias_3']['id'] = 'alias_3';
  $handler->display->display_options['filters']['alias_3']['table'] = 'url_alias';
  $handler->display->display_options['filters']['alias_3']['field'] = 'alias';
  $handler->display->display_options['filters']['alias_3']['relationship'] = 'loc';
  $handler->display->display_options['filters']['alias_3']['operator'] = 'starts';
  $handler->display->display_options['filters']['alias_3']['value'] = 'coffee/';
  $handler->display->display_options['filters']['alias_3']['group'] = 2;
  /* Filter criterion: URL Alias: Alias */
  $handler->display->display_options['filters']['alias_4']['id'] = 'alias_4';
  $handler->display->display_options['filters']['alias_4']['table'] = 'url_alias';
  $handler->display->display_options['filters']['alias_4']['field'] = 'alias';
  $handler->display->display_options['filters']['alias_4']['relationship'] = 'loc';
  $handler->display->display_options['filters']['alias_4']['value'] = 'tea';
  $handler->display->display_options['filters']['alias_4']['group'] = 2;
  /* Filter criterion: URL Alias: Alias */
  $handler->display->display_options['filters']['alias_5']['id'] = 'alias_5';
  $handler->display->display_options['filters']['alias_5']['table'] = 'url_alias';
  $handler->display->display_options['filters']['alias_5']['field'] = 'alias';
  $handler->display->display_options['filters']['alias_5']['relationship'] = 'loc';
  $handler->display->display_options['filters']['alias_5']['operator'] = 'starts';
  $handler->display->display_options['filters']['alias_5']['value'] = 'tea/';
  $handler->display->display_options['filters']['alias_5']['group'] = 2;
  /* Filter criterion: Content: Do Not Syndicate (field_syndication) */
  $handler->display->display_options['filters']['field_syndication_value_2']['id'] = 'field_syndication_value_2';
  $handler->display->display_options['filters']['field_syndication_value_2']['table'] = 'field_data_field_syndication';
  $handler->display->display_options['filters']['field_syndication_value_2']['field'] = 'field_syndication_value';
  $handler->display->display_options['filters']['field_syndication_value_2']['relationship'] = 'id';
  $handler->display->display_options['filters']['field_syndication_value_2']['operator'] = 'not';
  $handler->display->display_options['filters']['field_syndication_value_2']['value'] = array(
    1 => '1',
  );
  $handler->display->display_options['filters']['field_syndication_value_2']['group'] = 1;
  $handler->display->display_options['path'] = 'non-alcoholic-drinks-sitemap.xml';
  $handler->display->display_options['xmlsitemap_root_attributes'] = 'xmlns:news|http://www.google.com/schemas/sitemap-news/0.9
  xmlns:image|http://www.google.com/schemas/sitemap-image/1.1
  xmlns:video|http://www.google.com/schemas/sitemap-video/1.1';
  $handler->display->display_options['xmlsitemap_view_mode']['node'] = 'xmlsitemap';

  /* Display: Chefs & Contributors */
  $handler = $view->new_display('xmlsitemap', 'Chefs & Contributors', 'chefs_contributors');
  $handler->display->display_options['pager']['type'] = 'some';
  $handler->display->display_options['pager']['options']['items_per_page'] = '50000';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['defaults']['filter_groups'] = FALSE;
  $handler->display->display_options['filter_groups']['groups'] = array(
    1 => 'AND',
    2 => 'OR',
  );
  $handler->display->display_options['defaults']['filters'] = FALSE;
  /* Filter criterion: XML Sitemap: Access */
  $handler->display->display_options['filters']['access']['id'] = 'access';
  $handler->display->display_options['filters']['access']['table'] = 'xmlsitemap';
  $handler->display->display_options['filters']['access']['field'] = 'access';
  $handler->display->display_options['filters']['access']['value'] = '1';
  $handler->display->display_options['filters']['access']['group'] = 1;
  /* Filter criterion: XML Sitemap: Status */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'xmlsitemap';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = '1';
  $handler->display->display_options['filters']['status']['group'] = 1;
  /* Filter criterion: URL Alias: Alias */
  $handler->display->display_options['filters']['alias_1']['id'] = 'alias_1';
  $handler->display->display_options['filters']['alias_1']['table'] = 'url_alias';
  $handler->display->display_options['filters']['alias_1']['field'] = 'alias';
  $handler->display->display_options['filters']['alias_1']['relationship'] = 'loc';
  $handler->display->display_options['filters']['alias_1']['value'] = 'chefs';
  $handler->display->display_options['filters']['alias_1']['group'] = 2;
  /* Filter criterion: URL Alias: Alias */
  $handler->display->display_options['filters']['alias']['id'] = 'alias';
  $handler->display->display_options['filters']['alias']['table'] = 'url_alias';
  $handler->display->display_options['filters']['alias']['field'] = 'alias';
  $handler->display->display_options['filters']['alias']['relationship'] = 'loc';
  $handler->display->display_options['filters']['alias']['operator'] = 'starts';
  $handler->display->display_options['filters']['alias']['value'] = 'chefs/';
  $handler->display->display_options['filters']['alias']['group'] = 2;
  /* Filter criterion: URL Alias: Alias */
  $handler->display->display_options['filters']['alias_2']['id'] = 'alias_2';
  $handler->display->display_options['filters']['alias_2']['table'] = 'url_alias';
  $handler->display->display_options['filters']['alias_2']['field'] = 'alias';
  $handler->display->display_options['filters']['alias_2']['relationship'] = 'loc';
  $handler->display->display_options['filters']['alias_2']['value'] = 'contributors';
  $handler->display->display_options['filters']['alias_2']['group'] = 2;
  /* Filter criterion: URL Alias: Alias */
  $handler->display->display_options['filters']['alias_3']['id'] = 'alias_3';
  $handler->display->display_options['filters']['alias_3']['table'] = 'url_alias';
  $handler->display->display_options['filters']['alias_3']['field'] = 'alias';
  $handler->display->display_options['filters']['alias_3']['relationship'] = 'loc';
  $handler->display->display_options['filters']['alias_3']['operator'] = 'starts';
  $handler->display->display_options['filters']['alias_3']['value'] = 'contributors/';
  $handler->display->display_options['filters']['alias_3']['group'] = 2;
  /* Filter criterion: Content: Do Not Syndicate (field_syndication) */
  $handler->display->display_options['filters']['field_syndication_value_2']['id'] = 'field_syndication_value_2';
  $handler->display->display_options['filters']['field_syndication_value_2']['table'] = 'field_data_field_syndication';
  $handler->display->display_options['filters']['field_syndication_value_2']['field'] = 'field_syndication_value';
  $handler->display->display_options['filters']['field_syndication_value_2']['relationship'] = 'id';
  $handler->display->display_options['filters']['field_syndication_value_2']['operator'] = 'not';
  $handler->display->display_options['filters']['field_syndication_value_2']['value'] = array(
    1 => '1',
  );
  $handler->display->display_options['filters']['field_syndication_value_2']['group'] = 1;
  $handler->display->display_options['path'] = 'chefs-contributors-sitemap.xml';
  $handler->display->display_options['xmlsitemap_root_attributes'] = 'xmlns:news|http://www.google.com/schemas/sitemap-news/0.9
  xmlns:image|http://www.google.com/schemas/sitemap-image/1.1
  xmlns:video|http://www.google.com/schemas/sitemap-video/1.1';
  $handler->display->display_options['xmlsitemap_view_mode']['node'] = 'xmlsitemap';

  /* Display: Ingredients */
  $handler = $view->new_display('xmlsitemap', 'Ingredients', 'ingredients');
  $handler->display->display_options['pager']['type'] = 'some';
  $handler->display->display_options['pager']['options']['items_per_page'] = '50000';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['defaults']['filter_groups'] = FALSE;
  $handler->display->display_options['filter_groups']['groups'] = array(
    1 => 'AND',
    2 => 'OR',
  );
  $handler->display->display_options['defaults']['filters'] = FALSE;
  /* Filter criterion: XML Sitemap: Access */
  $handler->display->display_options['filters']['access']['id'] = 'access';
  $handler->display->display_options['filters']['access']['table'] = 'xmlsitemap';
  $handler->display->display_options['filters']['access']['field'] = 'access';
  $handler->display->display_options['filters']['access']['value'] = '1';
  $handler->display->display_options['filters']['access']['group'] = 1;
  /* Filter criterion: XML Sitemap: Status */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'xmlsitemap';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = '1';
  $handler->display->display_options['filters']['status']['group'] = 1;
  /* Filter criterion: URL Alias: Alias */
  $handler->display->display_options['filters']['alias_1']['id'] = 'alias_1';
  $handler->display->display_options['filters']['alias_1']['table'] = 'url_alias';
  $handler->display->display_options['filters']['alias_1']['field'] = 'alias';
  $handler->display->display_options['filters']['alias_1']['relationship'] = 'loc';
  $handler->display->display_options['filters']['alias_1']['value'] = 'meat-poultry';
  $handler->display->display_options['filters']['alias_1']['group'] = 2;
  /* Filter criterion: URL Alias: Alias */
  $handler->display->display_options['filters']['alias']['id'] = 'alias';
  $handler->display->display_options['filters']['alias']['table'] = 'url_alias';
  $handler->display->display_options['filters']['alias']['field'] = 'alias';
  $handler->display->display_options['filters']['alias']['relationship'] = 'loc';
  $handler->display->display_options['filters']['alias']['operator'] = 'starts';
  $handler->display->display_options['filters']['alias']['value'] = 'meat-poultry/';
  $handler->display->display_options['filters']['alias']['group'] = 2;
  /* Filter criterion: URL Alias: Alias */
  $handler->display->display_options['filters']['alias_2']['id'] = 'alias_2';
  $handler->display->display_options['filters']['alias_2']['table'] = 'url_alias';
  $handler->display->display_options['filters']['alias_2']['field'] = 'alias';
  $handler->display->display_options['filters']['alias_2']['relationship'] = 'loc';
  $handler->display->display_options['filters']['alias_2']['value'] = 'seafood';
  $handler->display->display_options['filters']['alias_2']['group'] = 2;
  /* Filter criterion: URL Alias: Alias */
  $handler->display->display_options['filters']['alias_3']['id'] = 'alias_3';
  $handler->display->display_options['filters']['alias_3']['table'] = 'url_alias';
  $handler->display->display_options['filters']['alias_3']['field'] = 'alias';
  $handler->display->display_options['filters']['alias_3']['relationship'] = 'loc';
  $handler->display->display_options['filters']['alias_3']['operator'] = 'starts';
  $handler->display->display_options['filters']['alias_3']['value'] = 'seafood/';
  $handler->display->display_options['filters']['alias_3']['group'] = 2;
  /* Filter criterion: URL Alias: Alias */
  $handler->display->display_options['filters']['alias_4']['id'] = 'alias_4';
  $handler->display->display_options['filters']['alias_4']['table'] = 'url_alias';
  $handler->display->display_options['filters']['alias_4']['field'] = 'alias';
  $handler->display->display_options['filters']['alias_4']['relationship'] = 'loc';
  $handler->display->display_options['filters']['alias_4']['value'] = 'fruits';
  $handler->display->display_options['filters']['alias_4']['group'] = 2;
  /* Filter criterion: URL Alias: Alias */
  $handler->display->display_options['filters']['alias_5']['id'] = 'alias_5';
  $handler->display->display_options['filters']['alias_5']['table'] = 'url_alias';
  $handler->display->display_options['filters']['alias_5']['field'] = 'alias';
  $handler->display->display_options['filters']['alias_5']['relationship'] = 'loc';
  $handler->display->display_options['filters']['alias_5']['operator'] = 'starts';
  $handler->display->display_options['filters']['alias_5']['value'] = 'fruits/';
  $handler->display->display_options['filters']['alias_5']['group'] = 2;
  /* Filter criterion: URL Alias: Alias */
  $handler->display->display_options['filters']['alias_6']['id'] = 'alias_6';
  $handler->display->display_options['filters']['alias_6']['table'] = 'url_alias';
  $handler->display->display_options['filters']['alias_6']['field'] = 'alias';
  $handler->display->display_options['filters']['alias_6']['relationship'] = 'loc';
  $handler->display->display_options['filters']['alias_6']['value'] = 'vegetables';
  $handler->display->display_options['filters']['alias_6']['group'] = 2;
  /* Filter criterion: URL Alias: Alias */
  $handler->display->display_options['filters']['alias_7']['id'] = 'alias_7';
  $handler->display->display_options['filters']['alias_7']['table'] = 'url_alias';
  $handler->display->display_options['filters']['alias_7']['field'] = 'alias';
  $handler->display->display_options['filters']['alias_7']['relationship'] = 'loc';
  $handler->display->display_options['filters']['alias_7']['operator'] = 'starts';
  $handler->display->display_options['filters']['alias_7']['value'] = 'vegetables/';
  $handler->display->display_options['filters']['alias_7']['group'] = 2;
  /* Filter criterion: URL Alias: Alias */
  $handler->display->display_options['filters']['alias_8']['id'] = 'alias_8';
  $handler->display->display_options['filters']['alias_8']['table'] = 'url_alias';
  $handler->display->display_options['filters']['alias_8']['field'] = 'alias';
  $handler->display->display_options['filters']['alias_8']['relationship'] = 'loc';
  $handler->display->display_options['filters']['alias_8']['value'] = 'beans-legumes';
  $handler->display->display_options['filters']['alias_8']['group'] = 2;
  /* Filter criterion: URL Alias: Alias */
  $handler->display->display_options['filters']['alias_9']['id'] = 'alias_9';
  $handler->display->display_options['filters']['alias_9']['table'] = 'url_alias';
  $handler->display->display_options['filters']['alias_9']['field'] = 'alias';
  $handler->display->display_options['filters']['alias_9']['relationship'] = 'loc';
  $handler->display->display_options['filters']['alias_9']['operator'] = 'starts';
  $handler->display->display_options['filters']['alias_9']['value'] = 'beans-legumes/';
  $handler->display->display_options['filters']['alias_9']['group'] = 2;
  /* Filter criterion: URL Alias: Alias */
  $handler->display->display_options['filters']['alias_10']['id'] = 'alias_10';
  $handler->display->display_options['filters']['alias_10']['table'] = 'url_alias';
  $handler->display->display_options['filters']['alias_10']['field'] = 'alias';
  $handler->display->display_options['filters']['alias_10']['relationship'] = 'loc';
  $handler->display->display_options['filters']['alias_10']['value'] = 'grains';
  $handler->display->display_options['filters']['alias_10']['group'] = 2;
  /* Filter criterion: URL Alias: Alias */
  $handler->display->display_options['filters']['alias_11']['id'] = 'alias_11';
  $handler->display->display_options['filters']['alias_11']['table'] = 'url_alias';
  $handler->display->display_options['filters']['alias_11']['field'] = 'alias';
  $handler->display->display_options['filters']['alias_11']['relationship'] = 'loc';
  $handler->display->display_options['filters']['alias_11']['operator'] = 'starts';
  $handler->display->display_options['filters']['alias_11']['value'] = 'grains/';
  $handler->display->display_options['filters']['alias_11']['group'] = 2;
  /* Filter criterion: URL Alias: Alias */
  $handler->display->display_options['filters']['alias_12']['id'] = 'alias_12';
  $handler->display->display_options['filters']['alias_12']['table'] = 'url_alias';
  $handler->display->display_options['filters']['alias_12']['field'] = 'alias';
  $handler->display->display_options['filters']['alias_12']['relationship'] = 'loc';
  $handler->display->display_options['filters']['alias_12']['value'] = 'nuts-seeds';
  $handler->display->display_options['filters']['alias_12']['group'] = 2;
  /* Filter criterion: URL Alias: Alias */
  $handler->display->display_options['filters']['alias_13']['id'] = 'alias_13';
  $handler->display->display_options['filters']['alias_13']['table'] = 'url_alias';
  $handler->display->display_options['filters']['alias_13']['field'] = 'alias';
  $handler->display->display_options['filters']['alias_13']['relationship'] = 'loc';
  $handler->display->display_options['filters']['alias_13']['operator'] = 'starts';
  $handler->display->display_options['filters']['alias_13']['value'] = 'nuts-seeds/';
  $handler->display->display_options['filters']['alias_13']['group'] = 2;
  /* Filter criterion: URL Alias: Alias */
  $handler->display->display_options['filters']['alias_14']['id'] = 'alias_14';
  $handler->display->display_options['filters']['alias_14']['table'] = 'url_alias';
  $handler->display->display_options['filters']['alias_14']['field'] = 'alias';
  $handler->display->display_options['filters']['alias_14']['relationship'] = 'loc';
  $handler->display->display_options['filters']['alias_14']['value'] = 'seasonings';
  $handler->display->display_options['filters']['alias_14']['group'] = 2;
  /* Filter criterion: URL Alias: Alias */
  $handler->display->display_options['filters']['alias_15']['id'] = 'alias_15';
  $handler->display->display_options['filters']['alias_15']['table'] = 'url_alias';
  $handler->display->display_options['filters']['alias_15']['field'] = 'alias';
  $handler->display->display_options['filters']['alias_15']['relationship'] = 'loc';
  $handler->display->display_options['filters']['alias_15']['operator'] = 'starts';
  $handler->display->display_options['filters']['alias_15']['value'] = 'seasonings/';
  $handler->display->display_options['filters']['alias_15']['group'] = 2;
  /* Filter criterion: Content: Do Not Syndicate (field_syndication) */
  $handler->display->display_options['filters']['field_syndication_value_2']['id'] = 'field_syndication_value_2';
  $handler->display->display_options['filters']['field_syndication_value_2']['table'] = 'field_data_field_syndication';
  $handler->display->display_options['filters']['field_syndication_value_2']['field'] = 'field_syndication_value';
  $handler->display->display_options['filters']['field_syndication_value_2']['relationship'] = 'id';
  $handler->display->display_options['filters']['field_syndication_value_2']['operator'] = 'not';
  $handler->display->display_options['filters']['field_syndication_value_2']['value'] = array(
    1 => '1',
  );
  $handler->display->display_options['filters']['field_syndication_value_2']['group'] = 1;
  $handler->display->display_options['path'] = 'ingredients-sitemap.xml';
  $handler->display->display_options['xmlsitemap_root_attributes'] = 'xmlns:news|http://www.google.com/schemas/sitemap-news/0.9
  xmlns:image|http://www.google.com/schemas/sitemap-image/1.1
  xmlns:video|http://www.google.com/schemas/sitemap-video/1.1';
  $handler->display->display_options['xmlsitemap_view_mode']['node'] = 'xmlsitemap';

  /* Display: Courses */
  $handler = $view->new_display('xmlsitemap', 'Courses', 'courses');
  $handler->display->display_options['pager']['type'] = 'some';
  $handler->display->display_options['pager']['options']['items_per_page'] = '50000';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['defaults']['filter_groups'] = FALSE;
  $handler->display->display_options['filter_groups']['groups'] = array(
    1 => 'AND',
    2 => 'OR',
  );
  $handler->display->display_options['defaults']['filters'] = FALSE;
  /* Filter criterion: XML Sitemap: Access */
  $handler->display->display_options['filters']['access']['id'] = 'access';
  $handler->display->display_options['filters']['access']['table'] = 'xmlsitemap';
  $handler->display->display_options['filters']['access']['field'] = 'access';
  $handler->display->display_options['filters']['access']['value'] = '1';
  $handler->display->display_options['filters']['access']['group'] = 1;
  /* Filter criterion: XML Sitemap: Status */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'xmlsitemap';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = '1';
  $handler->display->display_options['filters']['status']['group'] = 1;
  /* Filter criterion: URL Alias: Alias */
  $handler->display->display_options['filters']['alias_1']['id'] = 'alias_1';
  $handler->display->display_options['filters']['alias_1']['table'] = 'url_alias';
  $handler->display->display_options['filters']['alias_1']['field'] = 'alias';
  $handler->display->display_options['filters']['alias_1']['relationship'] = 'loc';
  $handler->display->display_options['filters']['alias_1']['value'] = 'breakfast-brunch';
  $handler->display->display_options['filters']['alias_1']['group'] = 2;
  /* Filter criterion: URL Alias: Alias */
  $handler->display->display_options['filters']['alias']['id'] = 'alias';
  $handler->display->display_options['filters']['alias']['table'] = 'url_alias';
  $handler->display->display_options['filters']['alias']['field'] = 'alias';
  $handler->display->display_options['filters']['alias']['relationship'] = 'loc';
  $handler->display->display_options['filters']['alias']['operator'] = 'starts';
  $handler->display->display_options['filters']['alias']['value'] = 'breakfast-brunch/';
  $handler->display->display_options['filters']['alias']['group'] = 2;
  /* Filter criterion: URL Alias: Alias */
  $handler->display->display_options['filters']['alias_2']['id'] = 'alias_2';
  $handler->display->display_options['filters']['alias_2']['table'] = 'url_alias';
  $handler->display->display_options['filters']['alias_2']['field'] = 'alias';
  $handler->display->display_options['filters']['alias_2']['relationship'] = 'loc';
  $handler->display->display_options['filters']['alias_2']['value'] = 'snacks';
  $handler->display->display_options['filters']['alias_2']['group'] = 2;
  /* Filter criterion: URL Alias: Alias */
  $handler->display->display_options['filters']['alias_3']['id'] = 'alias_3';
  $handler->display->display_options['filters']['alias_3']['table'] = 'url_alias';
  $handler->display->display_options['filters']['alias_3']['field'] = 'alias';
  $handler->display->display_options['filters']['alias_3']['relationship'] = 'loc';
  $handler->display->display_options['filters']['alias_3']['operator'] = 'starts';
  $handler->display->display_options['filters']['alias_3']['value'] = 'snacks/';
  $handler->display->display_options['filters']['alias_3']['group'] = 2;
  /* Filter criterion: URL Alias: Alias */
  $handler->display->display_options['filters']['alias_4']['id'] = 'alias_4';
  $handler->display->display_options['filters']['alias_4']['table'] = 'url_alias';
  $handler->display->display_options['filters']['alias_4']['field'] = 'alias';
  $handler->display->display_options['filters']['alias_4']['relationship'] = 'loc';
  $handler->display->display_options['filters']['alias_4']['value'] = 'appetizers';
  $handler->display->display_options['filters']['alias_4']['group'] = 2;
  /* Filter criterion: URL Alias: Alias */
  $handler->display->display_options['filters']['alias_5']['id'] = 'alias_5';
  $handler->display->display_options['filters']['alias_5']['table'] = 'url_alias';
  $handler->display->display_options['filters']['alias_5']['field'] = 'alias';
  $handler->display->display_options['filters']['alias_5']['relationship'] = 'loc';
  $handler->display->display_options['filters']['alias_5']['operator'] = 'starts';
  $handler->display->display_options['filters']['alias_5']['value'] = 'appetizers/';
  $handler->display->display_options['filters']['alias_5']['group'] = 2;
  /* Filter criterion: URL Alias: Alias */
  $handler->display->display_options['filters']['alias_6']['id'] = 'alias_6';
  $handler->display->display_options['filters']['alias_6']['table'] = 'url_alias';
  $handler->display->display_options['filters']['alias_6']['field'] = 'alias';
  $handler->display->display_options['filters']['alias_6']['relationship'] = 'loc';
  $handler->display->display_options['filters']['alias_6']['value'] = 'desserts';
  $handler->display->display_options['filters']['alias_6']['group'] = 2;
  /* Filter criterion: URL Alias: Alias */
  $handler->display->display_options['filters']['alias_7']['id'] = 'alias_7';
  $handler->display->display_options['filters']['alias_7']['table'] = 'url_alias';
  $handler->display->display_options['filters']['alias_7']['field'] = 'alias';
  $handler->display->display_options['filters']['alias_7']['relationship'] = 'loc';
  $handler->display->display_options['filters']['alias_7']['operator'] = 'starts';
  $handler->display->display_options['filters']['alias_7']['value'] = 'desserts/';
  $handler->display->display_options['filters']['alias_7']['group'] = 2;
  /* Filter criterion: Content: Do Not Syndicate (field_syndication) */
  $handler->display->display_options['filters']['field_syndication_value_2']['id'] = 'field_syndication_value_2';
  $handler->display->display_options['filters']['field_syndication_value_2']['table'] = 'field_data_field_syndication';
  $handler->display->display_options['filters']['field_syndication_value_2']['field'] = 'field_syndication_value';
  $handler->display->display_options['filters']['field_syndication_value_2']['relationship'] = 'id';
  $handler->display->display_options['filters']['field_syndication_value_2']['operator'] = 'not';
  $handler->display->display_options['filters']['field_syndication_value_2']['value'] = array(
    1 => '1',
  );
  $handler->display->display_options['filters']['field_syndication_value_2']['group'] = 1;
  $handler->display->display_options['path'] = 'courses-sitemap.xml';
  $handler->display->display_options['xmlsitemap_root_attributes'] = 'xmlns:news|http://www.google.com/schemas/sitemap-news/0.9
  xmlns:image|http://www.google.com/schemas/sitemap-image/1.1
  xmlns:video|http://www.google.com/schemas/sitemap-video/1.1';
  $handler->display->display_options['xmlsitemap_view_mode']['node'] = 'xmlsitemap';

  /* Display: Dish Types */
  $handler = $view->new_display('xmlsitemap', 'Dish Types', 'dish_type');
  $handler->display->display_options['pager']['type'] = 'some';
  $handler->display->display_options['pager']['options']['items_per_page'] = '50000';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['defaults']['filter_groups'] = FALSE;
  $handler->display->display_options['filter_groups']['groups'] = array(
    1 => 'AND',
    2 => 'OR',
  );
  $handler->display->display_options['defaults']['filters'] = FALSE;
  /* Filter criterion: XML Sitemap: Access */
  $handler->display->display_options['filters']['access']['id'] = 'access';
  $handler->display->display_options['filters']['access']['table'] = 'xmlsitemap';
  $handler->display->display_options['filters']['access']['field'] = 'access';
  $handler->display->display_options['filters']['access']['value'] = '1';
  $handler->display->display_options['filters']['access']['group'] = 1;
  /* Filter criterion: XML Sitemap: Status */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'xmlsitemap';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = '1';
  $handler->display->display_options['filters']['status']['group'] = 1;
  /* Filter criterion: URL Alias: Alias */
  $handler->display->display_options['filters']['alias_1']['id'] = 'alias_1';
  $handler->display->display_options['filters']['alias_1']['table'] = 'url_alias';
  $handler->display->display_options['filters']['alias_1']['field'] = 'alias';
  $handler->display->display_options['filters']['alias_1']['relationship'] = 'loc';
  $handler->display->display_options['filters']['alias_1']['value'] = 'bread-dough';
  $handler->display->display_options['filters']['alias_1']['group'] = 2;
  /* Filter criterion: URL Alias: Alias */
  $handler->display->display_options['filters']['alias']['id'] = 'alias';
  $handler->display->display_options['filters']['alias']['table'] = 'url_alias';
  $handler->display->display_options['filters']['alias']['field'] = 'alias';
  $handler->display->display_options['filters']['alias']['relationship'] = 'loc';
  $handler->display->display_options['filters']['alias']['operator'] = 'starts';
  $handler->display->display_options['filters']['alias']['value'] = 'bread-dough/';
  $handler->display->display_options['filters']['alias']['group'] = 2;
  /* Filter criterion: URL Alias: Alias */
  $handler->display->display_options['filters']['alias_2']['id'] = 'alias_2';
  $handler->display->display_options['filters']['alias_2']['table'] = 'url_alias';
  $handler->display->display_options['filters']['alias_2']['field'] = 'alias';
  $handler->display->display_options['filters']['alias_2']['relationship'] = 'loc';
  $handler->display->display_options['filters']['alias_2']['value'] = 'salads';
  $handler->display->display_options['filters']['alias_2']['group'] = 2;
  /* Filter criterion: URL Alias: Alias */
  $handler->display->display_options['filters']['alias_3']['id'] = 'alias_3';
  $handler->display->display_options['filters']['alias_3']['table'] = 'url_alias';
  $handler->display->display_options['filters']['alias_3']['field'] = 'alias';
  $handler->display->display_options['filters']['alias_3']['relationship'] = 'loc';
  $handler->display->display_options['filters']['alias_3']['operator'] = 'starts';
  $handler->display->display_options['filters']['alias_3']['value'] = 'salads/';
  $handler->display->display_options['filters']['alias_3']['group'] = 2;
  /* Filter criterion: URL Alias: Alias */
  $handler->display->display_options['filters']['alias_4']['id'] = 'alias_4';
  $handler->display->display_options['filters']['alias_4']['table'] = 'url_alias';
  $handler->display->display_options['filters']['alias_4']['field'] = 'alias';
  $handler->display->display_options['filters']['alias_4']['relationship'] = 'loc';
  $handler->display->display_options['filters']['alias_4']['value'] = 'comfort-food';
  $handler->display->display_options['filters']['alias_4']['group'] = 2;
  /* Filter criterion: URL Alias: Alias */
  $handler->display->display_options['filters']['alias_5']['id'] = 'alias_5';
  $handler->display->display_options['filters']['alias_5']['table'] = 'url_alias';
  $handler->display->display_options['filters']['alias_5']['field'] = 'alias';
  $handler->display->display_options['filters']['alias_5']['relationship'] = 'loc';
  $handler->display->display_options['filters']['alias_5']['operator'] = 'starts';
  $handler->display->display_options['filters']['alias_5']['value'] = 'comfort-food/';
  $handler->display->display_options['filters']['alias_5']['group'] = 2;
  /* Filter criterion: URL Alias: Alias */
  $handler->display->display_options['filters']['alias_6']['id'] = 'alias_6';
  $handler->display->display_options['filters']['alias_6']['table'] = 'url_alias';
  $handler->display->display_options['filters']['alias_6']['field'] = 'alias';
  $handler->display->display_options['filters']['alias_6']['relationship'] = 'loc';
  $handler->display->display_options['filters']['alias_6']['value'] = 'soup';
  $handler->display->display_options['filters']['alias_6']['group'] = 2;
  /* Filter criterion: URL Alias: Alias */
  $handler->display->display_options['filters']['alias_7']['id'] = 'alias_7';
  $handler->display->display_options['filters']['alias_7']['table'] = 'url_alias';
  $handler->display->display_options['filters']['alias_7']['field'] = 'alias';
  $handler->display->display_options['filters']['alias_7']['relationship'] = 'loc';
  $handler->display->display_options['filters']['alias_7']['operator'] = 'starts';
  $handler->display->display_options['filters']['alias_7']['value'] = 'soup/';
  $handler->display->display_options['filters']['alias_7']['group'] = 2;
  /* Filter criterion: URL Alias: Alias */
  $handler->display->display_options['filters']['alias_8']['id'] = 'alias_8';
  $handler->display->display_options['filters']['alias_8']['table'] = 'url_alias';
  $handler->display->display_options['filters']['alias_8']['field'] = 'alias';
  $handler->display->display_options['filters']['alias_8']['relationship'] = 'loc';
  $handler->display->display_options['filters']['alias_8']['value'] = 'sandwiches-wraps';
  $handler->display->display_options['filters']['alias_8']['group'] = 2;
  /* Filter criterion: URL Alias: Alias */
  $handler->display->display_options['filters']['alias_9']['id'] = 'alias_9';
  $handler->display->display_options['filters']['alias_9']['table'] = 'url_alias';
  $handler->display->display_options['filters']['alias_9']['field'] = 'alias';
  $handler->display->display_options['filters']['alias_9']['relationship'] = 'loc';
  $handler->display->display_options['filters']['alias_9']['operator'] = 'starts';
  $handler->display->display_options['filters']['alias_9']['value'] = 'sandwiches-wraps/';
  $handler->display->display_options['filters']['alias_9']['group'] = 2;
  /* Filter criterion: URL Alias: Alias */
  $handler->display->display_options['filters']['alias_10']['id'] = 'alias_10';
  $handler->display->display_options['filters']['alias_10']['table'] = 'url_alias';
  $handler->display->display_options['filters']['alias_10']['field'] = 'alias';
  $handler->display->display_options['filters']['alias_10']['relationship'] = 'loc';
  $handler->display->display_options['filters']['alias_10']['value'] = 'pasta-noodles';
  $handler->display->display_options['filters']['alias_10']['group'] = 2;
  /* Filter criterion: URL Alias: Alias */
  $handler->display->display_options['filters']['alias_11']['id'] = 'alias_11';
  $handler->display->display_options['filters']['alias_11']['table'] = 'url_alias';
  $handler->display->display_options['filters']['alias_11']['field'] = 'alias';
  $handler->display->display_options['filters']['alias_11']['relationship'] = 'loc';
  $handler->display->display_options['filters']['alias_11']['operator'] = 'starts';
  $handler->display->display_options['filters']['alias_11']['value'] = 'pasta-noodles/';
  $handler->display->display_options['filters']['alias_11']['group'] = 2;
  /* Filter criterion: URL Alias: Alias */
  $handler->display->display_options['filters']['alias_12']['id'] = 'alias_12';
  $handler->display->display_options['filters']['alias_12']['table'] = 'url_alias';
  $handler->display->display_options['filters']['alias_12']['field'] = 'alias';
  $handler->display->display_options['filters']['alias_12']['relationship'] = 'loc';
  $handler->display->display_options['filters']['alias_12']['value'] = 'side-dishes';
  $handler->display->display_options['filters']['alias_12']['group'] = 2;
  /* Filter criterion: URL Alias: Alias */
  $handler->display->display_options['filters']['alias_13']['id'] = 'alias_13';
  $handler->display->display_options['filters']['alias_13']['table'] = 'url_alias';
  $handler->display->display_options['filters']['alias_13']['field'] = 'alias';
  $handler->display->display_options['filters']['alias_13']['relationship'] = 'loc';
  $handler->display->display_options['filters']['alias_13']['operator'] = 'starts';
  $handler->display->display_options['filters']['alias_13']['value'] = 'side-dishes/';
  $handler->display->display_options['filters']['alias_13']['group'] = 2;
  /* Filter criterion: URL Alias: Alias */
  $handler->display->display_options['filters']['alias_14']['id'] = 'alias_14';
  $handler->display->display_options['filters']['alias_14']['table'] = 'url_alias';
  $handler->display->display_options['filters']['alias_14']['field'] = 'alias';
  $handler->display->display_options['filters']['alias_14']['relationship'] = 'loc';
  $handler->display->display_options['filters']['alias_14']['value'] = 'condiments';
  $handler->display->display_options['filters']['alias_14']['group'] = 2;
  /* Filter criterion: URL Alias: Alias */
  $handler->display->display_options['filters']['alias_15']['id'] = 'alias_15';
  $handler->display->display_options['filters']['alias_15']['table'] = 'url_alias';
  $handler->display->display_options['filters']['alias_15']['field'] = 'alias';
  $handler->display->display_options['filters']['alias_15']['relationship'] = 'loc';
  $handler->display->display_options['filters']['alias_15']['operator'] = 'starts';
  $handler->display->display_options['filters']['alias_15']['value'] = 'condiments/';
  $handler->display->display_options['filters']['alias_15']['group'] = 2;
  /* Filter criterion: Content: Do Not Syndicate (field_syndication) */
  $handler->display->display_options['filters']['field_syndication_value_2']['id'] = 'field_syndication_value_2';
  $handler->display->display_options['filters']['field_syndication_value_2']['table'] = 'field_data_field_syndication';
  $handler->display->display_options['filters']['field_syndication_value_2']['field'] = 'field_syndication_value';
  $handler->display->display_options['filters']['field_syndication_value_2']['relationship'] = 'id';
  $handler->display->display_options['filters']['field_syndication_value_2']['operator'] = 'not';
  $handler->display->display_options['filters']['field_syndication_value_2']['value'] = array(
    1 => '1',
  );
  $handler->display->display_options['filters']['field_syndication_value_2']['group'] = 1;
  $handler->display->display_options['path'] = 'dish-type-sitemap.xml';
  $handler->display->display_options['xmlsitemap_root_attributes'] = 'xmlns:news|http://www.google.com/schemas/sitemap-news/0.9
  xmlns:image|http://www.google.com/schemas/sitemap-image/1.1
  xmlns:video|http://www.google.com/schemas/sitemap-video/1.1';
  $handler->display->display_options['xmlsitemap_view_mode']['node'] = 'xmlsitemap';

  /* Display: Health */
  $handler = $view->new_display('xmlsitemap', 'Health', 'health');
  $handler->display->display_options['pager']['type'] = 'some';
  $handler->display->display_options['pager']['options']['items_per_page'] = '50000';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['defaults']['filter_groups'] = FALSE;
  $handler->display->display_options['filter_groups']['groups'] = array(
    1 => 'AND',
    2 => 'OR',
  );
  $handler->display->display_options['defaults']['filters'] = FALSE;
  /* Filter criterion: XML Sitemap: Access */
  $handler->display->display_options['filters']['access']['id'] = 'access';
  $handler->display->display_options['filters']['access']['table'] = 'xmlsitemap';
  $handler->display->display_options['filters']['access']['field'] = 'access';
  $handler->display->display_options['filters']['access']['value'] = '1';
  $handler->display->display_options['filters']['access']['group'] = 1;
  /* Filter criterion: XML Sitemap: Status */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'xmlsitemap';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = '1';
  $handler->display->display_options['filters']['status']['group'] = 1;
  /* Filter criterion: URL Alias: Alias */
  $handler->display->display_options['filters']['alias_1']['id'] = 'alias_1';
  $handler->display->display_options['filters']['alias_1']['table'] = 'url_alias';
  $handler->display->display_options['filters']['alias_1']['field'] = 'alias';
  $handler->display->display_options['filters']['alias_1']['relationship'] = 'loc';
  $handler->display->display_options['filters']['alias_1']['value'] = 'special-diets';
  $handler->display->display_options['filters']['alias_1']['group'] = 2;
  /* Filter criterion: URL Alias: Alias */
  $handler->display->display_options['filters']['alias']['id'] = 'alias';
  $handler->display->display_options['filters']['alias']['table'] = 'url_alias';
  $handler->display->display_options['filters']['alias']['field'] = 'alias';
  $handler->display->display_options['filters']['alias']['relationship'] = 'loc';
  $handler->display->display_options['filters']['alias']['operator'] = 'starts';
  $handler->display->display_options['filters']['alias']['value'] = 'special-diets/';
  $handler->display->display_options['filters']['alias']['group'] = 2;
  /* Filter criterion: URL Alias: Alias */
  $handler->display->display_options['filters']['alias_2']['id'] = 'alias_2';
  $handler->display->display_options['filters']['alias_2']['table'] = 'url_alias';
  $handler->display->display_options['filters']['alias_2']['field'] = 'alias';
  $handler->display->display_options['filters']['alias_2']['relationship'] = 'loc';
  $handler->display->display_options['filters']['alias_2']['value'] = 'health';
  $handler->display->display_options['filters']['alias_2']['group'] = 2;
  /* Filter criterion: URL Alias: Alias */
  $handler->display->display_options['filters']['alias_3']['id'] = 'alias_3';
  $handler->display->display_options['filters']['alias_3']['table'] = 'url_alias';
  $handler->display->display_options['filters']['alias_3']['field'] = 'alias';
  $handler->display->display_options['filters']['alias_3']['relationship'] = 'loc';
  $handler->display->display_options['filters']['alias_3']['operator'] = 'starts';
  $handler->display->display_options['filters']['alias_3']['value'] = 'health/';
  $handler->display->display_options['filters']['alias_3']['group'] = 2;
  /* Filter criterion: Content: Do Not Syndicate (field_syndication) */
  $handler->display->display_options['filters']['field_syndication_value_2']['id'] = 'field_syndication_value_2';
  $handler->display->display_options['filters']['field_syndication_value_2']['table'] = 'field_data_field_syndication';
  $handler->display->display_options['filters']['field_syndication_value_2']['field'] = 'field_syndication_value';
  $handler->display->display_options['filters']['field_syndication_value_2']['relationship'] = 'id';
  $handler->display->display_options['filters']['field_syndication_value_2']['operator'] = 'not';
  $handler->display->display_options['filters']['field_syndication_value_2']['value'] = array(
    1 => '1',
  );
  $handler->display->display_options['filters']['field_syndication_value_2']['group'] = 1;
  $handler->display->display_options['path'] = 'health-sitemap.xml';
  $handler->display->display_options['xmlsitemap_root_attributes'] = 'xmlns:news|http://www.google.com/schemas/sitemap-news/0.9
  xmlns:image|http://www.google.com/schemas/sitemap-image/1.1
  xmlns:video|http://www.google.com/schemas/sitemap-video/1.1';
  $handler->display->display_options['xmlsitemap_view_mode']['node'] = 'xmlsitemap';

  /* Display: Kitchen & Home */
  $handler = $view->new_display('xmlsitemap', 'Kitchen & Home', 'kitchen_home');
  $handler->display->display_options['pager']['type'] = 'some';
  $handler->display->display_options['pager']['options']['items_per_page'] = '50000';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['defaults']['filter_groups'] = FALSE;
  $handler->display->display_options['filter_groups']['groups'] = array(
    1 => 'AND',
    2 => 'OR',
  );
  $handler->display->display_options['defaults']['filters'] = FALSE;
  /* Filter criterion: XML Sitemap: Access */
  $handler->display->display_options['filters']['access']['id'] = 'access';
  $handler->display->display_options['filters']['access']['table'] = 'xmlsitemap';
  $handler->display->display_options['filters']['access']['field'] = 'access';
  $handler->display->display_options['filters']['access']['value'] = '1';
  $handler->display->display_options['filters']['access']['group'] = 1;
  /* Filter criterion: XML Sitemap: Status */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'xmlsitemap';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = '1';
  $handler->display->display_options['filters']['status']['group'] = 1;
  /* Filter criterion: URL Alias: Alias */
  $handler->display->display_options['filters']['alias_1']['id'] = 'alias_1';
  $handler->display->display_options['filters']['alias_1']['table'] = 'url_alias';
  $handler->display->display_options['filters']['alias_1']['field'] = 'alias';
  $handler->display->display_options['filters']['alias_1']['relationship'] = 'loc';
  $handler->display->display_options['filters']['alias_1']['value'] = 'how-to';
  $handler->display->display_options['filters']['alias_1']['group'] = 2;
  /* Filter criterion: URL Alias: Alias */
  $handler->display->display_options['filters']['alias']['id'] = 'alias';
  $handler->display->display_options['filters']['alias']['table'] = 'url_alias';
  $handler->display->display_options['filters']['alias']['field'] = 'alias';
  $handler->display->display_options['filters']['alias']['relationship'] = 'loc';
  $handler->display->display_options['filters']['alias']['operator'] = 'starts';
  $handler->display->display_options['filters']['alias']['value'] = 'how-to/';
  $handler->display->display_options['filters']['alias']['group'] = 2;
  /* Filter criterion: URL Alias: Alias */
  $handler->display->display_options['filters']['alias_6']['id'] = 'alias_6';
  $handler->display->display_options['filters']['alias_6']['table'] = 'url_alias';
  $handler->display->display_options['filters']['alias_6']['field'] = 'alias';
  $handler->display->display_options['filters']['alias_6']['relationship'] = 'loc';
  $handler->display->display_options['filters']['alias_6']['value'] = 'how';
  $handler->display->display_options['filters']['alias_6']['group'] = 2;
  /* Filter criterion: URL Alias: Alias */
  $handler->display->display_options['filters']['alias_7']['id'] = 'alias_7';
  $handler->display->display_options['filters']['alias_7']['table'] = 'url_alias';
  $handler->display->display_options['filters']['alias_7']['field'] = 'alias';
  $handler->display->display_options['filters']['alias_7']['relationship'] = 'loc';
  $handler->display->display_options['filters']['alias_7']['operator'] = 'starts';
  $handler->display->display_options['filters']['alias_7']['value'] = 'how/';
  $handler->display->display_options['filters']['alias_7']['group'] = 2;
  /* Filter criterion: URL Alias: Alias */
  $handler->display->display_options['filters']['alias_2']['id'] = 'alias_2';
  $handler->display->display_options['filters']['alias_2']['table'] = 'url_alias';
  $handler->display->display_options['filters']['alias_2']['field'] = 'alias';
  $handler->display->display_options['filters']['alias_2']['relationship'] = 'loc';
  $handler->display->display_options['filters']['alias_2']['value'] = 'cooking-techniques';
  $handler->display->display_options['filters']['alias_2']['group'] = 2;
  /* Filter criterion: URL Alias: Alias */
  $handler->display->display_options['filters']['alias_3']['id'] = 'alias_3';
  $handler->display->display_options['filters']['alias_3']['table'] = 'url_alias';
  $handler->display->display_options['filters']['alias_3']['field'] = 'alias';
  $handler->display->display_options['filters']['alias_3']['relationship'] = 'loc';
  $handler->display->display_options['filters']['alias_3']['operator'] = 'starts';
  $handler->display->display_options['filters']['alias_3']['value'] = 'cooking-techniques/';
  $handler->display->display_options['filters']['alias_3']['group'] = 2;
  /* Filter criterion: URL Alias: Alias */
  $handler->display->display_options['filters']['alias_4']['id'] = 'alias_4';
  $handler->display->display_options['filters']['alias_4']['table'] = 'url_alias';
  $handler->display->display_options['filters']['alias_4']['field'] = 'alias';
  $handler->display->display_options['filters']['alias_4']['relationship'] = 'loc';
  $handler->display->display_options['filters']['alias_4']['value'] = 'lifestyle';
  $handler->display->display_options['filters']['alias_4']['group'] = 2;
  /* Filter criterion: URL Alias: Alias */
  $handler->display->display_options['filters']['alias_5']['id'] = 'alias_5';
  $handler->display->display_options['filters']['alias_5']['table'] = 'url_alias';
  $handler->display->display_options['filters']['alias_5']['field'] = 'alias';
  $handler->display->display_options['filters']['alias_5']['relationship'] = 'loc';
  $handler->display->display_options['filters']['alias_5']['operator'] = 'starts';
  $handler->display->display_options['filters']['alias_5']['value'] = 'lifestyle/';
  $handler->display->display_options['filters']['alias_5']['group'] = 2;
  /* Filter criterion: Content: Do Not Syndicate (field_syndication) */
  $handler->display->display_options['filters']['field_syndication_value_2']['id'] = 'field_syndication_value_2';
  $handler->display->display_options['filters']['field_syndication_value_2']['table'] = 'field_data_field_syndication';
  $handler->display->display_options['filters']['field_syndication_value_2']['field'] = 'field_syndication_value';
  $handler->display->display_options['filters']['field_syndication_value_2']['relationship'] = 'id';
  $handler->display->display_options['filters']['field_syndication_value_2']['operator'] = 'not';
  $handler->display->display_options['filters']['field_syndication_value_2']['value'] = array(
    1 => '1',
  );
  $handler->display->display_options['filters']['field_syndication_value_2']['group'] = 1;
  $handler->display->display_options['path'] = 'kitchen-home-sitemap.xml';
  $handler->display->display_options['xmlsitemap_root_attributes'] = 'xmlns:news|http://www.google.com/schemas/sitemap-news/0.9
  xmlns:image|http://www.google.com/schemas/sitemap-image/1.1
  xmlns:video|http://www.google.com/schemas/sitemap-video/1.1';
  $handler->display->display_options['xmlsitemap_view_mode']['node'] = 'xmlsitemap';

  /* Display: Travel */
  $handler = $view->new_display('xmlsitemap', 'Travel', 'travel');
  $handler->display->display_options['pager']['type'] = 'some';
  $handler->display->display_options['pager']['options']['items_per_page'] = '50000';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['defaults']['filter_groups'] = FALSE;
  $handler->display->display_options['filter_groups']['groups'] = array(
    1 => 'AND',
    2 => 'OR',
  );
  $handler->display->display_options['defaults']['filters'] = FALSE;
  /* Filter criterion: XML Sitemap: Access */
  $handler->display->display_options['filters']['access']['id'] = 'access';
  $handler->display->display_options['filters']['access']['table'] = 'xmlsitemap';
  $handler->display->display_options['filters']['access']['field'] = 'access';
  $handler->display->display_options['filters']['access']['value'] = '1';
  $handler->display->display_options['filters']['access']['group'] = 1;
  /* Filter criterion: XML Sitemap: Status */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'xmlsitemap';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = '1';
  $handler->display->display_options['filters']['status']['group'] = 1;
  /* Filter criterion: URL Alias: Alias */
  $handler->display->display_options['filters']['alias_2']['id'] = 'alias_2';
  $handler->display->display_options['filters']['alias_2']['table'] = 'url_alias';
  $handler->display->display_options['filters']['alias_2']['field'] = 'alias';
  $handler->display->display_options['filters']['alias_2']['relationship'] = 'loc';
  $handler->display->display_options['filters']['alias_2']['value'] = 'travel';
  $handler->display->display_options['filters']['alias_2']['group'] = 2;
  /* Filter criterion: URL Alias: Alias */
  $handler->display->display_options['filters']['alias_3']['id'] = 'alias_3';
  $handler->display->display_options['filters']['alias_3']['table'] = 'url_alias';
  $handler->display->display_options['filters']['alias_3']['field'] = 'alias';
  $handler->display->display_options['filters']['alias_3']['relationship'] = 'loc';
  $handler->display->display_options['filters']['alias_3']['operator'] = 'starts';
  $handler->display->display_options['filters']['alias_3']['value'] = 'travel/';
  $handler->display->display_options['filters']['alias_3']['group'] = 2;
  /* Filter criterion: Content: Do Not Syndicate (field_syndication) */
  $handler->display->display_options['filters']['field_syndication_value_2']['id'] = 'field_syndication_value_2';
  $handler->display->display_options['filters']['field_syndication_value_2']['table'] = 'field_data_field_syndication';
  $handler->display->display_options['filters']['field_syndication_value_2']['field'] = 'field_syndication_value';
  $handler->display->display_options['filters']['field_syndication_value_2']['relationship'] = 'id';
  $handler->display->display_options['filters']['field_syndication_value_2']['operator'] = 'not';
  $handler->display->display_options['filters']['field_syndication_value_2']['value'] = array(
    1 => '1',
  );
  $handler->display->display_options['filters']['field_syndication_value_2']['group'] = 1;
  $handler->display->display_options['path'] = 'travel-sitemap.xml';
  $handler->display->display_options['xmlsitemap_root_attributes'] = 'xmlns:news|http://www.google.com/schemas/sitemap-news/0.9
  xmlns:image|http://www.google.com/schemas/sitemap-image/1.1
  xmlns:video|http://www.google.com/schemas/sitemap-video/1.1';
  $handler->display->display_options['xmlsitemap_view_mode']['node'] = 'xmlsitemap';

  /* Display: News */
  $handler = $view->new_display('xmlsitemap', 'News', 'news');
  $handler->display->display_options['pager']['type'] = 'some';
  $handler->display->display_options['pager']['options']['items_per_page'] = '1000';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: XML Sitemap: Id */
  $handler->display->display_options['fields']['id']['id'] = 'id';
  $handler->display->display_options['fields']['id']['table'] = 'xmlsitemap';
  $handler->display->display_options['fields']['id']['field'] = 'id';
  /* Field: XML Sitemap: Type */
  $handler->display->display_options['fields']['type']['id'] = 'type';
  $handler->display->display_options['fields']['type']['table'] = 'xmlsitemap';
  $handler->display->display_options['fields']['type']['field'] = 'type';
  /* Field: XML Sitemap: Subtype */
  $handler->display->display_options['fields']['subtype']['id'] = 'subtype';
  $handler->display->display_options['fields']['subtype']['table'] = 'xmlsitemap';
  $handler->display->display_options['fields']['subtype']['field'] = 'subtype';
  /* Field: XML Sitemap: Loc / URL */
  $handler->display->display_options['fields']['loc']['id'] = 'loc';
  $handler->display->display_options['fields']['loc']['table'] = 'xmlsitemap';
  $handler->display->display_options['fields']['loc']['field'] = 'loc';
  /* Field: XML Sitemap: Priority */
  $handler->display->display_options['fields']['priority']['id'] = 'priority';
  $handler->display->display_options['fields']['priority']['table'] = 'xmlsitemap';
  $handler->display->display_options['fields']['priority']['field'] = 'priority';
  $handler->display->display_options['fields']['priority']['separator'] = '';
  /* Field: XML Sitemap: Language */
  $handler->display->display_options['fields']['language']['id'] = 'language';
  $handler->display->display_options['fields']['language']['table'] = 'xmlsitemap';
  $handler->display->display_options['fields']['language']['field'] = 'language';
  /* Field: XML Sitemap: Access */
  $handler->display->display_options['fields']['access']['id'] = 'access';
  $handler->display->display_options['fields']['access']['table'] = 'xmlsitemap';
  $handler->display->display_options['fields']['access']['field'] = 'access';
  $handler->display->display_options['fields']['access']['not'] = 0;
  /* Field: XML Sitemap: Status */
  $handler->display->display_options['fields']['status']['id'] = 'status';
  $handler->display->display_options['fields']['status']['table'] = 'xmlsitemap';
  $handler->display->display_options['fields']['status']['field'] = 'status';
  $handler->display->display_options['fields']['status']['not'] = 0;
  /* Field: Content: Google News Keyword */
  $handler->display->display_options['fields']['field_google_news_keyword']['id'] = 'field_google_news_keyword';
  $handler->display->display_options['fields']['field_google_news_keyword']['table'] = 'field_data_field_google_news_keyword';
  $handler->display->display_options['fields']['field_google_news_keyword']['field'] = 'field_google_news_keyword';
  $handler->display->display_options['fields']['field_google_news_keyword']['relationship'] = 'id';
  $handler->display->display_options['fields']['field_google_news_keyword']['group_column'] = 'entity_id';
  $handler->display->display_options['defaults']['filter_groups'] = FALSE;
  $handler->display->display_options['filter_groups']['groups'] = array(
    1 => 'AND',
    2 => 'OR',
  );
  $handler->display->display_options['defaults']['filters'] = FALSE;
  /* Filter criterion: XML Sitemap: Access */
  $handler->display->display_options['filters']['access']['id'] = 'access';
  $handler->display->display_options['filters']['access']['table'] = 'xmlsitemap';
  $handler->display->display_options['filters']['access']['field'] = 'access';
  $handler->display->display_options['filters']['access']['value'] = '1';
  $handler->display->display_options['filters']['access']['group'] = 1;
  /* Filter criterion: XML Sitemap: Status */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'xmlsitemap';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = '1';
  $handler->display->display_options['filters']['status']['group'] = 1;
  /* Filter criterion: URL Alias: Alias */
  $handler->display->display_options['filters']['alias_2']['id'] = 'alias_2';
  $handler->display->display_options['filters']['alias_2']['table'] = 'url_alias';
  $handler->display->display_options['filters']['alias_2']['field'] = 'alias';
  $handler->display->display_options['filters']['alias_2']['relationship'] = 'loc';
  $handler->display->display_options['filters']['alias_2']['value'] = 'news';
  $handler->display->display_options['filters']['alias_2']['group'] = 2;
  /* Filter criterion: URL Alias: Alias */
  $handler->display->display_options['filters']['alias_3']['id'] = 'alias_3';
  $handler->display->display_options['filters']['alias_3']['table'] = 'url_alias';
  $handler->display->display_options['filters']['alias_3']['field'] = 'alias';
  $handler->display->display_options['filters']['alias_3']['relationship'] = 'loc';
  $handler->display->display_options['filters']['alias_3']['operator'] = 'starts';
  $handler->display->display_options['filters']['alias_3']['value'] = 'news/';
  $handler->display->display_options['filters']['alias_3']['group'] = 2;
  /* Filter criterion: Content: Do Not Syndicate (field_syndication) */
  $handler->display->display_options['filters']['field_syndication_value_2']['id'] = 'field_syndication_value_2';
  $handler->display->display_options['filters']['field_syndication_value_2']['table'] = 'field_data_field_syndication';
  $handler->display->display_options['filters']['field_syndication_value_2']['field'] = 'field_syndication_value';
  $handler->display->display_options['filters']['field_syndication_value_2']['relationship'] = 'id';
  $handler->display->display_options['filters']['field_syndication_value_2']['operator'] = 'not';
  $handler->display->display_options['filters']['field_syndication_value_2']['value'] = array(
    1 => '1',
  );
  $handler->display->display_options['filters']['field_syndication_value_2']['group'] = 1;
  /* Filter criterion: Node: Published at */
  $handler->display->display_options['filters']['published_at']['id'] = 'published_at';
  $handler->display->display_options['filters']['published_at']['table'] = 'publication_date';
  $handler->display->display_options['filters']['published_at']['field'] = 'published_at';
  $handler->display->display_options['filters']['published_at']['relationship'] = 'id';
  $handler->display->display_options['filters']['published_at']['operator'] = '>=';
  $handler->display->display_options['filters']['published_at']['value']['value'] = '-48 hours';
  $handler->display->display_options['filters']['published_at']['value']['type'] = 'offset';
  $handler->display->display_options['path'] = 'news-sitemap.xml';
  $handler->display->display_options['xmlsitemap_root_attributes'] = 'xmlns:news|http://www.google.com/schemas/sitemap-news/0.9
  xmlns:image|http://www.google.com/schemas/sitemap-image/1.1
  xmlns:video|http://www.google.com/schemas/sitemap-video/1.1';
  $handler->display->display_options['xmlsitemap_view_mode']['node'] = 'xmlsitemap_news';

  /* Display: Holidays & Events */
  $handler = $view->new_display('xmlsitemap', 'Holidays & Events', 'holidays_events');
  $handler->display->display_options['pager']['type'] = 'some';
  $handler->display->display_options['pager']['options']['items_per_page'] = '50000';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['defaults']['filter_groups'] = FALSE;
  $handler->display->display_options['filter_groups']['groups'] = array(
    1 => 'AND',
    2 => 'OR',
  );
  $handler->display->display_options['defaults']['filters'] = FALSE;
  /* Filter criterion: XML Sitemap: Access */
  $handler->display->display_options['filters']['access']['id'] = 'access';
  $handler->display->display_options['filters']['access']['table'] = 'xmlsitemap';
  $handler->display->display_options['filters']['access']['field'] = 'access';
  $handler->display->display_options['filters']['access']['value'] = '1';
  $handler->display->display_options['filters']['access']['group'] = 1;
  /* Filter criterion: XML Sitemap: Status */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'xmlsitemap';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = '1';
  $handler->display->display_options['filters']['status']['group'] = 1;
  /* Filter criterion: URL Alias: Alias */
  $handler->display->display_options['filters']['alias_1']['id'] = 'alias_1';
  $handler->display->display_options['filters']['alias_1']['table'] = 'url_alias';
  $handler->display->display_options['filters']['alias_1']['field'] = 'alias';
  $handler->display->display_options['filters']['alias_1']['relationship'] = 'loc';
  $handler->display->display_options['filters']['alias_1']['value'] = 'events';
  $handler->display->display_options['filters']['alias_1']['group'] = 2;
  /* Filter criterion: URL Alias: Alias */
  $handler->display->display_options['filters']['alias']['id'] = 'alias';
  $handler->display->display_options['filters']['alias']['table'] = 'url_alias';
  $handler->display->display_options['filters']['alias']['field'] = 'alias';
  $handler->display->display_options['filters']['alias']['relationship'] = 'loc';
  $handler->display->display_options['filters']['alias']['operator'] = 'starts';
  $handler->display->display_options['filters']['alias']['value'] = 'events/';
  $handler->display->display_options['filters']['alias']['group'] = 2;
  /* Filter criterion: URL Alias: Alias */
  $handler->display->display_options['filters']['alias_2']['id'] = 'alias_2';
  $handler->display->display_options['filters']['alias_2']['table'] = 'url_alias';
  $handler->display->display_options['filters']['alias_2']['field'] = 'alias';
  $handler->display->display_options['filters']['alias_2']['relationship'] = 'loc';
  $handler->display->display_options['filters']['alias_2']['value'] = 'holidays-events';
  $handler->display->display_options['filters']['alias_2']['group'] = 2;
  /* Filter criterion: URL Alias: Alias */
  $handler->display->display_options['filters']['alias_3']['id'] = 'alias_3';
  $handler->display->display_options['filters']['alias_3']['table'] = 'url_alias';
  $handler->display->display_options['filters']['alias_3']['field'] = 'alias';
  $handler->display->display_options['filters']['alias_3']['relationship'] = 'loc';
  $handler->display->display_options['filters']['alias_3']['operator'] = 'starts';
  $handler->display->display_options['filters']['alias_3']['value'] = 'holidays-events/';
  $handler->display->display_options['filters']['alias_3']['group'] = 2;
  /* Filter criterion: URL Alias: Alias */
  $handler->display->display_options['filters']['alias_4']['id'] = 'alias_4';
  $handler->display->display_options['filters']['alias_4']['table'] = 'url_alias';
  $handler->display->display_options['filters']['alias_4']['field'] = 'alias';
  $handler->display->display_options['filters']['alias_4']['relationship'] = 'loc';
  $handler->display->display_options['filters']['alias_4']['value'] = 'super-bowl-recipes';
  $handler->display->display_options['filters']['alias_4']['group'] = 2;
  /* Filter criterion: URL Alias: Alias */
  $handler->display->display_options['filters']['alias_5']['id'] = 'alias_5';
  $handler->display->display_options['filters']['alias_5']['table'] = 'url_alias';
  $handler->display->display_options['filters']['alias_5']['field'] = 'alias';
  $handler->display->display_options['filters']['alias_5']['relationship'] = 'loc';
  $handler->display->display_options['filters']['alias_5']['operator'] = 'starts';
  $handler->display->display_options['filters']['alias_5']['value'] = 'super-bowl-recipes/';
  $handler->display->display_options['filters']['alias_5']['group'] = 2;
  /* Filter criterion: URL Alias: Alias */
  $handler->display->display_options['filters']['alias_6']['id'] = 'alias_6';
  $handler->display->display_options['filters']['alias_6']['table'] = 'url_alias';
  $handler->display->display_options['filters']['alias_6']['field'] = 'alias';
  $handler->display->display_options['filters']['alias_6']['relationship'] = 'loc';
  $handler->display->display_options['filters']['alias_6']['value'] = 'valentines-day';
  $handler->display->display_options['filters']['alias_6']['group'] = 2;
  /* Filter criterion: URL Alias: Alias */
  $handler->display->display_options['filters']['alias_7']['id'] = 'alias_7';
  $handler->display->display_options['filters']['alias_7']['table'] = 'url_alias';
  $handler->display->display_options['filters']['alias_7']['field'] = 'alias';
  $handler->display->display_options['filters']['alias_7']['relationship'] = 'loc';
  $handler->display->display_options['filters']['alias_7']['operator'] = 'starts';
  $handler->display->display_options['filters']['alias_7']['value'] = 'valentines-day/';
  $handler->display->display_options['filters']['alias_7']['group'] = 2;
  /* Filter criterion: URL Alias: Alias */
  $handler->display->display_options['filters']['alias_8']['id'] = 'alias_8';
  $handler->display->display_options['filters']['alias_8']['table'] = 'url_alias';
  $handler->display->display_options['filters']['alias_8']['field'] = 'alias';
  $handler->display->display_options['filters']['alias_8']['relationship'] = 'loc';
  $handler->display->display_options['filters']['alias_8']['value'] = 'chinese-new-year';
  $handler->display->display_options['filters']['alias_8']['group'] = 2;
  /* Filter criterion: URL Alias: Alias */
  $handler->display->display_options['filters']['alias_9']['id'] = 'alias_9';
  $handler->display->display_options['filters']['alias_9']['table'] = 'url_alias';
  $handler->display->display_options['filters']['alias_9']['field'] = 'alias';
  $handler->display->display_options['filters']['alias_9']['relationship'] = 'loc';
  $handler->display->display_options['filters']['alias_9']['operator'] = 'starts';
  $handler->display->display_options['filters']['alias_9']['value'] = 'chinese-new-year/';
  $handler->display->display_options['filters']['alias_9']['group'] = 2;
  /* Filter criterion: URL Alias: Alias */
  $handler->display->display_options['filters']['alias_10']['id'] = 'alias_10';
  $handler->display->display_options['filters']['alias_10']['table'] = 'url_alias';
  $handler->display->display_options['filters']['alias_10']['field'] = 'alias';
  $handler->display->display_options['filters']['alias_10']['relationship'] = 'loc';
  $handler->display->display_options['filters']['alias_10']['value'] = 'mardi-gras-recipes';
  $handler->display->display_options['filters']['alias_10']['group'] = 2;
  /* Filter criterion: URL Alias: Alias */
  $handler->display->display_options['filters']['alias_11']['id'] = 'alias_11';
  $handler->display->display_options['filters']['alias_11']['table'] = 'url_alias';
  $handler->display->display_options['filters']['alias_11']['field'] = 'alias';
  $handler->display->display_options['filters']['alias_11']['relationship'] = 'loc';
  $handler->display->display_options['filters']['alias_11']['operator'] = 'starts';
  $handler->display->display_options['filters']['alias_11']['value'] = 'mardi-gras-recipes/';
  $handler->display->display_options['filters']['alias_11']['group'] = 2;
  /* Filter criterion: URL Alias: Alias */
  $handler->display->display_options['filters']['alias_12']['id'] = 'alias_12';
  $handler->display->display_options['filters']['alias_12']['table'] = 'url_alias';
  $handler->display->display_options['filters']['alias_12']['field'] = 'alias';
  $handler->display->display_options['filters']['alias_12']['relationship'] = 'loc';
  $handler->display->display_options['filters']['alias_12']['value'] = 'memorial-day-recipes';
  $handler->display->display_options['filters']['alias_12']['group'] = 2;
  /* Filter criterion: URL Alias: Alias */
  $handler->display->display_options['filters']['alias_13']['id'] = 'alias_13';
  $handler->display->display_options['filters']['alias_13']['table'] = 'url_alias';
  $handler->display->display_options['filters']['alias_13']['field'] = 'alias';
  $handler->display->display_options['filters']['alias_13']['relationship'] = 'loc';
  $handler->display->display_options['filters']['alias_13']['operator'] = 'starts';
  $handler->display->display_options['filters']['alias_13']['value'] = 'memorial-day-recipes/';
  $handler->display->display_options['filters']['alias_13']['group'] = 2;
  /* Filter criterion: URL Alias: Alias */
  $handler->display->display_options['filters']['alias_14']['id'] = 'alias_14';
  $handler->display->display_options['filters']['alias_14']['table'] = 'url_alias';
  $handler->display->display_options['filters']['alias_14']['field'] = 'alias';
  $handler->display->display_options['filters']['alias_14']['relationship'] = 'loc';
  $handler->display->display_options['filters']['alias_14']['value'] = 'olympic-party';
  $handler->display->display_options['filters']['alias_14']['group'] = 2;
  /* Filter criterion: URL Alias: Alias */
  $handler->display->display_options['filters']['alias_15']['id'] = 'alias_15';
  $handler->display->display_options['filters']['alias_15']['table'] = 'url_alias';
  $handler->display->display_options['filters']['alias_15']['field'] = 'alias';
  $handler->display->display_options['filters']['alias_15']['relationship'] = 'loc';
  $handler->display->display_options['filters']['alias_15']['operator'] = 'starts';
  $handler->display->display_options['filters']['alias_15']['value'] = 'olympic-party/';
  $handler->display->display_options['filters']['alias_15']['group'] = 2;
  /* Filter criterion: URL Alias: Alias */
  $handler->display->display_options['filters']['alias_16']['id'] = 'alias_16';
  $handler->display->display_options['filters']['alias_16']['table'] = 'url_alias';
  $handler->display->display_options['filters']['alias_16']['field'] = 'alias';
  $handler->display->display_options['filters']['alias_16']['relationship'] = 'loc';
  $handler->display->display_options['filters']['alias_16']['value'] = 'fathers-day-recipes';
  $handler->display->display_options['filters']['alias_16']['group'] = 2;
  /* Filter criterion: URL Alias: Alias */
  $handler->display->display_options['filters']['alias_17']['id'] = 'alias_17';
  $handler->display->display_options['filters']['alias_17']['table'] = 'url_alias';
  $handler->display->display_options['filters']['alias_17']['field'] = 'alias';
  $handler->display->display_options['filters']['alias_17']['relationship'] = 'loc';
  $handler->display->display_options['filters']['alias_17']['operator'] = 'starts';
  $handler->display->display_options['filters']['alias_17']['value'] = 'fathers-day-recipes/';
  $handler->display->display_options['filters']['alias_17']['group'] = 2;
  /* Filter criterion: URL Alias: Alias */
  $handler->display->display_options['filters']['alias_18']['id'] = 'alias_18';
  $handler->display->display_options['filters']['alias_18']['table'] = 'url_alias';
  $handler->display->display_options['filters']['alias_18']['field'] = 'alias';
  $handler->display->display_options['filters']['alias_18']['relationship'] = 'loc';
  $handler->display->display_options['filters']['alias_18']['value'] = 'passover-recipes';
  $handler->display->display_options['filters']['alias_18']['group'] = 2;
  /* Filter criterion: URL Alias: Alias */
  $handler->display->display_options['filters']['alias_19']['id'] = 'alias_19';
  $handler->display->display_options['filters']['alias_19']['table'] = 'url_alias';
  $handler->display->display_options['filters']['alias_19']['field'] = 'alias';
  $handler->display->display_options['filters']['alias_19']['relationship'] = 'loc';
  $handler->display->display_options['filters']['alias_19']['operator'] = 'starts';
  $handler->display->display_options['filters']['alias_19']['value'] = 'passover-recipes/';
  $handler->display->display_options['filters']['alias_19']['group'] = 2;
  /* Filter criterion: URL Alias: Alias */
  $handler->display->display_options['filters']['alias_20']['id'] = 'alias_20';
  $handler->display->display_options['filters']['alias_20']['table'] = 'url_alias';
  $handler->display->display_options['filters']['alias_20']['field'] = 'alias';
  $handler->display->display_options['filters']['alias_20']['relationship'] = 'loc';
  $handler->display->display_options['filters']['alias_20']['value'] = 'cinco-de-mayo-recipes';
  $handler->display->display_options['filters']['alias_20']['group'] = 2;
  /* Filter criterion: URL Alias: Alias */
  $handler->display->display_options['filters']['alias_21']['id'] = 'alias_21';
  $handler->display->display_options['filters']['alias_21']['table'] = 'url_alias';
  $handler->display->display_options['filters']['alias_21']['field'] = 'alias';
  $handler->display->display_options['filters']['alias_21']['relationship'] = 'loc';
  $handler->display->display_options['filters']['alias_21']['operator'] = 'starts';
  $handler->display->display_options['filters']['alias_21']['value'] = 'cinco-de-mayo-recipes/';
  $handler->display->display_options['filters']['alias_21']['group'] = 2;
  /* Filter criterion: URL Alias: Alias */
  $handler->display->display_options['filters']['alias_22']['id'] = 'alias_22';
  $handler->display->display_options['filters']['alias_22']['table'] = 'url_alias';
  $handler->display->display_options['filters']['alias_22']['field'] = 'alias';
  $handler->display->display_options['filters']['alias_22']['relationship'] = 'loc';
  $handler->display->display_options['filters']['alias_22']['value'] = 'graduation-food';
  $handler->display->display_options['filters']['alias_22']['group'] = 2;
  /* Filter criterion: URL Alias: Alias */
  $handler->display->display_options['filters']['alias_23']['id'] = 'alias_23';
  $handler->display->display_options['filters']['alias_23']['table'] = 'url_alias';
  $handler->display->display_options['filters']['alias_23']['field'] = 'alias';
  $handler->display->display_options['filters']['alias_23']['relationship'] = 'loc';
  $handler->display->display_options['filters']['alias_23']['operator'] = 'starts';
  $handler->display->display_options['filters']['alias_23']['value'] = 'graduation-food/';
  $handler->display->display_options['filters']['alias_23']['group'] = 2;
  /* Filter criterion: URL Alias: Alias */
  $handler->display->display_options['filters']['alias_24']['id'] = 'alias_24';
  $handler->display->display_options['filters']['alias_24']['table'] = 'url_alias';
  $handler->display->display_options['filters']['alias_24']['field'] = 'alias';
  $handler->display->display_options['filters']['alias_24']['relationship'] = 'loc';
  $handler->display->display_options['filters']['alias_24']['value'] = '4th-of-july-recipes';
  $handler->display->display_options['filters']['alias_24']['group'] = 2;
  /* Filter criterion: URL Alias: Alias */
  $handler->display->display_options['filters']['alias_25']['id'] = 'alias_25';
  $handler->display->display_options['filters']['alias_25']['table'] = 'url_alias';
  $handler->display->display_options['filters']['alias_25']['field'] = 'alias';
  $handler->display->display_options['filters']['alias_25']['relationship'] = 'loc';
  $handler->display->display_options['filters']['alias_25']['operator'] = 'starts';
  $handler->display->display_options['filters']['alias_25']['value'] = '4th-of-july-recipes/';
  $handler->display->display_options['filters']['alias_25']['group'] = 2;
  /* Filter criterion: URL Alias: Alias */
  $handler->display->display_options['filters']['alias_26']['id'] = 'alias_26';
  $handler->display->display_options['filters']['alias_26']['table'] = 'url_alias';
  $handler->display->display_options['filters']['alias_26']['field'] = 'alias';
  $handler->display->display_options['filters']['alias_26']['relationship'] = 'loc';
  $handler->display->display_options['filters']['alias_26']['value'] = 'mothers-day-recipes';
  $handler->display->display_options['filters']['alias_26']['group'] = 2;
  /* Filter criterion: URL Alias: Alias */
  $handler->display->display_options['filters']['alias_27']['id'] = 'alias_27';
  $handler->display->display_options['filters']['alias_27']['table'] = 'url_alias';
  $handler->display->display_options['filters']['alias_27']['field'] = 'alias';
  $handler->display->display_options['filters']['alias_27']['relationship'] = 'loc';
  $handler->display->display_options['filters']['alias_27']['operator'] = 'starts';
  $handler->display->display_options['filters']['alias_27']['value'] = 'mothers-day-recipes/';
  $handler->display->display_options['filters']['alias_27']['group'] = 2;
  /* Filter criterion: URL Alias: Alias */
  $handler->display->display_options['filters']['alias_28']['id'] = 'alias_28';
  $handler->display->display_options['filters']['alias_28']['table'] = 'url_alias';
  $handler->display->display_options['filters']['alias_28']['field'] = 'alias';
  $handler->display->display_options['filters']['alias_28']['relationship'] = 'loc';
  $handler->display->display_options['filters']['alias_28']['value'] = 'halloween-recipes';
  $handler->display->display_options['filters']['alias_28']['group'] = 2;
  /* Filter criterion: URL Alias: Alias */
  $handler->display->display_options['filters']['alias_29']['id'] = 'alias_29';
  $handler->display->display_options['filters']['alias_29']['table'] = 'url_alias';
  $handler->display->display_options['filters']['alias_29']['field'] = 'alias';
  $handler->display->display_options['filters']['alias_29']['relationship'] = 'loc';
  $handler->display->display_options['filters']['alias_29']['operator'] = 'starts';
  $handler->display->display_options['filters']['alias_29']['value'] = 'halloween-recipes/';
  $handler->display->display_options['filters']['alias_29']['group'] = 2;
  /* Filter criterion: URL Alias: Alias */
  $handler->display->display_options['filters']['alias_30']['id'] = 'alias_30';
  $handler->display->display_options['filters']['alias_30']['table'] = 'url_alias';
  $handler->display->display_options['filters']['alias_30']['field'] = 'alias';
  $handler->display->display_options['filters']['alias_30']['relationship'] = 'loc';
  $handler->display->display_options['filters']['alias_30']['value'] = 'ultimate-thanksgiving';
  $handler->display->display_options['filters']['alias_30']['group'] = 2;
  /* Filter criterion: URL Alias: Alias */
  $handler->display->display_options['filters']['alias_31']['id'] = 'alias_31';
  $handler->display->display_options['filters']['alias_31']['table'] = 'url_alias';
  $handler->display->display_options['filters']['alias_31']['field'] = 'alias';
  $handler->display->display_options['filters']['alias_31']['relationship'] = 'loc';
  $handler->display->display_options['filters']['alias_31']['operator'] = 'starts';
  $handler->display->display_options['filters']['alias_31']['value'] = 'ultimate-thanksgiving/';
  $handler->display->display_options['filters']['alias_31']['group'] = 2;
  /* Filter criterion: URL Alias: Alias */
  $handler->display->display_options['filters']['alias_32']['id'] = 'alias_32';
  $handler->display->display_options['filters']['alias_32']['table'] = 'url_alias';
  $handler->display->display_options['filters']['alias_32']['field'] = 'alias';
  $handler->display->display_options['filters']['alias_32']['relationship'] = 'loc';
  $handler->display->display_options['filters']['alias_32']['value'] = 'holiday-guide';
  $handler->display->display_options['filters']['alias_32']['group'] = 2;
  /* Filter criterion: URL Alias: Alias */
  $handler->display->display_options['filters']['alias_33']['id'] = 'alias_33';
  $handler->display->display_options['filters']['alias_33']['table'] = 'url_alias';
  $handler->display->display_options['filters']['alias_33']['field'] = 'alias';
  $handler->display->display_options['filters']['alias_33']['relationship'] = 'loc';
  $handler->display->display_options['filters']['alias_33']['operator'] = 'starts';
  $handler->display->display_options['filters']['alias_33']['value'] = 'holiday-guide/';
  $handler->display->display_options['filters']['alias_33']['group'] = 2;
  /* Filter criterion: URL Alias: Alias */
  $handler->display->display_options['filters']['alias_34']['id'] = 'alias_34';
  $handler->display->display_options['filters']['alias_34']['table'] = 'url_alias';
  $handler->display->display_options['filters']['alias_34']['field'] = 'alias';
  $handler->display->display_options['filters']['alias_34']['relationship'] = 'loc';
  $handler->display->display_options['filters']['alias_34']['value'] = 'new-years-eve';
  $handler->display->display_options['filters']['alias_34']['group'] = 2;
  /* Filter criterion: URL Alias: Alias */
  $handler->display->display_options['filters']['alias_35']['id'] = 'alias_35';
  $handler->display->display_options['filters']['alias_35']['table'] = 'url_alias';
  $handler->display->display_options['filters']['alias_35']['field'] = 'alias';
  $handler->display->display_options['filters']['alias_35']['relationship'] = 'loc';
  $handler->display->display_options['filters']['alias_35']['operator'] = 'starts';
  $handler->display->display_options['filters']['alias_35']['value'] = 'new-years-eve/';
  $handler->display->display_options['filters']['alias_35']['group'] = 2;
  /* Filter criterion: URL Alias: Alias */
  $handler->display->display_options['filters']['alias_36']['id'] = 'alias_36';
  $handler->display->display_options['filters']['alias_36']['table'] = 'url_alias';
  $handler->display->display_options['filters']['alias_36']['field'] = 'alias';
  $handler->display->display_options['filters']['alias_36']['relationship'] = 'loc';
  $handler->display->display_options['filters']['alias_36']['value'] = 'easter-recipes';
  $handler->display->display_options['filters']['alias_36']['group'] = 2;
  /* Filter criterion: URL Alias: Alias */
  $handler->display->display_options['filters']['alias_37']['id'] = 'alias_37';
  $handler->display->display_options['filters']['alias_37']['table'] = 'url_alias';
  $handler->display->display_options['filters']['alias_37']['field'] = 'alias';
  $handler->display->display_options['filters']['alias_37']['relationship'] = 'loc';
  $handler->display->display_options['filters']['alias_37']['operator'] = 'starts';
  $handler->display->display_options['filters']['alias_37']['value'] = 'easter-recipes/';
  $handler->display->display_options['filters']['alias_37']['group'] = 2;
  /* Filter criterion: URL Alias: Alias */
  $handler->display->display_options['filters']['alias_38']['id'] = 'alias_38';
  $handler->display->display_options['filters']['alias_38']['table'] = 'url_alias';
  $handler->display->display_options['filters']['alias_38']['field'] = 'alias';
  $handler->display->display_options['filters']['alias_38']['relationship'] = 'loc';
  $handler->display->display_options['filters']['alias_38']['value'] = 'st-patricks-day-recipes';
  $handler->display->display_options['filters']['alias_38']['group'] = 2;
  /* Filter criterion: URL Alias: Alias */
  $handler->display->display_options['filters']['alias_39']['id'] = 'alias_39';
  $handler->display->display_options['filters']['alias_39']['table'] = 'url_alias';
  $handler->display->display_options['filters']['alias_39']['field'] = 'alias';
  $handler->display->display_options['filters']['alias_39']['relationship'] = 'loc';
  $handler->display->display_options['filters']['alias_39']['operator'] = 'starts';
  $handler->display->display_options['filters']['alias_39']['value'] = 'st-patricks-day-recipes/';
  $handler->display->display_options['filters']['alias_39']['group'] = 2;
  /* Filter criterion: URL Alias: Alias */
  $handler->display->display_options['filters']['alias_40']['id'] = 'alias_40';
  $handler->display->display_options['filters']['alias_40']['table'] = 'url_alias';
  $handler->display->display_options['filters']['alias_40']['field'] = 'alias';
  $handler->display->display_options['filters']['alias_40']['relationship'] = 'loc';
  $handler->display->display_options['filters']['alias_40']['value'] = 'thanksgiving';
  $handler->display->display_options['filters']['alias_40']['group'] = 2;
  /* Filter criterion: URL Alias: Alias */
  $handler->display->display_options['filters']['alias_41']['id'] = 'alias_41';
  $handler->display->display_options['filters']['alias_41']['table'] = 'url_alias';
  $handler->display->display_options['filters']['alias_41']['field'] = 'alias';
  $handler->display->display_options['filters']['alias_41']['relationship'] = 'loc';
  $handler->display->display_options['filters']['alias_41']['operator'] = 'starts';
  $handler->display->display_options['filters']['alias_41']['value'] = 'thanksgiving/';
  $handler->display->display_options['filters']['alias_41']['group'] = 2;
  /* Filter criterion: URL Alias: Alias */
  $handler->display->display_options['filters']['alias_42']['id'] = 'alias_42';
  $handler->display->display_options['filters']['alias_42']['table'] = 'url_alias';
  $handler->display->display_options['filters']['alias_42']['field'] = 'alias';
  $handler->display->display_options['filters']['alias_42']['relationship'] = 'loc';
  $handler->display->display_options['filters']['alias_42']['value'] = 'christmas';
  $handler->display->display_options['filters']['alias_42']['group'] = 2;
  /* Filter criterion: URL Alias: Alias */
  $handler->display->display_options['filters']['alias_43']['id'] = 'alias_43';
  $handler->display->display_options['filters']['alias_43']['table'] = 'url_alias';
  $handler->display->display_options['filters']['alias_43']['field'] = 'alias';
  $handler->display->display_options['filters']['alias_43']['relationship'] = 'loc';
  $handler->display->display_options['filters']['alias_43']['operator'] = 'starts';
  $handler->display->display_options['filters']['alias_43']['value'] = 'christmas/';
  $handler->display->display_options['filters']['alias_43']['group'] = 2;
  /* Filter criterion: URL Alias: Alias */
  $handler->display->display_options['filters']['alias_44']['id'] = 'alias_44';
  $handler->display->display_options['filters']['alias_44']['table'] = 'url_alias';
  $handler->display->display_options['filters']['alias_44']['field'] = 'alias';
  $handler->display->display_options['filters']['alias_44']['relationship'] = 'loc';
  $handler->display->display_options['filters']['alias_44']['value'] = 'thanksgiving-sides';
  $handler->display->display_options['filters']['alias_44']['group'] = 2;
  /* Filter criterion: URL Alias: Alias */
  $handler->display->display_options['filters']['alias_45']['id'] = 'alias_45';
  $handler->display->display_options['filters']['alias_45']['table'] = 'url_alias';
  $handler->display->display_options['filters']['alias_45']['field'] = 'alias';
  $handler->display->display_options['filters']['alias_45']['relationship'] = 'loc';
  $handler->display->display_options['filters']['alias_45']['operator'] = 'starts';
  $handler->display->display_options['filters']['alias_45']['value'] = 'thanksgiving-sides/';
  $handler->display->display_options['filters']['alias_45']['group'] = 2;
  /* Filter criterion: Content: Do Not Syndicate (field_syndication) */
  $handler->display->display_options['filters']['field_syndication_value_2']['id'] = 'field_syndication_value_2';
  $handler->display->display_options['filters']['field_syndication_value_2']['table'] = 'field_data_field_syndication';
  $handler->display->display_options['filters']['field_syndication_value_2']['field'] = 'field_syndication_value';
  $handler->display->display_options['filters']['field_syndication_value_2']['relationship'] = 'id';
  $handler->display->display_options['filters']['field_syndication_value_2']['operator'] = 'not';
  $handler->display->display_options['filters']['field_syndication_value_2']['value'] = array(
    1 => '1',
  );
  $handler->display->display_options['filters']['field_syndication_value_2']['group'] = 1;
  $handler->display->display_options['path'] = 'holidays-events.xml';
  $handler->display->display_options['xmlsitemap_root_attributes'] = 'xmlns:news|http://www.google.com/schemas/sitemap-news/0.9
  xmlns:image|http://www.google.com/schemas/sitemap-image/1.1
  xmlns:video|http://www.google.com/schemas/sitemap-video/1.1';
  $handler->display->display_options['xmlsitemap_view_mode']['node'] = 'xmlsitemap';

  /* Display: Generic */
  $handler = $view->new_display('xmlsitemap', 'Generic', 'generic');
  $handler->display->display_options['pager']['type'] = 'some';
  $handler->display->display_options['pager']['options']['items_per_page'] = '50000';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: XML Sitemap: Id */
  $handler->display->display_options['fields']['id']['id'] = 'id';
  $handler->display->display_options['fields']['id']['table'] = 'xmlsitemap';
  $handler->display->display_options['fields']['id']['field'] = 'id';
  /* Field: XML Sitemap: Type */
  $handler->display->display_options['fields']['type']['id'] = 'type';
  $handler->display->display_options['fields']['type']['table'] = 'xmlsitemap';
  $handler->display->display_options['fields']['type']['field'] = 'type';
  /* Field: XML Sitemap: Subtype */
  $handler->display->display_options['fields']['subtype']['id'] = 'subtype';
  $handler->display->display_options['fields']['subtype']['table'] = 'xmlsitemap';
  $handler->display->display_options['fields']['subtype']['field'] = 'subtype';
  /* Field: XML Sitemap: Loc / URL */
  $handler->display->display_options['fields']['loc']['id'] = 'loc';
  $handler->display->display_options['fields']['loc']['table'] = 'xmlsitemap';
  $handler->display->display_options['fields']['loc']['field'] = 'loc';
  /* Field: XML Sitemap: Lastmod */
  $handler->display->display_options['fields']['lastmod']['id'] = 'lastmod';
  $handler->display->display_options['fields']['lastmod']['table'] = 'xmlsitemap';
  $handler->display->display_options['fields']['lastmod']['field'] = 'lastmod';
  $handler->display->display_options['fields']['lastmod']['separator'] = '';
  /* Field: XML Sitemap: Change freq */
  $handler->display->display_options['fields']['changefreq']['id'] = 'changefreq';
  $handler->display->display_options['fields']['changefreq']['table'] = 'xmlsitemap';
  $handler->display->display_options['fields']['changefreq']['field'] = 'changefreq';
  $handler->display->display_options['fields']['changefreq']['separator'] = '';
  /* Field: XML Sitemap: Change count */
  $handler->display->display_options['fields']['changecount']['id'] = 'changecount';
  $handler->display->display_options['fields']['changecount']['table'] = 'xmlsitemap';
  $handler->display->display_options['fields']['changecount']['field'] = 'changecount';
  $handler->display->display_options['fields']['changecount']['separator'] = '';
  /* Field: XML Sitemap: Priority */
  $handler->display->display_options['fields']['priority']['id'] = 'priority';
  $handler->display->display_options['fields']['priority']['table'] = 'xmlsitemap';
  $handler->display->display_options['fields']['priority']['field'] = 'priority';
  $handler->display->display_options['fields']['priority']['separator'] = '';
  /* Field: XML Sitemap: Language */
  $handler->display->display_options['fields']['language']['id'] = 'language';
  $handler->display->display_options['fields']['language']['table'] = 'xmlsitemap';
  $handler->display->display_options['fields']['language']['field'] = 'language';
  /* Field: XML Sitemap: Access */
  $handler->display->display_options['fields']['access']['id'] = 'access';
  $handler->display->display_options['fields']['access']['table'] = 'xmlsitemap';
  $handler->display->display_options['fields']['access']['field'] = 'access';
  $handler->display->display_options['fields']['access']['not'] = 0;
  /* Field: XML Sitemap: Status */
  $handler->display->display_options['fields']['status']['id'] = 'status';
  $handler->display->display_options['fields']['status']['table'] = 'xmlsitemap';
  $handler->display->display_options['fields']['status']['field'] = 'status';
  $handler->display->display_options['fields']['status']['not'] = 0;
  $handler->display->display_options['defaults']['filter_groups'] = FALSE;
  $handler->display->display_options['defaults']['filters'] = FALSE;
  /* Filter criterion: XML Sitemap: Access */
  $handler->display->display_options['filters']['access']['id'] = 'access';
  $handler->display->display_options['filters']['access']['table'] = 'xmlsitemap';
  $handler->display->display_options['filters']['access']['field'] = 'access';
  $handler->display->display_options['filters']['access']['value'] = '1';
  $handler->display->display_options['filters']['access']['group'] = 1;
  /* Filter criterion: XML Sitemap: Status */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'xmlsitemap';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = '1';
  $handler->display->display_options['filters']['status']['group'] = 1;
  /* Filter criterion: Content: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['relationship'] = 'id';
  $handler->display->display_options['filters']['type']['value'] = array(
    'page' => 'page',
  );
  $handler->display->display_options['filters']['type']['group'] = 1;
  /* Filter criterion: URL Alias: Alias */
  $handler->display->display_options['filters']['alias']['id'] = 'alias';
  $handler->display->display_options['filters']['alias']['table'] = 'url_alias';
  $handler->display->display_options['filters']['alias']['field'] = 'alias';
  $handler->display->display_options['filters']['alias']['relationship'] = 'loc';
  $handler->display->display_options['filters']['alias']['operator'] = 'not_starts';
  $handler->display->display_options['filters']['alias']['value'] = 'video/';
  $handler->display->display_options['path'] = 'generic-sitemap.xml';
  $handler->display->display_options['xmlsitemap_root_attributes'] = 'xmlns:news|http://www.google.com/schemas/sitemap-news/0.9
  xmlns:image|http://www.google.com/schemas/sitemap-image/1.1
  xmlns:video|http://www.google.com/schemas/sitemap-video/1.1';
  $handler->display->display_options['xmlsitemap_view_mode']['node'] = 'xmlsitemap';

  /* Display: Miscellaneous */
  $handler = $view->new_display('xmlsitemap', 'Miscellaneous', 'miscellaneous');
  $handler->display->display_options['pager']['type'] = 'some';
  $handler->display->display_options['pager']['options']['items_per_page'] = '50000';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: XML Sitemap: Id */
  $handler->display->display_options['fields']['id']['id'] = 'id';
  $handler->display->display_options['fields']['id']['table'] = 'xmlsitemap';
  $handler->display->display_options['fields']['id']['field'] = 'id';
  /* Field: XML Sitemap: Type */
  $handler->display->display_options['fields']['type']['id'] = 'type';
  $handler->display->display_options['fields']['type']['table'] = 'xmlsitemap';
  $handler->display->display_options['fields']['type']['field'] = 'type';
  /* Field: XML Sitemap: Subtype */
  $handler->display->display_options['fields']['subtype']['id'] = 'subtype';
  $handler->display->display_options['fields']['subtype']['table'] = 'xmlsitemap';
  $handler->display->display_options['fields']['subtype']['field'] = 'subtype';
  /* Field: XML Sitemap: Loc / URL */
  $handler->display->display_options['fields']['loc']['id'] = 'loc';
  $handler->display->display_options['fields']['loc']['table'] = 'xmlsitemap';
  $handler->display->display_options['fields']['loc']['field'] = 'loc';
  /* Field: XML Sitemap: Lastmod */
  $handler->display->display_options['fields']['lastmod']['id'] = 'lastmod';
  $handler->display->display_options['fields']['lastmod']['table'] = 'xmlsitemap';
  $handler->display->display_options['fields']['lastmod']['field'] = 'lastmod';
  $handler->display->display_options['fields']['lastmod']['separator'] = '';
  /* Field: XML Sitemap: Change freq */
  $handler->display->display_options['fields']['changefreq']['id'] = 'changefreq';
  $handler->display->display_options['fields']['changefreq']['table'] = 'xmlsitemap';
  $handler->display->display_options['fields']['changefreq']['field'] = 'changefreq';
  $handler->display->display_options['fields']['changefreq']['separator'] = '';
  /* Field: XML Sitemap: Change count */
  $handler->display->display_options['fields']['changecount']['id'] = 'changecount';
  $handler->display->display_options['fields']['changecount']['table'] = 'xmlsitemap';
  $handler->display->display_options['fields']['changecount']['field'] = 'changecount';
  $handler->display->display_options['fields']['changecount']['separator'] = '';
  /* Field: XML Sitemap: Priority */
  $handler->display->display_options['fields']['priority']['id'] = 'priority';
  $handler->display->display_options['fields']['priority']['table'] = 'xmlsitemap';
  $handler->display->display_options['fields']['priority']['field'] = 'priority';
  $handler->display->display_options['fields']['priority']['separator'] = '';
  /* Field: XML Sitemap: Language */
  $handler->display->display_options['fields']['language']['id'] = 'language';
  $handler->display->display_options['fields']['language']['table'] = 'xmlsitemap';
  $handler->display->display_options['fields']['language']['field'] = 'language';
  /* Field: XML Sitemap: Access */
  $handler->display->display_options['fields']['access']['id'] = 'access';
  $handler->display->display_options['fields']['access']['table'] = 'xmlsitemap';
  $handler->display->display_options['fields']['access']['field'] = 'access';
  $handler->display->display_options['fields']['access']['not'] = 0;
  /* Field: XML Sitemap: Status */
  $handler->display->display_options['fields']['status']['id'] = 'status';
  $handler->display->display_options['fields']['status']['table'] = 'xmlsitemap';
  $handler->display->display_options['fields']['status']['field'] = 'status';
  $handler->display->display_options['fields']['status']['not'] = 0;
  $handler->display->display_options['defaults']['filter_groups'] = FALSE;
  $handler->display->display_options['defaults']['filters'] = FALSE;
  /* Filter criterion: XML Sitemap: Access */
  $handler->display->display_options['filters']['access']['id'] = 'access';
  $handler->display->display_options['filters']['access']['table'] = 'xmlsitemap';
  $handler->display->display_options['filters']['access']['field'] = 'access';
  $handler->display->display_options['filters']['access']['value'] = '1';
  $handler->display->display_options['filters']['access']['group'] = 1;
  /* Filter criterion: XML Sitemap: Status */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'xmlsitemap';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = '1';
  $handler->display->display_options['filters']['status']['group'] = 1;
  /* Filter criterion: Content: Do Not Syndicate (field_syndication) */
  $handler->display->display_options['filters']['field_syndication_value_2']['id'] = 'field_syndication_value_2';
  $handler->display->display_options['filters']['field_syndication_value_2']['table'] = 'field_data_field_syndication';
  $handler->display->display_options['filters']['field_syndication_value_2']['field'] = 'field_syndication_value';
  $handler->display->display_options['filters']['field_syndication_value_2']['relationship'] = 'id';
  $handler->display->display_options['filters']['field_syndication_value_2']['operator'] = 'not';
  $handler->display->display_options['filters']['field_syndication_value_2']['value'] = array(
    1 => '1',
  );
  $handler->display->display_options['filters']['field_syndication_value_2']['group'] = 1;
  /* Filter criterion: URL Alias: Alias */
  $handler->display->display_options['filters']['alias_46']['id'] = 'alias_46';
  $handler->display->display_options['filters']['alias_46']['table'] = 'url_alias';
  $handler->display->display_options['filters']['alias_46']['field'] = 'alias';
  $handler->display->display_options['filters']['alias_46']['relationship'] = 'loc';
  $handler->display->display_options['filters']['alias_46']['operator'] = 'not_starts';
  $handler->display->display_options['filters']['alias_46']['value'] = 'syndication/';
  $handler->display->display_options['filters']['alias_46']['group'] = 1;
  /* Filter criterion: URL Alias: Alias */
  $handler->display->display_options['filters']['alias_47']['id'] = 'alias_47';
  $handler->display->display_options['filters']['alias_47']['table'] = 'url_alias';
  $handler->display->display_options['filters']['alias_47']['field'] = 'alias';
  $handler->display->display_options['filters']['alias_47']['relationship'] = 'loc';
  $handler->display->display_options['filters']['alias_47']['operator'] = '!=';
  $handler->display->display_options['filters']['alias_47']['value'] = 'recipes';
  $handler->display->display_options['filters']['alias_47']['group'] = 1;
  /* Filter criterion: URL Alias: Alias */
  $handler->display->display_options['filters']['alias_48']['id'] = 'alias_48';
  $handler->display->display_options['filters']['alias_48']['table'] = 'url_alias';
  $handler->display->display_options['filters']['alias_48']['field'] = 'alias';
  $handler->display->display_options['filters']['alias_48']['relationship'] = 'loc';
  $handler->display->display_options['filters']['alias_48']['operator'] = 'not_starts';
  $handler->display->display_options['filters']['alias_48']['value'] = 'recipes/';
  $handler->display->display_options['filters']['alias_48']['group'] = 1;
  /* Filter criterion: URL Alias: Alias */
  $handler->display->display_options['filters']['alias_49']['id'] = 'alias_49';
  $handler->display->display_options['filters']['alias_49']['table'] = 'url_alias';
  $handler->display->display_options['filters']['alias_49']['field'] = 'alias';
  $handler->display->display_options['filters']['alias_49']['relationship'] = 'loc';
  $handler->display->display_options['filters']['alias_49']['operator'] = '!=';
  $handler->display->display_options['filters']['alias_49']['value'] = 'articles';
  $handler->display->display_options['filters']['alias_49']['group'] = 1;
  /* Filter criterion: URL Alias: Alias */
  $handler->display->display_options['filters']['alias_50']['id'] = 'alias_50';
  $handler->display->display_options['filters']['alias_50']['table'] = 'url_alias';
  $handler->display->display_options['filters']['alias_50']['field'] = 'alias';
  $handler->display->display_options['filters']['alias_50']['relationship'] = 'loc';
  $handler->display->display_options['filters']['alias_50']['operator'] = 'not_starts';
  $handler->display->display_options['filters']['alias_50']['value'] = 'articles/';
  $handler->display->display_options['filters']['alias_50']['group'] = 1;
  /* Filter criterion: URL Alias: Alias */
  $handler->display->display_options['filters']['alias_51']['id'] = 'alias_51';
  $handler->display->display_options['filters']['alias_51']['table'] = 'url_alias';
  $handler->display->display_options['filters']['alias_51']['field'] = 'alias';
  $handler->display->display_options['filters']['alias_51']['relationship'] = 'loc';
  $handler->display->display_options['filters']['alias_51']['operator'] = '!=';
  $handler->display->display_options['filters']['alias_51']['value'] = 'slideshows';
  $handler->display->display_options['filters']['alias_51']['group'] = 1;
  /* Filter criterion: URL Alias: Alias */
  $handler->display->display_options['filters']['alias_52']['id'] = 'alias_52';
  $handler->display->display_options['filters']['alias_52']['table'] = 'url_alias';
  $handler->display->display_options['filters']['alias_52']['field'] = 'alias';
  $handler->display->display_options['filters']['alias_52']['relationship'] = 'loc';
  $handler->display->display_options['filters']['alias_52']['operator'] = 'not_starts';
  $handler->display->display_options['filters']['alias_52']['value'] = 'slideshows/';
  $handler->display->display_options['filters']['alias_52']['group'] = 1;
  /* Filter criterion: URL Alias: Alias */
  $handler->display->display_options['filters']['alias_53']['id'] = 'alias_53';
  $handler->display->display_options['filters']['alias_53']['table'] = 'url_alias';
  $handler->display->display_options['filters']['alias_53']['field'] = 'alias';
  $handler->display->display_options['filters']['alias_53']['relationship'] = 'loc';
  $handler->display->display_options['filters']['alias_53']['operator'] = '!=';
  $handler->display->display_options['filters']['alias_53']['value'] = 'blogs';
  $handler->display->display_options['filters']['alias_53']['group'] = 1;
  /* Filter criterion: URL Alias: Alias */
  $handler->display->display_options['filters']['alias_54']['id'] = 'alias_54';
  $handler->display->display_options['filters']['alias_54']['table'] = 'url_alias';
  $handler->display->display_options['filters']['alias_54']['field'] = 'alias';
  $handler->display->display_options['filters']['alias_54']['relationship'] = 'loc';
  $handler->display->display_options['filters']['alias_54']['operator'] = 'not_starts';
  $handler->display->display_options['filters']['alias_54']['value'] = 'blogs/';
  $handler->display->display_options['filters']['alias_54']['group'] = 1;
  /* Filter criterion: URL Alias: Alias */
  $handler->display->display_options['filters']['alias_55']['id'] = 'alias_55';
  $handler->display->display_options['filters']['alias_55']['table'] = 'url_alias';
  $handler->display->display_options['filters']['alias_55']['field'] = 'alias';
  $handler->display->display_options['filters']['alias_55']['relationship'] = 'loc';
  $handler->display->display_options['filters']['alias_55']['operator'] = '!=';
  $handler->display->display_options['filters']['alias_55']['value'] = 'beer';
  $handler->display->display_options['filters']['alias_55']['group'] = 1;
  /* Filter criterion: URL Alias: Alias */
  $handler->display->display_options['filters']['alias_56']['id'] = 'alias_56';
  $handler->display->display_options['filters']['alias_56']['table'] = 'url_alias';
  $handler->display->display_options['filters']['alias_56']['field'] = 'alias';
  $handler->display->display_options['filters']['alias_56']['relationship'] = 'loc';
  $handler->display->display_options['filters']['alias_56']['operator'] = 'not_starts';
  $handler->display->display_options['filters']['alias_56']['value'] = 'beer/';
  $handler->display->display_options['filters']['alias_56']['group'] = 1;
  /* Filter criterion: URL Alias: Alias */
  $handler->display->display_options['filters']['alias_57']['id'] = 'alias_57';
  $handler->display->display_options['filters']['alias_57']['table'] = 'url_alias';
  $handler->display->display_options['filters']['alias_57']['field'] = 'alias';
  $handler->display->display_options['filters']['alias_57']['relationship'] = 'loc';
  $handler->display->display_options['filters']['alias_57']['operator'] = '!=';
  $handler->display->display_options['filters']['alias_57']['value'] = 'wine';
  $handler->display->display_options['filters']['alias_57']['group'] = 1;
  /* Filter criterion: URL Alias: Alias */
  $handler->display->display_options['filters']['alias_58']['id'] = 'alias_58';
  $handler->display->display_options['filters']['alias_58']['table'] = 'url_alias';
  $handler->display->display_options['filters']['alias_58']['field'] = 'alias';
  $handler->display->display_options['filters']['alias_58']['relationship'] = 'loc';
  $handler->display->display_options['filters']['alias_58']['operator'] = 'not_starts';
  $handler->display->display_options['filters']['alias_58']['value'] = 'wine/';
  $handler->display->display_options['filters']['alias_58']['group'] = 1;
  /* Filter criterion: URL Alias: Alias */
  $handler->display->display_options['filters']['alias_59']['id'] = 'alias_59';
  $handler->display->display_options['filters']['alias_59']['table'] = 'url_alias';
  $handler->display->display_options['filters']['alias_59']['field'] = 'alias';
  $handler->display->display_options['filters']['alias_59']['relationship'] = 'loc';
  $handler->display->display_options['filters']['alias_59']['operator'] = '!=';
  $handler->display->display_options['filters']['alias_59']['value'] = 'wine-regions';
  $handler->display->display_options['filters']['alias_59']['group'] = 1;
  /* Filter criterion: URL Alias: Alias */
  $handler->display->display_options['filters']['alias_60']['id'] = 'alias_60';
  $handler->display->display_options['filters']['alias_60']['table'] = 'url_alias';
  $handler->display->display_options['filters']['alias_60']['field'] = 'alias';
  $handler->display->display_options['filters']['alias_60']['relationship'] = 'loc';
  $handler->display->display_options['filters']['alias_60']['operator'] = 'not_starts';
  $handler->display->display_options['filters']['alias_60']['value'] = 'wine-regions/';
  $handler->display->display_options['filters']['alias_60']['group'] = 1;
  /* Filter criterion: URL Alias: Alias */
  $handler->display->display_options['filters']['alias_61']['id'] = 'alias_61';
  $handler->display->display_options['filters']['alias_61']['table'] = 'url_alias';
  $handler->display->display_options['filters']['alias_61']['field'] = 'alias';
  $handler->display->display_options['filters']['alias_61']['relationship'] = 'loc';
  $handler->display->display_options['filters']['alias_61']['operator'] = '!=';
  $handler->display->display_options['filters']['alias_61']['value'] = 'cocktails-spirits';
  $handler->display->display_options['filters']['alias_61']['group'] = 1;
  /* Filter criterion: URL Alias: Alias */
  $handler->display->display_options['filters']['alias_62']['id'] = 'alias_62';
  $handler->display->display_options['filters']['alias_62']['table'] = 'url_alias';
  $handler->display->display_options['filters']['alias_62']['field'] = 'alias';
  $handler->display->display_options['filters']['alias_62']['relationship'] = 'loc';
  $handler->display->display_options['filters']['alias_62']['operator'] = 'not_starts';
  $handler->display->display_options['filters']['alias_62']['value'] = 'cocktails-spirits/';
  $handler->display->display_options['filters']['alias_62']['group'] = 1;
  /* Filter criterion: URL Alias: Alias */
  $handler->display->display_options['filters']['alias_63']['id'] = 'alias_63';
  $handler->display->display_options['filters']['alias_63']['table'] = 'url_alias';
  $handler->display->display_options['filters']['alias_63']['field'] = 'alias';
  $handler->display->display_options['filters']['alias_63']['relationship'] = 'loc';
  $handler->display->display_options['filters']['alias_63']['operator'] = '!=';
  $handler->display->display_options['filters']['alias_63']['value'] = 'drinks';
  $handler->display->display_options['filters']['alias_63']['group'] = 1;
  /* Filter criterion: URL Alias: Alias */
  $handler->display->display_options['filters']['alias_64']['id'] = 'alias_64';
  $handler->display->display_options['filters']['alias_64']['table'] = 'url_alias';
  $handler->display->display_options['filters']['alias_64']['field'] = 'alias';
  $handler->display->display_options['filters']['alias_64']['relationship'] = 'loc';
  $handler->display->display_options['filters']['alias_64']['operator'] = 'not_starts';
  $handler->display->display_options['filters']['alias_64']['value'] = 'drinks/';
  $handler->display->display_options['filters']['alias_64']['group'] = 1;
  /* Filter criterion: URL Alias: Alias */
  $handler->display->display_options['filters']['alias_65']['id'] = 'alias_65';
  $handler->display->display_options['filters']['alias_65']['table'] = 'url_alias';
  $handler->display->display_options['filters']['alias_65']['field'] = 'alias';
  $handler->display->display_options['filters']['alias_65']['relationship'] = 'loc';
  $handler->display->display_options['filters']['alias_65']['operator'] = '!=';
  $handler->display->display_options['filters']['alias_65']['value'] = 'coffee';
  $handler->display->display_options['filters']['alias_65']['group'] = 1;
  /* Filter criterion: URL Alias: Alias */
  $handler->display->display_options['filters']['alias_66']['id'] = 'alias_66';
  $handler->display->display_options['filters']['alias_66']['table'] = 'url_alias';
  $handler->display->display_options['filters']['alias_66']['field'] = 'alias';
  $handler->display->display_options['filters']['alias_66']['relationship'] = 'loc';
  $handler->display->display_options['filters']['alias_66']['operator'] = 'not_starts';
  $handler->display->display_options['filters']['alias_66']['value'] = 'coffee/';
  $handler->display->display_options['filters']['alias_66']['group'] = 1;
  /* Filter criterion: URL Alias: Alias */
  $handler->display->display_options['filters']['alias_67']['id'] = 'alias_67';
  $handler->display->display_options['filters']['alias_67']['table'] = 'url_alias';
  $handler->display->display_options['filters']['alias_67']['field'] = 'alias';
  $handler->display->display_options['filters']['alias_67']['relationship'] = 'loc';
  $handler->display->display_options['filters']['alias_67']['operator'] = '!=';
  $handler->display->display_options['filters']['alias_67']['value'] = 'tea';
  $handler->display->display_options['filters']['alias_67']['group'] = 1;
  /* Filter criterion: URL Alias: Alias */
  $handler->display->display_options['filters']['alias_68']['id'] = 'alias_68';
  $handler->display->display_options['filters']['alias_68']['table'] = 'url_alias';
  $handler->display->display_options['filters']['alias_68']['field'] = 'alias';
  $handler->display->display_options['filters']['alias_68']['relationship'] = 'loc';
  $handler->display->display_options['filters']['alias_68']['operator'] = 'not_starts';
  $handler->display->display_options['filters']['alias_68']['value'] = 'tea/';
  $handler->display->display_options['filters']['alias_68']['group'] = 1;
  /* Filter criterion: URL Alias: Alias */
  $handler->display->display_options['filters']['alias_69']['id'] = 'alias_69';
  $handler->display->display_options['filters']['alias_69']['table'] = 'url_alias';
  $handler->display->display_options['filters']['alias_69']['field'] = 'alias';
  $handler->display->display_options['filters']['alias_69']['relationship'] = 'loc';
  $handler->display->display_options['filters']['alias_69']['operator'] = '!=';
  $handler->display->display_options['filters']['alias_69']['value'] = 'chefs';
  $handler->display->display_options['filters']['alias_69']['group'] = 1;
  /* Filter criterion: URL Alias: Alias */
  $handler->display->display_options['filters']['alias_70']['id'] = 'alias_70';
  $handler->display->display_options['filters']['alias_70']['table'] = 'url_alias';
  $handler->display->display_options['filters']['alias_70']['field'] = 'alias';
  $handler->display->display_options['filters']['alias_70']['relationship'] = 'loc';
  $handler->display->display_options['filters']['alias_70']['operator'] = 'not_starts';
  $handler->display->display_options['filters']['alias_70']['value'] = 'chefs/';
  $handler->display->display_options['filters']['alias_70']['group'] = 1;
  /* Filter criterion: URL Alias: Alias */
  $handler->display->display_options['filters']['alias_71']['id'] = 'alias_71';
  $handler->display->display_options['filters']['alias_71']['table'] = 'url_alias';
  $handler->display->display_options['filters']['alias_71']['field'] = 'alias';
  $handler->display->display_options['filters']['alias_71']['relationship'] = 'loc';
  $handler->display->display_options['filters']['alias_71']['operator'] = '!=';
  $handler->display->display_options['filters']['alias_71']['value'] = 'contributors';
  $handler->display->display_options['filters']['alias_71']['group'] = 1;
  /* Filter criterion: URL Alias: Alias */
  $handler->display->display_options['filters']['alias_72']['id'] = 'alias_72';
  $handler->display->display_options['filters']['alias_72']['table'] = 'url_alias';
  $handler->display->display_options['filters']['alias_72']['field'] = 'alias';
  $handler->display->display_options['filters']['alias_72']['relationship'] = 'loc';
  $handler->display->display_options['filters']['alias_72']['operator'] = 'not_starts';
  $handler->display->display_options['filters']['alias_72']['value'] = 'contributors/';
  $handler->display->display_options['filters']['alias_72']['group'] = 1;
  /* Filter criterion: URL Alias: Alias */
  $handler->display->display_options['filters']['alias_73']['id'] = 'alias_73';
  $handler->display->display_options['filters']['alias_73']['table'] = 'url_alias';
  $handler->display->display_options['filters']['alias_73']['field'] = 'alias';
  $handler->display->display_options['filters']['alias_73']['relationship'] = 'loc';
  $handler->display->display_options['filters']['alias_73']['operator'] = '!=';
  $handler->display->display_options['filters']['alias_73']['value'] = 'meat-poultry';
  $handler->display->display_options['filters']['alias_73']['group'] = 1;
  /* Filter criterion: URL Alias: Alias */
  $handler->display->display_options['filters']['alias_74']['id'] = 'alias_74';
  $handler->display->display_options['filters']['alias_74']['table'] = 'url_alias';
  $handler->display->display_options['filters']['alias_74']['field'] = 'alias';
  $handler->display->display_options['filters']['alias_74']['relationship'] = 'loc';
  $handler->display->display_options['filters']['alias_74']['operator'] = 'not_starts';
  $handler->display->display_options['filters']['alias_74']['value'] = 'meat-poultry/';
  $handler->display->display_options['filters']['alias_74']['group'] = 1;
  /* Filter criterion: URL Alias: Alias */
  $handler->display->display_options['filters']['alias_75']['id'] = 'alias_75';
  $handler->display->display_options['filters']['alias_75']['table'] = 'url_alias';
  $handler->display->display_options['filters']['alias_75']['field'] = 'alias';
  $handler->display->display_options['filters']['alias_75']['relationship'] = 'loc';
  $handler->display->display_options['filters']['alias_75']['operator'] = '!=';
  $handler->display->display_options['filters']['alias_75']['value'] = 'seafood';
  $handler->display->display_options['filters']['alias_75']['group'] = 1;
  /* Filter criterion: URL Alias: Alias */
  $handler->display->display_options['filters']['alias_76']['id'] = 'alias_76';
  $handler->display->display_options['filters']['alias_76']['table'] = 'url_alias';
  $handler->display->display_options['filters']['alias_76']['field'] = 'alias';
  $handler->display->display_options['filters']['alias_76']['relationship'] = 'loc';
  $handler->display->display_options['filters']['alias_76']['operator'] = 'not_starts';
  $handler->display->display_options['filters']['alias_76']['value'] = 'seafood/';
  $handler->display->display_options['filters']['alias_76']['group'] = 1;
  /* Filter criterion: URL Alias: Alias */
  $handler->display->display_options['filters']['alias_77']['id'] = 'alias_77';
  $handler->display->display_options['filters']['alias_77']['table'] = 'url_alias';
  $handler->display->display_options['filters']['alias_77']['field'] = 'alias';
  $handler->display->display_options['filters']['alias_77']['relationship'] = 'loc';
  $handler->display->display_options['filters']['alias_77']['operator'] = '!=';
  $handler->display->display_options['filters']['alias_77']['value'] = 'fruits';
  $handler->display->display_options['filters']['alias_77']['group'] = 1;
  /* Filter criterion: URL Alias: Alias */
  $handler->display->display_options['filters']['alias_78']['id'] = 'alias_78';
  $handler->display->display_options['filters']['alias_78']['table'] = 'url_alias';
  $handler->display->display_options['filters']['alias_78']['field'] = 'alias';
  $handler->display->display_options['filters']['alias_78']['relationship'] = 'loc';
  $handler->display->display_options['filters']['alias_78']['operator'] = 'not_starts';
  $handler->display->display_options['filters']['alias_78']['value'] = 'fruits/';
  $handler->display->display_options['filters']['alias_78']['group'] = 1;
  /* Filter criterion: URL Alias: Alias */
  $handler->display->display_options['filters']['alias_79']['id'] = 'alias_79';
  $handler->display->display_options['filters']['alias_79']['table'] = 'url_alias';
  $handler->display->display_options['filters']['alias_79']['field'] = 'alias';
  $handler->display->display_options['filters']['alias_79']['relationship'] = 'loc';
  $handler->display->display_options['filters']['alias_79']['operator'] = '!=';
  $handler->display->display_options['filters']['alias_79']['value'] = 'vegetables';
  $handler->display->display_options['filters']['alias_79']['group'] = 1;
  /* Filter criterion: URL Alias: Alias */
  $handler->display->display_options['filters']['alias_80']['id'] = 'alias_80';
  $handler->display->display_options['filters']['alias_80']['table'] = 'url_alias';
  $handler->display->display_options['filters']['alias_80']['field'] = 'alias';
  $handler->display->display_options['filters']['alias_80']['relationship'] = 'loc';
  $handler->display->display_options['filters']['alias_80']['operator'] = 'not_starts';
  $handler->display->display_options['filters']['alias_80']['value'] = 'vegetables/';
  $handler->display->display_options['filters']['alias_80']['group'] = 1;
  /* Filter criterion: URL Alias: Alias */
  $handler->display->display_options['filters']['alias_81']['id'] = 'alias_81';
  $handler->display->display_options['filters']['alias_81']['table'] = 'url_alias';
  $handler->display->display_options['filters']['alias_81']['field'] = 'alias';
  $handler->display->display_options['filters']['alias_81']['relationship'] = 'loc';
  $handler->display->display_options['filters']['alias_81']['operator'] = '!=';
  $handler->display->display_options['filters']['alias_81']['value'] = 'beans-legumes';
  $handler->display->display_options['filters']['alias_81']['group'] = 1;
  /* Filter criterion: URL Alias: Alias */
  $handler->display->display_options['filters']['alias_82']['id'] = 'alias_82';
  $handler->display->display_options['filters']['alias_82']['table'] = 'url_alias';
  $handler->display->display_options['filters']['alias_82']['field'] = 'alias';
  $handler->display->display_options['filters']['alias_82']['relationship'] = 'loc';
  $handler->display->display_options['filters']['alias_82']['operator'] = 'not_starts';
  $handler->display->display_options['filters']['alias_82']['value'] = 'beans-legumes/';
  $handler->display->display_options['filters']['alias_82']['group'] = 1;
  /* Filter criterion: URL Alias: Alias */
  $handler->display->display_options['filters']['alias_83']['id'] = 'alias_83';
  $handler->display->display_options['filters']['alias_83']['table'] = 'url_alias';
  $handler->display->display_options['filters']['alias_83']['field'] = 'alias';
  $handler->display->display_options['filters']['alias_83']['relationship'] = 'loc';
  $handler->display->display_options['filters']['alias_83']['operator'] = '!=';
  $handler->display->display_options['filters']['alias_83']['value'] = 'grains';
  $handler->display->display_options['filters']['alias_83']['group'] = 1;
  /* Filter criterion: URL Alias: Alias */
  $handler->display->display_options['filters']['alias_84']['id'] = 'alias_84';
  $handler->display->display_options['filters']['alias_84']['table'] = 'url_alias';
  $handler->display->display_options['filters']['alias_84']['field'] = 'alias';
  $handler->display->display_options['filters']['alias_84']['relationship'] = 'loc';
  $handler->display->display_options['filters']['alias_84']['operator'] = 'not_starts';
  $handler->display->display_options['filters']['alias_84']['value'] = 'grains/';
  $handler->display->display_options['filters']['alias_84']['group'] = 1;
  /* Filter criterion: URL Alias: Alias */
  $handler->display->display_options['filters']['alias_85']['id'] = 'alias_85';
  $handler->display->display_options['filters']['alias_85']['table'] = 'url_alias';
  $handler->display->display_options['filters']['alias_85']['field'] = 'alias';
  $handler->display->display_options['filters']['alias_85']['relationship'] = 'loc';
  $handler->display->display_options['filters']['alias_85']['operator'] = '!=';
  $handler->display->display_options['filters']['alias_85']['value'] = 'nuts-seeds';
  $handler->display->display_options['filters']['alias_85']['group'] = 1;
  /* Filter criterion: URL Alias: Alias */
  $handler->display->display_options['filters']['alias_86']['id'] = 'alias_86';
  $handler->display->display_options['filters']['alias_86']['table'] = 'url_alias';
  $handler->display->display_options['filters']['alias_86']['field'] = 'alias';
  $handler->display->display_options['filters']['alias_86']['relationship'] = 'loc';
  $handler->display->display_options['filters']['alias_86']['operator'] = 'not_starts';
  $handler->display->display_options['filters']['alias_86']['value'] = 'nuts-seeds/';
  $handler->display->display_options['filters']['alias_86']['group'] = 1;
  /* Filter criterion: URL Alias: Alias */
  $handler->display->display_options['filters']['alias_87']['id'] = 'alias_87';
  $handler->display->display_options['filters']['alias_87']['table'] = 'url_alias';
  $handler->display->display_options['filters']['alias_87']['field'] = 'alias';
  $handler->display->display_options['filters']['alias_87']['relationship'] = 'loc';
  $handler->display->display_options['filters']['alias_87']['operator'] = '!=';
  $handler->display->display_options['filters']['alias_87']['value'] = 'seasonings';
  $handler->display->display_options['filters']['alias_87']['group'] = 1;
  /* Filter criterion: URL Alias: Alias */
  $handler->display->display_options['filters']['alias_88']['id'] = 'alias_88';
  $handler->display->display_options['filters']['alias_88']['table'] = 'url_alias';
  $handler->display->display_options['filters']['alias_88']['field'] = 'alias';
  $handler->display->display_options['filters']['alias_88']['relationship'] = 'loc';
  $handler->display->display_options['filters']['alias_88']['operator'] = 'not_starts';
  $handler->display->display_options['filters']['alias_88']['value'] = 'seasonings/';
  $handler->display->display_options['filters']['alias_88']['group'] = 1;
  /* Filter criterion: URL Alias: Alias */
  $handler->display->display_options['filters']['alias_89']['id'] = 'alias_89';
  $handler->display->display_options['filters']['alias_89']['table'] = 'url_alias';
  $handler->display->display_options['filters']['alias_89']['field'] = 'alias';
  $handler->display->display_options['filters']['alias_89']['relationship'] = 'loc';
  $handler->display->display_options['filters']['alias_89']['operator'] = '!=';
  $handler->display->display_options['filters']['alias_89']['value'] = 'breakfast-brunch';
  $handler->display->display_options['filters']['alias_89']['group'] = 1;
  /* Filter criterion: URL Alias: Alias */
  $handler->display->display_options['filters']['alias_90']['id'] = 'alias_90';
  $handler->display->display_options['filters']['alias_90']['table'] = 'url_alias';
  $handler->display->display_options['filters']['alias_90']['field'] = 'alias';
  $handler->display->display_options['filters']['alias_90']['relationship'] = 'loc';
  $handler->display->display_options['filters']['alias_90']['operator'] = 'not_starts';
  $handler->display->display_options['filters']['alias_90']['value'] = 'breakfast-brunch/';
  $handler->display->display_options['filters']['alias_90']['group'] = 1;
  /* Filter criterion: URL Alias: Alias */
  $handler->display->display_options['filters']['alias_91']['id'] = 'alias_91';
  $handler->display->display_options['filters']['alias_91']['table'] = 'url_alias';
  $handler->display->display_options['filters']['alias_91']['field'] = 'alias';
  $handler->display->display_options['filters']['alias_91']['relationship'] = 'loc';
  $handler->display->display_options['filters']['alias_91']['operator'] = '!=';
  $handler->display->display_options['filters']['alias_91']['value'] = 'snacks';
  $handler->display->display_options['filters']['alias_91']['group'] = 1;
  /* Filter criterion: URL Alias: Alias */
  $handler->display->display_options['filters']['alias_92']['id'] = 'alias_92';
  $handler->display->display_options['filters']['alias_92']['table'] = 'url_alias';
  $handler->display->display_options['filters']['alias_92']['field'] = 'alias';
  $handler->display->display_options['filters']['alias_92']['relationship'] = 'loc';
  $handler->display->display_options['filters']['alias_92']['operator'] = 'not_starts';
  $handler->display->display_options['filters']['alias_92']['value'] = 'snacks/';
  $handler->display->display_options['filters']['alias_92']['group'] = 1;
  /* Filter criterion: URL Alias: Alias */
  $handler->display->display_options['filters']['alias_93']['id'] = 'alias_93';
  $handler->display->display_options['filters']['alias_93']['table'] = 'url_alias';
  $handler->display->display_options['filters']['alias_93']['field'] = 'alias';
  $handler->display->display_options['filters']['alias_93']['relationship'] = 'loc';
  $handler->display->display_options['filters']['alias_93']['operator'] = '!=';
  $handler->display->display_options['filters']['alias_93']['value'] = 'appetizers';
  $handler->display->display_options['filters']['alias_93']['group'] = 1;
  /* Filter criterion: URL Alias: Alias */
  $handler->display->display_options['filters']['alias_94']['id'] = 'alias_94';
  $handler->display->display_options['filters']['alias_94']['table'] = 'url_alias';
  $handler->display->display_options['filters']['alias_94']['field'] = 'alias';
  $handler->display->display_options['filters']['alias_94']['relationship'] = 'loc';
  $handler->display->display_options['filters']['alias_94']['operator'] = 'not_starts';
  $handler->display->display_options['filters']['alias_94']['value'] = 'appetizers/';
  $handler->display->display_options['filters']['alias_94']['group'] = 1;
  /* Filter criterion: URL Alias: Alias */
  $handler->display->display_options['filters']['alias_95']['id'] = 'alias_95';
  $handler->display->display_options['filters']['alias_95']['table'] = 'url_alias';
  $handler->display->display_options['filters']['alias_95']['field'] = 'alias';
  $handler->display->display_options['filters']['alias_95']['relationship'] = 'loc';
  $handler->display->display_options['filters']['alias_95']['operator'] = '!=';
  $handler->display->display_options['filters']['alias_95']['value'] = 'desserts';
  $handler->display->display_options['filters']['alias_95']['group'] = 1;
  /* Filter criterion: URL Alias: Alias */
  $handler->display->display_options['filters']['alias_96']['id'] = 'alias_96';
  $handler->display->display_options['filters']['alias_96']['table'] = 'url_alias';
  $handler->display->display_options['filters']['alias_96']['field'] = 'alias';
  $handler->display->display_options['filters']['alias_96']['relationship'] = 'loc';
  $handler->display->display_options['filters']['alias_96']['operator'] = 'not_starts';
  $handler->display->display_options['filters']['alias_96']['value'] = 'desserts/';
  $handler->display->display_options['filters']['alias_96']['group'] = 1;
  /* Filter criterion: URL Alias: Alias */
  $handler->display->display_options['filters']['alias_97']['id'] = 'alias_97';
  $handler->display->display_options['filters']['alias_97']['table'] = 'url_alias';
  $handler->display->display_options['filters']['alias_97']['field'] = 'alias';
  $handler->display->display_options['filters']['alias_97']['relationship'] = 'loc';
  $handler->display->display_options['filters']['alias_97']['operator'] = '!=';
  $handler->display->display_options['filters']['alias_97']['value'] = 'bread-dough';
  $handler->display->display_options['filters']['alias_97']['group'] = 1;
  /* Filter criterion: URL Alias: Alias */
  $handler->display->display_options['filters']['alias_98']['id'] = 'alias_98';
  $handler->display->display_options['filters']['alias_98']['table'] = 'url_alias';
  $handler->display->display_options['filters']['alias_98']['field'] = 'alias';
  $handler->display->display_options['filters']['alias_98']['relationship'] = 'loc';
  $handler->display->display_options['filters']['alias_98']['operator'] = 'not_starts';
  $handler->display->display_options['filters']['alias_98']['value'] = 'bread-dough/';
  $handler->display->display_options['filters']['alias_98']['group'] = 1;
  /* Filter criterion: URL Alias: Alias */
  $handler->display->display_options['filters']['alias_99']['id'] = 'alias_99';
  $handler->display->display_options['filters']['alias_99']['table'] = 'url_alias';
  $handler->display->display_options['filters']['alias_99']['field'] = 'alias';
  $handler->display->display_options['filters']['alias_99']['relationship'] = 'loc';
  $handler->display->display_options['filters']['alias_99']['operator'] = '!=';
  $handler->display->display_options['filters']['alias_99']['value'] = 'salads';
  $handler->display->display_options['filters']['alias_99']['group'] = 1;
  /* Filter criterion: URL Alias: Alias */
  $handler->display->display_options['filters']['alias_100']['id'] = 'alias_100';
  $handler->display->display_options['filters']['alias_100']['table'] = 'url_alias';
  $handler->display->display_options['filters']['alias_100']['field'] = 'alias';
  $handler->display->display_options['filters']['alias_100']['relationship'] = 'loc';
  $handler->display->display_options['filters']['alias_100']['operator'] = 'not_starts';
  $handler->display->display_options['filters']['alias_100']['value'] = 'salads/';
  $handler->display->display_options['filters']['alias_100']['group'] = 1;
  /* Filter criterion: URL Alias: Alias */
  $handler->display->display_options['filters']['alias_101']['id'] = 'alias_101';
  $handler->display->display_options['filters']['alias_101']['table'] = 'url_alias';
  $handler->display->display_options['filters']['alias_101']['field'] = 'alias';
  $handler->display->display_options['filters']['alias_101']['relationship'] = 'loc';
  $handler->display->display_options['filters']['alias_101']['operator'] = '!=';
  $handler->display->display_options['filters']['alias_101']['value'] = 'comfort-food';
  $handler->display->display_options['filters']['alias_101']['group'] = 1;
  /* Filter criterion: URL Alias: Alias */
  $handler->display->display_options['filters']['alias_102']['id'] = 'alias_102';
  $handler->display->display_options['filters']['alias_102']['table'] = 'url_alias';
  $handler->display->display_options['filters']['alias_102']['field'] = 'alias';
  $handler->display->display_options['filters']['alias_102']['relationship'] = 'loc';
  $handler->display->display_options['filters']['alias_102']['operator'] = 'not_starts';
  $handler->display->display_options['filters']['alias_102']['value'] = 'comfort-food/';
  $handler->display->display_options['filters']['alias_102']['group'] = 1;
  /* Filter criterion: URL Alias: Alias */
  $handler->display->display_options['filters']['alias_103']['id'] = 'alias_103';
  $handler->display->display_options['filters']['alias_103']['table'] = 'url_alias';
  $handler->display->display_options['filters']['alias_103']['field'] = 'alias';
  $handler->display->display_options['filters']['alias_103']['relationship'] = 'loc';
  $handler->display->display_options['filters']['alias_103']['operator'] = '!=';
  $handler->display->display_options['filters']['alias_103']['value'] = 'soup';
  $handler->display->display_options['filters']['alias_103']['group'] = 1;
  /* Filter criterion: URL Alias: Alias */
  $handler->display->display_options['filters']['alias_104']['id'] = 'alias_104';
  $handler->display->display_options['filters']['alias_104']['table'] = 'url_alias';
  $handler->display->display_options['filters']['alias_104']['field'] = 'alias';
  $handler->display->display_options['filters']['alias_104']['relationship'] = 'loc';
  $handler->display->display_options['filters']['alias_104']['operator'] = 'not_starts';
  $handler->display->display_options['filters']['alias_104']['value'] = 'soup/';
  $handler->display->display_options['filters']['alias_104']['group'] = 1;
  /* Filter criterion: URL Alias: Alias */
  $handler->display->display_options['filters']['alias_105']['id'] = 'alias_105';
  $handler->display->display_options['filters']['alias_105']['table'] = 'url_alias';
  $handler->display->display_options['filters']['alias_105']['field'] = 'alias';
  $handler->display->display_options['filters']['alias_105']['relationship'] = 'loc';
  $handler->display->display_options['filters']['alias_105']['operator'] = '!=';
  $handler->display->display_options['filters']['alias_105']['value'] = 'sandwiches-wraps';
  $handler->display->display_options['filters']['alias_105']['group'] = 1;
  /* Filter criterion: URL Alias: Alias */
  $handler->display->display_options['filters']['alias_106']['id'] = 'alias_106';
  $handler->display->display_options['filters']['alias_106']['table'] = 'url_alias';
  $handler->display->display_options['filters']['alias_106']['field'] = 'alias';
  $handler->display->display_options['filters']['alias_106']['relationship'] = 'loc';
  $handler->display->display_options['filters']['alias_106']['operator'] = 'not_starts';
  $handler->display->display_options['filters']['alias_106']['value'] = 'sandwiches-wraps/';
  $handler->display->display_options['filters']['alias_106']['group'] = 1;
  /* Filter criterion: URL Alias: Alias */
  $handler->display->display_options['filters']['alias_107']['id'] = 'alias_107';
  $handler->display->display_options['filters']['alias_107']['table'] = 'url_alias';
  $handler->display->display_options['filters']['alias_107']['field'] = 'alias';
  $handler->display->display_options['filters']['alias_107']['relationship'] = 'loc';
  $handler->display->display_options['filters']['alias_107']['operator'] = '!=';
  $handler->display->display_options['filters']['alias_107']['value'] = 'pasta-noodles';
  $handler->display->display_options['filters']['alias_107']['group'] = 1;
  /* Filter criterion: URL Alias: Alias */
  $handler->display->display_options['filters']['alias_108']['id'] = 'alias_108';
  $handler->display->display_options['filters']['alias_108']['table'] = 'url_alias';
  $handler->display->display_options['filters']['alias_108']['field'] = 'alias';
  $handler->display->display_options['filters']['alias_108']['relationship'] = 'loc';
  $handler->display->display_options['filters']['alias_108']['operator'] = 'not_starts';
  $handler->display->display_options['filters']['alias_108']['value'] = 'pasta-noodles/';
  $handler->display->display_options['filters']['alias_108']['group'] = 1;
  /* Filter criterion: URL Alias: Alias */
  $handler->display->display_options['filters']['alias_109']['id'] = 'alias_109';
  $handler->display->display_options['filters']['alias_109']['table'] = 'url_alias';
  $handler->display->display_options['filters']['alias_109']['field'] = 'alias';
  $handler->display->display_options['filters']['alias_109']['relationship'] = 'loc';
  $handler->display->display_options['filters']['alias_109']['operator'] = '!=';
  $handler->display->display_options['filters']['alias_109']['value'] = 'side-dishes';
  $handler->display->display_options['filters']['alias_109']['group'] = 1;
  /* Filter criterion: URL Alias: Alias */
  $handler->display->display_options['filters']['alias_110']['id'] = 'alias_110';
  $handler->display->display_options['filters']['alias_110']['table'] = 'url_alias';
  $handler->display->display_options['filters']['alias_110']['field'] = 'alias';
  $handler->display->display_options['filters']['alias_110']['relationship'] = 'loc';
  $handler->display->display_options['filters']['alias_110']['operator'] = 'not_starts';
  $handler->display->display_options['filters']['alias_110']['value'] = 'side-dishes/';
  $handler->display->display_options['filters']['alias_110']['group'] = 1;
  /* Filter criterion: URL Alias: Alias */
  $handler->display->display_options['filters']['alias_111']['id'] = 'alias_111';
  $handler->display->display_options['filters']['alias_111']['table'] = 'url_alias';
  $handler->display->display_options['filters']['alias_111']['field'] = 'alias';
  $handler->display->display_options['filters']['alias_111']['relationship'] = 'loc';
  $handler->display->display_options['filters']['alias_111']['operator'] = '!=';
  $handler->display->display_options['filters']['alias_111']['value'] = 'condiments';
  $handler->display->display_options['filters']['alias_111']['group'] = 1;
  /* Filter criterion: URL Alias: Alias */
  $handler->display->display_options['filters']['alias_112']['id'] = 'alias_112';
  $handler->display->display_options['filters']['alias_112']['table'] = 'url_alias';
  $handler->display->display_options['filters']['alias_112']['field'] = 'alias';
  $handler->display->display_options['filters']['alias_112']['relationship'] = 'loc';
  $handler->display->display_options['filters']['alias_112']['operator'] = 'not_starts';
  $handler->display->display_options['filters']['alias_112']['value'] = 'condiments/';
  $handler->display->display_options['filters']['alias_112']['group'] = 1;
  /* Filter criterion: URL Alias: Alias */
  $handler->display->display_options['filters']['alias_113']['id'] = 'alias_113';
  $handler->display->display_options['filters']['alias_113']['table'] = 'url_alias';
  $handler->display->display_options['filters']['alias_113']['field'] = 'alias';
  $handler->display->display_options['filters']['alias_113']['relationship'] = 'loc';
  $handler->display->display_options['filters']['alias_113']['operator'] = '!=';
  $handler->display->display_options['filters']['alias_113']['value'] = 'special-diets';
  $handler->display->display_options['filters']['alias_113']['group'] = 1;
  /* Filter criterion: URL Alias: Alias */
  $handler->display->display_options['filters']['alias_114']['id'] = 'alias_114';
  $handler->display->display_options['filters']['alias_114']['table'] = 'url_alias';
  $handler->display->display_options['filters']['alias_114']['field'] = 'alias';
  $handler->display->display_options['filters']['alias_114']['relationship'] = 'loc';
  $handler->display->display_options['filters']['alias_114']['operator'] = 'not_starts';
  $handler->display->display_options['filters']['alias_114']['value'] = 'special-diets/';
  $handler->display->display_options['filters']['alias_114']['group'] = 1;
  /* Filter criterion: URL Alias: Alias */
  $handler->display->display_options['filters']['alias_115']['id'] = 'alias_115';
  $handler->display->display_options['filters']['alias_115']['table'] = 'url_alias';
  $handler->display->display_options['filters']['alias_115']['field'] = 'alias';
  $handler->display->display_options['filters']['alias_115']['relationship'] = 'loc';
  $handler->display->display_options['filters']['alias_115']['operator'] = '!=';
  $handler->display->display_options['filters']['alias_115']['value'] = 'health';
  $handler->display->display_options['filters']['alias_115']['group'] = 1;
  /* Filter criterion: URL Alias: Alias */
  $handler->display->display_options['filters']['alias_116']['id'] = 'alias_116';
  $handler->display->display_options['filters']['alias_116']['table'] = 'url_alias';
  $handler->display->display_options['filters']['alias_116']['field'] = 'alias';
  $handler->display->display_options['filters']['alias_116']['relationship'] = 'loc';
  $handler->display->display_options['filters']['alias_116']['operator'] = 'not_starts';
  $handler->display->display_options['filters']['alias_116']['value'] = 'health/';
  $handler->display->display_options['filters']['alias_116']['group'] = 1;
  /* Filter criterion: URL Alias: Alias */
  $handler->display->display_options['filters']['alias_117']['id'] = 'alias_117';
  $handler->display->display_options['filters']['alias_117']['table'] = 'url_alias';
  $handler->display->display_options['filters']['alias_117']['field'] = 'alias';
  $handler->display->display_options['filters']['alias_117']['relationship'] = 'loc';
  $handler->display->display_options['filters']['alias_117']['operator'] = '!=';
  $handler->display->display_options['filters']['alias_117']['value'] = 'how-to';
  $handler->display->display_options['filters']['alias_117']['group'] = 1;
  /* Filter criterion: URL Alias: Alias */
  $handler->display->display_options['filters']['alias_118']['id'] = 'alias_118';
  $handler->display->display_options['filters']['alias_118']['table'] = 'url_alias';
  $handler->display->display_options['filters']['alias_118']['field'] = 'alias';
  $handler->display->display_options['filters']['alias_118']['relationship'] = 'loc';
  $handler->display->display_options['filters']['alias_118']['operator'] = 'not_starts';
  $handler->display->display_options['filters']['alias_118']['value'] = 'how-to/';
  $handler->display->display_options['filters']['alias_118']['group'] = 1;
  /* Filter criterion: URL Alias: Alias */
  $handler->display->display_options['filters']['alias_119']['id'] = 'alias_119';
  $handler->display->display_options['filters']['alias_119']['table'] = 'url_alias';
  $handler->display->display_options['filters']['alias_119']['field'] = 'alias';
  $handler->display->display_options['filters']['alias_119']['relationship'] = 'loc';
  $handler->display->display_options['filters']['alias_119']['operator'] = '!=';
  $handler->display->display_options['filters']['alias_119']['value'] = 'cooking-techniques';
  $handler->display->display_options['filters']['alias_119']['group'] = 1;
  /* Filter criterion: URL Alias: Alias */
  $handler->display->display_options['filters']['alias_120']['id'] = 'alias_120';
  $handler->display->display_options['filters']['alias_120']['table'] = 'url_alias';
  $handler->display->display_options['filters']['alias_120']['field'] = 'alias';
  $handler->display->display_options['filters']['alias_120']['relationship'] = 'loc';
  $handler->display->display_options['filters']['alias_120']['operator'] = 'not_starts';
  $handler->display->display_options['filters']['alias_120']['value'] = 'cooking-techniques/';
  $handler->display->display_options['filters']['alias_120']['group'] = 1;
  /* Filter criterion: URL Alias: Alias */
  $handler->display->display_options['filters']['alias_121']['id'] = 'alias_121';
  $handler->display->display_options['filters']['alias_121']['table'] = 'url_alias';
  $handler->display->display_options['filters']['alias_121']['field'] = 'alias';
  $handler->display->display_options['filters']['alias_121']['relationship'] = 'loc';
  $handler->display->display_options['filters']['alias_121']['operator'] = '!=';
  $handler->display->display_options['filters']['alias_121']['value'] = 'lifestyle';
  $handler->display->display_options['filters']['alias_121']['group'] = 1;
  /* Filter criterion: URL Alias: Alias */
  $handler->display->display_options['filters']['alias_122']['id'] = 'alias_122';
  $handler->display->display_options['filters']['alias_122']['table'] = 'url_alias';
  $handler->display->display_options['filters']['alias_122']['field'] = 'alias';
  $handler->display->display_options['filters']['alias_122']['relationship'] = 'loc';
  $handler->display->display_options['filters']['alias_122']['operator'] = 'not_starts';
  $handler->display->display_options['filters']['alias_122']['value'] = 'lifestyle/';
  $handler->display->display_options['filters']['alias_122']['group'] = 1;
  /* Filter criterion: URL Alias: Alias */
  $handler->display->display_options['filters']['alias_123']['id'] = 'alias_123';
  $handler->display->display_options['filters']['alias_123']['table'] = 'url_alias';
  $handler->display->display_options['filters']['alias_123']['field'] = 'alias';
  $handler->display->display_options['filters']['alias_123']['relationship'] = 'loc';
  $handler->display->display_options['filters']['alias_123']['operator'] = '!=';
  $handler->display->display_options['filters']['alias_123']['value'] = 'travel';
  $handler->display->display_options['filters']['alias_123']['group'] = 1;
  /* Filter criterion: URL Alias: Alias */
  $handler->display->display_options['filters']['alias_124']['id'] = 'alias_124';
  $handler->display->display_options['filters']['alias_124']['table'] = 'url_alias';
  $handler->display->display_options['filters']['alias_124']['field'] = 'alias';
  $handler->display->display_options['filters']['alias_124']['relationship'] = 'loc';
  $handler->display->display_options['filters']['alias_124']['operator'] = 'not_starts';
  $handler->display->display_options['filters']['alias_124']['value'] = 'travel/';
  $handler->display->display_options['filters']['alias_124']['group'] = 1;
  /* Filter criterion: URL Alias: Alias */
  $handler->display->display_options['filters']['alias_125']['id'] = 'alias_125';
  $handler->display->display_options['filters']['alias_125']['table'] = 'url_alias';
  $handler->display->display_options['filters']['alias_125']['field'] = 'alias';
  $handler->display->display_options['filters']['alias_125']['relationship'] = 'loc';
  $handler->display->display_options['filters']['alias_125']['operator'] = '!=';
  $handler->display->display_options['filters']['alias_125']['value'] = 'news';
  $handler->display->display_options['filters']['alias_125']['group'] = 1;
  /* Filter criterion: URL Alias: Alias */
  $handler->display->display_options['filters']['alias_126']['id'] = 'alias_126';
  $handler->display->display_options['filters']['alias_126']['table'] = 'url_alias';
  $handler->display->display_options['filters']['alias_126']['field'] = 'alias';
  $handler->display->display_options['filters']['alias_126']['relationship'] = 'loc';
  $handler->display->display_options['filters']['alias_126']['operator'] = 'not_starts';
  $handler->display->display_options['filters']['alias_126']['value'] = 'news/';
  $handler->display->display_options['filters']['alias_126']['group'] = 1;
  /* Filter criterion: URL Alias: Alias */
  $handler->display->display_options['filters']['alias_1']['id'] = 'alias_1';
  $handler->display->display_options['filters']['alias_1']['table'] = 'url_alias';
  $handler->display->display_options['filters']['alias_1']['field'] = 'alias';
  $handler->display->display_options['filters']['alias_1']['relationship'] = 'loc';
  $handler->display->display_options['filters']['alias_1']['operator'] = '!=';
  $handler->display->display_options['filters']['alias_1']['value'] = 'events';
  $handler->display->display_options['filters']['alias_1']['group'] = 1;
  /* Filter criterion: URL Alias: Alias */
  $handler->display->display_options['filters']['alias']['id'] = 'alias';
  $handler->display->display_options['filters']['alias']['table'] = 'url_alias';
  $handler->display->display_options['filters']['alias']['field'] = 'alias';
  $handler->display->display_options['filters']['alias']['relationship'] = 'loc';
  $handler->display->display_options['filters']['alias']['operator'] = 'not_starts';
  $handler->display->display_options['filters']['alias']['value'] = 'events/';
  $handler->display->display_options['filters']['alias']['group'] = 1;
  /* Filter criterion: URL Alias: Alias */
  $handler->display->display_options['filters']['alias_2']['id'] = 'alias_2';
  $handler->display->display_options['filters']['alias_2']['table'] = 'url_alias';
  $handler->display->display_options['filters']['alias_2']['field'] = 'alias';
  $handler->display->display_options['filters']['alias_2']['relationship'] = 'loc';
  $handler->display->display_options['filters']['alias_2']['operator'] = '!=';
  $handler->display->display_options['filters']['alias_2']['value'] = 'holidays-events';
  $handler->display->display_options['filters']['alias_2']['group'] = 1;
  /* Filter criterion: URL Alias: Alias */
  $handler->display->display_options['filters']['alias_3']['id'] = 'alias_3';
  $handler->display->display_options['filters']['alias_3']['table'] = 'url_alias';
  $handler->display->display_options['filters']['alias_3']['field'] = 'alias';
  $handler->display->display_options['filters']['alias_3']['relationship'] = 'loc';
  $handler->display->display_options['filters']['alias_3']['operator'] = 'not_starts';
  $handler->display->display_options['filters']['alias_3']['value'] = 'holidays-events/';
  $handler->display->display_options['filters']['alias_3']['group'] = 1;
  /* Filter criterion: URL Alias: Alias */
  $handler->display->display_options['filters']['alias_4']['id'] = 'alias_4';
  $handler->display->display_options['filters']['alias_4']['table'] = 'url_alias';
  $handler->display->display_options['filters']['alias_4']['field'] = 'alias';
  $handler->display->display_options['filters']['alias_4']['relationship'] = 'loc';
  $handler->display->display_options['filters']['alias_4']['operator'] = '!=';
  $handler->display->display_options['filters']['alias_4']['value'] = 'super-bowl-recipes';
  $handler->display->display_options['filters']['alias_4']['group'] = 1;
  /* Filter criterion: URL Alias: Alias */
  $handler->display->display_options['filters']['alias_5']['id'] = 'alias_5';
  $handler->display->display_options['filters']['alias_5']['table'] = 'url_alias';
  $handler->display->display_options['filters']['alias_5']['field'] = 'alias';
  $handler->display->display_options['filters']['alias_5']['relationship'] = 'loc';
  $handler->display->display_options['filters']['alias_5']['operator'] = 'not_starts';
  $handler->display->display_options['filters']['alias_5']['value'] = 'super-bowl-recipes/';
  $handler->display->display_options['filters']['alias_5']['group'] = 1;
  /* Filter criterion: URL Alias: Alias */
  $handler->display->display_options['filters']['alias_6']['id'] = 'alias_6';
  $handler->display->display_options['filters']['alias_6']['table'] = 'url_alias';
  $handler->display->display_options['filters']['alias_6']['field'] = 'alias';
  $handler->display->display_options['filters']['alias_6']['relationship'] = 'loc';
  $handler->display->display_options['filters']['alias_6']['operator'] = '!=';
  $handler->display->display_options['filters']['alias_6']['value'] = 'valentines-day';
  $handler->display->display_options['filters']['alias_6']['group'] = 1;
  /* Filter criterion: URL Alias: Alias */
  $handler->display->display_options['filters']['alias_7']['id'] = 'alias_7';
  $handler->display->display_options['filters']['alias_7']['table'] = 'url_alias';
  $handler->display->display_options['filters']['alias_7']['field'] = 'alias';
  $handler->display->display_options['filters']['alias_7']['relationship'] = 'loc';
  $handler->display->display_options['filters']['alias_7']['operator'] = 'not_starts';
  $handler->display->display_options['filters']['alias_7']['value'] = 'valentines-day/';
  $handler->display->display_options['filters']['alias_7']['group'] = 1;
  /* Filter criterion: URL Alias: Alias */
  $handler->display->display_options['filters']['alias_8']['id'] = 'alias_8';
  $handler->display->display_options['filters']['alias_8']['table'] = 'url_alias';
  $handler->display->display_options['filters']['alias_8']['field'] = 'alias';
  $handler->display->display_options['filters']['alias_8']['relationship'] = 'loc';
  $handler->display->display_options['filters']['alias_8']['operator'] = '!=';
  $handler->display->display_options['filters']['alias_8']['value'] = 'chinese-new-year';
  $handler->display->display_options['filters']['alias_8']['group'] = 1;
  /* Filter criterion: URL Alias: Alias */
  $handler->display->display_options['filters']['alias_9']['id'] = 'alias_9';
  $handler->display->display_options['filters']['alias_9']['table'] = 'url_alias';
  $handler->display->display_options['filters']['alias_9']['field'] = 'alias';
  $handler->display->display_options['filters']['alias_9']['relationship'] = 'loc';
  $handler->display->display_options['filters']['alias_9']['operator'] = 'not_starts';
  $handler->display->display_options['filters']['alias_9']['value'] = 'chinese-new-year/';
  $handler->display->display_options['filters']['alias_9']['group'] = 1;
  /* Filter criterion: URL Alias: Alias */
  $handler->display->display_options['filters']['alias_10']['id'] = 'alias_10';
  $handler->display->display_options['filters']['alias_10']['table'] = 'url_alias';
  $handler->display->display_options['filters']['alias_10']['field'] = 'alias';
  $handler->display->display_options['filters']['alias_10']['relationship'] = 'loc';
  $handler->display->display_options['filters']['alias_10']['operator'] = '!=';
  $handler->display->display_options['filters']['alias_10']['value'] = 'mardi-gras-recipes';
  $handler->display->display_options['filters']['alias_10']['group'] = 1;
  /* Filter criterion: URL Alias: Alias */
  $handler->display->display_options['filters']['alias_11']['id'] = 'alias_11';
  $handler->display->display_options['filters']['alias_11']['table'] = 'url_alias';
  $handler->display->display_options['filters']['alias_11']['field'] = 'alias';
  $handler->display->display_options['filters']['alias_11']['relationship'] = 'loc';
  $handler->display->display_options['filters']['alias_11']['operator'] = 'not_starts';
  $handler->display->display_options['filters']['alias_11']['value'] = 'mardi-gras-recipes/';
  $handler->display->display_options['filters']['alias_11']['group'] = 1;
  /* Filter criterion: URL Alias: Alias */
  $handler->display->display_options['filters']['alias_12']['id'] = 'alias_12';
  $handler->display->display_options['filters']['alias_12']['table'] = 'url_alias';
  $handler->display->display_options['filters']['alias_12']['field'] = 'alias';
  $handler->display->display_options['filters']['alias_12']['relationship'] = 'loc';
  $handler->display->display_options['filters']['alias_12']['operator'] = '!=';
  $handler->display->display_options['filters']['alias_12']['value'] = 'memorial-day-recipes';
  $handler->display->display_options['filters']['alias_12']['group'] = 1;
  /* Filter criterion: URL Alias: Alias */
  $handler->display->display_options['filters']['alias_13']['id'] = 'alias_13';
  $handler->display->display_options['filters']['alias_13']['table'] = 'url_alias';
  $handler->display->display_options['filters']['alias_13']['field'] = 'alias';
  $handler->display->display_options['filters']['alias_13']['relationship'] = 'loc';
  $handler->display->display_options['filters']['alias_13']['operator'] = 'not_starts';
  $handler->display->display_options['filters']['alias_13']['value'] = 'memorial-day-recipes/';
  $handler->display->display_options['filters']['alias_13']['group'] = 1;
  /* Filter criterion: URL Alias: Alias */
  $handler->display->display_options['filters']['alias_14']['id'] = 'alias_14';
  $handler->display->display_options['filters']['alias_14']['table'] = 'url_alias';
  $handler->display->display_options['filters']['alias_14']['field'] = 'alias';
  $handler->display->display_options['filters']['alias_14']['relationship'] = 'loc';
  $handler->display->display_options['filters']['alias_14']['operator'] = '!=';
  $handler->display->display_options['filters']['alias_14']['value'] = 'olympic-party';
  $handler->display->display_options['filters']['alias_14']['group'] = 1;
  /* Filter criterion: URL Alias: Alias */
  $handler->display->display_options['filters']['alias_15']['id'] = 'alias_15';
  $handler->display->display_options['filters']['alias_15']['table'] = 'url_alias';
  $handler->display->display_options['filters']['alias_15']['field'] = 'alias';
  $handler->display->display_options['filters']['alias_15']['relationship'] = 'loc';
  $handler->display->display_options['filters']['alias_15']['operator'] = 'not_starts';
  $handler->display->display_options['filters']['alias_15']['value'] = 'olympic-party/';
  $handler->display->display_options['filters']['alias_15']['group'] = 1;
  /* Filter criterion: URL Alias: Alias */
  $handler->display->display_options['filters']['alias_16']['id'] = 'alias_16';
  $handler->display->display_options['filters']['alias_16']['table'] = 'url_alias';
  $handler->display->display_options['filters']['alias_16']['field'] = 'alias';
  $handler->display->display_options['filters']['alias_16']['relationship'] = 'loc';
  $handler->display->display_options['filters']['alias_16']['operator'] = '!=';
  $handler->display->display_options['filters']['alias_16']['value'] = 'fathers-day-recipes';
  $handler->display->display_options['filters']['alias_16']['group'] = 1;
  /* Filter criterion: URL Alias: Alias */
  $handler->display->display_options['filters']['alias_17']['id'] = 'alias_17';
  $handler->display->display_options['filters']['alias_17']['table'] = 'url_alias';
  $handler->display->display_options['filters']['alias_17']['field'] = 'alias';
  $handler->display->display_options['filters']['alias_17']['relationship'] = 'loc';
  $handler->display->display_options['filters']['alias_17']['operator'] = 'not_starts';
  $handler->display->display_options['filters']['alias_17']['value'] = 'fathers-day-recipes/';
  $handler->display->display_options['filters']['alias_17']['group'] = 1;
  /* Filter criterion: URL Alias: Alias */
  $handler->display->display_options['filters']['alias_18']['id'] = 'alias_18';
  $handler->display->display_options['filters']['alias_18']['table'] = 'url_alias';
  $handler->display->display_options['filters']['alias_18']['field'] = 'alias';
  $handler->display->display_options['filters']['alias_18']['relationship'] = 'loc';
  $handler->display->display_options['filters']['alias_18']['operator'] = '!=';
  $handler->display->display_options['filters']['alias_18']['value'] = 'passover-recipes';
  $handler->display->display_options['filters']['alias_18']['group'] = 1;
  /* Filter criterion: URL Alias: Alias */
  $handler->display->display_options['filters']['alias_19']['id'] = 'alias_19';
  $handler->display->display_options['filters']['alias_19']['table'] = 'url_alias';
  $handler->display->display_options['filters']['alias_19']['field'] = 'alias';
  $handler->display->display_options['filters']['alias_19']['relationship'] = 'loc';
  $handler->display->display_options['filters']['alias_19']['operator'] = 'not_starts';
  $handler->display->display_options['filters']['alias_19']['value'] = 'passover-recipes/';
  $handler->display->display_options['filters']['alias_19']['group'] = 1;
  /* Filter criterion: URL Alias: Alias */
  $handler->display->display_options['filters']['alias_20']['id'] = 'alias_20';
  $handler->display->display_options['filters']['alias_20']['table'] = 'url_alias';
  $handler->display->display_options['filters']['alias_20']['field'] = 'alias';
  $handler->display->display_options['filters']['alias_20']['relationship'] = 'loc';
  $handler->display->display_options['filters']['alias_20']['operator'] = '!=';
  $handler->display->display_options['filters']['alias_20']['value'] = 'cinco-de-mayo-recipes';
  $handler->display->display_options['filters']['alias_20']['group'] = 1;
  /* Filter criterion: URL Alias: Alias */
  $handler->display->display_options['filters']['alias_21']['id'] = 'alias_21';
  $handler->display->display_options['filters']['alias_21']['table'] = 'url_alias';
  $handler->display->display_options['filters']['alias_21']['field'] = 'alias';
  $handler->display->display_options['filters']['alias_21']['relationship'] = 'loc';
  $handler->display->display_options['filters']['alias_21']['operator'] = 'not_starts';
  $handler->display->display_options['filters']['alias_21']['value'] = 'cinco-de-mayo-recipes/';
  $handler->display->display_options['filters']['alias_21']['group'] = 1;
  /* Filter criterion: URL Alias: Alias */
  $handler->display->display_options['filters']['alias_22']['id'] = 'alias_22';
  $handler->display->display_options['filters']['alias_22']['table'] = 'url_alias';
  $handler->display->display_options['filters']['alias_22']['field'] = 'alias';
  $handler->display->display_options['filters']['alias_22']['relationship'] = 'loc';
  $handler->display->display_options['filters']['alias_22']['operator'] = '!=';
  $handler->display->display_options['filters']['alias_22']['value'] = 'graduation-food';
  $handler->display->display_options['filters']['alias_22']['group'] = 1;
  /* Filter criterion: URL Alias: Alias */
  $handler->display->display_options['filters']['alias_23']['id'] = 'alias_23';
  $handler->display->display_options['filters']['alias_23']['table'] = 'url_alias';
  $handler->display->display_options['filters']['alias_23']['field'] = 'alias';
  $handler->display->display_options['filters']['alias_23']['relationship'] = 'loc';
  $handler->display->display_options['filters']['alias_23']['operator'] = 'not_starts';
  $handler->display->display_options['filters']['alias_23']['value'] = 'graduation-food/';
  $handler->display->display_options['filters']['alias_23']['group'] = 1;
  /* Filter criterion: URL Alias: Alias */
  $handler->display->display_options['filters']['alias_24']['id'] = 'alias_24';
  $handler->display->display_options['filters']['alias_24']['table'] = 'url_alias';
  $handler->display->display_options['filters']['alias_24']['field'] = 'alias';
  $handler->display->display_options['filters']['alias_24']['relationship'] = 'loc';
  $handler->display->display_options['filters']['alias_24']['operator'] = '!=';
  $handler->display->display_options['filters']['alias_24']['value'] = '4th-of-july-recipes';
  $handler->display->display_options['filters']['alias_24']['group'] = 1;
  /* Filter criterion: URL Alias: Alias */
  $handler->display->display_options['filters']['alias_25']['id'] = 'alias_25';
  $handler->display->display_options['filters']['alias_25']['table'] = 'url_alias';
  $handler->display->display_options['filters']['alias_25']['field'] = 'alias';
  $handler->display->display_options['filters']['alias_25']['relationship'] = 'loc';
  $handler->display->display_options['filters']['alias_25']['operator'] = 'not_starts';
  $handler->display->display_options['filters']['alias_25']['value'] = '4th-of-july-recipes/';
  $handler->display->display_options['filters']['alias_25']['group'] = 1;
  /* Filter criterion: URL Alias: Alias */
  $handler->display->display_options['filters']['alias_26']['id'] = 'alias_26';
  $handler->display->display_options['filters']['alias_26']['table'] = 'url_alias';
  $handler->display->display_options['filters']['alias_26']['field'] = 'alias';
  $handler->display->display_options['filters']['alias_26']['relationship'] = 'loc';
  $handler->display->display_options['filters']['alias_26']['operator'] = '!=';
  $handler->display->display_options['filters']['alias_26']['value'] = 'mothers-day-recipes';
  $handler->display->display_options['filters']['alias_26']['group'] = 1;
  /* Filter criterion: URL Alias: Alias */
  $handler->display->display_options['filters']['alias_27']['id'] = 'alias_27';
  $handler->display->display_options['filters']['alias_27']['table'] = 'url_alias';
  $handler->display->display_options['filters']['alias_27']['field'] = 'alias';
  $handler->display->display_options['filters']['alias_27']['relationship'] = 'loc';
  $handler->display->display_options['filters']['alias_27']['operator'] = 'not_starts';
  $handler->display->display_options['filters']['alias_27']['value'] = 'mothers-day-recipes/';
  $handler->display->display_options['filters']['alias_27']['group'] = 1;
  /* Filter criterion: URL Alias: Alias */
  $handler->display->display_options['filters']['alias_28']['id'] = 'alias_28';
  $handler->display->display_options['filters']['alias_28']['table'] = 'url_alias';
  $handler->display->display_options['filters']['alias_28']['field'] = 'alias';
  $handler->display->display_options['filters']['alias_28']['relationship'] = 'loc';
  $handler->display->display_options['filters']['alias_28']['operator'] = '!=';
  $handler->display->display_options['filters']['alias_28']['value'] = 'halloween-recipes';
  $handler->display->display_options['filters']['alias_28']['group'] = 1;
  /* Filter criterion: URL Alias: Alias */
  $handler->display->display_options['filters']['alias_29']['id'] = 'alias_29';
  $handler->display->display_options['filters']['alias_29']['table'] = 'url_alias';
  $handler->display->display_options['filters']['alias_29']['field'] = 'alias';
  $handler->display->display_options['filters']['alias_29']['relationship'] = 'loc';
  $handler->display->display_options['filters']['alias_29']['operator'] = 'not_starts';
  $handler->display->display_options['filters']['alias_29']['value'] = 'halloween-recipes/';
  $handler->display->display_options['filters']['alias_29']['group'] = 1;
  /* Filter criterion: URL Alias: Alias */
  $handler->display->display_options['filters']['alias_30']['id'] = 'alias_30';
  $handler->display->display_options['filters']['alias_30']['table'] = 'url_alias';
  $handler->display->display_options['filters']['alias_30']['field'] = 'alias';
  $handler->display->display_options['filters']['alias_30']['relationship'] = 'loc';
  $handler->display->display_options['filters']['alias_30']['operator'] = '!=';
  $handler->display->display_options['filters']['alias_30']['value'] = 'ultimate-thanksgiving';
  $handler->display->display_options['filters']['alias_30']['group'] = 1;
  /* Filter criterion: URL Alias: Alias */
  $handler->display->display_options['filters']['alias_31']['id'] = 'alias_31';
  $handler->display->display_options['filters']['alias_31']['table'] = 'url_alias';
  $handler->display->display_options['filters']['alias_31']['field'] = 'alias';
  $handler->display->display_options['filters']['alias_31']['relationship'] = 'loc';
  $handler->display->display_options['filters']['alias_31']['operator'] = 'not_starts';
  $handler->display->display_options['filters']['alias_31']['value'] = 'ultimate-thanksgiving/';
  $handler->display->display_options['filters']['alias_31']['group'] = 1;
  /* Filter criterion: URL Alias: Alias */
  $handler->display->display_options['filters']['alias_32']['id'] = 'alias_32';
  $handler->display->display_options['filters']['alias_32']['table'] = 'url_alias';
  $handler->display->display_options['filters']['alias_32']['field'] = 'alias';
  $handler->display->display_options['filters']['alias_32']['relationship'] = 'loc';
  $handler->display->display_options['filters']['alias_32']['operator'] = '!=';
  $handler->display->display_options['filters']['alias_32']['value'] = 'holiday-guide';
  $handler->display->display_options['filters']['alias_32']['group'] = 1;
  /* Filter criterion: URL Alias: Alias */
  $handler->display->display_options['filters']['alias_33']['id'] = 'alias_33';
  $handler->display->display_options['filters']['alias_33']['table'] = 'url_alias';
  $handler->display->display_options['filters']['alias_33']['field'] = 'alias';
  $handler->display->display_options['filters']['alias_33']['relationship'] = 'loc';
  $handler->display->display_options['filters']['alias_33']['operator'] = 'not_starts';
  $handler->display->display_options['filters']['alias_33']['value'] = 'holiday-guide/';
  $handler->display->display_options['filters']['alias_33']['group'] = 1;
  /* Filter criterion: URL Alias: Alias */
  $handler->display->display_options['filters']['alias_34']['id'] = 'alias_34';
  $handler->display->display_options['filters']['alias_34']['table'] = 'url_alias';
  $handler->display->display_options['filters']['alias_34']['field'] = 'alias';
  $handler->display->display_options['filters']['alias_34']['relationship'] = 'loc';
  $handler->display->display_options['filters']['alias_34']['operator'] = '!=';
  $handler->display->display_options['filters']['alias_34']['value'] = 'new-years-eve';
  $handler->display->display_options['filters']['alias_34']['group'] = 1;
  /* Filter criterion: URL Alias: Alias */
  $handler->display->display_options['filters']['alias_35']['id'] = 'alias_35';
  $handler->display->display_options['filters']['alias_35']['table'] = 'url_alias';
  $handler->display->display_options['filters']['alias_35']['field'] = 'alias';
  $handler->display->display_options['filters']['alias_35']['relationship'] = 'loc';
  $handler->display->display_options['filters']['alias_35']['operator'] = 'not_starts';
  $handler->display->display_options['filters']['alias_35']['value'] = 'new-years-eve/';
  $handler->display->display_options['filters']['alias_35']['group'] = 1;
  /* Filter criterion: URL Alias: Alias */
  $handler->display->display_options['filters']['alias_36']['id'] = 'alias_36';
  $handler->display->display_options['filters']['alias_36']['table'] = 'url_alias';
  $handler->display->display_options['filters']['alias_36']['field'] = 'alias';
  $handler->display->display_options['filters']['alias_36']['relationship'] = 'loc';
  $handler->display->display_options['filters']['alias_36']['operator'] = '!=';
  $handler->display->display_options['filters']['alias_36']['value'] = 'easter-recipes';
  $handler->display->display_options['filters']['alias_36']['group'] = 1;
  /* Filter criterion: URL Alias: Alias */
  $handler->display->display_options['filters']['alias_37']['id'] = 'alias_37';
  $handler->display->display_options['filters']['alias_37']['table'] = 'url_alias';
  $handler->display->display_options['filters']['alias_37']['field'] = 'alias';
  $handler->display->display_options['filters']['alias_37']['relationship'] = 'loc';
  $handler->display->display_options['filters']['alias_37']['operator'] = 'not_starts';
  $handler->display->display_options['filters']['alias_37']['value'] = 'easter-recipes/';
  $handler->display->display_options['filters']['alias_37']['group'] = 1;
  /* Filter criterion: URL Alias: Alias */
  $handler->display->display_options['filters']['alias_38']['id'] = 'alias_38';
  $handler->display->display_options['filters']['alias_38']['table'] = 'url_alias';
  $handler->display->display_options['filters']['alias_38']['field'] = 'alias';
  $handler->display->display_options['filters']['alias_38']['relationship'] = 'loc';
  $handler->display->display_options['filters']['alias_38']['operator'] = '!=';
  $handler->display->display_options['filters']['alias_38']['value'] = 'st-patricks-day-recipes';
  $handler->display->display_options['filters']['alias_38']['group'] = 1;
  /* Filter criterion: URL Alias: Alias */
  $handler->display->display_options['filters']['alias_39']['id'] = 'alias_39';
  $handler->display->display_options['filters']['alias_39']['table'] = 'url_alias';
  $handler->display->display_options['filters']['alias_39']['field'] = 'alias';
  $handler->display->display_options['filters']['alias_39']['relationship'] = 'loc';
  $handler->display->display_options['filters']['alias_39']['operator'] = 'not_starts';
  $handler->display->display_options['filters']['alias_39']['value'] = 'st-patricks-day-recipes/';
  $handler->display->display_options['filters']['alias_39']['group'] = 1;
  /* Filter criterion: URL Alias: Alias */
  $handler->display->display_options['filters']['alias_40']['id'] = 'alias_40';
  $handler->display->display_options['filters']['alias_40']['table'] = 'url_alias';
  $handler->display->display_options['filters']['alias_40']['field'] = 'alias';
  $handler->display->display_options['filters']['alias_40']['relationship'] = 'loc';
  $handler->display->display_options['filters']['alias_40']['operator'] = '!=';
  $handler->display->display_options['filters']['alias_40']['value'] = 'thanksgiving';
  $handler->display->display_options['filters']['alias_40']['group'] = 1;
  /* Filter criterion: URL Alias: Alias */
  $handler->display->display_options['filters']['alias_41']['id'] = 'alias_41';
  $handler->display->display_options['filters']['alias_41']['table'] = 'url_alias';
  $handler->display->display_options['filters']['alias_41']['field'] = 'alias';
  $handler->display->display_options['filters']['alias_41']['relationship'] = 'loc';
  $handler->display->display_options['filters']['alias_41']['operator'] = 'not_starts';
  $handler->display->display_options['filters']['alias_41']['value'] = 'thanksgiving/';
  $handler->display->display_options['filters']['alias_41']['group'] = 1;
  /* Filter criterion: URL Alias: Alias */
  $handler->display->display_options['filters']['alias_42']['id'] = 'alias_42';
  $handler->display->display_options['filters']['alias_42']['table'] = 'url_alias';
  $handler->display->display_options['filters']['alias_42']['field'] = 'alias';
  $handler->display->display_options['filters']['alias_42']['relationship'] = 'loc';
  $handler->display->display_options['filters']['alias_42']['operator'] = '!=';
  $handler->display->display_options['filters']['alias_42']['value'] = 'christmas';
  $handler->display->display_options['filters']['alias_42']['group'] = 1;
  /* Filter criterion: URL Alias: Alias */
  $handler->display->display_options['filters']['alias_43']['id'] = 'alias_43';
  $handler->display->display_options['filters']['alias_43']['table'] = 'url_alias';
  $handler->display->display_options['filters']['alias_43']['field'] = 'alias';
  $handler->display->display_options['filters']['alias_43']['relationship'] = 'loc';
  $handler->display->display_options['filters']['alias_43']['operator'] = 'not_starts';
  $handler->display->display_options['filters']['alias_43']['value'] = 'christmas/';
  $handler->display->display_options['filters']['alias_43']['group'] = 1;
  /* Filter criterion: URL Alias: Alias */
  $handler->display->display_options['filters']['alias_44']['id'] = 'alias_44';
  $handler->display->display_options['filters']['alias_44']['table'] = 'url_alias';
  $handler->display->display_options['filters']['alias_44']['field'] = 'alias';
  $handler->display->display_options['filters']['alias_44']['relationship'] = 'loc';
  $handler->display->display_options['filters']['alias_44']['operator'] = '!=';
  $handler->display->display_options['filters']['alias_44']['value'] = 'thanksgiving-sides';
  $handler->display->display_options['filters']['alias_44']['group'] = 1;
  /* Filter criterion: URL Alias: Alias */
  $handler->display->display_options['filters']['alias_45']['id'] = 'alias_45';
  $handler->display->display_options['filters']['alias_45']['table'] = 'url_alias';
  $handler->display->display_options['filters']['alias_45']['field'] = 'alias';
  $handler->display->display_options['filters']['alias_45']['relationship'] = 'loc';
  $handler->display->display_options['filters']['alias_45']['operator'] = 'not_starts';
  $handler->display->display_options['filters']['alias_45']['value'] = 'thanksgiving-sides/';
  $handler->display->display_options['filters']['alias_45']['group'] = 1;
  /* Filter criterion: Content: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['relationship'] = 'id';
  $handler->display->display_options['filters']['type']['operator'] = 'not in';
  $handler->display->display_options['filters']['type']['value'] = array(
    'page' => 'page',
    'featured_directory' => 'featured_directory',
    'image' => 'image',
    'newsletter' => 'newsletter',
    'partner_feed' => 'partner_feed',
    'place' => 'place',
    'storied' => 'storied',
    'sub_menu_settings' => 'sub_menu_settings',
    'tout' => 'tout',
    'video' => 'video',
    'webform' => 'webform',
  );
  $handler->display->display_options['path'] = 'miscellaneous-sitemap.xml';
  $handler->display->display_options['xmlsitemap_root_attributes'] = 'xmlns:news|http://www.google.com/schemas/sitemap-news/0.9
  xmlns:image|http://www.google.com/schemas/sitemap-image/1.1
  xmlns:video|http://www.google.com/schemas/sitemap-video/1.1';
  $handler->display->display_options['xmlsitemap_view_mode']['node'] = 'xmlsitemap';

  /* Display: Image */
  $handler = $view->new_display('xmlsitemap', 'Image', 'image');
  $handler->display->display_options['pager']['type'] = 'some';
  $handler->display->display_options['pager']['options']['items_per_page'] = '50000';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: XML Sitemap: Id */
  $handler->display->display_options['fields']['id']['id'] = 'id';
  $handler->display->display_options['fields']['id']['table'] = 'xmlsitemap';
  $handler->display->display_options['fields']['id']['field'] = 'id';
  /* Field: XML Sitemap: Type */
  $handler->display->display_options['fields']['type']['id'] = 'type';
  $handler->display->display_options['fields']['type']['table'] = 'xmlsitemap';
  $handler->display->display_options['fields']['type']['field'] = 'type';
  /* Field: XML Sitemap: Subtype */
  $handler->display->display_options['fields']['subtype']['id'] = 'subtype';
  $handler->display->display_options['fields']['subtype']['table'] = 'xmlsitemap';
  $handler->display->display_options['fields']['subtype']['field'] = 'subtype';
  /* Field: XML Sitemap: Loc / URL */
  $handler->display->display_options['fields']['loc']['id'] = 'loc';
  $handler->display->display_options['fields']['loc']['table'] = 'xmlsitemap';
  $handler->display->display_options['fields']['loc']['field'] = 'loc';
  /* Field: XML Sitemap: Lastmod */
  $handler->display->display_options['fields']['lastmod']['id'] = 'lastmod';
  $handler->display->display_options['fields']['lastmod']['table'] = 'xmlsitemap';
  $handler->display->display_options['fields']['lastmod']['field'] = 'lastmod';
  $handler->display->display_options['fields']['lastmod']['separator'] = '';
  /* Field: XML Sitemap: Change freq */
  $handler->display->display_options['fields']['changefreq']['id'] = 'changefreq';
  $handler->display->display_options['fields']['changefreq']['table'] = 'xmlsitemap';
  $handler->display->display_options['fields']['changefreq']['field'] = 'changefreq';
  $handler->display->display_options['fields']['changefreq']['separator'] = '';
  /* Field: XML Sitemap: Change count */
  $handler->display->display_options['fields']['changecount']['id'] = 'changecount';
  $handler->display->display_options['fields']['changecount']['table'] = 'xmlsitemap';
  $handler->display->display_options['fields']['changecount']['field'] = 'changecount';
  $handler->display->display_options['fields']['changecount']['separator'] = '';
  /* Field: XML Sitemap: Priority */
  $handler->display->display_options['fields']['priority']['id'] = 'priority';
  $handler->display->display_options['fields']['priority']['table'] = 'xmlsitemap';
  $handler->display->display_options['fields']['priority']['field'] = 'priority';
  $handler->display->display_options['fields']['priority']['separator'] = '';
  /* Field: XML Sitemap: Language */
  $handler->display->display_options['fields']['language']['id'] = 'language';
  $handler->display->display_options['fields']['language']['table'] = 'xmlsitemap';
  $handler->display->display_options['fields']['language']['field'] = 'language';
  /* Field: XML Sitemap: Access */
  $handler->display->display_options['fields']['access']['id'] = 'access';
  $handler->display->display_options['fields']['access']['table'] = 'xmlsitemap';
  $handler->display->display_options['fields']['access']['field'] = 'access';
  $handler->display->display_options['fields']['access']['not'] = 0;
  /* Field: XML Sitemap: Status */
  $handler->display->display_options['fields']['status']['id'] = 'status';
  $handler->display->display_options['fields']['status']['table'] = 'xmlsitemap';
  $handler->display->display_options['fields']['status']['field'] = 'status';
  $handler->display->display_options['fields']['status']['not'] = 0;
  $handler->display->display_options['defaults']['filter_groups'] = FALSE;
  $handler->display->display_options['filter_groups']['groups'] = array(
    1 => 'AND',
    2 => 'OR',
  );
  $handler->display->display_options['defaults']['filters'] = FALSE;
  /* Filter criterion: XML Sitemap: Access */
  $handler->display->display_options['filters']['access']['id'] = 'access';
  $handler->display->display_options['filters']['access']['table'] = 'xmlsitemap';
  $handler->display->display_options['filters']['access']['field'] = 'access';
  $handler->display->display_options['filters']['access']['value'] = '1';
  $handler->display->display_options['filters']['access']['group'] = 1;
  /* Filter criterion: XML Sitemap: Status */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'xmlsitemap';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = '1';
  $handler->display->display_options['filters']['status']['group'] = 1;
  /* Filter criterion: Content: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['relationship'] = 'id';
  $handler->display->display_options['filters']['type']['value'] = array(
    'article' => 'article',
    'blog' => 'blog',
    'category' => 'category',
    'gallery' => 'gallery',
    'recipe' => 'recipe',
  );
  $handler->display->display_options['filters']['type']['group'] = 1;
  /* Filter criterion: Content: Do Not Syndicate (field_syndication) */
  $handler->display->display_options['filters']['field_syndication_value']['id'] = 'field_syndication_value';
  $handler->display->display_options['filters']['field_syndication_value']['table'] = 'field_data_field_syndication';
  $handler->display->display_options['filters']['field_syndication_value']['field'] = 'field_syndication_value';
  $handler->display->display_options['filters']['field_syndication_value']['relationship'] = 'id';
  $handler->display->display_options['filters']['field_syndication_value']['operator'] = 'not';
  $handler->display->display_options['filters']['field_syndication_value']['value'] = array(
    1 => '1',
  );
  $handler->display->display_options['filters']['field_syndication_value']['group'] = 1;
  /* Filter criterion: URL Alias: Alias */
  $handler->display->display_options['filters']['alias']['id'] = 'alias';
  $handler->display->display_options['filters']['alias']['table'] = 'url_alias';
  $handler->display->display_options['filters']['alias']['field'] = 'alias';
  $handler->display->display_options['filters']['alias']['relationship'] = 'loc';
  $handler->display->display_options['filters']['alias']['operator'] = 'not_starts';
  $handler->display->display_options['filters']['alias']['value'] = 'syndication/';
  $handler->display->display_options['filters']['alias']['group'] = 1;
  /* Filter criterion: Field: Main Image (field_images) */
  $handler->display->display_options['filters']['field_images_target_id']['id'] = 'field_images_target_id';
  $handler->display->display_options['filters']['field_images_target_id']['table'] = 'field_data_field_images';
  $handler->display->display_options['filters']['field_images_target_id']['field'] = 'field_images_target_id';
  $handler->display->display_options['filters']['field_images_target_id']['relationship'] = 'id';
  $handler->display->display_options['filters']['field_images_target_id']['operator'] = 'not empty';
  $handler->display->display_options['filters']['field_images_target_id']['group'] = 2;
  /* Filter criterion: Content: Main Image (field_hero_image) */
  $handler->display->display_options['filters']['field_hero_image_target_id']['id'] = 'field_hero_image_target_id';
  $handler->display->display_options['filters']['field_hero_image_target_id']['table'] = 'field_data_field_hero_image';
  $handler->display->display_options['filters']['field_hero_image_target_id']['field'] = 'field_hero_image_target_id';
  $handler->display->display_options['filters']['field_hero_image_target_id']['relationship'] = 'id';
  $handler->display->display_options['filters']['field_hero_image_target_id']['operator'] = 'not empty';
  $handler->display->display_options['filters']['field_hero_image_target_id']['group'] = 2;
  /* Filter criterion: Content: Slides (field_slide_info) */
  $handler->display->display_options['filters']['field_slide_info_value']['id'] = 'field_slide_info_value';
  $handler->display->display_options['filters']['field_slide_info_value']['table'] = 'field_data_field_slide_info';
  $handler->display->display_options['filters']['field_slide_info_value']['field'] = 'field_slide_info_value';
  $handler->display->display_options['filters']['field_slide_info_value']['relationship'] = 'id';
  $handler->display->display_options['filters']['field_slide_info_value']['operator'] = 'not empty';
  $handler->display->display_options['filters']['field_slide_info_value']['group'] = 2;
  /* Filter criterion: Content: Slides (field_multiple_images) */
  $handler->display->display_options['filters']['field_multiple_images_target_id']['id'] = 'field_multiple_images_target_id';
  $handler->display->display_options['filters']['field_multiple_images_target_id']['table'] = 'field_data_field_multiple_images';
  $handler->display->display_options['filters']['field_multiple_images_target_id']['field'] = 'field_multiple_images_target_id';
  $handler->display->display_options['filters']['field_multiple_images_target_id']['relationship'] = 'id';
  $handler->display->display_options['filters']['field_multiple_images_target_id']['operator'] = 'not empty';
  $handler->display->display_options['filters']['field_multiple_images_target_id']['group'] = 2;
  $handler->display->display_options['path'] = 'image-sitemap.xml';
  $handler->display->display_options['xmlsitemap_root_attributes'] = 'xmlns:news|http://www.google.com/schemas/sitemap-news/0.9
  xmlns:image|http://www.google.com/schemas/sitemap-image/1.1
  xmlns:video|http://www.google.com/schemas/sitemap-video/1.1';
  $handler->display->display_options['xmlsitemap_view_mode']['node'] = 'xmlsitemap_image';

  /* Display: Video */
  $handler = $view->new_display('xmlsitemap', 'Video', 'video');
  $handler->display->display_options['enabled'] = FALSE;
  $handler->display->display_options['pager']['type'] = 'some';
  $handler->display->display_options['pager']['options']['items_per_page'] = '50000';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: XML Sitemap: Id */
  $handler->display->display_options['fields']['id']['id'] = 'id';
  $handler->display->display_options['fields']['id']['table'] = 'xmlsitemap';
  $handler->display->display_options['fields']['id']['field'] = 'id';
  /* Field: XML Sitemap: Type */
  $handler->display->display_options['fields']['type']['id'] = 'type';
  $handler->display->display_options['fields']['type']['table'] = 'xmlsitemap';
  $handler->display->display_options['fields']['type']['field'] = 'type';
  /* Field: XML Sitemap: Subtype */
  $handler->display->display_options['fields']['subtype']['id'] = 'subtype';
  $handler->display->display_options['fields']['subtype']['table'] = 'xmlsitemap';
  $handler->display->display_options['fields']['subtype']['field'] = 'subtype';
  /* Field: XML Sitemap: Loc / URL */
  $handler->display->display_options['fields']['loc']['id'] = 'loc';
  $handler->display->display_options['fields']['loc']['table'] = 'xmlsitemap';
  $handler->display->display_options['fields']['loc']['field'] = 'loc';
  /* Field: XML Sitemap: Lastmod */
  $handler->display->display_options['fields']['lastmod']['id'] = 'lastmod';
  $handler->display->display_options['fields']['lastmod']['table'] = 'xmlsitemap';
  $handler->display->display_options['fields']['lastmod']['field'] = 'lastmod';
  $handler->display->display_options['fields']['lastmod']['separator'] = '';
  /* Field: XML Sitemap: Change freq */
  $handler->display->display_options['fields']['changefreq']['id'] = 'changefreq';
  $handler->display->display_options['fields']['changefreq']['table'] = 'xmlsitemap';
  $handler->display->display_options['fields']['changefreq']['field'] = 'changefreq';
  $handler->display->display_options['fields']['changefreq']['separator'] = '';
  /* Field: XML Sitemap: Change count */
  $handler->display->display_options['fields']['changecount']['id'] = 'changecount';
  $handler->display->display_options['fields']['changecount']['table'] = 'xmlsitemap';
  $handler->display->display_options['fields']['changecount']['field'] = 'changecount';
  $handler->display->display_options['fields']['changecount']['separator'] = '';
  /* Field: XML Sitemap: Priority */
  $handler->display->display_options['fields']['priority']['id'] = 'priority';
  $handler->display->display_options['fields']['priority']['table'] = 'xmlsitemap';
  $handler->display->display_options['fields']['priority']['field'] = 'priority';
  $handler->display->display_options['fields']['priority']['separator'] = '';
  /* Field: XML Sitemap: Language */
  $handler->display->display_options['fields']['language']['id'] = 'language';
  $handler->display->display_options['fields']['language']['table'] = 'xmlsitemap';
  $handler->display->display_options['fields']['language']['field'] = 'language';
  /* Field: XML Sitemap: Access */
  $handler->display->display_options['fields']['access']['id'] = 'access';
  $handler->display->display_options['fields']['access']['table'] = 'xmlsitemap';
  $handler->display->display_options['fields']['access']['field'] = 'access';
  $handler->display->display_options['fields']['access']['not'] = 0;
  /* Field: XML Sitemap: Status */
  $handler->display->display_options['fields']['status']['id'] = 'status';
  $handler->display->display_options['fields']['status']['table'] = 'xmlsitemap';
  $handler->display->display_options['fields']['status']['field'] = 'status';
  $handler->display->display_options['fields']['status']['not'] = 0;
  $handler->display->display_options['defaults']['filter_groups'] = FALSE;
  $handler->display->display_options['defaults']['filters'] = FALSE;
  /* Filter criterion: XML Sitemap: Access */
  $handler->display->display_options['filters']['access']['id'] = 'access';
  $handler->display->display_options['filters']['access']['table'] = 'xmlsitemap';
  $handler->display->display_options['filters']['access']['field'] = 'access';
  $handler->display->display_options['filters']['access']['value'] = '1';
  $handler->display->display_options['filters']['access']['group'] = 1;
  /* Filter criterion: XML Sitemap: Status */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'xmlsitemap';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = '1';
  $handler->display->display_options['filters']['status']['group'] = 1;
  /* Filter criterion: Content: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['relationship'] = 'id';
  $handler->display->display_options['filters']['type']['value'] = array(
    'page' => 'page',
    'video' => 'video',
  );
  $handler->display->display_options['filters']['type']['group'] = 1;
  /* Filter criterion: URL Alias: Alias */
  $handler->display->display_options['filters']['alias']['id'] = 'alias';
  $handler->display->display_options['filters']['alias']['table'] = 'url_alias';
  $handler->display->display_options['filters']['alias']['field'] = 'alias';
  $handler->display->display_options['filters']['alias']['relationship'] = 'loc';
  $handler->display->display_options['filters']['alias']['operator'] = 'starts';
  $handler->display->display_options['filters']['alias']['value'] = 'video/';
  $handler->display->display_options['path'] = 'video-sitemap.xml';
  $handler->display->display_options['xmlsitemap_root_attributes'] = 'xmlns:news|http://www.google.com/schemas/sitemap-news/0.9
  xmlns:image|http://www.google.com/schemas/sitemap-image/1.1
  xmlns:video|http://www.google.com/schemas/sitemap-video/1.1';
  $handler->display->display_options['xmlsitemap_view_mode']['node'] = 'xmlsitemap_video';
  $export['xmlsitemap'] = $view;

  return $export;
}
