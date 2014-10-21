<?php
/**
 * @file
 * rules_config.commerce_payment_commerce_og_credit.inc
 */

$api = '2.0.0';

$data = entity_import('rules_config', '{ "commerce_payment_commerce_og_credit" : {
      "LABEL" : "OG Credits",
      "PLUGIN" : "reaction rule",
      "OWNER" : "rules",
      "TAGS" : [ "Commerce Payment" ],
      "REQUIRES" : [ "commerce_payment" ],
      "ON" : { "commerce_payment_methods" : [] },
      "DO" : [
        { "commerce_payment_enable_commerce_og_credit" : {
            "commerce_order" : [ "commerce-order" ],
            "payment_method" : "commerce_og_credit"
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
