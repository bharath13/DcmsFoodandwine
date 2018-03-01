<?php
/**
 * @file
 * ti_amg_fw_page_share_social_context.context.inc
 */

/**
 * Implements hook_context_default_contexts().
 */
function ti_amg_fw_page_share_social_context_context_default_contexts() {
  $export = array();

  $context = new stdClass();
  $context->disabled = FALSE; /* Edit this to true to make a default context disabled initially */
  $context->api_version = 3;
  $context->name = 'ti_amg_fw_social_share_context';
  $context->description = 'Social Share Block Context';
  $context->tag = '';
  $context->conditions = array(
    'path' => array(
      'values' => array(
        'blogs/*' => 'blogs/*',
        'monthly/*' => 'monthly/*',
        'recipes/*' => 'recipes/*',
        'articles/*' => 'articles/*',
        'video/*' => 'video/*',
        'slideshows' => 'slideshows',
        'recipe-finder' => 'recipe-finder',
        'recipe-finder/*' => 'recipe-finder/*',
      ),
    ),
    'theme' => array(
      'values' => array(
        'foodandwine' => 'foodandwine',
      ),
    ),
    'ti_amg_fw_mobile_context_condition_is_mobile' => array(
      'values' => array(
        'FALSE' => 'FALSE',
      ),
    ),
  );
  $context->reactions = array(
    'block' => array(
      'blocks' => array(
        'ti_amg_fw_page_sharing_social-fw_social_media_page_sharing' => array(
          'module' => 'ti_amg_fw_page_sharing_social',
          'delta' => 'fw_social_media_page_sharing',
          'region' => 'content',
          'weight' => '-74',
        ),
      ),
    ),
  );
  $context->condition_mode = 1;

  // Translatables
  // Included for use with string extractors like potx.
  t('Social Share Block Context');
  $export['ti_amg_fw_social_share_context'] = $context;

  return $export;
}
