<?php
/**
 * @file
 * field.node.field_appl_type.project_req.inc
 */

$api = '2.0.0';

$data = array(
  'field_config' => array(
    'translatable' => '0',
    'entity_types' => array(),
    'settings' => array(
      'max_length' => '255',
    ),
    'storage' => array(
      'type' => 'field_sql_storage',
      'settings' => array(),
      'module' => 'field_sql_storage',
      'active' => '1',
      'details' => array(
        'sql' => array(
          'FIELD_LOAD_CURRENT' => array(
            'field_data_field_appl_type' => array(
              'value' => 'field_appl_type_value',
              'format' => 'field_appl_type_format',
            ),
          ),
          'FIELD_LOAD_REVISION' => array(
            'field_revision_field_appl_type' => array(
              'value' => 'field_appl_type_value',
              'format' => 'field_appl_type_format',
            ),
          ),
        ),
      ),
    ),
    'foreign keys' => array(
      'format' => array(
        'table' => 'filter_format',
        'columns' => array(
          'format' => 'format',
        ),
      ),
    ),
    'indexes' => array(
      'format' => array(
        0 => 'format',
      ),
    ),
    'field_name' => 'field_appl_type',
    'type' => 'text',
    'module' => 'text',
    'active' => '1',
    'locked' => '0',
    'cardinality' => '1',
    'deleted' => '0',
    'columns' => array(
      'value' => array(
        'type' => 'varchar',
        'length' => '255',
        'not null' => FALSE,
      ),
      'format' => array(
        'type' => 'varchar',
        'length' => 255,
        'not null' => FALSE,
      ),
    ),
  ),
  'field_instance' => array(
    'label' => 'Application Type',
    'widget' => array(
      'weight' => '20',
      'type' => 'text_textfield',
      'module' => 'text',
      'active' => 1,
      'settings' => array(
        'size' => '60',
      ),
    ),
    'settings' => array(
      'text_processing' => '0',
      'user_register_form' => FALSE,
    ),
    'display' => array(
      'default' => array(
        'label' => 'above',
        'type' => 'text_default',
        'weight' => '49',
        'settings' => array(),
        'module' => 'text',
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
    'field_name' => 'field_appl_type',
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
  1 => 'text',
);
