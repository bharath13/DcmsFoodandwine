<?php

/**
 * @file
 * Implementation of GalleryMigration for Drupal 7 sources.
 */

/**
 * Handling specific to a Drupal 7 source for nodes.
 */
class GalleryMigration extends DrupalNode7Migration {

  /**
   * Constructor.
   */
  public function __construct(array $arguments) {

    parent::__construct($arguments);
    $query = $this->query();
    $this->removeFieldMapping('uid');
    $this->removeFieldMapping('is_new');
    $this->removeFieldMapping('body');
    $this->removeFieldMapping('title');
    $this->removeFieldMapping('body:summary');
    $this->removeFieldMapping('body:format');
    $this->source = new MigrateSourceSQL($query, $this->sourceFields, NULL, $this->sourceOptions);

    // Core Drupal Fields.
    $this->addFieldMapping('is_new')->defaultValue(TRUE);

    $this->addFieldMapping('uid', TI_LSG_FWX_MIGRATION_UID);
    $this->addFieldMapping('title', 'title');
    $this->addFieldMapping('body', 'body_value');
    $this->addFieldMapping('body:summary', 'body_summary');
    $this->addFieldMapping('body:format')->defaultValue(TI_AMG_FW_MIGRATE_FWXCONTENT_TEXT_FORMAT);

    $this->addFieldMapping('field_multiple_images', 'slides')->sourceMigration('image');
    $this->addFieldMapping('field_multiple_images:source_type')->defaultValue('nid');

    $this->addFieldMapping('field_gallery_template', 'template_name');

    // Mapping Category Field.
    $this->addFieldMapping('field_fw_category', 'mapped_category');
    $this->addFieldMapping('field_fw_category:source_type')->defaultValue('tid');

    // Mapping gallery type.
    $this->addFieldMapping('field_gallery_type', 'gallery_type');
    $this->addFieldMapping('field_gallery_type:source_type')->defaultValue('tid');

    // Legacy nid and url information.
    $this->addFieldMapping('field_legacy_id', 'fwx_nid');
  }

  /**
   * Query for basic node fields.
   *
   * @return object
   *   Return QueryConditionInterface.
   */
  protected function query() {

    $query = parent::query();
    // Body Field.
    $query->leftJoin('field_data_body', 'fdb', 'n.nid=fdb.entity_id AND fdb.bundle=:type', array(':type' => $this->sourceType));
    $query->addField('fdb', 'body_value');
    $query->addField('fdb', 'body_summary');
    $query->addField('fdb', 'body_format');

    // Fetching Category field value.
    $query->leftJoin('field_data_field_category', 'field_category', 'n.nid=field_category.entity_id AND field_category.bundle=:type', array(':type' => $this->sourceType));
    $query->addField('field_category', 'field_category_tid');

    $query->orderBy('n.nid');

    return $query;
  }

  /**
   * Preparerow.
   */
  public function prepareRow($current_row) {

    // Always start your prepareRow implementation with this clause. You need to
    // be sure your parent classes have their chance at the row, and that if
    // they return FALSE (indicating the row should be skipped) you pass that
    // on.
    if (parent::prepareRow($current_row) === FALSE) {
      return FALSE;
    }

    // Fixing MigrationExeception:array_flip() error because of null values.
    foreach ($current_row as $field => $value) {
      if (empty($value) && $value != "0") {
        $current_row->$field = array();
      }
    }
    // Making the node to vertical gallery.
    $current_row->template_name = 'Vertical';

    // Assigning gallery type as 'Other'.
    $gallery_type_vid = ti_amg_fw_migrate_fwxcontent_get_vocabulary_id('gallery_type');
    $gallery_type_id = ti_amg_fw_migrate_fwxcontent_get_tid_from_name($gallery_type_vid, 'Other');
    $current_row->gallery_type = $gallery_type_id;

    // Mapping Category Field.
    $legacy_cateogyr_tid = $current_row->field_category_tid;
    if (!empty($legacy_cateogyr_tid)) {
      $term_name = ti_amg_fw_migrate_fwxcontent_legacy_termname_from_tid($legacy_cateogyr_tid);
      if (!empty($term_name)) {
        $fw_category_name = ti_amg_fw_migrate_fwxcontent_fwx_to_fw_category_mapping($term_name);
        if (!empty($fw_category_name)) {
          $vid = ti_amg_fw_migrate_fwxcontent_get_vocabulary_id('fw_category');
          $fw_category_id = ti_amg_fw_migrate_fwxcontent_get_tid_from_name($vid, $fw_category_name);
          $current_row->mapped_category = $fw_category_id;
        }
      }
    }

    // Saving legacy url.
    $path = $this->version->getPath('node/' . $current_row->nid);
    if ($path) {
      $current_row->oldpath = $path;
    }

    // Storing FWx nid value in Food&Wine.
    if (!empty($current_row->nid)) {
      $current_row->fwx_nid = 'FWx:' . $current_row->nid;
    }

    // Term References.
    $current_row->slides = $this->multivalueReferences('field_slides_target_id', $current_row->nid, 'nid');

    return TRUE;
  }

  /**
   * Prepare.
   */
  public function prepare($node, stdClass $row) {

    // Saving pathauto url.
    if (!empty($row->oldpath)) {
      $node->path['pathauto'] = 0;
      $node->path['alias'] = 'fwx/' . $row->oldpath;
      $node->path['source'] = 'node/' . $node->nid;
    }

    // Updating the metatag info.
    $meta_info = ti_amg_fw_migrate_fwxcontent_update_metatag_info($row);
    if (!empty($meta_info)) {
      $data = unserialize($meta_info);
      if (!empty($data)) {
        $meta_keys = array('title', 'keywords', 'abstract', 'description');
        foreach ($meta_keys as $key => $val) {
          if (!empty($data[$val])) {
            $node->metatags['und'][$val]['value'] = $data[$val]['value'];
          }
        }
      }
    }
  }

  /**
   * Returns multivalue nids or tids in array for node reference fields.
   */
  public function multivalueReferences($field_name, $entity_id, $field_type) {

    $ids = array();

    switch ($field_type) {
      case 'nid':
        $field_table = 'field_data_' . str_replace('_target_id', '', $field_name);
        break;
    }

    $query = Database::getConnection('default', $this->sourceConnection)
      ->select($field_table, 'nd')
      ->fields('nd', array($field_name))
      ->condition('nd.entity_id', $entity_id)
      ->condition('nd.bundle', $this->sourceType)
      ->isNotNull("nd.{$field_name}");

    $result = $query->execute()->fetchAll();
    foreach ($result as $row) {
      $ids[] = $row->$field_name;
    }

    return $ids;
  }

}
