<?php
/**
 * @file
 * Configuration for BrightCrove field Migrate.
 */

/**
 * Implements hook_migrate_api().
 *
 * @return array
 * Returns array for migrate api.
 */
function brightcove_field_migrate_migrate_api() {
    $api = array(
    'api' => 2,
    'field handlers' => array(
        'MigrateBrightcoveVideoFieldHandler',
        ),
    );
  return $api;
}
