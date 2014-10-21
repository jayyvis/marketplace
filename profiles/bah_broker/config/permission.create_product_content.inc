<?php
/**
 * @file
 * permission.create_product_content.inc
 */

$api = '2.0.0';

$data = array(
  'permission' => 'create product content',
  'roles' => array(
    0 => 'administrator',
  ),
);

$dependencies = array(
  'content_type.product' => 'content_type.product',
);

$optional = array();

$modules = array(
  0 => 'node',
);
