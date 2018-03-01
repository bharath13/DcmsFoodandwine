<?php
/**
 * @file
 * ti_amg_fw_text_formats.features.user_permission.inc
 */

/**
 * Implements hook_user_default_permissions().
 */
function ti_amg_fw_text_formats_user_default_permissions() {
  $permissions = array();

  // Exported permission: 'use text format mini_text_format'.
  $permissions['use text format mini_text_format'] = array(
    'name' => 'use text format mini_text_format',
    'roles' => array(
      'Editor' => 'Editor',
      'Title Administrator' => 'Title Administrator',
      'administrator' => 'administrator',
    ),
    'module' => 'filter',
  );

  return $permissions;
}
