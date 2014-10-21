<?php
/**
 * @file
 * permission.delete_own_project_req_content.inc
 */

$api = '2.0.0';

$data = array(
  'permission' => 'delete own project_req content',
  'roles' => array(
    0 => 'authenticated user',
  ),
);

$dependencies = array(
  'content_type.project_req' => 'content_type.project_req',
);

$optional = array();

$modules = array(
  0 => 'node',
);
