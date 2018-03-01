<?php

/**
 * @file
 * Implementation of DrupalNodeMigration for Drupal 7 sources.
 */

/**
 * Handling specific to a Drupal 7 source for nodes.
 */
class ImageMigration extends DrupalNode7Migration {

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
    $this->removeFieldMapping('body');
    $this->removeFieldMapping('body:summary');
    $this->removeFieldMapping('body:format');
    $this->source = new MigrateSourceSQL($query, $this->sourceFields, NULL, $this->sourceOptions);
    // Core Drupal Fields.
    $this->addFieldMapping('is_new')->defaultValue(TRUE);
    $this->addFieldMapping('uid', TI_LSG_FWX_MIGRATION_UID);

    $this->addFieldMapping('title', 'title');
    $this->addFieldMapping('field_headline', 'title');
    $this->addFieldMapping('field_headline:format')->defaultValue('wysiwyg');
    $this->addFieldMapping('field_deck', 'body_value');
    $this->addFieldMapping('field_deck:format')->defaultValue('wysiwyg');

    $this->addFieldMapping('field_alt_text', 'field_alt_text_value');
    $this->addFieldMapping('field_caption', 'field_caption_value');
    $this->addFieldMapping('field_caption:format')->defaultValue('wysiwyg');
    $this->addFieldMapping('field_credit', 'field_credit_value');
    $this->addFieldMapping('field_credit:format')->defaultValue('wysiwyg');
    $this->addFieldMapping('field_image', 'legacy_img_uri');
    $this->addFieldMapping('field_image:source_dir')->defaultValue(TI_AMG_FW_MIGRATE_FWXCONTENT_SOURCE_URL);
    $this->addFieldMapping('field_image:destination_dir', 'destination_path');
    $this->addFieldMapping('field_image:file_replace')->defaultValue(MigrateFile::FILE_EXISTS_REUSE);

    // Mapping 'More' field.
    $this->addFieldMapping('field_external_link', 'field_slide_more');
    $this->addFieldMapping('field_external_link:title', 'field_slide_more:title');
    $this->addFieldMapping('field_external_link:attributes', 'field_slide_more:attributes');
    $this->addFieldMapping('field_external_link:language', 'field_slide_more:language');

    // Mapping 'Related' field.
    $this->addFieldMapping('field_slide_related_link', 'field_slide_related');
    $this->addFieldMapping('field_slide_related_link:title', 'field_slide_related:title');
    $this->addFieldMapping('field_slide_related_link:attributes', 'field_slide_related:attributes');
    $this->addFieldMapping('field_slide_related_link:language', 'field_slide_related:language');

    // Mapping legacy nid.
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

    $query->leftJoin('field_data_body', 'fdb', 'n.nid=fdb.entity_id AND fdb.bundle=:type', array(':type' => $this->sourceType));
    $query->addField('fdb', 'body_value');
    $query->addField('fdb', 'body_format');

    $query->leftJoin('field_data_field_alt_text', 'fat', 'n.nid=fat.entity_id AND fat.bundle=:type', array(':type' => $this->sourceType));
    $query->addField('fat', 'field_alt_text_value');

    $query->leftJoin('field_data_field_caption', 'fc', 'n.nid=fc.entity_id AND fc.bundle=:type', array(':type' => $this->sourceType));
    $query->addField('fc', 'field_caption_value');

    $query->leftJoin('field_data_field_credit', 'fcrt', 'n.nid=fcrt.entity_id AND fcrt.bundle=:type', array(':type' => $this->sourceType));
    $query->addField('fcrt', 'field_credit_value');

    $query->leftJoin('field_data_field_image', 'field_image', 'n.nid=field_image.entity_id AND field_image.bundle=:type', array(':type' => $this->sourceType));
    $query->addField('field_image', 'field_image_fid');

    $query->leftJoin('field_data_field_slide_related', 'field_slide_related', 'n.nid=field_slide_related.entity_id AND field_slide_related.bundle=:type', array(':type' => $this->sourceType));

    $query->leftJoin('field_data_field_slide_more', 'field_slide_more', 'n.nid=field_slide_more.entity_id AND field_slide_more.bundle=:type', array(':type' => $this->sourceType));
    // dpq($query);
    return $query;
  }

  /**
   * Implementing preparerow function.
   */
  public function prepareRow($current_row) {
    // Always start your prepareRow implementation with this clause. You need to
    // be sure your parent classes have their chance at the row, and that if
    // they return FALSE (indicating the row should be skipped) you pass that
    // on.
    if (parent::prepareRow($current_row) === FALSE) {
      return FALSE;
    }
    if (!empty($current_row->field_image_fid)) {
      $result = Database::getConnection('default', $this->sourceConnection)
        ->select('file_managed', 'fm')
        ->fields('fm', array('uri'))
        ->condition('fm.fid', $current_row->field_image_fid)
        ->execute()
        ->fetchAll();

      $image_uri = $result[0]->uri;
      $current_row->legacy_img_uri = file_uri_target($image_uri);
      $pathinfo = pathinfo($current_row->legacy_img_uri);
      $current_row->destination_path = 'public://' . $pathinfo['dirname'];
    }

    // Storing FWx nid value in Food&Wine.
    if (!empty($current_row->nid)) {
      $current_row->fwx_nid = 'FWx:' . $current_row->nid;
    }


    return TRUE;
  }

}
