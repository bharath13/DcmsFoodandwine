<?php

/**
 * @file
 * Hooks provided by TI LSG Devel Drupal module.
 */

/**
 * @addtogroup ti_lsg_devel
 * @{
 */

/**
 * Define user accounts to be created or updated for the site.
 *
 * Users specified here will be created and kept up-to-date by the ti_lsg_devel
 * module.
 *
 * @return array
 *   An associative array. For each item, the key is the username. The value is
 *   an associative array with a password key and a roles key. The value of the
 *   password will be used for the account password. The value of the roles key
 *   is an array of role names to give to the user account.
 */
function hook_accounts_to_create() {
  $accounts = array(
    'admin' => array(
      'password' => 'changeme',
      'roles' => array(
        'admin',
        'editor',
      ),
    ),
    'editor' => array(
      'roles' => array(
        'editor',
      ),
    ),
  );
  return $accounts;
}

/**
 * Define modules to be uninstalled.
 *
 * Modules specified here will be uninstalled by the ti_lsg_devel module.
 *
 * @return array
 *   An array of module names.
 */
function hook_modules_to_uninstall() {
  $modules = array(
    'scheduler',
    'captcha',
    'image_captcha',
  );
  return $modules;
}

/**
 * Define modules to be enabled.
 *
 * Modules specified here will be enabled by the ti_lsg_devel module.
 *
 * @return array
 *   An array of module names.
 */
function hook_modules_to_enable() {
  $modules = array(
    'pathauto',
    'nat',
  );
  return $modules;
}

/**
 * Define themes to be enabled.
 *
 * Themes specified here will be enabled by the ti_lsg_devel module.
 *
 * @return array
 *   An array of themes names.
 */
function hook_themes_to_enable() {
  $themes = array(
    'seven',
    'mysite',
    'mysite_mobile',
  );
  return $themes;
}

/**
 * Define variables to be deleted.
 *
 * Variables specified here will be deleted by the ti_lsg_devel module.
 *
 * @return array
 *   An array of variable names.
 */
function hook_variables_to_delete() {
  $vars = array(
    'my_variable_name',
    'my_other_variable_name',
  );
  return $vars;
}

/**
 * Define variables to be set.
 *
 * Variables specified here will be set by the ti_lsg_devel module.
 *
 * @return array
 *   An associative array. The keys are the variable names, and the values are
 *   the variable values.
 */
function hook_variables_to_set() {
  $vars = array(
    'my_variable_name' => 'the value',
    'my_variable_name_other' => 1,
    'my_other_variable_name' => array(
      'key1' => 'value1',
      'key2' => 'value2',
    ),
  );
  return $vars;
}

/**
 * Define fields to be deleted.
 *
 * Fields specified here will be deleted by the ti_lsg_devel module.
 *
 * @return array
 *   An associative array. The keys are the content type names, and the values
 *   are an array of field names to remove on that content type.
 */
function hook_fields_to_delete() {
  $fields = array(
    'dfs' => array(
      'field_image_300xvariable',
    ),
    'image' => array(
      'field_image_300xvariable',
    ),
    'video' => array(
      'field_video_placeholder',
      'field_video_links',
      'field_video',
    ),
  );
  return $fields;
}

/**
 * Define content types to be deleted.
 *
 * Content types specified here will be deleted by the ti_lsg_devel module.
 *
 * @return array
 *   An array of content types.
 */
function hook_content_types_to_delete() {
  $content_types = array(
    'tip_of_the_day',
    'dfs',
  );
  return $content_types;
}

/**
 * Define roles to be created or updated for the site.
 *
 * Roles specified here will be created and kept up-to-date by the ti_lsg_devel
 * module.
 *
 * @return array
 *   An associative array. For each item, the key is the role names. The value
 * is TRUE of FALSE whether the role should be created or deleted.
 */
function hook_roles_to_create() {
  $roles = array(
    'editor' => TRUE,
  );
  return $roles;
}

/**
 * Define the permissions to be assigned to roles on the site.
 *
 * Permissions specified here will be assigned to roles by the ti_lsg_devel
 * module.
 *
 * @return array
 *   An associative array. For each item, the key is the role name. The value is
 *   an associative array with the permission as the key and TRUE or FALSE as
 *   the value indicating whether the role should be granted or not.
 */
