<?php
/**
 * @file
 * views_view.my_project_requests.inc
 */

$api = '2.0.0';

$data = $view = new view();
$view->name = 'my_project_requests';
$view->description = '';
$view->tag = 'default';
$view->base_table = 'node';
$view->human_name = 'My Project Requests';
$view->core = 7;
$view->api_version = '3.0';
$view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

/* Display: Master */
$handler = $view->new_display('default', 'Master', 'default');
$handler->display->display_options['title'] = 'My Project Requests';
$handler->display->display_options['use_more_always'] = FALSE;
$handler->display->display_options['access']['type'] = 'perm';
$handler->display->display_options['cache']['type'] = 'none';
$handler->display->display_options['query']['type'] = 'views_query';
$handler->display->display_options['exposed_form']['type'] = 'basic';
$handler->display->display_options['pager']['type'] = 'some';
$handler->display->display_options['pager']['options']['items_per_page'] = '5';
$handler->display->display_options['style_plugin'] = 'table';
/* No results behavior: Global: Text area */
$handler->display->display_options['empty']['area']['id'] = 'area';
$handler->display->display_options['empty']['area']['table'] = 'views';
$handler->display->display_options['empty']['area']['field'] = 'area';
$handler->display->display_options['empty']['area']['empty'] = TRUE;
$handler->display->display_options['empty']['area']['content'] = 'You currently do not have any Project Requests. <a href="/node/add/project-req">Click here to add a new Project Request</a>.';
$handler->display->display_options['empty']['area']['format'] = 'full_html';
/* Relationship: Content: Author */
$handler->display->display_options['relationships']['uid']['id'] = 'uid';
$handler->display->display_options['relationships']['uid']['table'] = 'node';
$handler->display->display_options['relationships']['uid']['field'] = 'uid';
$handler->display->display_options['relationships']['uid']['required'] = TRUE;
/* Field: Content: Title */
$handler->display->display_options['fields']['title']['id'] = 'title';
$handler->display->display_options['fields']['title']['table'] = 'node';
$handler->display->display_options['fields']['title']['field'] = 'title';
$handler->display->display_options['fields']['title']['label'] = 'Project Name';
$handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
$handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
/* Field: Content: Proposed three character customer code */
$handler->display->display_options['fields']['field_cust_code']['id'] = 'field_cust_code';
$handler->display->display_options['fields']['field_cust_code']['table'] = 'field_data_field_cust_code';
$handler->display->display_options['fields']['field_cust_code']['field'] = 'field_cust_code';
$handler->display->display_options['fields']['field_cust_code']['label'] = 'Application Code';
/* Field: Content: Credit limit */
$handler->display->display_options['fields']['field_credit_limit']['id'] = 'field_credit_limit';
$handler->display->display_options['fields']['field_credit_limit']['table'] = 'field_data_field_credit_limit';
$handler->display->display_options['fields']['field_credit_limit']['field'] = 'field_credit_limit';
$handler->display->display_options['fields']['field_credit_limit']['label'] = 'Budget';
$handler->display->display_options['fields']['field_credit_limit']['alter']['alter_text'] = TRUE;
$handler->display->display_options['fields']['field_credit_limit']['alter']['text'] = '$[field_credit_limit]';
$handler->display->display_options['fields']['field_credit_limit']['settings'] = array(
  'thousand_separator' => ',',
  'prefix_suffix' => 1,
);
/* Field: Content: Workflow State */
$handler->display->display_options['fields']['field_proj_req_state']['id'] = 'field_proj_req_state';
$handler->display->display_options['fields']['field_proj_req_state']['table'] = 'field_data_field_proj_req_state';
$handler->display->display_options['fields']['field_proj_req_state']['field'] = 'field_proj_req_state';
$handler->display->display_options['fields']['field_proj_req_state']['label'] = 'Status';
/* Field: Content: Edit link */
$handler->display->display_options['fields']['edit_node']['id'] = 'edit_node';
$handler->display->display_options['fields']['edit_node']['table'] = 'views_entity_node';
$handler->display->display_options['fields']['edit_node']['field'] = 'edit_node';
$handler->display->display_options['fields']['edit_node']['label'] = '';
$handler->display->display_options['fields']['edit_node']['element_class'] = 'button';
$handler->display->display_options['fields']['edit_node']['element_label_colon'] = FALSE;
$handler->display->display_options['fields']['edit_node']['element_default_classes'] = FALSE;
$handler->display->display_options['fields']['edit_node']['text'] = 'Edit Request Form';
/* Field: Content: Delete link */
$handler->display->display_options['fields']['delete_node']['id'] = 'delete_node';
$handler->display->display_options['fields']['delete_node']['table'] = 'views_entity_node';
$handler->display->display_options['fields']['delete_node']['field'] = 'delete_node';
$handler->display->display_options['fields']['delete_node']['label'] = '';
$handler->display->display_options['fields']['delete_node']['element_class'] = 'button';
$handler->display->display_options['fields']['delete_node']['element_label_colon'] = FALSE;
$handler->display->display_options['fields']['delete_node']['element_default_classes'] = FALSE;
$handler->display->display_options['fields']['delete_node']['text'] = 'Delete Request';
/* Sort criterion: Content: Post date */
$handler->display->display_options['sorts']['created']['id'] = 'created';
$handler->display->display_options['sorts']['created']['table'] = 'node';
$handler->display->display_options['sorts']['created']['field'] = 'created';
$handler->display->display_options['sorts']['created']['order'] = 'DESC';
/* Contextual filter: User: Uid */
$handler->display->display_options['arguments']['uid']['id'] = 'uid';
$handler->display->display_options['arguments']['uid']['table'] = 'users';
$handler->display->display_options['arguments']['uid']['field'] = 'uid';
$handler->display->display_options['arguments']['uid']['relationship'] = 'uid';
$handler->display->display_options['arguments']['uid']['default_action'] = 'default';
$handler->display->display_options['arguments']['uid']['default_argument_type'] = 'user';
$handler->display->display_options['arguments']['uid']['default_argument_options']['user'] = FALSE;
$handler->display->display_options['arguments']['uid']['summary']['number_of_records'] = '0';
$handler->display->display_options['arguments']['uid']['summary']['format'] = 'default_summary';
$handler->display->display_options['arguments']['uid']['summary_options']['items_per_page'] = '25';
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
  'project_req' => 'project_req',
);

/* Display: Block */
$handler = $view->new_display('block', 'Block', 'block');
$handler->display->display_options['defaults']['access'] = FALSE;
$handler->display->display_options['access']['type'] = 'role';
$handler->display->display_options['access']['role'] = array(
  2 => '2',
);

/* Display: Block - Admin */
$handler = $view->new_display('block', 'Block - Admin', 'block_1');
$handler->display->display_options['defaults']['title'] = FALSE;
$handler->display->display_options['title'] = 'Project Requests';
$handler->display->display_options['defaults']['access'] = FALSE;
$handler->display->display_options['access']['type'] = 'perm';
$handler->display->display_options['access']['perm'] = 'edit any project content';
$handler->display->display_options['defaults']['relationships'] = FALSE;
$handler->display->display_options['defaults']['arguments'] = FALSE;


$dependencies = array();

$optional = array();

$modules = array(
  0 => 'views',
  1 => 'node',
  2 => 'text',
  3 => 'number',
  4 => 'workflowfield',
);
