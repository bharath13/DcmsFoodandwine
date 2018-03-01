<?php
/**
 * @file
 * ti_article_content_type.features.taxonomy.inc
 */

/**
 * Implements hook_taxonomy_default_vocabularies().
 */
function ti_article_content_type_taxonomy_default_vocabularies() {
  return array(
    'issue' => array(
      'name' => 'Issue',
      'machine_name' => 'issue',
      'description' => 'List of issues (periodical number like november 2014, december 2014 ...)',
      'hierarchy' => 0,
      'module' => 'taxonomy',
      'weight' => 0,
      'entity_type' => 'taxonomy_vocabulary',
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
