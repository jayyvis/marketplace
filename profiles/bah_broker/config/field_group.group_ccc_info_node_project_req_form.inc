<?php
/**
 * @file
 * field_group.group_ccc_info_node_project_req_form.inc
 */

$api = '2.0.0';

$data = $field_group = new stdClass();
$field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
$field_group->api_version = 1;
$field_group->identifier = 'group_ccc_info|node|project_req|form';
$field_group->group_name = 'group_ccc_info';
$field_group->entity_type = 'node';
$field_group->bundle = 'project_req';
$field_group->mode = 'form';
$field_group->parent_name = '';
$field_group->data = array(
  'label' => 'Centralized Customer Information',
  'weight' => '11',
  'children' => array(
    0 => 'field_ccc_exist',
    1 => 'field_ccc_locn',
    2 => 'field_ccc_mcc',
    3 => 'field_ccc_name',
  ),
  'format_type' => 'fieldset',
  'format_settings' => array(
    'formatter' => 'collapsible',
    'instance_settings' => array(
      'description' => '',
      'classes' => 'group-ccc-info field-group-fieldset',
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
