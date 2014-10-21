<?php
/**
 * @file
 * field.node.group_register.project.inc
 */

$api = '2.0.0';

$data = array(
  'field_config' => array(
    'no_ui' => TRUE,
    'settings' => array(
      'allowed_values' => array(
        0 => 'Do not show on registration page',
        1 => 'Show on registration page',
      ),
      'allowed_values_function' => '',
    ),
    'entity_types' => array(),
    'translatable' => '0',
    'storage' => array(
      'type' => 'field_sql_storage',
      'settings' => array(),
      'module' => 'field_sql_storage',
      'active' => '1',
      'details' => array(
        'sql' => array(
          'FIELD_LOAD_CURRENT' => array(
            'field_data_group_register' => array(
              'value' => 'group_register_value',
            ),
          ),
          'FIELD_LOAD_REVISION' => array(
            'field_revision_group_register' => array(
              'value' => 'group_register_value',
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
    'field_name' => 'group_register',
    'type' => 'list_boolean',
    'module' => 'list',
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
    'label' => 'Group register',
    'default_value' => array(
      0 => array(
        'value' => 0,
      ),
    ),
    'widget_type' => 'options_select',
    'required' => TRUE,
    'view modes' => array(
      'full' => array(
        'label' => 'above',
        'type' => 'options_onoff',
      ),
      'teaser' => array(
        'label' => 'above',
        'type' => 'options_onoff',
      ),
    ),
    'settings' => array(
      'user_register_form' => FALSE,
    ),
    'display' => array(
      'default' => array(
        'label' => 'above',
        'type' => 'list_default',
        'settings' => array(),
        'module' => 'list',
        'weight' => 4,
      ),
      'teaser' => array(
        'type' => 'hidden',
        'label' => 'above',
        'settings' => array(),
        'weight' => 0,
      ),
    ),
    'widget' => array(
      'type' => 'options_buttons',
      'settings' => array(),
      'weight' => '5',
      'module' => 'options',
    ),
    'description' => '',
    'field_name' => 'group_register',
    'entity_type' => 'node',
    'bundle' => 'project',
    'deleted' => '0',
  ),
);

$dependencies = array(
  'content_type.project' => 'content_type.project',
);

$optional = array();

$modules = array(
  0 => 'field_sql_storage',
  1 => 'list',
  2 => 'options',
);
