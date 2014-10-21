<?php
/**
 * @file
 * rules_config.rules_og_new_content.inc
 */

$api = '2.0.0';

$data = entity_import('rules_config', '{ "rules_og_new_content" : {
      "LABEL" : "OG new content notification",
      "PLUGIN" : "reaction rule",
      "ACTIVE" : false,
      "OWNER" : "rules",
      "REQUIRES" : [ "og", "rules" ],
      "ON" : { "node_insert" : [] },
      "IF" : [ { "og_entity_is_group_content" : { "entity" : [ "node" ] } } ],
      "DO" : [
        { "og_get_members" : {
            "USING" : { "group_content" : [ "node" ] },
            "PROVIDE" : { "group_members" : { "group_members" : "List of group members" } }
          }
        },
        { "LOOP" : {
            "USING" : { "list" : [ "group-members" ] },
            "ITEM" : { "list_item" : "Current list item" },
            "DO" : [
              { "mail" : {
                  "to" : [ "list-item:mail" ],
                  "subject" : "New post in group",
                  "message" : "Hello [list-item:name],\\r\\n\\r\\nThere is a new post called [node:title] that belongs to one of the groups you are subscribed to.\\r\\n\\r\\n[site:name]\\r\\n",
                  "from" : [ "" ]
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
  1 => 'og',
  2 => 'rules',
);
