<?php

/**
 * @file
 * Person Migration for Foodandwine.
 */
class PersonMigration extends BaseMigration {

  /**
   * Implements __construct().
   */
  public function __construct() {
    parent::__construct();

    $this->description = t('Migrate Foodandwine Person');

    // Set up the source
    $items_url = $this->getSourceRepo() . 'people.json';
    $item_ID = '_id';

    $fields = array(
      'first_name' => t('First Name'),
      'last_name' => t('Last Name'),
      'middle_name' => t('Middle Name'),
      'email' => t('Email'),
      'title' => t('Person job title'),
      'person_type' => t('Person Type'),
      'bio' => t('Person Biography'),
      'label' => t('Legacy ID'),
      'best_new_chef_year' => t('Best New Chef Year'),
      'group_tag_tids' => t('Group Tag TIDs'),
      'full_name_or_source' => t('Person Full Name or Source Name'),
      'dek' => t('Short Description'),
      'editor_notes' => t('Editor Notes'),
      'remove_from_search' => t('Remove from Search'),
      'meta_keywords' => t('Meta Tag Keywords'),
      'meta_description' => t('Meta Tag Description'),
      'publish_at' => t('Publishing Date'),
      'related_links' => t('Related Links'),
      'image_nids' => t('Image Nodes'),
      'credit_line' => t('Image Credit'),
      'caption' => t('Image Caption'),
      'alt' => t('Image Alt'),
    );

    $this->source = new MigrateSourceJSON($items_url, $item_ID, $fields);

    // Set up the destination node
    $this->destination = new MigrateDestinationNode('person');

    // Set up the relationship map between source rows and destination objects.
    $this->map = new MigrateSQLMap($this->machineName, array(
        'label' => array('type' => 'varchar',
          'length' => 255,
          'not null' => TRUE,
          'description' => 'Person Label',
        ),
      ), MigrateDestinationNode::getKeySchema()
    );

    // Set up the fields mappings TO destination fields FROM source fields.
    $this->addFieldMapping('title', 'full_name_or_source');
    $this->addFieldMapping('field_given_name', 'first_name');
    $this->addFieldMapping('field_last_name', 'last_name');
    $this->addFieldMapping('field_middle_initial', 'middle_name');
    $this->addFieldMapping('field_email', 'email');
    $this->addFieldMapping('field_job_title', 'title');
    $this->addFieldMapping('field_person_type', 'person_type');
    $this->addFieldMapping('field_biography', 'bio')->arguments(array('format' => 'full_html'));
    $this->addFieldMapping('field_legacy_id', 'label');
    $this->addFieldMapping('field_bnc_year', 'best_new_chef_year');
    $this->addFieldMapping('field_group_tags', 'group_tag_tids')->arguments(array('source_type' => 'tid'));
    $this->addFieldMapping('field_source_name', 'full_name_or_source');
    $this->addFieldMapping('body', 'dek')->arguments(array('format' => 'full_html'));
    $this->addFieldMapping('field_editors_note', 'editor_notes');
    $this->addFieldMapping('field_not_searchable', 'remove_from_search');
    $this->addFieldMapping('metatag_keywords', 'meta_keywords');
    $this->addFieldMapping('metatag_description', 'meta_description');
    $this->addFieldMapping('published_at', 'publish_at');
    $this->addFieldMapping('field_related_links', 'related_links');
    $this->addFieldMapping('field_images', 'image_nids')->arguments(array('source_type' => 'nid'));
    $this->addFieldMapping('field_overwrite_image_alt_text', 'alt');
    $this->addFieldMapping('field_overwrite_image_caption', 'caption')->arguments(array('format' => 'full_html'));
    $this->addFieldMapping('field_overwrite_image_credit', 'credit_line')->arguments(array('format' => 'full_html'));
    $this->addFieldMapping('field_simple_theme', 'themes')->arguments(array('source_type' => 'tid'));
    $this->addFieldMapping('field_related_videos', 'videos')->arguments(array('source_type' => 'nid'));
  }

