<?php

/**
 * @file
 * Taxonomy Migration for Foodandwine.
 */

/**
 * Sites We Like Taxonomy Migration
 */
class SitesweLikeMigration extends BaseMigration {
  /**
   * Implements __construct().
   */
  public function __construct() {
    parent::__construct();
    $this->description = t('Migrate Foodandwine Sites We Like Taxonomy');
    // Set up the source
    $path = drupal_get_path('module', 'ti_amg_fw_migrate') . '/csv/' . 'sites-we-like.csv';
    $item_ID = 'Display';
    $csvcolumns = array(
      0 => array("Display", "Display name of the term"),
      1 => array("URL", "URL of the term"),
    );
    $this->source = new MigrateSourceCSV($path, $csvcolumns, array("delimiter" => ",", "header_rows" => 1));
    // Set up the destination node
    $this->destination = new MigrateDestinationTerm('sites_we_like');
    // Set up the relationship map between source rows and destination objects.
    $this->map = new MigrateSQLMap($this->machineName, array(
        'Display' => array('type' => 'varchar',
          'length' => 255,
          'not null' => TRUE,
          'description' => 'Display Name',
        ),
      ), MigrateDestinationTerm::getKeySchema()
    );
    // Set up the fields mappings TO destination fields FROM source fields.
    $this->addFieldMapping('name', 'Display');
    $this->addFieldMapping('field_site_link', 'URL');
  }
}

