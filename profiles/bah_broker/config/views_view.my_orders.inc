<?php
/**
 * @file
 * views_view.my_orders.inc
 */

$api = '2.0.0';

$data = $view = new view();
$view->name = 'my_orders';
$view->description = '';
$view->tag = 'default';
$view->base_table = 'commerce_order';
$view->human_name = 'My Orders';
$view->core = 7;
$view->api_version = '3.0';
$view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

/* Display: Master */
$handler = $view->new_display('default', 'Master', 'default');
$handler->display->display_options['title'] = 'My Orders';
$handler->display->display_options['use_more_always'] = FALSE;
$handler->display->display_options['access']['type'] = 'perm';
$handler->display->display_options['cache']['type'] = 'none';
$handler->display->display_options['query']['type'] = 'views_query';
$handler->display->display_options['query']['options']['distinct'] = TRUE;
$handler->display->display_options['query']['options']['pure_distinct'] = TRUE;
$handler->display->display_options['exposed_form']['type'] = 'basic';
$handler->display->display_options['pager']['type'] = 'full';
$handler->display->display_options['pager']['options']['items_per_page'] = '10';
$handler->display->display_options['style_plugin'] = 'default';
$handler->display->display_options['style_options']['grouping'] = array(
  0 => array(
    'field' => 'title',
    'rendered' => 1,
    'rendered_strip' => 0,
  ),
);
$handler->display->display_options['row_plugin'] = 'fields';
/* Relationship: Project */
$handler->display->display_options['relationships']['og_membership_related_node_group']['id'] = 'og_membership_related_node_group';
$handler->display->display_options['relationships']['og_membership_related_node_group']['table'] = 'og_membership';
$handler->display->display_options['relationships']['og_membership_related_node_group']['field'] = 'og_membership_related_node_group';
$handler->display->display_options['relationships']['og_membership_related_node_group']['ui_name'] = 'Project';
$handler->display->display_options['relationships']['og_membership_related_node_group']['label'] = 'Project';
$handler->display->display_options['relationships']['og_membership_related_node_group']['required'] = TRUE;
/* Relationship: OG membership */
$handler->display->display_options['relationships']['og_membership_rel_group']['id'] = 'og_membership_rel_group';
$handler->display->display_options['relationships']['og_membership_rel_group']['table'] = 'node';
$handler->display->display_options['relationships']['og_membership_rel_group']['field'] = 'og_membership_rel_group';
$handler->display->display_options['relationships']['og_membership_rel_group']['relationship'] = 'og_membership_related_node_group';
$handler->display->display_options['relationships']['og_membership_rel_group']['ui_name'] = 'OG membership';
$handler->display->display_options['relationships']['og_membership_rel_group']['label'] = 'OG membership';
$handler->display->display_options['relationships']['og_membership_rel_group']['required'] = TRUE;
/* Relationship: Project User */
$handler->display->display_options['relationships']['og_membership_related_user']['id'] = 'og_membership_related_user';
$handler->display->display_options['relationships']['og_membership_related_user']['table'] = 'og_membership';
$handler->display->display_options['relationships']['og_membership_related_user']['field'] = 'og_membership_related_user';
$handler->display->display_options['relationships']['og_membership_related_user']['relationship'] = 'og_membership_rel_group';
$handler->display->display_options['relationships']['og_membership_related_user']['ui_name'] = 'Project User';
$handler->display->display_options['relationships']['og_membership_related_user']['label'] = 'Project User';
$handler->display->display_options['relationships']['og_membership_related_user']['required'] = TRUE;
/* Relationship: Line items */
$handler->display->display_options['relationships']['commerce_line_items_line_item_id']['id'] = 'commerce_line_items_line_item_id';
$handler->display->display_options['relationships']['commerce_line_items_line_item_id']['table'] = 'field_data_commerce_line_items';
$handler->display->display_options['relationships']['commerce_line_items_line_item_id']['field'] = 'commerce_line_items_line_item_id';
$handler->display->display_options['relationships']['commerce_line_items_line_item_id']['ui_name'] = 'Line items';
$handler->display->display_options['relationships']['commerce_line_items_line_item_id']['label'] = 'Line items';
$handler->display->display_options['relationships']['commerce_line_items_line_item_id']['required'] = TRUE;
/* Relationship: Instance */
$handler->display->display_options['relationships']['reverse_field_commerce_line_item_node']['id'] = 'reverse_field_commerce_line_item_node';
$handler->display->display_options['relationships']['reverse_field_commerce_line_item_node']['table'] = 'commerce_line_item';
$handler->display->display_options['relationships']['reverse_field_commerce_line_item_node']['field'] = 'reverse_field_commerce_line_item_node';
$handler->display->display_options['relationships']['reverse_field_commerce_line_item_node']['relationship'] = 'commerce_line_items_line_item_id';
$handler->display->display_options['relationships']['reverse_field_commerce_line_item_node']['ui_name'] = 'Instance';
$handler->display->display_options['relationships']['reverse_field_commerce_line_item_node']['label'] = 'Instance';
$handler->display->display_options['relationships']['reverse_field_commerce_line_item_node']['required'] = TRUE;
/* Field: Content: Nid */
$handler->display->display_options['fields']['nid']['id'] = 'nid';
$handler->display->display_options['fields']['nid']['table'] = 'node';
$handler->display->display_options['fields']['nid']['field'] = 'nid';
$handler->display->display_options['fields']['nid']['relationship'] = 'og_membership_related_node_group';
$handler->display->display_options['fields']['nid']['label'] = '';
$handler->display->display_options['fields']['nid']['exclude'] = TRUE;
$handler->display->display_options['fields']['nid']['element_label_colon'] = FALSE;
/* Field: Content: Title */
$handler->display->display_options['fields']['title']['id'] = 'title';
$handler->display->display_options['fields']['title']['table'] = 'node';
$handler->display->display_options['fields']['title']['field'] = 'title';
$handler->display->display_options['fields']['title']['relationship'] = 'og_membership_related_node_group';
$handler->display->display_options['fields']['title']['label'] = '';
$handler->display->display_options['fields']['title']['exclude'] = TRUE;
$handler->display->display_options['fields']['title']['element_label_colon'] = FALSE;
/* Field: Commerce Order: Created date */
$handler->display->display_options['fields']['created']['id'] = 'created';
$handler->display->display_options['fields']['created']['table'] = 'commerce_order';
$handler->display->display_options['fields']['created']['field'] = 'created';
$handler->display->display_options['fields']['created']['label'] = '';
$handler->display->display_options['fields']['created']['exclude'] = TRUE;
$handler->display->display_options['fields']['created']['element_label_colon'] = FALSE;
$handler->display->display_options['fields']['created']['date_format'] = 'short';
$handler->display->display_options['fields']['created']['second_date_format'] = 'long';
/* Field: Commerce Order: Order ID */
$handler->display->display_options['fields']['order_id']['id'] = 'order_id';
$handler->display->display_options['fields']['order_id']['table'] = 'commerce_order';
$handler->display->display_options['fields']['order_id']['field'] = 'order_id';
$handler->display->display_options['fields']['order_id']['label'] = '';
$handler->display->display_options['fields']['order_id']['alter']['alter_text'] = TRUE;
$handler->display->display_options['fields']['order_id']['alter']['text'] = 'Order #[order_id] - [created]';
$handler->display->display_options['fields']['order_id']['element_label_colon'] = FALSE;
$handler->display->display_options['fields']['order_id']['link_to_order'] = 'customer';
/* Field: Content: Rendered Node */
$handler->display->display_options['fields']['rendered_entity']['id'] = 'rendered_entity';
$handler->display->display_options['fields']['rendered_entity']['table'] = 'views_entity_node';
$handler->display->display_options['fields']['rendered_entity']['field'] = 'rendered_entity';
$handler->display->display_options['fields']['rendered_entity']['relationship'] = 'reverse_field_commerce_line_item_node';
$handler->display->display_options['fields']['rendered_entity']['label'] = '';
$handler->display->display_options['fields']['rendered_entity']['element_label_colon'] = FALSE;
$handler->display->display_options['fields']['rendered_entity']['link_to_entity'] = 1;
$handler->display->display_options['fields']['rendered_entity']['display'] = 'view';
$handler->display->display_options['fields']['rendered_entity']['view_mode'] = 'full';
$handler->display->display_options['fields']['rendered_entity']['bypass_access'] = 0;
/* Contextual filter: User: Uid */
$handler->display->display_options['arguments']['uid']['id'] = 'uid';
$handler->display->display_options['arguments']['uid']['table'] = 'users';
$handler->display->display_options['arguments']['uid']['field'] = 'uid';
$handler->display->display_options['arguments']['uid']['relationship'] = 'og_membership_related_user';
$handler->display->display_options['arguments']['uid']['default_action'] = 'default';
$handler->display->display_options['arguments']['uid']['default_argument_type'] = 'user';
$handler->display->display_options['arguments']['uid']['default_argument_options']['user'] = FALSE;
$handler->display->display_options['arguments']['uid']['summary']['number_of_records'] = '0';
$handler->display->display_options['arguments']['uid']['summary']['format'] = 'default_summary';
$handler->display->display_options['arguments']['uid']['summary_options']['items_per_page'] = '25';

/* Display: Page */
$handler = $view->new_display('page', 'Page', 'page');
$handler->display->display_options['path'] = 'user/%/my-orders';

/* Display: Block */
$handler = $view->new_display('block', 'Block', 'block');
$handler->display->display_options['defaults']['pager'] = FALSE;
$handler->display->display_options['pager']['type'] = 'none';
$handler->display->display_options['pager']['options']['offset'] = '0';


$dependencies = array();

$optional = array();

$modules = array(
  0 => 'views',
  1 => 'commerce_order',
);
