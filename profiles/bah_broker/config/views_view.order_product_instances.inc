<?php
/**
 * @file
 * views_view.order_product_instances.inc
 */

$api = '2.0.0';

$data = $view = new view();
$view->name = 'order_product_instances';
$view->description = '';
$view->tag = 'default';
$view->base_table = 'commerce_line_item';
$view->human_name = 'Order - Product Instances';
$view->core = 7;
$view->api_version = '3.0';
$view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

/* Display: Master */
$handler = $view->new_display('default', 'Master', 'default');
$handler->display->display_options['title'] = 'Project - Product Instances';
$handler->display->display_options['use_more_always'] = FALSE;
$handler->display->display_options['access']['type'] = 'none';
$handler->display->display_options['cache']['type'] = 'none';
$handler->display->display_options['query']['type'] = 'views_query';
$handler->display->display_options['exposed_form']['type'] = 'basic';
$handler->display->display_options['pager']['type'] = 'some';
$handler->display->display_options['pager']['options']['items_per_page'] = '5';
$handler->display->display_options['style_plugin'] = 'table';
/* Field: Commerce Line Item: Line item ID */
$handler->display->display_options['fields']['line_item_id']['id'] = 'line_item_id';
$handler->display->display_options['fields']['line_item_id']['table'] = 'commerce_line_item';
$handler->display->display_options['fields']['line_item_id']['field'] = 'line_item_id';
/* Field: Commerce Line Item: Title */
$handler->display->display_options['fields']['line_item_title']['id'] = 'line_item_title';
$handler->display->display_options['fields']['line_item_title']['table'] = 'commerce_line_item';
$handler->display->display_options['fields']['line_item_title']['field'] = 'line_item_title';
/* Field: Commerce Line Item: Quantity */
$handler->display->display_options['fields']['quantity']['id'] = 'quantity';
$handler->display->display_options['fields']['quantity']['table'] = 'commerce_line_item';
$handler->display->display_options['fields']['quantity']['field'] = 'quantity';
$handler->display->display_options['fields']['quantity']['precision'] = '0';
/* Field: Commerce Line item: Unit price */
$handler->display->display_options['fields']['commerce_unit_price']['id'] = 'commerce_unit_price';
$handler->display->display_options['fields']['commerce_unit_price']['table'] = 'field_data_commerce_unit_price';
$handler->display->display_options['fields']['commerce_unit_price']['field'] = 'commerce_unit_price';
$handler->display->display_options['fields']['commerce_unit_price']['click_sort_column'] = 'amount';
$handler->display->display_options['fields']['commerce_unit_price']['settings'] = array(
  'calculation' => FALSE,
);
/* Contextual filter: Commerce Line Item: Order ID */
$handler->display->display_options['arguments']['order_id']['id'] = 'order_id';
$handler->display->display_options['arguments']['order_id']['table'] = 'commerce_line_item';
$handler->display->display_options['arguments']['order_id']['field'] = 'order_id';
$handler->display->display_options['arguments']['order_id']['default_action'] = 'default';
$handler->display->display_options['arguments']['order_id']['default_argument_type'] = 'node';
$handler->display->display_options['arguments']['order_id']['summary']['number_of_records'] = '0';
$handler->display->display_options['arguments']['order_id']['summary']['format'] = 'default_summary';
$handler->display->display_options['arguments']['order_id']['summary_options']['items_per_page'] = '25';

/* Display: Block */
$handler = $view->new_display('block', 'Block', 'block');


$dependencies = array();

$optional = array();

$modules = array(
  0 => 'views',
  1 => 'commerce_line_item',
  2 => 'commerce_price',
);
