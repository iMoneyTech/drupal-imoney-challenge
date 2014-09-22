<?php
/**
 * @file
 * import_mobile_data.features.taxonomy.inc
 */

/**
 * Implements hook_taxonomy_default_vocabularies().
 */
function import_mobile_data_taxonomy_default_vocabularies() {
  return array(
    'manufacturer' => array(
      'name' => 'Manufacturer',
      'machine_name' => 'manufacturer',
      'description' => '',
      'hierarchy' => 0,
      'module' => 'taxonomy',
      'weight' => 0,
    ),
    'telconame' => array(
      'name' => 'telcoName',
      'machine_name' => 'telconame',
      'description' => '',
      'hierarchy' => 0,
      'module' => 'taxonomy',
      'weight' => 0,
    ),
  );
}
