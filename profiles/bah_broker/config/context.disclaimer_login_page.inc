<?php
/**
 * @file
 * context.disclaimer_login_page.inc
 */

$api = '2.0.0';

$data = $context = new stdClass();
$context->disabled = FALSE; /* Edit this to true to make a default context disabled initially */
$context->api_version = 3;
$context->name = 'disclaimer_login_page';
$context->description = 'Context for showing the disclaimer on the user page';
$context->tag = 'logout';
$context->conditions = array(
  'path' => array(
    'values' => array(
      'user' => 'user',
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
      'block-8' => array(
        'module' => 'block',
        'delta' => '8',
        'region' => 'content',
        'weight' => '-10',
      ),
    ),
  ),
);
$context->condition_mode = 1;

// Translatables
// Included for use with string extractors like potx.
t('Context for showing the disclaimer on the user page');
t('logout');


$dependencies = array();

$optional = array();

$modules = array(
  0 => 'ctools',
  1 => 'context',
);
