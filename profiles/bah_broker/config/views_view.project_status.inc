<?php
/**
 * @file
 * views_view.project_status.inc
 */

$api = '2.0.0';

$data = $view = new view();
$view->name = 'project_status';
$view->description = '';
$view->tag = 'default';
$view->base_table = 'node';
$view->human_name = 'Project Status';
$view->core = 7;
$view->api_version = '3.0';
$view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

/* Display: Master */
$handler = $view->new_display('default', 'Master', 'default');
$handler->display->display_options['use_more_always'] = FALSE;
$handler->display->display_options['access']['type'] = 'perm';
$handler->display->display_options['cache']['type'] = 'none';
$handler->display->display_options['query']['type'] = 'views_query';
$handler->display->display_options['exposed_form']['type'] = 'basic';
$handler->display->display_options['pager']['type'] = 'none';
$handler->display->display_options['style_plugin'] = 'default';
$handler->display->display_options['row_plugin'] = 'fields';
/* Field: Content: Allocated Budget */
$handler->display->display_options['fields']['field_allocated_budget']['id'] = 'field_allocated_budget';
$handler->display->display_options['fields']['field_allocated_budget']['table'] = 'field_data_field_allocated_budget';
$handler->display->display_options['fields']['field_allocated_budget']['field'] = 'field_allocated_budget';
$handler->display->display_options['fields']['field_allocated_budget']['element_type'] = 'span';
$handler->display->display_options['fields']['field_allocated_budget']['element_label_type'] = 'span';
$handler->display->display_options['fields']['field_allocated_budget']['empty'] = '$0';
$handler->display->display_options['fields']['field_allocated_budget']['empty_zero'] = TRUE;
$handler->display->display_options['fields']['field_allocated_budget']['hide_alter_empty'] = FALSE;
/* Field: Content: Used Budget */
$handler->display->display_options['fields']['field_used_budget']['id'] = 'field_used_budget';
$handler->display->display_options['fields']['field_used_budget']['table'] = 'field_data_field_used_budget';
$handler->display->display_options['fields']['field_used_budget']['field'] = 'field_used_budget';
$handler->display->display_options['fields']['field_used_budget']['element_type'] = 'span';
$handler->display->display_options['fields']['field_used_budget']['element_label_type'] = 'span';
$handler->display->display_options['fields']['field_used_budget']['empty'] = '$0';
$handler->display->display_options['fields']['field_used_budget']['empty_zero'] = TRUE;
/* Field: Content: Months Remaining */
$handler->display->display_options['fields']['field_months_remaining']['id'] = 'field_months_remaining';
$handler->display->display_options['fields']['field_months_remaining']['table'] = 'field_data_field_months_remaining';
$handler->display->display_options['fields']['field_months_remaining']['field'] = 'field_months_remaining';
$handler->display->display_options['fields']['field_months_remaining']['element_type'] = 'span';
$handler->display->display_options['fields']['field_months_remaining']['element_label_type'] = 'span';
$handler->display->display_options['fields']['field_months_remaining']['empty'] = '0';
$handler->display->display_options['fields']['field_months_remaining']['empty_zero'] = TRUE;
/* Field: Content: Budget CSS */
$handler->display->display_options['fields']['field_budget_css']['id'] = 'field_budget_css';
$handler->display->display_options['fields']['field_budget_css']['table'] = 'field_data_field_budget_css';
$handler->display->display_options['fields']['field_budget_css']['field'] = 'field_budget_css';
$handler->display->display_options['fields']['field_budget_css']['label'] = '';
$handler->display->display_options['fields']['field_budget_css']['alter']['alter_text'] = TRUE;
$handler->display->display_options['fields']['field_budget_css']['alter']['text'] = '<div class="[field_budget_css-value]"></div>';
$handler->display->display_options['fields']['field_budget_css']['element_label_colon'] = FALSE;
$handler->display->display_options['fields']['field_budget_css']['empty'] = '<div class="na"></div>';
$handler->display->display_options['fields']['field_budget_css']['empty_zero'] = TRUE;
/* Contextual filter: Content: Nid */
$handler->display->display_options['arguments']['nid']['id'] = 'nid';
$handler->display->display_options['arguments']['nid']['table'] = 'node';
$handler->display->display_options['arguments']['nid']['field'] = 'nid';
$handler->display->display_options['arguments']['nid']['default_action'] = 'default';
$handler->display->display_options['arguments']['nid']['default_argument_type'] = 'node';
$handler->display->display_options['arguments']['nid']['summary']['number_of_records'] = '0';
$handler->display->display_options['arguments']['nid']['summary']['format'] = 'default_summary';
$handler->display->display_options['arguments']['nid']['summary_options']['items_per_page'] = '25';
/* Filter criterion: Content: Type */
$handler->display->display_options['filters']['type']['id'] = 'type';
$handler->display->display_options['filters']['type']['table'] = 'node';
$handler->display->display_options['filters']['type']['field'] = 'type';
$handler->display->display_options['filters']['type']['value'] = array(
  'project' => 'project',
);

