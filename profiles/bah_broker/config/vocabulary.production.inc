<?php
/**
 * @file
 * vocabulary.production.inc
 */

$api = '2.0.0';

$data = (object) array(
  'vid' => '7',
  'name' => 'Production',
  'machine_name' => 'production',
  'description' => 'Production environment includes EO security and performance monitoring and replicated storage.',
  'hierarchy' => '0',
  'module' => 'taxonomy',
  'weight' => '0',
);

$dependencies = array();

$optional = array();

$modules = array(
  0 => 'taxonomy',
);
