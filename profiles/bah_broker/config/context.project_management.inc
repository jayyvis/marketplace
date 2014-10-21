<?php
/**
 * @file
 * context.project_management.inc
 */

$api = '2.0.0';

$data = $context = new stdClass();
$context->disabled = FALSE; /* Edit this to true to make a default context disabled initially */
$context->api_version = 3;
$context->name = 'project_management';
$context->description = 'show blocks on Project Management page';
$context->tag = 'Internal';
$context->conditions = array(
  'path' => array(
    'values' => array(
      'project-management' => 'project-management',
    ),
  ),
);
$context->reactions = array(
  'block' => array(
    'blocks' => array(
      'views-my_project_requests-block' => array(
        'module' => 'views',
        'delta' => 'my_project_requests-block',
        'region' => 'content',
        'weight' => '-10',
      ),
      'views-project_management-block_1' => array(
        'module' => 'views',
        'delta' => 'project_management-block_1',
        'region' => 'content',
        'weight' => '-9',
      ),
    ),
  ),
);
$context->condition_mode = 1;

// Translatables
// Included for use with string extractors like potx.
t('Internal');
t('show blocks on Project Management page');


$dependencies = array();

$optional = array();

$modules = array(
  0 => 'ctools',
  1 => 'context',
);
