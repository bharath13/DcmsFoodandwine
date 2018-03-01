<?php
/**
 * @file
 * ti_amg_fw_springboard_article.strongarm.inc
 */

/**
 * Implements hook_strongarm().
 */
function ti_amg_fw_springboard_article_strongarm() {
  $export = array();

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'fansided_feeds_source';
  $strongarm->value = 'fw_springboard_article';
  $export['fansided_feeds_source'] = $strongarm;

  return $export;
}
