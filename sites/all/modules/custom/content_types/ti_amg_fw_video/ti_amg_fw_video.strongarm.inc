<?php
/**
 * @file
 * ti_amg_fw_video.strongarm.inc
 */

/**
 * Implements hook_strongarm().
 */
function ti_amg_fw_video_strongarm() {
  $export = array();

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'pathauto_node_video_pattern';
  $strongarm->value = 'video/[node:title]';
  $export['pathauto_node_video_pattern'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'scheduler_publish_enable_video';
  $strongarm->value = 1;
  $export['scheduler_publish_enable_video'] = $strongarm;

  return $export;
}
