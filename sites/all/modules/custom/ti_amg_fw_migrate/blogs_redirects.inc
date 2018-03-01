<?php

/**
 * @file
 * Migrate static 301 Redirects
 */
class BlogRedirectMigration extends BaseMigration {

  /**
   * Implements __construct().
   */
  public function __construct() {
    parent::__construct();

    $this->description = t('Migrate Redirects');

    // Set up the source
    $items_url = drupal_get_path('module', 'ti_amg_fw_migrate') . '/json/' . 'blogs_redirects.json';
    $item_ID = 'id';

    // Set the Global Variable
    global $max_rid;
    $max_rid = 0;


    $fields = array(
      'id' => t('Source id'),
      'keyword' => t('Source Path'),
      'url' => t('Destination Path'),
    );

    $this->source = new MigrateSourceJSON($items_url, $item_ID, $fields);

    // Set up the destination node
    $this->destination = new RedirectMigrationDestination();

    // Set up the relationship map between source rows and destination objects.
    $this->map = new MigrateSQLMap($this->machineName,
      array(
        'id' => array('type' => 'int',
          'length' => 11,
          'not null' => TRUE,
          'unassigned' => TRUE,
          'description' => 'Destination ID',
        ),
      ),
      RedirectMigrationDestination::getKeySchema()
    );
  }

  /**
   * Implements prepareRow().
   *
   * @param Object $current_row Holds the data of the current row
   *
   * @return Boolean
   */
  public function prepareRow($current_row) {

    global $max_rid;

    if (isset($max_rid) && $max_rid > 0) {
      $max_rid++;
    }
    else {
      $max_rid = 1;
    }
    // Set the max rid as the id parameter
    $current_row->id = $max_rid;

    return TRUE;
  }
}

