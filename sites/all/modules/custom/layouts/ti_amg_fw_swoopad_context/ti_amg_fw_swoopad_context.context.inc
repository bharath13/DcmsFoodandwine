<?php
/**
 * @file
 * ti_amg_fw_swoopad_context.context.inc
 */

/**
 * Implements hook_context_default_contexts().
 */
function ti_amg_fw_swoopad_context_context_default_contexts() {
  $export = array();

  $context = new stdClass();
  $context->disabled = FALSE; /* Edit this to true to make a default context disabled initially */
  $context->api_version = 3;
  $context->name = 'ti_amg_fw_swoopad_context';
  $context->description = 'TI AMG FoodandWine Swoop Ad Context';
  $context->tag = '';
  $context->conditions = array(
    'node' => array(
      'values' => array(
        'gallery' => 'gallery',
        'recipe' => 'recipe',
        'blog' => 'blog',
      ),
      'options' => array(
        'node_form' => '1',
        'node_form' => '0',
        'node_form' => '0',
      ),
    ),
  );
  $context->reactions = array(
    'block' => array(
      'blocks' => array(
        'ti_amg_fw_custom-fw_swoop_block' => array(
          'module' => 'ti_amg_fw_custom',
          'delta' => 'fw_swoop_block',
          'region' => 'content_bottom',
          'weight' => '-10',
        ),
      ),
    ),
  );
  $context->condition_mode = 0;

  // Translatables
  // Included for use with string extractors like potx.
  t('TI AMG FoodandWine Swoop Ad Context');
  $export['ti_amg_fw_swoopad_context'] = $context;

  return $export;
}
