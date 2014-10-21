<?php

/**
 * @file
 * Admin functions for this module.
 */


/**
 * Page callback
 */
function og_credit_admin() {
  return drupal_get_form('og_credit_admin_settings');
}

/**
 * Admin settings config form
 */
function og_credit_admin_settings($form, &$form_state) {
  $entities_bundles = og_get_all_group_bundle(); // Bundles nested in entity arrays
  
  $fielded_bundles = og_credit_fielded_bundles();
  $enabled_bundles = array();
  foreach ($fielded_bundles as $entity_type=>$fielded_bundle) {
    $enabled_bundles[] = $entity_type . '|' . $fielded_bundle;
  }
  
  $options = array();
  foreach ($entities_bundles as $entity_type=>$bundles) {
    $option_name = t('Entity type: ') . $entity_type;
    foreach ($bundles as $bundle=>$bundle_title) {
      $options[$option_name][$entity_type.'|'.$bundle] = $bundle_title;
    }
  }

  $form['og_credit_enabled_bundles'] = array(
    '#title'   => t('Add the Credit field to these bundles'),
    '#description' => t('These are bundles that are OG groups. You cannot remove the field here.'),
    '#type'    => 'select',
    '#multiple' => TRUE,
    '#options' => $options,
    '#default_value' => $enabled_bundles,
  );
  
  $form['og_credit_nogroup_message'] = array(
  	'#title' => t('Message to display when a user is not part of a group that uses OG Credits'),
  	'#description' => t('This message will appear in the context of a system message as well as an indication in the payment method fields.<br />May include the following html tags: <code>&lt;a&gt; &lt;em&gt; &lt;strong&gt; &lt;i&gt; &lt;b&gt;</code>'),
  	'#type' => 'textfield',
  	'#default_value' => variable_get('og_credit_nogroup_message', OG_CREDIT_NOGROUP_MESSAGE),
  	'#size' => 120,
  );
  
  $form['#validate'][] = 'og_credit_admin_settings_validate';
  $form['#submit'][] = 'og_credit_admin_settings_submit';

  return system_settings_form($form);
}

/**
 * Validate handler for the admin settings form
 */
function og_credit_admin_settings_validate($form, &$form_state) {
  $nogroup_message = $form_state['values']['og_credit_nogroup_message'];
  // Filter the content before saving
  if (!empty($nogroup_message)) {
	  $form_state['values']['og_credit_nogroup_message'] = filter_xss($nogroup_message, array('a', 'em', 'strong', 'i', 'b'));
  }
}

/**
 * Submit handler for the admin settings form
 */
function og_credit_admin_settings_submit($form, &$form_state) {
  $enabled_bundles = $form_state['values']['og_credit_enabled_bundles'];
  if (is_array($enabled_bundles)) {
    _field_info_collate_fields(TRUE);
    _field_info_collate_types(TRUE);
    foreach ($enabled_bundles as $pair) {
      list($entity_type, $bundle) = explode('|', $pair);
      og_credit_addfield($entity_type, $bundle);
    }
  }
  else {
    // @todo Error handling
  }
}
