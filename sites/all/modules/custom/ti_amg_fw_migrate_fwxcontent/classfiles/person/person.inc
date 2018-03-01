<?php

/**
 * @file
 * Implementation of DrupalNode7BlogMigration for Drupal 7 sources.
 */

/**
 * Handling specific to a Drupal 7 source for nodes.
 */
class PersonMigration extends DrupalNode7Migration {

  /**
   * Constructor.
   */
  public function __construct(array $arguments) {

    parent::__construct($arguments);
    $query = $this->query();
    $this->removeFieldMapping('uid');
    $this->removeFieldMapping('vid');
    $this->removeFieldMapping('is_new');
    $this->removeFieldMapping('title');

    $this->source = new MigrateSourceSQL($query, $this->sourceFields, NULL, $this->sourceOptions);

    // Core Drupal Fields.
    $this->addFieldMapping('is_new')->defaultValue(TRUE);
    $this->addFieldMapping('uid', TI_AMG_FW_MIGRATE_FWXCONTENT_UID);
    $this->addFieldMapping('title', 'title');
    $this->addFieldMapping('field_email', 'field_email_value');
    $this->addFieldMapping('field_legacy_id', 'fwx_nid');
  }

  /**
   * Query for basic node fields.
   *
   * @return obejct
   *   Return QueryConditionInterface.
   */
  protected function query() {
    // Fetching current F&W author names.
    /*
    $author_names = array();
    $authors = Database::getConnection('', 'default')
    ->select('node', 'n')
    ->fields('n', array('nid', 'title'))
    ->condition('n.type', 'person')
    ->execute()
    ->fetchAll();
    foreach($authors as $author) {
    $author_names[] = trim($author->title);
    }
     */
    $query = parent::query();

    // Email Field.
    $query->leftJoin('field_data_field_email', 'field_email', 'n.nid=field_email.entity_id AND field_email.bundle=:type', array(':type' => $this->sourceType));
    $query->addField('field_email', 'field_email_value');

    // Excluding current F&W author names if exists in FWx also.
    // $query->condition('n.title', $author_names, 'NOT IN');
    // dpq($query);
    return $query;
  }

  /**
   * Implementing prepareRow().
   */
  public function prepareRow($current_row) {

    // Always start your prepareRow implementation with this clause. You need to
    // be sure your parent classes have their chance at the row, and that if
    // they return FALSE (indicating the row should be skipped) you pass that
    // on.
    if (parent::prepareRow($current_row) === FALSE) {
      return FALSE;
    }

    if (!empty($current_row->nid)) {
      $current_row->fwx_nid = 'FWx:' . $current_row->nid;
    }

    if (!empty($current_row->title)) {
      if (!empty(ti_amg_fw_migrate_fwxcontent_verify_person_existance($current_row))) {
        // Already user existed in foodandwine.
        return FALSE;
      }
    }
    return TRUE;
  }

  /**
   * Implementing prepare().
   */
  public function prepare($node, stdClass $row) {
    // Unsetting the alias from legacy.
    if (!empty($node->path['alias'])) {
      $node->path['alias'] = '';
    }
    // Making the alias to autogenerate.
    // Then it will follow as 'contributors/<name>'.
    $node->path['pathauto'] = 1;
  }

}
