<?php
/**
 * @file
 * ti_amg_fw_springboard_article.feeds_tamper_default.inc
 */

/**
 * Implements hook_feeds_tamper_default().
 */
function ti_amg_fw_springboard_article_feeds_tamper_default() {
  $export = array();

  $feeds_tamper = new stdClass();
  $feeds_tamper->disabled = FALSE; /* Edit this to true to make a default feeds_tamper disabled initially */
  $feeds_tamper->api_version = 2;
  $feeds_tamper->id = 'fw_springboard_article-blank_source_1-springboard_load_author';
  $feeds_tamper->importer = 'fw_springboard_article';
  $feeds_tamper->source = 'Blank source 1';
  $feeds_tamper->plugin_id = 'springboard_load_author';
  $feeds_tamper->settings = array(
    'springboard_user' => 'springboard',
  );
  $feeds_tamper->weight = 0;
  $feeds_tamper->description = 'Get springboard author';
  $export['fw_springboard_article-blank_source_1-springboard_load_author'] = $feeds_tamper;

  $feeds_tamper = new stdClass();
  $feeds_tamper->disabled = FALSE; /* Edit this to true to make a default feeds_tamper disabled initially */
  $feeds_tamper->api_version = 2;
  $feeds_tamper->id = 'fw_springboard_article-blank_source_3-springboard_load_author';
  $feeds_tamper->importer = 'fw_springboard_article';
  $feeds_tamper->source = 'Blank source 3';
  $feeds_tamper->plugin_id = 'springboard_load_author';
  $feeds_tamper->settings = array(
    'springboard_user' => 'springboard',
  );
  $feeds_tamper->weight = 0;
  $feeds_tamper->description = 'Get springboard author';
  $export['fw_springboard_article-blank_source_3-springboard_load_author'] = $feeds_tamper;

  $feeds_tamper = new stdClass();
  $feeds_tamper->disabled = FALSE; /* Edit this to true to make a default feeds_tamper disabled initially */
  $feeds_tamper->api_version = 2;
  $feeds_tamper->id = 'fw_springboard_article-blank_source_4-springboard_load_author';
  $feeds_tamper->importer = 'fw_springboard_article';
  $feeds_tamper->source = 'Blank source 4';
  $feeds_tamper->plugin_id = 'springboard_load_author';
  $feeds_tamper->settings = array(
    'springboard_user' => 'springboard',
  );
  $feeds_tamper->weight = 0;
  $feeds_tamper->description = 'Get springboard author';
  $export['fw_springboard_article-blank_source_4-springboard_load_author'] = $feeds_tamper;

  $feeds_tamper = new stdClass();
  $feeds_tamper->disabled = FALSE; /* Edit this to true to make a default feeds_tamper disabled initially */
  $feeds_tamper->api_version = 2;
  $feeds_tamper->id = 'fw_springboard_article-body-proper_html';
  $feeds_tamper->importer = 'fw_springboard_article';
  $feeds_tamper->source = 'body';
  $feeds_tamper->plugin_id = 'proper_html';
  $feeds_tamper->settings = array();
  $feeds_tamper->weight = 0;
  $feeds_tamper->description = 'Replace Wordpress Newlines';
  $export['fw_springboard_article-body-proper_html'] = $feeds_tamper;

  $feeds_tamper = new stdClass();
  $feeds_tamper->disabled = FALSE; /* Edit this to true to make a default feeds_tamper disabled initially */
  $feeds_tamper->api_version = 2;
  $feeds_tamper->id = 'fw_springboard_article-post_tags-explode';
  $feeds_tamper->importer = 'fw_springboard_article';
  $feeds_tamper->source = 'post_tags';
  $feeds_tamper->plugin_id = 'explode';
  $feeds_tamper->settings = array(
    'separator' => ',',
    'limit' => '',
    'real_separator' => ',',
  );
  $feeds_tamper->weight = 0;
  $feeds_tamper->description = 'Explode';
  $export['fw_springboard_article-post_tags-explode'] = $feeds_tamper;

  return $export;
}
