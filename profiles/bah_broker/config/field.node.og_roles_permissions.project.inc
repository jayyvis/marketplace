<?php
/**
 * @file
 * field.node.og_roles_permissions.project.inc
 */

$api = '2.0.0';

$data = array(
  'field_config' => array(
    'settings' => array(
      'allowed_values' => array(
        0 => 'Use default roles and permissions',
        1 => 'Override default roles and permissions',
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
            'field_data_og_roles_permissions' => array(
              'value' => 'og_roles_permissions_value',
            ),
          ),
          'FIELD_LOAD_REVISION' => array(
            'field_revision_og_roles_permissions' => array(
              'value' => 'og_roles_permissions_value',
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
    'field_name' => 'og_roles_permissions',
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
    'label' => 'Group roles and permissions',
    'widget' => array(
      'module' => 'options',
      'settings' => array(),
      'type' => 'options_select',
      'weight' => '6',
    ),
    'required' => TRUE,
    'default_value' => array(
      0 => array(
        'value' => 0,
      ),
    ),
    'view modes' => array(
      'full' => array(
        'label' => 'Full',
        'type' => 'list_default',
        'custom settings' => FALSE,
      ),
      'teaser' => array(
        'label' => 'Teaser',
        'type' => 'list_default',
        'custom settings' => FALSE,
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
        'weight' => 5,
      ),
      'teaser' => array(
        'type' => 'hidden',
        'label' => 'above',
        'settings' => array(),
        'weight' => 0,
      ),
    ),
    'description' => '',
    'field_name' => 'og_roles_permissions',
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
