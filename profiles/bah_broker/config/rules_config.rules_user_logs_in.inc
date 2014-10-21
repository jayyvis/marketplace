<?php
/**
 * @file
 * rules_config.rules_user_logs_in.inc
 */

$api = '2.0.0';

$data = entity_import('rules_config', '{ "rules_user_logs_in" : {
      "LABEL" : "User Logs In",
      "PLUGIN" : "reaction rule",
      "OWNER" : "rules",
      "TAGS" : [ "login" ],
      "REQUIRES" : [ "rules" ],
      "ON" : { "user_login" : [] },
      "DO" : [ { "redirect" : { "url" : "user", "force" : 0 } } ]
    }
  }');

$dependencies = array();

$optional = array();

$modules = array(
  0 => 'entity',
  1 => 'rules',
);
