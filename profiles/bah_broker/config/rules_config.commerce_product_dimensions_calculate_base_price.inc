<?php
/**
 * @file
 * rules_config.commerce_product_dimensions_calculate_base_price.inc
 */

$api = '2.0.0';

$data = entity_import('rules_config', '{ "commerce_product_dimensions_calculate_base_price" : {
      "LABEL" : "Price dependant on product dimensions",
      "PLUGIN" : "reaction rule",
      "OWNER" : "rules",
      "REQUIRES" : [
        "rules",
        "commerce_product_dimensions",
        "commerce_line_item",
        "commerce_product_reference"
      ],
      "ON" : { "commerce_product_calculate_sell_price" : [] },
      "IF" : [
        { "text_matches" : {
            "text" : [ "commerce-line-item:type" ],
            "match" : "product_with_dimensions_",
            "operation" : "starts"
          }
        }
      ],
      "DO" : [
        { "commerce_product_dimensions_get_factor" : {
            "USING" : { "commerce_line_item" : [ "commerce_line_item" ] },
            "PROVIDE" : {
              "dimension_factor" : { "dimension_factor" : "Multiplication Factor" },
              "dimension_base_price" : { "dimension_base_price" : "Adjusted Base Price" }
            }
          }
        },
        { "commerce_line_item_unit_price" : [] },
        { "commerce_line_item_unit_price_multiply" : {
            "commerce_line_item" : [ "commerce_line_item" ],
            "amount" : [ "dimension-factor" ],
            "component_name" : "base_price",
            "round_mode" : 1
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
