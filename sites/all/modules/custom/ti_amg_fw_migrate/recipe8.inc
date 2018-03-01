<?php

/**
 * @file
 * Recipe Migration for Foodandwine.
 */
class Recipe8Migration extends BaseMigration {

  /**
   * Implements __construct().
   */
  public function __construct() {
    parent::__construct();

    $this->description = t('Migrate Foodandwine Recipes');

    // Set up the source
    $items_url = $this->getSourceRepo() . 'recipes8.json';
    $item_ID = '_id';

    $fields = array(
      'title' => t('Recipe Title'),
      'dek' => t('Deck'),
      'body' => t('Body'),
      'label' => t('Legacy ID'),
      'tested_and_perfected' => t('Tap Badge'),
      'meta_description' => t('Meta Tag Description'),
      'chefs_label' => t('Chef Label'),
      'sources_label' => t('Sources Label'),
      'pairing_notes' => t('Pairing Notes'),
      'images' => t('Recipe Images'),
      'issue_date' => t('Issue'),
      'make_ahead' => t('Make Ahead'),
      'serve_with' => t('Serve With'),
      'pairing_notes' => t('Pairing Notes'),
      'directions' => t('Directions'),
      'servings' => t('Servings'),
      'notes' => t('Notes'),
      'rights' => t('ETS Rights'),
      'rights_notes' => t('ETS Rights Notes'),
      'credit' => t('Image Credit'),
      'caption' => t('Image Caption'),
      'alt' => t('Image Alt'),
      'publish_status' => t('Publish Status'),
      'related_contents' => t('Related Contents'),
      'flavor_profiles' => t('Flavors Profile'),
    );

    $this->source = new MigrateSourceJSON($items_url, $item_ID, $fields);

    // Set up the destination node
    $this->destination = new MigrateDestinationNode('recipe');

    // Set up the relationship map between source rows and destination objects.
    $this->map = new MigrateSQLMap($this->machineName, array(
        '_id' => array('type' => 'varchar',
          'length' => 255,
          'not null' => TRUE,
          'description' => 'Recipe ID',
        ),
      ), MigrateDestinationNode::getKeySchema()
    );

    // Set up the fields mappings TO destination fields FROM source fields.
    $this->addFieldMapping('title', 'title');
    $this->addFieldMapping('field_headline', 'title');
    $this->addFieldMapping('field_legacy_id', 'label');
    $this->addFieldMapping('field_deck', 'dek')->arguments(array('format' => 'full_html'));
    $this->addFieldMapping('status', 'publish_status');
    $this->addFieldMapping('metatag_keywords', 'meta_keywords');
    $this->addFieldMapping('metatag_description', 'meta_description');
    $this->addFieldMapping('changed', 'updated_at');
    $this->addFieldMapping('published_at', 'updated_at');
    $this->addFieldMapping('created', 'created_at');
    $this->addFieldMapping('field_issue', 'issue_date')->arguments(array('source_type' => 'tid'));
    $this->addFieldMapping('field_chefs_author', 'chefs')->arguments(array('source_type' => 'nid'));
    $this->addFieldMapping('field_people_author', 'people_author')->arguments(array('source_type' => 'nid'));
    $this->addFieldMapping('field_source_author', 'sources')->arguments(array('source_type' => 'nid'));
    $this->addFieldMapping('field_tap_badge', 'tested_and_perfected');
    $this->addFieldMapping('field_make_ahead', 'make_ahead');
    $this->addFieldMapping('field_serve_with', 'serve_with')->arguments(array('format' => 'mini_text_format'));
    $this->addFieldMapping('field_pairing_notes', 'pairing_notes');
    $this->addFieldMapping('field_images', 'image_nids')->arguments(array('source_type' => 'nid'));
    $this->addFieldMapping('field_overwrite_image_alt_text', 'alt');
    $this->addFieldMapping('field_overwrite_image_caption', 'caption')->arguments(array('format' => 'full_html'));
    $this->addFieldMapping('field_overwrite_image_credit', 'credit')->arguments(array('format' => 'full_html'));
    $this->addFieldMapping('field_ingredient_category', 'categories')->arguments(array('source_type' => 'tid'));
    $this->addFieldMapping('field_exclusions', 'exclusions')->arguments(array('source_type' => 'tid'));
    $this->addFieldMapping('field_complex_theme', 'themes')->arguments(array('source_type' => 'tid'));
    $this->addFieldMapping('field_ets_rights', 'rights')->arguments(array('source_type' => 'tid'));
    $this->addFieldMapping('field_ets_rights_notes', 'rights_notes')->arguments(array('source_type' => 'tid'));
    $this->addFieldMapping('field_serve_notes', 'notes')->arguments(array('format' => 'mini_text_format'));
    $this->addFieldMapping('field_yield', 'servings');
    $this->addFieldMapping('field_related_links', 'related_contents');
    $this->addFieldMapping('field_image_rights', 'recipe_image_rights')->arguments(array('source_type' => 'tid'));
    $this->addFieldMapping('field_flavors', 'flavor_profiles')->arguments(array('source_type' => 'tid'));
    //$this->addFieldMapping('path', 'url');
  }

