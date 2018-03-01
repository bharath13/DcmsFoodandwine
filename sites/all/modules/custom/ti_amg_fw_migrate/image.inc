<?php

/**
 * @file
 * Image Migration for Foodandwine.
 */
class ImageMigration extends BaseMigration {

  /**
   * Implements __construct().
   */
  public function __construct() {
    parent::__construct();
    $this->description = t('Migrate Foodandwine images');

    // Set up the source
    $items_url = $this->getSourceRepo() . 'images.json';
    $item_ID = '_id';

    $fields = array(
      '_id' => t('Legacy id'),
      'original_filename' => t('File Name'),
      'label' => t('Label'),
      'fids' => t('Image FIDs'),
      'original_filename' => t('File Name'),
      'source_url' => t('Legacy Site Image URL'),
      'url' => t('Full Url of image'),
    );

    $this->source = new MigrateSourceJSON($items_url, $item_ID, $fields);

    // Set up the destination node
    $this->destination = new MigrateDestinationNode('image');

    // Set up the relationship map between source rows and destination objects.
    $this->map = new MigrateSQLMap($this->machineName, array(
        '_id' => array('type' => 'varchar',
          'length' => 255,
          'not null' => TRUE,
          'description' => 'Image Id',
        ),
      ), MigrateDestinationNode::getKeySchema()
    );


    $this->addFieldMapping('field_legacy_id', '_id');
    $this->addFieldMapping('title', 'original_filename');

    $this->addFieldMapping('field_image', 'main_url');
    $this->addFieldMapping('field_image:destination_file', 'original_filename');
    $this->addFieldMapping('field_image:file_replace')->defaultValue(FILE_EXISTS_REPLACE);
    $this->addFieldMapping('field_image:preserve_files')->defaultValue(FALSE);

    $this->addFieldMapping('field_image_thumb', 'thumb_url');
    $this->addFieldMapping('field_image_thumb:destination_file', 'original_filename');
    $this->addFieldMapping('field_image_thumb:file_replace')->defaultValue(FILE_EXISTS_REPLACE);
    $this->addFieldMapping('field_image_thumb:preserve_files')->defaultValue(FALSE);

    $this->addFieldMapping('field_image_large_thumb', 'large_thumb_url');
    $this->addFieldMapping('field_image_large_thumb:destination_file', 'original_filename');
    $this->addFieldMapping('field_image_large_thumb:file_replace')->defaultValue(FILE_EXISTS_REPLACE);
    $this->addFieldMapping('field_image_large_thumb:preserve_files')->defaultValue(FALSE);

    $this->addFieldMapping('field_main_image', 'normal_url');
    $this->addFieldMapping('field_main_image:destination_file', 'original_filename');
    $this->addFieldMapping('field_main_image:file_replace')->defaultValue(FILE_EXISTS_REPLACE);
    $this->addFieldMapping('field_main_image:preserve_files')->defaultValue(FALSE);

    $this->addFieldMapping('status')->defaultValue(1);
  }

