<?php
/**
 * @file
 * context.product_display.inc
 */

$api = '2.0.0';

$data = $context = new stdClass();
$context->disabled = FALSE; /* Edit this to true to make a default context disabled initially */
$context->api_version = 3;
$context->name = 'product_display';
$context->description = 'Show blocks on the product display page';
$context->tag = 'Internal';
$context->conditions = array(
  'node' => array(
    'values' => array(
      'server' => 'server',
    ),
    'options' => array(
      'node_form' => '1',
    ),
  ),
);
$context->reactions = array();
$context->condition_mode = 1;

// Translatables
// Included for use with string extractors like potx.
t('Internal');
t('Show blocks on the product display page');


$dependencies = array();

$optional = array();

$modules = array(
  0 => 'ctools',
  1 => 'context',
);
