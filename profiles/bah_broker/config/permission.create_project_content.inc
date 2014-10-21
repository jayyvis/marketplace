<?php
/**
 * @file
 * permission.create_project_content.inc
 */

$api = '2.0.0';

$data = array(
  'permission' => 'create project content',
  'roles' => array(
    0 => 'Project Administrator',
    1 => 'System Administrator',
    2 => 'administrator',
  ),
);

$dependencies = array(
  'content_type.project' => 'content_type.project',
);

$optional = array();

$modules = array(
  0 => 'node',
);