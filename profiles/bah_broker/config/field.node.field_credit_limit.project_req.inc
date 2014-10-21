<?php
/**
 * @file
 * field.node.field_credit_limit.project_req.inc
 */

$api = '2.0.0';

$data = array(
  'field_config' => array(
    'translatable' => '0',
    'entity_types' => array(),
    'settings' => array(),
    'storage' => array(
      'type' => 'field_sql_storage',
      'settings' => array(),
      'module' => 'field_sql_storage',
      'active' => '1',
      'details' => array(
        'sql' => array(
          'FIELD_LOAD_CURRENT' => array(
            'field_data_field_credit_limit' => array(
              'value' => 'field_credit_limit_value',
            ),
          ),
          'FIELD_LOAD_REVISION' => array(
            'field_revision_field_credit_limit' => array(
              'value' => 'field_credit_limit_value',
            ),
          ),
        ),
      ),
    ),
    'foreign keys' => array(),
    'indexes' => array(),
    'field_name' => 'field_credit_limit',
    'type' => 'number_integer',
    'module' => 'number',
    'active' => '1',
    'locked' => '0',
    'cardinality' => '1',
    'deleted' => '0',
    'columns' => array(
      'value' => array(
        'type' => 'int',
        'not null' => FALSE,
      ),
    ),
  ),
  'field_instance' => array(
    'label' => 'Credit limit',
    'widget' => array(
      'type' => 'number',
      'weight' => '3',
      'settings' => array(),
      'module' => 'number',
    ),
    'settings' => array(
      'min' => '',
      'max' => '',
      'prefix' => '',
      'suffix' => '',
      'user_register_form' => FALSE,
    ),
    'display' => array(
      'default' => array(
        'label' => 'above',
        'type' => 'number_integer',
        'weight' => '67',
        'settings' => array(
          'thousand_separator' => ' ',
          'decimal_separator' => '.',
          'scale' => 0,
          'prefix_suffix' => TRUE,
        ),
        'module' => 'number',
      ),
      'teaser' => array(
        'type' => 'hidden',
        'label' => 'above',
        'settings' => array(),
        'weight' => 0,
      ),
    ),
    'required' => FALSE,
    'description' => '',
    'default_value' => NULL,
    'field_name' => 'field_credit_limit',
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
  1 => 'number',
);
