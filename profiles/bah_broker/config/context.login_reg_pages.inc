<?php
/**
 * @file
 * context.login_reg_pages.inc
 */

$api = '2.0.0';

$data = $context = new stdClass();
$context->disabled = FALSE; /* Edit this to true to make a default context disabled initially */
$context->api_version = 3;
$context->name = 'login_reg_pages';
$context->description = '';
$context->tag = 'logged out';
$context->conditions = array(
  'path' => array(
    'values' => array(
      'user/login' => 'user/login',
      'user/register' => 'user/register',
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
        'region' => 'above_content',
        'weight' => '-10',
      ),
      'block-11' => array(
        'module' => 'block',
        'delta' => '11',
        'region' => 'content',
        'weight' => '-10',
      ),
    ),
  ),
);
$context->condition_mode = 1;

// Translatables
// Included for use with string extractors like potx.
t('logged out');


$dependencies = array();

$optional = array();

$modules = array(
  0 => 'ctools',
  1 => 'context',
);
