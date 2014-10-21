<?php
/**
 * @file
 * views_view.order_data.inc
 */

$api = '2.0.0';

$data = $view = new view();
$view->name = 'order_data';
$view->description = '';
$view->tag = 'default';
$view->base_table = 'commerce_order';
$view->human_name = 'Order data';
$view->core = 7;
$view->api_version = '3.0';
$view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

/* Display: Master */
$handler = $view->new_display('default', 'Master', 'default');
$handler->display->display_options['use_more_always'] = FALSE;
$handler->display->display_options['access']['type'] = 'perm';
$handler->display->display_options['access']['perm'] = 'view own commerce_order entities';
$handler->display->display_options['cache']['type'] = 'none';
$handler->display->display_options['query']['type'] = 'views_query';
$handler->display->display_options['exposed_form']['type'] = 'basic';
$handler->display->display_options['pager']['type'] = 'some';
$handler->display->display_options['pager']['options']['items_per_page'] = '1';
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
/* Relationship: OG membership: OG membership from Commerce Order */
$handler->display->display_options['relationships']['og_membership_rel']['id'] = 'og_membership_rel';
$handler->display->display_options['relationships']['og_membership_rel']['table'] = 'commerce_order';
$handler->display->display_options['relationships']['og_membership_rel']['field'] = 'og_membership_rel';
$handler->display->display_options['relationships']['og_membership_rel']['required'] = TRUE;
/* Relationship: Project */
$handler->display->display_options['relationships']['og_membership_related_node_group']['id'] = 'og_membership_related_node_group';
$handler->display->display_options['relationships']['og_membership_related_node_group']['table'] = 'og_membership';
$handler->display->display_options['relationships']['og_membership_related_node_group']['field'] = 'og_membership_related_node_group';
$handler->display->display_options['relationships']['og_membership_related_node_group']['relationship'] = 'og_membership_rel';
$handler->display->display_options['relationships']['og_membership_related_node_group']['ui_name'] = 'Project';
$handler->display->display_options['relationships']['og_membership_related_node_group']['label'] = 'Project';
$handler->display->display_options['relationships']['og_membership_related_node_group']['required'] = TRUE;
/* Relationship: Commerce Order: Owner */
$handler->display->display_options['relationships']['uid']['id'] = 'uid';
$handler->display->display_options['relationships']['uid']['table'] = 'commerce_order';
$handler->display->display_options['relationships']['uid']['field'] = 'uid';
$handler->display->display_options['relationships']['uid']['required'] = TRUE;
/* Field: Commerce Order: Order ID */
$handler->display->display_options['fields']['order_id']['id'] = 'order_id';
$handler->display->display_options['fields']['order_id']['table'] = 'commerce_order';
$handler->display->display_options['fields']['order_id']['field'] = 'order_id';
$handler->display->display_options['fields']['order_id']['label'] = 'order_id';
/* Field: User: First Name */
$handler->display->display_options['fields']['field_first_name']['id'] = 'field_first_name';
$handler->display->display_options['fields']['field_first_name']['table'] = 'field_data_field_first_name';
$handler->display->display_options['fields']['field_first_name']['field'] = 'field_first_name';
$handler->display->display_options['fields']['field_first_name']['relationship'] = 'uid';
$handler->display->display_options['fields']['field_first_name']['label'] = 'first_name';
/* Field: User: Last Name */
$handler->display->display_options['fields']['field_last_name']['id'] = 'field_last_name';
$handler->display->display_options['fields']['field_last_name']['table'] = 'field_data_field_last_name';
$handler->display->display_options['fields']['field_last_name']['field'] = 'field_last_name';
$handler->display->display_options['fields']['field_last_name']['relationship'] = 'uid';
$handler->display->display_options['fields']['field_last_name']['label'] = 'last_name';
/* Field: User: E-mail */
$handler->display->display_options['fields']['mail']['id'] = 'mail';
$handler->display->display_options['fields']['mail']['table'] = 'users';
$handler->display->display_options['fields']['mail']['field'] = 'mail';
$handler->display->display_options['fields']['mail']['relationship'] = 'uid';
$handler->display->display_options['fields']['mail']['label'] = 'email';
/* Field: Content: Application Code */
$handler->display->display_options['fields']['field_app_code']['id'] = 'field_app_code';
$handler->display->display_options['fields']['field_app_code']['table'] = 'field_data_field_app_code';
$handler->display->display_options['fields']['field_app_code']['field'] = 'field_app_code';
$handler->display->display_options['fields']['field_app_code']['relationship'] = 'og_membership_related_node_group';
$handler->display->display_options['fields']['field_app_code']['label'] = 'application_code';
$handler->display->display_options['fields']['field_app_code']['element_label_colon'] = FALSE;
$handler->display->display_options['fields']['field_app_code']['type'] = 'text_plain';
/* Field: Content: Production Application Campus: Choose Primary User Location */
$handler->display->display_options['fields']['field_appl_locn']['id'] = 'field_appl_locn';
$handler->display->display_options['fields']['field_appl_locn']['table'] = 'field_data_field_appl_locn';
$handler->display->display_options['fields']['field_appl_locn']['field'] = 'field_appl_locn';
$handler->display->display_options['fields']['field_appl_locn']['relationship'] = 'og_membership_related_node_group';
$handler->display->display_options['fields']['field_appl_locn']['label'] = 'location_code';
/* Field: Content: Will this project be run in production? */
$handler->display->display_options['fields']['field_appl_runinprod']['id'] = 'field_appl_runinprod';
$handler->display->display_options['fields']['field_appl_runinprod']['table'] = 'field_data_field_appl_runinprod';
$handler->display->display_options['fields']['field_appl_runinprod']['field'] = 'field_appl_runinprod';
$handler->display->display_options['fields']['field_appl_runinprod']['relationship'] = 'og_membership_related_node_group';
$handler->display->display_options['fields']['field_appl_runinprod']['label'] = 'vm_production';
/* Field: Placeholder for instances array */
$handler->display->display_options['fields']['nothing']['id'] = 'nothing';
$handler->display->display_options['fields']['nothing']['table'] = 'views';
$handler->display->display_options['fields']['nothing']['field'] = 'nothing';
$handler->display->display_options['fields']['nothing']['ui_name'] = 'Placeholder for instances array';
$handler->display->display_options['fields']['nothing']['label'] = 'instances';
$handler->display->display_options['fields']['nothing']['element_label_colon'] = FALSE;
/* Sort criterion: Commerce Order: Order ID */
$handler->display->display_options['sorts']['order_id']['id'] = 'order_id';
$handler->display->display_options['sorts']['order_id']['table'] = 'commerce_order';
$handler->display->display_options['sorts']['order_id']['field'] = 'order_id';
$handler->display->display_options['sorts']['order_id']['order'] = 'DESC';
/* Contextual filter: Commerce Order: Order ID */
$handler->display->display_options['arguments']['order_id']['id'] = 'order_id';
$handler->display->display_options['arguments']['order_id']['table'] = 'commerce_order';
$handler->display->display_options['arguments']['order_id']['field'] = 'order_id';
$handler->display->display_options['arguments']['order_id']['default_action'] = 'default';
$handler->display->display_options['arguments']['order_id']['default_argument_type'] = 'node';
$handler->display->display_options['arguments']['order_id']['summary']['number_of_records'] = '0';
$handler->display->display_options['arguments']['order_id']['summary']['format'] = 'default_summary';
$handler->display->display_options['arguments']['order_id']['summary_options']['items_per_page'] = '25';
$handler->display->display_options['arguments']['order_id']['validate']['type'] = 'numeric';
$handler->display->display_options['arguments']['order_id']['validate']['fail'] = 'empty';

/* Display: Page */
$handler = $view->new_display('page', 'Page', 'page_json');
$handler->display->display_options['path'] = 'admin/commerce/orders/%/order.json';


$dependencies = array();

$optional = array();

$modules = array(
  0 => 'views',
  1 => 'commerce_order',
  2 => 'text',
  3 => 'list',
);
