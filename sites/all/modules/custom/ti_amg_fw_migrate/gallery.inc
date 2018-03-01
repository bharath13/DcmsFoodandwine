<?php

/**
 * @file
 * Gallery Migration for Foodandwine.
 */
class GalleryMigration extends BaseMigration {

  /**
   * Implements __construct().
   */
  public function __construct() {
    parent::__construct();

    $this->description = t('Migrate Foodandwine Gallery');

    // Set up the source
    $items_url = $this->getSourceRepo() . 'slideshows.json';
    $item_ID = 'label';

    $fields = array(
      'title' => t('Gallery Title'),
      'dek' => t('Deck'),
      'label' => t('Legacy ID'),
      'advertiser_logo' => t('Advertiser Logo'),
      'advertiser_url' => t('Advertiser URL'),
      'canonical_url' => t('Canonical URL'),
      'editors_note' => t('Editors Note'),
      'native_advertising' => t('Native Advertising'),
      'publish_date' => t('Publish Date'),
      'content_type' => t('Gallery Content Type TID'),
      'layout' => t('Gallery Layout'),
      'related_slideshows' => t('Related Slideshows'),
      'other_related_links_header' => t('Related Links'),
      'meta_description' => t('Meta Tag Description'),
      'seo_title_override' => t('SEO Title Override'),
    );

    $this->source = new MigrateSourceJSON($items_url, $item_ID, $fields);

    // Set up the destination node
    $this->destination = new MigrateDestinationNode('gallery');

    // Set up the relationship map between source rows and destination objects.
    $this->map = new MigrateSQLMap($this->machineName, array(
        'label' => array('type' => 'varchar',
          'length' => 255,
          'not null' => TRUE,
          'description' => 'Legacy ID',
        ),
      ), MigrateDestinationNode::getKeySchema()
    );

    // Set up the fields mappings TO destination fields FROM source fields.
    /*
    $this->addFieldMapping('title', 'title');
    $this->addFieldMapping('field_deck', 'dek')->arguments(array('format' => 'full_html'));
    $this->addFieldMapping('field_legacy_id', 'label');
    $this->addFieldMapping('field_ad_url', 'advertiser_url');
    $this->addFieldMapping('field_canonical_url', 'canonical_url');
    $this->addFieldMapping('field_editors_note', 'editors_note');
    $this->addFieldMapping('field_native_advertising', 'native_advertising');
    $this->addFieldMapping('field_gallery_layout', 'layout');
    $this->addFieldMapping('metatag_description', 'meta_description');
    $this->addFieldMapping('metatag_title', 'seo_title_override');
    $this->addFieldMapping('path', 'label');
    $this->addFieldMapping('field_gallery_type', 'content_type_tid')->arguments(array('source_type' => 'tid'));
    $this->addFieldMapping('field_related_gallery', 'related_gallery_label')->sourceMigration(array('Gallery'));
    $this->addFieldMapping('field_related_links', 'other_related_links_header');
    $this->addFieldMapping('field_complex_theme', 'themes')->arguments(array('source_type' => 'tid'));
     * 
     */
    $this->addFieldMapping('status')->defaultValue(1);
    $this->addFieldMapping('published_at', 'publish_date');

  }

  /**
   * Converts the Date in JSON to UNIX TIMESTAMP
   * @param type $date_string
   * returns unix timestamp
   */
  public function fw_convert_datetime_to_timestamp($date_string) {
    if ($date_string) {
      $timestamp = date("U", strtotime($date_string));
      return $timestamp;
    }
    else {
      return NULL;
    }
  }

  /**
   * Implements prepareRow() Function
   */
  public function prepareRow($row) {
    
    //Assigning Native Advertising
    $row->native_advertising = ($row->native_advertising) ? 1 : 0;
    //Assigning Published Date
    $row->publish_date = $this->fw_convert_datetime_to_timestamp($row->publish_date);
    //Assigning Layout field
    if ($row->layout) {
      if ($row->layout == 'standard') {
        $row->layout = 'STD';
      }
      elseif ($row->layout == 'high_definition') {
        $row->layout = 'HD';
      }
    }
    //Assigning Gallery Type field
    if ($row->content_type) {
      $row->content_type_tid = $this->getTidFromLabel('gallery_type', 'field_taxo_gallery_type_label', array($row->content_type));
    }
    //Assigning Related Slideshows
    $gallery_label = array();
    if (count($row->related_slideshows) > 0) {
      foreach ($row->related_slideshows as $relslides) {
        if ($relslides->url != '') {
          $gallery_label[] = $relslides->url;
        }
      }
    }
    if (count($gallery_label) > 0) {
      $row->related_gallery_label = $gallery_label;
    }
    else {
      $row->related_gallery_label = NULL;
    }

    // Get Theme TID's
    $theme_labels = array();
    if (isset($row->themes) && count($row->themes) > 0) {
      foreach ($row->themes as $theme) {
        $theme_labels[] = $theme->label;
      }
      if (count($theme_labels) > 0) {
        $row->themes = $this->getTidFromLabel('complex_themes', 'field_complex_theme_label',
          $theme_labels
        );
      }
      else {
        $row->themes = NULL;
      }
    }
    else {
      $row->themes = NULL;
    }

    //Assign seo_title_override to metatag_title field
    if (isset($row->seo_title_override) && $row->seo_title_override != NULL) {
      $row->seo_title_override = $row->seo_title_override;
    }
    return TRUE;
  }

