<?php
/**
 * @file
 * ti_article_content_type.features.field_base.inc
 */

/**
 * Implements hook_field_default_field_bases().
 */
function ti_article_content_type_field_default_field_bases() {
  $field_bases = array();

  // Exported field_base: 'field_seo_path'.
  $field_bases['field_seo_path'] = array(
    'active' => 1,
    'cardinality' => 1,
    'deleted' => 0,
    'entity_types' => array(),
    'field_name' => 'field_seo_path',
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
