<?php
/**
 * @file
 * ti_amg_fw_ckeditor_full_profile.features.user_permission.inc
 */

/**
 * Implements hook_user_default_permissions().
 */
function ti_amg_fw_ckeditor_full_profile_user_default_permissions() {
  $permissions = array();

  // Exported permission: 'access_hotlink'.
  $permissions['access_hotlink'] = array(
    'name' => 'access_hotlink',
    'roles' => array(
      'SEO Administrator' => 'SEO Administrator',
      'administrator' => 'administrator',
    ),
    'module' => 'ti_editorial_ckeditor_plugins',
  );

  return $permissions;
}
