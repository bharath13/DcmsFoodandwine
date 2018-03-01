<?php
/**
 * @file
 * ti_basicpage_content_type.features.field_instance.inc
 */

/**
 * Implements hook_field_default_field_instances().
 */
function ti_basicpage_content_type_field_default_field_instances() {
  $field_instances = array();

  // Exported field_instance: 'node-page-body'.
  $field_instances['node-page-body'] = array(
    'bundle' => 'page',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'hidden',
        'module' => 'text',
        'settings' => array(),
        'type' => 'text_default',
        'weight' => 0,
      ),
      'teaser' => array(
        'label' => 'hidden',
        'module' => 'text',
        'settings' => array(
          'trim_length' => 600,
        ),
        'type' => 'text_summary_or_trimmed',
        'weight' => 0,
      ),
      'xmlsitemap' => array(
        'label' => 'hidden',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
      'xmlsitemap_image' => array(
        'label' => 'hidden',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
      'xmlsitemap_news' => array(
        'label' => 'hidden',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 16,
      ),
    ),
    'entity_type' => 'node',
    'fences_wrapper' => 'div',
    'field_name' => 'body',
    'label' => 'Body',
    'required' => 0,
    'settings' => array(
      'better_formats' => array(
        'allowed_formats' => array(
          'filtered_html' => 0,
          'full_html' => 'full_html',
          'plain_text' => 0,
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
      'display_summary' => 1,
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
        'rows' => 20,
        'summary_rows' => 5,
      ),
      'type' => 'text_textarea_with_summary',
      'weight' => 1,
    ),
  );

  // Exported field_instance: 'node-page-field_ad_keys'.
  $field_instances['node-page-field_ad_keys'] = array(
    'bundle' => 'page',
    'check_existing' => 0,
    'default_value' => NULL,
    'deleted' => 0,
    'description' => 'Adversing keys, needs to be in key=value format, ex. category=entertainment',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'text',
        'settings' => array(),
        'type' => 'text_default',
        'weight' => 4,
      ),
      'teaser' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
      'xmlsitemap' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 4,
      ),
      'xmlsitemap_image' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 4,
      ),
      'xmlsitemap_news' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 22,
      ),
    ),
    'enable_linked_field' => 0,
    'entity_type' => 'node',
    'fences_wrapper' => 'div',
    'field_name' => 'field_ad_keys',
    'label' => 'Ad Key',
    'linked_to' => 'field_legacy_id',
    'required' => 0,
    'settings' => array(
      'better_formats' => array(
        'allowed_formats' => array(
          'after_pronto_blockhtml' => 0,
          'after_pronto_body_process' => 0,
          'after_pronto_inlinehtml' => 0,
          'article_html' => 0,
          'etag_mapping' => 0,
          'filtered_html' => 'filtered_html',
          'full_html' => 'full_html',
          'fw_headline_html' => 0,
          'headline_html' => 0,
          'mini_text_format' => 'mini_text_format',
          'mm_html' => 0,
          'plain_text' => 'plain_text',
          'pronto_block_html' => 0,
          'pronto_body_process' => 0,
          'pronto_inline_html' => 0,
          'slack_text' => 0,
          'wysiwyg' => 'wysiwyg',
          'xmlsitemap_html_removed' => 0,
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
            'mm_html' => array(
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
      'weight' => 7,
    ),
  );

  // Exported field_instance: 'node-page-field_ad_value'.
  $field_instances['node-page-field_ad_value'] = array(
    'bundle' => 'page',
    'check_existing' => 0,
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'text',
        'settings' => array(),
        'type' => 'text_default',
        'weight' => 10,
      ),
      'teaser' => array(
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
      'xmlsitemap_image' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
      'xmlsitemap_news' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 28,
      ),
    ),
    'enable_linked_field' => 0,
    'entity_type' => 'node',
    'fences_wrapper' => 'div',
    'field_name' => 'field_ad_value',
    'label' => 'Ad value',
    'linked_to' => 'field_legacy_id',
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
          'mm_html' => 'mm_html',
          'plain_text' => 'plain_text',
          'pronto_block_html' => 'pronto_block_html',
          'pronto_body_process' => 'pronto_body_process',
          'pronto_inline_html' => 'pronto_inline_html',
          'slack_text' => 'slack_text',
          'wysiwyg' => 'wysiwyg',
          'xmlsitemap_html_removed' => 'xmlsitemap_html_removed',
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
            'mm_html' => array(
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
      'weight' => 8,
    ),
  );

  // Exported field_instance: 'node-page-field_attachments'.
  $field_instances['node-page-field_attachments'] = array(
    'bundle' => 'page',
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'file',
        'settings' => array(),
        'type' => 'file_default',
        'weight' => 2,
      ),
      'teaser' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
      'xmlsitemap' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 2,
      ),
      'xmlsitemap_image' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 2,
      ),
      'xmlsitemap_news' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 20,
      ),
    ),
    'entity_type' => 'node',
    'fences_wrapper' => 'div',
    'field_name' => 'field_attachments',
    'label' => 'Attachments',
    'required' => 0,
    'settings' => array(
      'description_field' => 0,
      'file_directory' => 'generic-page',
      'file_extensions' => 'css js',
      'max_filesize' => '',
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'file',
      'settings' => array(
        'maxlength_js_label' => 'Content limited to @limit characters, remaining: <strong>@remaining</strong>',
        'progress_indicator' => 'throbber',
        'ti_editorial_file_search' => array(
          'ti_editorial_file_search_add_search' => 0,
          'ti_editorial_file_search_view' => '',
        ),
      ),
      'type' => 'file_generic',
      'weight' => 2,
    ),
  );

  // Exported field_instance: 'node-page-field_custom_css'.
  $field_instances['node-page-field_custom_css'] = array(
    'bundle' => 'page',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => 'To add custom css for the page',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'text',
        'settings' => array(),
        'type' => 'text_default',
        'weight' => 5,
      ),
      'teaser' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
      'xmlsitemap' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 5,
      ),
      'xmlsitemap_image' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 5,
      ),
      'xmlsitemap_news' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 23,
      ),
    ),
    'entity_type' => 'node',
    'fences_wrapper' => 'div',
    'field_name' => 'field_custom_css',
    'label' => 'Custom CSS',
    'required' => 0,
    'settings' => array(
      'better_formats' => array(
        'allowed_formats' => array(
          'filtered_html' => 'filtered_html',
          'full_html' => 'full_html',
          'mini_text_format' => 'mini_text_format',
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
            'mini_text_format' => array(
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
      ),
      'type' => 'text_textarea',
      'weight' => 6,
    ),
  );

  // Exported field_instance: 'node-page-field_custom_html'.
  $field_instances['node-page-field_custom_html'] = array(
    'bundle' => 'page',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => 'To add custom body HTML of the page',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'text',
        'settings' => array(),
        'type' => 'text_default',
        'weight' => 7,
      ),
      'teaser' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
      'xmlsitemap' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 7,
      ),
      'xmlsitemap_image' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 7,
      ),
      'xmlsitemap_news' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 25,
      ),
    ),
    'entity_type' => 'node',
    'fences_wrapper' => 'div',
    'field_name' => 'field_custom_html',
    'label' => 'Custom HTML',
    'required' => 0,
    'settings' => array(
      'better_formats' => array(
        'allowed_formats' => array(
          'filtered_html' => 'filtered_html',
          'full_html' => 'full_html',
          'mini_text_format' => 'mini_text_format',
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
            'mini_text_format' => array(
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
      ),
      'type' => 'text_textarea',
      'weight' => 5,
    ),
  );

  // Exported field_instance: 'node-page-field_custom_js'.
  $field_instances['node-page-field_custom_js'] = array(
    'bundle' => 'page',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => 'To add custom JS for the page',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'text',
        'settings' => array(),
        'type' => 'text_default',
        'weight' => 6,
      ),
      'teaser' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
      'xmlsitemap' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 6,
      ),
      'xmlsitemap_image' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 6,
      ),
      'xmlsitemap_news' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 24,
      ),
    ),
    'entity_type' => 'node',
    'fences_wrapper' => 'div',
    'field_name' => 'field_custom_js',
    'label' => 'Custom JS',
    'required' => 0,
    'settings' => array(
      'better_formats' => array(
        'allowed_formats' => array(
          'filtered_html' => 'filtered_html',
          'full_html' => 'full_html',
          'mini_text_format' => 'mini_text_format',
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
            'mini_text_format' => array(
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
      ),
      'type' => 'text_textarea',
      'weight' => 7,
    ),
  );

  // Exported field_instance: 'node-page-field_dynamic_sub_menu'.
  $field_instances['node-page-field_dynamic_sub_menu'] = array(
    'bundle' => 'page',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'list',
        'settings' => array(),
        'type' => 'list_default',
        'weight' => 9,
      ),
      'teaser' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
      'xmlsitemap' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 9,
      ),
      'xmlsitemap_image' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 9,
      ),
      'xmlsitemap_news' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 27,
      ),
    ),
    'entity_type' => 'node',
    'fences_wrapper' => 'div',
    'field_name' => 'field_dynamic_sub_menu',
    'label' => 'Dynamic Sub Menu',
    'required' => 0,
    'settings' => array(
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'options',
      'settings' => array(
        'apply_chosen' => '',
        'maxlength_js_label' => 'Content limited to @limit characters, remaining: <strong>@remaining</strong>',
      ),
      'type' => 'options_select',
      'weight' => 6,
    ),
  );

  // Exported field_instance: 'node-page-field_google_news_keyword'.
  $field_instances['node-page-field_google_news_keyword'] = array(
    'bundle' => 'page',
    'check_existing' => 0,
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'text',
        'settings' => array(),
        'type' => 'text_default',
        'weight' => 11,
      ),
      'teaser' => array(
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
      'xmlsitemap_image' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
      'xmlsitemap_news' => array(
        'label' => 'hidden',
        'module' => 'xmlsitemap_text_formatter',
        'settings' => array(
          'backfill_field' => '',
          'default_value_when_empty' => '',
          'filter_format' => 'xmlsitemap_html_removed',
          'forced_value' => '',
          'items_output_limit' => 1,
          'xmlsitemap_tag' => 'news:news][news:keywords',
        ),
        'type' => 'xmlsitemap_text',
        'weight' => 4,
      ),
    ),
    'enable_linked_field' => 0,
    'entity_type' => 'node',
    'fences_wrapper' => 'div',
    'field_name' => 'field_google_news_keyword',
    'label' => 'Google News Keyword',
    'linked_to' => 'field_legacy_id',
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
          'mm_html' => 'mm_html',
          'plain_text' => 'plain_text',
          'pronto_block_html' => 'pronto_block_html',
          'pronto_body_process' => 'pronto_body_process',
          'pronto_inline_html' => 'pronto_inline_html',
          'slack_text' => 'slack_text',
          'wysiwyg' => 'wysiwyg',
          'xmlsitemap_html_removed' => 'xmlsitemap_html_removed',
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
            'mm_html' => array(
              'weight' => 50,
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
      'weight' => 14,
    ),
  );

  // Exported field_instance: 'node-page-field_layout'.
  $field_instances['node-page-field_layout'] = array(
    'bundle' => 'page',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'list',
        'settings' => array(),
        'type' => 'list_default',
        'weight' => 3,
      ),
      'teaser' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
      'xmlsitemap' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 3,
      ),
      'xmlsitemap_image' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 3,
      ),
      'xmlsitemap_news' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 21,
      ),
    ),
    'entity_type' => 'node',
    'fences_wrapper' => 'div',
    'field_name' => 'field_layout',
    'label' => 'Layout',
    'required' => 0,
    'settings' => array(
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'options',
      'settings' => array(
        'apply_chosen' => '',
        'maxlength_js_label' => 'Content limited to @limit characters, remaining: <strong>@remaining</strong>',
      ),
      'type' => 'options_select',
      'weight' => 3,
    ),
  );

  // Exported field_instance: 'node-page-field_legacy_id'.
  $field_instances['node-page-field_legacy_id'] = array(
    'bundle' => 'page',
    'check_existing' => 0,
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'text',
        'settings' => array(),
        'type' => 'text_default',
        'weight' => 1,
      ),
      'teaser' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
      'xmlsitemap' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 1,
      ),
      'xmlsitemap_image' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 1,
      ),
      'xmlsitemap_news' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 19,
      ),
    ),
    'enable_linked_field' => 0,
    'entity_type' => 'node',
    'fences_wrapper' => 'div',
    'field_name' => 'field_legacy_id',
    'label' => 'URL Label',
    'linked_to' => 'title',
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
      'weight' => 4,
    ),
  );

  // Exported field_instance: 'node-page-field_use_redesign_template'.
  $field_instances['node-page-field_use_redesign_template'] = array(
    'bundle' => 'page',
    'default_value' => array(
      0 => array(
        'value' => 1,
      ),
    ),
    'deleted' => 0,
    'description' => 'If checked, F&W Redesign template will apply to the page.',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'list',
        'settings' => array(),
        'type' => 'list_default',
        'weight' => 8,
      ),
      'teaser' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
      'xmlsitemap' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 8,
      ),
      'xmlsitemap_image' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 8,
      ),
      'xmlsitemap_news' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 26,
      ),
    ),
    'entity_type' => 'node',
    'fences_wrapper' => 'div',
    'field_name' => 'field_use_redesign_template',
    'label' => 'Use Redesign Template',
    'required' => 0,
    'settings' => array(
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'options',
      'settings' => array(
        'display_label' => 1,
        'maxlength_js_label' => 'Content limited to @limit characters, remaining: <strong>@remaining</strong>',
      ),
      'type' => 'options_onoff',
      'weight' => 5,
    ),
  );

  // Translatables
  // Included for use with string extractors like potx.
  t('Ad Key');
  t('Ad value');
  t('Adversing keys, needs to be in key=value format, ex. category=entertainment');
  t('Attachments');
  t('Body');
  t('Custom CSS');
  t('Custom HTML');
  t('Custom JS');
  t('Dynamic Sub Menu');
  t('Google News Keyword');
  t('If checked, F&W Redesign template will apply to the page.');
  t('Layout');
  t('To add custom JS for the page');
  t('To add custom body HTML of the page');
  t('To add custom css for the page');
  t('URL Label');
  t('Use Redesign Template');

  return $field_instances;
}
