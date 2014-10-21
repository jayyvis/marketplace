<?php
/**
 * @file
 * rules_config.rules_create_project_when_project_req_set_to_approved.inc
 */

$api = '2.0.0';

$data = entity_import('rules_config', '{ "rules_create_project_when_project_req_set_to_approved" : {
      "LABEL" : "Create project when project_req set to Approved",
      "PLUGIN" : "reaction rule",
      "OWNER" : "rules",
      "REQUIRES" : [ "rules", "bah_project" ],
      "ON" : { "node_update--project_req" : { "bundle" : "project_req" } },
      "IF" : [
        { "data_is" : { "data" : [ "node:field-proj-req-state" ], "value" : "5" } }
      ],
      "DO" : [
        { "bah_project_actions_create_project" : { "node" : [ "node" ] } },
        { "drupal_message" : { "message" : "A new Project was just created from the approved Project Request data." } }
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
