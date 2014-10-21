<?php
/**
 * @file
 * field.node.field_proj_req_state.project_req.inc
 */

$api = '2.0.0';

$data = array(
  'field_config' => array(
    'translatable' => '0',
    'entity_types' => array(),
    'settings' => array(
      'allowed_values_function' => 'workflowfield_allowed_values',
      'wid' => '1',
      'widget' => array(
        'options' => 'select',
        'name_as_title' => 1,
        'schedule' => 1,
        'schedule_timezone' => 1,
        'comment' => 1,
      ),
      'watchdog_log' => 1,
      'history' => array(
        'history_tab_show' => 1,
        'roles' => array(
          -1 => 0,
          1 => 0,
          2 => 0,
          3 => 0,
          4 => 0,
          5 => 0,
          6 => 0,
        ),
      ),
    ),
    'storage' => array(
      'type' => 'field_sql_storage',
      'settings' => array(),
      'module' => 'field_sql_storage',
      'active' => '1',
      'details' => array(
        'sql' => array(
          'FIELD_LOAD_CURRENT' => array(
            'field_data_field_proj_req_state' => array(
              'value' => 'field_proj_req_state_value',
            ),
          ),
          'FIELD_LOAD_REVISION' => array(
            'field_revision_field_proj_req_state' => array(
              'value' => 'field_proj_req_state_value',
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
    'field_name' => 'field_proj_req_state',
    'type' => 'workflow',
    'module' => 'workflowfield',
    'active' => '1',
    'locked' => '0',
    'cardinality' => '1',
    'deleted' => '0',
    'columns' => array(
      'value' => array(
        'description' => 'The {workflow_states}.sid that this node is currently in.',
        'type' => 'int',
        'unsigned' => TRUE,
        'not null' => TRUE,
        'default' => 0,
        'disp-width' => '10',
      ),
    ),
  ),
  'field_instance' => array(
    'label' => 'Workflow State',
    'widget' => array(
      'type' => 'options_select',
      'weight' => '21',
      'settings' => array(),
      'module' => 'options',
    ),
    'settings' => array(
      'user_register_form' => FALSE,
    ),
    'display' => array(
      'default' => array(
        'label' => 'above',
        'type' => 'list_default',
        'weight' => '63',
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
    'required' => FALSE,
    'description' => '',
    'default_value' => NULL,
    'field_name' => 'field_proj_req_state',
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
  1 => 'workflowfield',
  2 => 'options',
);
