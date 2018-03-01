<?php
/**
 * @file
 * ti_image_content_type.features.field_instance.inc
 */

/**
 * Implements hook_field_default_field_instances().
 */
function ti_image_content_type_field_default_field_instances() {
  $field_instances = array();

  // Exported field_instance: 'node-image-field_alt_text'.
  $field_instances['node-image-field_alt_text'] = array(
    'bundle' => 'image',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'hidden',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 4,
      ),
      'image_150x150' => array(
        'label' => 'hidden',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 1,
      ),
      'image_300x300' => array(
        'label' => 'hidden',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 1,
      ),
      'image_420x420' => array(
        'label' => 'hidden',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 1,
      ),
      'image_500xVariable' => array(
        'label' => 'hidden',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 1,
      ),
      'image_768x768' => array(
        'label' => 'hidden',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 1,
      ),
      'image_thumb' => array(
        'label' => 'hidden',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 1,
      ),
      'pronto_json' => array(
        'label' => 'hidden',
        'module' => 'pronto_component_text',
        'settings' => array(
          'set' => array(
            0 => array(
              'backfill_field' => '',
              'bubble_up' => 0,
              'component_type' => 'components/article/hero-image',
              'merge_group' => 'article/hero-image',
              'pronto_filter_text_field' => 'pronto_inline_html',
              'uri_friendly' => 0,
              'value_key' => 'data][alt',
              'version' => 1,
              'source_key' => 'value',
              'split_block_elements' => FALSE,
              'view_mode' => array(
                'file' => '',
                'node' => '',
              ),
              'items_output_limit' => NULL,
              'merge_elements' => FALSE,
              'merge_siblings' => FALSE,
              'merge_parents' => '',
            ),
          ),
        ),
        'type' => 'pronto_component_text',
        'weight' => 1,
      ),
      'pronto_json_inline_embed' => array(
        'label' => 'hidden',
        'module' => 'pronto_component_text',
        'settings' => array(
          'set' => array(
            0 => array(
              'backfill_field' => '',
              'conditional_xor_field' => '',
              'component_type' => 'components/article/figure',
              'version' => 1,
              'value_key' => 'data][alt',
              'merge_group' => 'article/figure/[node:nid]',
              'bubble_up' => 0,
              'uri_friendly' => 0,
              'pronto_filter_text_field' => 'pronto_inline_html',
              'source_key' => 'value',
              'convert_list_to_array' => 0,
              'convert_comma_to_array' => 0,
              'split_block_elements' => 0,
              'value_replace_tokens_template' => '',
              'view_mode' => array(
                'file' => 'pronto_json',
                'node' => 'pronto_json',
              ),
              'items_output_limit' => 1,
              'merge_elements' => 0,
              'merge_siblings' => 0,
              'merge_parents' => '',
            ),
          ),
        ),
        'type' => 'pronto_component_text',
        'weight' => 4,
      ),
      'pronto_json_slides' => array(
        'label' => 'hidden',
        'module' => 'pronto_component_text',
        'settings' => array(
          'set' => array(
            0 => array(
              'backfill_field' => '',
              'conditional_xor_field' => '',
              'component_type' => 'components/article/figure',
              'version' => 1,
              'value_key' => 'data][alt',
              'merge_group' => 'article/figure',
              'bubble_up' => 0,
              'uri_friendly' => 0,
              'pronto_filter_text_field' => 'pronto_inline_html',
              'source_key' => 'value',
              'convert_list_to_array' => 0,
              'split_block_elements' => 0,
              'view_mode' => array(
                'file' => 'pronto_json',
                'node' => 'pronto_json',
              ),
              'items_output_limit' => 1,
              'merge_elements' => 0,
              'merge_siblings' => 0,
              'merge_parents' => '',
            ),
          ),
        ),
        'type' => 'pronto_component_text',
        'weight' => 0,
      ),
      'teaser' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
      'tout_channel_left_nav' => array(
        'label' => 'hidden',
        'module' => 'text',
        'settings' => array(),
        'type' => 'text_default',
        'weight' => 0,
      ),
      'ut_image_embed' => array(
        'label' => 'hidden',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 4,
      ),
      'xmlsitemap' => array(
        'label' => 'hidden',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 4,
      ),
    ),
    'entity_type' => 'node',
    'field_name' => 'field_alt_text',
    'label' => 'Alt Text',
    'required' => 0,
    'settings' => array(
      'text_processing' => 0,
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'text',
      'settings' => array(
        'size' => 60,
      ),
      'type' => 'text_textfield',
      'weight' => 16,
    ),
  );

  // Exported field_instance: 'node-image-field_caption'.
  $field_instances['node-image-field_caption'] = array(
    'bundle' => 'image',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 34,
      ),
      'image_150x150' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 20,
      ),
      'image_300x300' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 20,
      ),
      'image_420x420' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 20,
      ),
      'image_500xVariable' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 20,
      ),
      'image_768x768' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 20,
      ),
      'image_thumb' => array(
        'label' => 'hidden',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 20,
      ),
      'pronto_json' => array(
        'label' => 'hidden',
        'module' => 'pronto_component_text',
        'settings' => array(
          'set' => array(
            0 => array(
              'backfill_field' => '',
              'bubble_up' => 0,
              'component_type' => 'components/article/hero-image',
              'merge_group' => 'article/hero-image',
              'pronto_filter_text_field' => 'pronto_inline_html',
              'uri_friendly' => 0,
              'value_key' => 'data][caption',
              'version' => 1,
              'source_key' => 'value',
              'split_block_elements' => FALSE,
              'view_mode' => array(
                'file' => '',
                'node' => '',
              ),
              'items_output_limit' => NULL,
              'merge_elements' => FALSE,
              'merge_siblings' => FALSE,
              'merge_parents' => '',
            ),
          ),
        ),
        'type' => 'pronto_component_text',
        'weight' => 20,
      ),
      'pronto_json_inline_embed' => array(
        'label' => 'above',
        'module' => 'pronto_component_text',
        'settings' => array(
          'set' => array(
            0 => array(
              'backfill_field' => '',
              'conditional_xor_field' => '',
              'component_type' => 'components/article/figure',
              'version' => 1,
              'value_key' => 'data][caption',
              'merge_group' => 'article/figure/[node:nid]',
              'bubble_up' => 0,
              'uri_friendly' => 0,
              'pronto_filter_text_field' => 'pronto_inline_html',
              'source_key' => 'value',
              'convert_list_to_array' => 0,
              'convert_comma_to_array' => 0,
              'split_block_elements' => 0,
              'value_replace_tokens_template' => '',
              'view_mode' => array(
                'file' => 'pronto_json',
                'node' => 'pronto_json',
              ),
              'items_output_limit' => 1,
              'merge_elements' => 0,
              'merge_siblings' => 0,
              'merge_parents' => '',
            ),
          ),
        ),
        'type' => 'pronto_component_text',
        'weight' => 34,
      ),
      'pronto_json_slides' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 31,
      ),
      'teaser' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
      'tout_channel_left_nav' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 31,
      ),
      'ut_image_embed' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 34,
      ),
      'xmlsitemap' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 34,
      ),
    ),
    'entity_type' => 'node',
    'fences_wrapper' => 'div',
    'field_name' => 'field_caption',
    'label' => 'Caption',
    'required' => 0,
    'settings' => array(
      'better_formats' => array(
        'allowed_formats' => array(
          'filtered_html' => 'filtered_html',
          'full_html' => 'full_html',
          'plain_text' => 'plain_text',
          'wysiwyg' => 'wysiwyg',
        ),
        'allowed_formats_toggle' => 0,
        'default_order_toggle' => 0,
        'default_order_wrapper' => array(
          'formats' => array(
            'filtered_html' => array(
              'weight' => 0,
            ),
            'full_html' => array(
              'weight' => 0,
            ),
            'plain_text' => array(
              'weight' => 10,
            ),
            'wysiwyg' => array(
              'weight' => 0,
            ),
          ),
        ),
      ),
      'text_processing' => 1,
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'text',
      'settings' => array(
        'maxlength_js' => '',
        'maxlength_js_enforce' => 0,
        'maxlength_js_label' => 'Content limited to @limit characters, remaining: <strong>@remaining</strong>',
        'maxlength_js_truncate_html' => 0,
        'rows' => 5,
      ),
      'type' => 'text_textarea',
      'weight' => 18,
    ),
  );

  // Exported field_instance: 'node-image-field_comments'.
  $field_instances['node-image-field_comments'] = array(
    'bundle' => 'image',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'hidden',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 22,
      ),
      'image_150x150' => array(
        'label' => 'hidden',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 8,
      ),
      'image_300x300' => array(
        'label' => 'hidden',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 7,
      ),
      'image_420x420' => array(
        'label' => 'hidden',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 3,
      ),
      'image_500xVariable' => array(
        'label' => 'hidden',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 4,
      ),
      'image_768x768' => array(
        'label' => 'hidden',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 3,
      ),
      'image_thumb' => array(
        'label' => 'hidden',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 8,
      ),
      'pronto_json' => array(
        'label' => 'hidden',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 8,
      ),
      'pronto_json_inline_embed' => array(
        'label' => 'hidden',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 22,
      ),
      'pronto_json_slides' => array(
        'label' => 'hidden',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 2,
      ),
      'teaser' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
      'tout_channel_left_nav' => array(
        'label' => 'hidden',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 2,
      ),
      'ut_image_embed' => array(
        'label' => 'hidden',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 22,
      ),
      'xmlsitemap' => array(
        'label' => 'hidden',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 22,
      ),
    ),
    'entity_type' => 'node',
    'field_name' => 'field_comments',
    'label' => 'Comments',
    'required' => 0,
    'settings' => array(
      'text_processing' => 0,
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'text',
      'settings' => array(
        'rows' => 3,
      ),
      'type' => 'text_textarea',
      'weight' => 19,
    ),
  );

  // Exported field_instance: 'node-image-field_credit'.
  $field_instances['node-image-field_credit'] = array(
    'bundle' => 'image',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => 'The credit that appears on the image. For Getty this will typically be formatted as either "Getty Images" or "//Getty Images"',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 6,
      ),
      'image_150x150' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 7,
      ),
      'image_300x300' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 6,
      ),
      'image_420x420' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 2,
      ),
      'image_500xVariable' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 2,
      ),
      'image_768x768' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 2,
      ),
      'image_thumb' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 5,
      ),
      'pronto_json' => array(
        'label' => 'hidden',
        'module' => 'pronto_component_text',
        'settings' => array(
          'set' => array(
            0 => array(
              'backfill_field' => '',
              'bubble_up' => 0,
              'component_type' => 'components/article/hero-image',
              'merge_group' => 'article/hero-image',
              'pronto_filter_text_field' => 'pronto_inline_html',
              'uri_friendly' => 0,
              'value_key' => 'data][credit',
              'version' => 1,
              'source_key' => 'value',
              'split_block_elements' => FALSE,
              'view_mode' => array(
                'file' => '',
                'node' => '',
              ),
              'items_output_limit' => NULL,
              'merge_elements' => FALSE,
              'merge_siblings' => FALSE,
              'merge_parents' => '',
            ),
          ),
        ),
        'type' => 'pronto_component_text',
        'weight' => 2,
      ),
      'pronto_json_inline_embed' => array(
        'label' => 'above',
        'module' => 'pronto_component_text',
        'settings' => array(
          'set' => array(
            0 => array(
              'backfill_field' => '',
              'conditional_xor_field' => '',
              'component_type' => 'components/article/figure',
              'version' => 1,
              'value_key' => 'data][credit',
              'merge_group' => 'article/figure/[node:nid]',
              'bubble_up' => 0,
              'uri_friendly' => 0,
              'pronto_filter_text_field' => 'pronto_inline_html',
              'source_key' => 'value',
              'convert_list_to_array' => 0,
              'convert_comma_to_array' => 0,
              'split_block_elements' => 0,
              'value_replace_tokens_template' => '',
              'view_mode' => array(
                'file' => 'pronto_json',
                'node' => 'pronto_json',
              ),
              'items_output_limit' => 1,
              'merge_elements' => 0,
              'merge_siblings' => 0,
              'merge_parents' => '',
            ),
          ),
        ),
        'type' => 'pronto_component_text',
        'weight' => 6,
      ),
      'pronto_json_slides' => array(
        'label' => 'above',
        'module' => 'pronto_component_text',
        'settings' => array(
          'set' => array(
            0 => array(
              'backfill_field' => '',
              'conditional_xor_field' => '',
              'component_type' => 'components/article/figure',
              'version' => 1,
              'value_key' => 'data][credit',
              'merge_group' => 'article/figure',
              'bubble_up' => 0,
              'uri_friendly' => 0,
              'pronto_filter_text_field' => 'pronto_inline_html',
              'source_key' => 'value',
              'convert_list_to_array' => 0,
              'split_block_elements' => 0,
              'view_mode' => array(
                'file' => 'pronto_json',
                'node' => 'pronto_json',
              ),
              'items_output_limit' => 1,
              'merge_elements' => 0,
              'merge_siblings' => 0,
              'merge_parents' => '',
            ),
          ),
        ),
        'type' => 'pronto_component_text',
        'weight' => 32,
      ),
      'teaser' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
      'tout_channel_left_nav' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
      'ut_image_embed' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 7,
      ),
      'xmlsitemap' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 6,
      ),
    ),
    'entity_type' => 'node',
    'fences_wrapper' => 'div',
    'field_name' => 'field_credit',
    'label' => 'Credits',
    'required' => 1,
    'settings' => array(
      'better_formats' => array(
        'allowed_formats' => array(
          'after_pronto_blockhtml' => 0,
          'after_pronto_body_process' => 0,
          'after_pronto_inlinehtml' => 0,
          'article_html' => 0,
          'etag_mapping' => 0,
          'filtered_html' => 0,
          'full_html' => 0,
          'fw_headline_html' => 'fw_headline_html',
          'headline_html' => 0,
          'mini_text_format' => 0,
          'plain_text' => 'plain_text',
          'pronto_block_html' => 0,
          'pronto_body_process' => 0,
          'pronto_inline_html' => 0,
          'slack_text' => 0,
          'wysiwyg' => 0,
          'xmlsitemap_html_removed' => 0,
        ),
        'allowed_formats_toggle' => 1,
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
            'slack_text' => array(
              'weight' => 0,
            ),
            'wysiwyg' => array(
              'weight' => 0,
            ),
            'xmlsitemap_html_removed' => array(
              'weight' => 0,
            ),
          ),
        ),
      ),
      'text_processing' => 1,
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'text',
      'settings' => array(
        'maxlength_js' => '',
        'maxlength_js_enforce' => 0,
        'maxlength_js_label' => 'Content limited to @limit characters, remaining: <strong>@remaining</strong>',
        'maxlength_js_truncate_html' => 0,
        'rows' => 5,
      ),
      'type' => 'text_textarea',
      'weight' => 43,
    ),
  );

  // Exported field_instance: 'node-image-field_dimensions'.
  $field_instances['node-image-field_dimensions'] = array(
    'bundle' => 'image',
    'check_existing' => 0,
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 14,
      ),
      'image_150x150' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
      'image_300x300' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
      'image_420x420' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
      'image_500xVariable' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
      'image_768x768' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
      'image_thumb' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
      'pronto_json' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 27,
      ),
      'pronto_json_inline_embed' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 14,
      ),
      'pronto_json_slides' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 41,
      ),
      'teaser' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
      'ut_image_embed' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 14,
      ),
      'xmlsitemap' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 14,
      ),
    ),
    'enable_linked_field' => 0,
    'entity_type' => 'node',
    'fences_wrapper' => 'div',
    'field_name' => 'field_dimensions',
    'label' => 'Dimensions',
    'linked_to' => 'field_alt_text',
    'required' => 0,
    'settings' => array(
      'better_formats' => array(
        'allowed_formats' => array(
          'filtered_html' => 'filtered_html',
          'full_html' => 'full_html',
          'plain_text' => 'plain_text',
          'wysiwyg' => 'wysiwyg',
        ),
        'allowed_formats_toggle' => 0,
        'default_order_toggle' => 0,
        'default_order_wrapper' => array(
          'formats' => array(
            'filtered_html' => array(
              'weight' => 0,
            ),
            'full_html' => array(
              'weight' => 0,
            ),
            'plain_text' => array(
              'weight' => 10,
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
      'weight' => 15,
    ),
  );

  // Exported field_instance: 'node-image-field_headline'.
  $field_instances['node-image-field_headline'] = array(
    'bundle' => 'image',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'hidden',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 24,
      ),
      'image_150x150' => array(
        'label' => 'hidden',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 10,
      ),
      'image_300x300' => array(
        'label' => 'hidden',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 9,
      ),
      'image_420x420' => array(
        'label' => 'hidden',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 4,
      ),
      'image_500xVariable' => array(
        'label' => 'hidden',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 6,
      ),
      'image_768x768' => array(
        'label' => 'hidden',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 4,
      ),
      'image_thumb' => array(
        'label' => 'hidden',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 9,
      ),
      'pronto_json' => array(
        'label' => 'hidden',
        'module' => 'pronto_component_text',
        'settings' => array(
          'set' => array(
            0 => array(
              'uri_friendly' => FALSE,
              'pronto_filter_text_field' => NULL,
              'source_key' => 'value',
              'convert_list_to_array' => FALSE,
              'split_block_elements' => FALSE,
              'value_replace_tokens_template' => FALSE,
              'view_mode' => array(),
              'backfill_field' => '',
              'conditional_xor_field' => '',
              'component_type' => '',
              'version' => 1,
              'value_key' => '',
              'merge_group' => '',
              'bubble_up' => FALSE,
              'items_output_limit' => NULL,
              'merge_elements' => FALSE,
              'merge_siblings' => FALSE,
              'merge_parents' => '',
            ),
          ),
        ),
        'type' => 'pronto_component_text',
        'weight' => 9,
      ),
      'pronto_json_inline_embed' => array(
        'label' => 'hidden',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 24,
      ),
      'pronto_json_slides' => array(
        'label' => 'hidden',
        'module' => 'pronto_component_text',
        'settings' => array(
          'set' => array(
            0 => array(
              'backfill_field' => '',
              'conditional_xor_field' => '',
              'component_type' => 'components/gallery/slides',
              'version' => 1,
              'value_key' => 'data][slides][0][title',
              'merge_group' => 'gallery/slides',
              'bubble_up' => 1,
              'uri_friendly' => 0,
              'pronto_filter_text_field' => 'pronto_inline_html',
              'source_key' => 'value',
              'convert_list_to_array' => 0,
              'split_block_elements' => 0,
              'view_mode' => array(
                'file' => 'pronto_json',
                'node' => 'pronto_json',
              ),
              'items_output_limit' => 1,
              'merge_elements' => 0,
              'merge_siblings' => 0,
              'merge_parents' => '',
            ),
          ),
        ),
        'type' => 'pronto_component_text',
        'weight' => 5,
      ),
      'teaser' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
      'tout_channel_left_nav' => array(
        'label' => 'hidden',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 5,
      ),
      'ut_image_embed' => array(
        'label' => 'hidden',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 24,
      ),
      'xmlsitemap' => array(
        'label' => 'hidden',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 24,
      ),
    ),
    'entity_type' => 'node',
    'fences_wrapper' => 'div',
    'field_name' => 'field_headline',
    'label' => 'Headline',
    'required' => 0,
    'settings' => array(
      'better_formats' => array(
        'allowed_formats' => array(
          'filtered_html' => 0,
          'full_html' => 0,
          'fw_headline_html' => 'fw_headline_html',
          'mini_text_format' => 0,
          'plain_text' => 'plain_text',
          'pronto_block_html' => 0,
          'pronto_body_process' => 0,
          'pronto_inline_html' => 0,
          'wysiwyg' => 0,
        ),
        'allowed_formats_toggle' => 1,
        'default_order_toggle' => 0,
        'default_order_wrapper' => array(
          'formats' => array(
            'filtered_html' => array(
              'weight' => 0,
            ),
            'full_html' => array(
              'weight' => 1,
            ),
            'fw_headline_html' => array(
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
      'text_processing' => 1,
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'text',
      'settings' => array(
        'maxlength_js' => '',
        'maxlength_js_enforce' => 0,
        'maxlength_js_label' => 'Content limited to @limit characters, remaining: <strong>@remaining</strong>',
        'maxlength_js_truncate_html' => 0,
        'rows' => 5,
      ),
      'type' => 'text_textarea',
      'weight' => 2,
    ),
  );

  // Exported field_instance: 'node-image-field_image'.
  $field_instances['node-image-field_image'] = array(
    'bundle' => 'image',
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'hidden',
        'module' => 'image',
        'settings' => array(
          'image_link' => '',
          'image_style' => '',
        ),
        'type' => 'image',
        'weight' => 7,
      ),
      'image_150x150' => array(
        'label' => 'hidden',
        'module' => 'image',
        'settings' => array(
          'image_link' => '',
          'image_style' => '150x150',
        ),
        'type' => 'image',
        'weight' => 0,
      ),
      'image_300x300' => array(
        'label' => 'hidden',
        'module' => 'image',
        'settings' => array(
          'image_link' => '',
          'image_style' => '300x300',
        ),
        'type' => 'image',
        'weight' => 10,
      ),
      'image_420x420' => array(
        'label' => 'hidden',
        'module' => 'image',
        'settings' => array(
          'image_link' => '',
          'image_style' => '420x420',
        ),
        'type' => 'image',
        'weight' => 0,
      ),
      'image_500xVariable' => array(
        'label' => 'hidden',
        'module' => 'image',
        'settings' => array(
          'image_link' => '',
          'image_style' => '500x500',
        ),
        'type' => 'image',
        'weight' => 0,
      ),
      'image_768x768' => array(
        'label' => 'hidden',
        'module' => 'image',
        'settings' => array(
          'image_link' => '',
          'image_style' => '768x768',
        ),
        'type' => 'image',
        'weight' => 0,
      ),
      'image_thumb' => array(
        'label' => 'hidden',
        'module' => 'image',
        'settings' => array(
          'image_link' => '',
          'image_style' => '75x75',
        ),
        'type' => 'image',
        'weight' => 0,
      ),
      'pronto_json' => array(
        'label' => 'hidden',
        'module' => 'pronto_component_image',
        'settings' => array(
          'image_set' => array(
            0 => array(
              'backfill_field' => '',
              'component_type' => 'components/article/hero-image',
              'version' => 1,
              'value_key' => 'data][src',
              'merge_group' => 'article/hero-image',
              'bubble_up' => 0,
              'source_key' => 'uri',
              'image_style' => '',
              'dereference_stream_wrapper' => 1,
              'include_dimensions' => 1,
            ),
            1 => array(
              'backfill_field' => '',
              'bubble_up' => 0,
              'component_type' => '',
              'dereference_stream_wrapper' => 0,
              'image_style' => '',
              'include_dimensions' => 0,
              'merge_group' => '',
              'source_key' => '',
              'value_key' => '',
              'version' => 1,
            ),
          ),
        ),
        'type' => 'pronto_component_image',
        'weight' => 0,
      ),
      'pronto_json_inline_embed' => array(
        'label' => 'hidden',
        'module' => 'pronto_component_image',
        'settings' => array(
          'image_set' => array(
            0 => array(
              'backfill_field' => '',
              'conditional_xor_field' => '',
              'component_type' => 'components/article/figure',
              'version' => 1,
              'value_key' => 'data][src',
              'merge_group' => 'article/figure/[node:nid]',
              'bubble_up' => 0,
              'source_key' => 'uri',
              'image_style' => '',
              'choose_dynamic_styles' => 0,
              'choose_dynamic_styles_for_landscape' => '',
              'choose_dynamic_styles_for_portrait' => '',
              'choose_dynamic_styles_for_square' => '',
              'dereference_stream_wrapper' => 1,
              'include_dimensions' => 1,
            ),
          ),
        ),
        'type' => 'pronto_component_image',
        'weight' => 7,
      ),
      'pronto_json_slides' => array(
        'label' => 'hidden',
        'module' => 'pronto_component_image',
        'settings' => array(
          'image_set' => array(
            0 => array(
              'backfill_field' => '',
              'conditional_xor_field' => '',
              'component_type' => 'components/article/figure',
              'version' => 1,
              'value_key' => 'data][src',
              'merge_group' => 'article/figure',
              'bubble_up' => 0,
              'source_key' => 'uri',
              'image_style' => '',
              'dereference_stream_wrapper' => 1,
              'include_dimensions' => 1,
            ),
            1 => array(
              'backfill_field' => '',
              'bubble_up' => 0,
              'component_type' => 'components/article/figure',
              'conditional_xor_field' => '',
              'dereference_stream_wrapper' => 1,
              'image_style' => 'large',
              'include_dimensions' => 1,
              'merge_group' => 'article/figure',
              'source_key' => 'uri',
              'value_key' => 'data][crops][large][src',
              'version' => 1,
            ),
            2 => array(
              'backfill_field' => '',
              'bubble_up' => 0,
              'component_type' => 'components/article/figure',
              'conditional_xor_field' => '',
              'dereference_stream_wrapper' => 1,
              'image_style' => 'thumbnail',
              'include_dimensions' => 1,
              'merge_group' => 'article/figure',
              'source_key' => 'uri',
              'value_key' => 'data][crops][thumbnail][src',
              'version' => 1,
            ),
            3 => array(
              'backfill_field' => '',
              'bubble_up' => 0,
              'component_type' => '',
              'conditional_xor_field' => '',
              'dereference_stream_wrapper' => 0,
              'image_style' => '',
              'include_dimensions' => 0,
              'merge_group' => '',
              'source_key' => '',
              'value_key' => '',
              'version' => 1,
            ),
          ),
        ),
        'type' => 'pronto_component_image',
        'weight' => 7,
      ),
      'teaser' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
      'tout_channel_left_nav' => array(
        'label' => 'hidden',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 7,
      ),
      'ut_image_embed' => array(
        'label' => 'hidden',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
      'xmlsitemap' => array(
        'label' => 'hidden',
        'module' => 'xmlsitemap_image_formatter',
        'settings' => array(
          'backfill_field' => '',
          'image_style' => 'fwrd_280x280',
          'items_output_limit' => 1,
          'xmlsitemap_tag' => 'image:image][image:loc',
        ),
        'type' => 'xmlsitemap_image_element_api',
        'weight' => 7,
      ),
    ),
    'entity_type' => 'node',
    'field_name' => 'field_image',
    'label' => 'Image',
    'required' => 0,
    'settings' => array(
      'alt_field' => 0,
      'default_image' => 0,
      'file_directory' => '',
      'file_extensions' => 'png gif jpg jpeg',
      'max_filesize' => '',
      'max_resolution' => '',
      'min_resolution' => '',
      'title_field' => 0,
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'image',
      'settings' => array(
        'preview_image_style' => 'thumbnail',
        'progress_indicator' => 'throbber',
      ),
      'type' => 'image_image',
      'weight' => 2,
    ),
  );

  // Exported field_instance: 'node-image-field_image_large_thumb'.
  $field_instances['node-image-field_image_large_thumb'] = array(
    'bundle' => 'image',
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 8,
      ),
      'image_150x150' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
      'image_300x300' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
      'image_420x420' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
      'image_500xVariable' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
      'image_768x768' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
      'image_thumb' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
      'pronto_json' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 21,
      ),
      'pronto_json_inline_embed' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 8,
      ),
      'pronto_json_slides' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 35,
      ),
      'teaser' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
      'ut_image_embed' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 8,
      ),
      'xmlsitemap' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 8,
      ),
    ),
    'entity_type' => 'node',
    'fences_wrapper' => 'div',
    'field_name' => 'field_image_large_thumb',
    'label' => 'Large Thumbnail',
    'required' => 0,
    'settings' => array(
      'alt_field' => 0,
      'default_image' => 0,
      'file_directory' => 'styles/large_thumbnail/public',
      'file_extensions' => 'png gif jpg jpeg',
      'max_filesize' => '',
      'max_resolution' => '',
      'min_resolution' => '',
      'title_field' => 0,
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'image',
      'settings' => array(
        'maxlength_js_label' => 'Content limited to @limit characters, remaining: <strong>@remaining</strong>',
        'preview_image_style' => 'large_thumbnail',
        'progress_indicator' => 'throbber',
      ),
      'type' => 'image_image',
      'weight' => 10,
    ),
  );

  // Exported field_instance: 'node-image-field_image_other_crop'.
  $field_instances['node-image-field_image_other_crop'] = array(
    'bundle' => 'image',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 9,
      ),
      'image_150x150' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
      'image_300x300' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
      'image_420x420' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
      'image_500xVariable' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
      'image_768x768' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
      'image_thumb' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
      'pronto_json' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 22,
      ),
      'pronto_json_inline_embed' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 9,
      ),
      'pronto_json_slides' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 36,
      ),
      'teaser' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
      'ut_image_embed' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 9,
      ),
      'xmlsitemap' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 9,
      ),
    ),
    'entity_type' => 'node',
    'fences_wrapper' => 'div',
    'field_name' => 'field_image_other_crop',
    'label' => 'Custom Crop',
    'required' => 0,
    'settings' => array(
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 0,
      'module' => 'entityreference',
      'settings' => array(
        'match_operator' => 'CONTAINS',
        'maxlength_js_label' => 'Content limited to @limit characters, remaining: <strong>@remaining</strong>',
        'path' => '',
        'size' => 20,
        'ti_editorial_entityreference_search' => array(
          'ti_editorial_entityreference_search_add_search' => 1,
          'ti_editorial_entityreference_search_view' => 'entity_reference_search:page_2',
        ),
      ),
      'type' => 'entityreference_autocomplete',
      'weight' => 11,
    ),
  );

  // Exported field_instance: 'node-image-field_image_path'.
  $field_instances['node-image-field_image_path'] = array(
    'bundle' => 'image',
    'check_existing' => 0,
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 13,
      ),
      'image_150x150' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
      'image_300x300' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
      'image_420x420' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
      'image_500xVariable' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
      'image_768x768' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
      'image_thumb' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
      'pronto_json' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 26,
      ),
      'pronto_json_inline_embed' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 13,
      ),
      'pronto_json_slides' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 40,
      ),
      'teaser' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
      'ut_image_embed' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 13,
      ),
      'xmlsitemap' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 13,
      ),
    ),
    'enable_linked_field' => 0,
    'entity_type' => 'node',
    'fences_wrapper' => 'div',
    'field_name' => 'field_image_path',
    'label' => 'Image URL',
    'linked_to' => 'field_alt_text',
    'required' => 0,
    'settings' => array(
      'better_formats' => array(
        'allowed_formats' => array(
          'filtered_html' => 'filtered_html',
          'full_html' => 'full_html',
          'plain_text' => 'plain_text',
          'wysiwyg' => 'wysiwyg',
        ),
        'allowed_formats_toggle' => 0,
        'default_order_toggle' => 0,
        'default_order_wrapper' => array(
          'formats' => array(
            'filtered_html' => array(
              'weight' => 0,
            ),
            'full_html' => array(
              'weight' => 0,
            ),
            'plain_text' => array(
              'weight' => 10,
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
      'weight' => 20,
    ),
  );

  // Exported field_instance: 'node-image-field_image_rights'.
  $field_instances['node-image-field_image_rights'] = array(
    'bundle' => 'image',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 11,
      ),
      'image_150x150' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
      'image_300x300' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
      'image_420x420' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
      'image_500xVariable' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
      'image_768x768' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
      'image_thumb' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
      'pronto_json' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 24,
      ),
      'pronto_json_inline_embed' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 11,
      ),
      'pronto_json_slides' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 38,
      ),
      'teaser' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
      'ut_image_embed' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 10,
      ),
      'xmlsitemap' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 11,
      ),
    ),
    'entity_type' => 'node',
    'fences_wrapper' => 'div',
    'field_name' => 'field_image_rights',
    'label' => 'Rights',
    'required' => 0,
    'settings' => array(
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 0,
      'module' => 'taxonomy',
      'settings' => array(
        'autocomplete_path' => 'taxonomy/autocomplete',
        'maxlength_js_label' => 'Content limited to @limit characters, remaining: <strong>@remaining</strong>',
        'size' => 60,
      ),
      'type' => 'taxonomy_autocomplete',
      'weight' => 4,
    ),
  );

  // Exported field_instance: 'node-image-field_image_rights_notes'.
  $field_instances['node-image-field_image_rights_notes'] = array(
    'bundle' => 'image',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 12,
      ),
      'image_150x150' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
      'image_300x300' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
      'image_420x420' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
      'image_500xVariable' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
      'image_768x768' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
      'image_thumb' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
      'pronto_json' => array(
        'label' => 'above',
        'module' => 'pronto_component_text',
        'settings' => array(
          'set' => array(
            0 => array(
              'backfill_field' => '',
              'conditional_xor_field' => 'field_image_rights_asset_type',
              'conditional_render_settings' => 1,
              'component_type' => 'components/article/hero-image',
              'version' => 1,
              'value_key' => 'data][rights][rightsNotes',
              'merge_group' => 'article/hero-image',
              'bubble_up' => 0,
              'uri_friendly' => 0,
              'pronto_filter_text_field' => 'pronto_inline_html',
              'source_key' => 'value',
              'convert_list_to_array' => 0,
              'convert_comma_to_array' => 0,
              'split_block_elements' => 0,
              'value_replace_tokens_template' => '',
              'view_mode' => array(
                'file' => 'pronto_json',
                'node' => 'pronto_json',
              ),
              'items_output_limit' => 1,
              'merge_elements' => 0,
              'merge_siblings' => 0,
              'merge_parents' => '',
            ),
            1 => array(
              'backfill_field' => '',
              'bubble_up' => 0,
              'component_type' => '',
              'conditional_render_settings' => 0,
              'conditional_xor_field' => '',
              'convert_comma_to_array' => 0,
              'convert_list_to_array' => 0,
              'items_output_limit' => 1,
              'merge_elements' => 0,
              'merge_group' => '',
              'merge_parents' => '',
              'merge_siblings' => 0,
              'pronto_filter_text_field' => 'wysiwyg',
              'source_key' => 'value',
              'split_block_elements' => 0,
              'uri_friendly' => 0,
              'value_key' => '',
              'value_replace_tokens_template' => '',
              'version' => 1,
              'view_mode' => array(
                'file' => 'pronto_json',
                'node' => 'pronto_json',
              ),
            ),
          ),
        ),
        'type' => 'pronto_component_text',
        'weight' => 58,
      ),
      'pronto_json_inline_embed' => array(
        'label' => 'above',
        'module' => 'pronto_component_text',
        'settings' => array(
          'set' => array(
            0 => array(
              'backfill_field' => '',
              'conditional_xor_field' => 'field_image_rights_asset_type',
              'conditional_render_settings' => 1,
              'component_type' => 'components/article/figure',
              'version' => 1,
              'value_key' => 'data][rights][rightsNotes',
              'merge_group' => 'article/figure/[node:nid]',
              'bubble_up' => 0,
              'uri_friendly' => 0,
              'pronto_filter_text_field' => 'pronto_inline_html',
              'source_key' => 'value',
              'convert_list_to_array' => 0,
              'convert_comma_to_array' => 0,
              'split_block_elements' => 0,
              'value_replace_tokens_template' => '',
              'view_mode' => array(
                'file' => 'pronto_json',
                'node' => 'pronto_json',
              ),
              'items_output_limit' => 1,
              'merge_elements' => 0,
              'merge_siblings' => 0,
              'merge_parents' => '',
            ),
          ),
        ),
        'type' => 'pronto_component_text',
        'weight' => 58,
      ),
      'pronto_json_slides' => array(
        'label' => 'above',
        'module' => 'pronto_component_text',
        'settings' => array(
          'set' => array(
            0 => array(
              'backfill_field' => '',
              'conditional_xor_field' => 'field_image_rights_asset_type',
              'conditional_render_settings' => 1,
              'component_type' => 'components/article/figure',
              'version' => 1,
              'value_key' => 'data][rights][rightsNotes',
              'merge_group' => 'article/figure',
              'bubble_up' => 0,
              'uri_friendly' => 0,
              'pronto_filter_text_field' => 'pronto_inline_html',
              'source_key' => 'value',
              'convert_list_to_array' => 0,
              'convert_comma_to_array' => 0,
              'split_block_elements' => 0,
              'value_replace_tokens_template' => '',
              'view_mode' => array(
                'file' => 'pronto_json',
                'node' => 'pronto_json',
              ),
              'items_output_limit' => 1,
              'merge_elements' => 0,
              'merge_siblings' => 0,
              'merge_parents' => '',
            ),
            1 => array(
              'backfill_field' => '',
              'bubble_up' => 0,
              'component_type' => '',
              'conditional_render_settings' => 0,
              'conditional_xor_field' => '',
              'convert_comma_to_array' => 0,
              'convert_list_to_array' => 0,
              'items_output_limit' => 1,
              'merge_elements' => 0,
              'merge_group' => '',
              'merge_parents' => '',
              'merge_siblings' => 0,
              'pronto_filter_text_field' => 'wysiwyg',
              'source_key' => 'value',
              'split_block_elements' => 0,
              'uri_friendly' => 0,
              'value_key' => '',
              'value_replace_tokens_template' => '',
              'version' => 1,
              'view_mode' => array(
                'file' => 'pronto_json',
                'node' => 'pronto_json',
              ),
            ),
          ),
        ),
        'type' => 'pronto_component_text',
        'weight' => 58,
      ),
      'teaser' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
      'ut_image_embed' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 12,
      ),
      'xmlsitemap' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 12,
      ),
    ),
    'entity_type' => 'node',
    'fences_wrapper' => 'div',
    'field_name' => 'field_image_rights_notes',
    'label' => 'Rights Notes',
    'required' => 0,
    'settings' => array(
      'better_formats' => array(
        'allowed_formats' => array(
          'filtered_html' => 'filtered_html',
          'full_html' => 'full_html',
          'plain_text' => 'plain_text',
          'wysiwyg' => 'wysiwyg',
        ),
        'allowed_formats_toggle' => 0,
        'default_order_toggle' => 0,
        'default_order_wrapper' => array(
          'formats' => array(
            'filtered_html' => array(
              'weight' => 0,
            ),
            'full_html' => array(
              'weight' => 0,
            ),
            'plain_text' => array(
              'weight' => 10,
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
        'maxlength_js' => '',
        'maxlength_js_enforce' => 0,
        'maxlength_js_label' => 'Content limited to @limit characters, remaining: <strong>@remaining</strong>',
        'maxlength_js_truncate_html' => 0,
        'rows' => 5,
        'size' => 60,
      ),
      'type' => 'text_textfield',
      'weight' => 42,
    ),
  );

  // Exported field_instance: 'node-image-field_legacy_id'.
  $field_instances['node-image-field_legacy_id'] = array(
    'bundle' => 'image',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'hidden',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 26,
      ),
      'image_150x150' => array(
        'label' => 'hidden',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 12,
      ),
      'image_300x300' => array(
        'label' => 'hidden',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 11,
      ),
      'image_420x420' => array(
        'label' => 'hidden',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 8,
      ),
      'image_500xVariable' => array(
        'label' => 'hidden',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 8,
      ),
      'image_768x768' => array(
        'label' => 'hidden',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 8,
      ),
      'image_thumb' => array(
        'label' => 'hidden',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 11,
      ),
      'pronto_json' => array(
        'label' => 'hidden',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 12,
      ),
      'pronto_json_inline_embed' => array(
        'label' => 'hidden',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 26,
      ),
      'pronto_json_slides' => array(
        'label' => 'hidden',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 8,
      ),
      'teaser' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
      'tout_channel_left_nav' => array(
        'label' => 'hidden',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 8,
      ),
      'ut_image_embed' => array(
        'label' => 'hidden',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 26,
      ),
      'xmlsitemap' => array(
        'label' => 'hidden',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 26,
      ),
    ),
    'entity_type' => 'node',
    'field_name' => 'field_legacy_id',
    'label' => 'Legacy ID',
    'required' => 0,
    'settings' => array(
      'text_processing' => 0,
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'text',
      'settings' => array(
        'size' => 60,
      ),
      'type' => 'text_textfield',
      'weight' => 10,
    ),
  );

  // Exported field_instance: 'node-image-field_main_image'.
  $field_instances['node-image-field_main_image'] = array(
    'bundle' => 'image',
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 5,
      ),
      'image_150x150' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
      'image_300x300' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
      'image_420x420' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
      'image_500xVariable' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
      'image_768x768' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
      'image_thumb' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
      'pronto_json' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 23,
      ),
      'pronto_json_inline_embed' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 5,
      ),
      'pronto_json_slides' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 37,
      ),
      'teaser' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
      'ut_image_embed' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 6,
      ),
      'xmlsitemap' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 5,
      ),
    ),
    'entity_type' => 'node',
    'fences_wrapper' => 'div',
    'field_name' => 'field_main_image',
    'label' => 'Main Image',
    'required' => 0,
    'settings' => array(
      'alt_field' => 0,
      'default_image' => 0,
      'file_directory' => 'styles/main/public',
      'file_extensions' => 'png gif jpg jpeg',
      'max_filesize' => '',
      'max_resolution' => '',
      'min_resolution' => '',
      'title_field' => 0,
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'image',
      'settings' => array(
        'maxlength_js_label' => 'Content limited to @limit characters, remaining: <strong>@remaining</strong>',
        'preview_image_style' => 'thumbnail',
        'progress_indicator' => 'throbber',
      ),
      'type' => 'image_image',
      'weight' => 8,
    ),
  );

  // Exported field_instance: 'node-image-field_slide_related_link'.
  $field_instances['node-image-field_slide_related_link'] = array(
    'bundle' => 'image',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'link',
        'settings' => array(),
        'type' => 'link_default',
        'weight' => 46,
      ),
      'image_150x150' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
      'image_300x300' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
      'image_420x420' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
      'image_500xVariable' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
      'image_768x768' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
      'image_thumb' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
      'pronto_json' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
      'pronto_json_inline_embed' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 46,
      ),
      'pronto_json_slides' => array(
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
      'ut_image_embed' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
      'xmlsitemap' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'node',
    'fences_wrapper' => 'div',
    'field_name' => 'field_slide_related_link',
    'label' => 'Slide Related Link',
    'required' => 0,
    'settings' => array(
      'absolute_url' => 1,
      'attributes' => array(
        'class' => '',
        'configurable_class' => 0,
        'configurable_title' => 0,
        'rel' => '',
        'target' => 'default',
        'title' => '',
      ),
      'display' => array(
        'url_cutoff' => 80,
      ),
      'enable_tokens' => 1,
      'rel_remove' => 'default',
      'title' => 'optional',
      'title_label_use_field_label' => 0,
      'title_maxlength' => 128,
      'title_value' => '',
      'url' => 0,
      'user_register_form' => FALSE,
      'validate_url' => 1,
    ),
    'widget' => array(
      'active' => 0,
      'module' => 'link',
      'settings' => array(
        'maxlength_js_label' => 'Content limited to @limit characters, remaining: <strong>@remaining</strong>',
      ),
      'type' => 'link_field',
      'weight' => 9,
    ),
  );

  // Translatables
  // Included for use with string extractors like potx.
  t('Alt Text');
  t('Caption');
  t('Comments');
  t('Credits');
  t('Custom Crop');
  t('Dimensions');
  t('Headline');
  t('Image');
  t('Image URL');
  t('Large Thumbnail');
  t('Legacy ID');
  t('Main Image');
  t('Rights');
  t('Rights Notes');
  t('Slide Related Link');
  t('The credit that appears on the image. For Getty this will typically be formatted as either "Getty Images" or "//Getty Images"');

  return $field_instances;
}
