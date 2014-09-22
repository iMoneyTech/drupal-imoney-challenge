<?php
/**
 * @file
 * import_mobile_data.feeds_importer_default.inc
 */

/**
 * Implements hook_feeds_importer_default().
 */
function import_mobile_data_feeds_importer_default() {
  $export = array();

  $feeds_importer = new stdClass();
  $feeds_importer->disabled = FALSE; /* Edit this to true to make a default feeds_importer disabled initially */
  $feeds_importer->api_version = 1;
  $feeds_importer->id = 'mobileplan';
  $feeds_importer->config = array(
    'name' => 'mobileplan',
    'description' => '',
    'fetcher' => array(
      'plugin_key' => 'FeedsHTTPFetcher',
      'config' => array(
        'auto_detect_feeds' => 0,
        'use_pubsubhubbub' => 0,
        'designated_hub' => '',
        'request_timeout' => '',
        'auto_scheme' => 'https://raw.githubusercontent.com/Mastering/drupal-imoney-challenge/master/imoneymobileplans.xml',
        'accept_invalid_cert' => 0,
      ),
    ),
    'parser' => array(
      'plugin_key' => 'FeedsXPathParserXML',
      'config' => array(
        'sources' => array(
          'xpathparser:6' => 'planName',
          'xpathparser:5' => 'nid',
          'xpathparser:0' => 'freeCall',
          'xpathparser:1' => 'freeData',
          'xpathparser:2' => 'freeSMS',
          'xpathparser:3' => 'monthlyPayment',
          'xpathparser:4' => 'planName',
          'xpathparser:9' => 'planType',
          'xpathparser:7' => 'path',
          'xpathparser:8' => 'planImage',
        ),
        'rawXML' => array(
          'xpathparser:6' => 0,
          'xpathparser:5' => 0,
          'xpathparser:0' => 0,
          'xpathparser:1' => 0,
          'xpathparser:2' => 0,
          'xpathparser:3' => 0,
          'xpathparser:4' => 0,
          'xpathparser:9' => 0,
          'xpathparser:7' => 0,
          'xpathparser:8' => 0,
        ),
        'context' => '//mobilePlan',
        'exp' => array(
          'errors' => 0,
          'debug' => array(
            'context' => 0,
            'xpathparser:6' => 0,
            'xpathparser:5' => 0,
            'xpathparser:0' => 0,
            'xpathparser:1' => 0,
            'xpathparser:2' => 0,
            'xpathparser:3' => 0,
            'xpathparser:4' => 0,
            'xpathparser:9' => 0,
            'xpathparser:7' => 0,
            'xpathparser:8' => 0,
          ),
        ),
        'allow_override' => 1,
      ),
    ),
    'processor' => array(
      'plugin_key' => 'FeedsNodeProcessor',
      'config' => array(
        'expire' => '-1',
        'author' => 0,
        'authorize' => 1,
        'mappings' => array(
          0 => array(
            'source' => 'xpathparser:6',
            'target' => 'title',
            'unique' => FALSE,
          ),
          1 => array(
            'source' => 'xpathparser:5',
            'target' => 'nid',
            'unique' => 1,
          ),
          2 => array(
            'source' => 'xpathparser:0',
            'target' => 'field_freecall',
            'unique' => FALSE,
          ),
          3 => array(
            'source' => 'xpathparser:1',
            'target' => 'field_freedata',
            'unique' => FALSE,
          ),
          4 => array(
            'source' => 'xpathparser:2',
            'target' => 'field_freesms',
            'unique' => FALSE,
          ),
          5 => array(
            'source' => 'xpathparser:3',
            'target' => 'field_monthlypayment',
            'unique' => FALSE,
          ),
          6 => array(
            'source' => 'xpathparser:4',
            'target' => 'field_planname',
            'unique' => FALSE,
          ),
          7 => array(
            'source' => 'xpathparser:9',
            'target' => 'field_plantype',
            'unique' => FALSE,
          ),
          8 => array(
            'source' => 'xpathparser:7',
            'target' => 'path_alias',
            'unique' => FALSE,
          ),
          9 => array(
            'source' => 'xpathparser:8',
            'target' => 'field_planimage:uri',
            'unique' => FALSE,
          ),
        ),
        'update_existing' => '1',
        'update_non_existent' => 'skip',
        'input_format' => 'plain_text',
        'skip_hash_check' => 0,
        'bundle' => 'mobile_plan',
      ),
    ),
    'content_type' => '',
    'update' => 0,
    'import_period' => '-1',
    'expire_period' => 3600,
    'import_on_create' => 1,
    'process_in_background' => 0,
  );
  $export['mobileplan'] = $feeds_importer;

  $feeds_importer = new stdClass();
  $feeds_importer->disabled = FALSE; /* Edit this to true to make a default feeds_importer disabled initially */
  $feeds_importer->api_version = 1;
  $feeds_importer->id = 'phone';
  $feeds_importer->config = array(
    'name' => 'phone',
    'description' => '',
    'fetcher' => array(
      'plugin_key' => 'FeedsHTTPFetcher',
      'config' => array(
        'auto_detect_feeds' => 0,
        'use_pubsubhubbub' => 0,
        'designated_hub' => '',
        'request_timeout' => '',
        'auto_scheme' => 'https://raw.githubusercontent.com/Mastering/drupal-imoney-challenge/master/imoneymobileplans.xml',
        'accept_invalid_cert' => 0,
      ),
    ),
    'parser' => array(
      'plugin_key' => 'FeedsXPathParserXML',
      'config' => array(
        'sources' => array(
          'xpathparser:5' => 'mobileDevice',
          'xpathparser:0' => 'nid',
          'xpathparser:1' => 'mobileCapacity',
          'xpathparser:2' => 'mobileManufacturer',
          'xpathparser:3' => 'mobileImage',
          'xpathparser:4' => 'mobileImageAlt',
        ),
        'rawXML' => array(
          'xpathparser:5' => 0,
          'xpathparser:0' => 0,
          'xpathparser:1' => 0,
          'xpathparser:2' => 0,
          'xpathparser:3' => 0,
          'xpathparser:4' => 0,
        ),
        'context' => '//mobilePlan/phone/mobilePlan',
        'exp' => array(
          'errors' => 1,
          'debug' => array(
            'context' => 0,
            'xpathparser:5' => 0,
            'xpathparser:0' => 0,
            'xpathparser:1' => 0,
            'xpathparser:2' => 0,
            'xpathparser:3' => 0,
            'xpathparser:4' => 0,
          ),
        ),
        'allow_override' => 0,
      ),
    ),
    'processor' => array(
      'plugin_key' => 'FeedsNodeProcessor',
      'config' => array(
        'expire' => '-1',
        'author' => 0,
        'authorize' => 1,
        'mappings' => array(
          0 => array(
            'source' => 'xpathparser:5',
            'target' => 'title',
            'unique' => FALSE,
          ),
          1 => array(
            'source' => 'xpathparser:0',
            'target' => 'nid',
            'unique' => 1,
          ),
          2 => array(
            'source' => 'xpathparser:1',
            'target' => 'field_device_capacity',
            'unique' => FALSE,
          ),
          3 => array(
            'source' => 'xpathparser:2',
            'target' => 'field_manufacturer',
            'term_search' => '0',
            'autocreate' => 1,
          ),
          4 => array(
            'source' => 'xpathparser:3',
            'target' => 'field_phone_image:uri',
            'unique' => FALSE,
          ),
          5 => array(
            'source' => 'xpathparser:4',
            'target' => 'field_phone_image:alt',
            'unique' => FALSE,
          ),
        ),
        'update_existing' => '1',
        'update_non_existent' => 'delete',
        'input_format' => 'plain_text',
        'skip_hash_check' => 0,
        'bundle' => 'phone',
      ),
    ),
    'content_type' => '',
    'update' => 0,
    'import_period' => '-1',
    'expire_period' => 3600,
    'import_on_create' => 1,
    'process_in_background' => 0,
  );
  $export['phone'] = $feeds_importer;

  $feeds_importer = new stdClass();
  $feeds_importer->disabled = FALSE; /* Edit this to true to make a default feeds_importer disabled initially */
  $feeds_importer->api_version = 1;
  $feeds_importer->id = 'phone_mobile_plan';
  $feeds_importer->config = array(
    'name' => 'phone-mobile-plan',
    'description' => '',
    'fetcher' => array(
      'plugin_key' => 'FeedsHTTPFetcher',
      'config' => array(
        'auto_detect_feeds' => 1,
        'use_pubsubhubbub' => 0,
        'designated_hub' => '',
        'request_timeout' => '',
        'auto_scheme' => 'https://raw.githubusercontent.com/Mastering/drupal-imoney-challenge/master/imoneymobileplans.xml',
        'accept_invalid_cert' => 0,
      ),
    ),
    'parser' => array(
      'plugin_key' => 'FeedsXPathParserXML',
      'config' => array(
        'sources' => array(
          'xpathparser:4' => 'nid',
          'xpathparser:0' => 'phone/mobilePlan/sellPrice',
          'xpathparser:1' => 'phone/mobilePlan/telcoName',
          'xpathparser:2' => 'phone/mobilePlan/nid',
          'xpathparser:5' => 'phone/mobilePlan/url',
          'xpathparser:6' => 'phone/mobilePlan/contractPeriod',
        ),
        'rawXML' => array(
          'xpathparser:4' => 0,
          'xpathparser:0' => 0,
          'xpathparser:1' => 0,
          'xpathparser:2' => 0,
          'xpathparser:5' => 0,
          'xpathparser:6' => 0,
        ),
        'context' => '/root/mobilePlan',
        'exp' => array(
          'errors' => 0,
          'debug' => array(
            'context' => 0,
            'xpathparser:4' => 0,
            'xpathparser:0' => 0,
            'xpathparser:1' => 0,
            'xpathparser:2' => 0,
            'xpathparser:5' => 0,
            'xpathparser:6' => 0,
          ),
        ),
        'allow_override' => 0,
      ),
    ),
    'processor' => array(
      'plugin_key' => 'FeedsFieldCollectionProcessor',
      'config' => array(
        'field_name' => 'field_phone',
        'host_entity_type' => 'node',
        'is_field' => 0,
        'guid_field_name' => 'nid',
        'identifier_field_name' => '',
        'mappings' => array(
          0 => array(
            'source' => 'xpathparser:4',
            'target' => 'host_entity_guid',
            'unique' => FALSE,
          ),
          1 => array(
            'source' => 'xpathparser:0',
            'target' => 'field_sellprice',
            'unique' => FALSE,
          ),
          2 => array(
            'source' => 'xpathparser:1',
            'target' => 'field_telconame',
            'term_search' => '0',
            'autocreate' => 1,
          ),
          3 => array(
            'source' => 'xpathparser:2',
            'target' => 'field_id_phone:etid',
            'unique' => FALSE,
          ),
          4 => array(
            'source' => 'xpathparser:5',
            'target' => 'field_phone_telco_url:url',
            'unique' => FALSE,
          ),
          5 => array(
            'source' => 'xpathparser:6',
            'target' => 'field_contractperiod',
            'unique' => FALSE,
          ),
        ),
        'update_existing' => '2',
        'update_non_existent' => 'skip',
        'input_format' => 'plain_text',
        'skip_hash_check' => 0,
        'bundle' => 'field_phone',
      ),
    ),
    'content_type' => '',
    'update' => 0,
    'import_period' => '-1',
    'expire_period' => 3600,
    'import_on_create' => 1,
    'process_in_background' => 0,
  );
  $export['phone_mobile_plan'] = $feeds_importer;

  return $export;
}
