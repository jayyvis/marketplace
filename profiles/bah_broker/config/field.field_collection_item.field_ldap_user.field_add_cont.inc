<?php
/**
 * @file
 * field.field_collection_item.field_ldap_user.field_add_cont.inc
 */

$api = '2.0.0';

$data = array(
  'field_config' => array(
    'translatable' => '0',
    'entity_types' => array(),
    'settings' => array(
      'max_length' => '255',
    ),
    'storage' => array(
      'type' => 'field_sql_storage',
      'settings' => array(),
      'module' => 'field_sql_storage',
      'active' => '1',
      'details' => array(
        'sql' => array(
          'FIELD_LOAD_CURRENT' => array(
            'field_data_field_ldap_user' => array(
              'dn' => 'field_ldap_user_dn',
            ),
          ),
          'FIELD_LOAD_REVISION' => array(
            'field_revision_field_ldap_user' => array(
              'dn' => 'field_ldap_user_dn',
            ),
          ),
        ),
      ),
    ),
    'foreign keys' => array(),
    'indexes' => array(
      'dn' => array(
        0 => 'dn',
      ),
    ),
    'field_name' => 'field_ldap_user',
    'type' => 'ldap_entry_reference',
    'module' => 'ldap_entry_reference',
    'active' => '1',
    'locked' => '0',
    'cardinality' => '1',
    'deleted' => '0',
    'columns' => array(
      'dn' => array(
        'type' => 'varchar',
        'length' => '255',
        'not null' => FALSE,
      ),
    ),
  ),
  'field_instance' => array(
    'label' => 'Member',
    'widget' => array(
      'weight' => '2',
      'type' => 'ldap_entry_reference_autocomplete',
      'module' => 'ldap_entry_reference',
      'active' => 1,
      'settings' => array(
        'autocomplete_match' => 'contains',
        'size' => '60',
        'ldap_search_attr' => 'cn',
        'ldap_search_attr1' => 'userprincipalname',
        'autocomplete_path' => 'ldap_entry_reference/autocomplete',
      ),
    ),
    'settings' => array(
      'search_plugin' => 'ldap',
      'ldap_entry_type' => 'user',
      'ldap_base_dn' => '',
      'ldap_extra_filter' => '',
      'user_register_form' => FALSE,
    ),
    'display' => array(
      'default' => array(
        'label' => 'above',
        'type' => 'hidden',
        'weight' => '6',
        'settings' => array(),
      ),
    ),
    'required' => 0,
    'description' => '',
    'field_name' => 'field_ldap_user',
    'entity_type' => 'field_collection_item',
    'bundle' => 'field_add_cont',
    'deleted' => '0',
  ),
);

$dependencies = array();

$optional = array();

$modules = array(
  0 => 'field_sql_storage',
  1 => 'ldap_entry_reference',
);
