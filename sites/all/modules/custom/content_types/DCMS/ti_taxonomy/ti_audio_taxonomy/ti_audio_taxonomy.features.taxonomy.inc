<?php
/**
 * @file
 * ti_audio_taxonomy.features.taxonomy.inc
 */

/**
 * Implements hook_taxonomy_default_vocabularies().
 */
function ti_audio_taxonomy_taxonomy_default_vocabularies() {
  return array(
    'encoding_format' => array(
      'name' => 'Encoding Format',
      'machine_name' => 'encoding_format',
      'description' => 'Encoding format for audio files (e.g., MP3, WAV, etc.)',
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
