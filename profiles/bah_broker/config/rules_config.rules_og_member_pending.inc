<?php
/**
 * @file
 * rules_config.rules_og_member_pending.inc
 */

$api = '2.0.0';

$data = entity_import('rules_config', '{ "rules_og_member_pending" : {
      "LABEL" : "OG member subscribe (Pending)",
      "PLUGIN" : "reaction rule",
      "ACTIVE" : false,
      "OWNER" : "rules",
      "REQUIRES" : [ "rules", "og" ],
      "ON" : { "og_user_insert" : [] },
      "IF" : [
        { "data_is" : { "data" : [ "og-membership:state" ], "value" : "2" } },
        { "entity_is_of_type" : { "entity" : [ "og-membership:group" ], "type" : "node" } }
      ],
      "DO" : [
        { "variable_add" : {
            "USING" : { "type" : "node", "value" : [ "og-membership:group" ] },
            "PROVIDE" : { "variable_added" : { "group" : "Added variable" } }
          }
        },
        { "mail" : {
            "to" : [ "account:mail" ],
            "subject" : "Your membership request for \\u0027[group:title]\\u0027",
            "message" : "[account:name],\\r\\n\\r\\nYour membership to group \\u0027[group:title]\\u0027 located at [group:url] is pending approval."
          }
        },
        { "mail" : {
            "to" : [ "group:author:mail" ],
            "subject" : "[account:name] membership request [group:title]",
            "message" : "[group:author:name],\\r\\n\\r\\n[account:name] requests membership for group \\u0027[group:title]\\u0027 in [group:url].\\r\\n\\r\\n[og_membership:og-membership-request]"
          }
        }
      ]
    }
  }');

$dependencies = array();

$optional = array();

$modules = array(
  0 => 'entity',
  1 => 'og',
  2 => 'rules',
);
