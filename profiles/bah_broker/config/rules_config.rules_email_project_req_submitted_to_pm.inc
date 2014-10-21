<?php
/**
 * @file
 * rules_config.rules_email_project_req_submitted_to_pm.inc
 */

$api = '2.0.0';

$data = entity_import('rules_config', '{ "rules_email_project_req_submitted_to_pm" : {
      "LABEL" : "Email when project_req set to Submitted to PM",
      "PLUGIN" : "reaction rule",
      "ACTIVE" : false,
      "OWNER" : "rules",
      "REQUIRES" : [ "rules" ],
      "ON" : { "node_update--project_req" : { "bundle" : "project_req" } },
      "IF" : [
        { "data_is" : { "data" : [ "node:field-proj-req-state" ], "value" : "3" } }
      ],
      "DO" : [
        { "variable_add" : {
            "USING" : {
              "type" : "text",
              "value" : "This is the email to notify you that the following Project Request has been submitted to the Program Manager. Check out here, [node:url]\\r\\nComments:\\r\\n[node:workflow-current-state-log-entry]"
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
