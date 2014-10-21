<?php
/**
 * @file
 * views_view.order_instance_data.inc
 */

$api = '2.0.0';

$data = $view = new view();
$view->name = 'order_instance_data';
$view->description = '';
$view->tag = 'default';
$view->base_table = 'node';
$view->human_name = 'Order instance data';
$view->core = 7;
$view->api_version = '3.0';
$view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

/* Display: Master */
$handler = $view->new_display('default', 'Master', 'default');
$handler->display->display_options['title'] = 'Order instance data';
$handler->display->display_options['use_more_always'] = FALSE;
$handler->display->display_options['access']['type'] = 'perm';
$handler->display->display_options['cache']['type'] = 'none';
$handler->display->display_options['query']['type'] = 'views_query';
$handler->display->display_options['exposed_form']['type'] = 'basic';
$handler->display->display_options['pager']['type'] = 'none';
$handler->display->display_options['style_plugin'] = 'views_json';
$handler->display->display_options['style_options']['root_object'] = '';
$handler->display->display_options['style_options']['top_child_object'] = '';
$handler->display->display_options['style_options']['plaintext_output'] = 1;
$handler->display->display_options['style_options']['remove_newlines'] = 1;
$handler->display->display_options['style_options']['jsonp_prefix'] = '';
$handler->display->display_options['style_options']['using_views_api_mode'] = 1;
$handler->display->display_options['style_options']['object_arrays'] = 0;
$handler->display->display_options['style_options']['numeric_strings'] = 0;
$handler->display->display_options['style_options']['bigint_string'] = 0;
$handler->display->display_options['style_options']['pretty_print'] = 0;
$handler->display->display_options['style_options']['unescaped_slashes'] = 0;
$handler->display->display_options['style_options']['unescaped_unicode'] = 0;
$handler->display->display_options['style_options']['char_encoding'] = array();
/* Relationship: Line Item */
$handler->display->display_options['relationships']['field_commerce_line_item_target_id']['id'] = 'field_commerce_line_item_target_id';
$handler->display->display_options['relationships']['field_commerce_line_item_target_id']['table'] = 'field_data_field_commerce_line_item';
$handler->display->display_options['relationships']['field_commerce_line_item_target_id']['field'] = 'field_commerce_line_item_target_id';
$handler->display->display_options['relationships']['field_commerce_line_item_target_id']['ui_name'] = 'Line Item';
$handler->display->display_options['relationships']['field_commerce_line_item_target_id']['label'] = 'Line Item';
$handler->display->display_options['relationships']['field_commerce_line_item_target_id']['required'] = TRUE;
/* Relationship: Commerce Line item: Referenced products */
$handler->display->display_options['relationships']['commerce_product_product_id']['id'] = 'commerce_product_product_id';
$handler->display->display_options['relationships']['commerce_product_product_id']['table'] = 'field_data_commerce_product';
$handler->display->display_options['relationships']['commerce_product_product_id']['field'] = 'commerce_product_product_id';
$handler->display->display_options['relationships']['commerce_product_product_id']['relationship'] = 'field_commerce_line_item_target_id';
$handler->display->display_options['relationships']['commerce_product_product_id']['label'] = 'Product';
$handler->display->display_options['relationships']['commerce_product_product_id']['required'] = TRUE;
/* Field: Content: Node UUID */
$handler->display->display_options['fields']['uuid']['id'] = 'uuid';
$handler->display->display_options['fields']['uuid']['table'] = 'node';
$handler->display->display_options['fields']['uuid']['field'] = 'uuid';
$handler->display->display_options['fields']['uuid']['label'] = 'mpuuid';
$handler->display->display_options['fields']['uuid']['element_label_colon'] = FALSE;
/* Field: Content: Nid */
$handler->display->display_options['fields']['nid']['id'] = 'nid';
$handler->display->display_options['fields']['nid']['table'] = 'node';
$handler->display->display_options['fields']['nid']['field'] = 'nid';
$handler->display->display_options['fields']['nid']['label'] = 'order_product_id';
$handler->display->display_options['fields']['nid']['element_label_colon'] = FALSE;
$handler->display->display_options['fields']['nid']['spaces'] = array(
  'type' => 'spaces_og',
  'frontpage' => 0,
);
/* Field: Commerce Product: SKU */
$handler->display->display_options['fields']['sku']['id'] = 'sku';
$handler->display->display_options['fields']['sku']['table'] = 'commerce_product';
$handler->display->display_options['fields']['sku']['field'] = 'sku';
$handler->display->display_options['fields']['sku']['relationship'] = 'commerce_product_product_id';
$handler->display->display_options['fields']['sku']['label'] = 'model';
$handler->display->display_options['fields']['sku']['element_label_colon'] = FALSE;
$handler->display->display_options['fields']['sku']['link_to_product'] = 0;
/* Field: Commerce Line item: Months */
$handler->display->display_options['fields']['product_with_dimensions_1']['id'] = 'product_with_dimensions_1';
$handler->display->display_options['fields']['product_with_dimensions_1']['table'] = 'field_data_product_with_dimensions_1';
$handler->display->display_options['fields']['product_with_dimensions_1']['field'] = 'product_with_dimensions_1';
$handler->display->display_options['fields']['product_with_dimensions_1']['relationship'] = 'field_commerce_line_item_target_id';
$handler->display->display_options['fields']['product_with_dimensions_1']['label'] = 'months';
$handler->display->display_options['fields']['product_with_dimensions_1']['alter']['alter_text'] = TRUE;
$handler->display->display_options['fields']['product_with_dimensions_1']['alter']['text'] = '[product_with_dimensions_1-length]';
$handler->display->display_options['fields']['product_with_dimensions_1']['element_label_colon'] = FALSE;
$handler->display->display_options['fields']['product_with_dimensions_1']['type'] = 'dimension_formatter_simple';
/* Field: Commerce Line Item: Quantity */
$handler->display->display_options['fields']['quantity']['id'] = 'quantity';
$handler->display->display_options['fields']['quantity']['table'] = 'commerce_line_item';
$handler->display->display_options['fields']['quantity']['field'] = 'quantity';
$handler->display->display_options['fields']['quantity']['relationship'] = 'field_commerce_line_item_target_id';
$handler->display->display_options['fields']['quantity']['label'] = 'quantity';
$handler->display->display_options['fields']['quantity']['element_label_colon'] = FALSE;
$handler->display->display_options['fields']['quantity']['precision'] = '0';
$handler->display->display_options['fields']['quantity']['separator'] = '';
/* Field: Content: Title */
$handler->display->display_options['fields']['title']['id'] = 'title';
$handler->display->display_options['fields']['title']['table'] = 'node';
$handler->display->display_options['fields']['title']['field'] = 'title';
$handler->display->display_options['fields']['title']['label'] = 'title';
$handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
$handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
$handler->display->display_options['fields']['title']['element_label_colon'] = FALSE;
/* Field: Commerce Product: Server Type */
$handler->display->display_options['fields']['field_server_type']['id'] = 'field_server_type';
$handler->display->display_options['fields']['field_server_type']['table'] = 'field_data_field_server_type';
$handler->display->display_options['fields']['field_server_type']['field'] = 'field_server_type';
$handler->display->display_options['fields']['field_server_type']['relationship'] = 'commerce_product_product_id';
$handler->display->display_options['fields']['field_server_type']['label'] = 'vm_apps';
/* Field: Commerce Product: Template */
$handler->display->display_options['fields']['field_template']['id'] = 'field_template';
$handler->display->display_options['fields']['field_template']['table'] = 'field_data_field_template';
$handler->display->display_options['fields']['field_template']['field'] = 'field_template';
$handler->display->display_options['fields']['field_template']['relationship'] = 'commerce_product_product_id';
$handler->display->display_options['fields']['field_template']['label'] = 'type';
/* Field: Commerce Product: Server Size */
$handler->display->display_options['fields']['field_server_size']['id'] = 'field_server_size';
$handler->display->display_options['fields']['field_server_size']['table'] = 'field_data_field_server_size';
$handler->display->display_options['fields']['field_server_size']['field'] = 'field_server_size';
$handler->display->display_options['fields']['field_server_size']['relationship'] = 'commerce_product_product_id';
$handler->display->display_options['fields']['field_server_size']['label'] = 'vm_size';
/* Field: Commerce Product: CPU */
$handler->display->display_options['fields']['field_cpu']['id'] = 'field_cpu';
$handler->display->display_options['fields']['field_cpu']['table'] = 'field_data_field_cpu';
$handler->display->display_options['fields']['field_cpu']['field'] = 'field_cpu';
$handler->display->display_options['fields']['field_cpu']['relationship'] = 'commerce_product_product_id';
$handler->display->display_options['fields']['field_cpu']['label'] = 'vm_cpu';
/* Field: Commerce Product: Memory */
$handler->display->display_options['fields']['field_memory']['id'] = 'field_memory';
$handler->display->display_options['fields']['field_memory']['table'] = 'field_data_field_memory';
$handler->display->display_options['fields']['field_memory']['field'] = 'field_memory';
$handler->display->display_options['fields']['field_memory']['relationship'] = 'commerce_product_product_id';
$handler->display->display_options['fields']['field_memory']['label'] = 'vm_memory';
/* Field: Commerce Product: Storage */
$handler->display->display_options['fields']['field_storage']['id'] = 'field_storage';
$handler->display->display_options['fields']['field_storage']['table'] = 'field_data_field_storage';
$handler->display->display_options['fields']['field_storage']['field'] = 'field_storage';
$handler->display->display_options['fields']['field_storage']['relationship'] = 'commerce_product_product_id';
$handler->display->display_options['fields']['field_storage']['label'] = 'vm_disk';
/* Field: Commerce Product: Operating System */
$handler->display->display_options['fields']['field_operating_system_ref']['id'] = 'field_operating_system_ref';
$handler->display->display_options['fields']['field_operating_system_ref']['table'] = 'field_data_field_operating_system_ref';
$handler->display->display_options['fields']['field_operating_system_ref']['field'] = 'field_operating_system_ref';
$handler->display->display_options['fields']['field_operating_system_ref']['relationship'] = 'commerce_product_product_id';
$handler->display->display_options['fields']['field_operating_system_ref']['label'] = 'vm_os';
/* Field: Commerce Product: Networking */
$handler->display->display_options['fields']['field_networking']['id'] = 'field_networking';
$handler->display->display_options['fields']['field_networking']['table'] = 'field_data_field_networking';
$handler->display->display_options['fields']['field_networking']['field'] = 'field_networking';
$handler->display->display_options['fields']['field_networking']['relationship'] = 'commerce_product_product_id';
$handler->display->display_options['fields']['field_networking']['label'] = 'vm_net';
/* Field: Commerce Product: Elasticity */
$handler->display->display_options['fields']['field_elasticity']['id'] = 'field_elasticity';
$handler->display->display_options['fields']['field_elasticity']['table'] = 'field_data_field_elasticity';
$handler->display->display_options['fields']['field_elasticity']['field'] = 'field_elasticity';
$handler->display->display_options['fields']['field_elasticity']['relationship'] = 'commerce_product_product_id';
$handler->display->display_options['fields']['field_elasticity']['label'] = 'elasticity';
/* Field: Content: FISMA Classification */
$handler->display->display_options['fields']['field_fisma_class']['id'] = 'field_fisma_class';
$handler->display->display_options['fields']['field_fisma_class']['table'] = 'field_data_field_fisma_class';
$handler->display->display_options['fields']['field_fisma_class']['field'] = 'field_fisma_class';
$handler->display->display_options['fields']['field_fisma_class']['label'] = 'security_level';
/* Sort criterion: Commerce Line Item: Line item ID */
$handler->display->display_options['sorts']['line_item_id']['id'] = 'line_item_id';
$handler->display->display_options['sorts']['line_item_id']['table'] = 'commerce_line_item';
$handler->display->display_options['sorts']['line_item_id']['field'] = 'line_item_id';
$handler->display->display_options['sorts']['line_item_id']['relationship'] = 'field_commerce_line_item_target_id';
/* Sort criterion: Content: Node UUID */
$handler->display->display_options['sorts']['uuid']['id'] = 'uuid';
$handler->display->display_options['sorts']['uuid']['table'] = 'node';
$handler->display->display_options['sorts']['uuid']['field'] = 'uuid';
/* Contextual filter: Commerce Line Item: Order ID */
$handler->display->display_options['arguments']['order_id']['id'] = 'order_id';
$handler->display->display_options['arguments']['order_id']['table'] = 'commerce_line_item';
$handler->display->display_options['arguments']['order_id']['field'] = 'order_id';
$handler->display->display_options['arguments']['order_id']['relationship'] = 'field_commerce_line_item_target_id';
$handler->display->display_options['arguments']['order_id']['default_action'] = 'default';
$handler->display->display_options['arguments']['order_id']['default_argument_type'] = 'node';
$handler->display->display_options['arguments']['order_id']['summary']['number_of_records'] = '0';
$handler->display->display_options['arguments']['order_id']['summary']['format'] = 'default_summary';
$handler->display->display_options['arguments']['order_id']['summary_options']['items_per_page'] = '25';
/* Filter criterion: Content: Published */
$handler->display->display_options['filters']['status']['id'] = 'status';
$handler->display->display_options['filters']['status']['table'] = 'node';
$handler->display->display_options['filters']['status']['field'] = 'status';
$handler->display->display_options['filters']['status']['value'] = 1;
$handler->display->display_options['filters']['status']['group'] = 1;
$handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;

/* Display: Page */
$handler = $view->new_display('page', 'Page', 'page_json');
$handler->display->display_options['path'] = 'admin/commerce/orders/%/instances.json';


$dependencies = array();

$optional = array();

$modules = array(
  0 => 'views',
  1 => 'node',
  2 => 'dimension',
  3 => 'taxonomy',
  4 => 'text',
  5 => 'list',
);
