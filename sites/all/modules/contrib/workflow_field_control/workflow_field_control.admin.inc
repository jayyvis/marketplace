<?php



// @todo Provide a form for all states, roles, and fields with
// (default)/read/write/required options.
// Add a tooltip for the default state?
// This should be a massive table.
// For inline radios, @see https://drupal.org/comment/5286810#comment-5286810


// Was having issues trying to get this to work properly.
// @see http://passingcuriosity.com/2011/drupal-7-forms-tables/
// @see https://drupal.org/node/1941240
// Going to try this method instead:
// @see https://drupal.org/comment/8518971#comment-8518971
/**
 * Form constructor for the field settings for a given workflow state.
 * 
 * @see field_ui_display_overview_form
 * @ingroup forms
 */
function workflow_field_control_form($form, &$form_state, $entity_type, $bundle, $sid) {
  //dpm(func_get_args(), 'func_get_args()');
  //dpm($bundle, '$bundle');
  
  // @todo Is this needed?
  // We need to pull information about fields, so be sure to include that lib:
  require_once DRUPAL_ROOT . '/modules/field/field.info.inc';
  
  $bundle = field_extract_bundle($entity_type, $bundle);

  // Gather type information.
  $instances = field_info_instances($entity_type, $bundle);
  $field_types = field_info_field_types();
  // @todo Do we really want to control the extra_fields for the 'form'?
  $extra_fields = field_info_extra_fields($entity_type, $bundle, 'form');
  //dpm($instances, '$instances');

  // Nothing to do if we have no fields, so exit.
  if (empty($instances) && empty($extra_fields)) {
    drupal_set_message(t('There are no fields yet added.'), 'warning');
    return $form;
  }
  
  // Get the workflow state info
  $state = workflow_state_load_single($sid);
  
  // If this is our default settings (0 is not a valid workflow_state $sid),
  // reset the (likely empty) object with blank values.
  if ($sid == 0) {
    $state = (object) array(
      'sid' => 0,
      'wid' => 0,
      'weight' => -100,
      'sysid' => 0,
      'state' => t('Default'),
      'status' => 1,
    );
  }
  // If this is an invalid state, exit.
  elseif (!isset($state->sid)) {
    drupal_set_message(t('The referenced workflow state is invalid.'), 'error');
    return $form;
  }
  $sid = (int) $state->sid;
  $state_label = method_exists($state, 'label') ? $state->label() : $state->state;
  //dpm($state, '$state');
  
  // Get the roles that can participate in workflows.
  $roles = user_roles(FALSE, 'participate in workflow');
  
  $form_state += array(
    'formatter_settings_edit' => NULL,
  );

  $form += array(
    '#entity_type' => $entity_type,
    '#bundle' => $bundle,
    '#workflow_state_label' => $state_label,
    '#workflow_state_sid' => $sid,
    '#fields' => array_keys($instances),
    '#extra' => array_keys($extra_fields),
    '#roles' => $roles,
    '#workflow_sid' => $sid,
  );
  
  // Radio options
  $global_options_default = WFC_EDIT;
  $options = array(
    WFC_DISABLED => t('Hidden'),
    WFC_VIEW => t('View'),
    WFC_EDIT => t('Edit'),
    WFC_REQUIRED => t('Required'),
  );
  // Add an extra "default" option if this is a workflow state form.
  if ($sid) {
    $options = array(WFC_DEFAULT => t('Default')) + $options;
    $global_options_default = WFC_DEFAULT;
  }
  
  // Get all the settings
  $settings = workflow_field_control_load_multiple(array(
    'sid' => $sid,
    'entity_type' => $entity_type,
    'bundle' => $bundle,
  ));
  
  // Get the default settings for reference in tooltips.
  $defaults = $settings;
  if ($sid) {
    $defaults = workflow_field_control_load_multiple(array(
      'sid' => 0,
      'entity_type' => $entity_type,
      'bundle' => $bundle,
    ));

  }

  // Notify the user if the settings are not yet configured for this entity.
  if (empty($settings)) {
    // A workflow state settings page.
    if ($sid) {
      $parent = current_path();
      $parent = substr($parent, 0, strripos($parent, '/'));
      drupal_set_message(
        t('Configure the !default_settings before configuring this state.',
          array('!default_settings' => l(t('Default settings'), $parent))
        ),
        'warning'
      );
      return array(); // Do nothing.
    }
    // Default settings page.
    else {
      drupal_set_message(t('This entity is not yet configured.'), 'warning');
    }
  }

  // Build the table data.
  $header = array(
    '#type' => 'value',
    '#value' => array_merge(array(t('Label'), t('Machine name')), $roles),
  );
  $columns = count($header['#value']);
  $rows = array();
  
  // Add our Global settings, which mimicks a field for code reduction purposes.
  // Limit to just nodes, since we're only enforcing with hook_node_access().
  // @todo Remove if we can do the same for all entity types.
  if ($entity_type == 'node') {
    $global_settings = array(
      'field_name' => 'global',
      'label' => '<strong>Global settings</strong> (overall visibility, edit, and delete permittions).',
      'widget' => array('weight' => -10000),
      'required' => TRUE, // Means we can view, edit, and delete by default.
      'description' => t(''),
    );
    array_unshift($instances, $global_settings);
    array_unshift($form['#fields'], $global_settings['field_name']);
  }

//  dpm($instances, '$instances');
  
  // Process the field instance rows.
  $debug_instances = array();
  foreach ($instances as $instance) {
    // Skip deleted or bad fields
    if (!empty($instance['deleted']) || empty($instance['field_name'])) {
//      dpm($instance, '$instance::deleted_or_no_field_name');
      continue;
    }
    
    // Ignore workflowfields, since that is controlled by the transition perms.
    if (isset($instance['widget']['module']) && $instance['widget']['module'] == 'workflowfield') {
//      dpm($instance, '$instance::workflowfield');
      continue;
    }
    // @todo Do we need to exclude any other field types?

    $row = array(); // Initialize
    $field_name = $instance['field_name'];
    $field_weight = (isset($instance['widget']['weight'])) ?
      (int) $instance['widget']['weight'] : 0;
    $field_required = $instance['required'];
    $description = (empty($instance['description'])) ?
      '' : '<div class="description">' .$instance['description'] . '</div>';
    //$field = field_info_field($instance['field_name']);
    // Add the label and machine name to the first 2 cells of the row.
    $row['label'] = array(
      '#markup' => t($instance['label']),
    );
    $row['field_name'] = array(
      '#markup' => $field_name,
    );
    foreach ($roles as $rid=>$role_name) {
      // Get the field settings, if they exist, otherwise trigger the default.
      $setting = isset($settings[$field_name][$rid]) ?
        $settings[$field_name][$rid] : NULL;
      
      // Modify our options as needed
      $modified_options = $options;
      
      // Modify the global settings item
      if ($field_name == 'global') {
        $modified_options[WFC_REQUIRED] = t('Edit and Delete');
      }
      
      // Set our default option
      $options_default = $global_options_default; // Initialize.
      // If this is a workflow state, first see if this uses the default value.
      if ($sid && !empty($setting->is_default)) {
        $options_default = WFC_DEFAULT;
      }
      // Otherwise get our current setting if there is one.
      elseif (isset($setting->options_default)) {
        $options_default = $setting->options_default;
      }
      // If there's no default setting, check the field.
      elseif (!$sid && $field_required) {
        $options_default = WFC_REQUIRED;
      }
      
      // Add the current default value to the "Default" option text.
      if ($sid && isset($defaults[$field_name][$rid]->options_default)) {
        $default = $modified_options[$defaults[$field_name][$rid]->options_default];
        $modified_options[WFC_DEFAULT] .= " ($default)";
      }
      
      // Create a form element with radio options
      $row[$field_name.'|'.$rid] = array(
        '#type' => 'select',
        '#title' => '', // Do not include a title
        '#default_value' => $options_default,
        '#options' => $modified_options,
        '#attributes' => array(
          'title' => t('Options for @role.', array('@role' => $role_name)),
        ),
      );
    }

//    $debug_instances[] = $field_name;
    
    $rows[$field_weight.'|'.$field_name] = $row;
  }
//  dpm($debug_instances, '$debug_instances');
//  dpm($rows, '$rows');
  ksort($rows);

  // @todo Process the extra_fields items?  Includes 'title' and 'path'.
  
  // Don't use theme('table', ...), since it will render the form too early.
  // @see http://drupal.stackexchange.com/questions/27264/drupal-form-themed-as-table-not-posting-data-correctly-or-displaying-correctly
  $form['#tree'] = TRUE;
  $form['#theme'] = 'workflow_field_control_form_table';
  $form['wfc_header'] = $header;
  $form['wfc_rows'] = $rows;
  
  // Add our own submit button.
  $form['actions'] = array('#type' => 'actions');
  $form['actions']['submit'] = array(
    '#type' => 'submit',
    '#value' => t('Save settings'),
    '#weight' => 0,
    '#submit' => array('workflow_field_control_form_submit'),
  );
  
  // An action to delete the settings associated with this form.
  // @todo This should be properly protected with a confirm_form(),
  // @see https://api.drupal.org/api/drupal/modules!node!node.pages.inc/function/node_delete_confirm/7
  // @see https://api.drupal.org/api/drupal/modules!system!system.module/function/confirm_form/7
  // @see https://api.drupal.org/api/drupal/modules!node!node.pages.inc/function/node_delete_confirm_submit/7
  $delete_title = ($sid) ? t('DELETE SETTINGS') : t('DELETE ALL SETTINGS');
  $form['actions']['delete'] = array(
    '#type' => 'submit',
    '#value' => $delete_title,
    '#weight' => 10,
    '#submit' => array('workflow_field_control_form_delete_submit'),
  );

  
  // @todo Add a form validation callback.
  
  return $form;
}

