<?php
/**
 * @file
 * views_view.orders_per_project.inc
 */

$api = '2.0.0';

$data = $view = new view();
$view->name = 'orders_per_project';
$view->description = '';
$view->tag = 'default';
$view->base_table = 'commerce_order';
$view->human_name = 'Orders associated per Project';
$view->core = 7;
$view->api_version = '3.0';
$view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

/* Display: Master */
$handler = $view->new_display('default', 'Master', 'default');
$handler->display->display_options['title'] = 'Project Orders';
$handler->display->display_options['use_more_always'] = FALSE;
$handler->display->display_options['access']['type'] = 'none';
$handler->display->display_options['cache']['type'] = 'none';
$handler->display->display_options['query']['type'] = 'views_query';
$handler->display->display_options['exposed_form']['type'] = 'basic';
$handler->display->display_options['pager']['type'] = 'none';
$handler->display->display_options['pager']['options']['offset'] = '0';
$handler->display->display_options['style_plugin'] = 'list';
$handler->display->display_options['row_plugin'] = 'fields';
/* Header: Global: Text area */
$handler->display->display_options['header']['area']['id'] = 'area';
$handler->display->display_options['header']['area']['table'] = 'views';
$handler->display->display_options['header']['area']['field'] = 'area';
$handler->display->display_options['header']['area']['content'] = '<a href="/project-management" class="button">Click here for management console</a>';
$handler->display->display_options['header']['area']['format'] = 'full_html';
/* No results behavior: Global: Text area */
$handler->display->display_options['empty']['area']['id'] = 'area';
$handler->display->display_options['empty']['area']['table'] = 'views';
$handler->display->display_options['empty']['area']['field'] = 'area';
$handler->display->display_options['empty']['area']['empty'] = TRUE;
$handler->display->display_options['empty']['area']['content'] = 'There are no orders for this project. <a href="/catalog-links">Click here to visit the catalog</a>';
$handler->display->display_options['empty']['area']['format'] = 'full_html';
/* Relationship: Entity Reference: Referenced Entity */
$handler->display->display_options['relationships']['field_order_project_target_id']['id'] = 'field_order_project_target_id';
$handler->display->display_options['relationships']['field_order_project_target_id']['table'] = 'field_data_field_order_project';
$handler->display->display_options['relationships']['field_order_project_target_id']['field'] = 'field_order_project_target_id';
$handler->display->display_options['relationships']['field_order_project_target_id']['required'] = TRUE;
/* Field: Commerce Order: Created date */
$handler->display->display_options['fields']['created']['id'] = 'created';
$handler->display->display_options['fields']['created']['table'] = 'commerce_order';
$handler->display->display_options['fields']['created']['field'] = 'created';
$handler->display->display_options['fields']['created']['exclude'] = TRUE;
$handler->display->display_options['fields']['created']['date_format'] = 'long';
$handler->display->display_options['fields']['created']['second_date_format'] = 'long';
/* Field: Commerce Order: Order ID */
$handler->display->display_options['fields']['order_id']['id'] = 'order_id';
$handler->display->display_options['fields']['order_id']['table'] = 'commerce_order';
$handler->display->display_options['fields']['order_id']['field'] = 'order_id';
$handler->display->display_options['fields']['order_id']['label'] = '';
$handler->display->display_options['fields']['order_id']['exclude'] = TRUE;
$handler->display->display_options['fields']['order_id']['alter']['alter_text'] = TRUE;
$handler->display->display_options['fields']['order_id']['alter']['text'] = 'Order #[order_id] - [created]';
$handler->display->display_options['fields']['order_id']['element_label_colon'] = FALSE;
$handler->display->display_options['fields']['order_id']['link_to_order'] = 'customer';
/* Field: Global: Fieldset */
$handler->display->display_options['fields']['fieldset']['id'] = 'fieldset';
$handler->display->display_options['fields']['fieldset']['table'] = 'views';
$handler->display->display_options['fields']['fieldset']['field'] = 'fieldset';
$handler->display->display_options['fields']['fieldset']['alter']['alter_text'] = TRUE;
$handler->display->display_options['fields']['fieldset']['alter']['text'] = '[order_id]';
$handler->display->display_options['fields']['fieldset']['children'] = array(
  0 => 'commerce_order_total',
  1 => 'commerce_line_items',
  2 => 'status',
);
$handler->display->display_options['fields']['fieldset']['fieldset']['collapsible'] = 1;
/* Field: Commerce Order: Order total */
$handler->display->display_options['fields']['commerce_order_total']['id'] = 'commerce_order_total';
$handler->display->display_options['fields']['commerce_order_total']['table'] = 'field_data_commerce_order_total';
$handler->display->display_options['fields']['commerce_order_total']['field'] = 'commerce_order_total';
$handler->display->display_options['fields']['commerce_order_total']['exclude'] = TRUE;
$handler->display->display_options['fields']['commerce_order_total']['click_sort_column'] = 'amount';
$handler->display->display_options['fields']['commerce_order_total']['settings'] = array(
  'calculation' => FALSE,
);
/* Field: Commerce Order: Line items */
$handler->display->display_options['fields']['commerce_line_items']['id'] = 'commerce_line_items';
$handler->display->display_options['fields']['commerce_line_items']['table'] = 'field_data_commerce_line_items';
$handler->display->display_options['fields']['commerce_line_items']['field'] = 'commerce_line_items';
$handler->display->display_options['fields']['commerce_line_items']['label'] = '';
$handler->display->display_options['fields']['commerce_line_items']['element_label_colon'] = FALSE;
$handler->display->display_options['fields']['commerce_line_items']['settings'] = array(
  'view' => 'order_product_instances|block',
);
$handler->display->display_options['fields']['commerce_line_items']['delta_offset'] = '0';
/* Field: Commerce Order: Order status */
$handler->display->display_options['fields']['status']['id'] = 'status';
$handler->display->display_options['fields']['status']['table'] = 'commerce_order';
$handler->display->display_options['fields']['status']['field'] = 'status';
/* Sort criterion: Commerce Order: Created date */
$handler->display->display_options['sorts']['created']['id'] = 'created';
$handler->display->display_options['sorts']['created']['table'] = 'commerce_order';
$handler->display->display_options['sorts']['created']['field'] = 'created';
$handler->display->display_options['sorts']['created']['order'] = 'DESC';
/* Contextual filter: Content: Nid */
$handler->display->display_options['arguments']['nid']['id'] = 'nid';
$handler->display->display_options['arguments']['nid']['table'] = 'node';
$handler->display->display_options['arguments']['nid']['field'] = 'nid';
$handler->display->display_options['arguments']['nid']['relationship'] = 'field_order_project_target_id';
$handler->display->display_options['arguments']['nid']['default_action'] = 'default';
$handler->display->display_options['arguments']['nid']['default_argument_type'] = 'node';
$handler->display->display_options['arguments']['nid']['summary']['number_of_records'] = '0';
$handler->display->display_options['arguments']['nid']['summary']['format'] = 'default_summary';
$handler->display->display_options['arguments']['nid']['summary_options']['items_per_page'] = '25';
/* Filter criterion: Commerce Order: Order type */
$handler->display->display_options['filters']['type']['id'] = 'type';
$handler->display->display_options['filters']['type']['table'] = 'commerce_order';
$handler->display->display_options['filters']['type']['field'] = 'type';
$handler->display->display_options['filters']['type']['value'] = array(
  'commerce_order' => 'commerce_order',
);

/* Display: Block */
$handler = $view->new_display('block', 'Block', 'block');


$dependencies = array();

$optional = array();

$modules = array(
  0 => 'views',
  1 => 'commerce_order',
  2 => 'commerce_price',
  3 => 'commerce_line_item',
);
