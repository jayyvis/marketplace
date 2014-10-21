<?php
/**
 * @file
 * field_group.group_cust_pm_node_project_form.inc
 */

$api = '2.0.0';

$data = $field_group = new stdClass();
$field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
$field_group->api_version = 1;
$field_group->identifier = 'group_cust_pm|node|project|form';
$field_group->group_name = 'group_cust_pm';
$field_group->entity_type = 'node';
$field_group->bundle = 'project';
$field_group->mode = 'form';
$field_group->parent_name = 'group_cust_info';
$field_group->data = array(
  'label' => 'Customer Program Manager',
  'weight' => '20',
  'children' => array(
    0 => 'field_pm_name_f',
    1 => 'field_pm_name_l',
    2 => 'field_pm_phone',
  ),
  'format_type' => 'fieldset',
  'format_settings' => array(
    'formatter' => 'collapsible',
    'instance_settings' => array(
      'description' => '',
      'classes' => 'group-cust-pm field-group-fieldset',
      'required_fields' => 1,
    ),
  ),
);


$dependencies = array();

$optional = array();

$modules = array(
  0 => 'ctools',
  1 => 'field_group',
);
