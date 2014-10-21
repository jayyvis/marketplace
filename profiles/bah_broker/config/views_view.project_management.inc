<?php
/**
 * @file
 * views_view.project_management.inc
 */

$api = '2.0.0';

$data = $view = new view();
$view->name = 'project_management';
$view->description = '';
$view->tag = 'default';
$view->base_table = 'node';
$view->human_name = 'Project Management';
$view->core = 7;
$view->api_version = '3.0';
$view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

/* Display: Master */
$handler = $view->new_display('default', 'Master', 'default');
$handler->display->display_options['title'] = 'Project Management';
$handler->display->display_options['use_more_always'] = FALSE;
$handler->display->display_options['access']['type'] = 'perm';
$handler->display->display_options['cache']['type'] = 'none';
$handler->display->display_options['query']['type'] = 'views_query';
$handler->display->display_options['exposed_form']['type'] = 'basic';
$handler->display->display_options['pager']['type'] = 'full';
$handler->display->display_options['pager']['options']['items_per_page'] = '25';
$handler->display->display_options['style_plugin'] = 'table';
$handler->display->display_options['style_options']['columns'] = array(
  'title' => 'title',
  'og_credits' => 'og_credits',
  'created' => 'created',
  'edit_node' => 'edit_node',
);
$handler->display->display_options['style_options']['default'] = 'created';
$handler->display->display_options['style_options']['info'] = array(
  'title' => array(
    'sortable' => 1,
    'default_sort_order' => 'asc',
    'align' => '',
    'separator' => '',
    'empty_column' => 0,
  ),
  'og_credits' => array(
    'sortable' => 1,
    'default_sort_order' => 'asc',
    'align' => '',
    'separator' => '',
    'empty_column' => 0,
  ),
  'created' => array(
    'sortable' => 1,
    'default_sort_order' => 'asc',
    'align' => '',
    'separator' => '',
    'empty_column' => 0,
  ),
  'edit_node' => array(
    'align' => '',
    'separator' => '',
    'empty_column' => 0,
  ),
);
/* Header: Global: Text area */
$handler->display->display_options['header']['area']['id'] = 'area';
$handler->display->display_options['header']['area']['table'] = 'views';
$handler->display->display_options['header']['area']['field'] = 'area';
$handler->display->display_options['header']['area']['empty'] = TRUE;
$handler->display->display_options['header']['area']['content'] = '<a href="/node/add/project-req" class="button">Create a new Project Request</a>';
$handler->display->display_options['header']['area']['format'] = 'full_html';
/* Field: Content: Title */
$handler->display->display_options['fields']['title']['id'] = 'title';
$handler->display->display_options['fields']['title']['table'] = 'node';
$handler->display->display_options['fields']['title']['field'] = 'title';
$handler->display->display_options['fields']['title']['label'] = 'Project Name';
$handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
$handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
/* Field: Content: Organic Group Credit */
$handler->display->display_options['fields']['og_credits']['id'] = 'og_credits';
$handler->display->display_options['fields']['og_credits']['table'] = 'field_data_og_credits';
$handler->display->display_options['fields']['og_credits']['field'] = 'og_credits';
$handler->display->display_options['fields']['og_credits']['label'] = 'Available Credit';
/* Field: Content: Post date */
$handler->display->display_options['fields']['created']['id'] = 'created';
$handler->display->display_options['fields']['created']['table'] = 'node';
$handler->display->display_options['fields']['created']['field'] = 'created';
$handler->display->display_options['fields']['created']['label'] = 'Date created';
$handler->display->display_options['fields']['created']['date_format'] = 'short';
$handler->display->display_options['fields']['created']['second_date_format'] = 'long';
/* Field: Content: Edit link */
$handler->display->display_options['fields']['edit_node']['id'] = 'edit_node';
$handler->display->display_options['fields']['edit_node']['table'] = 'views_entity_node';
$handler->display->display_options['fields']['edit_node']['field'] = 'edit_node';
$handler->display->display_options['fields']['edit_node']['label'] = 'Edit';
/* Sort criterion: Content: Post date */
$handler->display->display_options['sorts']['created']['id'] = 'created';
$handler->display->display_options['sorts']['created']['table'] = 'node';
$handler->display->display_options['sorts']['created']['field'] = 'created';
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
  'project' => 'project',
);

