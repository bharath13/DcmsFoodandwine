<?php

/**
 * @file
 * Implementation of DrupalNode7BlogMigration for Drupal 7 sources.
 */

/**
 * Handling specific to a Drupal 7 source for nodes.
 */
class BlogsMigration extends DrupalNode7Migration {

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
    $this->addFieldMapping('uid', TI_AMG_FW_MIGRATE_FWXCONTENT_UID);
    $this->addFieldMapping('title', 'title');
    $this->addFieldMapping('field_headline', 'field_headline_value');
    $this->addFieldMapping('field_headline:format')->defaultValue('wysiwyg');
    $this->addFieldMapping('body', 'body_value');
    $this->addFieldMapping('body:summary', 'body_summary');
    $this->addFieldMapping('body:format')->defaultValue(TI_AMG_FW_MIGRATE_FWXCONTENT_TEXT_FORMAT);
    $this->addFieldMapping('field_images', 'field_images_target_id')->sourceMigration('image');
    $this->addFieldMapping('field_images:source_type')->defaultValue('nid');

    // Mapping Author Field.
    $this->addFieldMapping('field_author', 'field_fwx_author_target_id')->sourceMigration('person');
    $this->addFieldMapping('field_author:source_type')->defaultValue('nid');

    // Mapping Main Video Field.
    $this->addFieldMapping('field_video_hero', 'hero_video');
    $this->addFieldMapping('field_video_hero:source_type')->defaultValue('nid');

    // Mapping Embedded Main Video Field.
    $this->addFieldMapping('field_blog_video', 'embedded_video');
    $this->addFieldMapping('field_blog_video:format')->defaultValue('wysiwyg');

    // Mapping Category Field.
    $this->addFieldMapping('field_category', 'mapped_category');
    $this->addFieldMapping('field_category:source_type')->defaultValue('tid');

    // Mapping Topic Field.
    $this->addFieldMapping('field_topic', 'topic_list');
    $this->addFieldMapping('field_topic:source_type')->defaultValue('tid');

    // Mapping Skyword content fields.
    $this->addFieldMapping('skyword_content_id', 'skyword_content_id_value');
    $this->addFieldMapping('skyword_tracking_tag', 'skyword_tracking_tag_value');
    $this->addFieldMapping('skyword_metadescription', 'skyword_metadescription_value');
    $this->addFieldMapping('skyword_seo_title', 'skyword_seo_title_value');

    // Mapping syndication checkbox.
    $this->addFieldMapping('field_syndication', 'field_syndication_value');

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

    // Headline Field.
    $query->leftJoin('field_data_field_headline', 'fh', 'n.nid=fh.entity_id AND fh.bundle=:type', array(':type' => $this->sourceType));
    $query->addField('fh', 'field_headline_value');

    // Body Field.
    $query->leftJoin('field_data_body', 'fdb', 'n.nid=fdb.entity_id AND fdb.bundle=:type', array(':type' => $this->sourceType));
    $query->addField('fdb', 'body_value');
    $query->addField('fdb', 'body_summary');

    // Adding Image Field.
    $query->leftJoin('field_data_field_images', 'field_images', 'n.nid=field_images.entity_id AND field_images.bundle=:type', array(':type' => $this->sourceType));
    $query->addField('field_images', 'field_images_target_id');

    // Adding Skyword Fields.
    // Skyword content id.
    $query->leftJoin('field_data_skyword_content_id', 'skyword_content_id', 'n.nid=skyword_content_id.entity_id AND skyword_content_id.bundle=:type', array(':type' => $this->sourceType));
    $query->addField('skyword_content_id', 'skyword_content_id_value');
    // Skyword content Tracking tag.
    $query->leftJoin('field_data_skyword_tracking_tag', 'skyword_tracking_tag', 'n.nid=skyword_tracking_tag.entity_id AND skyword_tracking_tag.bundle=:type', array(':type' => $this->sourceType));
    $query->addField('skyword_tracking_tag', 'skyword_tracking_tag_value');
    // Skyword content Metadescription.
    $query->leftJoin('field_data_skyword_metadescription', 'skyword_metadescription', 'n.nid=skyword_metadescription.entity_id AND skyword_metadescription.bundle=:type', array(':type' => $this->sourceType));
    $query->addField('skyword_metadescription', 'skyword_metadescription_value');
    // Skyword content seo title.
    $query->leftJoin('field_data_skyword_seo_title', 'skyword_seo_title', 'n.nid=skyword_seo_title.entity_id AND skyword_seo_title.bundle=:type', array(':type' => $this->sourceType));
    $query->addField('skyword_seo_title', 'skyword_seo_title_value');

    // Syndication field value.
    $query->leftJoin('field_data_field_syndication', 'field_syndication', 'n.nid=field_syndication.entity_id AND field_syndication.bundle=:type', array(':type' => $this->sourceType));
    $query->addField('field_syndication', 'field_syndication_value');

    // Author Field value.
    $query->leftJoin('field_data_field_fwx_author', 'fwx_author', 'n.nid=fwx_author.entity_id AND fwx_author.bundle=:type', array(':type' => $this->sourceType));
    $query->addField('fwx_author', 'field_fwx_author_target_id');

