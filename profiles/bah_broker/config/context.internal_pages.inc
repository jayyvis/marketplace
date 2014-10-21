<?php
/**
 * @file
 * context.internal_pages.inc
 */

$api = '2.0.0';

$data = $context = new stdClass();
$context->disabled = FALSE; /* Edit this to true to make a default context disabled initially */
$context->api_version = 3;
$context->name = 'internal_pages';
$context->description = 'Context for all internal pages';
$context->tag = 'Internal';
$context->conditions = array();
$context->reactions = array(
  'block' => array(
    'blocks' => array(
      'delta_blocks-page-title' => array(
        'module' => 'delta_blocks',
        'delta' => 'page-title',
        'region' => 'highlighted',
        'weight' => '-10',
      ),
    ),
  ),
);
$context->condition_mode = 1;

// Translatables
// Included for use with string extractors like potx.
t('Context for all internal pages');
t('Internal');


$dependencies = array();

$optional = array();

$modules = array(
  0 => 'ctools',
  1 => 'context',
);
