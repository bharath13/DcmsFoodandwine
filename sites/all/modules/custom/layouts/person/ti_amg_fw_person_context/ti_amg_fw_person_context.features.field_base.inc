<?php
/**
 * @file
 * ti_amg_fw_person_context.features.field_base.inc
 */

/**
 * Implements hook_field_default_field_bases().
 */
function ti_amg_fw_person_context_field_default_field_bases() {
  $field_bases = array();

  // Exported field_base: 'field_descripition'
  $field_bases['field_descripition'] = array(
    'active' => 1,
    'cardinality' => 1,
    'deleted' => 0,
    'entity_types' => array(),
    'field_name' => 'field_descripition',
    'foreign keys' => array(
      'format' => array(
        'columns' => array(
          'format' => 'format',
        ),
        'table' => 'filter_format',
      ),
    ),
    'indexes' => array(
      'format' => array(
        0 => 'format',
      ),
    ),
    'locked' => 0,
    'module' => 'text',
    'settings' => array(
      'max_length' => 255,
    ),
    'translatable' => 0,
    'type' => 'text',
  );

  return $field_bases;
}
