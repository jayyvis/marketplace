<?php

define('DRUPAL_ROOT', $_SERVER['DOCUMENT_ROOT']);
$cd = getcwd();
chdir(DRUPAL_ROOT);
require_once DRUPAL_ROOT . '/includes/bootstrap.inc';
$base_root = (isset($_SERVER['HTTPS']) && $_SERVER['HTTPS'] == 'on') ? 'https' : 'http';
$base_url = $base_root . '://' . $_SERVER['HTTP_HOST'];
drupal_bootstrap(DRUPAL_BOOTSTRAP_FULL);
chdir($cd);

// Debugging:
// print_r($GLOBALS);
// die();


// DO NOT CLOSE PHP HERE
// @see https://drupal.org/coding-standards#phptags
