<?php
/**
 * @file
 * permission.delete_any_product_content.inc
 */

$api = '2.0.0';

$data = array(
  'permission' => 'delete any product content',
  'roles' => array(
    0 => 'Project Administrator',
    1 => 'System Administrator',
    2 => 'administrator',
  ),
);

$dependencies = array(
  'content_type.product' => 'content_type.product',
);

$optional = array();

$modules = array(
  0 => 'node',
);
