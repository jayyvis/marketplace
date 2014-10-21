<?php
/**
 * @file
 * context.service_catalog.inc
 */

$api = '2.0.0';

$data = $context = new stdClass();
$context->disabled = FALSE; /* Edit this to true to make a default context disabled initially */
$context->api_version = 3;
$context->name = 'service_catalog';
$context->description = 'Context for the Service Catalog page';
$context->tag = 'Internal';
$context->conditions = array(
  'path' => array(
    'values' => array(
      'catalog-links' => 'catalog-links',
    ),
  ),
  'user' => array(
    'values' => array(
      'administrator' => 'administrator',
      'authenticated user' => 'authenticated user',
    ),
  ),
);
$context->reactions = array(
  'block' => array(
    'blocks' => array(
      'block-12' => array(
        'module' => 'block',
        'delta' => '12',
        'region' => 'content',
        'weight' => '-10',
      ),
      'block-3' => array(
        'module' => 'block',
        'delta' => '3',
        'region' => 'content',
        'weight' => '-9',
      ),
    ),
  ),
);
$context->condition_mode = 1;

// Translatables
// Included for use with string extractors like potx.
t('Context for the Service Catalog page');
t('Internal');


$dependencies = array();

$optional = array();

$modules = array(
  0 => 'ctools',
  1 => 'context',
);
