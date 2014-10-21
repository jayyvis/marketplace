<?php
/**
 * @file
 * Enables modules and site configuration for a standard site installation.
 */

/**
 * Implements hook_form_FORM_ID_alter() for install_configure_form().
 *
 * Allows the profile to alter the site configuration form.
 */
function bah_broker_form_install_configure_form_alter(&$form, $form_state) {
  
  $form['site_information']['site_name']['#default_value'] = t('BAH Broker');
  //w3xp2B@5

}


function bah_broker_install_tasks($install_state) {
  include_once drupal_get_path('module', 'entity') . '/includes/entity.ui.inc';
  $tasks = array(
  );
  
  $tasks['install0'] = array(
      'display_name' => 'Activating BAH Broker Configurations',
      'display' => TRUE,
      'type' => 'normal',
      'run' => INSTALL_TASK_RUN_IF_NOT_COMPLETED,
      'function' => '_bah_broker_configuration_setup',
    );
  
  // We enable a few developer modules if we are on a .local site.
  if (strpos($_SERVER['SERVER_NAME'], '.local') !== FALSE){
    $tasks['install1'] = array(
      'display_name' => 'Activating Developer Modules',
      'display' => FALSE,
      'type' => 'normal',
      'run' => INSTALL_TASK_RUN_IF_NOT_COMPLETED,
      'function' => '_bah_broker_enable_devs',
    );
  }
  
  return $tasks;
}

function bah_broker_modules_enable($form, &$form_state) {
  include_once drupal_get_path('module', 'entity') . '/includes/entity.ui.inc';
}

function _bah_broker_enable_devs() {
  module_enable($module = array('commerce_payment_ui'), $enable_deps = TRUE);
  module_enable($module = array('devel'), $enable_deps = TRUE);
  module_enable($module = array('og_ui'), $enable_deps = TRUE);
  module_enable($module = array('views_ui'), $enable_deps = TRUE);
  module_enable($module = array('configuration_ui'), $enable_deps = TRUE);
}

function _bah_broker_configuration_setup() {
  variable_set('configuration_config_path', 'profiles/bah_broker/config');
  module_enable($module = array('configuration_ui'), $enable_deps = TRUE);
  module_load_include('inc', 'configuration_ui', 'configuration_ui.admin');
  
  $form_id = 'configuration_ui_sync_form';
  $form_state = array();
  $form_submit_func = 'configuration_sync_configurations_submit';
  
  $config_form = drupal_build_form($form_id, $form_state);
  $form_state['values']['configuration_ops']['sync_configurations'] = 'Synchronize configurations';
  $form_state['values']['configuration_ops']['preserve_tracked'] = TRUE;
  
  drupal_form_submit($form_id, $form_state);  
  
  // Disable UI module now that we don't need it.
  module_disable($module = array('configuration_ui'), $disable_deps = FALSE);
  
  // Rebuild content access since this install profile enables access control module
  node_access_rebuild(TRUE);
}
