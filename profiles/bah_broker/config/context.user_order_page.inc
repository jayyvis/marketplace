<?php
/**
 * @file
 * context.user_order_page.inc
 */

$api = '2.0.0';

$data = $context = new stdClass();
$context->disabled = FALSE; /* Edit this to true to make a default context disabled initially */
$context->api_version = 3;
$context->name = 'user_order_page';
$context->description = '';
$context->tag = 'Internal';
$context->conditions = array(
  'path' => array(
    'values' => array(
      'user/*/orders/*' => 'user/*/orders/*',
    ),
  ),
);
$context->reactions = array(
  'block' => array(
    'blocks' => array(
      'views-order_product_instances-block' => array(
        'module' => 'views',
        'delta' => 'order_product_instances-block',
        'region' => 'content',
        'weight' => '-10',
      ),
    ),
  ),
);
$context->condition_mode = 0;

// Translatables
// Included for use with string extractors like potx.
t('Internal');


$dependencies = array();

$optional = array();

$modules = array(
  0 => 'ctools',
  1 => 'context',
);
