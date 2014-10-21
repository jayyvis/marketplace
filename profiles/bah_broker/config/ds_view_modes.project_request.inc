<?php
/**
 * @file
 * ds_view_modes.project_request.inc
 */

$api = '2.0.0';

$data = $ds_view_mode = new stdClass();
$ds_view_mode->api_version = 1;
$ds_view_mode->view_mode = 'project_request';
$ds_view_mode->label = 'Project Request';
$ds_view_mode->entities = array(
  'user' => 'user',
);


$dependencies = array();

$optional = array();

$modules = array(
  0 => 'ctools',
  1 => 'ds',
);
