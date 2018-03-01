<?php

/**
 * @file
 * Generic Page Migration for Foodandwine.
 */
class PageMigration extends BaseMigration {

  /**
   * Implements __construct().
   */
  public function __construct() {
    parent::__construct();
    $this->description = t('Migrate Foodandwine Generic pages');
// Set up the source
    $items_url = $this->getSourceRepo() . 'pages.json';
    $item_ID = '_id';
    $fields = array(
      'title' => t('Article Title'),
      'content' => t('Content'),
      '_id' => t('Page Unique Id'),
      'publish_at' => t('Publishing Date'),
      'published' => t('Publish Status'),
      'parent_label' => t('Parent Label'),
      'label' => t('Label'),
      'meta_title' => t('SEO-Friendly Title'),
      'meta_keywords' => t('Meta Tag Keywords'),
      'meta_description' => t('Meta Tag Description'),
      'file_names' => t('Attachnment Files Name'),
      'source_dir' => t('Source Directory Of Attachment'),
      'layout' => t('Page layout'),
    );
    $this->source = new MigrateSourceJSON($items_url, $item_ID, $fields);
// Set up the destination node
    $this->destination = new MigrateDestinationNode('page');
// Set up the relationship map between source rows and destination objects.
    $this->map = new MigrateSQLMap($this->machineName, array(
      '_id' => array('type' => 'varchar',
        'length' => 255,
        'not null' => TRUE,
        'description' => 'Page unique Identifier',
      ),
        ), MigrateDestinationNode::getKeySchema()
    );
// Set up the fields mappings TO destination fields FROM source fields.
    $this->addFieldMapping('title', 'title');
    $this->addFieldMapping('body', 'content')->arguments(array('format' => 'full_html'));
    $this->addFieldMapping('metatag_keywords', 'meta_keywords');
    $this->addFieldMapping('metatag_description', 'meta_description');
    $this->addFieldMapping('published_at', 'publish_at');
    $this->addFieldMapping('status', 'published');
    $this->addFieldMapping('metatag_title', 'title')->callbacks(array($this, 'generatetitle'));
    $this->addFieldMapping('path', 'parent_label');
    $this->addFieldMapping('field_attachments', 'file_names');
    $this->addFieldMapping('field_attachments:source_dir', 'source_dir');
//->defaultValue('site/default/files/migrate_temp');
    $this->addFieldMapping('field_attachments:file_replace')->defaultValue(FILE_EXISTS_REPLACE);
    $this->addFieldMapping('field_attachments:destination_dir')->defaultValue(variable_get('file_default_scheme', 'public') . '://generic-page');
    $this->addFieldMapping('field_layout', 'layout');
    $this->addFieldMapping('field_legacy_id', 'parent_label');
  }

  /**
   * Get the metatag title
   */
  protected function generatetitle($value) {
    $value = $value . " | " . variable_get('site_name');
    return $value;
  }

  /**
   * Converts the Date in JSON to UNIX TIMESTAMP
   *
   * @param type $datestring
   * returns unix timestamp
   */
  public function fw_convert_date_to_timestamp($date_string) {
    if ($date_string) {
      $parsed_time = strptime($date_string, '%Y/%m/%d %H:%M:%S');
      $timestamp = gmmktime($parsed_time['tm_hour'], $parsed_time['tm_min'], $parsed_time['tm_sec'], $parsed_time['tm_mon'] + 1, $parsed_time['tm_mday'], $parsed_time['tm_year'] + 1900
      );
      return $timestamp;
    }
    else {
      return NULL;
    }
  }

  /**
   * Implements prepareRow().
   */
  public function prepareRow($row) {
    $node_type = "video";
    $vid_title = $row->title;
    $row->vid_nid = db_query('SELECT nid FROM {node} WHERE title = :title ' .
        'AND type=:type', array(':title' => $vid_title, ':type' => $node_type)
        )->fetchField();
    if ($row->vid_nid !== FALSE) {
      print_r($row->title);
      echo "\n";
    }
    if ($row->vid_nid === FALSE && $row->label != "entertaining" && $row->label != "video") {
      if ($row->published == 'true') {
        $row->published = 1;
      }
      elseif ($row->published != 'true') {
        $row->published = 0;
      }
      $row->publish_at = $this->fw_convert_date_to_timestamp($row->publish_at);
//Preparing Attachment Field data
      $row->source_dir = 'sites/default/files/migrate_temp';
      if (!file_exists($row->source_dir)) {
        mkdir($row->source_dir, 0700, TRUE);
      }
      $file_names = array();
//Creating attachment files(CSS & JS) from JSON data
      foreach ($row->attachment_data as $attachment) {
        foreach ($attachment as $file_name => $data) {
          if ($file_name) {
            $file = fopen($row->source_dir . '/' . $file_name, "w");
            $data = preg_replace_callback('~\bbackground(-image)?\s*:(.*?)\(\s*(\'|")?(?<image>.*?)\3?\s*\)~i', array($this, 'getcssURL'), $data);
            fwrite($file, $data);
            fclose($file);
          }
          $file_names[] = $file_name;
        }
      }
      if (count($file_names) > 0) {
        $row->file_names = $file_names;
      }
      if ($row->layout == 'default') {
        $row->layout = 'DW';
      }
      elseif ($row->layout == 'no_sidebar') {
        $row->layout = 'NS';
      }
      else {
        $row->layout = NULL;
      }
      return TRUE;
    }
    else {
      return FALSE;
    }
  }

  /**
   * Implements prepare().
   */
  public function prepare($node, stdClass $row) {
    if ($row->vid_nid === FALSE &&
        $row->label != "entertaining" && $row->label != "video") {
      $node->path['pathauto'] = 0;
      if ($row->parent_label == NULL) {
        $node->path['alias'] = $row->label;
        $node->field_legacy_id['und'][0]['value'] = $row->label;
      }
      else {
        $node->path['alias'] = $row->parent_label . "/" . $row->label;
        $node->field_legacy_id['und'][0]['value'] = $row->parent_label . "/" . $row->label;
      }
    }
  }

  /**
   * Implements complete().
   */
  public function complete($node, stdClass $row) {
    if ($row->vid_nid === FALSE &&
        $row->label != "entertaining" && $row->label != "video") {
      if ($row->file_names != NULL) {
        foreach ($row->file_names as $file_name) {
          unlink($row->source_dir . '/' . $file_name);
        }
      }
      $node->body['und'][0]['value'] = preg_replace_callback("/(<img[^>]*src *= *[\"']?)([^\"']*)/i", array($this, 'getURL'), $node->body['und'][0]['value']);
      $node->body['und'][0]['value'] = preg_replace_callback('~\bbackground(-image)?\s*:(.*?)\(\s*(\'|")?(?<image>.*?)\3?\s*\)~i', array($this, 'getcssURL'), $node->body['und'][0]['value']);
      node_save($node);
      return TRUE;
    }
    else {
      return FALSE;
    }
  }
}


