<?php
/**
 * @file
 * ti_lsg_mr_article.strongarm.inc
 */

/**
 * Implements hook_strongarm().
 */
function ti_lsg_mr_article_strongarm() {
  $export = array();

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'pathauto_node_article_pattern';
  $strongarm->value = '[node:category_top_two_levels_with_title_url]';
  $export['pathauto_node_article_pattern'] = $strongarm;

  return $export;
}
