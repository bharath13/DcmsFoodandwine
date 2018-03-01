<?php

/**
 * @file
 * Taxonomy Migration for Foodandwine.
 */

/**
 * Article Column Taxonomy Migration
 */
class ArticleColumnMigration extends BaseMigration {

  /**
   * Implements __construct().
   */
  public function __construct() {
    parent::__construct();

    $this->description = t('Migrate Foodandwine Article Column Taxonomy');

    // Set up the source
    $items_url = drupal_get_path('module', 'ti_amg_fw_migrate') . '/json/' . 'columns.json';
    //$items_url = $this->getSourceRepo() . 'columns.json';
    $item_ID = 'label';

    $fields = array(
      'name' => t('Column Name'),
      'label' => t('Column Label'),
    );

    $this->source = new MigrateSourceJSON($items_url, $item_ID, $fields);

    // Set up the destination node
    $this->destination = new MigrateDestinationTerm('category');

    // Set up the relationship map between source rows and destination objects.
    $this->map = new MigrateSQLMap($this->machineName, array(
        'label' => array('type' => 'varchar',
          'length' => 255,
          'not null' => TRUE,
          'description' => 'Column Label',
        ),
      ), MigrateDestinationTerm::getKeySchema()
    );

    // Set up the fields mappings TO destination fields FROM source fields.
    $this->addFieldMapping('name', 'name');
    $this->addFieldMapping('field_taxo_category_label', 'label');
  }
}

/**
 * Theme (tags) Taxonomy Migration
 */
class ThemeMigration extends BaseMigration {

  /**
   * Implements __construct().
   */
  public function __construct() {
    parent::__construct();

    $this->description = t('Migrate Foodandwine Theme Taxonomy');

    // Set up the source
    //$items_url = $this->getSourceRepo() . 'blog_tags.json';
    $items_url = drupal_get_path('module', 'ti_amg_fw_migrate') . '/json/' . 'blog_tags.json';
    $item_ID = 'label';

    $fields = array(
      'name' => t('Theme Name'),
      'label' => t('Theme Label'),
    );

    $this->source = new MigrateSourceJSON($items_url, $item_ID, $fields);

    // Set up the destination node
    $this->destination = new MigrateDestinationTerm('tags');

    // Set up the relationship map between source rows and destination objects.
    $this->map = new MigrateSQLMap($this->machineName, array(
        'label' => array('type' => 'varchar',
          'length' => 255,
          'not null' => TRUE,
          'description' => 'Theme Label',
        ),
      ), MigrateDestinationTerm::getKeySchema()
    );

    // Set up the fields mappings TO destination fields FROM source fields.
    $this->addFieldMapping('name', 'name');
    $this->addFieldMapping('field_taxo_tags_label', 'label');
  }
}

/**
 * Issue Taxonomy Migration
 */
class IssueMigration extends BaseMigration {
  /**
   * Implements __construct().
   */
  public function __construct() {
    parent::__construct();
    $this->description = t('Migrate Foodandwine Issue Taxonomy');
    // Set up the source
    $items_url = $this->getSourceRepo() . 'issues.json';
    $item_ID = 'label';
    $fields = array(
      'name' => t('Issue Name'),
      'label' => t('Issue Label'),
    );
    $this->source = new MigrateSourceJSON($items_url, $item_ID, $fields);
    // Set up the destination node
    $this->destination = new MigrateDestinationTerm('issue');
    // Set up the relationship map between source rows and destination objects.
    $this->map = new MigrateSQLMap($this->machineName, array(
        'label' => array('type' => 'varchar',
          'length' => 255,
          'not null' => TRUE,
          'description' => 'Issue Label',
        ),
      ), MigrateDestinationTerm::getKeySchema()
    );
    // Set up the fields mappings TO destination fields FROM source fields.
    $this->addFieldMapping('name', 'name');
    $this->addFieldMapping('field_taxo_issue_label', 'label');
  }
}

/**
 * Person Type Taxonomy Migration
 */
