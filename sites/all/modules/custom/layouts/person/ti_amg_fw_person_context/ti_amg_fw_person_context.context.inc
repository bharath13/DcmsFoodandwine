<?php
/**
 * @file
 * ti_amg_fw_person_context.context.inc
 */

/**
 * Implements hook_context_default_contexts().
 */
function ti_amg_fw_person_context_context_default_contexts() {
  $export = array();

  $context = new stdClass();
  $context->disabled = FALSE; /* Edit this to true to make a default context disabled initially */
  $context->api_version = 3;
  $context->name = 'ti_amg_fw_person_context';
  $context->description = 'Person Context';
  $context->tag = '';
  $context->conditions = array(
    'node' => array(
      'values' => array(
        'person' => 'person',
      ),
      'options' => array(
        'node_form' => '0',
      ),
    ),
  );
  $context->reactions = array(
    'block' => array(
      'blocks' => array(
        'views-ti_amg_fw_person_blocks-block_1' => array(
          'module' => 'views',
          'delta' => 'ti_amg_fw_person_blocks-block_1',
          'region' => 'content',
          'weight' => '-38',
        ),
        'views-ti_amg_fw_person_blocks-block' => array(
          'module' => 'views',
          'delta' => 'ti_amg_fw_person_blocks-block',
          'region' => 'content',
          'weight' => '-37',
        ),
        'views-ti_amg_fw_person_blocks-block_3' => array(
          'module' => 'views',
          'delta' => 'ti_amg_fw_person_blocks-block_3',
          'region' => 'content',
          'weight' => '-10',
        ),
        'views-ti_amg_fw_person_blocks-block_5' => array(
          'module' => 'views',
          'delta' => 'ti_amg_fw_person_blocks-block_5',
          'region' => 'content',
          'weight' => '-9',
        ),
        'views-0545520a78737e10a94346f569ce0e76' => array(
          'module' => 'views',
          'delta' => '0545520a78737e10a94346f569ce0e76',
          'region' => 'content',
          'weight' => '-8',
        ),
      ),
    ),
  );
  $context->condition_mode = 0;

  // Translatables
  // Included for use with string extractors like potx.
  t('Person Context');
  $export['ti_amg_fw_person_context'] = $context;

  return $export;
}
