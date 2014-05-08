<?php
/**
 * @file
 * mobile_plan.features.inc
 */

/**
 * Implements hook_node_info().
 */
function mobile_plan_node_info() {
  $items = array(
    'mobile_plan' => array(
      'name' => t('Mobile Plan'),
      'base' => 'node_content',
      'description' => '',
      'has_title' => '1',
      'title_label' => t('Title'),
      'help' => '',
    ),
  );
  return $items;
}