  /**
   * Implements prepare() Function
   */
  public function prepare($node, stdClass$row) {
    /*
    $node->title = decode_entities($node->title);
    $node->path['pathauto'] = 0;
    $node->path['alias'] = "slideshows" . "/" . $row->label;
    //Assigning Related Links
    if ((isset($row->other_related_links_header)) && (!empty($row->other_related_links_header))) {
      if (is_array($row->other_related_links_header)) {
        foreach ($row->other_related_links_header as $key => $related_link) {
          $node->field_related_links['und'][$key]['title'] = $related_link->display;
          $node->field_related_links['und'][$key]['url'] = $related_link->url;
        }
      }
      else {
        return FALSE;
      }
    }
     * 
     */
  }

  /**
   * Used for pre saving the related slideshows which is used for relationship mapping
   * Implements createStub().
   *
   * @param Object $migration Object that contains current migration data
   * @param Array $source_id Source ID (url) of the Slideshows
   *
   * @return Array/Boolean
   */
  /*
  protected function createStub($migration, array$source_id) {
    $node = new stdClass();
    $node->title = t('Stub for @id', array('@id' => $source_id[0]));
    //$node->body[LANGUAGE_NONE][0]['value'] = t('Stub body');
    $node->type = $this->destination->getBundle();
    //$node->uid = 1;
    $node->status = 0;
    node_save($node);
    if (isset($node->nid)) {
      return array($node->nid);
    }
    else {
      return FALSE;
    }
  }
   * 
   */

