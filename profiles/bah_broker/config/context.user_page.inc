<?php
/**
 * @file
 * context.user_page.inc
 */

$api = '2.0.0';

$data = $context = new stdClass();
$context->disabled = FALSE; /* Edit this to true to make a default context disabled initially */
$context->api_version = 3;
$context->name = 'user_page';
$context->description = '';
$context->tag = 'Internal';
$context->conditions = array(
  'user_page' => array(
    'values' => array(
      'view' => 'view',
    ),
    'options' => array(
      'mode' => 'all',
    ),
  ),
);
$context->reactions = array(
  'block' => array(
    'blocks' => array(
      'block-13' => array(
        'module' => 'block',
        'delta' => '13',
        'region' => 'content',
        'weight' => '-37',
      ),
      'views-my_project_requests-block_1' => array(
        'module' => 'views',
        'delta' => 'my_project_requests-block_1',
        'region' => 'content',
        'weight' => '-36',
      ),
      'views-my_projects-block_4' => array(
        'module' => 'views',
        'delta' => 'my_projects-block_4',
        'region' => 'content',
        'weight' => '-35',
      ),
      'views-my_project_requests-block' => array(
        'module' => 'views',
        'delta' => 'my_project_requests-block',
        'region' => 'content',
        'weight' => '-34',
      ),
      'views-my_projects-block_2' => array(
        'module' => 'views',
        'delta' => 'my_projects-block_2',
        'region' => 'content',
        'weight' => '-33',
      ),
      'views-my_orders-block' => array(
        'module' => 'views',
        'delta' => 'my_orders-block',
        'region' => 'content',
        'weight' => '-32',
      ),
      'block-11' => array(
        'module' => 'block',
        'delta' => '11',
        'region' => 'content',
        'weight' => '-31',
      ),
    ),
  ),
);
$context->condition_mode = 1;

// Translatables
// Included for use with string extractors like potx.
t('Internal');


$dependencies = array();

$optional = array();

$modules = array(
  0 => 'ctools',
  1 => 'context',
);
