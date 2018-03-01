<?php

/**
 * @file
 * Blog Migration for FoodandWine.
 */
class BlogMigration extends BaseMigration {

  /**
   * Implements __construct().
   */
  public function __construct() {
    parent::__construct();
    $this->description = t('Migrate Foodandwine Blogs');
    $items_url = $this->getSourceRepo() . 'blogs.json';
    $item_ID = '_id';
    $fields = array(
      'title' => t('Blog Title'),
      '_id' => t('Unique Id'),
      'excerpt' => t('Excerpt'),
      'body' => t('Body'),
      'position' => t('Image Position'),
      'label' => t('Legacy ID'),
      'author_nids' => t('Author Node Id'),
      'publish_at' => t('Publishing Date'),
      'published' => t('Publish Status'),
      'meta_title' => t('SEO-Friendly Title'),
      'meta_keywords' => t('Meta Tag Keywords'),
      'meta_description' => t('Meta Tag Description'),
      'embed_link' => t('Video Embed Link'),
      'youtubevideos' => t('You Tube Link'),
      'image_nids' => t('Image Nodes'),
      'credit' => t('Image Credit'),
      'caption' => t('Image Caption'),
      'alt' => t('Image Alt'),
    );
    $this->source = new MigrateSourceJSON($items_url, $item_ID, $fields);
    // Set up the destination node
    $this->destination = new MigrateDestinationNode('blog');
    // Set up the relationship map between source rows and destination objects.
    $this->map = new MigrateSQLMap($this->machineName, array(
        '_id' => array('type' => 'varchar',
          'length' => 255,
          'not null' => TRUE,
          'description' => 'Blog Unique Id',
        ),
      ), MigrateDestinationNode::getKeySchema()
    );
    $this->addFieldMapping('title', 'title');
    $this->addFieldMapping('field_deck', 'excerpt')->arguments(array('format' => 'full_html'));
    $this->addFieldMapping('body', 'body')->arguments(array('format' => 'full_html'));
    $this->addFieldMapping('field_image_position', 'position');
    $this->addFieldMapping('field_topic', 'blog_topics_list')->arguments(array('source_type' => 'tid'));
    $this->addFieldMapping('field_images', 'image_nids')->arguments(array('source_type' => 'nid'));
    $this->addFieldMapping('field_overwrite_image_alt_text', 'alt');
    $this->addFieldMapping('field_overwrite_image_caption', 'caption')->arguments(array('format' => 'full_html'));
    $this->addFieldMapping('field_overwrite_image_credit', 'credit')->arguments(array('format' => 'full_html'));
    $this->addFieldMapping('field_author', 'author_nids')->arguments(array('source_type' => 'nid'));
    $this->addFieldMapping('status', 'published');
    $this->addFieldMapping('metatag_title', 'meta_title');
    $this->addFieldMapping('metatag_keywords', 'meta_keywords');
    $this->addFieldMapping('metatag_description', 'meta_description');
    $this->addFieldMapping('field_legacy_id', 'label');
    $this->addFieldMapping('published_at', 'publish_at');
    $this->addFieldMapping('field_blog_video', 'youtubevideos')->arguments(array('format' => 'full_html'));
    $this->addFieldMapping('field_related_videos', 'brightcove_videos')->arguments(array('source_type' => 'nid'));
    $this->addFieldMapping('path', 'label');

    //Loading the tags to topic mapping file
    $mapping_file_path = drupal_get_path('module', 'ti_amg_fw_migrate') . '/json/' . 'tags_to_topic_mapping.json';
    $mapping_contents = file_get_contents($mapping_file_path);
    $decoded_map_contents = json_decode($mapping_contents, TRUE);
    global $map_array;
    $map_array = $decoded_map_contents[0];
  }
  /**
   * Converts the Date in JSON to UNIX TIMESTAMP
   * @param type $datestring
   * returns unix timestamp
   */
  public function fw_convert_date_to_timestamp($date_string) {
    if ($date_string) {
      $timestamp = date("U", strtotime($date_string));
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
    if (isset($row->publish_at) && $row->publish_at != '') {
      $row->publish_at = $this->fw_convert_date_to_timestamp($row->publish_at);
      if (time() < $row->publish_at) {
        $row->published = 0;
      }
      else {
        $row->published = 1;
      }
    }

    if ($row->meta_title == NULL) {
      $row->meta_title = $row->title . " | " . variable_get('site_name');
    }
    else {
      $row->meta_title = $row->meta_title . " | " . variable_get('site_name');
    }

    $blog_topics_names = array();

    if (count($row->tags) > 0) {
      //if any tags available, getting the corresponding mapped topic names
      $blog_topics_names = $this->tags_to_topic_mapping($row->tags);
      $topic_term_ids = array();
      //if any topic names are available,
      //getting the term id's of corresponded taxonomy names one by one
      if (count($blog_topics_names) > 0) {
        foreach ($blog_topics_names as $topic_name) {
          $tax_id = $this->getTidFromName('topic', 'name', $topic_name);
          if ($tax_id) {
            $topic_term_ids[] = $tax_id;
          }
        }
        // Assigning the taxonomy term id's to the blog of field_topic field
        $row->blog_topics_list = $topic_term_ids;
      }
    }

    //Get Image nids
    $image_nids = array();
    if (count($row->images) > 0) {
      foreach ($row->images as $image) {

        if ($image->path != '') {
          $row->alt = $image->alt;
          $row->caption = $image->caption;
          $row->credit = $image->credit;
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

      //Get Image Position
      $image_position = $row->images[0]->position;
      if ($image_position == 'left') {
        $row->position = 'Left';
      }
      elseif ($image_position == 'full') {
        $row->position = 'Full';
      }
    }

    // Get Authors NID's
    $author_names = array();
    if (count($row->authors) > 0) {
      foreach ($row->authors as $author) {
        $author_names[] = $author->name;
      }
      if (count($author_names) > 0) {
        $row->author_nids = $this->getBlogAuthorsNids('person', $author_names);
      }
    }

    // To update the videos
    if (isset($row->videos) && count($row->videos) > 0) {
      foreach ($row->videos as $video) {
        $embed_link = $video->embed_link;
        if (strrpos($embed_link, "youtube") > 0) {
          $row->youtubevideos = $embed_link;
        }
        elseif (strrpos($embed_link, "brightcove") > 0) {
          $embed_link = str_replace('\"', '"', $embed_link);
          $regex = "@name=\"\\@videoPlayer\" value=\"(\\d+)\"@i";
          preg_match($regex, $embed_link, $matches);
          if ($matches[1] != '') {
            $arr_video_ids = $this->getVideoIDs($matches[1]);
            if (!empty($arr_video_ids)) {
              $row->brightcove_videos = $arr_video_ids;
            }
            else {
              $row->brightcove_videos = NULL;
            }
          }
        }
        else {
          $row->brightcove_videos = NULL;
        }
      }
    }
    return TRUE;
  }

  /**
   * Implements prepare().
   */
  public function prepare($node, stdClass$row) {
    if ($row->label != NULL) {
      $node->path['pathauto'] = 0;
      if (isset($row->publish_at) && $row->publish_at != '') {
        $node_publish_at = $row->publish_at;
        $node_year = date('Y', $node_publish_at);
        $node_month = date('n', $node_publish_at);
        $node_day = date('j', $node_publish_at);
        $node->path['alias'] = "blogs" . "/" . $node_year . '/' . $node_month . '/' . $node_day . '/' . $row->label;
        if ($row->published) {
          $node->status = 1;
        }
        else {
          $node->status = 0;
          $node->path['alias'] = '';
        }
      }
      else {
        $node->status = 0;
        $node->path['alias'] = '';
      }
    }
  }
  /**
   * Implements complete().
   */
  public function complete($node, stdClass$row) {
    $node->field_deck['und'][0]['value'] = preg_replace_callback("/(<img[^>]*src *= *[\"']?)([^\"']*)/i", array($this, 'getURL'), $node->field_deck['und'][0]['value']);
    $node->field_deck['und'][0]['value'] = preg_replace_callback('~\bbackground(-image)?\s*:(.*?)\(\s*(\'|")?(?<image>.*?)\3?\s*\)~i', array($this, 'getcssURL'), $node->field_deck['und'][0]['value']);
    $node->body['und'][0]['value'] = preg_replace_callback("/(<img[^>]*src *= *[\"']?)([^\"']*)/i", array($this, 'getURL'), $node->body['und'][0]['value']);
    $node->body['und'][0]['value'] = preg_replace_callback('~\bbackground(-image)?\s*:(.*?)\(\s*(\'|")?(?<image>.*?)\3?\s*\)~i', array($this, 'getcssURL'), $node->body['und'][0]['value']);
    node_save($node);
    return TRUE;
  }
}

