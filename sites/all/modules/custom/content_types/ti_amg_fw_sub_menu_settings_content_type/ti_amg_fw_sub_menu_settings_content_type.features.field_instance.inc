<?php
/**
 * @file
 * ti_amg_fw_sub_menu_settings_content_type.features.field_instance.inc
 */

/**
 * Implements hook_field_default_field_instances().
 */
function ti_amg_fw_sub_menu_settings_content_type_field_default_field_instances() {
  $field_instances = array();

  // Exported field_instance: 'node-sub_menu_settings-body'.
  $field_instances['node-sub_menu_settings-body'] = array(
    'bundle' => 'sub_menu_settings',
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
    ),
    'entity_type' => 'node',
    'field_name' => 'body',
    'label' => 'Body',
    'required' => FALSE,
    'settings' => array(
      'display_summary' => TRUE,
      'text_processing' => 1,
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'module' => 'text',
      'settings' => array(
        'rows' => 20,
        'summary_rows' => 5,
      ),
      'type' => 'text_textarea_with_summary',
      'weight' => 41,
    ),
  );

  // Exported field_instance: 'node-sub_menu_settings-field_cta_enable_red'.
  $field_instances['node-sub_menu_settings-field_cta_enable_red'] = array(
    'bundle' => 'sub_menu_settings',
    'default_value' => array(
      0 => array(
        'value' => 0,
      ),
    ),
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'list',
        'settings' => array(),
        'type' => 'list_default',
        'weight' => 5,
      ),
      'teaser' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'node',
    'fences_wrapper' => 'div',
    'field_name' => 'field_cta_enable_red',
    'label' => 'Make the CTA link to red color',
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
      'weight' => 10,
    ),
  );

  // Exported field_instance: 'node-sub_menu_settings-field_cta_link'.
  $field_instances['node-sub_menu_settings-field_cta_link'] = array(
    'bundle' => 'sub_menu_settings',
    'check_existing' => 0,
    'default_value' => NULL,
    'deleted' => 0,
    'description' => 'Add ticket link here.',
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
    ),
    'enable_linked_field' => 0,
    'entity_type' => 'node',
    'fences_wrapper' => 'div',
    'field_name' => 'field_cta_link',
    'label' => 'CTA Link',
    'linked_to' => 'field_header_link',
    'required' => 0,
    'settings' => array(
      'better_formats' => array(
        'allowed_formats' => array(
          'filtered_html' => 'filtered_html',
          'full_html' => 'full_html',
          'mini_text_format' => 'mini_text_format',
          'plain_text' => 'plain_text',
          'pronto_block_html' => 'pronto_block_html',
          'pronto_inline_html' => 'pronto_inline_html',
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
            'pronto_block_html' => array(
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
      'weight' => 9,
    ),
  );

  // Exported field_instance: 'node-sub_menu_settings-field_cta_new_window'.
  $field_instances['node-sub_menu_settings-field_cta_new_window'] = array(
    'bundle' => 'sub_menu_settings',
    'default_value' => array(
      0 => array(
        'value' => 0,
      ),
    ),
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'list',
        'settings' => array(),
        'type' => 'list_default',
        'weight' => 6,
      ),
      'teaser' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'node',
    'fences_wrapper' => 'div',
    'field_name' => 'field_cta_new_window',
    'label' => 'Open the CTA link in new window',
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
      'weight' => 11,
    ),
  );

  // Exported field_instance: 'node-sub_menu_settings-field_cta_title'.
  $field_instances['node-sub_menu_settings-field_cta_title'] = array(
    'bundle' => 'sub_menu_settings',
    'check_existing' => 0,
    'default_value' => NULL,
    'deleted' => 0,
    'description' => 'Add ticket title here.',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'text',
        'settings' => array(),
        'type' => 'text_default',
        'weight' => 3,
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
    'field_name' => 'field_cta_title',
    'label' => 'CTA Title',
    'linked_to' => 'field_header_link',
    'required' => 0,
    'settings' => array(
      'better_formats' => array(
        'allowed_formats' => array(
          'filtered_html' => 'filtered_html',
          'full_html' => 'full_html',
          'mini_text_format' => 'mini_text_format',
          'plain_text' => 'plain_text',
          'pronto_block_html' => 'pronto_block_html',
          'pronto_inline_html' => 'pronto_inline_html',
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
            'pronto_block_html' => array(
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
      'weight' => 8,
    ),
  );

  // Exported field_instance: 'node-sub_menu_settings-field_header_link'.
  $field_instances['node-sub_menu_settings-field_header_link'] = array(
    'bundle' => 'sub_menu_settings',
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
    ),
    'enable_linked_field' => 0,
    'entity_type' => 'node',
    'fences_wrapper' => 'div',
    'field_name' => 'field_header_link',
    'label' => 'Header Link',
    'linked_to' => 'title',
    'required' => 0,
    'settings' => array(
      'better_formats' => array(
        'allowed_formats' => array(
          'filtered_html' => 'filtered_html',
          'full_html' => 'full_html',
          'mini_text_format' => 'mini_text_format',
          'plain_text' => 'plain_text',
          'pronto_block_html' => 'pronto_block_html',
          'pronto_inline_html' => 'pronto_inline_html',
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
            'pronto_block_html' => array(
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
      'weight' => 5,
    ),
  );

  // Exported field_instance: 'node-sub_menu_settings-field_sponsor_logo'.
  $field_instances['node-sub_menu_settings-field_sponsor_logo'] = array(
    'bundle' => 'sub_menu_settings',
    'deleted' => 0,
    'description' => 'Upload sponsor logo image here.',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'image',
        'settings' => array(
          'image_link' => '',
          'image_style' => '',
        ),
        'type' => 'image',
        'weight' => 8,
      ),
      'teaser' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'node',
    'fences_wrapper' => 'div',
    'field_name' => 'field_sponsor_logo',
    'label' => 'Sponsor Logo',
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
        'maxlength_js_label' => 'Content limited to @limit characters, remaining: <strong>@remaining</strong>',
        'preview_image_style' => 'thumbnail',
        'progress_indicator' => 'throbber',
      ),
      'type' => 'image_image',
      'weight' => 13,
    ),
  );

  // Exported field_instance: 'node-sub_menu_settings-field_sponsor_text'.
  $field_instances['node-sub_menu_settings-field_sponsor_text'] = array(
    'bundle' => 'sub_menu_settings',
    'check_existing' => 0,
    'default_value' => NULL,
    'deleted' => 0,
    'description' => 'Add sponsor text here.',
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
    ),
    'enable_linked_field' => 0,
    'entity_type' => 'node',
    'fences_wrapper' => 'div',
    'field_name' => 'field_sponsor_text',
    'label' => 'Sponsor Text',
    'linked_to' => 'field_header_link',
    'required' => 0,
    'settings' => array(
      'better_formats' => array(
        'allowed_formats' => array(
          'filtered_html' => 'filtered_html',
          'full_html' => 'full_html',
          'mini_text_format' => 'mini_text_format',
          'plain_text' => 'plain_text',
          'pronto_block_html' => 'pronto_block_html',
          'pronto_inline_html' => 'pronto_inline_html',
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
            'pronto_block_html' => array(
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
      'weight' => 12,
    ),
  );

  // Exported field_instance: 'node-sub_menu_settings-field_sub_title'.
  $field_instances['node-sub_menu_settings-field_sub_title'] = array(
    'bundle' => 'sub_menu_settings',
    'check_existing' => 0,
    'default_value' => NULL,
    'deleted' => 0,
    'description' => 'Add date or other information here.',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'text',
        'settings' => array(),
        'type' => 'text_default',
        'weight' => 2,
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
    'field_name' => 'field_sub_title',
    'label' => 'Sub Title',
    'linked_to' => 'field_header_link',
    'required' => 0,
    'settings' => array(
      'better_formats' => array(
        'allowed_formats' => array(
          'filtered_html' => 'filtered_html',
          'full_html' => 'full_html',
          'mini_text_format' => 'mini_text_format',
          'plain_text' => 'plain_text',
          'pronto_block_html' => 'pronto_block_html',
          'pronto_inline_html' => 'pronto_inline_html',
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
            'pronto_block_html' => array(
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
      'weight' => 6,
    ),
  );

  // Translatables
  // Included for use with string extractors like potx.
  t('Add date or other information here.');
  t('Add sponsor text here.');
  t('Add ticket link here.');
  t('Add ticket title here.');
  t('Body');
  t('CTA Link');
  t('CTA Title');
  t('Header Link');
  t('Make the CTA link to red color');
  t('Open the CTA link in new window');
  t('Sponsor Logo');
  t('Sponsor Text');
  t('Sub Title');
  t('Upload sponsor logo image here.');

  return $field_instances;
}
