<?php
/**
 * @file
 * rules_config.rules_email_new_project_created.inc
 */

$api = '2.0.0';

$data = entity_import('rules_config', '{ "rules_email_new_project_created" : {
      "LABEL" : "Email when new project is created",
      "PLUGIN" : "reaction rule",
      "OWNER" : "rules",
      "REQUIRES" : [ "rules" ],
      "ON" : { "node_insert--project" : { "bundle" : "project" } },
      "DO" : [
        { "node_unpublish" : { "node" : [ "node" ] } },
        { "variable_add" : {
            "USING" : {
              "type" : "text",
              "value" : "This is the email to notify you that the following Project has been created. Check out here, [node:url]"
            },
            "PROVIDE" : { "variable_added" : { "message_body" : "Message Body" } }
          }
        },
        { "variable_add" : {
            "USING" : {
              "type" : "text",
              "value" : "Notification from U.S. Department of Veterans Affairs"
            },
            "PROVIDE" : { "variable_added" : { "message_subject" : "Message Subject" } }
          }
        },
        { "mail_to_users_of_role" : {
            "roles" : { "value" : { "6" : "6" } },
            "subject" : "[message-subject:value]",
            "message" : "[message-body:value]"
          }
        }
      ]
    }
  }');

$dependencies = array();

$optional = array();

$modules = array(
  0 => 'entity',
  1 => 'rules',
);
