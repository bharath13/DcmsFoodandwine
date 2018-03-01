<?php
/**
 * @file
 * ti_amg_fw_tout.field_group.inc
 */

/**
 * Implements hook_field_group_info().
 */
function ti_amg_fw_tout_field_group_info() {
  $field_groups = array();

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_categories|node|tout|form';
  $field_group->group_name = 'group_categories';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'tout';
  $field_group->mode = 'form';
  $field_group->parent_name = 'group_hide_fields';
  $field_group->data = array(
    'label' => 'Categorization',
    'weight' => '10',
    'children' => array(
      0 => 'field_category',
    ),
    'format_type' => 'fieldset',
    'format_settings' => array(
      'label' => 'Categorization',
      'instance_settings' => array(
        'required_fields' => 1,
        'classes' => 'group-categories field-group-fieldset',
        'description' => '',
      ),
      'formatter' => 'open',
    ),
  );
  $field_groups['group_categories|node|tout|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_hide_fields|node|tout|form';
  $field_group->group_name = 'group_hide_fields';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'tout';
  $field_group->mode = 'form';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Unused Fields',
    'weight' => '12',
    'children' => array(
      0 => 'field_external_link',
      1 => 'field_subcategory',
      2 => 'group_categories',
      3 => 'group_options',
    ),
    'format_type' => 'fieldset',
    'format_settings' => array(
      'label' => 'Unused Fields',
      'instance_settings' => array(
        'required_fields' => 1,
        'classes' => 'group-hide-fields field-group-fieldset',
        'description' => '',
      ),
      'formatter' => 'collapsed',
    ),
  );
  $field_groups['group_hide_fields|node|tout|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_options|node|tout|form';
  $field_group->group_name = 'group_options';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'tout';
  $field_group->mode = 'form';
  $field_group->parent_name = 'group_hide_fields';
  $field_group->data = array(
    'label' => 'Options',
    'weight' => '9',
    'children' => array(
      0 => 'field_block_order',
      1 => 'field_block_region',
      2 => 'field_image_position',
    ),
    'format_type' => 'fieldset',
    'format_settings' => array(
      'label' => 'Options',
      'instance_settings' => array(
        'required_fields' => 0,
        'id' => '',
        'classes' => 'group-options field-group-fieldset',
        'description' => '',
      ),
      'formatter' => 'open',
    ),
  );
  $field_groups['group_options|node|tout|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_publishing_options|node|tout|form';
  $field_group->group_name = 'group_publishing_options';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'tout';
  $field_group->mode = 'form';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Publishing Options',
    'weight' => '11',
    'children' => array(),
    'format_type' => 'fieldset',
    'format_settings' => array(
      'formatter' => 'collapsible',
      'instance_settings' => array(
        'description' => '',
        'classes' => 'group-publishing-options field-group-fieldset',
        'required_fields' => 1,
      ),
    ),
  );
  $field_groups['group_publishing_options|node|tout|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_sponsored_section|node|tout|form';
  $field_group->group_name = 'group_sponsored_section';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'tout';
  $field_group->mode = 'form';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Sponsored Section',
    'weight' => '9',
    'children' => array(
      0 => 'field_sponsored',
      1 => 'field_sponsored_content_text',
    ),
    'format_type' => 'fieldset',
    'format_settings' => array(
      'label' => 'Sponsored Section',
      'instance_settings' => array(
        'required_fields' => 1,
        'id' => '',
        'classes' => 'group-sponsored-section field-group-fieldset',
        'description' => '',
      ),
      'formatter' => 'open',
    ),
  );
  $field_groups['group_sponsored_section|node|tout|form'] = $field_group;

  // Translatables
  // Included for use with string extractors like potx.
  t('Categorization');
  t('Options');
  t('Publishing Options');
  t('Sponsored Section');
  t('Unused Fields');

  return $field_groups;
}
