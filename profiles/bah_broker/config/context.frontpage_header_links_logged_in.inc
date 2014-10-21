<?php
/**
 * @file
 * context.frontpage_header_links_logged_in.inc
 */

$api = '2.0.0';

$data = $context = new stdClass();
$context->disabled = FALSE; /* Edit this to true to make a default context disabled initially */
$context->api_version = 3;
$context->name = 'frontpage_header_links_logged_in';
$context->description = '';
$context->tag = 'frontpage';
$context->conditions = array(
  'path' => array(
    'values' => array(
      '<front>' => '<front>',
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
      'block-9' => array(
        'module' => 'block',
        'delta' => '9',
        'region' => 'content',
        'weight' => '-10',
      ),
    ),
  ),
);
$context->condition_mode = 1;

// Translatables
// Included for use with string extractors like potx.
t('frontpage');


$dependencies = array();

$optional = array();

$modules = array(
  0 => 'ctools',
  1 => 'context',
);
