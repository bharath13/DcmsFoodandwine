<?php
/**
 * @file
 * ti_amg_fw_partner_blog_context_mobile.context.inc
 */

/**
 * Implements hook_context_default_contexts().
 */
function ti_amg_fw_partner_blog_context_mobile_context_default_contexts() {
  $export = array();

  $context = new stdClass();
  $context->disabled = FALSE; /* Edit this to true to make a default context disabled initially */
  $context->api_version = 3;
  $context->name = 'ti_amg_fw_partner_blog_context_mobile';
  $context->description = 'ti amg fw partner blog context mobile';
  $context->tag = '';
  $context->conditions = array(
    'path' => array(
      'values' => array(
        'partner*' => 'partner*',
      ),
    ),
    'ti_amg_fw_mobile_context_condition_is_mobile' => array(
      'values' => array(
        'TRUE' => 'TRUE',
      ),
    ),
  );
  $context->reactions = array(
    'block' => array(
      'blocks' => array(
        'ti_amg_ads-mobile_320x50' => array(
          'module' => 'ti_amg_ads',
          'delta' => 'mobile_320x50',
          'region' => 'content',
          'weight' => '-10',
        ),
        'system-main' => array(
          'module' => 'system',
          'delta' => 'main',
          'region' => 'content',
          'weight' => '-9',
        ),
        'ti_amg_ads-mobile_320x320' => array(
          'module' => 'ti_amg_ads',
          'delta' => 'mobile_320x320',
          'region' => 'content',
          'weight' => '-8',
        ),
        'search-form' => array(
          'module' => 'search',
          'delta' => 'form',
          'region' => 'content_bottom',
          'weight' => '-10',
        ),
      ),
    ),
    'theme_html' => array(
      'class' => 'mobile',
    ),
  );
  $context->condition_mode = 1;

  // Translatables
  // Included for use with string extractors like potx.
  t('ti amg fw partner blog context mobile');
  $export['ti_amg_fw_partner_blog_context_mobile'] = $context;

  return $export;
}
