<?php

/**
 * @file
 * Support for migrating custom destinations.
 */

/**
 * Destination class implementing migration into {path_alias}.
 */
class RedirectMigrationDestination extends MigrateDestination {
  /**
   * Implements getKeySchema().
   */
  static public function getKeySchema() {
    return array(
      'rid' => array(
        'type' => 'int',
        'unassigned' => TRUE,
        'description' => 'ID of the destination entity',
      ),
    );
  }
  /**
   * Implements __construct().
   */
  public function __construct() {
    parent::__construct();
  }
  /**
   * Implements __toString().
   */
  public function __toString() {
    $output = t('redirect');
    return $output;
  }

  /**
   * Returns a list of fields available to be mapped for destination redirects.
   *
   * @param Migration $migration
   *  Optionally, the migration containing this destination.
   *
   * @return array
   *  Keys: machine names of the fields (to be passed to addFieldMapping)
   *  Values: Human-friendly descriptions of the fields.
   */
  public function fields($migration = NULL) {
    $fields = array(
      'id' => t('Source id'),
      'source' => t('The source path to redirect from'),
      'redirect' => t('The destination path to redirect'),
      'type' => t('The redirect type; if value is \'redirect\' it is a normal redirect handled by the module.'),
      'language' => t('The language of the destination path'),
      'status_code' => t('The status code of the destination'),
    );
    return $fields;
  }

  /**
   * Import a single row.
   *
   * @param $redirect
   * Destination Object to build
   * @param $row
   *  Raw source data object.
   *
   * @return array
   *  Array of key fields of the object that was saved if
   *  successful. FALSE on failure.
   */
  public function import(stdClass$redirect, stdClass$row) {
    // Create a redirect between the old and new paths
    if (isset($row->keyword)) {
      // Create an object with our redirect parameters
      $redirect = new stdClass();
      redirect_object_prepare($redirect);
      $redirect->source = $row->keyword;
      $redirect->redirect = $row->url;
      $redirect->status_code = 301;
      $redirect->type = 'redirect';
      $redirect->language = LANGUAGE_NONE;
      // Check if the redirect exists before saving.
      $hash = redirect_hash($redirect);
      if (!redirect_load_by_hash($hash)) {
        redirect_save($redirect);
        $load_redirect_by_hash = redirect_load_by_hash($hash);
        $return = array($load_redirect_by_hash->rid);
      }
      else {
        $return = FALSE;
      }

      return $return;
    }
  }

  /**
   * Rollback for individual redirects.
   *
   * @param $entity_id
   */
  public function rollback($entity_id) {
    // Delete the records that are available in redirect table
    // Note : Rollback will only delete the migrate_map_redirect table by default
    $entity_delete = db_delete('redirect');
    $entity_delete->condition('rid', $entity_id['destid1']);
    $entity_delete->execute();
    return TRUE;
  }
}

