<?php
/**
 * @file
 * ti_amg_fw_blog_content_type.features.taxonomy.inc
 */

/**
 * Implements hook_taxonomy_default_vocabularies().
 */
function ti_amg_fw_blog_content_type_taxonomy_default_vocabularies() {
  return array(
    'rebelmouse_tags' => array(
      'name' => 'Rebelmouse Tags',
      'machine_name' => 'rebelmouse_tags',
      'description' => 'This vocabulary using to create Rebelmouse Feeds',
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
