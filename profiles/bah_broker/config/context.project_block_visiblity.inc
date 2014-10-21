<?php
/**
 * @file
 * context.project_block_visiblity.inc
 */

$api = '2.0.0';

$data = $context = new stdClass();
$context->disabled = FALSE; /* Edit this to true to make a default context disabled initially */
$context->api_version = 3;
$context->name = 'project_block_visiblity';
$context->description = '';
$context->tag = 'Internal';
$context->conditions = array(
  'path' => array(
    'values' => array(
      '*cart*' => '*cart*',
      '*checkout*' => '*checkout*',
      '~*checkout/*/complete' => '~*checkout/*/complete',
    ),
  ),
);
$context->reactions = array(
  'block' => array(
    'blocks' => array(
      'va_mod-va_mod' => array(
        'module' => 'va_mod',
        'delta' => 'va_mod',
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


$dependencies = array();

$optional = array();

$modules = array(
  0 => 'ctools',
  1 => 'context',
);
