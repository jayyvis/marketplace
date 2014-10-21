<?php
/**
 * @file
 * permission.edit_own_product_content.inc
 */

$api = '2.0.0';

$data = array(
  'permission' => 'edit own product content',
  'roles' => array(
    0 => 'authenticated user',
    1 => 'administrator',
  ),
);

$dependencies = array(
  'content_type.product' => 'content_type.product',
);

$optional = array();

$modules = array(
  0 => 'node',
);
