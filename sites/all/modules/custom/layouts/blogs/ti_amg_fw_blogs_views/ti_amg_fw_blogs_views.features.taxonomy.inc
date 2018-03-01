<?php
/**
 * @file
 * ti_amg_fw_blogs_views.features.taxonomy.inc
 */

/**
 * Implements hook_taxonomy_default_vocabularies().
 */
function ti_amg_fw_blogs_views_taxonomy_default_vocabularies() {
  return array(
    'sites_we_like' => array(
      'name' => 'Sites We Like',
      'machine_name' => 'sites_we_like',
      'description' => 'Sites We Like',
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
