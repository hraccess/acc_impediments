<?php
/**
 * @file
 * acc_impediments.features.taxonomy.inc
 */

/**
 * Implements hook_taxonomy_default_vocabularies().
 */
function acc_impediments_taxonomy_default_vocabularies() {
  return array(
    'bureaucratic_requirement_type' => array(
      'name' => 'Type of administrative procedure',
      'machine_name' => 'bureaucratic_requirement_type',
      'description' => '',
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
