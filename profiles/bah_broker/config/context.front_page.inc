<?php
/**
 * @file
 * context.front_page.inc
 */

$api = '2.0.0';

$data = $context = new stdClass();
$context->disabled = FALSE; /* Edit this to true to make a default context disabled initially */
$context->api_version = 3;
$context->name = 'front_page';
$context->description = 'The context for the front page ad';
$context->tag = 'frontpage';
$context->conditions = array(
  'path' => array(
    'values' => array(
      '<front>' => '<front>',
    ),
  ),
);
$context->reactions = array(
  'block' => array(
    'blocks' => array(
      'block-1' => array(
        'module' => 'block',
        'delta' => '1',
        'region' => 'frontpagead',
        'weight' => '-10',
      ),
      'block-2' => array(
        'module' => 'block',
        'delta' => '2',
        'region' => 'content',
        'weight' => '10',
      ),
    ),
  ),
);
$context->condition_mode = 1;

// Translatables
// Included for use with string extractors like potx.
t('The context for the front page ad');
t('frontpage');


$dependencies = array();

$optional = array();

$modules = array(
  0 => 'ctools',
  1 => 'context',
);