class PersonTypeMigration extends BaseMigration {
  /**
   * Implements __construct().
   */
  public function __construct() {
    parent::__construct();
    $this->description = t('Migrate Foodandwine Person Type Taxonomy');
    // Set up the source
    $items_url = $this->getSourceRepo() . 'person_types.json';
    $item_ID = 'label';
    $fields = array(
      'name' => t('Person Type Name'),
      'label' => t('Person Type Label'),
    );
    $this->source = new MigrateSourceJSON($items_url, $item_ID, $fields);
    // Set up the destination node
    $this->destination = new MigrateDestinationTerm('person_type');
    // Set up the relationship map between source rows and destination objects.
    $this->map = new MigrateSQLMap($this->machineName, array(
        'label' => array('type' => 'varchar',
          'length' => 255,
          'not null' => TRUE,
          'description' => 'Person Type Label',
        ),
      ), MigrateDestinationTerm::getKeySchema()
    );
    // Set up the fields mappings TO destination fields FROM source fields.
    $this->addFieldMapping('name', 'name');
    $this->addFieldMapping('field_taxo_person_type_label', 'label');
  }
}

/**
 * BNC Year Taxonomy Migration
 */
class BNCYearMigration extends BaseMigration {
  /**
   * Implements __construct().
   */
  public function __construct() {
    parent::__construct();
    $this->description = t('Migrate Foodandwine BNC Year Taxonomy');
    // Set up the source
    $items_url = $this->getSourceRepo() . 'best_new_chef_years.json';
    $item_ID = 'label';
    $fields = array(
      'label' => t('BNC Year Label'),
    );
    $this->source = new MigrateSourceJSON($items_url, $item_ID, $fields);
    // Set up the destination node
    $this->destination = new MigrateDestinationTerm('bnc_year');
    // Set up the relationship map between source rows and destination objects.
    $this->map = new MigrateSQLMap($this->machineName, array(
        'label' => array('type' => 'varchar',
          'length' => 255,
          'not null' => TRUE,
          'description' => 'BNC Year Label',
        ),
      ), MigrateDestinationTerm::getKeySchema()
    );
    // Set up the fields mappings TO destination fields FROM source fields.
    $this->addFieldMapping('name', 'label');
    $this->addFieldMapping('field_taxo_bnc_year_label', 'label');
  }
}

/**
 * Person Group Tags Taxonomy Migration
 */
class PersonGroupTagsMigration extends BaseMigration {
  /**
   * Implements __construct().
   */
  public function __construct() {
    parent::__construct();
    $this->description = t('Migrate Foodandwine Person Group Tags Taxonomy');
    // Set up the source
    $items_url = $this->getSourceRepo() . 'person_group_tags.json';
    $item_ID = 'label';
    $fields = array(
      'name' => t('Person Group Tag Name'),
      'label' => t('Person Group Tag Label'),
    );
    $this->source = new MigrateSourceJSON($items_url, $item_ID, $fields);
    // Set up the destination node
    $this->destination = new MigrateDestinationTerm('group_tags');
    // Set up the relationship map between source rows and destination objects.
    $this->map = new MigrateSQLMap($this->machineName, array(
        'label' => array('type' => 'varchar',
          'length' => 255,
          'not null' => TRUE,
          'description' => 'Person Group Tag Label',
        ),
      ), MigrateDestinationTerm::getKeySchema()
    );
    // Set up the fields mappings TO destination fields FROM source fields.
    $this->addFieldMapping('name', 'name');
    $this->addFieldMapping('field_taxo_group_tag_label', 'label');
  }
}

/**
 * Flavors Taxonomy Migration
 */
class FlavorsMigration extends BaseMigration {
  /**
   * Implements __construct().
   */
  public function __construct() {
    parent::__construct();
    $this->description = t('Migrate Foodandwine Flavors Taxonomy');
    // Set up the source
    $items_url = $this->getSourceRepo() . 'recipe_flavors.json';
    $item_ID = 'label';
    $fields = array(
      'label' => t('Flavors Label'),
    );
    $this->source = new MigrateSourceJSON($items_url, $item_ID, $fields);
    // Set up the destination node
    $this->destination = new MigrateDestinationTerm('flavors');
    // Set up the relationship map between source rows and destination objects.
    $this->map = new MigrateSQLMap($this->machineName, array(
        'label' => array('type' => 'varchar',
          'length' => 255,
          'not null' => TRUE,
          'description' => 'Flavors Label',
        ),
      ), MigrateDestinationTerm::getKeySchema()
    );
    // Set up the fields mappings TO destination fields FROM source fields.
    $this->addFieldMapping('name', 'label');
    $this->addFieldMapping('field_taxo_flavors_label', 'label');
  }
}

/**
 * ETS Rights Taxonomy Migration
 */
