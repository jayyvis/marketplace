<?php
/**
 * @file
 * rules_config.rules_email_project_published.inc
 */

$api = '2.0.0';

$data = entity_import('rules_config', '{ "rules_email_project_published" : {
      "LABEL" : "Email when new project is published",
      "PLUGIN" : "reaction rule",
      "OWNER" : "rules",
      "REQUIRES" : [ "rules", "bah_project" ],
      "ON" : { "node_update--project" : { "bundle" : "project" } },
      "IF" : [
        { "NOT node_is_published" : { "node" : [ "node-unchanged" ] } },
        { "node_is_published" : { "node" : [ "node" ] } }
      ],
      "DO" : [
        { "bah_project_actions_update_project_req_state" : { "node" : [ "node" ] } }
      ]
    }
  }');

$dependencies = array();

$optional = array();

$modules = array(
  0 => 'entity',
  1 => 'bah_project',
  2 => 'rules',
);
