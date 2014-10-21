<?php
/**
 * @file
 * field_group.group_cust_info_node_project_form.inc
 */

$api = '2.0.0';

$data = $field_group = new stdClass();
$field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
$field_group->api_version = 1;
$field_group->identifier = 'group_cust_info|node|project|form';
$field_group->group_name = 'group_cust_info';
$field_group->entity_type = 'node';
$field_group->bundle = 'project';
$field_group->mode = 'form';
$field_group->parent_name = '';
$field_group->data = array(
  'label' => 'Customer Information',
  'weight' => '19',
  'children' => array(
    0 => 'field_cust_acronym',
    1 => 'field_cust_code_mcc',
    2 => 'group_cust_pm',
  ),
  'format_type' => 'fieldset',
  'format_settings' => array(
    'formatter' => 'collapsible',
    'instance_settings' => array(
      'description' => '',
      'classes' => 'group-cust-info field-group-fieldset',
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