class ETSRightsMigration extends BaseMigration {
  /**
   * Implements __construct().
   */
  public function __construct() {
    parent::__construct();
    $this->description = t('Migrate Foodandwine ETS Rights Taxonomy');
    // Set up the source
    $items_url = $this->getSourceRepo() . 'recipe_rights.json';
    $item_ID = 'label';
    $fields = array(
      'label' => t('ETS Rights Label'),
    );
    $this->source = new MigrateSourceJSON($items_url, $item_ID, $fields);
    // Set up the destination node
    $this->destination = new MigrateDestinationTerm('ets_rights');
    // Set up the relationship map between source rows and destination objects.
    $this->map = new MigrateSQLMap($this->machineName, array(
        'label' => array('type' => 'varchar',
          'length' => 255,
          'not null' => TRUE,
          'description' => 'ETS Rights Label',
        ),
      ), MigrateDestinationTerm::getKeySchema()
    );
    // Set up the fields mappings TO destination fields FROM source fields.
    $this->addFieldMapping('name', 'label');
    $this->addFieldMapping('field_taxo_ets_rights_label', 'label');
  }
}

/**
 * Gallery Type Taxonomy Migration
 */
class GalleryTypeMigration extends BaseMigration {
  /**
   * Implements __construct().
   */
  public function __construct() {
    parent::__construct();
    $this->description = t('Migrate Foodandwine Gallery Type Taxonomy');
    // Set up the source
    $items_url = drupal_get_path('module', 'ti_amg_fw_migrate') . '/json/' . 'gallery_type.json';
    $item_ID = 'label';
    $fields = array(
      'name' => t('Gallery Type Name'),
      'label' => t('Gallery Type Label'),
    );
    $this->source = new MigrateSourceJSON($items_url, $item_ID, $fields);
    // Set up the destination node
    $this->destination = new MigrateDestinationTerm('gallery_type');
    // Set up the relationship map between source rows and destination objects.
    $this->map = new MigrateSQLMap($this->machineName, array(
        'label' => array('type' => 'varchar',
          'length' => 255,
          'not null' => TRUE,
          'description' => 'Gallery Type Label',
        ),
      ), MigrateDestinationTerm::getKeySchema()
    );
    // Set up the fields mappings TO destination fields FROM source fields.
    $this->addFieldMapping('name', 'name');
    $this->addFieldMapping('field_taxo_gallery_type_label', 'label');
  }
}

/**
 * Ingredient Unit Taxonomy Migration
 */
class IngredientUnitMigration extends BaseMigration {
  /**
   * Implements __construct().
   */
  public function __construct() {
    parent::__construct();
    $this->description = t('Migrate Foodandwine Ingredient Unit Taxonomy');
    // Set up the source
    $items_url = $this->getSourceRepo() . 'recipe_measurements.json';
    $item_ID = 'label';
    $fields = array(
      'unit' => t('Recipe Ingredient Unit'),
      'label' => t('Recipe Ingredient Label'),
    );
    $this->source = new MigrateSourceJSON($items_url, $item_ID, $fields);
    // Set up the destination node
    $this->destination = new MigrateDestinationTerm('ingredient_unit');
    // Set up the relationship map between source rows and destination objects.
    $this->map = new MigrateSQLMap($this->machineName, array(
        'label' => array('type' => 'varchar',
          'length' => 255,
          'not null' => TRUE,
          'description' => 'Ingredient Unit Label',
        ),
      ), MigrateDestinationTerm::getKeySchema()
    );
    // Set up the fields mappings TO destination fields FROM source fields.
    $this->addFieldMapping('name', 'unit');
    $this->addFieldMapping('field_taxo_ingr_unit_label', 'label');
  }
}

/**
 * Ingredient Category Taxonomy Migration
 */
class IngredientCategoryMigration extends BaseMigration {
  /**
   * Implements __construct().
   */
  public function __construct() {
    parent::__construct();
    $this->description = t('Migrate Foodandwine Ingredient Category Taxonomy');
    // Set up the source
    $items_url = $this->getSourceRepo() . 'recipe_categories.json';
    $item_ID = 'label';
    $fields = array(
      'label' => t('Recipe Ingredient Category Label'),
    );
    $this->source = new MigrateSourceJSON($items_url, $item_ID, $fields);
    // Set up the destination node
    $this->destination = new MigrateDestinationTerm('ingredient_category');
    // Set up the relationship map between source rows and destination objects.
    $this->map = new MigrateSQLMap($this->machineName, array(
        'label' => array('type' => 'varchar',
          'length' => 255,
          'not null' => TRUE,
          'description' => 'Ingredient Category Label',
        ),
      ), MigrateDestinationTerm::getKeySchema()
    );
    // Set up the fields mappings TO destination fields FROM source fields.
    $this->addFieldMapping('name', 'label');
    $this->addFieldMapping('field_taxo_ingr_category_label', 'label');
  }
}

