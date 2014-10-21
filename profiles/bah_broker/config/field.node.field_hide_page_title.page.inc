<?php
/**
 * @file
 * field.node.field_hide_page_title.page.inc
 */

$api = '2.0.0';

$data = array(
  'field_config' => array(
    'translatable' => '0',
    'entity_types' => array(),
    'settings' => array(
      'allowed_values' => array(
        'no' => 'NO',
        'yes' => 'YES',
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
            'field_data_field_hide_page_title' => array(
              'value' => 'field_hide_page_title_value',
            ),
          ),
          'FIELD_LOAD_REVISION' => array(
            'field_revision_field_hide_page_title' => array(
              'value' => 'field_hide_page_title_value',
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
    'field_name' => 'field_hide_page_title',
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
    'label' => 'Hide page title',
    'widget' => array(
      'weight' => '1',
      'type' => 'options_buttons',
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
        'type' => 'hidden',
        'weight' => '1',
        'settings' => array(),
      ),
      'teaser' => array(
        'type' => 'hidden',
        'label' => 'above',
        'settings' => array(),
        'weight' => 0,
      ),
    ),
    'required' => 1,
    'description' => '',
    'default_value' => array(
      0 => array(
        'value' => 'no',
      ),
    ),
    'field_name' => 'field_hide_page_title',
    'entity_type' => 'node',
    'bundle' => 'page',
    'deleted' => '0',
  ),
);

$dependencies = array(
  'content_type.page' => 'content_type.page',
);

$optional = array();

$modules = array(
  0 => 'field_sql_storage',
  1 => 'list',
  2 => 'options',
);
