<?php
/**
 * @file
 * variable.field_bundle_settings_node__product.inc
 */

$api = '2.0.0';

$data = array(
  'name' => 'field_bundle_settings_node__product',
  'content' => array(
    'view_modes' => array(
      'teaser' => array(
        'custom_settings' => TRUE,
      ),
      'full' => array(
        'custom_settings' => FALSE,
      ),
      'rss' => array(
        'custom_settings' => FALSE,
      ),
      'token' => array(
        'custom_settings' => FALSE,
      ),
      'search_index' => array(
        'custom_settings' => FALSE,
      ),
      'search_result' => array(
        'custom_settings' => FALSE,
      ),
      'revision' => array(
        'custom_settings' => FALSE,
      ),
    ),
    'extra_fields' => array(
      'form' => array(
        'title' => array(
          'weight' => '-5',
        ),
      ),
      'display' => array(
        'product:sku' => array(
          'default' => array(
            'weight' => '-10',
            'visible' => FALSE,
          ),
          'teaser' => array(
            'weight' => '8',
            'visible' => FALSE,
          ),
        ),
        'product:title' => array(
          'default' => array(
            'weight' => '-5',
            'visible' => TRUE,
          ),
          'teaser' => array(
            'weight' => '9',
            'visible' => FALSE,
          ),
        ),
        'product:status' => array(
          'default' => array(
            'weight' => '5',
            'visible' => FALSE,
          ),
          'teaser' => array(
            'weight' => '11',
            'visible' => FALSE,
          ),
        ),
        'product:commerce_price' => array(
          'default' => array(
            'weight' => '0',
            'visible' => TRUE,
          ),
          'teaser' => array(
            'weight' => '1',
            'visible' => TRUE,
          ),
        ),
        'product:field_template' => array(
          'default' => array(
            'weight' => '40',
            'visible' => TRUE,
          ),
          'teaser' => array(
            'weight' => '5',
            'visible' => TRUE,
          ),
        ),
        'product:field_server_type' => array(
          'default' => array(
            'weight' => '37',
            'visible' => TRUE,
          ),
          'teaser' => array(
            'weight' => '3',
            'visible' => TRUE,
          ),
        ),
        'product:field_operating_system_ref' => array(
          'default' => array(
            'weight' => '39',
            'visible' => TRUE,
          ),
          'teaser' => array(
            'weight' => '4',
            'visible' => TRUE,
          ),
        ),
        'product:field_location' => array(
          'default' => array(
            'weight' => '41',
            'visible' => TRUE,
          ),
          'teaser' => array(
            'weight' => '6',
            'visible' => TRUE,
          ),
        ),
        'product:field_tags' => array(
          'default' => array(
            'weight' => '43',
            'visible' => TRUE,
          ),
          'teaser' => array(
            'weight' => '7',
            'visible' => TRUE,
          ),
        ),
        'product:field_production' => array(
          'default' => array(
            'weight' => '44',
            'visible' => TRUE,
          ),
          'teaser' => array(
            'weight' => '44',
            'visible' => TRUE,
          ),
        ),
        'product:field_networking' => array(
          'default' => array(
            'weight' => '45',
            'visible' => TRUE,
          ),
          'teaser' => array(
            'weight' => '11',
            'visible' => TRUE,
          ),
        ),
        'product:field_elasticity' => array(
          'default' => array(
            'weight' => '45',
            'visible' => TRUE,
          ),
          'teaser' => array(
            'weight' => '12',
            'visible' => TRUE,
          ),
        ),
        'product:field_storage' => array(
          'default' => array(
            'weight' => '46',
            'visible' => TRUE,
          ),
          'teaser' => array(
            'weight' => '13',
            'visible' => TRUE,
          ),
        ),
        'product:field_cpu' => array(
          'default' => array(
            'weight' => '8',
            'visible' => TRUE,
          ),
          'teaser' => array(
            'weight' => '8',
            'visible' => TRUE,
          ),
        ),
        'product:field_memory' => array(
          'default' => array(
            'weight' => '9',
            'visible' => TRUE,
          ),
          'teaser' => array(
            'weight' => '9',
            'visible' => TRUE,
          ),
        ),
        'product:field_server_size' => array(
          'default' => array(
            'weight' => '7',
            'visible' => TRUE,
          ),
          'teaser' => array(
            'weight' => '7',
            'visible' => TRUE,
          ),
        ),
        'product:field_friendly' => array(
          'default' => array(
            'weight' => '5',
            'visible' => TRUE,
          ),
          'teaser' => array(
            'weight' => '5',
            'visible' => TRUE,
          ),
        ),
        'product:field_type' => array(
          'default' => array(
            'weight' => '14',
            'visible' => TRUE,
          ),
          'teaser' => array(
            'weight' => '14',
            'visible' => TRUE,
          ),
        ),
      ),
    ),
  ),
);

$dependencies = array();

$optional = array();

$modules = array();
