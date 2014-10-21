<?php
/**
 * @file
 * views_view.project_product_instances.inc
 */

$api = '2.0.0';

$data = $view = new view();
$view->name = 'project_product_instances';
$view->description = '';
$view->tag = 'default';
$view->base_table = 'node';
$view->human_name = 'Project - Product Instances';
$view->core = 7;
$view->api_version = '3.0';
$view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

/* Display: Master */
$handler = $view->new_display('default', 'Master', 'default');
$handler->display->display_options['title'] = 'Project Orders';
$handler->display->display_options['use_more_always'] = FALSE;
$handler->display->display_options['access']['type'] = 'perm';
$handler->display->display_options['access']['perm'] = 'create project_req content';
$handler->display->display_options['cache']['type'] = 'none';
$handler->display->display_options['query']['type'] = 'views_query';
$handler->display->display_options['exposed_form']['type'] = 'basic';
$handler->display->display_options['pager']['type'] = 'full';
$handler->display->display_options['pager']['options']['items_per_page'] = '10';
$handler->display->display_options['pager']['options']['offset'] = '0';
$handler->display->display_options['pager']['options']['id'] = '0';
$handler->display->display_options['pager']['options']['quantity'] = '9';
$handler->display->display_options['style_plugin'] = 'list';
$handler->display->display_options['style_options']['grouping'] = array(
  0 => array(
    'field' => 'order_id',
    'rendered' => 1,
    'rendered_strip' => 0,
  ),
);
$handler->display->display_options['row_plugin'] = 'fields';
/* No results behavior: Global: Text area */
$handler->display->display_options['empty']['area']['id'] = 'area';
$handler->display->display_options['empty']['area']['table'] = 'views';
$handler->display->display_options['empty']['area']['field'] = 'area';
$handler->display->display_options['empty']['area']['empty'] = TRUE;
$handler->display->display_options['empty']['area']['content'] = 'There are no Orders associated with this Project.';
$handler->display->display_options['empty']['area']['format'] = 'filtered_html';
/* Relationship: Line Item */
$handler->display->display_options['relationships']['field_commerce_line_item_target_id']['id'] = 'field_commerce_line_item_target_id';
$handler->display->display_options['relationships']['field_commerce_line_item_target_id']['table'] = 'field_data_field_commerce_line_item';
$handler->display->display_options['relationships']['field_commerce_line_item_target_id']['field'] = 'field_commerce_line_item_target_id';
$handler->display->display_options['relationships']['field_commerce_line_item_target_id']['ui_name'] = 'Line Item';
$handler->display->display_options['relationships']['field_commerce_line_item_target_id']['label'] = 'Line Item';
$handler->display->display_options['relationships']['field_commerce_line_item_target_id']['required'] = TRUE;
/* Relationship: Order */
$handler->display->display_options['relationships']['order_id']['id'] = 'order_id';
$handler->display->display_options['relationships']['order_id']['table'] = 'commerce_line_item';
$handler->display->display_options['relationships']['order_id']['field'] = 'order_id';
$handler->display->display_options['relationships']['order_id']['relationship'] = 'field_commerce_line_item_target_id';
$handler->display->display_options['relationships']['order_id']['ui_name'] = 'Order';
$handler->display->display_options['relationships']['order_id']['required'] = TRUE;
/* Relationship: OG Membership */
$handler->display->display_options['relationships']['og_membership_rel']['id'] = 'og_membership_rel';
$handler->display->display_options['relationships']['og_membership_rel']['table'] = 'commerce_order';
$handler->display->display_options['relationships']['og_membership_rel']['field'] = 'og_membership_rel';
$handler->display->display_options['relationships']['og_membership_rel']['relationship'] = 'order_id';
$handler->display->display_options['relationships']['og_membership_rel']['ui_name'] = 'OG Membership';
$handler->display->display_options['relationships']['og_membership_rel']['label'] = 'OG Membership';
$handler->display->display_options['relationships']['og_membership_rel']['required'] = TRUE;
/* Relationship: Group */
$handler->display->display_options['relationships']['og_membership_related_node_group']['id'] = 'og_membership_related_node_group';
$handler->display->display_options['relationships']['og_membership_related_node_group']['table'] = 'og_membership';
$handler->display->display_options['relationships']['og_membership_related_node_group']['field'] = 'og_membership_related_node_group';
$handler->display->display_options['relationships']['og_membership_related_node_group']['relationship'] = 'og_membership_rel';
$handler->display->display_options['relationships']['og_membership_related_node_group']['ui_name'] = 'Group';
$handler->display->display_options['relationships']['og_membership_related_node_group']['label'] = 'Group';
$handler->display->display_options['relationships']['og_membership_related_node_group']['required'] = TRUE;
/* Field: Commerce Order: Created date */
$handler->display->display_options['fields']['created']['id'] = 'created';
$handler->display->display_options['fields']['created']['table'] = 'commerce_order';
$handler->display->display_options['fields']['created']['field'] = 'created';
$handler->display->display_options['fields']['created']['relationship'] = 'order_id';
$handler->display->display_options['fields']['created']['exclude'] = TRUE;
$handler->display->display_options['fields']['created']['date_format'] = 'long';
$handler->display->display_options['fields']['created']['second_date_format'] = 'long';
/* Field: Commerce Order: Order status */
$handler->display->display_options['fields']['status']['id'] = 'status';
$handler->display->display_options['fields']['status']['table'] = 'commerce_order';
$handler->display->display_options['fields']['status']['field'] = 'status';
$handler->display->display_options['fields']['status']['relationship'] = 'order_id';
$handler->display->display_options['fields']['status']['exclude'] = TRUE;
/* Field: Commerce Order: Order ID */
$handler->display->display_options['fields']['order_id']['id'] = 'order_id';
$handler->display->display_options['fields']['order_id']['table'] = 'commerce_order';
$handler->display->display_options['fields']['order_id']['field'] = 'order_id';
$handler->display->display_options['fields']['order_id']['relationship'] = 'order_id';
$handler->display->display_options['fields']['order_id']['label'] = '';
$handler->display->display_options['fields']['order_id']['exclude'] = TRUE;
$handler->display->display_options['fields']['order_id']['alter']['alter_text'] = TRUE;
$handler->display->display_options['fields']['order_id']['alter']['text'] = 'Order [order_id] - Status: [status] - [created]';
$handler->display->display_options['fields']['order_id']['element_type'] = 'div';
$handler->display->display_options['fields']['order_id']['element_class'] = 'collapsible';
$handler->display->display_options['fields']['order_id']['element_label_colon'] = FALSE;
/* Field: Content: Rendered Node */
$handler->display->display_options['fields']['rendered_entity']['id'] = 'rendered_entity';
$handler->display->display_options['fields']['rendered_entity']['table'] = 'views_entity_node';
$handler->display->display_options['fields']['rendered_entity']['field'] = 'rendered_entity';
$handler->display->display_options['fields']['rendered_entity']['label'] = '';
$handler->display->display_options['fields']['rendered_entity']['element_label_colon'] = FALSE;
$handler->display->display_options['fields']['rendered_entity']['link_to_entity'] = 0;
$handler->display->display_options['fields']['rendered_entity']['display'] = 'view';
$handler->display->display_options['fields']['rendered_entity']['view_mode'] = 'full';
$handler->display->display_options['fields']['rendered_entity']['bypass_access'] = 0;
/* Sort criterion: Commerce Order: Order ID */
$handler->display->display_options['sorts']['order_id']['id'] = 'order_id';
$handler->display->display_options['sorts']['order_id']['table'] = 'commerce_order';
$handler->display->display_options['sorts']['order_id']['field'] = 'order_id';
$handler->display->display_options['sorts']['order_id']['relationship'] = 'order_id';
/* Sort criterion: Content: Post date */
$handler->display->display_options['sorts']['created']['id'] = 'created';
$handler->display->display_options['sorts']['created']['table'] = 'node';
$handler->display->display_options['sorts']['created']['field'] = 'created';
/* Contextual filter: Content: Nid */
$handler->display->display_options['arguments']['nid']['id'] = 'nid';
$handler->display->display_options['arguments']['nid']['table'] = 'node';
$handler->display->display_options['arguments']['nid']['field'] = 'nid';
$handler->display->display_options['arguments']['nid']['relationship'] = 'og_membership_related_node_group';
$handler->display->display_options['arguments']['nid']['default_action'] = 'default';
$handler->display->display_options['arguments']['nid']['default_argument_type'] = 'node';
$handler->display->display_options['arguments']['nid']['summary']['number_of_records'] = '0';
$handler->display->display_options['arguments']['nid']['summary']['format'] = 'default_summary';
$handler->display->display_options['arguments']['nid']['summary_options']['items_per_page'] = '25';
/* Filter criterion: Content: Published */
$handler->display->display_options['filters']['status']['id'] = 'status';
$handler->display->display_options['filters']['status']['table'] = 'node';
$handler->display->display_options['filters']['status']['field'] = 'status';
$handler->display->display_options['filters']['status']['value'] = 1;
$handler->display->display_options['filters']['status']['group'] = 1;
$handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;

