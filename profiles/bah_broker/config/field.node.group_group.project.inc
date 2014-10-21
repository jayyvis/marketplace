<?php
/**
 * @file
 * field.node.group_group.project.inc
 */

$api = '2.0.0';

$data = array(
  'field_config' => array(
    'settings' => array(
      'allowed_values' => array(
        0 => 'Not a group',
        1 => 'Group',
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
            'field_data_group_group' => array(
              'value' => 'group_group_value',
            ),
          ),
          'FIELD_LOAD_REVISION' => array(
            'field_revision_group_group' => array(
              'value' => 'group_group_value',
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
    'field_name' => 'group_group',
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
    'label' => 'Group',
    'description' => 'Determine if this is an OG group.',
    'display_label' => 1,
    'widget' => array(
      'module' => 'options',
      'settings' => array(
        'og_hide' => TRUE,
        'display_label' => 0,
      ),
      'type' => 'options_onoff',
      'weight' => '1',
    ),
    'default_value' => array(
      0 => array(
        'value' => 1,
      ),
    ),
    'view modes' => array(
      'full' => array(
        'label' => 'Full',
        'type' => 'og_group_subscribe',
        'custom settings' => FALSE,
      ),
      'teaser' => array(
        'label' => 'Teaser',
        'type' => 'og_group_subscribe',
        'custom settings' => FALSE,
      ),
    ),
    'display' => array(
      'default' => array(
        'type' => 'og_group_subscribe',
        'label' => 'above',
        'settings' => array(
          'field_name' => FALSE,
        ),
        'module' => 'og_ui',
        'weight' => 0,
      ),
      'teaser' => array(
        'type' => 'hidden',
        'label' => 'above',
        'settings' => array(),
        'weight' => 0,
      ),
    ),
    'settings' => array(
      'user_register_form' => FALSE,
    ),
    'required' => FALSE,
    'field_name' => 'group_group',
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