/* Display: Budget Status */
$handler = $view->new_display('block', 'Budget Status', 'block_budget');
$handler->display->display_options['block_description'] = 'Budget Status';

/* Display: System Status */
$handler = $view->new_display('block', 'System Status', 'block_system');
$handler->display->display_options['defaults']['style_plugin'] = FALSE;
$handler->display->display_options['style_plugin'] = 'table';
$handler->display->display_options['style_options']['columns'] = array(
  'nothing' => 'nothing',
  'field_used_storage' => 'field_used_storage',
  'field_used_memory' => 'field_used_memory',
  'field_used_vcpu' => 'field_used_vcpu',
  'field_system_css' => 'field_system_css',
);
$handler->display->display_options['style_options']['default'] = '-1';
$handler->display->display_options['style_options']['info'] = array(
  'nothing' => array(
    'align' => '',
    'separator' => '',
    'empty_column' => 0,
  ),
  'field_used_storage' => array(
    'sortable' => 0,
    'default_sort_order' => 'asc',
    'align' => 'views-align-left',
    'separator' => '',
    'empty_column' => 0,
  ),
  'field_used_memory' => array(
    'sortable' => 0,
    'default_sort_order' => 'asc',
    'align' => 'views-align-left',
    'separator' => '',
    'empty_column' => 0,
  ),
  'field_used_vcpu' => array(
    'sortable' => 0,
    'default_sort_order' => 'asc',
    'align' => 'views-align-left',
    'separator' => '',
    'empty_column' => 0,
  ),
  'field_system_css' => array(
    'sortable' => 0,
    'default_sort_order' => 'asc',
    'align' => 'views-align-left',
    'separator' => '',
    'empty_column' => 0,
  ),
);
$handler->display->display_options['defaults']['style_options'] = FALSE;
$handler->display->display_options['defaults']['row_plugin'] = FALSE;
$handler->display->display_options['defaults']['row_options'] = FALSE;
$handler->display->display_options['defaults']['fields'] = FALSE;
/* Field: Global: Custom text */
$handler->display->display_options['fields']['nothing']['id'] = 'nothing';
$handler->display->display_options['fields']['nothing']['table'] = 'views';
$handler->display->display_options['fields']['nothing']['field'] = 'nothing';
$handler->display->display_options['fields']['nothing']['label'] = '';
$handler->display->display_options['fields']['nothing']['alter']['text'] = 'Purchased';
$handler->display->display_options['fields']['nothing']['element_type'] = 'strong';
$handler->display->display_options['fields']['nothing']['element_class'] = 'headerlabel';
$handler->display->display_options['fields']['nothing']['element_label_colon'] = FALSE;
/* Field: Content: Used Storage */
$handler->display->display_options['fields']['field_used_storage']['id'] = 'field_used_storage';
$handler->display->display_options['fields']['field_used_storage']['table'] = 'field_data_field_used_storage';
$handler->display->display_options['fields']['field_used_storage']['field'] = 'field_used_storage';
$handler->display->display_options['fields']['field_used_storage']['label'] = '';
$handler->display->display_options['fields']['field_used_storage']['element_class'] = 'data';
$handler->display->display_options['fields']['field_used_storage']['element_label_class'] = 'label';
$handler->display->display_options['fields']['field_used_storage']['element_label_colon'] = FALSE;
$handler->display->display_options['fields']['field_used_storage']['empty'] = 'N/A';
$handler->display->display_options['fields']['field_used_storage']['empty_zero'] = TRUE;
/* Field: Content: Used Memory */
$handler->display->display_options['fields']['field_used_memory']['id'] = 'field_used_memory';
$handler->display->display_options['fields']['field_used_memory']['table'] = 'field_data_field_used_memory';
$handler->display->display_options['fields']['field_used_memory']['field'] = 'field_used_memory';
$handler->display->display_options['fields']['field_used_memory']['label'] = '';
$handler->display->display_options['fields']['field_used_memory']['element_class'] = 'data';
$handler->display->display_options['fields']['field_used_memory']['element_label_class'] = 'label';
$handler->display->display_options['fields']['field_used_memory']['element_label_colon'] = FALSE;
$handler->display->display_options['fields']['field_used_memory']['empty'] = 'N/A';
$handler->display->display_options['fields']['field_used_memory']['empty_zero'] = TRUE;
/* Field: Content: Used vCPU */
$handler->display->display_options['fields']['field_used_vcpu']['id'] = 'field_used_vcpu';
$handler->display->display_options['fields']['field_used_vcpu']['table'] = 'field_data_field_used_vcpu';
$handler->display->display_options['fields']['field_used_vcpu']['field'] = 'field_used_vcpu';
$handler->display->display_options['fields']['field_used_vcpu']['label'] = '';
$handler->display->display_options['fields']['field_used_vcpu']['element_class'] = 'data';
$handler->display->display_options['fields']['field_used_vcpu']['element_label_class'] = 'label';
$handler->display->display_options['fields']['field_used_vcpu']['element_label_colon'] = FALSE;
$handler->display->display_options['fields']['field_used_vcpu']['empty'] = 'N/A';
$handler->display->display_options['fields']['field_used_vcpu']['empty_zero'] = TRUE;
/* Field: Content: System CSS */
$handler->display->display_options['fields']['field_system_css']['id'] = 'field_system_css';
$handler->display->display_options['fields']['field_system_css']['table'] = 'field_data_field_system_css';
$handler->display->display_options['fields']['field_system_css']['field'] = 'field_system_css';
$handler->display->display_options['fields']['field_system_css']['label'] = '';
$handler->display->display_options['fields']['field_system_css']['alter']['alter_text'] = TRUE;
$handler->display->display_options['fields']['field_system_css']['alter']['text'] = '<div class="[field_system_css-value]"></div>';
$handler->display->display_options['fields']['field_system_css']['element_label_colon'] = FALSE;
$handler->display->display_options['fields']['field_system_css']['empty'] = '<div class="na"></div>';
$handler->display->display_options['fields']['field_system_css']['empty_zero'] = TRUE;
$handler->display->display_options['block_description'] = 'System Status';