function hook_permissions_to_grant() {
  $permissions = array();

  // Administrator role.
  $permissions['administrator'] = array_fill_keys(array_keys(module_invoke_all('permission')), TRUE);

  // Anonymous role.
  $permissions['anonymous user'] = array(
    'access content' => TRUE,
    'access comments' => TRUE,
    'post comments' => TRUE,
    'skip comment approval' => TRUE,
    'search content' => TRUE,
  );

  // Authenticated role.
  $permissions['authenticated user'] = array(
    'access content' => TRUE,
    'access comments' => TRUE,
    'post comments' => TRUE,
    'skip comment approval' => TRUE,
    'search content' => TRUE,
    'use text format wysiwyg' => TRUE,
  );

  // Editor role.
  $permissions['editor'] = array(
    // filter.
    'use text format full_html' => TRUE,
    // admin_menu.
    'access administration menu' => TRUE,
    // contextual.
    'access contextual links' => TRUE,
    // comment.
    'access comments' => TRUE,
    'skip comment approval' => TRUE,
    'administer comments' => TRUE,
    // menu.
    'administer menu' => TRUE,
    // metatag.
    'edit meta tags' => TRUE,
    // pathauto.
    'notify of path changes' => TRUE,
    // webform.
    'access all webform results' => TRUE,
    'delete all webform submissions' => TRUE,
    // webform_scheduler.
    'schedule webforms' => TRUE,
    // system.
    'access administration pages' => TRUE,
    'view the administration theme' => TRUE,
    // node.
    'access content' => TRUE,
    'access content overview' => TRUE,
    'administer nodes' => FALSE,
    'bypass node access' => FALSE,
    'view revisions' => TRUE,
    'revert revisions' => FALSE,
    'view own unpublished content' => TRUE,
    'delete revisions' => FALSE,
    // taxonomy.
    'administer taxonomy' => TRUE,
    'delete terms in 2' => TRUE,
    'delete terms in 3' => TRUE,
    'edit terms in 2' => TRUE,
    'edit terms in 3' => TRUE,
    // state_flow.
    'administer content revisions' => FALSE,
    'manage content workflow' => TRUE,
    'schedule content workflow' => TRUE,
    // workflow.
    'transition content to the published or unpublished state' => TRUE,
    // most_popular.
    'administer most popular' => TRUE,
    // comments.
    'feature comments' => TRUE,
  );

  foreach (node_type_get_names() as $type => $name) {
    $permissions['editor']['create ' . $type . ' content'] = TRUE;
    $permissions['editor']['edit any ' . $type . ' content'] = TRUE;
    $permissions['editor']['delete any ' . $type . ' content'] = TRUE;
    $permissions['editor']['edit own ' . $type . ' content'] = TRUE;
    $permissions['editor']['delete own ' . $type . ' content'] = TRUE;
  }

  return $permissions;
}

/**
 * Define date formats to be set.
 *
 * Date formats specified here will be set by the ti_lsg_devel module.
 *
 * @return array
 *   An associative array. The keys are the date format names, and the values
 *   are associative arrays, including the title and format.
 */
function hook_date_formats_to_set() {
  $formats = array(
    'day_of_month' => array(
      'title' => 'Day of Month',
      'format' => 'j',
    ),
    'day_of_week' => array(
      'title' => 'Day of Week',
      'format' => 'l',
    ),
    'ay_full_short' => array(
      'title' => 'AY Full Short',
      'format' => 'Y-m-d, D',
    ),
    'month_name_full_year' => array(
      'title' => 'Month Name and Full Year',
      'format' => 'F Y',
    ),
  );
  return $formats;
}

/**
 * Define content types for State Machine to ignore.
 *
 * Content types specified here will be ignored by workflow.
 *
 * @return array
 *   An array of content type machine names.
 */
function hook_workflow_node_types_to_ignore() {
  $types = array(
    'dfs',
    'image',
    'list_tout',
    'tout',
  );
  return $types;
}

/**
 * Define functions and parameters to reset feeds.
 *
 * Functions specified here will be run by the ti_lsg_devel module.
 *
 * @return array
 *   An associative array. The keys are the function names, and the values are
 *   an array of the parameters to pass.
 */
function hook_reset_feeds_functions() {
  $functions = array(
    'ti_lsg_southern_devel_disable_feeds_importers' => array(),
    'ti_lsg_southern_devel_delete_feeds_nodes' => array(),
    'ti_lsg_southern_feeds_initialize_feeds' => array(),
  );
  return $functions;
}

/**
 * @} End of "addtogroup ti_lsg_devel".
 */
