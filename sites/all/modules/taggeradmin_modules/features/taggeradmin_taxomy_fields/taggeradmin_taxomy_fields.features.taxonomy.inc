<?php
/**
 * @file
 * taggeradmin_taxomy_fields.features.taxonomy.inc
 */

/**
 * Implementation of hook_taxonomy_default_vocabularies().
 */
function taggeradmin_taxomy_fields_taxonomy_default_vocabularies() {
  return array(
    'vocabulary_13' => array(
      'name' => 'Person',
      'machine_name' => 'vocabulary_13',
      'description' => '',
      'hierarchy' => '0',
      'module' => 'taxonomy',
      'weight' => '-7',
    ),
    'vocabulary_15' => array(
      'name' => 'Organisation',
      'machine_name' => 'vocabulary_15',
      'description' => '',
      'hierarchy' => '0',
      'module' => 'taxonomy',
      'weight' => '-6',
    ),
    'vocabulary_16' => array(
      'name' => 'Emne',
      'machine_name' => 'vocabulary_16',
      'description' => '',
      'hierarchy' => '0',
      'module' => 'taxonomy',
      'weight' => '-8',
    ),
    'vocabulary_17' => array(
      'name' => 'Sted',
      'machine_name' => 'vocabulary_17',
      'description' => '',
      'hierarchy' => '0',
      'module' => 'taxonomy',
      'weight' => '-5',
    ),
  );
}
