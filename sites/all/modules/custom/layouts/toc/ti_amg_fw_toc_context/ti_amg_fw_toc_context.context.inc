<?php
/**
 * @file
 * ti_amg_fw_toc_context.context.inc
 */

/**
 * Implements hook_context_default_contexts().
 */
function ti_amg_fw_toc_context_context_default_contexts() {
  $export = array();

  $context = new stdClass();
  $context->disabled = FALSE; /* Edit this to true to make a default context disabled initially */
  $context->api_version = 3;
  $context->name = 'ti_amg_fw_toc_context';
  $context->description = 'TOC Page Context';
  $context->tag = '';
  $context->conditions = array(
    'views' => array(
      'values' => array(
        'ti_amg_fw_toc:page' => 'ti_amg_fw_toc:page',
        'ti_amg_fw_toc_columns_block' => 'ti_amg_fw_toc_columns_block',
      ),
    ),
  );
  $context->reactions = array(
    'block' => array(
      'blocks' => array(
        'ti_amg_fw_custom-toc_issue_dropdown' => array(
          'module' => 'ti_amg_fw_custom',
          'delta' => 'toc_issue_dropdown',
          'region' => 'content',
          'weight' => '-30',
        ),
        'system-main' => array(
          'module' => 'system',
          'delta' => 'main',
          'region' => 'content',
          'weight' => '-29',
        ),
        'views-5b9162019f3f9445ce40cd5616a1c3d0' => array(
          'module' => 'views',
          'delta' => '5b9162019f3f9445ce40cd5616a1c3d0',
          'region' => 'content',
          'weight' => '-28',
        ),
        'views-e5432b525c15677159ba199bd20a5213' => array(
          'module' => 'views',
          'delta' => 'e5432b525c15677159ba199bd20a5213',
          'region' => 'content',
          'weight' => '-10',
        ),
      ),
    ),
  );
  $context->condition_mode = 0;

  // Translatables
  // Included for use with string extractors like potx.
  t('TOC Page Context');
  $export['ti_amg_fw_toc_context'] = $context;

  return $export;
}
