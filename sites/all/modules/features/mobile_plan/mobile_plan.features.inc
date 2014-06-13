<?php
/**
 * @file
 * mobile_plan.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function mobile_plan_ctools_plugin_api($module = NULL, $api = NULL) {
  if ($module == "strongarm" && $api == "strongarm") {
    return array("version" => "1");
  }
}

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
      'title_label' => t('Plan Name'),
      'help' => '',
    ),
  );
  return $items;
}
