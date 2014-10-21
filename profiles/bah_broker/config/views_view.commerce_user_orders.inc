<?php
/**
 * @file
 * views_view.commerce_user_orders.inc
 */

$api = '2.0.0';

$data = $view = new view();
$view->name = 'commerce_user_orders';
$view->description = 'Display a list of completed orders for a user.';
$view->tag = 'commerce';
$view->base_table = 'commerce_order';
$view->human_name = 'User orders';
$view->core = 7;
$view->api_version = '3.0';
$view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

/* Display: Defaults */
$handler = $view->new_display('default', 'Defaults', 'default');
$handler->display->display_options['title'] = 'My Orders';
$handler->display->display_options['use_more_always'] = FALSE;
$handler->display->display_options['access']['type'] = 'perm';
$handler->display->display_options['access']['perm'] = 'view own commerce_order entities';
$handler->display->display_options['cache']['type'] = 'none';
$handler->display->display_options['query']['type'] = 'views_query';
$handler->display->display_options['query']['options']['query_comment'] = FALSE;
$handler->display->display_options['exposed_form']['type'] = 'better_exposed_filters';
$handler->display->display_options['exposed_form']['options']['bef'] = array(
  'general' => array(
    'allow_secondary' => 0,
    'secondary_label' => 'Advanced options',
  ),
  'field_project_reference_target_id' => array(
    'bef_format' => 'default',
    'slider_options' => array(
      'bef_slider_min' => '0',
      'bef_slider_max' => '99999',
      'bef_slider_step' => '1',
      'bef_slider_animate' => '',
      'bef_slider_orientation' => 'horizontal',
    ),
    'more_options' => array(
      'is_secondary' => 0,
      'any_label' => '',
      'bef_filter_description' => '',
      'tokens' => array(
        'available' => array(
          0 => 'global_types',
        ),
      ),
      'rewrite' => array(
        'filter_rewrite_values' => '',
      ),
    ),
  ),
);
$handler->display->display_options['exposed_form']['options']['input_required'] = 0;
$handler->display->display_options['exposed_form']['options']['text_input_required_format'] = 'filtered_html';
$handler->display->display_options['pager']['type'] = 'full';
$handler->display->display_options['pager']['options']['items_per_page'] = 25;
$handler->display->display_options['style_plugin'] = 'table';
$handler->display->display_options['style_options']['columns'] = array(
  'order_number' => 'order_number',
  'created' => 'created',
  'changed' => 'changed',
  'commerce_order_total' => 'commerce_order_total',
  'status' => 'status',
  'field_project_reference' => 'field_project_reference',
);
$handler->display->display_options['style_options']['default'] = 'order_number';
$handler->display->display_options['style_options']['info'] = array(
  'order_number' => array(
    'sortable' => 1,
    'default_sort_order' => 'desc',
    'align' => '',
    'separator' => '',
    'empty_column' => 0,
  ),
  'created' => array(
    'sortable' => 1,
    'default_sort_order' => 'desc',
    'align' => '',
    'separator' => '',
    'empty_column' => 0,
  ),
  'changed' => array(
    'sortable' => 1,
    'default_sort_order' => 'desc',
    'align' => '',
    'separator' => '',
    'empty_column' => 0,
  ),
  'commerce_order_total' => array(
    'sortable' => 0,
    'default_sort_order' => 'asc',
    'align' => '',
    'separator' => '',
    'empty_column' => 0,
  ),
  'status' => array(
    'sortable' => 1,
    'default_sort_order' => 'asc',
    'align' => '',
    'separator' => '',
    'empty_column' => 0,
  ),
  'field_project_reference' => array(
    'sortable' => 0,
    'default_sort_order' => 'asc',
    'align' => '',
    'separator' => '',
    'empty_column' => 0,
  ),
);
/* No results behavior: Global: Text area */
$handler->display->display_options['empty']['text']['id'] = 'text';
$handler->display->display_options['empty']['text']['table'] = 'views';
$handler->display->display_options['empty']['text']['field'] = 'area';
$handler->display->display_options['empty']['text']['content'] = 'You have not placed any orders with us yet.';
$handler->display->display_options['empty']['text']['format'] = 'plain_text';
/* Relationship: Broken/missing handler */
$handler->display->display_options['relationships']['reverse_field_order_product_reference_node']['id'] = 'reverse_field_order_product_reference_node';
$handler->display->display_options['relationships']['reverse_field_order_product_reference_node']['table'] = 'commerce_order';
$handler->display->display_options['relationships']['reverse_field_order_product_reference_node']['field'] = 'reverse_field_order_product_reference_node';
$handler->display->display_options['relationships']['reverse_field_order_product_reference_node']['label'] = 'Content referencing Commerce Order from field_order_product_reference';
/* Relationship: Commerce Order: Referenced line items */
$handler->display->display_options['relationships']['commerce_line_items_line_item_id']['id'] = 'commerce_line_items_line_item_id';
$handler->display->display_options['relationships']['commerce_line_items_line_item_id']['table'] = 'field_data_commerce_line_items';
$handler->display->display_options['relationships']['commerce_line_items_line_item_id']['field'] = 'commerce_line_items_line_item_id';
$handler->display->display_options['relationships']['commerce_line_items_line_item_id']['required'] = TRUE;
/* Field: Commerce Order: Order number */
$handler->display->display_options['fields']['order_number']['id'] = 'order_number';
$handler->display->display_options['fields']['order_number']['table'] = 'commerce_order';
$handler->display->display_options['fields']['order_number']['field'] = 'order_number';
$handler->display->display_options['fields']['order_number']['link_to_order'] = 'customer';
/* Field: Broken/missing handler */
$handler->display->display_options['fields']['field_project_reference']['id'] = 'field_project_reference';
$handler->display->display_options['fields']['field_project_reference']['table'] = 'field_data_field_project_reference';
$handler->display->display_options['fields']['field_project_reference']['field'] = 'field_project_reference';
$handler->display->display_options['fields']['field_project_reference']['relationship'] = 'reverse_field_order_product_reference_node';
$handler->display->display_options['fields']['field_project_reference']['label'] = 'Project';
/* Field: Commerce Line item: Months */
$handler->display->display_options['fields']['commerce_product']['id'] = 'commerce_product';
$handler->display->display_options['fields']['commerce_product']['table'] = 'field_data_commerce_product';
$handler->display->display_options['fields']['commerce_product']['field'] = 'commerce_product';
$handler->display->display_options['fields']['commerce_product']['relationship'] = 'commerce_line_items_line_item_id';
$handler->display->display_options['fields']['commerce_product']['label'] = 'Item';
$handler->display->display_options['fields']['commerce_product']['type'] = 'commerce_product_reference_title_plain';
$handler->display->display_options['fields']['commerce_product']['settings'] = array(
  'show_quantity' => 0,
  'default_quantity' => '1',
  'combine' => 1,
  'show_single_product_attributes' => 0,
  'line_item_type' => 'product',
);
/* Field: Broken/missing handler */
$handler->display->display_options['fields']['field_status']['id'] = 'field_status';
$handler->display->display_options['fields']['field_status']['table'] = 'field_data_field_status';
$handler->display->display_options['fields']['field_status']['field'] = 'field_status';
$handler->display->display_options['fields']['field_status']['relationship'] = 'reverse_field_order_product_reference_node';
$handler->display->display_options['fields']['field_status']['label'] = 'Status';
/* Field: Commerce Order: Updated date */
$handler->display->display_options['fields']['changed']['id'] = 'changed';
$handler->display->display_options['fields']['changed']['table'] = 'commerce_order';
$handler->display->display_options['fields']['changed']['field'] = 'changed';
$handler->display->display_options['fields']['changed']['date_format'] = 'short_no_time';
$handler->display->display_options['fields']['changed']['second_date_format'] = 'long';
/* Contextual filter: Commerce Order: Uid */
$handler->display->display_options['arguments']['uid_1']['id'] = 'uid_1';
$handler->display->display_options['arguments']['uid_1']['table'] = 'commerce_order';
$handler->display->display_options['arguments']['uid_1']['field'] = 'uid';
$handler->display->display_options['arguments']['uid_1']['default_action'] = 'not found';
$handler->display->display_options['arguments']['uid_1']['default_argument_type'] = 'fixed';
$handler->display->display_options['arguments']['uid_1']['summary']['number_of_records'] = '0';
$handler->display->display_options['arguments']['uid_1']['summary']['format'] = 'default_summary';
$handler->display->display_options['arguments']['uid_1']['summary_options']['items_per_page'] = '25';
$handler->display->display_options['arguments']['uid_1']['specify_validation'] = TRUE;
$handler->display->display_options['arguments']['uid_1']['validate']['type'] = 'current_user_or_role';
$handler->display->display_options['arguments']['uid_1']['validate_options']['restrict_roles'] = TRUE;
$handler->display->display_options['arguments']['uid_1']['validate_options']['roles'] = array(
  3 => '3',
);
/* Filter criterion: Commerce Order: Order state */
$handler->display->display_options['filters']['state']['id'] = 'state';
$handler->display->display_options['filters']['state']['table'] = 'commerce_order';
$handler->display->display_options['filters']['state']['field'] = 'state';
$handler->display->display_options['filters']['state']['operator'] = 'not in';
$handler->display->display_options['filters']['state']['value'] = array(
  'cart' => 'cart',
  'checkout' => 'checkout',
);
/* Filter criterion: Broken/missing handler */
$handler->display->display_options['filters']['field_project_reference_target_id']['id'] = 'field_project_reference_target_id';
$handler->display->display_options['filters']['field_project_reference_target_id']['table'] = 'field_data_field_project_reference';
$handler->display->display_options['filters']['field_project_reference_target_id']['field'] = 'field_project_reference_target_id';
$handler->display->display_options['filters']['field_project_reference_target_id']['relationship'] = 'reverse_field_order_product_reference_node';
$handler->display->display_options['filters']['field_project_reference_target_id']['value'] = array(
  'min' => '',
  'max' => '',
  'value' => '',
);
$handler->display->display_options['filters']['field_project_reference_target_id']['exposed'] = TRUE;
$handler->display->display_options['filters']['field_project_reference_target_id']['expose']['operator_id'] = 'field_project_reference_target_id_op';
$handler->display->display_options['filters']['field_project_reference_target_id']['expose']['label'] = 'Project';
$handler->display->display_options['filters']['field_project_reference_target_id']['expose']['operator'] = 'field_project_reference_target_id_op';
$handler->display->display_options['filters']['field_project_reference_target_id']['expose']['identifier'] = 'field_project_reference_target_id';
$handler->display->display_options['filters']['field_project_reference_target_id']['expose']['remember_roles'] = array(
  2 => '2',
  1 => 0,
  3 => 0,
);
/* Filter criterion: Commerce Order: Order status */
$handler->display->display_options['filters']['status']['id'] = 'status';
$handler->display->display_options['filters']['status']['table'] = 'commerce_order';
$handler->display->display_options['filters']['status']['field'] = 'status';
$handler->display->display_options['filters']['status']['value'] = array(
  'completed' => 'completed',
);

/* Display: User Orders */
$handler = $view->new_display('page', 'User Orders', 'order_page');
$handler->display->display_options['path'] = 'user/%/orders';
$handler->display->display_options['menu']['type'] = 'tab';
$handler->display->display_options['menu']['title'] = 'Orders';
$handler->display->display_options['menu']['weight'] = '15';
$handler->display->display_options['tab_options']['type'] = 'normal';
$handler->display->display_options['tab_options']['title'] = 'Orders';
$handler->display->display_options['tab_options']['description'] = 'User orders in the store.';
$handler->display->display_options['tab_options']['weight'] = '';
$handler->display->display_options['tab_options']['name'] = 'user-menu';

/* Display: Block */
$handler = $view->new_display('block', 'Block', 'block_1');


$dependencies = array();

$optional = array();

$modules = array(
  0 => 'views',
  1 => 'commerce_order',
  2 => 'commerce_product_reference',
);
