<?php
/**
 * @file
 * ti_person_content_type.field_group.inc
 */

/**
 * Implements hook_field_group_info().
 */
function ti_person_content_type_field_group_info() {
  $field_groups = array();

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_biography|node|person|form';
  $field_group->group_name = 'group_biography';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'person';
  $field_group->mode = 'form';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Biography',
    'weight' => '4',
    'children' => array(
      0 => 'field_biography',
    ),
    'format_type' => 'fieldset',
    'format_settings' => array(
      'formatter' => 'open',
      'instance_settings' => array(
        'description' => '',
        'classes' => 'group-biography field-group-fieldset',
        'required_fields' => 1,
      ),
    ),
  );
  $field_groups['group_biography|node|person|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_bnc_mobile|node|person|form';
  $field_group->group_name = 'group_bnc_mobile';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'person';
  $field_group->mode = 'form';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Best New Chefs Detail (for mobile application)',
    'weight' => '6',
    'children' => array(
      0 => 'field_bnc_snippet',
      1 => 'field_bnc_year',
    ),
    'format_type' => 'fieldset',
    'format_settings' => array(
      'formatter' => 'collapsible',
      'instance_settings' => array(
        'description' => '',
        'classes' => 'group-bnc-mobile field-group-fieldset',
        'required_fields' => 1,
      ),
    ),
  );
  $field_groups['group_bnc_mobile|node|person|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_bnc_videos|node|person|form';
  $field_group->group_name = 'group_bnc_videos';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'person';
  $field_group->mode = 'form';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Best New Chefs Videos',
    'weight' => '9',
    'children' => array(
      0 => 'field_related_videos',
    ),
    'format_type' => 'fieldset',
    'format_settings' => array(
      'formatter' => 'collapsible',
      'instance_settings' => array(
        'description' => '',
        'classes' => 'group-bnc-videos field-group-fieldset',
        'required_fields' => 1,
      ),
    ),
  );
  $field_groups['group_bnc_videos|node|person|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_external_ids|node|person|form';
  $field_group->group_name = 'group_external_ids';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'person';
  $field_group->mode = 'form';
  $field_group->parent_name = 'group_hide_fields';
  $field_group->data = array(
    'label' => 'External IDs',
    'weight' => '13',
    'children' => array(
      0 => 'field_external_ids',
    ),
    'format_type' => 'fieldset',
    'format_settings' => array(
      'formatter' => 'open',
      'instance_settings' => array(
        'description' => '',
        'classes' => 'group-external-ids field-group-fieldset',
        'required_fields' => 1,
      ),
    ),
  );
  $field_groups['group_external_ids|node|person|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_hide_fields|node|person|form';
  $field_group->group_name = 'group_hide_fields';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'person';
  $field_group->mode = 'form';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Unused Fields',
    'weight' => '22',
    'children' => array(
      0 => 'field_birth_date',
      1 => 'field_death_date',
      2 => 'field_gender',
      3 => 'field_honorific_prefix',
      4 => 'field_honorific_suffix',
      5 => 'field_image',
      6 => 'field_legacy_id',
      7 => 'field_nickname',
      8 => 'group_external_ids',
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
  $field_groups['group_hide_fields|node|person|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_misc|node|person|form';
  $field_group->group_name = 'group_misc';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'person';
  $field_group->mode = 'form';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'MISC',
    'weight' => '5',
    'children' => array(
      0 => 'field_ad_keys',
      1 => 'field_ad_value',
    ),
    'format_type' => 'fieldset',
    'format_settings' => array(
      'label' => 'MISC',
      'instance_settings' => array(
        'required_fields' => 1,
        'classes' => 'group-misc field-group-fieldset',
        'description' => '',
      ),
      'formatter' => 'open',
    ),
  );
  $field_groups['group_misc|node|person|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_name|node|person|form';
  $field_group->group_name = 'group_name';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'person';
  $field_group->mode = 'form';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Name',
    'weight' => '1',
    'children' => array(
      0 => 'field_email',
      1 => 'field_given_name',
      2 => 'field_job_title',
      3 => 'field_last_name',
      4 => 'field_middle_initial',
      5 => 'title',
    ),
    'format_type' => 'fieldset',
    'format_settings' => array(
      'formatter' => 'open',
      'instance_settings' => array(
        'description' => '',
        'classes' => 'group-name field-group-fieldset',
        'required_fields' => 1,
      ),
    ),
  );
  $field_groups['group_name|node|person|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_publishing_options|node|person|form';
  $field_group->group_name = 'group_publishing_options';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'person';
  $field_group->mode = 'form';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => '  Publishing Options',
    'weight' => '17',
    'children' => array(
      0 => 'field_not_searchable',
    ),
    'format_type' => 'fieldset',
    'format_settings' => array(
      'label' => '  Publishing Options',
      'instance_settings' => array(
        'required_fields' => 1,
        'classes' => 'group-publishing-options field-group-fieldset',
        'description' => '',
      ),
      'formatter' => 'open',
    ),
  );
  $field_groups['group_publishing_options|node|person|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_related_content|node|person|form';
  $field_group->group_name = 'group_related_content';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'person';
  $field_group->mode = 'form';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Related Content',
    'weight' => '10',
    'children' => array(
      0 => 'field_books',
      1 => 'field_people_label',
      2 => 'group_related_links',
    ),
    'format_type' => 'fieldset',
    'format_settings' => array(
      'formatter' => 'collapsible',
      'instance_settings' => array(
        'description' => '',
        'classes' => 'group-related-content field-group-fieldset',
        'required_fields' => 1,
      ),
    ),
  );
  $field_groups['group_related_content|node|person|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_related_links|node|person|form';
  $field_group->group_name = 'group_related_links';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'person';
  $field_group->mode = 'form';
  $field_group->parent_name = 'group_related_content';
  $field_group->data = array(
    'label' => 'Related Links',
    'weight' => '21',
    'children' => array(
      0 => 'field_related_links',
    ),
    'format_type' => 'fieldset',
    'format_settings' => array(
      'formatter' => 'collapsible',
      'instance_settings' => array(
        'description' => '',
        'classes' => 'group-related-links field-group-fieldset',
        'required_fields' => 1,
      ),
    ),
  );
  $field_groups['group_related_links|node|person|form'] = $field_group;

  // Translatables
  // Included for use with string extractors like potx.
  t('  Publishing Options');
  t('Best New Chefs Detail (for mobile application)');
  t('Best New Chefs Videos');
  t('Biography');
  t('External IDs');
  t('MISC');
  t('Name');
  t('Related Content');
  t('Related Links');
  t('Unused Fields');

  return $field_groups;
}
