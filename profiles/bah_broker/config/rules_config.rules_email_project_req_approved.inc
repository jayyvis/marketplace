<?php
/**
 * @file
 * rules_config.rules_email_project_req_approved.inc
 */

$api = '2.0.0';

$data = entity_import('rules_config', '{ "rules_email_project_req_approved" : {
      "LABEL" : "Email when project_req set to Approved",
      "PLUGIN" : "reaction rule",
      "OWNER" : "rules",
      "REQUIRES" : [ "rules" ],
      "ON" : { "node_update--project_req" : { "bundle" : "project_req" } },
      "IF" : [
        { "data_is" : { "data" : [ "node:field-proj-req-state" ], "value" : "5" } }
      ],
      "DO" : [
        { "variable_add" : {
            "USING" : {
              "type" : "text",
              "value" : "This is the email to notify you that the following Project Request has been Approved. Check out here, [node:url]\\r\\nComments:\\r\\n[node:workflow-current-state-log-entry]"
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
            "roles" : { "value" : { "5" : "5", "6" : "6" } },
            "subject" : "[message-subject:value]",
            "message" : "[message-body:value]"
          }
        },
        { "mail" : {
            "to" : "sherman_john@bah.com",
            "subject" : "Attn Networking Cloud Broker Project Approved [node:field-app-code]",
            "message" : "- Juniper vGW add tagging for project ID",
            "language" : [ "" ]
          }
        },
        { "mail" : {
            "to" : "sherman_john@bah.com",
            "subject" : "Attn Windows System Admins Cloud Broker Project Approved [node:field-app-code]",
            "message" : "-Add AD Username to AD Groups (Windows)\\r\\n-Disable Firewall",
            "language" : [ "" ]
          }
        },
        { "mail" : {
            "to" : "sherman_john@bah.com",
            "subject" : "Attn Broker Admins Cloud Broker Project Approved [node:field-app-code]",
            "message" : "-Create AD users\\r\\n-Create Parent VA Change Order for a Project\\r\\n-Create Project in Broker\\r\\n-Create\\/Change AD groups and LDAP Netgroups\\r\\n",
            "language" : [ "" ]
          }
        },
        { "mail" : {
            "to" : "sherman_john@bah.com",
            "subject" : "Attn A\\u0026A Team Cloud Broker Project Approved [node:field-app-code]",
            "message" : "-Authorization and Accreditation ",
            "language" : [ "" ]
          }
        },
        { "mail" : {
            "to" : "sherman_john@bah.com",
            "subject" : "Attn Technical Security Team Cloud Broker Project Approved [node:field-app-code]",
            "message" : "-changes to Technical Security",
            "language" : [ "" ]
          }
        },
        { "mail" : {
            "to" : "sherman_john@bah.com",
            "subject" : "Attn Exchange Admins Team Cloud Broker Project Approved [node:field-app-code]",
            "message" : "-Create new GAL for customer",
            "language" : [ "" ]
          }
        },
        { "mail" : {
            "to" : "sherman_john@bah.com",
            "subject" : "Attn VMware System Admins Team Cloud Broker Project Approved [node:field-app-code]",
            "message" : "-Create Resource Pools in vCenter",
            "language" : [ "" ]
          }
        },
        { "mail" : {
            "to" : "sherman_john@bah.com",
            "subject" : "Attn Tech Writer Cloud Broker Project Approved [node:field-app-code]",
            "message" : "-Create SharePoint site for the new Project",
            "language" : [ "" ]
          }
        },
        { "mail" : {
            "to" : "sherman_john@bah.com",
            "subject" : "Attn LDAP admin Cloud Broker Project Approved [node:field-app-code]",
            "message" : "-Create UNIX ID and add to LDAP Netgroups (Linux)",
            "language" : [ "" ]
          }
        },
        { "mail" : {
            "to" : "sherman_john@bah.com",
            "subject" : "Attn Sys Admins Linux\\/Windows Cloud Broker Project Approved [node:field-app-code]",
            "message" : "-Request\\/Install SSL certificate",
            "language" : [ "" ]
          }
        },
        { "mail" : {
            "to" : "sherman_john@bah.com",
            "subject" : "Attn Sys Admin AD group Cloud Broker Project Approved [node:field-app-code]",
            "message" : "-User access changes (Windows)",
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
