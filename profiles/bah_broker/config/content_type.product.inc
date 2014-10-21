<?php
/**
 * @file
 * content_type.product.inc
 */

$api = '2.0.0';

$data = (object) array(
  'type' => 'product',
  'name' => 'Product',
  'description' => 'Use <em>products</em> to represent items for sale on the website.',
  'has_title' => '1',
  'title_label' => 'Product Name',
  'base' => 'node_content',
  'help' => 'Name of the product',
);

$dependencies = array(
  'variable.field_bundle_settings_node__product' => 'variable.field_bundle_settings_node__product',
  'variable.node_options_product' => 'variable.node_options_product',
  'variable.node_preview_product' => 'variable.node_preview_product',
  'variable.node_submitted_product' => 'variable.node_submitted_product',
);

$optional = array(
  'field.node.body.product' => 'field.node.body.product',
  'field.node.field_server_image.product' => 'field.node.field_server_image.product',
  'field.node.field_product.product' => 'field.node.field_product.product',
  'permission.create_product_content' => 'permission.create_product_content',
  'permission.edit_own_product_content' => 'permission.edit_own_product_content',
  'permission.edit_any_product_content' => 'permission.edit_any_product_content',
  'permission.delete_own_product_content' => 'permission.delete_own_product_content',
  'permission.delete_any_product_content' => 'permission.delete_any_product_content',
);

$modules = array(
  0 => 'node',
);
