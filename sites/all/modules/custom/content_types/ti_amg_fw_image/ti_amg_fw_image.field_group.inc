<?php
/**
 * @file
 * ti_amg_fw_image.field_group.inc
 */

/**
 * Implements hook_field_group_info().
 */
function ti_amg_fw_image_field_group_info() {
  $field_groups = array();

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_categories|node|image|form';
  $field_group->group_name = 'group_categories';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'image';
  $field_group->mode = 'form';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Categorization',
    'weight' => '12',
    'children' => array(),
    'format_type' => 'fieldset',
    'format_settings' => array(
      'formatter' => 'collapsible',
      'instance_settings' => array(
        'description' => '',
        'classes' => 'group-categories field-group-fieldset',
        'required_fields' => 1,
      ),
    ),
  );
  $field_groups['group_categories|node|image|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_crops|node|image|form';
  $field_group->group_name = 'group_crops';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'image';
  $field_group->mode = 'form';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Crops',
    'weight' => '4',
    'children' => array(
      0 => 'field_image_large_thumb',
      1 => 'field_image_other_crop',
      2 => 'field_main_image',
      3 => 'field_image_thumb',
    ),
    'format_type' => 'fieldset',
    'format_settings' => array(
      'formatter' => 'collapsible',
      'instance_settings' => array(
        'description' => '',
        'classes' => 'group-crops field-group-fieldset',
        'required_fields' => 1,
      ),
    ),
  );
  $field_groups['group_crops|node|image|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_image_rights_meta_data|node|image|form';
  $field_group->group_name = 'group_image_rights_meta_data';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'image';
  $field_group->mode = 'form';
  $field_group->parent_name = 'group_image_rights';
  $field_group->data = array(
    'label' => 'Image Meta Data',
    'weight' => '44',
    'children' => array(
      0 => 'field_image_rights_cloned_image',
      1 => 'field_image_rights_composite_ids',
      2 => 'field_image_rights_keywords',
      3 => 'field_image_rights_meta_caption',
      4 => 'field_image_rights_meta_name',
      5 => 'field_image_rights_photographer',
      6 => 'field_image_rights_restrictions',
      7 => 'field_image_rights_source_parent',
      8 => 'field_image_rights_ti_syndicated',
    ),
    'format_type' => 'fieldset',
    'format_settings' => array(
      'label' => 'Image Meta Data',
      'instance_settings' => array(
        'required_fields' => 1,
        'id' => '',
        'classes' => 'group-image-rights-meta-data field-group-fieldset',
        'description' => '',
      ),
      'formatter' => 'collapsed',
    ),
  );
  $field_groups['group_image_rights_meta_data|node|image|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_options|node|image|form';
  $field_group->group_name = 'group_options';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'image';
  $field_group->mode = 'form';
  $field_group->parent_name = 'group_hide_fields';
  $field_group->data = array(
    'label' => 'Options',
    'weight' => '44',
    'children' => array(
      0 => 'field_image_rights_ecookbook_app',
      1 => 'field_source',
    ),
    'format_type' => 'fieldset',
    'format_settings' => array(
      'formatter' => 'collapsible',
      'instance_settings' => array(
        'description' => '',
        'classes' => 'group-options field-group-fieldset',
        'required_fields' => 1,
      ),
    ),
  );
  $field_groups['group_options|node|image|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_product|node|image|form';
  $field_group->group_name = 'group_product';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'image';
  $field_group->mode = 'form';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Product',
    'weight' => 56,
    'children' => array(
      0 => 'field_brand',
      1 => 'field_retailer',
      2 => 'field_buy_text',
      3 => 'field_buy_link',
      4 => 'field_price',
    ),
    'format_type' => 'fieldset',
    'format_settings' => array(
      'formatter' => 'open',
      'instance_settings' => array(
        'description' => '',
        'classes' => 'group-product field-group-fieldset',
        'required_fields' => 1,
      ),
    ),
  );
  $field_groups['group_product|node|image|form'] = $field_group;

  // Translatables
  // Included for use with string extractors like potx.
  t('Categorization');
  t('Crops');
  t('Image Meta Data');
  t('Options');
  t('Product');

  return $field_groups;
}
