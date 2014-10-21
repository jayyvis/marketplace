<?php
/**
 * @file
 * field_group.group_related_info_node_project_req_form.inc
 */

$api = '2.0.0';

$data = $field_group = new stdClass();
$field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
$field_group->api_version = 1;
$field_group->identifier = 'group_related_info|node|project_req|form';
$field_group->group_name = 'group_related_info';
$field_group->entity_type = 'node';
$field_group->bundle = 'project_req';
$field_group->mode = 'form';
$field_group->parent_name = '';
$field_group->data = array(
  'label' => 'Related Information',
  'weight' => '9',
  'children' => array(
    0 => 'field_notif_list',
    1 => 'field_depndt_appl',
    2 => 'field_nbr_vets_afctd',
    3 => 'field_nbr_empl_afctd',
    4 => 'field_org_afctd',
    5 => 'field_appl_stat',
    6 => 'field_appl_mf_serv',
    7 => 'field_appl_mong_serv',
    8 => 'field_appl_bu_serv',
    9 => 'field_appl_sql_serv',
    10 => 'field_appl_web_serv',
    11 => 'field_appl_rdc_serv',
    12 => 'field_info_type',
  ),
  'format_type' => 'fieldset',
  'format_settings' => array(
    'formatter' => 'collapsible',
    'instance_settings' => array(
      'description' => '',
      'classes' => 'group-related-info field-group-fieldset',
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
