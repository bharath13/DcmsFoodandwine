<?php

/**
 * @file
 * Article Migration for Foodandwine.
 */
class ArticleMigration extends BaseMigration {

  /**
   * Implements __construct().
   */
  public function __construct() {
    parent::__construct();

    $this->description = t('Migrate Foodandwine Articles');

    // Set up the source
    $items_url = $this->getSourceRepo() . 'articles.json';
    $item_ID = '_id';

    $fields = array(
      'title' => t('Article Title'),
      'dek' => t('Deck'),
      'body' => t('Body'),
      'label' => t('Legacy ID'),
      'remove_from_search' => t('Remove from Search'),
      'featured_in_toc' => t('Featured in TOC'),
      'published' => t('Publish Status'),
      'meta_keywords' => t('Meta Tag Keywords'),
      'meta_description' => t('Meta Tag Description'),
      'image_nids' => t('Image Nodes'),
      'column_tid' => t('Article Column TID'),
      'issue_tid' => t('Article Issue TID'),
      'related_articles_label' => t('Label of related articles'),
      'author_nids' => t('Author Node Ids'),
      'credit_line' => t('Image Credit'),
      'caption' => t('Image Caption'),
      'alt' => t('Image Alt'),
      'recipes_nids' => t('Recipes Node Ids'),
    );

    $this->source = new MigrateSourceJSON($items_url, $item_ID, $fields);

    // Set up the destination node
    $this->destination = new MigrateDestinationNode('article');

    // Set up the relationship map between source rows and destination objects.
    $this->map = new MigrateSQLMap($this->machineName, array(
        'label' => array('type' => 'varchar',
          'length' => 255,
          'not null' => TRUE,
          'description' => 'Article Label',
        ),
      ), MigrateDestinationNode::getKeySchema()
    );

    // Set up the fields mappings TO destination fields FROM source fields.
    $this->addFieldMapping('title', 'title');
    $this->addFieldMapping('field_deck', 'dek')->arguments(array('format' => 'full_html'));
    $this->addFieldMapping('body', 'body')->arguments(array('format' => 'full_html'));
    $this->addFieldMapping('field_not_searchable', 'remove_from_search');
    $this->addFieldMapping('field_featured_in_toc', 'featured_in_toc');
    $this->addFieldMapping('field_images', 'image_nids')->arguments(array('source_type' => 'nid'));
    $this->addFieldMapping('field_overwrite_image_alt_text', 'alt');
    $this->addFieldMapping('field_overwrite_image_caption', 'caption')->arguments(array('format' => 'full_html'));
    $this->addFieldMapping('field_overwrite_image_credit', 'credit_line')->arguments(array('format' => 'full_html'));
    $this->addFieldMapping('field_column', 'column_tid')->arguments(array('source_type' => 'tid'));
    $this->addFieldMapping('field_issue', 'issue_tid')->arguments(array('source_type' => 'tid'));
    $this->addFieldMapping('field_author', 'author_nids')->arguments(array('source_type' => 'nid'));
    $this->addFieldMapping('status', 'published');
    $this->addFieldMapping('metatag_keywords', 'meta_keywords');
    $this->addFieldMapping('metatag_description', 'meta_description');
    $this->addFieldMapping('field_legacy_id', 'label');
    $this->addFieldMapping('published_at', 'publish_at');
    $this->addFieldMapping('path', 'label');
    $this->addFieldMapping('field_related_content', 'related_articles_label')->sourceMigration(array('Article'));
    $this->addFieldMapping('field_simple_theme', 'themes')->arguments(array('source_type' => 'tid'));
    $this->addFieldMapping('field_related_recipes', 'recipes_nids')->arguments(array('source_type' => 'nid'));
  }

  /**
   * Implements prepareRow().
   */
  public function prepareRow($row) {
    $row->remove_from_search = ($row->remove_from_search) ? 1 : 0;
    $row->featured_in_toc = ($row->featured_in_toc) ? 1 : 0;
    $row->publish_at = $this->fw_convert_date_to_timestamp($row->publish_at);
    if (is_object($row->dek)) {
      $row->dek = NULL;
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

    // Get Authors NID's
    $author_labels = array();
    if (count($row->authors) > 0) {
      foreach ($row->authors as $author) {
        $author_labels[] = $author->label;
      }
      if (count($author_labels) > 0) {
        $row->author_nids = $this->getNidsFromLabel('person', 'field_legacy_id',
          $author_labels
        );
      }
    }
    if ($row->issue && $row->issue->label) {
      $row->issue_tid = $this->getTidFromLabel('issue', 'field_taxo_issue_label',
        array($row->issue->label)
      );
    }
    if ($row->column && $row->column->label) {
      $row->column_tid = $this->getTidFromLabel('category', 'field_taxo_category_label',
        array($row->column->label)
      );
    }
    $articles_label = array();
    foreach ($row->related_articles as $article) {
      $articles_label[] = $article->label;
    }
    if (count($articles_label) > 0) {
      $row->related_articles_label = $articles_label;
    }
    else {
      $row->related_articles_label = NULL;
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



    // Get Recipes NID's
    $recipes_labels = array();
    if (count($row->related_recipes) > 0) {
      foreach ($row->related_recipes as $recipes) {
        //$recipes_labels[] = $recipes->label;
        if ($recipes->label != '') {
          $r_nid = $this->getRecipeNidFromLabel('recipe', 'field_legacy_id',
            $recipes->label
          );
          if ($r_nid != NULL) {
            $recipes_labels[] = $r_nid;
          }
        }
      }
      if (count($recipes_labels) > 0) {
        $row->recipes_nids = $recipes_labels;
      }
    }

    return TRUE;
  }

  /**
   * Used for pre saving the related article which is used for relationship mapping
   * Implements createStub().
   *
   * @param Object $migration Object that contains current migration data
   * @param Array $source_id Source ID (label) of the Article
   *
   * @return Array/Boolean
   */
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

  /**
   * Implements prepare().
   */
  public function prepare($node, stdClass$row) {
    $node->title = decode_entities($node->title);
    $node->path['pathauto'] = 0;
    $node->path['alias'] = "articles" . "/" . $row->label;
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