    // Fetching field_header_video field value.
    $query->leftJoin('field_data_field_header_video', 'field_header_video', 'n.nid=field_header_video.entity_id AND field_header_video.bundle=:type', array(':type' => $this->sourceType));
    $query->addField('field_header_video', 'field_header_video_video_url');

    // Fetching Category field value.
    $query->leftJoin('field_data_field_category', 'field_category', 'n.nid=field_category.entity_id AND field_category.bundle=:type', array(':type' => $this->sourceType));
    $query->addField('field_category', 'field_category_tid');

    // Fetching Tags field value.
    $query->leftJoin('field_data_field_tags', 'field_tags', 'n.nid=field_tags.entity_id AND field_tags.bundle=:type', array(':type' => $this->sourceType));
    $query->addField('field_tags', 'field_tags_tid');

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

    // Saving legacy url.
    $path = $this->version->getPath('node/' . $current_row->nid);
    if ($path) {
      $current_row->oldpath = $path;
    }

    // Storing FWx nid value in Food&Wine.
    if (!empty($current_row->nid)) {
      $current_row->fwx_nid = 'FWx:' . $current_row->nid;
    }

    // Mapping the video field.
    $video_url = $current_row->field_header_video_video_url;
    if (!empty($video_url)) {
      // If video url is brightcove.
      if (strpos($video_url, 'brightcove')) {
        $brightcove_parameters = ti_amg_fw_migrate_fwxcontent_get_brightcove_parameters($video_url);
        // If Already video node exists in F&W, then getting that nid.
        $video_nid = ti_amg_fw_migrate_fwxcontent_verify_video_exists($brightcove_parameters['player']);
        // If not, creating a video node.
        if (empty($video_nid)) {
          $video_nid = ti_amg_fw_migrate_fwxcontent_create_video_node($brightcove_parameters['player'], $current_row);
          // If the video is not available in F&W brightcove account.
          if (empty($video_nid)) {
            // return FALSE;
          }
        }
        if (!empty($video_nid)) {
          $current_row->hero_video = $video_nid;
        }
      }
    }

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

    $legacy_tags = $current_row->field_tags;
    if (!empty($legacy_tags)) {
      $vid = ti_amg_fw_migrate_fwxcontent_get_vocabulary_id('topic');
      $legacy_term_names = array();
      $fw_topic_term_array = array();
      foreach ($legacy_tags as $tag) {
        $legacy_term_names[] = ti_amg_fw_migrate_fwxcontent_legacy_termname_from_tid($tag);
      }
      foreach ($legacy_term_names as $legacy_term_name) {
        if (!empty($legacy_term_name)) {
          // Check if the term is already available, If so attach it.
          $query_term = db_select('taxonomy_term_data', 'ttd');
          $query_term->fields('ttd', array('tid', 'name'));
          $query_term->condition('ttd.name', $legacy_term_name, '=');
          $query_term->condition('ttd.vid', $vid, '=');
          $result_term = $query_term->execute();
          $existing_term_data = $result_term->fetchAssoc();
          if (!empty($existing_term_data)) {
            $term_tid = $existing_term_data['tid'];
            $fw_topic_term_array[] = $term_tid;
          }
          else {
            // Create the term if it is not available.
            $term = new stdClass();
            $term->name = $legacy_term_name;
            $term->vid = $vid;
            taxonomy_term_save($term);
            $fw_topic_term_array[] = $term->tid;
          }
        }
      }
      $current_row->topic_list = $fw_topic_term_array;
    }

    return TRUE;
  }

  /**
   * Prepare.
   */
  public function prepare($node, stdClass $row) {
    // Author is not migrated to F&W.
    // It means already author name is existed in Food&Wine.
    if (empty($node->field_author) && !empty($row->field_fwx_author)) {
      $legacy_author_nid = $row->field_fwx_author[0];
      // Pulling author nid in F&W.
      $current_author_nid = ti_amg_fw_migrate_fwxcontent_get_existed_author_nid($legacy_author_nid);
      $node->field_author[LANGUAGE_NONE][0]['target_id'] = $current_author_nid;
    }

    $video_url = $row->field_header_video_video_url;
    if (!empty($video_url)) {
    // If video url is youtube.
      if (strpos($video_url, 'youtube') || strpos($video_url, 'youtu.be')) {
        $type = 'youtube';
      }
      elseif (strpos($video_url, 'vimeo')) {
        // If video url is vimeo.
        $type = 'vimeo';
      }
      if (!empty($type)) {
        // Creating a file with respecive video type and making Oembed tag.
        $url = $type . "://" . urlencode($video_url);
        $file = file_save(ti_amg_fw_migrate_fwxcontent_create_embed_file($url, $video_url));
        $drupal_embed_entity = '<drupal-entity data-embed-button="ti_media_oembed" data-entity-id="' . $file->fid . '" data-entity-label="Ti Media Oembed" data-entity-type="file" data-entity-uuid="" data-view-mode="oembed_display"></drupal-entity>';
        $node->field_blog_video[LANGUAGE_NONE][0]['value'] = $drupal_embed_entity;
      }
    }

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

}
