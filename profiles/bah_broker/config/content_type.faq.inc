<?php
/**
 * @file
 * content_type.faq.inc
 */

$api = '2.0.0';

$data = (object) array(
  'type' => 'faq',
  'name' => 'FAQ',
  'description' => 'A frequently asked question and its answer.',
  'has_title' => '1',
  'title_label' => 'Question',
  'base' => 'node_content',
  'help' => '',
);

$dependencies = array(
  'variable.field_bundle_settings_node__faq' => 'variable.field_bundle_settings_node__faq',
  'variable.node_options_faq' => 'variable.node_options_faq',
  'variable.node_submitted_faq' => 'variable.node_submitted_faq',
);

$optional = array(
  'field.node.body.faq' => 'field.node.body.faq',
  'permission.create_faq_content' => 'permission.create_faq_content',
  'permission.edit_own_faq_content' => 'permission.edit_own_faq_content',
  'permission.edit_any_faq_content' => 'permission.edit_any_faq_content',
  'permission.delete_own_faq_content' => 'permission.delete_own_faq_content',
  'permission.delete_any_faq_content' => 'permission.delete_any_faq_content',
);

$modules = array(
  0 => 'node',
);
