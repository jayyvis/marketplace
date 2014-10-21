<?php
/**
 * @file
 * rules_config.rules_bah_month_adjustments.inc
 */

$api = '2.0.0';

$data = entity_import('rules_config', '{ "rules_bah_month_adjustments" : {
      "LABEL" : "BAH Month Adjustments",
      "PLUGIN" : "reaction rule",
      "OWNER" : "rules",
      "REQUIRES" : [
        "commerce_product_dimensions",
        "commerce_line_item",
        "commerce_product_reference"
      ],
      "ON" : { "commerce_product_calculate_sell_price" : [] },
      "DO" : [
        { "commerce_product_dimensions_get_factor" : {
            "USING" : { "commerce_line_item" : [ "commerce_line_item" ] },
            "PROVIDE" : {
              "dimension_factor" : { "dimension_factor" : "Multiplication Factor" },
              "dimension_base_price" : { "dimension_base_price" : "Adjusted Base Price" }
            }
          }
        },
        { "commerce_line_item_unit_price_multiply" : {
            "commerce_line_item" : [ "commerce_line_item" ],
            "amount" : [ "dimension-factor" ],
            "component_name" : "base_price",
            "round_mode" : "1"
          }
        }
      ]
    }
  }');

$dependencies = array();

$optional = array();

$modules = array(
  0 => 'entity',
  1 => 'commerce_line_item',
  2 => 'commerce_product_dimensions',
  3 => 'commerce_product_reference',
  4 => 'rules',
);
