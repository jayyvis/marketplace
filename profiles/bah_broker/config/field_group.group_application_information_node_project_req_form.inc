<?php
/**
 * @file
 * field_group.group_application_information_node_project_req_form.inc
 */

$api = '2.0.0';

$data = $field_group = new stdClass();
$field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
$field_group->api_version = 1;
$field_group->identifier = 'group_application_information|node|project_req|form';
$field_group->group_name = 'group_application_information';
$field_group->entity_type = 'node';
$field_group->bundle = 'project_req';
$field_group->mode = 'form';
$field_group->parent_name = '';
$field_group->data = array(
  'label' => 'Application Information',
  'weight' => '1',
  'children' => array(
    0 => 'field_cust_code',
    1 => 'field_appl_name',
    2 => 'field_appl_desc',
    3 => 'field_appl_locn',
    4 => 'field_appl_runinprod',
  ),
  'format_type' => 'fieldset',
  'format_settings' => array(
    'formatter' => 'collapsible',
    'instance_settings' => array(
      'description' => '',
      'classes' => 'group-application-information field-group-fieldset',
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
