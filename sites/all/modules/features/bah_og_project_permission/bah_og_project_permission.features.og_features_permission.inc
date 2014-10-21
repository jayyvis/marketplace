<?php
/**
 * @file
 * bah_og_project_permission.features.og_features_permission.inc
 */

/**
 * Implements hook_og_features_default_permissions().
 */
function bah_og_project_permission_og_features_default_permissions() {
  $permissions = array();

  // Exported og permission: 'node:project:administer group'
  $permissions['node:project:administer group'] = array(
    'roles' => array(
      'administrator member' => 'administrator member',
    ),
  );

  // Exported og permission: 'node:project:create application_instance content'
  $permissions['node:project:create application_instance content'] = array(
    'roles' => array(),
  );

  // Exported og permission: 'node:project:create database_instance content'
  $permissions['node:project:create database_instance content'] = array(
    'roles' => array(),
  );

  // Exported og permission: 'node:project:create server_instance content'
  $permissions['node:project:create server_instance content'] = array(
    'roles' => array(),
  );

  // Exported og permission: 'node:project:create web_service_instance content'
  $permissions['node:project:create web_service_instance content'] = array(
    'roles' => array(),
  );

  // Exported og permission: 'node:project:delete any application_instance content'
  $permissions['node:project:delete any application_instance content'] = array(
    'roles' => array(),
  );

  // Exported og permission: 'node:project:delete any database_instance content'
  $permissions['node:project:delete any database_instance content'] = array(
    'roles' => array(),
  );

  // Exported og permission: 'node:project:delete any server_instance content'
  $permissions['node:project:delete any server_instance content'] = array(
    'roles' => array(),
  );

  // Exported og permission: 'node:project:delete any web_service_instance content'
  $permissions['node:project:delete any web_service_instance content'] = array(
    'roles' => array(),
  );

  // Exported og permission: 'node:project:delete own application_instance content'
  $permissions['node:project:delete own application_instance content'] = array(
    'roles' => array(),
  );

  // Exported og permission: 'node:project:delete own database_instance content'
  $permissions['node:project:delete own database_instance content'] = array(
    'roles' => array(),
  );

  // Exported og permission: 'node:project:delete own server_instance content'
  $permissions['node:project:delete own server_instance content'] = array(
    'roles' => array(),
  );

  // Exported og permission: 'node:project:delete own web_service_instance content'
  $permissions['node:project:delete own web_service_instance content'] = array(
    'roles' => array(),
  );

  // Exported og permission: 'node:project:update any application_instance content'
  $permissions['node:project:update any application_instance content'] = array(
    'roles' => array(),
  );

  // Exported og permission: 'node:project:update any database_instance content'
  $permissions['node:project:update any database_instance content'] = array(
    'roles' => array(),
  );

  // Exported og permission: 'node:project:update any server_instance content'
  $permissions['node:project:update any server_instance content'] = array(
    'roles' => array(),
  );

  // Exported og permission: 'node:project:update any web_service_instance content'
  $permissions['node:project:update any web_service_instance content'] = array(
    'roles' => array(),
  );

  // Exported og permission: 'node:project:update body field'
  $permissions['node:project:update body field'] = array(
    'roles' => array(
      'administrator member' => 'administrator member',
    ),
  );

  // Exported og permission: 'node:project:update commerce_customer_billing field'
  $permissions['node:project:update commerce_customer_billing field'] = array(
    'roles' => array(
      'administrator member' => 'administrator member',
    ),
  );

  // Exported og permission: 'node:project:update commerce_line_items field'
  $permissions['node:project:update commerce_line_items field'] = array(
    'roles' => array(
      'administrator member' => 'administrator member',
    ),
  );

  // Exported og permission: 'node:project:update commerce_order_total field'
  $permissions['node:project:update commerce_order_total field'] = array(
    'roles' => array(
      'administrator member' => 'administrator member',
    ),
  );

  // Exported og permission: 'node:project:update field_add_cont field'
  $permissions['node:project:update field_add_cont field'] = array(
    'roles' => array(
      'administrator member' => 'administrator member',
    ),
  );

  // Exported og permission: 'node:project:update field_allocated_budget field'
  $permissions['node:project:update field_allocated_budget field'] = array(
    'roles' => array(
      'administrator member' => 'administrator member',
    ),
  );

  // Exported og permission: 'node:project:update field_app_code field'
  $permissions['node:project:update field_app_code field'] = array(
    'roles' => array(
      'administrator member' => 'administrator member',
    ),
  );

  // Exported og permission: 'node:project:update field_appl_bu_serv field'
  $permissions['node:project:update field_appl_bu_serv field'] = array(
    'roles' => array(
      'administrator member' => 'administrator member',
    ),
  );

  // Exported og permission: 'node:project:update field_appl_desc field'
  $permissions['node:project:update field_appl_desc field'] = array(
    'roles' => array(
      'administrator member' => 'administrator member',
    ),
  );

  // Exported og permission: 'node:project:update field_appl_func_type field'
  $permissions['node:project:update field_appl_func_type field'] = array(
    'roles' => array(
      'administrator member' => 'administrator member',
    ),
  );

  // Exported og permission: 'node:project:update field_appl_fund_src field'
  $permissions['node:project:update field_appl_fund_src field'] = array(
    'roles' => array(
      'administrator member' => 'administrator member',
    ),
  );

  // Exported og permission: 'node:project:update field_appl_locn field'
  $permissions['node:project:update field_appl_locn field'] = array(
    'roles' => array(
      'administrator member' => 'administrator member',
    ),
  );

  // Exported og permission: 'node:project:update field_appl_mf_serv field'
  $permissions['node:project:update field_appl_mf_serv field'] = array(
    'roles' => array(
      'administrator member' => 'administrator member',
    ),
  );

  // Exported og permission: 'node:project:update field_appl_mong_serv field'
  $permissions['node:project:update field_appl_mong_serv field'] = array(
    'roles' => array(
      'administrator member' => 'administrator member',
    ),
  );

  // Exported og permission: 'node:project:update field_appl_name field'
  $permissions['node:project:update field_appl_name field'] = array(
    'roles' => array(
      'administrator member' => 'administrator member',
    ),
  );

  // Exported og permission: 'node:project:update field_appl_rdc_serv field'
  $permissions['node:project:update field_appl_rdc_serv field'] = array(
    'roles' => array(
      'administrator member' => 'administrator member',
    ),
  );

  // Exported og permission: 'node:project:update field_appl_runinprod field'
  $permissions['node:project:update field_appl_runinprod field'] = array(
    'roles' => array(
      'administrator member' => 'administrator member',
    ),
  );

  // Exported og permission: 'node:project:update field_appl_sql_serv field'
  $permissions['node:project:update field_appl_sql_serv field'] = array(
    'roles' => array(
      'administrator member' => 'administrator member',
    ),
  );

  // Exported og permission: 'node:project:update field_appl_stat field'
  $permissions['node:project:update field_appl_stat field'] = array(
    'roles' => array(
      'administrator member' => 'administrator member',
    ),
  );

  // Exported og permission: 'node:project:update field_appl_type field'
  $permissions['node:project:update field_appl_type field'] = array(
    'roles' => array(
      'administrator member' => 'administrator member',
    ),
  );

  // Exported og permission: 'node:project:update field_appl_web_serv field'
  $permissions['node:project:update field_appl_web_serv field'] = array(
    'roles' => array(
      'administrator member' => 'administrator member',
    ),
  );

  // Exported og permission: 'node:project:update field_ato_date field'
  $permissions['node:project:update field_ato_date field'] = array(
    'roles' => array(
      'administrator member' => 'administrator member',
    ),
  );

  // Exported og permission: 'node:project:update field_bo_name_f field'
  $permissions['node:project:update field_bo_name_f field'] = array(
    'roles' => array(
      'administrator member' => 'administrator member',
    ),
  );

  // Exported og permission: 'node:project:update field_bo_name_l field'
  $permissions['node:project:update field_bo_name_l field'] = array(
    'roles' => array(
      'administrator member' => 'administrator member',
    ),
  );

  // Exported og permission: 'node:project:update field_bo_phone field'
  $permissions['node:project:update field_bo_phone field'] = array(
    'roles' => array(
      'administrator member' => 'administrator member',
    ),
  );

  // Exported og permission: 'node:project:update field_budget_css field'
  $permissions['node:project:update field_budget_css field'] = array(
    'roles' => array(
      'administrator member' => 'administrator member',
    ),
  );

  // Exported og permission: 'node:project:update field_bus_cont_lvl field'
  $permissions['node:project:update field_bus_cont_lvl field'] = array(
    'roles' => array(
      'administrator member' => 'administrator member',
    ),
  );

  // Exported og permission: 'node:project:update field_bus_cont_plan field'
  $permissions['node:project:update field_bus_cont_plan field'] = array(
    'roles' => array(
      'administrator member' => 'administrator member',
    ),
  );

  // Exported og permission: 'node:project:update field_ccc_exist field'
  $permissions['node:project:update field_ccc_exist field'] = array(
    'roles' => array(
      'administrator member' => 'administrator member',
    ),
  );

  // Exported og permission: 'node:project:update field_ccc_locn field'
  $permissions['node:project:update field_ccc_locn field'] = array(
    'roles' => array(
      'administrator member' => 'administrator member',
    ),
  );

  // Exported og permission: 'node:project:update field_ccc_mcc field'
  $permissions['node:project:update field_ccc_mcc field'] = array(
    'roles' => array(
      'administrator member' => 'administrator member',
    ),
  );

  // Exported og permission: 'node:project:update field_ccc_name field'
  $permissions['node:project:update field_ccc_name field'] = array(
    'roles' => array(
      'administrator member' => 'administrator member',
    ),
  );

  // Exported og permission: 'node:project:update field_commerce_line_item field'
  $permissions['node:project:update field_commerce_line_item field'] = array(
    'roles' => array(
      'administrator member' => 'administrator member',
    ),
  );

  // Exported og permission: 'node:project:update field_cust_acronym field'
  $permissions['node:project:update field_cust_acronym field'] = array(
    'roles' => array(
      'administrator member' => 'administrator member',
    ),
  );

  // Exported og permission: 'node:project:update field_cust_code field'
  $permissions['node:project:update field_cust_code field'] = array(
    'roles' => array(
      'administrator member' => 'administrator member',
    ),
  );

  // Exported og permission: 'node:project:update field_cust_code_mcc field'
  $permissions['node:project:update field_cust_code_mcc field'] = array(
    'roles' => array(
      'administrator member' => 'administrator member',
    ),
  );

  // Exported og permission: 'node:project:update field_depndt_appl field'
  $permissions['node:project:update field_depndt_appl field'] = array(
    'roles' => array(
      'administrator member' => 'administrator member',
    ),
  );

  // Exported og permission: 'node:project:update field_eo_name_f field'
  $permissions['node:project:update field_eo_name_f field'] = array(
    'roles' => array(
      'administrator member' => 'administrator member',
    ),
  );

  // Exported og permission: 'node:project:update field_eo_name_l field'
  $permissions['node:project:update field_eo_name_l field'] = array(
    'roles' => array(
      'administrator member' => 'administrator member',
    ),
  );

  // Exported og permission: 'node:project:update field_eo_phone field'
  $permissions['node:project:update field_eo_phone field'] = array(
    'roles' => array(
      'administrator member' => 'administrator member',
    ),
  );

  // Exported og permission: 'node:project:update field_est_fund field'
  $permissions['node:project:update field_est_fund field'] = array(
    'roles' => array(
      'administrator member' => 'administrator member',
    ),
  );

  // Exported og permission: 'node:project:update field_estimated_cpu field'
  $permissions['node:project:update field_estimated_cpu field'] = array(
    'roles' => array(
      'administrator member' => 'administrator member',
    ),
  );

  // Exported og permission: 'node:project:update field_estimated_memory field'
  $permissions['node:project:update field_estimated_memory field'] = array(
    'roles' => array(
      'administrator member' => 'administrator member',
    ),
  );

  // Exported og permission: 'node:project:update field_estimated_storage field'
  $permissions['node:project:update field_estimated_storage field'] = array(
    'roles' => array(
      'administrator member' => 'administrator member',
    ),
  );

  // Exported og permission: 'node:project:update field_first_name field'
  $permissions['node:project:update field_first_name field'] = array(
    'roles' => array(
      'administrator member' => 'administrator member',
    ),
  );

  // Exported og permission: 'node:project:update field_fisma_class field'
  $permissions['node:project:update field_fisma_class field'] = array(
    'roles' => array(
      'administrator member' => 'administrator member',
    ),
  );

  // Exported og permission: 'node:project:update field_fisma_name_f field'
  $permissions['node:project:update field_fisma_name_f field'] = array(
    'roles' => array(
      'administrator member' => 'administrator member',
    ),
  );

  // Exported og permission: 'node:project:update field_fisma_name_l field'
  $permissions['node:project:update field_fisma_name_l field'] = array(
    'roles' => array(
      'administrator member' => 'administrator member',
    ),
  );

  // Exported og permission: 'node:project:update field_fisma_phone field'
  $permissions['node:project:update field_fisma_phone field'] = array(
    'roles' => array(
      'administrator member' => 'administrator member',
    ),
  );

  // Exported og permission: 'node:project:update field_funding_remaining field'
  $permissions['node:project:update field_funding_remaining field'] = array(
    'roles' => array(
      'administrator member' => 'administrator member',
    ),
  );

  // Exported og permission: 'node:project:update field_info_type field'
  $permissions['node:project:update field_info_type field'] = array(
    'roles' => array(
      'administrator member' => 'administrator member',
    ),
  );

  // Exported og permission: 'node:project:update field_instance_delta field'
  $permissions['node:project:update field_instance_delta field'] = array(
    'roles' => array(
      'administrator member' => 'administrator member',
    ),
  );

  // Exported og permission: 'node:project:update field_instance_status field'
  $permissions['node:project:update field_instance_status field'] = array(
    'roles' => array(
      'administrator member' => 'administrator member',
    ),
  );

  // Exported og permission: 'node:project:update field_isa_exist field'
  $permissions['node:project:update field_isa_exist field'] = array(
    'roles' => array(
      'administrator member' => 'administrator member',
    ),
  );

  // Exported og permission: 'node:project:update field_isa_req field'
  $permissions['node:project:update field_isa_req field'] = array(
    'roles' => array(
      'administrator member' => 'administrator member',
    ),
  );

  // Exported og permission: 'node:project:update field_json_data field'
  $permissions['node:project:update field_json_data field'] = array(
    'roles' => array(
      'administrator member' => 'administrator member',
    ),
  );

  // Exported og permission: 'node:project:update field_last_cf_ping field'
  $permissions['node:project:update field_last_cf_ping field'] = array(
    'roles' => array(
      'administrator member' => 'administrator member',
    ),
  );

  // Exported og permission: 'node:project:update field_last_name field'
  $permissions['node:project:update field_last_name field'] = array(
    'roles' => array(
      'administrator member' => 'administrator member',
    ),
  );

  // Exported og permission: 'node:project:update field_months_remaining field'
  $permissions['node:project:update field_months_remaining field'] = array(
    'roles' => array(
      'administrator member' => 'administrator member',
    ),
  );

  // Exported og permission: 'node:project:update field_nbr_empl_afctd field'
  $permissions['node:project:update field_nbr_empl_afctd field'] = array(
    'roles' => array(
      'administrator member' => 'administrator member',
    ),
  );

  // Exported og permission: 'node:project:update field_nbr_vets_afctd field'
  $permissions['node:project:update field_nbr_vets_afctd field'] = array(
    'roles' => array(
      'administrator member' => 'administrator member',
    ),
  );

  // Exported og permission: 'node:project:update field_notif_list field'
  $permissions['node:project:update field_notif_list field'] = array(
    'roles' => array(
      'administrator member' => 'administrator member',
    ),
  );

  // Exported og permission: 'node:project:update field_oed_name_f field'
  $permissions['node:project:update field_oed_name_f field'] = array(
    'roles' => array(
      'administrator member' => 'administrator member',
    ),
  );

  // Exported og permission: 'node:project:update field_oed_name_l field'
  $permissions['node:project:update field_oed_name_l field'] = array(
    'roles' => array(
      'administrator member' => 'administrator member',
    ),
  );

  // Exported og permission: 'node:project:update field_oed_phone field'
  $permissions['node:project:update field_oed_phone field'] = array(
    'roles' => array(
      'administrator member' => 'administrator member',
    ),
  );

  // Exported og permission: 'node:project:update field_order_project field'
  $permissions['node:project:update field_order_project field'] = array(
    'roles' => array(
      'administrator member' => 'administrator member',
    ),
  );

  // Exported og permission: 'node:project:update field_org_afctd field'
  $permissions['node:project:update field_org_afctd field'] = array(
    'roles' => array(
      'administrator member' => 'administrator member',
    ),
  );

  // Exported og permission: 'node:project:update field_pm_name_f field'
  $permissions['node:project:update field_pm_name_f field'] = array(
    'roles' => array(
      'administrator member' => 'administrator member',
    ),
  );

  // Exported og permission: 'node:project:update field_pm_name_l field'
  $permissions['node:project:update field_pm_name_l field'] = array(
    'roles' => array(
      'administrator member' => 'administrator member',
    ),
  );

  // Exported og permission: 'node:project:update field_pm_phone field'
  $permissions['node:project:update field_pm_phone field'] = array(
    'roles' => array(
      'administrator member' => 'administrator member',
    ),
  );

  // Exported og permission: 'node:project:update field_proj_file field'
  $permissions['node:project:update field_proj_file field'] = array(
    'roles' => array(
      'administrator member' => 'administrator member',
    ),
  );

  // Exported og permission: 'node:project:update field_project_req field'
  $permissions['node:project:update field_project_req field'] = array(
    'roles' => array(
      'administrator member' => 'administrator member',
    ),
  );

  // Exported og permission: 'node:project:update field_rec_meth field'
  $permissions['node:project:update field_rec_meth field'] = array(
    'roles' => array(
      'administrator member' => 'administrator member',
    ),
  );

  // Exported og permission: 'node:project:update field_rpo field'
  $permissions['node:project:update field_rpo field'] = array(
    'roles' => array(
      'administrator member' => 'administrator member',
    ),
  );

  // Exported og permission: 'node:project:update field_rto field'
  $permissions['node:project:update field_rto field'] = array(
    'roles' => array(
      'administrator member' => 'administrator member',
    ),
  );

  // Exported og permission: 'node:project:update field_sec_name_f field'
  $permissions['node:project:update field_sec_name_f field'] = array(
    'roles' => array(
      'administrator member' => 'administrator member',
    ),
  );

  // Exported og permission: 'node:project:update field_sec_name_l field'
  $permissions['node:project:update field_sec_name_l field'] = array(
    'roles' => array(
      'administrator member' => 'administrator member',
    ),
  );

  // Exported og permission: 'node:project:update field_sec_phone field'
  $permissions['node:project:update field_sec_phone field'] = array(
    'roles' => array(
      'administrator member' => 'administrator member',
    ),
  );

  // Exported og permission: 'node:project:update field_sec_plan field'
  $permissions['node:project:update field_sec_plan field'] = array(
    'roles' => array(
      'administrator member' => 'administrator member',
    ),
  );

  // Exported og permission: 'node:project:update field_sprt_ctc field'
  $permissions['node:project:update field_sprt_ctc field'] = array(
    'roles' => array(
      'administrator member' => 'administrator member',
    ),
  );

  // Exported og permission: 'node:project:update field_sys_name_f field'
  $permissions['node:project:update field_sys_name_f field'] = array(
    'roles' => array(
      'administrator member' => 'administrator member',
    ),
  );

  // Exported og permission: 'node:project:update field_sys_name_l field'
  $permissions['node:project:update field_sys_name_l field'] = array(
    'roles' => array(
      'administrator member' => 'administrator member',
    ),
  );

  // Exported og permission: 'node:project:update field_sys_phone field'
  $permissions['node:project:update field_sys_phone field'] = array(
    'roles' => array(
      'administrator member' => 'administrator member',
    ),
  );

  // Exported og permission: 'node:project:update field_system_css field'
  $permissions['node:project:update field_system_css field'] = array(
    'roles' => array(
      'administrator member' => 'administrator member',
    ),
  );

  // Exported og permission: 'node:project:update field_used_budget field'
  $permissions['node:project:update field_used_budget field'] = array(
    'roles' => array(
      'administrator member' => 'administrator member',
    ),
  );

  // Exported og permission: 'node:project:update field_used_memory field'
  $permissions['node:project:update field_used_memory field'] = array(
    'roles' => array(
      'administrator member' => 'administrator member',
    ),
  );

  // Exported og permission: 'node:project:update field_used_storage field'
  $permissions['node:project:update field_used_storage field'] = array(
    'roles' => array(
      'administrator member' => 'administrator member',
    ),
  );

  // Exported og permission: 'node:project:update field_used_vcpu field'
  $permissions['node:project:update field_used_vcpu field'] = array(
    'roles' => array(
      'administrator member' => 'administrator member',
    ),
  );

  // Exported og permission: 'node:project:update group'
  $permissions['node:project:update group'] = array(
    'roles' => array(
      'administrator member' => 'administrator member',
    ),
  );

  // Exported og permission: 'node:project:update group_access field'
  $permissions['node:project:update group_access field'] = array(
    'roles' => array(
      'administrator member' => 'administrator member',
    ),
  );

  // Exported og permission: 'node:project:update group_content_access field'
  $permissions['node:project:update group_content_access field'] = array(
    'roles' => array(
      'administrator member' => 'administrator member',
    ),
  );

  // Exported og permission: 'node:project:update group_group field'
  $permissions['node:project:update group_group field'] = array(
    'roles' => array(
      'administrator member' => 'administrator member',
    ),
  );

  // Exported og permission: 'node:project:update group_register field'
  $permissions['node:project:update group_register field'] = array(
    'roles' => array(
      'administrator member' => 'administrator member',
    ),
  );

  // Exported og permission: 'node:project:update ldap_user_current_dn field'
  $permissions['node:project:update ldap_user_current_dn field'] = array(
    'roles' => array(
      'administrator member' => 'administrator member',
    ),
  );

  // Exported og permission: 'node:project:update ldap_user_puid_sid field'
  $permissions['node:project:update ldap_user_puid_sid field'] = array(
    'roles' => array(),
  );

  // Exported og permission: 'node:project:update og_credits field'
  $permissions['node:project:update og_credits field'] = array(
    'roles' => array(
      'administrator member' => 'administrator member',
    ),
  );

  // Exported og permission: 'node:project:update og_group_ref field'
  $permissions['node:project:update og_group_ref field'] = array(
    'roles' => array(
      'administrator member' => 'administrator member',
    ),
  );

  // Exported og permission: 'node:project:update og_roles_permissions field'
  $permissions['node:project:update og_roles_permissions field'] = array(
    'roles' => array(
      'administrator member' => 'administrator member',
    ),
  );

  // Exported og permission: 'node:project:update og_user_node field'
  $permissions['node:project:update og_user_node field'] = array(
    'roles' => array(),
  );

  // Exported og permission: 'node:project:update own application_instance content'
  $permissions['node:project:update own application_instance content'] = array(
    'roles' => array(),
  );

  // Exported og permission: 'node:project:update own database_instance content'
  $permissions['node:project:update own database_instance content'] = array(
    'roles' => array(),
  );

  // Exported og permission: 'node:project:update own server_instance content'
  $permissions['node:project:update own server_instance content'] = array(
    'roles' => array(),
  );

  // Exported og permission: 'node:project:update own web_service_instance content'
  $permissions['node:project:update own web_service_instance content'] = array(
    'roles' => array(),
  );

  // Exported og permission: 'node:project:view body field'
  $permissions['node:project:view body field'] = array(
    'roles' => array(
      'administrator member' => 'administrator member',
      'member' => 'member',
    ),
  );

  // Exported og permission: 'node:project:view commerce_customer_billing field'
  $permissions['node:project:view commerce_customer_billing field'] = array(
    'roles' => array(
      'administrator member' => 'administrator member',
      'member' => 'member',
    ),
  );

  // Exported og permission: 'node:project:view commerce_line_items field'
  $permissions['node:project:view commerce_line_items field'] = array(
    'roles' => array(
      'administrator member' => 'administrator member',
      'member' => 'member',
    ),
  );

  // Exported og permission: 'node:project:view commerce_order_total field'
  $permissions['node:project:view commerce_order_total field'] = array(
    'roles' => array(
      'administrator member' => 'administrator member',
      'member' => 'member',
    ),
  );

  // Exported og permission: 'node:project:view field_add_cont field'
  $permissions['node:project:view field_add_cont field'] = array(
    'roles' => array(
      'administrator member' => 'administrator member',
      'member' => 'member',
    ),
  );

  // Exported og permission: 'node:project:view field_allocated_budget field'
  $permissions['node:project:view field_allocated_budget field'] = array(
    'roles' => array(
      'administrator member' => 'administrator member',
      'member' => 'member',
    ),
  );

  // Exported og permission: 'node:project:view field_app_code field'
  $permissions['node:project:view field_app_code field'] = array(
    'roles' => array(
      'administrator member' => 'administrator member',
      'member' => 'member',
    ),
  );

  // Exported og permission: 'node:project:view field_appl_bu_serv field'
  $permissions['node:project:view field_appl_bu_serv field'] = array(
    'roles' => array(
      'administrator member' => 'administrator member',
      'member' => 'member',
    ),
  );

  // Exported og permission: 'node:project:view field_appl_desc field'
  $permissions['node:project:view field_appl_desc field'] = array(
    'roles' => array(
      'administrator member' => 'administrator member',
      'member' => 'member',
    ),
  );

  // Exported og permission: 'node:project:view field_appl_func_type field'
  $permissions['node:project:view field_appl_func_type field'] = array(
    'roles' => array(
      'administrator member' => 'administrator member',
      'member' => 'member',
    ),
  );

  // Exported og permission: 'node:project:view field_appl_fund_src field'
  $permissions['node:project:view field_appl_fund_src field'] = array(
    'roles' => array(
      'administrator member' => 'administrator member',
      'member' => 'member',
    ),
  );

  // Exported og permission: 'node:project:view field_appl_locn field'
  $permissions['node:project:view field_appl_locn field'] = array(
    'roles' => array(
      'administrator member' => 'administrator member',
      'member' => 'member',
    ),
  );

  // Exported og permission: 'node:project:view field_appl_mf_serv field'
  $permissions['node:project:view field_appl_mf_serv field'] = array(
    'roles' => array(
      'administrator member' => 'administrator member',
      'member' => 'member',
    ),
  );

  // Exported og permission: 'node:project:view field_appl_mong_serv field'
  $permissions['node:project:view field_appl_mong_serv field'] = array(
    'roles' => array(
      'administrator member' => 'administrator member',
      'member' => 'member',
    ),
  );

  // Exported og permission: 'node:project:view field_appl_name field'
  $permissions['node:project:view field_appl_name field'] = array(
    'roles' => array(
      'administrator member' => 'administrator member',
      'member' => 'member',
    ),
  );

  // Exported og permission: 'node:project:view field_appl_rdc_serv field'
  $permissions['node:project:view field_appl_rdc_serv field'] = array(
    'roles' => array(
      'administrator member' => 'administrator member',
      'member' => 'member',
    ),
  );

  // Exported og permission: 'node:project:view field_appl_runinprod field'
  $permissions['node:project:view field_appl_runinprod field'] = array(
    'roles' => array(
      'administrator member' => 'administrator member',
      'member' => 'member',
    ),
  );

  // Exported og permission: 'node:project:view field_appl_sql_serv field'
  $permissions['node:project:view field_appl_sql_serv field'] = array(
    'roles' => array(
      'administrator member' => 'administrator member',
      'member' => 'member',
    ),
  );

  // Exported og permission: 'node:project:view field_appl_stat field'
  $permissions['node:project:view field_appl_stat field'] = array(
    'roles' => array(
      'administrator member' => 'administrator member',
      'member' => 'member',
    ),
  );

  // Exported og permission: 'node:project:view field_appl_type field'
  $permissions['node:project:view field_appl_type field'] = array(
    'roles' => array(
      'administrator member' => 'administrator member',
      'member' => 'member',
    ),
  );

  // Exported og permission: 'node:project:view field_appl_web_serv field'
  $permissions['node:project:view field_appl_web_serv field'] = array(
    'roles' => array(
      'administrator member' => 'administrator member',
      'member' => 'member',
    ),
  );

  // Exported og permission: 'node:project:view field_ato_date field'
  $permissions['node:project:view field_ato_date field'] = array(
    'roles' => array(
      'administrator member' => 'administrator member',
      'member' => 'member',
    ),
  );

  // Exported og permission: 'node:project:view field_bo_name_f field'
  $permissions['node:project:view field_bo_name_f field'] = array(
    'roles' => array(
      'administrator member' => 'administrator member',
      'member' => 'member',
    ),
  );

  // Exported og permission: 'node:project:view field_bo_name_l field'
  $permissions['node:project:view field_bo_name_l field'] = array(
    'roles' => array(
      'administrator member' => 'administrator member',
      'member' => 'member',
    ),
  );

  // Exported og permission: 'node:project:view field_bo_phone field'
  $permissions['node:project:view field_bo_phone field'] = array(
    'roles' => array(
      'administrator member' => 'administrator member',
      'member' => 'member',
    ),
  );

  // Exported og permission: 'node:project:view field_budget_css field'
  $permissions['node:project:view field_budget_css field'] = array(
    'roles' => array(
      'administrator member' => 'administrator member',
      'member' => 'member',
    ),
  );

  // Exported og permission: 'node:project:view field_bus_cont_lvl field'
  $permissions['node:project:view field_bus_cont_lvl field'] = array(
    'roles' => array(
      'administrator member' => 'administrator member',
      'member' => 'member',
    ),
  );

  // Exported og permission: 'node:project:view field_bus_cont_plan field'
  $permissions['node:project:view field_bus_cont_plan field'] = array(
    'roles' => array(
      'administrator member' => 'administrator member',
      'member' => 'member',
    ),
  );

  // Exported og permission: 'node:project:view field_ccc_exist field'
  $permissions['node:project:view field_ccc_exist field'] = array(
    'roles' => array(
      'administrator member' => 'administrator member',
      'member' => 'member',
    ),
  );

  // Exported og permission: 'node:project:view field_ccc_locn field'
  $permissions['node:project:view field_ccc_locn field'] = array(
    'roles' => array(
      'administrator member' => 'administrator member',
      'member' => 'member',
    ),
  );

  // Exported og permission: 'node:project:view field_ccc_mcc field'
  $permissions['node:project:view field_ccc_mcc field'] = array(
    'roles' => array(
      'administrator member' => 'administrator member',
      'member' => 'member',
    ),
  );

  // Exported og permission: 'node:project:view field_ccc_name field'
  $permissions['node:project:view field_ccc_name field'] = array(
    'roles' => array(
      'administrator member' => 'administrator member',
      'member' => 'member',
    ),
  );

  // Exported og permission: 'node:project:view field_commerce_line_item field'
  $permissions['node:project:view field_commerce_line_item field'] = array(
    'roles' => array(
      'administrator member' => 'administrator member',
      'member' => 'member',
    ),
  );

  // Exported og permission: 'node:project:view field_cust_acronym field'
  $permissions['node:project:view field_cust_acronym field'] = array(
    'roles' => array(
      'administrator member' => 'administrator member',
      'member' => 'member',
    ),
  );

  // Exported og permission: 'node:project:view field_cust_code field'
  $permissions['node:project:view field_cust_code field'] = array(
    'roles' => array(
      'administrator member' => 'administrator member',
      'member' => 'member',
    ),
  );

  // Exported og permission: 'node:project:view field_cust_code_mcc field'
  $permissions['node:project:view field_cust_code_mcc field'] = array(
    'roles' => array(
      'administrator member' => 'administrator member',
      'member' => 'member',
    ),
  );

  // Exported og permission: 'node:project:view field_depndt_appl field'
  $permissions['node:project:view field_depndt_appl field'] = array(
    'roles' => array(
      'administrator member' => 'administrator member',
      'member' => 'member',
    ),
  );

  // Exported og permission: 'node:project:view field_eo_name_f field'
  $permissions['node:project:view field_eo_name_f field'] = array(
    'roles' => array(
      'administrator member' => 'administrator member',
      'member' => 'member',
    ),
  );

  // Exported og permission: 'node:project:view field_eo_name_l field'
  $permissions['node:project:view field_eo_name_l field'] = array(
    'roles' => array(
      'administrator member' => 'administrator member',
      'member' => 'member',
    ),
  );

  // Exported og permission: 'node:project:view field_eo_phone field'
  $permissions['node:project:view field_eo_phone field'] = array(
    'roles' => array(
      'administrator member' => 'administrator member',
      'member' => 'member',
    ),
  );

  // Exported og permission: 'node:project:view field_est_fund field'
  $permissions['node:project:view field_est_fund field'] = array(
    'roles' => array(
      'administrator member' => 'administrator member',
      'member' => 'member',
    ),
  );

  // Exported og permission: 'node:project:view field_estimated_cpu field'
  $permissions['node:project:view field_estimated_cpu field'] = array(
    'roles' => array(
      'administrator member' => 'administrator member',
      'member' => 'member',
    ),
  );

  // Exported og permission: 'node:project:view field_estimated_memory field'
  $permissions['node:project:view field_estimated_memory field'] = array(
    'roles' => array(
      'administrator member' => 'administrator member',
      'member' => 'member',
    ),
  );

  // Exported og permission: 'node:project:view field_estimated_storage field'
  $permissions['node:project:view field_estimated_storage field'] = array(
    'roles' => array(
      'administrator member' => 'administrator member',
      'member' => 'member',
    ),
  );

  // Exported og permission: 'node:project:view field_first_name field'
  $permissions['node:project:view field_first_name field'] = array(
    'roles' => array(
      'administrator member' => 'administrator member',
      'member' => 'member',
    ),
  );

  // Exported og permission: 'node:project:view field_fisma_class field'
  $permissions['node:project:view field_fisma_class field'] = array(
    'roles' => array(
      'administrator member' => 'administrator member',
      'member' => 'member',
    ),
  );

  // Exported og permission: 'node:project:view field_fisma_name_f field'
  $permissions['node:project:view field_fisma_name_f field'] = array(
    'roles' => array(
      'administrator member' => 'administrator member',
      'member' => 'member',
    ),
  );

  // Exported og permission: 'node:project:view field_fisma_name_l field'
  $permissions['node:project:view field_fisma_name_l field'] = array(
    'roles' => array(
      'administrator member' => 'administrator member',
      'member' => 'member',
    ),
  );

  // Exported og permission: 'node:project:view field_fisma_phone field'
  $permissions['node:project:view field_fisma_phone field'] = array(
    'roles' => array(
      'administrator member' => 'administrator member',
      'member' => 'member',
    ),
  );

  // Exported og permission: 'node:project:view field_funding_remaining field'
  $permissions['node:project:view field_funding_remaining field'] = array(
    'roles' => array(
      'administrator member' => 'administrator member',
      'member' => 'member',
    ),
  );

  // Exported og permission: 'node:project:view field_info_type field'
  $permissions['node:project:view field_info_type field'] = array(
    'roles' => array(
      'administrator member' => 'administrator member',
      'member' => 'member',
    ),
  );

  // Exported og permission: 'node:project:view field_instance_delta field'
  $permissions['node:project:view field_instance_delta field'] = array(
    'roles' => array(
      'administrator member' => 'administrator member',
      'member' => 'member',
    ),
  );

  // Exported og permission: 'node:project:view field_instance_status field'
  $permissions['node:project:view field_instance_status field'] = array(
    'roles' => array(
      'administrator member' => 'administrator member',
      'member' => 'member',
    ),
  );

  // Exported og permission: 'node:project:view field_isa_exist field'
  $permissions['node:project:view field_isa_exist field'] = array(
    'roles' => array(
      'administrator member' => 'administrator member',
      'member' => 'member',
    ),
  );

  // Exported og permission: 'node:project:view field_isa_req field'
  $permissions['node:project:view field_isa_req field'] = array(
    'roles' => array(
      'administrator member' => 'administrator member',
      'member' => 'member',
    ),
  );

  // Exported og permission: 'node:project:view field_json_data field'
  $permissions['node:project:view field_json_data field'] = array(
    'roles' => array(
      'administrator member' => 'administrator member',
      'member' => 'member',
    ),
  );

  // Exported og permission: 'node:project:view field_last_cf_ping field'
  $permissions['node:project:view field_last_cf_ping field'] = array(
    'roles' => array(
      'administrator member' => 'administrator member',
      'member' => 'member',
    ),
  );

  // Exported og permission: 'node:project:view field_last_name field'
  $permissions['node:project:view field_last_name field'] = array(
    'roles' => array(
      'administrator member' => 'administrator member',
      'member' => 'member',
    ),
  );

  // Exported og permission: 'node:project:view field_months_remaining field'
  $permissions['node:project:view field_months_remaining field'] = array(
    'roles' => array(
      'administrator member' => 'administrator member',
      'member' => 'member',
    ),
  );

  // Exported og permission: 'node:project:view field_nbr_empl_afctd field'
  $permissions['node:project:view field_nbr_empl_afctd field'] = array(
    'roles' => array(
      'administrator member' => 'administrator member',
      'member' => 'member',
    ),
  );

  // Exported og permission: 'node:project:view field_nbr_vets_afctd field'
  $permissions['node:project:view field_nbr_vets_afctd field'] = array(
    'roles' => array(
      'administrator member' => 'administrator member',
      'member' => 'member',
    ),
  );

  // Exported og permission: 'node:project:view field_notif_list field'
  $permissions['node:project:view field_notif_list field'] = array(
    'roles' => array(
      'administrator member' => 'administrator member',
      'member' => 'member',
    ),
  );

  // Exported og permission: 'node:project:view field_oed_name_f field'
  $permissions['node:project:view field_oed_name_f field'] = array(
    'roles' => array(
      'administrator member' => 'administrator member',
      'member' => 'member',
    ),
  );

  // Exported og permission: 'node:project:view field_oed_name_l field'
  $permissions['node:project:view field_oed_name_l field'] = array(
    'roles' => array(
      'administrator member' => 'administrator member',
      'member' => 'member',
    ),
  );

  // Exported og permission: 'node:project:view field_oed_phone field'
  $permissions['node:project:view field_oed_phone field'] = array(
    'roles' => array(
      'administrator member' => 'administrator member',
      'member' => 'member',
    ),
  );

  // Exported og permission: 'node:project:view field_order_project field'
  $permissions['node:project:view field_order_project field'] = array(
    'roles' => array(
      'administrator member' => 'administrator member',
      'member' => 'member',
    ),
  );

  // Exported og permission: 'node:project:view field_org_afctd field'
  $permissions['node:project:view field_org_afctd field'] = array(
    'roles' => array(
      'administrator member' => 'administrator member',
      'member' => 'member',
    ),
  );

  // Exported og permission: 'node:project:view field_pm_name_f field'
  $permissions['node:project:view field_pm_name_f field'] = array(
    'roles' => array(
      'administrator member' => 'administrator member',
      'member' => 'member',
    ),
  );

  // Exported og permission: 'node:project:view field_pm_name_l field'
  $permissions['node:project:view field_pm_name_l field'] = array(
    'roles' => array(
      'administrator member' => 'administrator member',
      'member' => 'member',
    ),
  );

  // Exported og permission: 'node:project:view field_pm_phone field'
  $permissions['node:project:view field_pm_phone field'] = array(
    'roles' => array(
      'administrator member' => 'administrator member',
      'member' => 'member',
    ),
  );

  // Exported og permission: 'node:project:view field_proj_file field'
  $permissions['node:project:view field_proj_file field'] = array(
    'roles' => array(
      'administrator member' => 'administrator member',
      'member' => 'member',
    ),
  );

  // Exported og permission: 'node:project:view field_project_req field'
  $permissions['node:project:view field_project_req field'] = array(
    'roles' => array(
      'administrator member' => 'administrator member',
      'member' => 'member',
    ),
  );

  // Exported og permission: 'node:project:view field_rec_meth field'
  $permissions['node:project:view field_rec_meth field'] = array(
    'roles' => array(
      'administrator member' => 'administrator member',
      'member' => 'member',
    ),
  );

  // Exported og permission: 'node:project:view field_rpo field'
  $permissions['node:project:view field_rpo field'] = array(
    'roles' => array(
      'administrator member' => 'administrator member',
      'member' => 'member',
    ),
  );

  // Exported og permission: 'node:project:view field_rto field'
  $permissions['node:project:view field_rto field'] = array(
    'roles' => array(
      'administrator member' => 'administrator member',
      'member' => 'member',
    ),
  );

  // Exported og permission: 'node:project:view field_sec_name_f field'
  $permissions['node:project:view field_sec_name_f field'] = array(
    'roles' => array(
      'administrator member' => 'administrator member',
      'member' => 'member',
    ),
  );

  // Exported og permission: 'node:project:view field_sec_name_l field'
  $permissions['node:project:view field_sec_name_l field'] = array(
    'roles' => array(
      'administrator member' => 'administrator member',
      'member' => 'member',
    ),
  );

  // Exported og permission: 'node:project:view field_sec_phone field'
  $permissions['node:project:view field_sec_phone field'] = array(
    'roles' => array(
      'administrator member' => 'administrator member',
      'member' => 'member',
    ),
  );

  // Exported og permission: 'node:project:view field_sec_plan field'
  $permissions['node:project:view field_sec_plan field'] = array(
    'roles' => array(
      'administrator member' => 'administrator member',
      'member' => 'member',
    ),
  );

  // Exported og permission: 'node:project:view field_sprt_ctc field'
  $permissions['node:project:view field_sprt_ctc field'] = array(
    'roles' => array(
      'administrator member' => 'administrator member',
      'member' => 'member',
    ),
  );

  // Exported og permission: 'node:project:view field_sys_name_f field'
  $permissions['node:project:view field_sys_name_f field'] = array(
    'roles' => array(
      'administrator member' => 'administrator member',
      'member' => 'member',
    ),
  );

  // Exported og permission: 'node:project:view field_sys_name_l field'
  $permissions['node:project:view field_sys_name_l field'] = array(
    'roles' => array(
      'administrator member' => 'administrator member',
      'member' => 'member',
    ),
  );

  // Exported og permission: 'node:project:view field_sys_phone field'
  $permissions['node:project:view field_sys_phone field'] = array(
    'roles' => array(
      'administrator member' => 'administrator member',
      'member' => 'member',
    ),
  );

  // Exported og permission: 'node:project:view field_system_css field'
  $permissions['node:project:view field_system_css field'] = array(
    'roles' => array(
      'administrator member' => 'administrator member',
      'member' => 'member',
    ),
  );

  // Exported og permission: 'node:project:view field_used_budget field'
  $permissions['node:project:view field_used_budget field'] = array(
    'roles' => array(
      'administrator member' => 'administrator member',
      'member' => 'member',
    ),
  );

  // Exported og permission: 'node:project:view field_used_memory field'
  $permissions['node:project:view field_used_memory field'] = array(
    'roles' => array(
      'administrator member' => 'administrator member',
      'member' => 'member',
    ),
  );

  // Exported og permission: 'node:project:view field_used_storage field'
  $permissions['node:project:view field_used_storage field'] = array(
    'roles' => array(
      'administrator member' => 'administrator member',
      'member' => 'member',
    ),
  );

  // Exported og permission: 'node:project:view field_used_vcpu field'
  $permissions['node:project:view field_used_vcpu field'] = array(
    'roles' => array(
      'administrator member' => 'administrator member',
      'member' => 'member',
    ),
  );

  // Exported og permission: 'node:project:view group_access field'
  $permissions['node:project:view group_access field'] = array(
    'roles' => array(
      'administrator member' => 'administrator member',
      'member' => 'member',
    ),
  );

  // Exported og permission: 'node:project:view group_content_access field'
  $permissions['node:project:view group_content_access field'] = array(
    'roles' => array(
      'administrator member' => 'administrator member',
      'member' => 'member',
    ),
  );

  // Exported og permission: 'node:project:view group_group field'
  $permissions['node:project:view group_group field'] = array(
    'roles' => array(
      'administrator member' => 'administrator member',
      'member' => 'member',
    ),
  );

  // Exported og permission: 'node:project:view group_register field'
  $permissions['node:project:view group_register field'] = array(
    'roles' => array(
      'administrator member' => 'administrator member',
      'member' => 'member',
    ),
  );

  // Exported og permission: 'node:project:view ldap_user_current_dn field'
  $permissions['node:project:view ldap_user_current_dn field'] = array(
    'roles' => array(
      'administrator member' => 'administrator member',
      'member' => 'member',
    ),
  );

  // Exported og permission: 'node:project:view ldap_user_puid_sid field'
  $permissions['node:project:view ldap_user_puid_sid field'] = array(
    'roles' => array(),
  );

  // Exported og permission: 'node:project:view og_credits field'
  $permissions['node:project:view og_credits field'] = array(
    'roles' => array(
      'administrator member' => 'administrator member',
      'member' => 'member',
    ),
  );

  // Exported og permission: 'node:project:view og_group_ref field'
  $permissions['node:project:view og_group_ref field'] = array(
    'roles' => array(
      'administrator member' => 'administrator member',
      'member' => 'member',
    ),
  );

  // Exported og permission: 'node:project:view og_roles_permissions field'
  $permissions['node:project:view og_roles_permissions field'] = array(
    'roles' => array(
      'administrator member' => 'administrator member',
      'member' => 'member',
    ),
  );

  // Exported og permission: 'node:project:view og_user_node field'
  $permissions['node:project:view og_user_node field'] = array(
    'roles' => array(
      'administrator member' => 'administrator member',
      'member' => 'member',
    ),
  );

  return $permissions;
}
