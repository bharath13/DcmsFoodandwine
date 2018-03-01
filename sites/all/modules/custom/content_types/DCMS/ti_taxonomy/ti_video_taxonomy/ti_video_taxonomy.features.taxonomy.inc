<?php
/**
 * @file
 * ti_video_taxonomy.features.taxonomy.inc
 */

/**
 * Implements hook_taxonomy_default_vocabularies().
 */
function ti_video_taxonomy_taxonomy_default_vocabularies() {
  return array(
    'video_source' => array(
      'name' => 'Video Source',
      'machine_name' => 'video_source',
      'description' => 'Types of Video that can be used on a site (e.g., Brightcove, YouTube, etc.)',
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