// @todo Form validation handler?

/**
 * Implements hook_form_submit().
 */
function workflow_field_control_form_submit($form, &$form_state) {
  //dpm($form, '$form');
  //dpm($form_state, '$form_state');
  //return; // Debugging
  
  // Make sure there is data to process.
  if (!isset($form_state['values']['wfc_rows'])) {
    drupal_set_message(t('Could not process the form.  Consult a developer to review this issue.'), 'error');
    // @todo Log an error about missing values.
    return;
  }
  
  $rows = $form_state['values']['wfc_rows'];
  $entity_type = $form['#entity_type'];
  $bundle = $form['#bundle'];
  $sid = $form['#workflow_sid'];
  $fields = $form['#fields'];
  $extra = $form['#extra']; // @todo Currently unused.
  $roles = $form['#roles'];
  
  $saved_settings = FALSE;

  // Process records.
  // @todo Could this be enough data processing to warrant a batch/queue?
//  $debug_settings = array();
  foreach ($rows as $sort_key => $row) {
    foreach ((array) $row as $key => $value) {
      list($field_name, $rid) = explode('|', $key);
      if (in_array($field_name, $fields) && isset($rid) && is_numeric($value)) {
        // Create/Update a record if not "default", otherwise, Delete.
        if ($sid && ($value <= WFC_DEFAULT)) {
          $data = array(
            'sid' => $sid,
            'rid' => $rid,
            'entity_type' => $entity_type,
            'bundle' => $bundle,
            'field_name' => $field_name,
          );
          $result = workflow_field_control_crud('delete', $data);
          //if ($result) {
          //  dpm($data, "Removed: $field_name for $rid");
          //}
//          $debug_settings['delete'][$key] = $data;
        }
        else {
          $data = array(
            'sid' => $sid,
            'rid' => $rid,
            'entity_type' => $entity_type,
            'bundle' => $bundle,
            'field_name' => $field_name,
            'disabled' => (int) ($value == WFC_DISABLED),
            'view' => (int) ($value >= WFC_VIEW),
            'edit' => (int) ($value >= WFC_EDIT),
            'required' => (int) ($value >= WFC_REQUIRED),
          );
          $result = workflow_field_control_crud('create', $data);
          //if ($result) {
          //  dpm($data, "Wrote: $field_name for $rid");
          //}
//          $debug_settings['create'][$key] = $data;
        }
        
        $saved_settings = TRUE;
      }
      
      // @todo Process the $form['#extra'] items?  Includes 'title' and 'path'.
    }
  }

//  dpm($debug_settings, '$debug_settings');
  
  if ($saved_settings) {
    drupal_set_message(t('The settings were saved successfully.'));
  }
  else {
    drupal_set_message(t('There was a problem saving the settings.'), 'error');
  }
}

/**
 * A form submit callback that clears the stored data for this form.
 * @see hook_form_submit().
 */
function workflow_field_control_form_delete_submit($form, &$form_state) {
  //dpm($form, '$form');
  //dpm($form_state, '$form_state');
  //return; // Debugging

  $entity_type = $form['#entity_type'];
  $bundle = $form['#bundle'];
  $sid = $form['#workflow_sid'];
  //$fields = $form['#fields'];
  //$extra = $form['#extra']; // @todo Currently unused.
  //$roles = $form['#roles'];
  
  // Remove all settings for this bundle and state.
  $data = array(
    'entity_type' => $entity_type,
    'bundle' => $bundle,
  );
  // If this isn't the default state, only remove data for this state.
  if ($sid != 0) {
    $data['sid'] = $sid;
  }
  $deleted = workflow_field_control_delete_multiple($data);
  
  if ($deleted) {
    drupal_set_message(t('Settings were deleted successfully.'));
  }
  else {
    drupal_set_message(t('There was a problem deleting the settings.'), 'error');
  }
}


