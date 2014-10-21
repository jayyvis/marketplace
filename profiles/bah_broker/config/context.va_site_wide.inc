<?php
/**
 * @file
 * context.va_site_wide.inc
 */

$api = '2.0.0';

$data = $context = new stdClass();
$context->disabled = FALSE; /* Edit this to true to make a default context disabled initially */
$context->api_version = 3;
$context->name = 'va_site_wide';
$context->description = 'VA Site Wide Context';
$context->tag = 'site wide';
$context->conditions = array(
  'sitewide' => array(
    'values' => array(
      1 => 1,
    ),
  ),
);
$context->reactions = array(
  'block' => array(
    'blocks' => array(
      'block-4' => array(
        'module' => 'block',
        'delta' => '4',
        'region' => 'footer',
        'weight' => '-10',
      ),
    ),
  ),
  'region' => array(
    'bartik' => array(
      'disable' => array(
        'header' => 0,
        'help' => 0,
        'page_top' => 0,
        'page_bottom' => 0,
        'highlighted' => 0,
        'featured' => 0,
        'content' => 0,
        'sidebar_first' => 0,
        'sidebar_second' => 0,
        'triptych_first' => 0,
        'triptych_middle' => 0,
        'triptych_last' => 0,
        'footer_firstcolumn' => 0,
        'footer_secondcolumn' => 0,
        'footer_thirdcolumn' => 0,
        'footer_fourthcolumn' => 0,
        'footer' => 0,
      ),
    ),
    'va_broker' => array(
      'disable' => array(
        'branding' => 'branding',
        'help' => 'help',
        'header' => 0,
        'navigation' => 0,
        'frontpagead' => 0,
        'highlighted' => 0,
        'content' => 0,
        'sidebar_first' => 0,
        'sidebar_second' => 0,
        'footer' => 0,
      ),
    ),
  ),
);
$context->condition_mode = 1;

// Translatables
// Included for use with string extractors like potx.
t('VA Site Wide Context');
t('site wide');


$dependencies = array();

$optional = array();

$modules = array(
  0 => 'ctools',
  1 => 'context',
);
