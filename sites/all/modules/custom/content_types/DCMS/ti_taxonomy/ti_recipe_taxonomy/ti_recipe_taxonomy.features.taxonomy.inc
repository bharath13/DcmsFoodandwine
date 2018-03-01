<?php
/**
 * @file
 * ti_recipe_taxonomy.features.taxonomy.inc
 */

/**
 * Implements hook_taxonomy_default_vocabularies().
 */
function ti_recipe_taxonomy_taxonomy_default_vocabularies() {
  return array(
    'recipe_ingredient_unit' => array(
      'name' => 'Recipe Ingredient Unit',
      'machine_name' => 'recipe_ingredient_unit',
      'description' => 'Unit of measurement for ingredients (e.g., Cup, Tbsp, Tsp, etc.)',
      'hierarchy' => 0,
      'module' => 'taxonomy',
      'weight' => 0,
      'rdf_mapping' => array(
        'rdftype' => array(
          0 => 'skos:ConceptScheme',
        ),
        'name' => array(
          'predicates' => array(
            0 => 'dc:title',
          ),
        ),
        'description' => array(
          'predicates' => array(
            0 => 'rdfs:comment',
          ),
        ),
      ),
    ),
    'recipe_nutrient' => array(
      'name' => 'Recipe Nutrient',
      'machine_name' => 'recipe_nutrient',
      'description' => 'Type of nutrient (e.g., Calories, Fat, Carbohydrates, etc.)',
      'hierarchy' => 0,
      'module' => 'taxonomy',
      'weight' => 0,
      'rdf_mapping' => array(
        'rdftype' => array(
          0 => 'skos:ConceptScheme',
        ),
        'name' => array(
          'predicates' => array(
            0 => 'dc:title',
          ),
        ),
        'description' => array(
          'predicates' => array(
            0 => 'rdfs:comment',
          ),
        ),
      ),
    ),
    'recipe_nutrient_unit' => array(
      'name' => 'Recipe Nutrient Unit',
      'machine_name' => 'recipe_nutrient_unit',
      'description' => 'Unit of measurement for nutrients (e.g., Grams, Milligrams, etc.)',
      'hierarchy' => 0,
      'module' => 'taxonomy',
      'weight' => 0,
      'rdf_mapping' => array(
        'rdftype' => array(
          0 => 'skos:ConceptScheme',
        ),
        'name' => array(
          'predicates' => array(
            0 => 'dc:title',
          ),
        ),
        'description' => array(
          'predicates' => array(
            0 => 'rdfs:comment',
          ),
        ),
      ),
    ),
    'recipe_serving_size' => array(
      'name' => 'Recipe Serving Size',
      'machine_name' => 'recipe_serving_size',
      'description' => 'Serving size for the recipe (e.g., 1, 2, 3, 4, etc.)',
      'hierarchy' => 0,
      'module' => 'taxonomy',
      'weight' => 0,
      'rdf_mapping' => array(
        'rdftype' => array(
          0 => 'skos:ConceptScheme',
        ),
        'name' => array(
          'predicates' => array(
            0 => 'dc:title',
          ),
        ),
        'description' => array(
          'predicates' => array(
            0 => 'rdfs:comment',
          ),
        ),
      ),
    ),
    'recipe_serving_unit' => array(
      'name' => 'Recipe Serving Unit',
      'machine_name' => 'recipe_serving_unit',
      'description' => 'Unit of measure for serving size (e.g., People, etc.)',
      'hierarchy' => 0,
      'module' => 'taxonomy',
      'weight' => 0,
      'rdf_mapping' => array(
        'rdftype' => array(
          0 => 'skos:ConceptScheme',
        ),
        'name' => array(
          'predicates' => array(
            0 => 'dc:title',
          ),
        ),
        'description' => array(
          'predicates' => array(
            0 => 'rdfs:comment',
          ),
        ),
      ),
    ),
    'recipe_shopping_info' => array(
      'name' => 'Recipe Shopping Info',
      'machine_name' => 'recipe_shopping_info',
      'description' => 'Additional information about where ingredients may be found in a supermarket',
      'hierarchy' => 0,
      'module' => 'taxonomy',
      'weight' => 0,
      'rdf_mapping' => array(
        'rdftype' => array(
          0 => 'skos:ConceptScheme',
        ),
        'name' => array(
          'predicates' => array(
            0 => 'dc:title',
          ),
        ),
        'description' => array(
          'predicates' => array(
            0 => 'rdfs:comment',
          ),
        ),
      ),
    ),
    'recipe_time_type' => array(
      'name' => 'Recipe Time Type',
      'machine_name' => 'recipe_time_type',
      'description' => 'Types of time for a recipe preparation (e.g., Prep Time, Cooking Time, Refrigeration Time, etc.)',
      'hierarchy' => 0,
      'module' => 'taxonomy',
      'weight' => 0,
      'rdf_mapping' => array(
        'rdftype' => array(
          0 => 'skos:ConceptScheme',
        ),
        'name' => array(
          'predicates' => array(
            0 => 'dc:title',
          ),
        ),
        'description' => array(
          'predicates' => array(
            0 => 'rdfs:comment',
          ),
        ),
      ),
    ),
    'recipe_time_unit' => array(
      'name' => 'Recipe Time Unit',
      'machine_name' => 'recipe_time_unit',
      'description' => 'Units of time for recipe steps (e.g. Minutes, Hours, Days, etc.)',
      'hierarchy' => 0,
      'module' => 'taxonomy',
      'weight' => 0,
      'rdf_mapping' => array(
        'rdftype' => array(
          0 => 'skos:ConceptScheme',
        ),
        'name' => array(
          'predicates' => array(
            0 => 'dc:title',
          ),
        ),
        'description' => array(
          'predicates' => array(
            0 => 'rdfs:comment',
          ),
        ),
      ),
    ),
  );
}
