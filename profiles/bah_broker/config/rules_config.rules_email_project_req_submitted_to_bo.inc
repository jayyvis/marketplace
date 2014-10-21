<?php
/**
 * @file
 * rules_config.rules_email_project_req_submitted_to_bo.inc
 */

$api = '2.0.0';

$data = entity_import('rules_config', '{ "rules_email_project_req_submitted_to_bo" : {
      "LABEL" : "Email when project_req set to Submitted",
      "PLUGIN" : "reaction rule",
      "OWNER" : "rules",
      "REQUIRES" : [ "rules" ],
      "ON" : { "node_update--project_req" : { "bundle" : "project_req" } },
      "IF" : [
        { "data_is" : { "data" : [ "node:field-proj-req-state" ], "value" : "4" } }
      ],
      "DO" : [
        { "variable_add" : {
            "USING" : {
              "type" : "text",
              "value" : "This is the email to notify you that the following Project Request has been submitted to the Business Office Manager. Check out here, [node:url]\\r\\nComments:\\r\\n[node:workflow-current-state-log-entry]"
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
        },
        { "mail_to_users_of_role" : {
            "roles" : { "value" : { "5" : "5" } },
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