/* Display: Block */
$handler = $view->new_display('block', 'Block', 'block_1');
$handler->display->display_options['defaults']['header'] = FALSE;
/* Header: Global: Text area */
$handler->display->display_options['header']['area']['id'] = 'area';
$handler->display->display_options['header']['area']['table'] = 'views';
$handler->display->display_options['header']['area']['field'] = 'area';
$handler->display->display_options['header']['area']['content'] = '<a href="/project-management" class="button">Click here for management console</a>';
$handler->display->display_options['header']['area']['format'] = 'full_html';

/* Display: Block */
$handler = $view->new_display('block', 'Block', 'block_2');
$handler->display->display_options['defaults']['access'] = FALSE;
$handler->display->display_options['access']['type'] = 'role';
$handler->display->display_options['access']['role'] = array(
  3 => '3',
  2 => '2',
  5 => '5',
  6 => '6',
);
$handler->display->display_options['defaults']['style_plugin'] = FALSE;
$handler->display->display_options['style_plugin'] = 'views_accordion';
$handler->display->display_options['style_options']['grouping'] = array(
  0 => array(
    'field' => 'order_id',
    'rendered' => 1,
    'rendered_strip' => 0,
  ),
);
$handler->display->display_options['style_options']['use-grouping-header'] = 1;
$handler->display->display_options['style_options']['collapsible'] = 1;
$handler->display->display_options['style_options']['row-start-open'] = '0';
$handler->display->display_options['style_options']['autoheight'] = 0;
$handler->display->display_options['defaults']['style_options'] = FALSE;
$handler->display->display_options['defaults']['row_plugin'] = FALSE;
$handler->display->display_options['row_plugin'] = 'fields';
$handler->display->display_options['defaults']['row_options'] = FALSE;
$handler->display->display_options['defaults']['header'] = FALSE;
/* Header: Global: Text area */
$handler->display->display_options['header']['area']['id'] = 'area';
$handler->display->display_options['header']['area']['table'] = 'views';
$handler->display->display_options['header']['area']['field'] = 'area';
$handler->display->display_options['header']['area']['content'] = '<a href="/project-management" class="button">Click here for management console</a>';
$handler->display->display_options['header']['area']['format'] = 'full_html';


$dependencies = array();

$optional = array();

$modules = array(
  0 => 'views',
  1 => 'node',
);
