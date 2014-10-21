<?php
/**
 * @file
 * rules_config.rules_email_project_req_from_pm_to_pending.inc
 */

$api = '2.0.0';

$data = entity_import('rules_config', '{ "rules_email_project_req_from_pm_to_pending" : {
      "LABEL" : "Email when project_req moves from PM back to Pending",
      "PLUGIN" : "reaction rule",
      "ACTIVE" : false,
      "OWNER" : "rules",
      "REQUIRES" : [ "rules" ],
      "ON" : { "node_update--project_req" : { "bundle" : "project_req" } },
      "IF" : [
        { "data_is" : { "data" : [ "node-unchanged:field-proj-req-state" ], "value" : "3" } },
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
            "PROVIDE" : { "variable_added" : { "message_subject" : "Message Subject" } }
          }
        },
        { "mail" : {
            "to" : "[node:author:mail]",
            "subject" : "[message-subject:value]",
            "message" : "[message-body:value]",
            "language" : [ "" ]
          }
        },
        { "LOOP" : {
            "USING" : { "list" : [ "node:field-add-pm" ] },
            "ITEM" : { "notify_pm" : "Notify PM" },
            "DO" : [
              { "mail" : {
                  "to" : "[notify-pm:mail]",
                  "subject" : "[message-subject:value]",
                  "message" : "[message-body:value]",
                  "language" : [ "" ]
                }
              }
            ]
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
