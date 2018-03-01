<?php
/**
 * @file
 * ti_amg_fw_person_node_form_context.context.inc
 */

/**
 * Implements hook_context_default_contexts().
 */
function ti_amg_fw_person_node_form_context_context_default_contexts() {
  $export = array();

  $context = new stdClass();
  $context->disabled = FALSE; /* Edit this to true to make a default context disabled initially */
  $context->api_version = 3;
  $context->name = 'ti_amg_fw_person_node_form_context';
  $context->description = 'Person Node Form Context';
  $context->tag = '';
  $context->conditions = array(
    'node' => array(
      'values' => array(
        'person' => 'person',
      ),
      'options' => array(
        'node_form' => '2',
      ),
    ),
  );
  $context->reactions = array(
    'block' => array(
      'blocks' => array(
        'views-ti_amg_fw_person_blocks-block_2' => array(
          'module' => 'views',
          'delta' => 'ti_amg_fw_person_blocks-block_2',
          'region' => 'content',
          'weight' => '-10',
        ),
        'views-ti_amg_fw_person_blocks-block_4' => array(
          'module' => 'views',
          'delta' => 'ti_amg_fw_person_blocks-block_4',
          'region' => 'content',
          'weight' => '-9',
        ),
        'views-ti_amg_fw_person_blocks-block_6' => array(
          'module' => 'views',
          'delta' => 'ti_amg_fw_person_blocks-block_6',
          'region' => 'content',
          'weight' => '-8',
        ),
        'system-main' => array(
          'module' => 'system',
          'delta' => 'main',
          'region' => 'content',
          'weight' => '-7',
        ),
      ),
    ),
  );
  $context->condition_mode = 0;

  // Translatables
  // Included for use with string extractors like potx.
  t('Person Node Form Context');
  $export['ti_amg_fw_person_node_form_context'] = $context;

  return $export;
}