  /**
   * Implements prepareRow().
   */
  public function prepareRow($row) {
    $row->original_filename = str_replace(" ", "_", $row->original_filename);
    $variations_label = array();
    $length_array = array();
    $variation_path = array();
    $row->normal_url = $row->url;
    if (isset($row->_attachments)) {
      foreach ($row->_attachments as $variation_name => $variation_value) {
        $encoded_url = $variation_value->url;
        $headers = drupal_http_request($encoded_url);
        if ($headers->code == "200" || $headers->code == "0") {
          $length_array[$variation_name] = $variation_value->length;
          $variation_path[$variation_name]['url'] = $encoded_url;
        }
        else {
          print $encoded_url . "," . $headers->code;
          echo "\n";
        }
      }
    }
    if (!empty($length_array)) {
      $maxlength = max($length_array);
      $max_variation = array_search($maxlength, $length_array);
      foreach ($length_array as $variation => $value) {
        if (stripos($variation, "variations/HD") !== FALSE &&
          stripos($row->main_url, "variations/HD") === FALSE
        ) {
          $row->main_url = $variations_label[$variation] = $variation_path[$variation]['url'];
        }
        if (stripos($variation, "variations/HD") === FALSE &&
          !isset($row->main_url) && $variation == $max_variation &&
          stripos($max_variation, "variations/thumbnail") === FALSE &&
          stripos($max_variation, "variations/large_thumbnail") === FALSE
        ) {
          //$row->main_url = $row->url . "/" . $max_variation;
          //$variations_label[$variation] = $row->url . "/" . $variation;
          $row->main_url = $variations_label[$variation] = $variation_path[$variation]['url'];
        }
        if (stripos($variation, "variations/HD") === FALSE &&
          !isset($row->main_url) && $variation == $max_variation
          && (stripos($max_variation, "variations/thumbnail") !== FALSE
            || stripos($max_variation, "variations/large_thumbnail") !== FALSE
          )
        ) {
          //$row->main_url = $row->url;
          $row->main_url = $variation_path[$variation]['url'];
        }
        if (stripos($variation, "variations/HD") === FALSE &&
          strpos($variation, "variations/thumbnail") === FALSE &&
          strpos($variation, "variations/large_thumbnail") === FALSE &&
          $variation != $max_variation
        ) {
          //$variations_label[$variation] = $row->url . "/" . $variation;
          $variations_label[$variation] = $variation_path[$variation]['url'];
        }
        if (strpos($variation, "variations/thumbnail") !== FALSE) {
          //$row->thumb_url = $row->url . "/" . $variation;
          $row->thumb_url = $variation_path[$variation]['url'];
        }
        if (strpos($variation, "variations/large_thumbnail") !== FALSE) {
          //$row->large_thumb_url = $row->url . "/" . $variation;
          $row->large_thumb_url = $variation_path[$variation]['url'];
        }
      }
      if (count($variations_label) > 0) {
        $row->other_crop_url = $variations_label;
      }
      else {
        $row->other_crop_url = NULL;
      }
    }
    return TRUE;
  }
  /**
   * Implements complete().
   */
  public function complete($entity, stdClass$row) {
   if(!isset($row->migrate_map_destid1)) {
    if ($row->other_crop_url != NULL) {
      $variation_arr = array();
      foreach ($row->other_crop_url as $variation => $variation_obj_url) {
        $node = new stdClass();
        $variation_url = $variation_obj_url;
        if (stripos($variation_url, "/variations/") !== FALSE) {
          $strip = explode("/variations/", $variation_url);
          $strip_var_raw = explode(".", $strip[1]);
          $strip_var_name = str_replace("/", "-", $strip_var_raw[0]);
          $strip_orig = explode("/", $strip[0]);
          $strip_file_name = end($strip_orig);
          $variation_title = $strip_var_name . "-" . $strip_file_name;
        }
        else {
          if (stripos($variation_url, "http://foodandwine.com/") !== FALSE ||
            stripos($variation_url, "http://www.foodandwine.com/") !== FALSE
          ) {
            $strip = str_replace(array("http://foodandwine.com/",
                "http://www.foodandwine.com/",
              ), "", $variation_url);
          }
          else {
            $strip = substr($variation_url, 1);
          }
          $variation_title = str_replace("/", "-", $strip);
        }
        $variation_title = str_replace(" ", "_", $variation_title);
        $variation_title = str_replace("%20", "_", $variation_title);
        $node->title = t('@id', array('@id' => $variation_title));
        $image = drupal_http_request($variation_obj_url);
        $variation_uri = file_build_uri($variation_title);
        $file = file_save_data($image->data, $variation_uri, FILE_EXISTS_REPLACE);
        $node->field_image['und'][0]['fid'] = $file->fid;
        $node->type = $this->destination->getBundle();
        $node->language = "und";
        $node->uid = 1;
        $node->status = 1;
        node_save($node);
        $variation_arr[] = $node->nid;
      }
      $main_image = node_load($entity->nid);
      $i = 0;
      foreach ($variation_arr as $variation_id) {
        $main_image->field_image_other_crop['und'][$i]['target_id'] = $variation_id;
        $i++;
      }
      node_save($main_image);    
     }
    } 
    return TRUE;
  }
  /**
   * Implements complete().
   */
  public function prepareRollback($entity_ids) {
    // parent::prepareRollback();
    // Code to execute before an entity has been rolled back.
    foreach ($entity_ids as $main_image_nid) {
      $query_variation_id = db_select('field_data_field_image_other_crop', 'oc');
      $query_variation_id->fields('oc', array('field_image_other_crop_target_id'));
      $query_variation_id->condition('oc.entity_id', $main_image_nid, '=');
      $result_variation_ids = $query_variation_id->execute()->fetchAll();
      if (!empty($result_variation_ids)) {
        $variation_nids = array();
        foreach ($result_variation_ids as $variation_nid) {
          $variation_nids[] = $variation_nid->field_image_other_crop_target_id;
        }
        node_delete_multiple($variation_nids);
      }
    }
    return TRUE;
  }
  /**
   * Flush image styles after migration completion
   */
  public function postImport() {
    variable_set('ti_amg_fw_image_flush', 1);
  }
  /**
   * Flush image styles after migration rollback
   */
  public function postRollback() {
    variable_set('ti_amg_fw_image_flush', 1);
  }
}

