<?php
/**
 * @file
 * views_view.order_line_item_data.inc
 */

$api = '2.0.0';

$data = $view = new view();
$view->name = 'order_line_item_data';
$view->description = '';
$view->tag = 'default';
$view->base_table = 'commerce_line_item';
$view->human_name = 'Order line item data';
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
$handler->display->display_options['pager']['options']['offset'] = '0';
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
/* Relationship: Commerce Line item: Referenced products */
$handler->display->display_options['relationships']['commerce_product_product_id']['id'] = 'commerce_product_product_id';
$handler->display->display_options['relationships']['commerce_product_product_id']['table'] = 'field_data_commerce_product';
$handler->display->display_options['relationships']['commerce_product_product_id']['field'] = 'commerce_product_product_id';
$handler->display->display_options['relationships']['commerce_product_product_id']['required'] = TRUE;
/* Field: Commerce Line Item: Line item ID */
$handler->display->display_options['fields']['line_item_id']['id'] = 'line_item_id';
$handler->display->display_options['fields']['line_item_id']['table'] = 'commerce_line_item';
$handler->display->display_options['fields']['line_item_id']['field'] = 'line_item_id';
$handler->display->display_options['fields']['line_item_id']['label'] = 'line_item_id';
$handler->display->display_options['fields']['line_item_id']['element_label_colon'] = FALSE;
$handler->display->display_options['fields']['line_item_id']['separator'] = '';
/* Field: Commerce Line Item: Order ID */
$handler->display->display_options['fields']['order_id']['id'] = 'order_id';
$handler->display->display_options['fields']['order_id']['table'] = 'commerce_line_item';
$handler->display->display_options['fields']['order_id']['field'] = 'order_id';
$handler->display->display_options['fields']['order_id']['label'] = 'order_id';
$handler->display->display_options['fields']['order_id']['element_label_colon'] = FALSE;
/* Field: Commerce Line Item: Quantity */
$handler->display->display_options['fields']['quantity']['id'] = 'quantity';
$handler->display->display_options['fields']['quantity']['table'] = 'commerce_line_item';
$handler->display->display_options['fields']['quantity']['field'] = 'quantity';
$handler->display->display_options['fields']['quantity']['label'] = 'quantity';
$handler->display->display_options['fields']['quantity']['precision'] = '0';
$handler->display->display_options['fields']['quantity']['separator'] = '';
/* Field: Commerce Line item: Months */
$handler->display->display_options['fields']['product_with_dimensions_1']['id'] = 'product_with_dimensions_1';
$handler->display->display_options['fields']['product_with_dimensions_1']['table'] = 'field_data_product_with_dimensions_1';
$handler->display->display_options['fields']['product_with_dimensions_1']['field'] = 'product_with_dimensions_1';
$handler->display->display_options['fields']['product_with_dimensions_1']['label'] = 'months';
$handler->display->display_options['fields']['product_with_dimensions_1']['alter']['alter_text'] = TRUE;
$handler->display->display_options['fields']['product_with_dimensions_1']['alter']['text'] = '[product_with_dimensions_1-length]';
/* Field: Commerce Line item: Unit price */
$handler->display->display_options['fields']['commerce_unit_price']['id'] = 'commerce_unit_price';
$handler->display->display_options['fields']['commerce_unit_price']['table'] = 'field_data_commerce_unit_price';
$handler->display->display_options['fields']['commerce_unit_price']['field'] = 'commerce_unit_price';
$handler->display->display_options['fields']['commerce_unit_price']['label'] = 'price';
$handler->display->display_options['fields']['commerce_unit_price']['click_sort_column'] = 'amount';
$handler->display->display_options['fields']['commerce_unit_price']['settings'] = array(
  'calculation' => FALSE,
);
/* Field: Commerce Line Item: Title */
$handler->display->display_options['fields']['line_item_title']['id'] = 'line_item_title';
$handler->display->display_options['fields']['line_item_title']['table'] = 'commerce_line_item';
$handler->display->display_options['fields']['line_item_title']['field'] = 'line_item_title';
$handler->display->display_options['fields']['line_item_title']['label'] = 'title';
$handler->display->display_options['fields']['line_item_title']['element_label_colon'] = FALSE;
/* Field: Commerce Product: SKU */
$handler->display->display_options['fields']['sku']['id'] = 'sku';
$handler->display->display_options['fields']['sku']['table'] = 'commerce_product';
$handler->display->display_options['fields']['sku']['field'] = 'sku';
$handler->display->display_options['fields']['sku']['relationship'] = 'commerce_product_product_id';
$handler->display->display_options['fields']['sku']['label'] = 'sku';
$handler->display->display_options['fields']['sku']['element_label_colon'] = FALSE;
$handler->display->display_options['fields']['sku']['link_to_product'] = 0;
/* Contextual filter: Commerce Line Item: Order ID */
$handler->display->display_options['arguments']['order_id']['id'] = 'order_id';
$handler->display->display_options['arguments']['order_id']['table'] = 'commerce_line_item';
$handler->display->display_options['arguments']['order_id']['field'] = 'order_id';
$handler->display->display_options['arguments']['order_id']['default_action'] = 'default';
$handler->display->display_options['arguments']['order_id']['default_argument_type'] = 'node';
$handler->display->display_options['arguments']['order_id']['summary']['number_of_records'] = '0';
$handler->display->display_options['arguments']['order_id']['summary']['format'] = 'default_summary';
$handler->display->display_options['arguments']['order_id']['summary_options']['items_per_page'] = '25';
$handler->display->display_options['arguments']['order_id']['validate']['type'] = 'numeric';
$handler->display->display_options['arguments']['order_id']['validate']['fail'] = 'empty';
/* Filter criterion: Commerce Line Item: Type */
$handler->display->display_options['filters']['type']['id'] = 'type';
$handler->display->display_options['filters']['type']['table'] = 'commerce_line_item';
$handler->display->display_options['filters']['type']['field'] = 'type';
$handler->display->display_options['filters']['type']['value'] = array(
  'product_with_dimensions_1' => 'product_with_dimensions_1',
  'product' => 'product',
);

/* Display: Page */
$handler = $view->new_display('page', 'Page', 'page_json');
$handler->display->display_options['path'] = 'admin/commerce/orders/%/line-items.json';


$dependencies = array();

$optional = array();

$modules = array(
  0 => 'views',
  1 => 'commerce_line_item',
  2 => 'dimension',
  3 => 'commerce_price',
);
