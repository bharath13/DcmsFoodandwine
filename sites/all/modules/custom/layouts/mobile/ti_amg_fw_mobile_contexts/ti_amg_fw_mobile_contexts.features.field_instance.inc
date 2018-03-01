<?php
/**
 * @file
 * ti_amg_fw_mobile_contexts.features.field_instance.inc
 */

/**
 * Implements hook_field_default_field_instances().
 */
function ti_amg_fw_mobile_contexts_field_default_field_instances() {
  $field_instances = array();

  // Exported field_instance: 'node-gallery-field_twitter_title'.
  $field_instances['node-gallery-field_twitter_title'] = array(
    'bundle' => 'gallery',
    'check_existing' => 0,
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 70,
      ),
      'pronto_json' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
      'search_index' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
      'teaser' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
    ),
    'enable_linked_field' => 0,
    'entity_type' => 'node',
    'fences_wrapper' => 'div',
    'field_name' => 'field_twitter_title',
    'label' => 'TrueAnthem - Twitter',
    'linked_to' => 'field_canonical_url',
    'required' => 0,
    'settings' => array(
      'better_formats' => array(
        'allowed_formats' => array(
          'after_pronto_blockhtml' => 'after_pronto_blockhtml',
          'after_pronto_body_process' => 'after_pronto_body_process',
          'after_pronto_inlinehtml' => 'after_pronto_inlinehtml',
          'article_html' => 'article_html',
          'etag_mapping' => 'etag_mapping',
          'filtered_html' => 'filtered_html',
          'full_html' => 'full_html',
          'fw_headline_html' => 'fw_headline_html',
          'headline_html' => 'headline_html',
          'mini_text_format' => 'mini_text_format',
          'plain_text' => 'plain_text',
          'pronto_block_html' => 'pronto_block_html',
          'pronto_body_process' => 'pronto_body_process',
          'pronto_inline_html' => 'pronto_inline_html',
          'wysiwyg' => 'wysiwyg',
        ),
        'allowed_formats_toggle' => 0,
        'default_order_toggle' => 0,
        'default_order_wrapper' => array(
          'formats' => array(
            'after_pronto_blockhtml' => array(
              'weight' => 0,
            ),
            'after_pronto_body_process' => array(
              'weight' => 0,
            ),
            'after_pronto_inlinehtml' => array(
              'weight' => 0,
            ),
            'article_html' => array(
              'weight' => 0,
            ),
            'etag_mapping' => array(
              'weight' => 10,
            ),
            'filtered_html' => array(
              'weight' => 0,
            ),
            'full_html' => array(
              'weight' => 0,
            ),
            'fw_headline_html' => array(
              'weight' => 0,
            ),
            'headline_html' => array(
              'weight' => 0,
            ),
            'mini_text_format' => array(
              'weight' => 0,
            ),
            'plain_text' => array(
              'weight' => 10,
            ),
            'pronto_block_html' => array(
              'weight' => 0,
            ),
            'pronto_body_process' => array(
              'weight' => 0,
            ),
            'pronto_inline_html' => array(
              'weight' => 0,
            ),
            'wysiwyg' => array(
              'weight' => 0,
            ),
          ),
        ),
      ),
      'text_processing' => 0,
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'text',
      'settings' => array(
        'maxlength_js' => 0,
        'maxlength_js_label' => 'Content limited to @limit characters, remaining: <strong>@remaining</strong>',
        'size' => 60,
      ),
      'type' => 'text_textfield',
      'weight' => 50,
    ),
  );

  // Translatables
  // Included for use with string extractors like potx.
  t('TrueAnthem - Twitter');

  return $field_instances;
}
