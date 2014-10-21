<?php
/**
 * @file
 * field.node.field_server_image.product.inc
 */

$api = '2.0.0';

$data = array(
  'field_config' => array(
    'translatable' => '0',
    'entity_types' => array(),
    'settings' => array(
      'uri_scheme' => 'public',
      'default_image' => 0,
    ),
    'storage' => array(
      'type' => 'field_sql_storage',
      'settings' => array(),
      'module' => 'field_sql_storage',
      'active' => '1',
      'details' => array(
        'sql' => array(
          'FIELD_LOAD_CURRENT' => array(
            'field_data_field_server_image' => array(
              'fid' => 'field_server_image_fid',
              'alt' => 'field_server_image_alt',
              'title' => 'field_server_image_title',
              'width' => 'field_server_image_width',
              'height' => 'field_server_image_height',
            ),
          ),
          'FIELD_LOAD_REVISION' => array(
            'field_revision_field_server_image' => array(
              'fid' => 'field_server_image_fid',
              'alt' => 'field_server_image_alt',
              'title' => 'field_server_image_title',
              'width' => 'field_server_image_width',
              'height' => 'field_server_image_height',
            ),
          ),
        ),
      ),
    ),
    'foreign keys' => array(
      'fid' => array(
        'table' => 'file_managed',
        'columns' => array(
          'fid' => 'fid',
        ),
      ),
    ),
    'indexes' => array(
      'fid' => array(
        0 => 'fid',
      ),
    ),
    'field_name' => 'field_server_image',
    'type' => 'image',
    'module' => 'image',
    'active' => '1',
    'locked' => '0',
    'cardinality' => '1',
    'deleted' => '0',
    'columns' => array(
      'fid' => array(
        'description' => 'The {file_managed}.fid being referenced in this field.',
        'type' => 'int',
        'not null' => FALSE,
        'unsigned' => TRUE,
      ),
      'alt' => array(
        'description' => 'Alternative image text, for the image\'s \'alt\' attribute.',
        'type' => 'varchar',
        'length' => 512,
        'not null' => FALSE,
      ),
      'title' => array(
        'description' => 'Image title text, for the image\'s \'title\' attribute.',
        'type' => 'varchar',
        'length' => 1024,
        'not null' => FALSE,
      ),
      'width' => array(
        'description' => 'The width of the image in pixels.',
        'type' => 'int',
        'unsigned' => TRUE,
      ),
      'height' => array(
        'description' => 'The height of the image in pixels.',
        'type' => 'int',
        'unsigned' => TRUE,
      ),
    ),
  ),
  'field_instance' => array(
    'label' => 'Image',
    'widget' => array(
      'type' => 'image_image',
      'weight' => '-2',
      'settings' => array(
        'progress_indicator' => 'throbber',
        'preview_image_style' => '',
      ),
      'module' => 'image',
    ),
    'settings' => array(
      'file_extensions' => 'png gif jpg jpeg',
      'file_directory' => '',
      'max_filesize' => '',
      'alt_field' => 0,
      'title_field' => 0,
      'max_resolution' => '',
      'min_resolution' => '',
      'default_image' => 0,
      'user_register_form' => FALSE,
    ),
    'display' => array(
      'default' => array(
        'label' => 'hidden',
        'type' => 'image',
        'weight' => '1',
        'settings' => array(
          'image_style' => '',
          'image_link' => '',
        ),
        'module' => 'image',
      ),
      'teaser' => array(
        'label' => 'hidden',
        'type' => 'image',
        'weight' => '0',
        'settings' => array(
          'image_style' => '',
          'image_link' => '',
        ),
        'module' => 'image',
      ),
    ),
    'required' => FALSE,
    'description' => '',
    'field_name' => 'field_server_image',
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
  1 => 'image',
);
