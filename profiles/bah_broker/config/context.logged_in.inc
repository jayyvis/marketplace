<?php
/**
 * @file
 * context.logged_in.inc
 */

$api = '2.0.0';

$data = $context = new stdClass();
$context->disabled = FALSE; /* Edit this to true to make a default context disabled initially */
$context->api_version = 3;
$context->name = 'logged_in';
$context->description = 'Set regions and menus for logged in users';
$context->tag = 'logged in';
$context->conditions = array(
  'user' => array(
    'values' => array(
      'authenticated user' => 'authenticated user',
    ),
  ),
);
$context->reactions = array(
  'block' => array(
    'blocks' => array(
      'system-user-menu' => array(
        'module' => 'system',
        'delta' => 'user-menu',
        'region' => 'header',
        'weight' => '-10',
      ),
    ),
  ),
);
$context->condition_mode = 1;

// Translatables
// Included for use with string extractors like potx.
t('Set regions and menus for logged in users');
t('logged in');


$dependencies = array();

$optional = array();

$modules = array(
  0 => 'ctools',
  1 => 'context',
);
