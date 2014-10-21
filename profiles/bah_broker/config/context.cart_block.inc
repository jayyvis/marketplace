<?php
/**
 * @file
 * context.cart_block.inc
 */

$api = '2.0.0';

$data = $context = new stdClass();
$context->disabled = FALSE; /* Edit this to true to make a default context disabled initially */
$context->api_version = 3;
$context->name = 'cart_block';
$context->description = 'The shopping cart block';
$context->tag = 'Internal';
$context->conditions = array(
  'node' => array(
    'values' => array(
      'product' => 'product',
    ),
    'options' => array(
      'node_form' => '0',
    ),
  ),
  'views' => array(
    'values' => array(
      'service_catalog' => 'service_catalog',
    ),
  ),
);
$context->reactions = array(
  'block' => array(
    'blocks' => array(
      'commerce_cart-cart' => array(
        'module' => 'commerce_cart',
        'delta' => 'cart',
        'region' => 'sidebar_second',
        'weight' => '-10',
      ),
    ),
  ),
);
$context->condition_mode = 0;

// Translatables
// Included for use with string extractors like potx.
t('Internal');
t('The shopping cart block');


$dependencies = array();

$optional = array();

$modules = array(
  0 => 'ctools',
  1 => 'context',
);
