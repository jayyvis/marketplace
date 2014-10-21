<?php
/**
 * @file
 * field_group.group_additional_contacts_om_node_project_req_form.inc
 */

$api = '2.0.0';

$data = $field_group = new stdClass();
$field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
$field_group->api_version = 1;
$field_group->identifier = 'group_additional_contacts_om|node|project_req|form';
$field_group->group_name = 'group_additional_contacts_om';
$field_group->entity_type = 'node';
$field_group->bundle = 'project_req';
$field_group->mode = 'form';
$field_group->parent_name = '';
$field_group->data = array(
  'label' => 'Additional contacts found in the O&M Plan',
  'weight' => '8',
  'children' => array(
    0 => 'field_add_cont',
  ),
  'format_type' => 'fieldset',
  'format_settings' => array(
    'formatter' => 'collapsible',
    'instance_settings' => array(
      'description' => '',
      'classes' => 'group-additional-contacts-om field-group-fieldset',
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
