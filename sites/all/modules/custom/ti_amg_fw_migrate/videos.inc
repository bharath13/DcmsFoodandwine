<?php

/**
 * @file
 * Videos Migration for Foodandwine.
 */
class VideosMigration extends BaseMigration {

  /**
   * Implements __construct().
   */
  public function __construct(array$arguments) {
    $this->arguments = $arguments;
    parent::__construct();

    // Create the JSON File in the local directory
    $source_dir = "sites/default/files/migrate_temp";
    $filename = "videos.json";
    $source_path = $source_dir . "/" . $filename;
    // call function only when the file is not there
    if (!file_exists($source_path)) {
      $this->createVideoJson($source_dir, $filename);
    }

    $this->description = t('Migrate Foodandwine Videos');

    // Set up the source
    $items_url = $source_dir . '/' . 'videos.json';
    $item_ID = 'id';

    $fields = array(
      'id' => t('Legacy ID'),
      'name' => t('Recipe Name'),
      'adKeys' => t('AD Keys'),
      'creationDate' => t('Created at'),
      'itemState' => t('Item State'),
      'lastModifiedDate' => t('Modified Date'),
      'linkText' => t('Link Text'),
      'linkURL' => t('Link URL'),
      'longDescription' => t('Description'),
      'publishedDate' => t('Published at'),
      'shortDescription' => t('Dek'),
      'tags' => t('Video Tags'),
      'thumbnailURL' => t('Thumbnail URL'),
      'videoStillURL' => t('Still URL'),
    );

    $this->source = new MigrateSourceJSON($items_url, $item_ID, $fields);

    // Set up the destination node
    $this->destination = new MigrateDestinationNode('video');

    // Set up the relationship map between source rows and destination objects.
    $this->map = new MigrateSQLMap($this->machineName, array(
        'id' => array('type' => 'varchar',
          'length' => 255,
          'not null' => TRUE,
          'description' => 'Video ID',
        ),
      ), MigrateDestinationNode::getKeySchema()
    );

    // Set up the fields mappings TO destination fields FROM source fields.
    $this->addFieldMapping('field_video_id', 'id');
    $this->addFieldMapping('field_legacy_id', 'id');
    $this->addFieldMapping('title', 'name');
    $this->addFieldMapping('field_headline', 'shortDescription');
    $this->addFieldMapping('field_deck', 'shortDescription');
    $this->addFieldMapping('field_related_link_text', 'linkText');
    $this->addFieldMapping('field_related_link_url', 'linkURL');
    $this->addFieldMapping('field_description', 'longDescription');
    $this->addFieldMapping('status', 'status');
    $this->addFieldMapping('field_brightcove_status', 'itemState');
    $this->addFieldMapping('field_ad_keys', 'adKeys');
  }

  /**
   * Implements prepareRow().
   */
  public function prepareRow($current_row) {
    $current_row->status = 1;
    if (isset($current_row->itemState) && $current_row->itemState == 'ACTIVE') {
      $current_row->itemState = 6;
    }
    elseif (isset($current_row->itemState) && $current_row->itemState == 'iNACTIVE') {
      $current_row->itemState = 3;
    }
    elseif (isset($current_row->itemState) && $current_row->itemState == 'PENDING') {
      $current_row->itemState = 1;
    }
    elseif (isset($current_row->itemState) && $current_row->itemState == 'DELETED') {
      $current_row->itemState = 3;
    }
    else {
      $current_row->itemState = 0;
    }
    return TRUE;
  }

