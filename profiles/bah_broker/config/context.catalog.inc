<?php
/**
 * @file
 * context.catalog.inc
 */

$api = '2.0.0';

$data = $context = new stdClass();
$context->disabled = FALSE; /* Edit this to true to make a default context disabled initially */
$context->api_version = 3;
$context->name = 'catalog';
$context->description = 'Show blocks on the catalog page';
$context->tag = 'Internal';
$context->conditions = array(
  'path' => array(
    'values' => array(
      'catalog' => 'catalog',
    ),
  ),
);
$context->reactions = array();
$context->condition_mode = 1;

// Translatables
// Included for use with string extractors like potx.
t('Internal');
t('Show blocks on the catalog page');


$dependencies = array();

$optional = array();

$modules = array(
  0 => 'ctools',
  1 => 'context',
);