/* Display: Projects */
$handler = $view->new_display('page', 'Projects', 'page');
$handler->display->display_options['path'] = 'project-management-2';
$handler->display->display_options['menu']['title'] = 'Project Management';
$handler->display->display_options['menu']['weight'] = '0';
$handler->display->display_options['menu']['name'] = 'user-menu';
$handler->display->display_options['menu']['context'] = 0;
$handler->display->display_options['menu']['context_only_inline'] = 0;
$handler->display->display_options['tab_options']['type'] = 'normal';
$handler->display->display_options['tab_options']['title'] = 'Project Management';
$handler->display->display_options['tab_options']['weight'] = '0';
$handler->display->display_options['tab_options']['name'] = 'user-menu';

/* Display: Project Requests */
$handler = $view->new_display('page', 'Project Requests', 'page_1');
$handler->display->display_options['defaults']['title'] = FALSE;
$handler->display->display_options['title'] = 'Project Requests';
$handler->display->display_options['enabled'] = FALSE;
$handler->display->display_options['defaults']['fields'] = FALSE;
/* Field: Content: Title */
$handler->display->display_options['fields']['title']['id'] = 'title';
$handler->display->display_options['fields']['title']['table'] = 'node';
$handler->display->display_options['fields']['title']['field'] = 'title';
$handler->display->display_options['fields']['title']['label'] = 'Project Name';
$handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
$handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
/* Field: Content: Credit limit */
$handler->display->display_options['fields']['field_credit_limit']['id'] = 'field_credit_limit';
$handler->display->display_options['fields']['field_credit_limit']['table'] = 'field_data_field_credit_limit';
$handler->display->display_options['fields']['field_credit_limit']['field'] = 'field_credit_limit';
$handler->display->display_options['fields']['field_credit_limit']['settings'] = array(
  'thousand_separator' => ',',
  'prefix_suffix' => 1,
);
/* Field: Content: Post date */
$handler->display->display_options['fields']['created']['id'] = 'created';
$handler->display->display_options['fields']['created']['table'] = 'node';
$handler->display->display_options['fields']['created']['field'] = 'created';
$handler->display->display_options['fields']['created']['label'] = 'Date created';
$handler->display->display_options['fields']['created']['date_format'] = 'short';
$handler->display->display_options['fields']['created']['second_date_format'] = 'long';
/* Field: Workflow current: Current state */
$handler->display->display_options['fields']['sid']['id'] = 'sid';
$handler->display->display_options['fields']['sid']['table'] = 'workflow_node_current';
$handler->display->display_options['fields']['sid']['field'] = 'sid';
$handler->display->display_options['fields']['sid']['label'] = 'Workflow state';
/* Field: Content: Edit link */
$handler->display->display_options['fields']['edit_node']['id'] = 'edit_node';
$handler->display->display_options['fields']['edit_node']['table'] = 'views_entity_node';
$handler->display->display_options['fields']['edit_node']['field'] = 'edit_node';
$handler->display->display_options['fields']['edit_node']['label'] = 'Edit';
$handler->display->display_options['defaults']['filter_groups'] = FALSE;
$handler->display->display_options['defaults']['filters'] = FALSE;
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
/* Filter criterion: Workflow current: Current state */
$handler->display->display_options['filters']['sid']['id'] = 'sid';
$handler->display->display_options['filters']['sid']['table'] = 'workflow_node_current';
$handler->display->display_options['filters']['sid']['field'] = 'sid';
$handler->display->display_options['filters']['sid']['operator'] = 'not in';
$handler->display->display_options['filters']['sid']['value'] = array(
  6 => '6',
);
$handler->display->display_options['filters']['sid']['expose']['workflow_reduce_wid'] = FALSE;
$handler->display->display_options['path'] = 'project-requests';
$handler->display->display_options['menu']['title'] = 'Project Requests';
$handler->display->display_options['menu']['weight'] = '2';
$handler->display->display_options['menu']['name'] = 'user-menu';
$handler->display->display_options['menu']['context'] = 0;
$handler->display->display_options['menu']['context_only_inline'] = 0;
$handler->display->display_options['tab_options']['type'] = 'normal';
$handler->display->display_options['tab_options']['title'] = 'Project Management';
$handler->display->display_options['tab_options']['weight'] = '0';
$handler->display->display_options['tab_options']['name'] = 'user-menu';

