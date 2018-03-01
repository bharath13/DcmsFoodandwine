<?php
/**
 * @file
 * ti_amg_fw_permissions.features.user_permission.inc
 */

/**
 * Implements hook_user_default_permissions().
 */
function ti_amg_fw_permissions_user_default_permissions() {
  $permissions = array();

  // Exported permission: 'administer nodequeue'.
  $permissions['administer nodequeue'] = array(
    'name' => 'administer nodequeue',
    'roles' => array(
      'Editor' => 'Editor',
      'administrator' => 'administrator',
    ),
    'module' => 'nodequeue',
  );

  // Exported permission: 'create image content'.
  $permissions['create image content'] = array(
    'name' => 'create image content',
    'roles' => array(
      'Editor' => 'Editor',
      'Media Editor' => 'Media Editor',
      'administrator' => 'administrator',
    ),
    'module' => 'node',
  );

  // Exported permission: 'delete any image content'.
  $permissions['delete any image content'] = array(
    'name' => 'delete any image content',
    'roles' => array(
      'Editor' => 'Editor',
      'Media Editor' => 'Media Editor',
      'administrator' => 'administrator',
    ),
    'module' => 'node',
  );

  // Exported permission: 'delete own image content'.
  $permissions['delete own image content'] = array(
    'name' => 'delete own image content',
    'roles' => array(
      'Editor' => 'Editor',
      'Media Editor' => 'Media Editor',
      'administrator' => 'administrator',
    ),
    'module' => 'node',
  );

  // Exported permission: 'edit any image content'.
  $permissions['edit any image content'] = array(
    'name' => 'edit any image content',
    'roles' => array(
      'Editor' => 'Editor',
      'Media Editor' => 'Media Editor',
      'administrator' => 'administrator',
    ),
    'module' => 'node',
  );

  // Exported permission: 'edit own image content'.
  $permissions['edit own image content'] = array(
    'name' => 'edit own image content',
    'roles' => array(
      'Editor' => 'Editor',
      'Media Editor' => 'Media Editor',
      'administrator' => 'administrator',
    ),
    'module' => 'node',
  );

  // Exported permission: 'editor settings'.
  $permissions['editor settings'] = array(
    'name' => 'editor settings',
    'roles' => array(
      'Editor' => 'Editor',
      'Title Administrator' => 'Title Administrator',
      'administrator' => 'administrator',
    ),
    'module' => 'ti_amg_fw_custom',
  );

  return $permissions;
}
