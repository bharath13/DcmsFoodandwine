<?php
/**
 * @file
 * ti_tout_content_type.field_group.inc
 */

/**
 * Implements hook_field_group_info().
 */
function ti_tout_content_type_field_group_info() {
  $field_groups = array();

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_headlines|node|tout|form';
  $field_group->group_name = 'group_headlines';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'tout';
  $field_group->mode = 'form';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Headlines',
    'weight' => '0',
    'children' => array(
      0 => 'field_headline',
      1 => 'title',
    ),
    'format_type' => 'fieldset',
    'format_settings' => array(
      'formatter' => 'open',
      'instance_settings' => array(
        'description' => '',
        'classes' => 'group-headlines field-group-fieldset',
        'required_fields' => 1,
      ),
    ),
  );
  $field_groups['group_headlines|node|tout|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_misc|node|tout|form';
  $field_group->group_name = 'group_misc';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'tout';
  $field_group->mode = 'form';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Misc',
    'weight' => '6',
    'children' => array(
      0 => 'field_legacy_id',
      1 => 'metatags',
      2 => 'path',
      3 => 'redirect',
      4 => 'xmlsitemap',
    ),
    'format_type' => 'fieldset',
    'format_settings' => array(
      'formatter' => 'open',
      'instance_settings' => array(
        'description' => '',
        'classes' => 'group-misc field-group-fieldset',
        'required_fields' => 1,
      ),
    ),
  );
  $field_groups['group_misc|node|tout|form'] = $field_group;

  // Translatables
  // Included for use with string extractors like potx.
  t('Headlines');
  t('Misc');

  return $field_groups;
}
