<?php
/**
 * @file
 * context.service_catalog_logged_out.inc
 */

$api = '2.0.0';

$data = $context = new stdClass();
$context->disabled = FALSE; /* Edit this to true to make a default context disabled initially */
$context->api_version = 3;
$context->name = 'service_catalog_logged_out';
$context->description = 'Context for the Service Catalog page when logged out';
$context->tag = 'Internal';
$context->conditions = array(
  'path' => array(
    'values' => array(
      'catalog-links' => 'catalog-links',
    ),
  ),
  'user' => array(
    'values' => array(
      'anonymous user' => 'anonymous user',
    ),
  ),
);
$context->reactions = array(
  'block' => array(
    'blocks' => array(
      'block-7' => array(
        'module' => 'block',
        'delta' => '7',
        'region' => 'content',
        'weight' => '-10',
      ),
    ),
  ),
);
$context->condition_mode = 1;

// Translatables
// Included for use with string extractors like potx.
t('Context for the Service Catalog page when logged out');
t('Internal');


$dependencies = array();

$optional = array();

$modules = array(
  0 => 'ctools',
  1 => 'context',
);
