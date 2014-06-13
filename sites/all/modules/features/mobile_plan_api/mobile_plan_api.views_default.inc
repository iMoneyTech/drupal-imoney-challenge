<?php
/**
 * @file
 * mobile_plan_api.views_default.inc
 */

/**
 * Implements hook_views_default_views().
 */
function mobile_plan_api_views_default_views() {
  $export = array();

  $view = new view();
  $view->name = 'phones';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'field_collection_item';
  $view->human_name = 'Phones';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['access']['type'] = 'none';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['pager']['type'] = 'none';
  $handler->display->display_options['style_plugin'] = 'views_json';
  $handler->display->display_options['style_options']['plaintext_output'] = 1;
  $handler->display->display_options['style_options']['remove_newlines'] = 1;
  $handler->display->display_options['style_options']['jsonp_prefix'] = 'callback';
  $handler->display->display_options['style_options']['using_views_api_mode'] = 0;
  $handler->display->display_options['style_options']['object_arrays'] = 0;
  $handler->display->display_options['style_options']['numeric_strings'] = 1;
  $handler->display->display_options['style_options']['bigint_string'] = 0;
  $handler->display->display_options['style_options']['pretty_print'] = 0;
  $handler->display->display_options['style_options']['unescaped_slashes'] = 0;
  $handler->display->display_options['style_options']['unescaped_unicode'] = 0;
  $handler->display->display_options['style_options']['char_encoding'] = array();
  /* Relationship: Entity Reference: Referenced Entity */
  $handler->display->display_options['relationships']['field_phone_target_id']['id'] = 'field_phone_target_id';
  $handler->display->display_options['relationships']['field_phone_target_id']['table'] = 'field_data_field_phone';
  $handler->display->display_options['relationships']['field_phone_target_id']['field'] = 'field_phone_target_id';
  /* Relationship: Field collection item: Entity with the Phone (field_phone_plans) */
  $handler->display->display_options['relationships']['field_phone_plans_node']['id'] = 'field_phone_plans_node';
  $handler->display->display_options['relationships']['field_phone_plans_node']['table'] = 'field_collection_item';
  $handler->display->display_options['relationships']['field_phone_plans_node']['field'] = 'field_phone_plans_node';
  /* Field: Field collection item: Phone */
  $handler->display->display_options['fields']['field_phone']['id'] = 'field_phone';
  $handler->display->display_options['fields']['field_phone']['table'] = 'field_data_field_phone';
  $handler->display->display_options['fields']['field_phone']['field'] = 'field_phone';
  $handler->display->display_options['fields']['field_phone']['label'] = 'phone';
  $handler->display->display_options['fields']['field_phone']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['field_phone']['settings'] = array(
    'link' => 0,
  );
  /* Field: Taxonomy term: Image */
  $handler->display->display_options['fields']['field_mobile_image']['id'] = 'field_mobile_image';
  $handler->display->display_options['fields']['field_mobile_image']['table'] = 'field_data_field_mobile_image';
  $handler->display->display_options['fields']['field_mobile_image']['field'] = 'field_mobile_image';
  $handler->display->display_options['fields']['field_mobile_image']['relationship'] = 'field_phone_target_id';
  $handler->display->display_options['fields']['field_mobile_image']['label'] = 'image';
  $handler->display->display_options['fields']['field_mobile_image']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['field_mobile_image']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_mobile_image']['settings'] = array(
    'image_style' => '',
    'image_link' => '',
  );
  /* Field: Taxonomy term: Device Name */
  $handler->display->display_options['fields']['field_mobile_device']['id'] = 'field_mobile_device';
  $handler->display->display_options['fields']['field_mobile_device']['table'] = 'field_data_field_mobile_device';
  $handler->display->display_options['fields']['field_mobile_device']['field'] = 'field_mobile_device';
  $handler->display->display_options['fields']['field_mobile_device']['relationship'] = 'field_phone_target_id';
  /* Field: Taxonomy term: Manufacturer */
  $handler->display->display_options['fields']['field_mobile_manufacturer']['id'] = 'field_mobile_manufacturer';
  $handler->display->display_options['fields']['field_mobile_manufacturer']['table'] = 'field_data_field_mobile_manufacturer';
  $handler->display->display_options['fields']['field_mobile_manufacturer']['field'] = 'field_mobile_manufacturer';
  $handler->display->display_options['fields']['field_mobile_manufacturer']['relationship'] = 'field_phone_target_id';
  $handler->display->display_options['fields']['field_mobile_manufacturer']['label'] = 'manufacturer';
  $handler->display->display_options['fields']['field_mobile_manufacturer']['element_default_classes'] = FALSE;
  /* Field: Taxonomy term: Mobile Capacity */
  $handler->display->display_options['fields']['field_mobile_capacity']['id'] = 'field_mobile_capacity';
  $handler->display->display_options['fields']['field_mobile_capacity']['table'] = 'field_data_field_mobile_capacity';
  $handler->display->display_options['fields']['field_mobile_capacity']['field'] = 'field_mobile_capacity';
  $handler->display->display_options['fields']['field_mobile_capacity']['relationship'] = 'field_phone_target_id';
  $handler->display->display_options['fields']['field_mobile_capacity']['label'] = 'capacity';
  $handler->display->display_options['fields']['field_mobile_capacity']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['field_mobile_capacity']['settings'] = array(
    'thousand_separator' => ' ',
    'prefix_suffix' => 1,
  );
  /* Field: Taxonomy term: Device Name */
  $handler->display->display_options['fields']['field_mobile_device_1']['id'] = 'field_mobile_device_1';
  $handler->display->display_options['fields']['field_mobile_device_1']['table'] = 'field_data_field_mobile_device';
  $handler->display->display_options['fields']['field_mobile_device_1']['field'] = 'field_mobile_device';
  $handler->display->display_options['fields']['field_mobile_device_1']['relationship'] = 'field_phone_target_id';
  $handler->display->display_options['fields']['field_mobile_device_1']['label'] = 'device_name';
  /* Field: Field collection item: Contract Period */
  $handler->display->display_options['fields']['field_contract_period']['id'] = 'field_contract_period';
  $handler->display->display_options['fields']['field_contract_period']['table'] = 'field_data_field_contract_period';
  $handler->display->display_options['fields']['field_contract_period']['field'] = 'field_contract_period';
  $handler->display->display_options['fields']['field_contract_period']['label'] = 'contract_period';
  /* Field: Field collection item: Sell Price */
  $handler->display->display_options['fields']['field_sell_price']['id'] = 'field_sell_price';
  $handler->display->display_options['fields']['field_sell_price']['table'] = 'field_data_field_sell_price';
  $handler->display->display_options['fields']['field_sell_price']['field'] = 'field_sell_price';
  $handler->display->display_options['fields']['field_sell_price']['label'] = 'sell_price';
  $handler->display->display_options['fields']['field_sell_price']['settings'] = array(
    'thousand_separator' => ' ',
    'decimal_separator' => '.',
    'scale' => '2',
    'prefix_suffix' => 1,
  );
  /* Field: Content: Nid */
  $handler->display->display_options['fields']['nid']['id'] = 'nid';
  $handler->display->display_options['fields']['nid']['table'] = 'node';
  $handler->display->display_options['fields']['nid']['field'] = 'nid';
  $handler->display->display_options['fields']['nid']['relationship'] = 'field_phone_plans_node';
  $handler->display->display_options['fields']['nid']['label'] = '';
  $handler->display->display_options['fields']['nid']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['nid']['element_default_classes'] = FALSE;
  /* Field: Content: Telco */
  $handler->display->display_options['fields']['field_telco']['id'] = 'field_telco';
  $handler->display->display_options['fields']['field_telco']['table'] = 'field_data_field_telco';
  $handler->display->display_options['fields']['field_telco']['field'] = 'field_telco';
  $handler->display->display_options['fields']['field_telco']['relationship'] = 'field_phone_plans_node';
  $handler->display->display_options['fields']['field_telco']['label'] = 'telco';
  $handler->display->display_options['fields']['field_telco']['settings'] = array(
    'link' => 0,
  );
  /* Contextual filter: Content: Nid */
  $handler->display->display_options['arguments']['nid']['id'] = 'nid';
  $handler->display->display_options['arguments']['nid']['table'] = 'node';
  $handler->display->display_options['arguments']['nid']['field'] = 'nid';
  $handler->display->display_options['arguments']['nid']['relationship'] = 'field_phone_plans_node';
  $handler->display->display_options['arguments']['nid']['default_argument_type'] = 'fixed';
  $handler->display->display_options['arguments']['nid']['summary']['number_of_records'] = '0';
  $handler->display->display_options['arguments']['nid']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['nid']['summary_options']['items_per_page'] = '25';
  $handler->display->display_options['arguments']['nid']['specify_validation'] = TRUE;
  $handler->display->display_options['arguments']['nid']['validate']['type'] = 'node';
  $handler->display->display_options['arguments']['nid']['validate_options']['types'] = array(
    'mobile_plan' => 'mobile_plan',
  );
  $handler->display->display_options['arguments']['nid']['validate']['fail'] = 'ignore';
  /* Contextual filter: Content: Telco (field_telco) */
  $handler->display->display_options['arguments']['field_telco_target_id']['id'] = 'field_telco_target_id';
  $handler->display->display_options['arguments']['field_telco_target_id']['table'] = 'field_data_field_telco';
  $handler->display->display_options['arguments']['field_telco_target_id']['field'] = 'field_telco_target_id';
  $handler->display->display_options['arguments']['field_telco_target_id']['relationship'] = 'field_phone_plans_node';
  $handler->display->display_options['arguments']['field_telco_target_id']['default_argument_type'] = 'fixed';
  $handler->display->display_options['arguments']['field_telco_target_id']['summary']['number_of_records'] = '0';
  $handler->display->display_options['arguments']['field_telco_target_id']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['field_telco_target_id']['summary_options']['items_per_page'] = '25';
  $handler->display->display_options['arguments']['field_telco_target_id']['specify_validation'] = TRUE;
  $handler->display->display_options['arguments']['field_telco_target_id']['validate']['type'] = 'taxonomy_term';
  $handler->display->display_options['arguments']['field_telco_target_id']['validate_options']['vocabularies'] = array(
    'telco' => 'telco',
  );
  $handler->display->display_options['arguments']['field_telco_target_id']['validate']['fail'] = 'ignore';
  /* Filter criterion: Field collection item: Field name */
  $handler->display->display_options['filters']['field_name']['id'] = 'field_name';
  $handler->display->display_options['filters']['field_name']['table'] = 'field_collection_item';
  $handler->display->display_options['filters']['field_name']['field'] = 'field_name';
  $handler->display->display_options['filters']['field_name']['value'] = array(
    'field_phone_plans' => 'field_phone_plans',
  );
  $handler->display->display_options['filters']['field_name']['group'] = 1;

  /* Display: Page */
  $handler = $view->new_display('page', 'Page', 'page');
  $handler->display->display_options['path'] = 'phones';

  /* Display: Page */
  $handler = $view->new_display('page', 'Page', 'page_1');
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Field collection item: Phone */
  $handler->display->display_options['fields']['field_phone']['id'] = 'field_phone';
  $handler->display->display_options['fields']['field_phone']['table'] = 'field_data_field_phone';
  $handler->display->display_options['fields']['field_phone']['field'] = 'field_phone';
  $handler->display->display_options['fields']['field_phone']['label'] = 'phone';
  $handler->display->display_options['fields']['field_phone']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['field_phone']['settings'] = array(
    'link' => 0,
  );
  /* Field: Taxonomy term: Image */
  $handler->display->display_options['fields']['field_mobile_image']['id'] = 'field_mobile_image';
  $handler->display->display_options['fields']['field_mobile_image']['table'] = 'field_data_field_mobile_image';
  $handler->display->display_options['fields']['field_mobile_image']['field'] = 'field_mobile_image';
  $handler->display->display_options['fields']['field_mobile_image']['relationship'] = 'field_phone_target_id';
  $handler->display->display_options['fields']['field_mobile_image']['label'] = 'image';
  $handler->display->display_options['fields']['field_mobile_image']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['field_mobile_image']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_mobile_image']['settings'] = array(
    'image_style' => '',
    'image_link' => '',
  );
  /* Field: Taxonomy term: Device Name */
  $handler->display->display_options['fields']['field_mobile_device']['id'] = 'field_mobile_device';
  $handler->display->display_options['fields']['field_mobile_device']['table'] = 'field_data_field_mobile_device';
  $handler->display->display_options['fields']['field_mobile_device']['field'] = 'field_mobile_device';
  $handler->display->display_options['fields']['field_mobile_device']['relationship'] = 'field_phone_target_id';
  /* Field: Taxonomy term: Manufacturer */
  $handler->display->display_options['fields']['field_mobile_manufacturer']['id'] = 'field_mobile_manufacturer';
  $handler->display->display_options['fields']['field_mobile_manufacturer']['table'] = 'field_data_field_mobile_manufacturer';
  $handler->display->display_options['fields']['field_mobile_manufacturer']['field'] = 'field_mobile_manufacturer';
  $handler->display->display_options['fields']['field_mobile_manufacturer']['relationship'] = 'field_phone_target_id';
  $handler->display->display_options['fields']['field_mobile_manufacturer']['label'] = 'manufacturer';
  $handler->display->display_options['fields']['field_mobile_manufacturer']['element_default_classes'] = FALSE;
  /* Field: Taxonomy term: Mobile Capacity */
  $handler->display->display_options['fields']['field_mobile_capacity']['id'] = 'field_mobile_capacity';
  $handler->display->display_options['fields']['field_mobile_capacity']['table'] = 'field_data_field_mobile_capacity';
  $handler->display->display_options['fields']['field_mobile_capacity']['field'] = 'field_mobile_capacity';
  $handler->display->display_options['fields']['field_mobile_capacity']['relationship'] = 'field_phone_target_id';
  $handler->display->display_options['fields']['field_mobile_capacity']['label'] = 'capacity';
  $handler->display->display_options['fields']['field_mobile_capacity']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['field_mobile_capacity']['settings'] = array(
    'thousand_separator' => ' ',
    'prefix_suffix' => 1,
  );
  /* Field: Taxonomy term: Device Name */
  $handler->display->display_options['fields']['field_mobile_device_1']['id'] = 'field_mobile_device_1';
  $handler->display->display_options['fields']['field_mobile_device_1']['table'] = 'field_data_field_mobile_device';
  $handler->display->display_options['fields']['field_mobile_device_1']['field'] = 'field_mobile_device';
  $handler->display->display_options['fields']['field_mobile_device_1']['relationship'] = 'field_phone_target_id';
  $handler->display->display_options['fields']['field_mobile_device_1']['label'] = 'device_name';
  /* Field: Field collection item: Contract Period */
  $handler->display->display_options['fields']['field_contract_period']['id'] = 'field_contract_period';
  $handler->display->display_options['fields']['field_contract_period']['table'] = 'field_data_field_contract_period';
  $handler->display->display_options['fields']['field_contract_period']['field'] = 'field_contract_period';
  $handler->display->display_options['fields']['field_contract_period']['label'] = 'contract_period';
  /* Field: Field collection item: Sell Price */
  $handler->display->display_options['fields']['field_sell_price']['id'] = 'field_sell_price';
  $handler->display->display_options['fields']['field_sell_price']['table'] = 'field_data_field_sell_price';
  $handler->display->display_options['fields']['field_sell_price']['field'] = 'field_sell_price';
  $handler->display->display_options['fields']['field_sell_price']['label'] = 'sell_price';
  $handler->display->display_options['fields']['field_sell_price']['settings'] = array(
    'thousand_separator' => ' ',
    'decimal_separator' => '.',
    'scale' => '2',
    'prefix_suffix' => 1,
  );
  /* Field: Content: Nid */
  $handler->display->display_options['fields']['nid']['id'] = 'nid';
  $handler->display->display_options['fields']['nid']['table'] = 'node';
  $handler->display->display_options['fields']['nid']['field'] = 'nid';
  $handler->display->display_options['fields']['nid']['relationship'] = 'field_phone_plans_node';
  $handler->display->display_options['fields']['nid']['label'] = '';
  $handler->display->display_options['fields']['nid']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['nid']['element_default_classes'] = FALSE;
  /* Field: Content: Telco */
  $handler->display->display_options['fields']['field_telco']['id'] = 'field_telco';
  $handler->display->display_options['fields']['field_telco']['table'] = 'field_data_field_telco';
  $handler->display->display_options['fields']['field_telco']['field'] = 'field_telco';
  $handler->display->display_options['fields']['field_telco']['relationship'] = 'field_phone_plans_node';
  $handler->display->display_options['fields']['field_telco']['label'] = 'telco';
  $handler->display->display_options['fields']['field_telco']['settings'] = array(
    'link' => 0,
  );
  /* Field: Content: Telco */
  $handler->display->display_options['fields']['field_telco_1']['id'] = 'field_telco_1';
  $handler->display->display_options['fields']['field_telco_1']['table'] = 'field_data_field_telco';
  $handler->display->display_options['fields']['field_telco_1']['field'] = 'field_telco';
  $handler->display->display_options['fields']['field_telco_1']['relationship'] = 'field_phone_plans_node';
  $handler->display->display_options['fields']['field_telco_1']['label'] = 'telco_id';
  $handler->display->display_options['fields']['field_telco_1']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['field_telco_1']['type'] = 'entityreference_entity_id';
  $handler->display->display_options['fields']['field_telco_1']['settings'] = array(
    'link' => 0,
  );
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['relationship'] = 'field_phone_plans_node';
  $handler->display->display_options['fields']['title']['label'] = 'title';
  $handler->display->display_options['fields']['title']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['title']['link_to_node'] = FALSE;
  $handler->display->display_options['defaults']['sorts'] = FALSE;
  /* Sort criterion: Taxonomy term: Term ID */
  $handler->display->display_options['sorts']['tid']['id'] = 'tid';
  $handler->display->display_options['sorts']['tid']['table'] = 'taxonomy_term_data';
  $handler->display->display_options['sorts']['tid']['field'] = 'tid';
  $handler->display->display_options['sorts']['tid']['relationship'] = 'field_phone_target_id';
  $handler->display->display_options['sorts']['tid']['expose']['label'] = 'Term ID';
  /* Sort criterion: Content: Telco (field_telco) */
  $handler->display->display_options['sorts']['field_telco_target_id']['id'] = 'field_telco_target_id';
  $handler->display->display_options['sorts']['field_telco_target_id']['table'] = 'field_data_field_telco';
  $handler->display->display_options['sorts']['field_telco_target_id']['field'] = 'field_telco_target_id';
  $handler->display->display_options['sorts']['field_telco_target_id']['relationship'] = 'field_phone_plans_node';
  $handler->display->display_options['defaults']['arguments'] = FALSE;
  $handler->display->display_options['defaults']['filter_groups'] = FALSE;
  $handler->display->display_options['defaults']['filters'] = FALSE;
  /* Filter criterion: Field collection item: Field name */
  $handler->display->display_options['filters']['field_name']['id'] = 'field_name';
  $handler->display->display_options['filters']['field_name']['table'] = 'field_collection_item';
  $handler->display->display_options['filters']['field_name']['field'] = 'field_name';
  $handler->display->display_options['filters']['field_name']['value'] = array(
    'field_phone_plans' => 'field_phone_plans',
  );
  $handler->display->display_options['filters']['field_name']['group'] = 1;
  /* Filter criterion: Content: Telco (field_telco) */
  $handler->display->display_options['filters']['field_telco_target_id']['id'] = 'field_telco_target_id';
  $handler->display->display_options['filters']['field_telco_target_id']['table'] = 'field_data_field_telco';
  $handler->display->display_options['filters']['field_telco_target_id']['field'] = 'field_telco_target_id';
  $handler->display->display_options['filters']['field_telco_target_id']['relationship'] = 'field_phone_plans_node';
  $handler->display->display_options['filters']['field_telco_target_id']['exposed'] = TRUE;
  $handler->display->display_options['filters']['field_telco_target_id']['expose']['operator_id'] = 'field_telco_target_id_op';
  $handler->display->display_options['filters']['field_telco_target_id']['expose']['label'] = 'Telco';
  $handler->display->display_options['filters']['field_telco_target_id']['expose']['operator'] = 'field_telco_target_id_op';
  $handler->display->display_options['filters']['field_telco_target_id']['expose']['identifier'] = 'telco';
  $handler->display->display_options['filters']['field_telco_target_id']['expose']['remember_roles'] = array(
    2 => '2',
    1 => 0,
  );
  /* Filter criterion: Taxonomy term: Term ID */
  $handler->display->display_options['filters']['tid_raw']['id'] = 'tid_raw';
  $handler->display->display_options['filters']['tid_raw']['table'] = 'taxonomy_term_data';
  $handler->display->display_options['filters']['tid_raw']['field'] = 'tid_raw';
  $handler->display->display_options['filters']['tid_raw']['relationship'] = 'field_phone_target_id';
  $handler->display->display_options['filters']['tid_raw']['exposed'] = TRUE;
  $handler->display->display_options['filters']['tid_raw']['expose']['operator_id'] = 'tid_raw_op';
  $handler->display->display_options['filters']['tid_raw']['expose']['label'] = 'Term ID';
  $handler->display->display_options['filters']['tid_raw']['expose']['operator'] = 'tid_raw_op';
  $handler->display->display_options['filters']['tid_raw']['expose']['identifier'] = 'phone';
  $handler->display->display_options['filters']['tid_raw']['expose']['remember_roles'] = array(
    2 => '2',
    1 => 0,
  );
  $handler->display->display_options['path'] = 'search';
  $export['phones'] = $view;

  $view = new view();
  $view->name = 'plans';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'node';
  $view->human_name = 'Plans';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['title'] = 'Plans';
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['access']['type'] = 'perm';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['pager']['type'] = 'none';
  $handler->display->display_options['style_plugin'] = 'views_json';
  $handler->display->display_options['style_options']['plaintext_output'] = 1;
  $handler->display->display_options['style_options']['remove_newlines'] = 1;
  $handler->display->display_options['style_options']['jsonp_prefix'] = 'callback';
  $handler->display->display_options['style_options']['using_views_api_mode'] = 0;
  $handler->display->display_options['style_options']['object_arrays'] = 0;
  $handler->display->display_options['style_options']['numeric_strings'] = 1;
  $handler->display->display_options['style_options']['bigint_string'] = 0;
  $handler->display->display_options['style_options']['pretty_print'] = 0;
  $handler->display->display_options['style_options']['unescaped_slashes'] = 0;
  $handler->display->display_options['style_options']['unescaped_unicode'] = 0;
  $handler->display->display_options['style_options']['char_encoding'] = array();
  /* Relationship: Entity Reference: Referenced Entity */
  $handler->display->display_options['relationships']['field_telco_target_id']['id'] = 'field_telco_target_id';
  $handler->display->display_options['relationships']['field_telco_target_id']['table'] = 'field_data_field_telco';
  $handler->display->display_options['relationships']['field_telco_target_id']['field'] = 'field_telco_target_id';
  /* Relationship: Content: Phone (field_phone_plans) */
  $handler->display->display_options['relationships']['field_phone_plans_value']['id'] = 'field_phone_plans_value';
  $handler->display->display_options['relationships']['field_phone_plans_value']['table'] = 'field_data_field_phone_plans';
  $handler->display->display_options['relationships']['field_phone_plans_value']['field'] = 'field_phone_plans_value';
  $handler->display->display_options['relationships']['field_phone_plans_value']['delta'] = '-1';
  /* Relationship: Entity Reference: Referenced Entity */
  $handler->display->display_options['relationships']['field_phone_target_id']['id'] = 'field_phone_target_id';
  $handler->display->display_options['relationships']['field_phone_target_id']['table'] = 'field_data_field_phone';
  $handler->display->display_options['relationships']['field_phone_target_id']['field'] = 'field_phone_target_id';
  $handler->display->display_options['relationships']['field_phone_target_id']['relationship'] = 'field_phone_plans_value';
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  /* Field: Content: Free Call */
  $handler->display->display_options['fields']['field_free_call']['id'] = 'field_free_call';
  $handler->display->display_options['fields']['field_free_call']['table'] = 'field_data_field_free_call';
  $handler->display->display_options['fields']['field_free_call']['field'] = 'field_free_call';
  $handler->display->display_options['fields']['field_free_call']['label'] = 'free_call';
  $handler->display->display_options['fields']['field_free_call']['element_default_classes'] = FALSE;
  /* Field: Content: Free Data */
  $handler->display->display_options['fields']['field_free_data']['id'] = 'field_free_data';
  $handler->display->display_options['fields']['field_free_data']['table'] = 'field_data_field_free_data';
  $handler->display->display_options['fields']['field_free_data']['field'] = 'field_free_data';
  $handler->display->display_options['fields']['field_free_data']['label'] = 'free_data';
  /* Field: Content: Free SMS */
  $handler->display->display_options['fields']['field_free_sms']['id'] = 'field_free_sms';
  $handler->display->display_options['fields']['field_free_sms']['table'] = 'field_data_field_free_sms';
  $handler->display->display_options['fields']['field_free_sms']['field'] = 'field_free_sms';
  $handler->display->display_options['fields']['field_free_sms']['label'] = 'free_sms';
  /* Field: Content: Nid */
  $handler->display->display_options['fields']['nid']['id'] = 'nid';
  $handler->display->display_options['fields']['nid']['table'] = 'node';
  $handler->display->display_options['fields']['nid']['field'] = 'nid';
  $handler->display->display_options['fields']['nid']['label'] = 'nid';
  /* Field: Content: Plan Image */
  $handler->display->display_options['fields']['field_plan_image']['id'] = 'field_plan_image';
  $handler->display->display_options['fields']['field_plan_image']['table'] = 'field_data_field_plan_image';
  $handler->display->display_options['fields']['field_plan_image']['field'] = 'field_plan_image';
  $handler->display->display_options['fields']['field_plan_image']['label'] = 'image';
  $handler->display->display_options['fields']['field_plan_image']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_plan_image']['settings'] = array(
    'image_style' => '',
    'image_link' => '',
  );
  /* Field: Content: Plan Type */
  $handler->display->display_options['fields']['field_plan_type']['id'] = 'field_plan_type';
  $handler->display->display_options['fields']['field_plan_type']['table'] = 'field_data_field_plan_type';
  $handler->display->display_options['fields']['field_plan_type']['field'] = 'field_plan_type';
  $handler->display->display_options['fields']['field_plan_type']['label'] = 'type';
  /* Field: Content: Telco */
  $handler->display->display_options['fields']['field_telco']['id'] = 'field_telco';
  $handler->display->display_options['fields']['field_telco']['table'] = 'field_data_field_telco';
  $handler->display->display_options['fields']['field_telco']['field'] = 'field_telco';
  $handler->display->display_options['fields']['field_telco']['label'] = 'telco';
  $handler->display->display_options['fields']['field_telco']['settings'] = array(
    'link' => 0,
  );
  /* Sort criterion: Content: Title */
  $handler->display->display_options['sorts']['title']['id'] = 'title';
  $handler->display->display_options['sorts']['title']['table'] = 'node';
  $handler->display->display_options['sorts']['title']['field'] = 'title';
  $handler->display->display_options['sorts']['title']['order'] = 'DESC';
  /* Contextual filter: Taxonomy term: Term ID */
  $handler->display->display_options['arguments']['tid']['id'] = 'tid';
  $handler->display->display_options['arguments']['tid']['table'] = 'taxonomy_term_data';
  $handler->display->display_options['arguments']['tid']['field'] = 'tid';
  $handler->display->display_options['arguments']['tid']['relationship'] = 'field_telco_target_id';
  $handler->display->display_options['arguments']['tid']['default_argument_type'] = 'fixed';
  $handler->display->display_options['arguments']['tid']['summary']['number_of_records'] = '0';
  $handler->display->display_options['arguments']['tid']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['tid']['summary_options']['items_per_page'] = '25';
  $handler->display->display_options['arguments']['tid']['specify_validation'] = TRUE;
  $handler->display->display_options['arguments']['tid']['validate']['type'] = 'taxonomy_term';
  $handler->display->display_options['arguments']['tid']['validate_options']['vocabularies'] = array(
    'telco' => 'telco',
  );
  $handler->display->display_options['arguments']['tid']['validate']['fail'] = 'ignore';
  /* Contextual filter: Taxonomy term: Term ID */
  $handler->display->display_options['arguments']['tid_1']['id'] = 'tid_1';
  $handler->display->display_options['arguments']['tid_1']['table'] = 'taxonomy_term_data';
  $handler->display->display_options['arguments']['tid_1']['field'] = 'tid';
  $handler->display->display_options['arguments']['tid_1']['relationship'] = 'field_phone_target_id';
  $handler->display->display_options['arguments']['tid_1']['default_argument_type'] = 'fixed';
  $handler->display->display_options['arguments']['tid_1']['summary']['number_of_records'] = '0';
  $handler->display->display_options['arguments']['tid_1']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['tid_1']['summary_options']['items_per_page'] = '25';
  $handler->display->display_options['arguments']['tid_1']['specify_validation'] = TRUE;
  $handler->display->display_options['arguments']['tid_1']['validate']['type'] = 'taxonomy_term';
  $handler->display->display_options['arguments']['tid_1']['validate_options']['vocabularies'] = array(
    'phone' => 'phone',
  );
  $handler->display->display_options['arguments']['tid_1']['validate']['fail'] = 'ignore';
  /* Filter criterion: Content: Published */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = 1;
  $handler->display->display_options['filters']['status']['group'] = 1;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
  /* Filter criterion: Content: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'mobile_plan' => 'mobile_plan',
  );

  /* Display: Page */
  $handler = $view->new_display('page', 'Page', 'page');
  $handler->display->display_options['path'] = 'plans';
  $export['plans'] = $view;

  $view = new view();
  $view->name = 'telcos';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'taxonomy_term_data';
  $view->human_name = 'Telcos';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['access']['type'] = 'perm';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['pager']['type'] = 'none';
  $handler->display->display_options['style_plugin'] = 'views_json';
  $handler->display->display_options['style_options']['plaintext_output'] = 1;
  $handler->display->display_options['style_options']['remove_newlines'] = 1;
  $handler->display->display_options['style_options']['jsonp_prefix'] = 'callback';
  $handler->display->display_options['style_options']['using_views_api_mode'] = 0;
  $handler->display->display_options['style_options']['object_arrays'] = 0;
  $handler->display->display_options['style_options']['numeric_strings'] = 1;
  $handler->display->display_options['style_options']['bigint_string'] = 0;
  $handler->display->display_options['style_options']['pretty_print'] = 0;
  $handler->display->display_options['style_options']['unescaped_slashes'] = 0;
  $handler->display->display_options['style_options']['unescaped_unicode'] = 0;
  $handler->display->display_options['style_options']['char_encoding'] = array();
  /* Field: Taxonomy term: Name */
  $handler->display->display_options['fields']['name']['id'] = 'name';
  $handler->display->display_options['fields']['name']['table'] = 'taxonomy_term_data';
  $handler->display->display_options['fields']['name']['field'] = 'name';
  $handler->display->display_options['fields']['name']['label'] = '';
  $handler->display->display_options['fields']['name']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['name']['alter']['ellipsis'] = FALSE;
  $handler->display->display_options['fields']['name']['link_to_taxonomy'] = TRUE;
  /* Field: Taxonomy term: Term ID */
  $handler->display->display_options['fields']['tid']['id'] = 'tid';
  $handler->display->display_options['fields']['tid']['table'] = 'taxonomy_term_data';
  $handler->display->display_options['fields']['tid']['field'] = 'tid';
  $handler->display->display_options['fields']['tid']['label'] = '';
  $handler->display->display_options['fields']['tid']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['tid']['element_default_classes'] = FALSE;
  /* Filter criterion: Taxonomy vocabulary: Machine name */
  $handler->display->display_options['filters']['machine_name']['id'] = 'machine_name';
  $handler->display->display_options['filters']['machine_name']['table'] = 'taxonomy_vocabulary';
  $handler->display->display_options['filters']['machine_name']['field'] = 'machine_name';
  $handler->display->display_options['filters']['machine_name']['value'] = array(
    'telco' => 'telco',
  );

  /* Display: Page */
  $handler = $view->new_display('page', 'Page', 'page');
  $handler->display->display_options['path'] = 'telcos';
  $export['telcos'] = $view;

  return $export;
}
