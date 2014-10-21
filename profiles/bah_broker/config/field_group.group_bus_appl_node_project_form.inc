<?php
/**
 * @file
 * field_group.group_bus_appl_node_project_form.inc
 */

$api = '2.0.0';

$data = $field_group = new stdClass();
$field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
$field_group->api_version = 1;
$field_group->identifier = 'group_bus_appl|node|project|form';
$field_group->group_name = 'group_bus_appl';
$field_group->entity_type = 'node';
$field_group->bundle = 'project';
$field_group->mode = 'form';
$field_group->parent_name = '';
$field_group->data = array(
  'label' => 'Business Application',
  'weight' => '22',
  'children' => array(
    0 => 'field_appl_fund_src',
    1 => 'field_bus_cont_lvl',
    2 => 'field_bus_cont_plan',
    3 => 'field_rto',
    4 => 'field_rpo',
    5 => 'field_rec_meth',
    6 => 'field_appl_type',
    7 => 'field_appl_func_type',
  ),
  'format_type' => 'fieldset',
  'format_settings' => array(
    'formatter' => 'collapsible',
    'instance_settings' => array(
      'description' => '',
      'classes' => 'group-bus-appl field-group-fieldset',
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
