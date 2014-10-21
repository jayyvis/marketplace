<?php
/**
 * @file
 * field.node.field_product.product.inc
 */

$api = '2.0.0';

$data = array(
  'field_config' => array(
    'translatable' => '0',
    'entity_types' => array(),
    'settings' => array(
      'options_list_limit' => '',
    ),
    'storage' => array(
      'type' => 'field_sql_storage',
      'settings' => array(),
      'module' => 'field_sql_storage',
      'active' => '1',
      'details' => array(
        'sql' => array(
          'FIELD_LOAD_CURRENT' => array(
            'field_data_field_product' => array(
              'product_id' => 'field_product_product_id',
            ),
          ),
          'FIELD_LOAD_REVISION' => array(
            'field_revision_field_product' => array(
              'product_id' => 'field_product_product_id',
            ),
          ),
        ),
      ),
    ),
    'foreign keys' => array(
      'product_id' => array(
        'table' => 'commerce_product',
        'columns' => array(
          'product_id' => 'product_id',
        ),
      ),
    ),
    'indexes' => array(
      'product_id' => array(
        0 => 'product_id',
      ),
    ),
    'field_name' => 'field_product',
    'type' => 'commerce_product_reference',
    'module' => 'commerce_product_reference',
    'active' => '1',
    'locked' => '0',
    'cardinality' => '-1',
    'deleted' => '0',
    'columns' => array(
      'product_id' => array(
        'type' => 'int',
        'unsigned' => TRUE,
        'not null' => FALSE,
      ),
    ),
  ),
  'field_instance' => array(
    'label' => 'Product',
    'widget' => array(
      'weight' => '-1',
      'type' => 'inline_entity_form',
      'module' => 'inline_entity_form',
      'active' => 1,
      'settings' => array(
        'fields' => array(),
        'type_settings' => array(
          'allow_existing' => 1,
          'match_operator' => 'CONTAINS',
          'delete_references' => 0,
          'override_labels' => 0,
          'label_singular' => 'product',
          'label_plural' => 'products',
          'autogenerate_title' => 0,
        ),
      ),
    ),
    'settings' => array(
      'field_injection' => 1,
      'referenceable_types' => array(
        'application' => 'application',
        'compute' => 'compute',
        'database' => 'database',
        'product' => 'product',
        'service' => 'service',
        'web_service' => 'web_service',
      ),
      'user_register_form' => FALSE,
    ),
    'display' => array(
      'default' => array(
        'label' => 'hidden',
        'type' => 'commerce_cart_add_to_cart_form',
        'weight' => '2',
        'settings' => array(
          'show_quantity' => 1,
          'default_quantity' => '1',
          'combine' => 1,
          'show_single_product_attributes' => 0,
          'line_item_type' => 'product_with_dimensions_1',
        ),
        'module' => 'commerce_cart',
      ),
      'teaser' => array(
        'label' => 'hidden',
        'type' => 'hidden',
        'weight' => '10',
        'settings' => array(),
      ),
    ),
    'required' => 1,
    'description' => '',
    'field_name' => 'field_product',
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
  1 => 'commerce_product_reference',
  2 => 'inline_entity_form',
);
