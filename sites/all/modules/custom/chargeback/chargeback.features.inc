<?php
/**
 * @file
 * chargeback.features.inc
 */

/**
 * Implements hook_node_info().
 */
function chargeback_node_info() {
  $items = array(
    'chargeback' => array(
      'name' => t('Chargeback'),
      'base' => 'node_content',
      'description' => t('Chargeback information for computing resources for resource pool information gathered from Red Hat Cloud Forms'),
      'has_title' => '1',
      'title_label' => t('Title'),
      'help' => '',
    ),
  );
  return $items;
}
