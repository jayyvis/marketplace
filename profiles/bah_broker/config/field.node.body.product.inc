<?php
/**
 * @file
 * field.node.body.product.inc
 */

$api = '2.0.0';

$data = array(
  'field_config' => array(
    'entity_types' => array(
      0 => 'node',
    ),
    'translatable' => '0',
    'settings' => array(),
    'storage' => array(
      'type' => 'field_sql_storage',
      'settings' => array(),
      'module' => 'field_sql_storage',
      'active' => '1',
      'details' => array(
        'sql' => array(
          'FIELD_LOAD_CURRENT' => array(
            'field_data_body' => array(
              'value' => 'body_value',
              'summary' => 'body_summary',
              'format' => 'body_format',
            ),
          ),
          'FIELD_LOAD_REVISION' => array(
            'field_revision_body' => array(
              'value' => 'body_value',
              'summary' => 'body_summary',
              'format' => 'body_format',
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
    'field_name' => 'body',
    'type' => 'text_with_summary',
    'module' => 'text',
    'active' => '1',
    'locked' => '0',
    'cardinality' => '1',
    'deleted' => '0',
    'columns' => array(
      'value' => array(
        'type' => 'text',
        'size' => 'big',
        'not null' => FALSE,
      ),
      'summary' => array(
        'type' => 'text',
        'size' => 'big',
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
    'label' => 'Description',
    'widget' => array(
      'weight' => '-4',
      'type' => 'text_textarea_with_summary',
      'module' => 'text',
      'active' => 1,
      'settings' => array(
        'rows' => '20',
        'summary_rows' => 5,
      ),
    ),
    'settings' => array(
      'text_processing' => '1',
      'display_summary' => 1,
      'user_register_form' => FALSE,
    ),
    'display' => array(
      'default' => array(
        'label' => 'hidden',
        'type' => 'text_default',
        'weight' => '0',
        'settings' => array(),
        'module' => 'text',
      ),
      'teaser' => array(
        'label' => 'hidden',
        'type' => 'text_summary_or_trimmed',
        'weight' => '2',
        'settings' => array(
          'trim_length' => '250',
        ),
        'module' => 'text',
      ),
    ),
    'required' => 0,
    'description' => '',
    'default_value' => NULL,
    'field_name' => 'body',
    'entity_type' => 'node',
    'bundle' => 'product',
    'deleted' => '0',
  ),
);

$dependencies = array(
  'content_type.product' => 'content_type.product',
);

$optional = array();

$modules = array(
  0 => 'field_sql_storage',
  1 => 'text',
);