/* Display: ProjReq Attachment */
$handler = $view->new_display('attachment', 'ProjReq Attachment', 'attachment_1');
$handler->display->display_options['defaults']['title'] = FALSE;
$handler->display->display_options['title'] = 'Project Requests';
$handler->display->display_options['pager']['type'] = 'some';
$handler->display->display_options['defaults']['header'] = FALSE;
$handler->display->display_options['defaults']['filter_groups'] = FALSE;
$handler->display->display_options['defaults']['filters'] = FALSE;
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
/* Filter criterion: Content: Workflow State (field_proj_req_state) */
$handler->display->display_options['filters']['field_proj_req_state_value']['id'] = 'field_proj_req_state_value';
$handler->display->display_options['filters']['field_proj_req_state_value']['table'] = 'field_data_field_proj_req_state';
$handler->display->display_options['filters']['field_proj_req_state_value']['field'] = 'field_proj_req_state_value';
$handler->display->display_options['filters']['field_proj_req_state_value']['operator'] = '!=';
$handler->display->display_options['filters']['field_proj_req_state_value']['value']['value'] = 'Active';
$handler->display->display_options['displays'] = array(
  'page' => 'page',
  'default' => 0,
  'page_1' => 0,
);

/* Display: Projects Block */
$handler = $view->new_display('block', 'Projects Block', 'block_1');
$handler->display->display_options['defaults']['title'] = FALSE;
$handler->display->display_options['title'] = 'Projects';
$handler->display->display_options['defaults']['header'] = FALSE;
$handler->display->display_options['defaults']['fields'] = FALSE;
/* Field: Content: Title */
$handler->display->display_options['fields']['title']['id'] = 'title';
$handler->display->display_options['fields']['title']['table'] = 'node';
$handler->display->display_options['fields']['title']['field'] = 'title';
$handler->display->display_options['fields']['title']['label'] = 'Project Name';
$handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
$handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
/* Field: Content: Application Code */
$handler->display->display_options['fields']['field_app_code']['id'] = 'field_app_code';
$handler->display->display_options['fields']['field_app_code']['table'] = 'field_data_field_app_code';
$handler->display->display_options['fields']['field_app_code']['field'] = 'field_app_code';
/* Field: Content: Organic Group Credit */
$handler->display->display_options['fields']['og_credits']['id'] = 'og_credits';
$handler->display->display_options['fields']['og_credits']['table'] = 'field_data_og_credits';
$handler->display->display_options['fields']['og_credits']['field'] = 'og_credits';
$handler->display->display_options['fields']['og_credits']['label'] = 'Funding';
/* Field: Global: Custom text */
$handler->display->display_options['fields']['nothing']['id'] = 'nothing';
$handler->display->display_options['fields']['nothing']['table'] = 'views';
$handler->display->display_options['fields']['nothing']['field'] = 'nothing';
$handler->display->display_options['fields']['nothing']['label'] = '';
$handler->display->display_options['fields']['nothing']['alter']['text'] = '<a href="/catalog-links">Purchase Services</a>';
$handler->display->display_options['fields']['nothing']['element_class'] = 'button';
$handler->display->display_options['fields']['nothing']['element_label_colon'] = FALSE;
$handler->display->display_options['fields']['nothing']['element_default_classes'] = FALSE;
/* Field: Content: Edit link */
$handler->display->display_options['fields']['edit_node']['id'] = 'edit_node';
$handler->display->display_options['fields']['edit_node']['table'] = 'views_entity_node';
$handler->display->display_options['fields']['edit_node']['field'] = 'edit_node';
$handler->display->display_options['fields']['edit_node']['label'] = 'Edit';
$handler->display->display_options['fields']['edit_node']['exclude'] = TRUE;
$handler->display->display_options['fields']['edit_node']['element_class'] = 'button';
/* Field: Content: Post date */
$handler->display->display_options['fields']['created']['id'] = 'created';
$handler->display->display_options['fields']['created']['table'] = 'node';
$handler->display->display_options['fields']['created']['field'] = 'created';
$handler->display->display_options['fields']['created']['label'] = 'Date created';
$handler->display->display_options['fields']['created']['exclude'] = TRUE;
$handler->display->display_options['fields']['created']['date_format'] = 'short';
$handler->display->display_options['fields']['created']['second_date_format'] = 'long';


$dependencies = array();

$optional = array();

$modules = array(
  0 => 'views',
  1 => 'node',
  2 => 'text',
  3 => 'number',
);