/**
 * Ingredient Exclusions Taxonomy Migration
 */
class IngredientExclusionsMigration extends BaseMigration {
  /**
   * Implements __construct().
   */
  public function __construct() {
    parent::__construct();
    $this->description = t('Migrate Foodandwine Ingredient Exclusions Taxonomy');
    // Set up the source
    $items_url = $this->getSourceRepo() . 'recipe_exclusions.json';
    $item_ID = 'label';
    $fields = array(
      'label' => t('Recipe Ingredient Exclusions Label'),
    );
    $this->source = new MigrateSourceJSON($items_url, $item_ID, $fields);
    // Set up the destination node
    $this->destination = new MigrateDestinationTerm('ingredient_exclusions');
    // Set up the relationship map between source rows and destination objects.
    $this->map = new MigrateSQLMap($this->machineName, array(
        'label' => array('type' => 'varchar',
          'length' => 255,
          'not null' => TRUE,
          'description' => 'Ingredient Exclusions Label',
        ),
      ), MigrateDestinationTerm::getKeySchema()
    );
    // Set up the fields mappings TO destination fields FROM source fields.
    $this->addFieldMapping('name', 'label');
    $this->addFieldMapping('field_taxo_ingr_exclusions_label', 'label');
  }
}

/**
 * Ingredient Exclusions Taxonomy Migration
 */
class IngredientFractionMigration extends BaseMigration {
  /**
   * Implements __construct().
   */
  public function __construct() {
    parent::__construct();
    $this->description = t('Migrate Foodandwine Ingredient Fraction Taxonomy');
    // Set up the source
    $items_url = $this->getSourceRepo() . 'recipe_fractions.json';
    $item_ID = 'label';
    $fields = array(
      'label' => t('Recipe Ingredient Fraction Label'),
    );
    $this->source = new MigrateSourceJSON($items_url, $item_ID, $fields);
    // Set up the destination node
    $this->destination = new MigrateDestinationTerm('ingredient_fraction');
    // Set up the relationship map between source rows and destination objects.
    $this->map = new MigrateSQLMap($this->machineName, array(
        'label' => array('type' => 'varchar',
          'length' => 255,
          'not null' => TRUE,
          'description' => 'Ingredient Fraction Label',
        ),
      ), MigrateDestinationTerm::getKeySchema()
    );
    // Set up the fields mappings TO destination fields FROM source fields.
    $this->addFieldMapping('name', 'label');
    $this->addFieldMapping('field_taxo_ingr_fraction_label', 'label');
  }
}

/**
 * Primary Ingredients Migration for FoodandWine.
 */
class IngredientPrimaryMigration extends BaseMigration {

  /**
   * Implements __construct().
   */
  public function __construct() {
    parent::__construct();

    $this->description = t('Migrate food and wine primary ingredients');

    // Set up the source
    $items_url = $this->getSourceRepo() . 'recipe_ingredients.json';
    $item_ID = 'id';

    $fields = array(
      'id' => t('Legacy id'),
      'name' => t('Term Name'),
      'children' => t('Children'),
    );

    $this->source = new MigrateSourceJSON($items_url, $item_ID, $fields);

    // Set up the destination node
    $this->destination = new MigrateDestinationTerm('primary_ingredient');

    // Set up the relationship map between source rows and destination objects.
    $this->map = new MigrateSQLMap($this->machineName,
      array(
        'id' => array('type' => 'varchar',
          'length' => 255,
          'not null' => TRUE,
          'description' => 'Term id',
        ),
      ),
      MigrateDestinationTerm::getKeySchema()
    );

    // Set up the fields mappings TO destination fields FROM source fields.
    $this->addFieldMapping('name', 'title');
    $this->addFieldMapping('description', 'title');
  }

  /**
   * Implements prepareRow().
   *
   * @param Object $current_row Holds the data of the current row
   *
   * @return Boolean
   */
  public function prepareRow($current_row) {
    if (isset($current_row->title) && !empty($current_row->title)) {
      $current_row->title = html_entity_decode($current_row->title,
        ENT_QUOTES, "utf-8"
      );
    }
    return TRUE;
  }