  /**
   * Implements prepareRow().
   */
  public function prepareRow($current_row) {

    // Prepare publish variable
    $current_row->publish_status = 0;
    if ($current_row->is_published) {
      $current_row->publish_status = 1;
    }

    $current_row->created = $this->fw_convert_date_to_timestamp($current_row->created_at);
    if (isset($current_row->updated_at) &&
      (strtotime("now") >= strtotime($current_row->updated_at))
    ) {
      $current_row->updated_at = $this->fw_convert_date_to_timestamp($current_row->updated_at);
    }

    if (is_object($current_row->dek)) {
      $current_row->dek = NULL;
    }

    $current_row->tested_and_perfected = ($current_row->tested_and_perfected) ? 1 : 0;

    // To Set the Servings
    $current_row->servings = ($current_row->servings) ? $current_row->servings : NULL;

    // To Set the issue Date
    if (isset($current_row->issue->label) && !empty($current_row->issue->label)) {
      $issue_month = $current_row->issue->label;
      if ($issue_month && !empty($issue_month)) {
        $issue_month_year = drupal_strtolower($issue_month);
        $current_row->issue_date = $this->getTidFromLabel('issue',
          'field_taxo_issue_label', array($issue_month_year)
        );
      }
      else {
        $current_row->issue_date = NULL;
      }
    }
    else {
      $current_row->issue_date = NULL;
    }
    // Get Chef's NID's
    //$chef_labels = array();
    if (count($current_row->chefs) > 0) {
      foreach ($current_row->chefs as $chef) {
        $chef_labels[] = $chef->label;
      }
      if (count($chef_labels) > 0) {
        $current_row->chefs = $this->getNidsFromLabel('person', 'field_legacy_id', $chef_labels);
        $current_row->people_author = $current_row->chefs;
      }
      else {
        $current_row->chefs = NULL;
      }
    }
    else {
      $current_row->chefs = NULL;
    }
    // Get Source's NID's
    $source_labels = array();
    if (count($current_row->sources) > 0) {
      foreach ($current_row->sources as $source) {
        $source_labels[] = $source->label;
      }
      if (count($source_labels) > 0) {
        $current_row->sources = $this->getNidsFromLabel('person', 'field_legacy_id', $source_labels);
      }
      else {
        $current_row->sources = NULL;
      }
    }
    else {
      $current_row->sources = NULL;
    }
    // Get Category TID's
    $category_labels = array();
    if (isset($current_row->recipe_attributes) && count($current_row->recipe_attributes) > 0) {
      foreach ($current_row->recipe_attributes as $categories) {
        $category_labels[] = $categories->name;
      }
      if (count($category_labels) > 0) {
        $current_row->categories = $this->getTidFromLabel('ingredient_category', 'field_taxo_ingr_category_label',
          $category_labels
        );
      }
      else {
        $current_row->categories = NULL;
      }
    }
    else {
      $current_row->categories = NULL;
    }
    // Get ETS Rights TID's
    $rights_labels = array();
    if (isset($current_row->rights) && !empty($current_row->rights)) {
      // Check if the rights has any other added words
      $explode_rights_array = explode(',', $current_row->rights, 2);
      if (isset($explode_rights_array[0]) && !empty($explode_rights_array[0])) {
        $rights_labels[] = $explode_rights_array[0];
        $current_row->rights = $this->getTidFromLabel('ets_rights', 'field_taxo_ets_rights_label',
          $rights_labels
        );
      }
      else {
        $current_row->rights = NULL;
      }

      if (isset($explode_rights_array[1]) && !empty($explode_rights_array[1])) {
        $current_row->rights_notes = trim($explode_rights_array[1]);
      }
      else {
        $current_row->rights_notes = NULL;
      }
    }
    else {
      $current_row->rights = NULL;
      $current_row->rights_notes = NULL;
    }
    //Get Exclusions TID's
    $exclusion_labels = array();
    if (isset($current_row->recipe_attributes) && count($current_row->recipe_attributes) > 0) {
      foreach ($current_row->recipe_attributes as $exclusions) {
        $exclusion_labels[] = $exclusions->name;
      }
      if (count($exclusion_labels) > 0) {
        $current_row->exclusions = $this->getTidFromLabel('ingredient_exclusions', 'field_taxo_ingr_exclusions_label',
          $exclusion_labels
        );
      }
      else {
        $current_row->exclusions = NULL;
      }
    }
    else {
      $current_row->exclusions = NULL;
    }
    // Get Theme TID's
    $theme_labels = array();
    if (isset($current_row->themes) && count($current_row->themes) > 0) {
      foreach ($current_row->themes as $theme) {
        $theme_labels[] = $theme->label;
      }
      if (count($theme_labels) > 0) {
        $current_row->themes = $this->getTidFromLabel('complex_themes', 'field_complex_theme_label',
          $theme_labels
        );
      }
      else {
        $current_row->themes = NULL;
      }
    }
    else {
      $current_row->themes = NULL;
    }
    //Get Image nids
    $image_nids = array();
    $image_rights_nids = array();
    if (count($current_row->images) > 0) {
      foreach ($current_row->images as $image) {
        if ($image->filename != ''
          && strrpos($image->filename, 'recipe-placeholder.gif') <= 0
        ) {
          $current_row->alt = $image->alt;
          $current_row->caption = $image->caption;
          $current_row->credit = $image->credit;
          $image_name = $this->get_main_image_url($image->filename);
          $image_uri = 'public://' . $image_name;
          if (!file_exists($image_uri)) {
            $image_split = explode('/', $image->filename);
            $image_title = end($image_split);
            $node_type = "image";
            $image_nid = db_query('SELECT nid FROM {node} WHERE title = :title ' . 'AND type=:type', array(':title' => $image_title, ':type' => $node_type)
            )->fetchField();
          }
          else {
            $image_uri = 'public://' . $image_name;
            $query = db_select('file_managed', 'file')->condition('uri', $image_uri, '=')->fields('field_image', array('entity_id'));
            $query->join('field_data_field_image', 'field_image',
              'file.fid = field_image.field_image_fid'
            );
            $image_nid = $query->execute()->fetchfield();
          }
          if ($image_nid) {
            $image_nids[] = $image_nid;
          }
        }
        if ($image->rights && $image->rights != '') {
          $image_rights_recipe_labels[] = str_replace(' ', '', drupal_strtolower($image->rights));
          $image_rights_nids = $this->getTidFromLabel('image_rights',
            'field_taxo_image_rights_label', $image_rights_recipe_labels
          );
        }
      }
      if (count($image_nids) > 0) {
        $current_row->image_nids = $image_nids;
      }
      else {
        $current_row->image_nids = NULL;
      }
      if (count($image_rights_nids) > 0) {
        $current_row->recipe_image_rights = $image_rights_nids;
      }
      else {
        $current_row->recipe_image_rights = NULL;
      }
    }

    // Get Flavors TID's
    $flavors_labels = array();
    if (isset($current_row->flavor_profiles)
      && count($current_row->flavor_profiles) > 0
    ) {
      foreach ($current_row->flavor_profiles as $flavor) {
        $flavors_labels[] = $flavor->flavor;
      }
      if (count($flavors_labels) > 0) {
        $current_row->flavor_profiles = $this->getTidFromLabel('flavors', 'field_taxo_flavors_label',
          $flavors_labels
        );
      }
      else {
        $current_row->flavor_profiles = NULL;
      }
    }
    else {
      $current_row->flavor_profiles = NULL;
    }

    return TRUE;
  }

