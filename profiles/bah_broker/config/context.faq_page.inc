<?php
/**
 * @file
 * context.faq_page.inc
 */

$api = '2.0.0';

$data = $context = new stdClass();
$context->disabled = FALSE; /* Edit this to true to make a default context disabled initially */
$context->api_version = 3;
$context->name = 'faq_page';
$context->description = 'The FAQ page stuffs';
$context->tag = 'Internal';
$context->conditions = array(
  'path' => array(
    'values' => array(
      'learn-more' => 'learn-more',
    ),
  ),
);
$context->reactions = array(
  'block' => array(
    'blocks' => array(
      'system-main' => array(
        'module' => 'system',
        'delta' => 'main',
        'region' => 'content',
        'weight' => '-9',
      ),
      'block-6' => array(
        'module' => 'block',
        'delta' => '6',
        'region' => 'content',
        'weight' => '-8',
      ),
    ),
  ),
);
$context->condition_mode = 0;

// Translatables
// Included for use with string extractors like potx.
t('Internal');
t('The FAQ page stuffs');


$dependencies = array();

$optional = array();

$modules = array(
  0 => 'ctools',
  1 => 'context',
);