  /**
   * Used for saving the parent tid for the children and sub children
   * Implements complete().
   *
   * @param Object $entity Destination
   * @param Object $row Source
   *
   * @return Boolean
   */
  public function complete($entity, $row) {
    // To Create the Children and the Sub Children
    if (isset($row->children) && $row->children != '') {
      $children_arr = array();
      $children_arr = $row->children;
      $child_parent_id = $entity->tid;
      // For Children - Level 1
      foreach ($children_arr as $children) {
        // Create the children and tag it with the parent
        $this->createTaxonomyTerm($children, $child_parent_id);
      }
      return TRUE;
    }
  }

  /**
   * Implements createTaxonomyTerm().
   *
   * @param Object $children Holds the value of the current Term
   * @param Integer $parent_id Holds the value of the current term parent id
   *
   * @return number $term_id returns the taxonomy term id
   */
  public function createTaxonomyTerm($children, $parent_id = 0) {
    // To get the vocabulary ID
    $vocb_machine_name = 'primary_ingredient';
    $query = db_select('taxonomy_vocabulary', 'tv');
    $query->fields('tv', array('vid'));
    $query->condition('tv.machine_name', $vocb_machine_name, '=');
    $result = $query->execute();
    $data = $result->fetchAssoc();
    $vid = $data['vid'];
    // Initialize and create the term
    if (isset($children->title) && !empty($children->title)) {
      $termvalue = '';
      $termvalue = html_entity_decode($children->title,
        ENT_QUOTES, "utf-8"
      );
      $taxonomy_term = new stdClass();
      $taxonomy_term->name = t($termvalue);
      $taxonomy_term->description = t($termvalue);
      $taxonomy_term->vid = $vid;
      if ($parent_id > 0) {
        $taxonomy_term->parent = $parent_id;
      }
      else {
        $taxonomy_term->parent = 0;
      }
      taxonomy_term_save($taxonomy_term);
      // Call it recrusively to add the sub childs and grand childs
      if (isset($children->children) && count($children->children) > 0) {
        foreach ($children->children as $subchildren) {
          $this->createTaxonomyTerm($subchildren, $taxonomy_term->tid);
        }
      }
      else {
        return TRUE;
      }
    }
    else {
      return TRUE;
    }
  }
}

/**
 * Complex Themes Taxonomy Migration for FoodandWine.
 */
class ComplexThemesMigration extends BaseMigration {

  /**
   * Implements __construct().
   */
  public function __construct() {
    parent::__construct();

    $this->description = t('Migrate food and wine complex themes');

    // Set up the source
    $items_url = $this->getSourceRepo() . 'recipe_tool_themes.json';
    $item_ID = 'id';

    $fields = array(
      'id' => t('Legacy id'),
      'name' => t('Term Name'),
      'label' => t('Term Label'),
      'parent_id' => t('Term Parent ID'),
      'parent_label' => t('Term Parent Label'),
    );

    $this->source = new MigrateSourceJSON($items_url, $item_ID, $fields);

    // Set up the destination node
    $this->destination = new MigrateDestinationTerm('complex_themes');

    // Set up the relationship map between source rows and destination objects.
    $this->map = new MigrateSQLMap($this->machineName,
      array(
        'id' => array('type' => 'varchar',
          'length' => 255,
          'not null' => TRUE,
          'description' => 'Term id',
        ),
      ),
      MigrateDestinationTerm::getKeySchema()
    );

    // Set up the fields mappings TO destination fields FROM source fields.
    $this->addFieldMapping('name', 'name');
    $this->addFieldMapping('description', 'name');
    $this->addFieldMapping('field_complex_theme_label', 'label');
    $this->addFieldMapping('parent', 'parent_id')->arguments(array('source_type' => 'tid'));
  }

  /**
   * Implements prepareRow().
   *
   * @param Object $current_row Holds the data of the current row
   *
   * @return Boolean
   */
  public function prepareRow($current_row) {
    // Check if the term already exists
    if (isset($current_row->parent_label) && !empty($current_row->parent_label)) {
      $parent_ids = $this->getTidFromLabel('complex_themes',
        'field_complex_theme_label', array($current_row->parent_label)
      );
      if (count($parent_ids) > 0) {
        $current_row->parent_id = $parent_ids[0];
      }
      else {
        $current_row->parent_id = NULL;
      }
    }
    else {
      $current_row->parent_id = NULL;
    }

    return TRUE;
  }
}

