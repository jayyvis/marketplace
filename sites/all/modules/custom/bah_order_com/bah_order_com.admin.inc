<?php

/**
 * @file
 * Admin functions for this module.
 */


/**
 * Page callback
 */
function bah_order_com_admin() {
  return drupal_get_form('bah_order_com_admin_settings');
}

/**
 * Admin settings config form
 */
function bah_order_com_admin_settings($form, &$form_state) {
  $form['bah_order_com_queue_timeout'] = array(
    '#title'   => t('Queue Timeout'),
    '#description' => t('The amount of time (in seconds) queues are allowed to process before they are considered timed-out.  NOTE: This value must be less than the PHP timeout.'),
    '#type'    => 'textfield',
    '#default_value' => variable_get('bah_order_com_queue_timeout', 240),
  );

  $form['bah_order_com_receive_key'] = array(
    '#title'   => t('Receive - API Key'),
    '#description' => t('This key must be provided in the querystring.'),
    '#type'    => 'textfield',
    '#default_value' => variable_get('bah_order_com_receive_key', BAH_RECEIVE_APIKEY),
  );

  $form['bah_order_com_transmit_url'] = array(
    '#title'   => t('Transmit URL'),
    '#description' => t('This is the URL to send order data to, which queues on communication failure.'),
    '#type'    => 'textfield',
    '#default_value' => variable_get('bah_order_com_transmit_url', BAH_TRANSMIT_URL),
  );

  $form['bah_order_com_transmit_username'] = array(
    '#title'   => t('Transmit Username'),
    '#description' => t('If the Transmit URL requires Basic Authentication, enter the username here.'),
    '#type'    => 'textfield',
    '#default_value' => variable_get('bah_order_com_transmit_username', ''),
  );

  $form['bah_order_com_transmit_password'] = array(
    '#title'   => t('Transmit Password'),
    '#description' => t('If the Transmit URL requires Basic Authentication, enter the username here.'),
    '#type'    => 'textfield',
    '#default_value' => variable_get('bah_order_com_transmit_password', ''),
  );

  // @todo Change this to a select list with available webforms.
  $form['bah_order_com_trial_nid'] = array(
    '#title'   => t('Trial - Node ID'),
    '#description' => t('Specify the NID value to the "trial" webform.'),
    '#type'    => 'textfield',
    '#default_value' => variable_get('bah_order_com_trial_nid', 0),
  );

  $form['bah_order_com_trial_oid'] = array(
    '#title'   => t('Trial - Order ID'),
    '#description' => t('Specify the order ID value for the "trial" order.'),
    '#type'    => 'textfield',
    '#default_value' => variable_get('bah_order_com_trial_oid', 0),
  );

  //$form['#submit'][] = 'bah_order_com_admin_settings_submit';

  return system_settings_form($form);
}

/**
 * Submit handler for the admin settings form
 */
function bah_order_com_admin_settings_submit($form, &$form_state) {
  // STUB
}
