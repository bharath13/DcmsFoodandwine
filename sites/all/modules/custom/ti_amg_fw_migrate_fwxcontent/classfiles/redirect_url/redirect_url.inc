<?php

/**
 * @file
 * Implementation of MigrateRedirectTable for FWX to Food&Wine.
 */

/**
 * Handling specific to a Drupal 7 redirect table .
 */
class MigrateRedirectTable extends DrupalNode7Migration {

  /**
   * Construtor for the migration
   */
  public function __construct($arguments) {
    parent::__construct($arguments);
    $this->description = 'Redirect table data';
    $table_name = 'redirect';
    $this->map = new MigrateSQLMap($this->machineName,
      array(
        'rid' => array(
          'type' => 'int',
          'unsigned' => TRUE,
          'not null' => TRUE,
          'description' => t('Source ID'),
          'alias' => 'rdt',
        ),
      ),
        MigrateDestinationTable::getKeySchema($table_name)
      );
    $query = $this->query();
    $this->source = new MigrateSourceSQL($query, $this->sourceFields, NULL, $this->sourceOptions);
    $this->destination = new MigrateDestinationTable($table_name);

    // Mapped fields.
    $this->addFieldMapping('hash', 'hash');
    $this->addFieldMapping('type', 'type');
    $this->addFieldMapping('uid')->defaultValue(TI_AMG_FW_MIGRATE_FWXCONTENT_UID);
    $this->addFieldMapping('source', 'source');
    $this->addFieldMapping('source_options', 'source_options')->callbacks('unserialize');
    $this->addFieldMapping('redirect', 'redirect');
    $this->addFieldMapping('redirect_options', 'redirect_options')->callbacks('unserialize');
    $this->addFieldMapping('language')->defaultValue('en');
    $this->addFieldMapping('status_code', 'status_code');
    $this->addFieldMapping('count', 'count');
    $this->addFieldMapping('access', 'access');

  }

  /**
   * Function to construct query.
   */
  protected function query() {

    $query = Database::getConnection('default', TI_AMG_FW_MIGRATE_FWXCONTENT_SOURCE_CONNECTION)->select('redirect', 'rdt');
    $query->fields('rdt');
    $query->condition('redirect', 'node/%', 'LIKE');
    $query->condition('n.type', array('blog', 'person', 'gallery'), 'IN');
    $query->join('node', 'n', 'n.nid = substring(redirect,6)');
    return $query;
  }

  /**
   * Prepare row
   */
  public function prepareRow($source_row) {
    $source_node_id = str_replace('node/', '', $source_row->redirect);
    $dest_node_id = db_query("SELECT
    destid1
FROM
    ((SELECT
        b.destid1 AS destid1
    FROM
        migrate_map_blogs b
    WHERE
        b.sourceid1 = :node_id) UNION (SELECT
        g.destid1 AS destid1
    FROM
        migrate_map_gallery g
    WHERE
        g.sourceid1 = :node_id) UNION (SELECT
        p.destid1 AS destid1
    FROM
        migrate_map_person p
    WHERE
        p.sourceid1 = :node_id)) migrate_union;", array(':node_id' => $source_node_id))->fetchField();

    if (isset($dest_node_id) && !empty($dest_node_id)) {

      $source_row->redirect = 'node/' . $dest_node_id;
      return TRUE;

    }
    else {
      return FALSE;
    }

  }

}