/**
 * Simple Themes Taxonomy Migration for FoodandWine.
 */
class SimpleThemesMigration extends BaseMigration {

  /**
   * Implements __construct().
   */
  public function __construct() {
    parent::__construct();

    $this->description = t('Migrate food and wine simple themes');

    // Set up the source
    $items_url = $this->getSourceRepo() . 'recipe_service_themes.json';
    $item_ID = 'id';

    $fields = array(
      'id' => t('Legacy id'),
      'name' => t('Term Name'),
      'label' => t('Term Label'),
    );

    $this->source = new MigrateSourceJSON($items_url, $item_ID, $fields);

    // Set up the destination node
    $this->destination = new MigrateDestinationTerm('simple_themes');

    // Set up the relationship map between source rows and destination objects.
    $this->map = new MigrateSQLMap($this->machineName,
      array(
        'id' => array('type' => 'varchar',
          'length' => 255,
          'not null' => TRUE,
          'description' => 'Term id',
        ),
      ),
      MigrateDestinationTerm::getKeySchema()
    );

    // Set up the fields mappings TO destination fields FROM source fields.
    $this->addFieldMapping('name', 'name');
    $this->addFieldMapping('description', 'name');
    $this->addFieldMapping('field_simple_theme_label', 'label');
  }

  /**
   * Implements prepareRow().
   *
   * @param Object $current_row Holds the data of the current row
   *
   * @return Boolean
   */
  public function prepareRow($current_row) {
    return TRUE;
  }
}

/**
 * Recipe Image Rights Taxonomy Migration for FoodandWine.
 */
class RecipeImageRightsMigration extends BaseMigration {

  /**
   * Implements __construct().
   */
  public function __construct() {
    parent::__construct();

    $this->description = t('Migrate food and wine Recipe Image Rights');

    // Set up the source
    $items_url = drupal_get_path('module', 'ti_amg_fw_migrate') . '/json/' . 'recipes_image_rights.json';
    $item_ID = 'label';

    $fields = array(
      'name' => t('Term Name'),
      'label' => t('Term Label'),
    );

    $this->source = new MigrateSourceJSON($items_url, $item_ID, $fields);

    // Set up the destination node
    $this->destination = new MigrateDestinationTerm('image_rights');

    // Set up the relationship map between source rows and destination objects.
    $this->map = new MigrateSQLMap($this->machineName,
      array(
        'label' => array('type' => 'varchar',
          'length' => 255,
          'not null' => TRUE,
          'description' => 'Label',
        ),
      ),
      MigrateDestinationTerm::getKeySchema()
    );

    // Set up the fields mappings TO destination fields FROM source fields.
    $this->addFieldMapping('name', 'name');
    $this->addFieldMapping('field_taxo_image_rights_label', 'label');
  }

  /**
   * Implements prepareRow().
   *
   * @param Object $current_row Holds the data of the current row
   *
   * @return Boolean
   */
  public function prepareRow($current_row) {
    return TRUE;
  }
}

/**
 * Blogs Topic Migration for FoodandWine.
 */
class BlogTopicsMigration extends BaseMigration {

  /**
   * Implements __construct().
   */
  public function __construct() {
    parent::__construct();

    $this->description = t('Migrate food and wine Blog Topics');

    // Set up the source
    $items_url = drupal_get_path('module', 'ti_amg_fw_migrate') . '/json/' . 'blog_topics.json';
    $item_ID = 'topic_url';

    $fields = array(
      'topic_name' => t('Blog Topic Name'),
      'topic_url' => t('Blog Topic Label'),
    );

    $this->source = new MigrateSourceJSON($items_url, $item_ID, $fields);

    // Set up the destination node
    $this->destination = new MigrateDestinationTerm('topic');

    // Set up the relationship map between source rows and destination objects.
    $this->map = new MigrateSQLMap($this->machineName,
      array(
        'topic_url' => array('type' => 'varchar',
          'length' => 255,
          'not null' => TRUE,
          'description' => 'Term Name',
        ),
      ),
      MigrateDestinationTerm::getKeySchema()
    );

    // Set up the fields mappings TO destination fields FROM source fields.
    $this->addFieldMapping('name', 'topic_name');
    $this->addFieldMapping('field_taxo_topic_label', 'topic_url');
  }
  /**
   * Implements prepareRow().
   */
  public function prepareRow($current_row) {
    return TRUE;
  }
}