  /**
   * Implements prepare().
   */
  public function prepare($node, stdClass$row) {
    $node->title = decode_entities($node->title);
    $node->path['pathauto'] = 0;
    $node->path['alias'] = "recipes" . "/" . $row->label;
    //Assigning Related Links
    if (isset($row->related_contents) && count($row->related_contents) > 0) {
      if (is_array($row->related_contents)) {
        foreach ($row->related_contents as $key => $related_link) {
          $node->field_related_links['und'][$key]['title'] = $related_link->title;
          $node->field_related_links['und'][$key]['url'] = $related_link->path;
        }
      }
      else {
        return FALSE;
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
    $node_language = $node->language;

    // Delete the existing field_ingredients entries
    if (!empty($row->migrate_map_destid1)
      && count($node->field_ingredients[$node_language]) > 0
    ) {
      $field_collection_item_values = array();
      foreach ($node->field_ingredients[$node_language] as $key => $value) {
        // Build array of field collection values.
        $field_collection_item_values[] = $value['value'];
        // Unset them.
        unset($node->field_ingredients[$node_language][$key]);
      }
      // Delete field collection items.
      entity_delete_multiple('field_collection_item', $field_collection_item_values);
    }

    // Delete the existing field_directions entries
    if (!empty($row->migrate_map_destid1)
      && count($node->field_directions[$node_language]) > 0
    ) {
      $field_collection_item_values = array();
      foreach ($node->field_directions[$node_language] as $key => $value) {
        // Build array of field collection values.
        $field_collection_item_values[] = $value['value'];
        // Unset them.
        unset($node->field_directions[$node_language][$key]);
      }
      // Delete field collection items.
      entity_delete_multiple('field_collection_item', $field_collection_item_values);
    }

    // Delete the existing field_active_time entries
    if (!empty($row->migrate_map_destid1)
      && count($node->field_recipe_time[$node_language]) > 0
    ) {
      $field_collection_item_values = array();
      foreach ($node->field_recipe_time[$node_language] as $key => $value) {
        // Build array of field collection values.
        $field_collection_item_values[] = $value['value'];
        // Unset them.
        unset($node->field_recipe_time[$node_language][$key]);
      }
      // Delete field collection items.
      entity_delete_multiple('field_collection_item', $field_collection_item_values);
    }

    // Delete the existing field_active_time entries
    if (!empty($row->migrate_map_destid1)
      && count($node->field_active_time[$node_language]) > 0
    ) {
      $field_collection_item_values = array();
      foreach ($node->field_active_time[$node_language] as $key => $value) {
        // Build array of field collection values.
        $field_collection_item_values[] = $value['value'];
        // Unset them.
        unset($node->field_active_time[$node_language][$key]);
      }
      // Delete field collection items.
      entity_delete_multiple('field_collection_item', $field_collection_item_values);
    }

    // Save the node after all delete operations
    node_save($node);


    // Fetch the Ingredients as array
    $ingredients_list = $row->ingredient_lists;
    if (isset($row->ingredient_lists) && count($ingredients_list) > 0) {
      foreach ($ingredients_list as $ingredient_list) {
        $ingredient_list_title = $ingredient_list->title;
        $ingredients_arr = array();
        $ingredients_arr = $ingredient_list->ingredients;
        // Iterate through each Ingredient and add it to field collection
        foreach ($ingredients_arr as $ingredient) {
          // Ingredient Field Collection
          $display_text = $ingredient->display_text;
          $ingredient_name = strip_tags($ingredient->ingredient_desc);
          $quantity = $ingredient->quantity;
          $whole_number = $ingredient->whole_number;
          $fraction_number = $ingredient->fraction;
          $unit = $ingredient->unit;
          $measurement_notes = $ingredient->measurement_notes;
          $preparation_notes = $ingredient->prep_notes;
          $primary_ingredient_text = $ingredient->ingredient;
          $primary_ingredient = $ingredient->primary_ingredient;
          $main_ingredient = $ingredient->main_ingredient;
          $field_collection_item = entity_create('field_collection_item',
            array('field_name' => 'field_ingredients')
          );
          // Set the List Title
          $field_collection_item->field_ingredient_list_title[$node_language][0]['value'] = $ingredient_list_title;
          // Load items into field collection
          $field_collection_item->field_ingredient_name[$node_language][0]['value'] = $ingredient_name;
          $field_collection_item->field_ingredient_display_text[$node_language][0]['value'] = $display_text;
          $field_collection_item->field_ingredient_display_text[$node_language][0]['format'] = 'mini_text_format';
          $field_collection_item->field_ingredient_quantity[$node_language][0]['value'] = $quantity;
          $field_collection_item->field_ingredient_whole[$node_language][0]['value'] = $whole_number;
          $field_collection_item->field_ingredient_mea_notes[$node_language][0]['value'] = $measurement_notes;
          $field_collection_item->field_prep_notes[$node_language][0]['value'] = $preparation_notes;
          $field_collection_item->field_ingredient_is_primary[$node_language][0]['value'] = ($primary_ingredient) ? 1 : 0;
          $field_collection_item->field_ingredient_is_main[$node_language][0]['value'] = ($main_ingredient) ? 1 : 0;
          // To Get the Primary Ingredient TID
          if (!empty($primary_ingredient_text)) {
            $arr_primary_ids = $this->getTidFromName('primary_ingredient', 'name',
              $primary_ingredient_text
            );
            if (count($arr_primary_ids) > 0) {
              $arr_primary_ids = array($arr_primary_ids[0]);
              $field_collection_item->field_ingredient_primary[$node_language][0]['tid'] = $arr_primary_ids;
            }
            else {
              $field_collection_item->field_ingredient_primary[$node_language][0]['tid'] = NULL;
            }
          }
          else {
            $field_collection_item->field_ingredient_primary[$node_language][0]['tid'] = NULL;
          }
          if ($fraction_number && !empty($fraction_number)) {
            $field_collection_item->field_ingredient_fraction[$node_language][0]['tid'] = $this->getTidFromLabel('ingredient_fraction',
              'field_taxo_ingr_fraction_label', array($fraction_number)
            );
          }
          else {
            $field_collection_item->field_ingredient_fraction[$node_language][0]['tid'] = NULL;
          }
          if ($unit && !empty($unit)) {
            $field_collection_item->field_ingredient_unit[$node_language][0]['tid'] = $this->getTidFromLabel('ingredient_unit',
              'field_taxo_ingr_unit_label', array($unit)
            );
          }
          else {
            $field_collection_item->field_ingredient_unit[$node_language][0]['tid'] = NULL;
          }
          // Save field collection item
          $field_collection_item->setHostEntity('node', $node);
          $field_collection_item->save(TRUE);
          // Save the Node
          //node_save($node);
        }
      }
    }

    // Fetch the Directions Array
    $directions_arr = array();
    $directions_arr = $row->directions;
    if (isset($row->directions) && count($directions_arr) > 0) {
      foreach ($directions_arr as $direction) {
        $direction_list_title = '';
        $direction_list_title = $direction->title;
        $direction_step = '';
        $direction_step = $direction->step;
        // Generate the Field Collection Dynamically for the Directions
        $direction_field_collection_item = entity_create('field_collection_item', array('field_name' => 'field_directions'));
        // Set the List Title
        $direction_field_collection_item->field_direction_list_title[$node_language][0]['value'] = $direction_list_title;
        $direction_field_collection_item->field_direction_steps[$node_language][0]['value'] = $direction_step;
        // Save field collection item
        $direction_field_collection_item->setHostEntity('node', $node);
        $direction_field_collection_item->save(TRUE);

        // Save the Node
        //node_save($node);
      }
    }

    // Set the time_total, time_active and time_other
    if (isset($row->time_active) && $row->time_active != '') {
      $time_active = $this->convertToHoursMins($row->time_active);
      // Generate the Field Collection for the active time
      $time_active_field_collection_item = entity_create('field_collection_item',
        array('field_name' => 'field_active_time')
      );
      $time_active_field_collection_item->field_active_time_hour[$node_language][0]['value'] = $time_active[0];
      $time_active_field_collection_item->field_active_time_minute[$node_language][0]['value'] = $time_active[1];
      // Save field collection item
      $time_active_field_collection_item->setHostEntity('node', $node);
      $time_active_field_collection_item->save(TRUE);
      //node_save($node);
    }

    // Set the time_total, time_active and time_other
    if (isset($row->time_total) && $row->time_total != '') {
      $time_total = $this->convertToHoursMins($row->time_total);
      // Generate the Field Collection for the active time
      $time_total_field_collection_item = entity_create('field_collection_item',
        array('field_name' => 'field_recipe_time')
      );
      $time_total_field_collection_item->field_recipe_time_hour[$node_language][0]['value'] = $time_total[0];
      $time_total_field_collection_item->field_recipe_time_minute[$node_language][0]['value'] = $time_total[1];
      $time_total_field_collection_item->field_time_other[$node_language][0]['value'] = $row->time_other;
      // Save field collection item
      $time_total_field_collection_item->setHostEntity('node', $node);
      $time_total_field_collection_item->save(TRUE);
      //node_save($node);
    }

    // To merge the camera text with the deck body
    $camera_text = $row->camera;
    $deck_text = $row->dek;

    if (!empty($camera_text)) {
      if (stripos("<p>", $camera_text) > 0) {
        $node->field_deck['und'][0]['value'] = $deck_text . $camera_text;
      }
      else {
        $node->field_deck['und'][0]['value'] = $deck_text . '<p>' . $camera_text . '</p>';
      }
    }
    else {
      $node->field_deck['und'][0]['value'] = $deck_text;
    }

    $node->field_deck['und'][0]['value'] = preg_replace_callback("/(<img[^>]*src *= *[\"']?)([^\"']*)/i", array($this, 'getURL'), $node->field_deck['und'][0]['value']);
    $node->field_deck['und'][0]['value'] = preg_replace_callback('~\bbackground(-image)?\s*:(.*?)\(\s*(\'|")?(?<image>.*?)\3?\s*\)~i', array($this, 'getcssURL'), $node->field_deck['und'][0]['value']);
    node_save($node);
    return TRUE;
  }
}