  /**
   * Used for updating the slides in the current row
   * Implements complete().
   *
   * @param Object $entity Destination
   * @param Object $row Source
   *
   * @return Boolean
   */
  public function complete($entity, $row) {
    // Load target node
    $node = node_load($entity->nid);
    $node_language = $node->language;
    // Fetch the slides as array
    $slides_arr = $row->slides;
    // Sort the $slides_arr array based on the position field
    usort($slides_arr, array($this, "cmp"));
    $count = 1;
    // Delete the existing field_ingredients entries
    if (!empty($row->migrate_map_destid1)
      && count($node->field_slide_info[$node_language]) > 0
    ) {
      $field_collection_item_values = array();
      foreach ($node->field_slide_info[$node_language] as $key => $value) {
        // Build array of field collection values.
        $field_collection_item_values[] = $value['value'];
        // Unset them.
        unset($node->field_slide_info[$node_language][$key]);
      }
      // Delete field collection items.
      entity_delete_multiple('field_collection_item', $field_collection_item_values);
      node_save($node);
    }

    // Iterate through each slide and add it to field collection
    foreach ($slides_arr as $key => $slide) {
      if (($key + $count) == ($slide->position)) {
        $slide_title = '';
        $slide_title = decode_entities($slide->title);
        $slide_dek = '';
        $slide_dek = $slide->dek;
        $slide_alt = '';
        $slide_alt = $slide->featured_image->alt_text;
        $slide_credit = '';
        $slide_credit = $slide->featured_image->credit;
        $slide_link = '';
        $slide_link = $slide->link->url;
        $slide_ad = '';
        $slide->ad_slide = ($slide->ad_slide) ? 1 : 0;
        $slide_ad = $slide->ad_slide;

        // Get the nid for the image
        if ((isset($slide->featured_image->path)) && ($slide->featured_image->path != '')) {
          $main_image_id_arr = 0;
          $arr_image_id = $this->getImageNID($slide->featured_image->path);


          // If no NID, forcefully get the nid
          // Get the NID of the image without variations
          if ($row->layout == 'HD') {
            if (!$arr_image_id && $slide->featured_image->path) {
              $image_path_exploded = explode('/variations/', $slide->featured_image->path);
              $image_url = $image_path_exploded[0];
              $file_name = substr($image_url, strrpos($image_url, '/') + 1);
              $arr_image_id = db_query('SELECT nid FROM {node} WHERE title = :title ' . 'AND type=:type', array(':title' => $file_name, ':type' => 'image')
              )->fetchField();

              $image_uri = 'public://' . $file_name;
              $image_info = image_get_info($image_uri);
              $drupal_public_path = drupal_realpath('public://');

              if ($image_info['width'] < 550) {
                $response = drupal_http_request($slide->featured_image->path);
                if ($response->code == "200") {
                  @copy($slide->featured_image->path, $drupal_public_path . '/' . $file_name);
                }
              }
            }
          }


          if (!empty($arr_image_id)) {
            $main_image_id_arr = $arr_image_id;
          }
          else {
            $main_image_id_arr = 0;
          }
        }
        else {
          $main_image_id_arr = 0;
        }

        // Create a new field collection
        //if ($slide_title != '') {
          $field_collection_item = entity_create('field_collection_item',
            array('field_name' => 'field_slide_info')
          );

          // Load items into field collection
          $field_collection_item->field_slide_title[LANGUAGE_NONE][0]['value'] = $slide_title;
          $slide_dek = preg_replace_callback("/(<img[^>]*src *= *[\"']?)([^\"']*)/i", array($this, 'getURL'), $slide_dek);
          $slide_dek = preg_replace_callback('~\bbackground(-image)?\s*:(.*?)\(\s*(\'|")?(?<image>.*?)\3?\s*\)~i', array($this, 'getcssURL'), $slide_dek);
          $field_collection_item->field_slide_deck[LANGUAGE_NONE][0]['value'] = $slide_dek;
          $field_collection_item->field_slide_deck[LANGUAGE_NONE][0]['format'] = 'full_html';
          if ($slide_alt != NULL) {
            $field_collection_item->field_overwrite_image_alt_text[LANGUAGE_NONE][0]['value'] = $slide_alt;
          }
          if ($slide_credit != NULL) {
            $field_collection_item->field_overwrite_image_credit[LANGUAGE_NONE][0]['value'] = $slide_credit;
            $field_collection_item->field_overwrite_image_credit[LANGUAGE_NONE][0]['format'] = 'full_html';
          }
          $field_collection_item->field_ad_slide[LANGUAGE_NONE][0]['value'] = $slide_ad;
          $field_collection_item->field_slide_link_url[LANGUAGE_NONE][0]['url'] = $slide_link;
          $field_collection_item->field_slide_image[LANGUAGE_NONE][0]['target_id'] = $main_image_id_arr;
          if (!empty($slide->plus_links)) {
            foreach ($slide->plus_links as $key => $slide_plus_link) {
              $field_collection_item->field_slide_related_link[LANGUAGE_NONE][$key]['title'] = $slide_plus_link->display;
              $field_collection_item->field_slide_related_link[LANGUAGE_NONE][$key]['url'] = $slide_plus_link->url;
            }
          }
          // Save field collection item
          $field_collection_item->setHostEntity('node', $node);
          $field_collection_item->save(TRUE);
        //}
        // Save the Node
        node_save($node);
      }
    }
/*
    $node->field_deck['und'][0]['value'] = preg_replace_callback("/(<img[^>]*src *= *[\"']?)([^\"']*)/i", array($this, 'getURL'), $node->field_deck['und'][0]['value']);
    $node->field_deck['und'][0]['value'] = preg_replace_callback('~\bbackground(-image)?\s*:(.*?)\(\s*(\'|")?(?<image>.*?)\3?\s*\)~i', array($this, 'getcssURL'), $node->field_deck['und'][0]['value']);
    $node->body['und'][0]['value'] = preg_replace_callback("/(<img[^>]*src *= *[\"']?)([^\"']*)/i", array($this, 'getURL'), $node->body['und'][0]['value']);
    $node->body['und'][0]['value'] = preg_replace_callback('~\bbackground(-image)?\s*:(.*?)\(\s*(\'|")?(?<image>.*?)\3?\s*\)~i', array($this, 'getcssURL'), $node->body['und'][0]['value']);
    node_save($node);
 * 
 */

    return TRUE;
  }

  /**
   * Used for usort function to sort the given array as per the specified
   * position value and return the result
   */
  public function cmp($a, $b) {
    return $a->position - $b->position;
  }

  /**
   * Used to get the respective image ID based on the image path
   *
   * @param String $imagepath Holds the path of the image
   *
   * @return Array Returns the Node ID of the Image
   */
  public function getImageNID($imagepath = '') {
    if ($imagepath != '') {
      $image_name = $this->get_main_image_url($imagepath);
      $image_uri = 'public://' . $image_name;
      if (!file_exists($image_uri)) {
        $image_split = explode('/', $imagepath);
        $image_title = end($image_split);
        $node_type = "image";
        $image_nid = db_query('SELECT nid FROM {node} WHERE title = :title ' . 'AND type=:type', array(':title' => $image_title, ':type' => $node_type)
        )->fetchField();
      }
      else {
        $image_uri = 'public://' . $image_name;
        $query = db_select('file_managed', 'file')->condition('uri', $image_uri, '=')->fields('field_image', array('entity_id'));
        $query->join('field_data_field_image', 'field_image', 'file.fid = field_image.field_image_fid');
        $image_nid = $query->execute()->fetchfield();
      }

      if ($image_nid) {
        return $image_nid;
      }
      else {
        return FALSE;
      }
    }
    else {
      return FALSE;
    }
  }
}