/* Display: Allocated Status */
$handler = $view->new_display('attachment', 'Allocated Status', 'attachment_1');
$handler->display->display_options['pager']['type'] = 'some';
$handler->display->display_options['defaults']['style_plugin'] = FALSE;
$handler->display->display_options['style_plugin'] = 'table';
$handler->display->display_options['style_options']['columns'] = array(
  'nothing' => 'nothing',
  'field_allocated_storage' => 'field_allocated_storage',
  'field_allocated_memory' => 'field_allocated_memory',
  'field_allocated_vcpu' => 'field_allocated_vcpu',
);
$handler->display->display_options['style_options']['default'] = '-1';
$handler->display->display_options['style_options']['info'] = array(
  'nothing' => array(
    'align' => '',
    'separator' => '',
    'empty_column' => 0,
  ),
  'field_allocated_storage' => array(
    'sortable' => 0,
    'default_sort_order' => 'asc',
    'align' => 'views-align-left',
    'separator' => '',
    'empty_column' => 0,
  ),
  'field_allocated_memory' => array(
    'sortable' => 0,
    'default_sort_order' => 'asc',
    'align' => 'views-align-left',
    'separator' => '',
    'empty_column' => 0,
  ),
  'field_allocated_vcpu' => array(
    'sortable' => 0,
    'default_sort_order' => 'asc',
    'align' => 'views-align-left',
    'separator' => '',
    'empty_column' => 0,
  ),
);
$handler->display->display_options['defaults']['style_options'] = FALSE;
$handler->display->display_options['defaults']['row_plugin'] = FALSE;
$handler->display->display_options['defaults']['row_options'] = FALSE;
$handler->display->display_options['defaults']['fields'] = FALSE;
/* Field: Global: Custom text */
$handler->display->display_options['fields']['nothing']['id'] = 'nothing';
$handler->display->display_options['fields']['nothing']['table'] = 'views';
$handler->display->display_options['fields']['nothing']['field'] = 'nothing';
$handler->display->display_options['fields']['nothing']['label'] = '';
$handler->display->display_options['fields']['nothing']['alter']['text'] = 'Allocated';
$handler->display->display_options['fields']['nothing']['element_type'] = 'strong';
$handler->display->display_options['fields']['nothing']['element_class'] = 'headerlabel';
$handler->display->display_options['fields']['nothing']['element_label_colon'] = FALSE;
/* Field: Content: Allocated Storage */
$handler->display->display_options['fields']['field_allocated_storage']['id'] = 'field_allocated_storage';
$handler->display->display_options['fields']['field_allocated_storage']['table'] = 'field_data_field_allocated_storage';
$handler->display->display_options['fields']['field_allocated_storage']['field'] = 'field_allocated_storage';
$handler->display->display_options['fields']['field_allocated_storage']['label'] = 'Storage';
$handler->display->display_options['fields']['field_allocated_storage']['element_class'] = 'data';
$handler->display->display_options['fields']['field_allocated_storage']['element_label_type'] = 'div';
$handler->display->display_options['fields']['field_allocated_storage']['element_label_class'] = 'label';
$handler->display->display_options['fields']['field_allocated_storage']['element_label_colon'] = FALSE;
$handler->display->display_options['fields']['field_allocated_storage']['empty'] = 'N/A';
$handler->display->display_options['fields']['field_allocated_storage']['empty_zero'] = TRUE;
/* Field: Content: Allocated Memory */
$handler->display->display_options['fields']['field_allocated_memory']['id'] = 'field_allocated_memory';
$handler->display->display_options['fields']['field_allocated_memory']['table'] = 'field_data_field_allocated_memory';
$handler->display->display_options['fields']['field_allocated_memory']['field'] = 'field_allocated_memory';
$handler->display->display_options['fields']['field_allocated_memory']['label'] = 'Memory';
$handler->display->display_options['fields']['field_allocated_memory']['element_class'] = 'data';
$handler->display->display_options['fields']['field_allocated_memory']['element_label_type'] = 'div';
$handler->display->display_options['fields']['field_allocated_memory']['element_label_class'] = 'label';
$handler->display->display_options['fields']['field_allocated_memory']['element_label_colon'] = FALSE;
$handler->display->display_options['fields']['field_allocated_memory']['empty'] = 'N/A';
$handler->display->display_options['fields']['field_allocated_memory']['empty_zero'] = TRUE;
/* Field: Content: Allocated vCPU */
$handler->display->display_options['fields']['field_allocated_vcpu']['id'] = 'field_allocated_vcpu';
$handler->display->display_options['fields']['field_allocated_vcpu']['table'] = 'field_data_field_allocated_vcpu';
$handler->display->display_options['fields']['field_allocated_vcpu']['field'] = 'field_allocated_vcpu';
$handler->display->display_options['fields']['field_allocated_vcpu']['label'] = 'vCPU';
$handler->display->display_options['fields']['field_allocated_vcpu']['element_class'] = 'data';
$handler->display->display_options['fields']['field_allocated_vcpu']['element_label_type'] = 'div';
$handler->display->display_options['fields']['field_allocated_vcpu']['element_label_class'] = 'label';
$handler->display->display_options['fields']['field_allocated_vcpu']['element_label_colon'] = FALSE;
$handler->display->display_options['fields']['field_allocated_vcpu']['empty'] = 'N/A';
$handler->display->display_options['fields']['field_allocated_vcpu']['empty_zero'] = TRUE;
$handler->display->display_options['displays'] = array(
  'block_system' => 'block_system',
  'default' => 0,
  'block_budget' => 0,
);


$dependencies = array();

$optional = array();

$modules = array(
  0 => 'views',
  1 => 'node',
  2 => 'text',
);
