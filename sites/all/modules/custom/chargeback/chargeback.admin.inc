<?php

/**
 * @file
 * Admin functions for this module.
 */


/**
 * Page callback
 */
function chargeback_admin() 
{
  return drupal_get_form('chargeback_admin_settings');
}

/**
 * Admin settings config form
 */
function chargeback_admin_settings($form, &$form_state) 
{
    $form['chargeback_cf_url'] = array(
    '#title'            => t('Cloud Forms URL'),
    '#description'      => t('This is the base URL for Cloud Forms.'),
    '#type'             => 'textfield',
    '#default_value'    => variable_get('chargeback_cf_url', CB_CF_URL),
    );

    $form['chargeback_cf_username'] = array(
    '#title'            => t('Cloud Forms Username'),
    '#description'      => t('Enter the Cloud Forums username here.'),
    '#type'             => 'textfield',
    '#default_value'    => variable_get('chargeback_cf_user', CB_CF_USER),
    );

    $form['chargeback_cf_password'] = array(
    '#title'            => t('Cloud Forms Password'),
    '#description'      => t('Enter the Cloud Forums password here.'),
    '#type'             => 'textfield',
    '#default_value'    => variable_get('chargeback_cf_pass', CB_CF_PASS),
    );

  return system_settings_form($form);
}