  /**
   * Implements prepareRow().
   */
  public function prepareRow($row) {
    $row->remove_from_search = ($row->remove_from_search) ? 1 : 0;
    $row->person_type = ($row->person_type == 'person') ? 'p' : 's';
    $row->publish_at = $this->fw_convert_date_to_timestamp($row->publish_at);

    // Get Group Tag TIDs
    $group_tags_label = array();
    if (count($row->group_tags) > 0) {
      foreach ($row->group_tags as $group_tag) {
        $group_tags_label[] = $group_tag->label;
      }
      if (count($group_tags_label) > 0) {
        $row->group_tag_tids = $this->getTidFromLabel('group_tags', 'field_taxo_group_tag_label', $group_tags_label);
      }
    }

    //Get Image nids
    $image_nids = array();
    if (count($row->images) > 0) {
      foreach ($row->images as $image) {
        if ($image->path != '') {
          $row->alt = $image->alt;
          $row->caption = $image->caption;
          $row->credit_line = $image->credit_line;
          $image_name = $this->get_main_image_url($image->path);
          $image_uri = 'public://' . $image_name;
          if (!file_exists($image_uri)) {
            $image_split = explode('/', $image->path);
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
            $image_nids[] = $image_nid;
          }
        }
      }
      if (count($image_nids) < 1) {
        $row->image_nids = NULL;
      }
      else {
        $row->image_nids = $image_nids;
      }
    }

    // Get Theme TID's
    $theme_labels = array();
    if (isset($row->themes) && count($row->themes) > 0) {
      foreach ($row->themes as $theme) {
        $theme_labels[] = $theme->label;
      }
      if (count($theme_labels) > 0) {
        $row->themes = $this->getTidFromLabel('simple_themes', 'field_simple_theme_label',
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

    // Get the Video Node IDs
    if (isset($row->videos) && count($row->videos) > 0) {
      foreach ($row->videos as $video) {
        $video_id = $video->brightcove_bct_id;
        $video_ids_str .= $video_id . ",";
      }
      $video_ids_str = rtrim($video_ids_str, ",");
      $arr_video_ids = $this->getVideoIDs($video_ids_str);
      if (!empty($arr_video_ids)) {
        $row->videos = $arr_video_ids;
      }
      else {
        $row->videos = NULL;
      }
    }
    else {
      $row->videos = NULL;
    }
    //$row->videos = array(190521,190529);
    return TRUE;
  }

  /**
   * Implements prepare().
   */
  public function prepare($node, stdClass$row) {
    $node->path['pathauto'] = 0;
    $node->path['alias'] = "contributors" . "/" . $row->label;
    if (!empty($row->related_links)) {
      foreach ($row->related_links as $key => $related_link) {
        $node->field_related_links['und'][$key]['title'] = $related_link->display;
        $node->field_related_links['und'][$key]['url'] = $related_link->url;
      }
    }
  }

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
    // Fetch the bio snippets as array
    $bnc_snippets = $row->bio_snippets;
    // Iterate through each snippet and add it to field collection
    foreach ($bnc_snippets as $snippet) {
      $snippet_title = $snippet->name;
      $snippet_description = decode_entities($snippet->description);

      // Create a new field collection
      $field_collection_item = entity_create('field_collection_item',
        array('field_name' => 'field_bnc_snippet')
      );

      // Load items into field collection
      $field_collection_item->field_headline_title[LANGUAGE_NONE][0]['value'] = $snippet_title;
      $field_collection_item->field_description[LANGUAGE_NONE][0]['value'] = $snippet_description;

      // Save field collection item
      $field_collection_item->setHostEntity('node', $node);
      $field_collection_item->save(TRUE);
    }

    //Fetch the Related Books
    $related_books = $row->related_books;
    // Iterate through each book and add it to field collection
    foreach ($related_books as $book) {
      $book_title = $book->title;
      $book_isbn = $book->isbn;

      // Create a new field collection
      $field_collection_item = entity_create('field_collection_item',
        array('field_name' => 'field_books')
      );

      // Load items into field collection
      $field_collection_item->field_books_title[LANGUAGE_NONE][0]['value'] = $book_title;
      $field_collection_item->field_books_isbn[LANGUAGE_NONE][0]['value'] = $book_isbn;

      // Save field collection item
      $field_collection_item->setHostEntity('node', $node);
      $field_collection_item->save(TRUE);
    }

    $node->field_biography['und'][0]['value'] = preg_replace_callback("/(<img[^>]*src *= *[\"']?)([^\"']*)/i", array($this, 'getURL'), $node->field_biography['und'][0]['value']);
    $node->field_biography['und'][0]['value'] = preg_replace_callback('~\bbackground(-image)?\s*:(.*?)\(\s*(\'|")?(?<image>.*?)\3?\s*\)~i', array($this, 'getcssURL'), $node->field_biography['und'][0]['value']);
    $node->body['und'][0]['value'] = preg_replace_callback("/(<img[^>]*src *= *[\"']?)([^\"']*)/i", array($this, 'getURL'), $node->body['und'][0]['value']);
    $node->body['und'][0]['value'] = preg_replace_callback('~\bbackground(-image)?\s*:(.*?)\(\s*(\'|")?(?<image>.*?)\3?\s*\)~i', array($this, 'getcssURL'), $node->body['und'][0]['value']);


    // Decode the names and save to node
    $row->full_name = html_entity_decode($row->full_name_or_source, ENT_QUOTES, "utf-8");
    $row->first_name = html_entity_decode($row->first_name, ENT_QUOTES, "utf-8");
    $row->last_name = html_entity_decode($row->last_name, ENT_QUOTES, "utf-8");
    $row->middle_name = html_entity_decode($row->middle_name, ENT_QUOTES, "utf-8");

    if ($row->full_name_or_source) {
      $node->title = $row->full_name;
      $node->field_source_name['und'][0]['value'] = $row->full_name;
    }
    if ($row->first_name) {
      $node->field_given_name['und'][0]['value'] = $row->first_name;
    }
    if ($row->last_name) {
      $node->field_last_name['und'][0]['value'] = $row->last_name;
    }
    if ($row->middle_name) {
      $node->field_middle_initial['und'][0]['value'] = $row->middle_name;
    }

    // Save the Node
    node_save($node);
    return TRUE;
  }
}

