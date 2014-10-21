<?php
/**
 * @file
 * field.node.field_cust_acronym.project_req.inc
 */

$api = '2.0.0';

$data = array(
  'field_config' => array(
    'translatable' => '0',
    'entity_types' => array(),
    'settings' => array(
      'allowed_values' => array(
        'NCA' => 'NCA',
        'OGA' => 'OGA',
        'OIT' => 'OIT',
        'VBA' => 'VBA',
        'VHA' => 'VHA',
        'Other' => 'Other',
      ),
      'allowed_values_function' => '',
    ),
    'storage' => array(
      'type' => 'field_sql_storage',
      'settings' => array(),
      'module' => 'field_sql_storage',
      'active' => '1',
      'details' => array(
        'sql' => array(
          'FIELD_LOAD_CURRENT' => array(
            'field_data_field_cust_acronym' => array(
              'value' => 'field_cust_acronym_value',
            ),
          ),
          'FIELD_LOAD_REVISION' => array(
            'field_revision_field_cust_acronym' => array(
              'value' => 'field_cust_acronym_value',
            ),
          ),
        ),
      ),
    ),
    'foreign keys' => array(),
    'indexes' => array(
      'value' => array(
        0 => 'value',
      ),
    ),
    'field_name' => 'field_cust_acronym',
    'type' => 'list_text',
    'module' => 'list',
    'active' => '1',
    'locked' => '0',
    'cardinality' => '1',
    'deleted' => '0',
    'columns' => array(
      'value' => array(
        'type' => 'varchar',
        'length' => 255,
        'not null' => FALSE,
      ),
    ),
  ),
  'field_instance' => array(
    'label' => 'Customer Acronym',
    'widget' => array(
      'weight' => '23',
      'type' => 'options_select',
      'module' => 'options',
      'active' => 1,
      'settings' => array(),
    ),
    'settings' => array(
      'user_register_form' => FALSE,
    ),
    'display' => array(
      'default' => array(
        'label' => 'above',
        'type' => 'list_default',
        'weight' => '31',
        'settings' => array(),
        'module' => 'list',
      ),
      'teaser' => array(
        'type' => 'hidden',
        'label' => 'above',
        'settings' => array(),
        'weight' => 0,
      ),
    ),
    'required' => 0,
    'description' => '',
    'default_value' => NULL,
    'field_name' => 'field_cust_acronym',
    'entity_type' => 'node',
    'bundle' => 'project_req',
    'deleted' => '0',
  ),
);

$dependencies = array(
  'content_type.project_req' => 'content_type.project_req',
);

$optional = array();

$modules = array(
  0 => 'field_sql_storage',
  1 => 'list',
  2 => 'options',
);
