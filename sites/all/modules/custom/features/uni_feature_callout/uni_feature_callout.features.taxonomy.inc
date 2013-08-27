<?php
/**
 * @file
 * uni_feature_callout.features.taxonomy.inc
 */

/**
 * Implements hook_taxonomy_default_vocabularies().
 */
function uni_feature_callout_taxonomy_default_vocabularies() {
  return array(
    'feature_callout_section' => array(
      'name' => 'Page Sections',
      'machine_name' => 'feature_callout_section',
      'description' => 'Used to specify in which section of Inside UNI the callout should be displayed.',
      'hierarchy' => '0',
      'module' => 'taxonomy',
      'weight' => '0',
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
