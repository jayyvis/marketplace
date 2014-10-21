<?php
/**
 * @file
 * field.node.field_add_cont.project_req.inc
 */

$api = '2.0.0';

$data = array(
  'field_config' => array(
    'translatable' => '0',
    'entity_types' => array(),
    'settings' => array(
      'hide_blank_items' => 0,
      'path' => '',
    ),
    'storage' => array(
      'type' => 'field_sql_storage',
      'settings' => array(),
      'module' => 'field_sql_storage',
      'active' => '1',
      'details' => array(
        'sql' => array(
          'FIELD_LOAD_CURRENT' => array(
            'field_data_field_add_cont' => array(
              'value' => 'field_add_cont_value',
              'revision_id' => 'field_add_cont_revision_id',
            ),
          ),
          'FIELD_LOAD_REVISION' => array(
            'field_revision_field_add_cont' => array(
              'value' => 'field_add_cont_value',
              'revision_id' => 'field_add_cont_revision_id',
            ),
          ),
        ),
      ),
    ),
    'foreign keys' => array(),
    'indexes' => array(
      'revision_id' => array(
        0 => 'revision_id',
      ),
    ),
    'field_name' => 'field_add_cont',
    'type' => 'field_collection',
    'module' => 'field_collection',
    'active' => '1',
    'locked' => '0',
    'cardinality' => '-1',
    'deleted' => '0',
    'columns' => array(
      'value' => array(
        'type' => 'int',
        'not null' => FALSE,
        'description' => 'The field collection item id.',
      ),
      'revision_id' => array(
        'type' => 'int',
        'not null' => FALSE,
        'description' => 'The field collection item revision id.',
      ),
    ),
  ),
  'field_instance' => array(
    'label' => 'Additional Contact',
    'widget' => array(
      'weight' => '31',
      'type' => 'field_collection_embed',
      'module' => 'field_collection',
      'active' => 0,
      'settings' => array(),
    ),
    'settings' => array(
      'user_register_form' => FALSE,
    ),
    'display' => array(
      'default' => array(
        'label' => 'above',
        'type' => 'field_collection_view',
        'weight' => '66',
        'settings' => array(
          'edit' => 'Edit',
          'delete' => 'Delete',
          'add' => 'Add',
          'description' => TRUE,
          'view_mode' => 'full',
        ),
        'module' => 'field_collection',
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
    'field_name' => 'field_add_cont',
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
  1 => 'field_collection',
);