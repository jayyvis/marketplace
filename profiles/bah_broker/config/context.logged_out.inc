<?php
/**
 * @file
 * context.logged_out.inc
 */

$api = '2.0.0';

$data = $context = new stdClass();
$context->disabled = FALSE; /* Edit this to true to make a default context disabled initially */
$context->api_version = 3;
$context->name = 'logged_out';
$context->description = 'Set regions and menus for logged out users';
$context->tag = 'logged out';
$context->conditions = array(
  'user' => array(
    'values' => array(
      'anonymous user' => 'anonymous user',
    ),
  ),
);
$context->reactions = array(
  'block' => array(
    'blocks' => array(
      'menu-menu-user-menu-logged-out' => array(
        'module' => 'menu',
        'delta' => 'menu-user-menu-logged-out',
        'region' => 'header',
        'weight' => '-10',
      ),
    ),
  ),
);
$context->condition_mode = 1;

// Translatables
// Included for use with string extractors like potx.
t('Set regions and menus for logged out users');
t('logged out');


$dependencies = array();

$optional = array();

$modules = array(
  0 => 'ctools',
  1 => 'context',
);
