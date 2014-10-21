<?php
/**
 * @file
 * permission.edit_any_project_req_content.inc
 */

$api = '2.0.0';

$data = array(
  'permission' => 'edit any project_req content',
  'roles' => array(
    0 => 'Project Administrator',
    1 => 'System Administrator',
    2 => 'administrator',
  ),
);

$dependencies = array(
  'content_type.project_req' => 'content_type.project_req',
);

$optional = array();

$modules = array(
  0 => 'node',
);
