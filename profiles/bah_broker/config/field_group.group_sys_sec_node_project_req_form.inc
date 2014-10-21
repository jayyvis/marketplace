<?php
/**
 * @file
 * field_group.group_sys_sec_node_project_req_form.inc
 */

$api = '2.0.0';

$data = $field_group = new stdClass();
$field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
$field_group->api_version = 1;
$field_group->identifier = 'group_sys_sec|node|project_req|form';
$field_group->group_name = 'group_sys_sec';
$field_group->entity_type = 'node';
$field_group->bundle = 'project_req';
$field_group->mode = 'form';
$field_group->parent_name = '';
$field_group->data = array(
  'label' => 'System Security',
  'weight' => '14',
  'children' => array(
    0 => 'field_ato_date',
    1 => 'field_fisma_class',
    2 => 'field_sec_plan',
    3 => 'field_isa_exist',
    4 => 'field_isa_req',
  ),
  'format_type' => 'fieldset',
  'format_settings' => array(
    'formatter' => 'collapsible',
    'instance_settings' => array(
      'description' => '',
      'classes' => 'group-sys-sec field-group-fieldset',
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
