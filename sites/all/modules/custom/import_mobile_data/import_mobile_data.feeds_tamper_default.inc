<?php
/**
 * @file
 * import_mobile_data.feeds_tamper_default.inc
 */

/**
 * Implements hook_feeds_tamper_default().
 */
function import_mobile_data_feeds_tamper_default() {
  $export = array();

  $feeds_tamper = new stdClass();
  $feeds_tamper->disabled = FALSE; /* Edit this to true to make a default feeds_tamper disabled initially */
  $feeds_tamper->api_version = 2;
  $feeds_tamper->id = 'mobileplan-xpathparser_8-find_replace';
  $feeds_tamper->importer = 'mobileplan';
  $feeds_tamper->source = 'xpathparser:8';
  $feeds_tamper->plugin_id = 'find_replace';
  $feeds_tamper->settings = array(
    'find' => 'http://v2.imoney.my/sites/default/files/styles/mobile_plan_comparison_page_logo/public/',
    'replace' => 'http://www.imoney.my/sites/default/files/',
    'case_sensitive' => 0,
    'word_boundaries' => 0,
    'whole' => 0,
    'regex' => FALSE,
    'func' => 'str_ireplace',
  );
  $feeds_tamper->weight = 0;
  $feeds_tamper->description = 'Find replace';
  $export['mobileplan-xpathparser_8-find_replace'] = $feeds_tamper;

  $feeds_tamper = new stdClass();
  $feeds_tamper->disabled = FALSE; /* Edit this to true to make a default feeds_tamper disabled initially */
  $feeds_tamper->api_version = 2;
  $feeds_tamper->id = 'phone-xpathparser_2-efq_finder';
  $feeds_tamper->importer = 'phone';
  $feeds_tamper->source = 'xpathparser:2';
  $feeds_tamper->plugin_id = 'efq_finder';
  $feeds_tamper->settings = array(
    'update' => 'Update',
    'entity_type' => 'taxonomy_term',
    'bundle' => 'manufacturer',
    'field' => 'tid',
    'property' => TRUE,
  );
  $feeds_tamper->weight = 0;
  $feeds_tamper->description = 'Entity Field Query finder';
  $export['phone-xpathparser_2-efq_finder'] = $feeds_tamper;

  $feeds_tamper = new stdClass();
  $feeds_tamper->disabled = FALSE; /* Edit this to true to make a default feeds_tamper disabled initially */
  $feeds_tamper->api_version = 2;
  $feeds_tamper->id = 'phone-xpathparser_3-find_replace';
  $feeds_tamper->importer = 'phone';
  $feeds_tamper->source = 'xpathparser:3';
  $feeds_tamper->plugin_id = 'find_replace';
  $feeds_tamper->settings = array(
    'find' => 'http://v2.imoney.my/sites/default/files/styles/mobile_plan_comparison_page_logo/public/',
    'replace' => 'http://www.imoney.my/sites/default/files/',
    'case_sensitive' => 0,
    'word_boundaries' => 0,
    'whole' => 0,
    'regex' => FALSE,
    'func' => 'str_ireplace',
  );
  $feeds_tamper->weight = 0;
  $feeds_tamper->description = 'Find replace';
  $export['phone-xpathparser_3-find_replace'] = $feeds_tamper;

  return $export;
}
