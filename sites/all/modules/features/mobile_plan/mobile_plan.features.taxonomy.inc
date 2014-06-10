<?php
/**
 * @file
 * mobile_plan.features.taxonomy.inc
 */

/**
 * Implements hook_taxonomy_default_vocabularies().
 */
function mobile_plan_taxonomy_default_vocabularies() {
  return array(
    'phone' => array(
      'name' => 'Phone',
      'machine_name' => 'phone',
      'description' => '',
      'hierarchy' => 0,
      'module' => 'taxonomy',
      'weight' => 0,
    ),
    'telco' => array(
      'name' => 'Telco',
      'machine_name' => 'telco',
      'description' => '',
      'hierarchy' => 0,
      'module' => 'taxonomy',
      'weight' => 0,
    ),
  );
}
