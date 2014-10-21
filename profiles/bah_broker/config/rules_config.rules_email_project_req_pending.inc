<?php
/**
 * @file
 * rules_config.rules_email_project_req_pending.inc
 */

$api = '2.0.0';

$data = entity_import('rules_config', '{ "rules_email_project_req_pending" : {
      "LABEL" : "Email when project_req set to Pending",
      "PLUGIN" : "reaction rule",
      "OWNER" : "rules",
      "REQUIRES" : [ "rules" ],
      "ON" : { "node_update--project_req" : { "bundle" : "project_req" } },
      "IF" : [
        { "data_is" : { "data" : [ "node:field-proj-req-state" ], "value" : "2" } }
      ],
      "DO" : [
        { "variable_add" : {
            "USING" : {
              "type" : "text",
              "value" : "This is the email to notify you that the following Project Request is now Pending. Check out here, [node:url]\\r\\nComments:\\r\\n[node:workflow-current-state-log-entry]"
            },
            "PROVIDE" : { "variable_added" : { "message_body" : "Message Body" } }
          }
        },
        { "variable_add" : {
            "USING" : {
              "type" : "text",
              "value" : "Notification from U.S. Department of Veterans Affairs"
            },
            "PROVIDE" : { "variable_added" : { "message_subject" : "Message subject" } }
          }
        },
        { "drupal_message" : { "message" : "Notification email is scheduled for this Project Request." } },
        { "mail" : {
            "to" : "[node:author:mail]",
            "subject" : "[message-subject:value]",
            "message" : "[message-body:value]",
            "language" : [ "" ]
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
