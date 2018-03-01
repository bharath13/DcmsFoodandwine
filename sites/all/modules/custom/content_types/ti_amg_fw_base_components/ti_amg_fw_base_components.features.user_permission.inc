<?php
/**
 * @file
 * ti_amg_fw_base_components.features.user_permission.inc
 */

/**
 * Implements hook_user_default_permissions().
 */
function ti_amg_fw_base_components_user_default_permissions() {
  $permissions = array();

  // Exported permission: 'administer voting api'.
  $permissions['administer voting api'] = array(
    'name' => 'administer voting api',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'votingapi',
  );

  // Exported permission: 'bypass assignee restriction'.
  $permissions['bypass assignee restriction'] = array(
    'name' => 'bypass assignee restriction',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'ti_editorial_state_flow_review',
  );

  // Exported permission: 'rate content'.
  $permissions['rate content'] = array(
    'name' => 'rate content',
    'roles' => array(
      'administrator' => 'administrator',
      'anonymous user' => 'anonymous user',
      'authenticated user' => 'authenticated user',
    ),
    'module' => 'fivestar',
  );

  // Exported permission: 'schedule content workflow'.
  $permissions['schedule content workflow'] = array(
    'name' => 'schedule content workflow',
    'roles' => array(
      'Editor' => 'Editor',
      'administrator' => 'administrator',
    ),
    'module' => 'state_flow_schedule',
  );

  // Exported permission: 'state flow: approve'.
  $permissions['state flow: approve'] = array(
    'name' => 'state flow: approve',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'ti_editorial_state_flow_review',
  );

  // Exported permission: 'state flow: assign for review'.
  $permissions['state flow: assign for review'] = array(
    'name' => 'state flow: assign for review',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'ti_editorial_state_flow_review',
  );

  // Exported permission: 'use text format article_html'.
  $permissions['use text format article_html'] = array(
    'name' => 'use text format article_html',
    'roles' => array(
      'administrator' => 'administrator',
      'authenticated user' => 'authenticated user',
    ),
    'module' => 'filter',
  );

  // Exported permission: 'use text format fw_headline_html'.
  $permissions['use text format fw_headline_html'] = array(
    'name' => 'use text format fw_headline_html',
    'roles' => array(
      'administrator' => 'administrator',
      'authenticated user' => 'authenticated user',
    ),
    'module' => 'filter',
  );

  // Exported permission: 'use text format wysiwyg'.
  $permissions['use text format wysiwyg'] = array(
    'name' => 'use text format wysiwyg',
    'roles' => array(
      'administrator' => 'administrator',
      'authenticated user' => 'authenticated user',
    ),
    'module' => 'filter',
  );

  return $permissions;
}