  /**
   * Implements complete().
   */
  public function complete($entity, $row) {
    // Load target node
    $node = node_load($entity->nid);
    $node_language = $node->language;
    // For attaching the thumbnail image
    $thumb_filepath = $row->thumbnailURL;
    //$thumb_filepath = "http:\/\/timeInc.brightcove.com.edgesuite.net\/rtmp_uds\/1260616200\/201401\/617\/1260616200_3032263375001_video-still-for-video-1460768550.jpg?pubId=1260616200";
    $thumb_filepath = str_replace('\/', '/', $thumb_filepath);
    $fetch_thumb_filename = $thumb_filepath;
    $fetch_thumb_filename = explode('/', $fetch_thumb_filename);
    $fetch_thumb_count = count($fetch_thumb_filename) - 1;
    $temp_thumb_filename = explode('?', $fetch_thumb_filename[$fetch_thumb_count]);
    $original_thumb_filename = $temp_thumb_filename[0];
    $thumb_destination_path = "public://videos/thumb/" . $original_thumb_filename;
    if (!file_exists('public://videos/thumb/')) {
      mkdir('public://videos/thumb/', 0777, TRUE);
    }
    $thumb_data = drupal_http_request($thumb_filepath);
    if (count($thumb_data) > 0) {
      $thumb_file = file_save_data($thumb_data->data, $thumb_destination_path, FILE_EXISTS_REPLACE);
      $thumb_file = (array) $thumb_file;
      $thumb_file['display'] = 1;
      $node->field_video_thumbnail[$node_language][0] = $thumb_file;
    }
    // For attaching the video still image
    $stillimage_filepath = $row->videoStillURL;
    //$stillimage_filepath = "http://timeinc.brightcove.com.edgesuite.net/rtmp_uds/1660653193/201501/3283/1660653193_4012764727001_sean-gumbo.jpg?pubId=1660653193";
    $stillimage_filepath = str_replace('\/', '/', $stillimage_filepath);
    $stillimage_filename = $stillimage_filepath;
    $stillimage_filename = explode('/', $stillimage_filename);
    $fetch_stillimage_count = count($stillimage_filename) - 1;
    $temp_stillimage_filename = explode('?', $stillimage_filename[$fetch_stillimage_count]);
    $original_stillimage_filename = $temp_stillimage_filename[0];
    $stillimage_destination_path = "public://videos/stillimages/" . $original_stillimage_filename;
    if (!file_exists('public://videos/stillimages/')) {
      mkdir('public://videos/stillimages/', 0777, TRUE);
    }
    $stillimage_data = drupal_http_request($stillimage_filepath);
    if (count($stillimage_data) > 0) {
      $stillimage_file = file_save_data($stillimage_data->data, $stillimage_destination_path, FILE_EXISTS_REPLACE);
      $stillimage_file = (array) $stillimage_file;
      $stillimage_file['display'] = 1;
      $node->field_video_still[$node_language][0] = $stillimage_file;
    }

    // Create the term names and attach it
    if (isset($row->tags) && count($row->tags) > 0) {
      // To get the vocabulary ID
      $vocb_machine_name = 'video_tags';
      $query = db_select('taxonomy_vocabulary', 'tv');
      $query->fields('tv', array('vid'));
      $query->condition('tv.machine_name', $vocb_machine_name, '=');
      $result = $query->execute();
      $data = $result->fetchAssoc();
      $vid = $data['vid'];

      // Create the Terms and attach it with the node.
      $term_count = 0;
      foreach ($row->tags as $tag) {
        // Check if the term is already available, If so attach it
        $taxo_term_name = $tag;
        $query_term = db_select('taxonomy_term_data', 'ttd');
        $query_term->fields('ttd', array('tid'));
        $query_term->condition('ttd.name', $taxo_term_name, '=');
        $query_term->condition('ttd.vid', $vid, '=');
        $result_term = $query_term->execute();
        $existing_term_data = $result_term->fetchAssoc();
        $term_tid = $existing_term_data['tid'];
        if ($term_tid > 0) {
          $node->field_video_tags[$node->language][$term_count]['tid'] = $term_tid;
        }
        else {
          // Create the term if it is not available
          $term_name = $tag;
          $term = new stdClass();
          $term->name = t($term_name);
          $term->vid = $vid;
          taxonomy_term_save($term);
          $node->field_video_tags[$node->language][$term_count]['tid'] = $term->tid;
        }
        $term_count++;
      }
    }
    // Save the node
    node_save($node);
    return TRUE;
  }

  /**
   * Used to Create the videos.json file in the temp directory
   *
   * @param String $source_dir
   * @param String $filename
   *
   * @return boolean
   */
  public function createVideoJson($source_dir, $filename) {
    if (!file_exists($source_dir)) {
      mkdir($source_dir, 0700, TRUE);
    }
    $source_path = $source_dir . "/" . $filename;

    // To get the total count
    $get_total_count = drupal_http_request("http://api.brightcove.com/services/library" . "?command=search_videos&video_fields=id,name,shortDescription,longDescription," . "creationDate,publishedDate,lastModifiedDate,linkURL,linkText,tags," . "videoStillURL,thumbnailURL,captioning,adKeys,itemState&page_size=100&" . "page_number=0&get_item_count=true&callback=BCL.onSearchResponse&" . "token=G0WAHddcP6XZOG9rNsyKkIyiDCGh9C7gfIxjRADssc0."
    );
    if ($get_total_count->data) {
      $count_data = $get_total_count->data;
      $count_data = (string) $count_data;
      $count_data = str_replace('BCL.onSearchResponse(', '', $count_data);
      $count_data = str_replace(');', '', $count_data);
      $count_data = json_decode($count_data);
      if ($count_data) {
        $total_pages = round($count_data->total_count / 100) - 1;
      }
      else {
        $total_pages = 23;
      }
    }
    // Fetch the videos based on the total_count
    $video_json = array();
    for ($i = 0; $i <= $total_pages; $i++) {
      $response = drupal_http_request("http://api.brightcove.com/services/library" . "?command=search_videos&video_fields=id,name,shortDescription,longDescription," . "creationDate,publishedDate,lastModifiedDate,linkURL,linkText,tags," . "videoStillURL,thumbnailURL,captioning,adKeys,itemState&page_size=100&" . "page_number=" . $i . "&get_item_count=true&callback=BCL.onSearchResponse&" . "token=G0WAHddcP6XZOG9rNsyKkIyiDCGh9C7gfIxjRADssc0."
      );

      $response_json_data = $response->data;
      $response_json_data = (string) $response_json_data;
      $response_json_data = str_replace('BCL.onSearchResponse(', '', $response_json_data);
      $response_json_data = str_replace(');', '', $response_json_data);
      $response_json_data = json_decode($response_json_data);

      if ($response_json_data) {
        foreach ($response_json_data->items as $response_data) {
          $video_json[] = $response_data;
        }
      }
    }
    if (count($video_json) > 0) {
      // Create the JSON File
      $videoFile = $source_path;
      try {
        $fh = fopen($videoFile, 'wb');
      }
      catch (Exception$error) {
        echo $error;
        return FALSE;
      }
      $videoData = json_encode($video_json);
      fwrite($fh, $videoData);
      fclose($fh);
      return TRUE;
    }
    else {
      return FALSE;
    }
  }
}

