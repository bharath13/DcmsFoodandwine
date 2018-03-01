<?php
/**
 * @file
 * ti_amg_fw_content_sharing.features.user_permission.inc
 */

/**
 * Implements hook_user_default_permissions().
 */
function ti_amg_fw_content_sharing_user_default_permissions() {
  $permissions = array();

  // Exported permission: 'access pronto caas'.
  $permissions['access pronto caas'] = array(
    'name' => 'access pronto caas',
    'roles' => array(
      'Editor' => 'Editor',
      'Title Administrator' => 'Title Administrator',
      'administrator' => 'administrator',
    ),
    'module' => 'ti_pronto_caas_importer',
  );

  return $permissions;
}
