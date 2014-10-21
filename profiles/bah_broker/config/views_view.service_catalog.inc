<?php
/**
 * @file
 * views_view.service_catalog.inc
 */

$api = '2.0.0';

$data = $view = new view();
$view->name = 'service_catalog';
$view->description = '';
$view->tag = 'default';
$view->base_table = 'node';
$view->human_name = 'Service Catalog';
$view->core = 7;
$view->api_version = '3.0';
$view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

/* Display: Master */
$handler = $view->new_display('default', 'Master', 'default');
$handler->display->display_options['title'] = 'Service Catalog';
$handler->display->display_options['use_more_always'] = FALSE;
$handler->display->display_options['access']['type'] = 'perm';
$handler->display->display_options['cache']['type'] = 'none';
$handler->display->display_options['query']['type'] = 'views_query';
$handler->display->display_options['query']['options']['distinct'] = TRUE;
$handler->display->display_options['exposed_form']['type'] = 'better_exposed_filters';
$handler->display->display_options['exposed_form']['options']['bef'] = array(
  'general' => array(
    'allow_secondary' => 0,
    'secondary_label' => 'Advanced options',
  ),
  'type_1' => array(
    'bef_format' => 'bef_links',
    'more_options' => array(
      'bef_select_all_none' => FALSE,
      'bef_collapsible' => 0,
      'is_secondary' => 0,
      'any_label' => '',
      'bef_filter_description' => '',
      'tokens' => array(
        'available' => array(
          0 => 'global_types',
        ),
      ),
      'rewrite' => array(
        'filter_rewrite_values' => '',
      ),
    ),
  ),
);
$handler->display->display_options['exposed_form']['options']['input_required'] = 0;
$handler->display->display_options['exposed_form']['options']['text_input_required_format'] = 'filtered_html';
$handler->display->display_options['pager']['type'] = 'full';
$handler->display->display_options['pager']['options']['items_per_page'] = '10';
$handler->display->display_options['style_plugin'] = 'default';
$handler->display->display_options['row_plugin'] = 'node';
/* Relationship: Content: Referenced products */
$handler->display->display_options['relationships']['field_product_product_id']['id'] = 'field_product_product_id';
$handler->display->display_options['relationships']['field_product_product_id']['table'] = 'field_data_field_product';
$handler->display->display_options['relationships']['field_product_product_id']['field'] = 'field_product_product_id';
/* Field: Content: Title */
$handler->display->display_options['fields']['title']['id'] = 'title';
$handler->display->display_options['fields']['title']['table'] = 'node';
$handler->display->display_options['fields']['title']['field'] = 'title';
$handler->display->display_options['fields']['title']['label'] = '';
$handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
$handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
/* Sort criterion: Content: Title */
$handler->display->display_options['sorts']['title']['id'] = 'title';
$handler->display->display_options['sorts']['title']['table'] = 'node';
$handler->display->display_options['sorts']['title']['field'] = 'title';
$handler->display->display_options['sorts']['title']['order'] = 'DESC';
/* Filter criterion: Content: Published */
$handler->display->display_options['filters']['status']['id'] = 'status';
$handler->display->display_options['filters']['status']['table'] = 'node';
$handler->display->display_options['filters']['status']['field'] = 'status';
$handler->display->display_options['filters']['status']['value'] = 1;
$handler->display->display_options['filters']['status']['group'] = 1;
$handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
/* Filter criterion: Content: Type */
$handler->display->display_options['filters']['type']['id'] = 'type';
$handler->display->display_options['filters']['type']['table'] = 'node';
$handler->display->display_options['filters']['type']['field'] = 'type';
$handler->display->display_options['filters']['type']['value'] = array(
  'product' => 'product',
);
/* Filter criterion: Commerce Product: Type */
$handler->display->display_options['filters']['type_1']['id'] = 'type_1';
$handler->display->display_options['filters']['type_1']['table'] = 'commerce_product';
$handler->display->display_options['filters']['type_1']['field'] = 'type';
$handler->display->display_options['filters']['type_1']['relationship'] = 'field_product_product_id';
$handler->display->display_options['filters']['type_1']['value'] = array(
  'application' => 'application',
  'database' => 'database',
  'service' => 'service',
  'web_service' => 'web_service',
);
$handler->display->display_options['filters']['type_1']['exposed'] = TRUE;
$handler->display->display_options['filters']['type_1']['expose']['operator_id'] = 'type_1_op';
$handler->display->display_options['filters']['type_1']['expose']['label'] = 'Type';
$handler->display->display_options['filters']['type_1']['expose']['operator'] = 'type_1_op';
$handler->display->display_options['filters']['type_1']['expose']['identifier'] = 'type_1';
$handler->display->display_options['filters']['type_1']['expose']['remember_roles'] = array(
  2 => '2',
  1 => 0,
  5 => 0,
  6 => 0,
  3 => 0,
);
$handler->display->display_options['filters']['type_1']['expose']['reduce'] = TRUE;

/* Display: Page */
$handler = $view->new_display('page', 'Page', 'page');
$handler->display->display_options['path'] = 'service-catalog-previous';
$handler->display->display_options['menu']['type'] = 'normal';
$handler->display->display_options['menu']['title'] = 'Service Catalog';
$handler->display->display_options['menu']['name'] = 'main-menu';

/* Display: Page */
$handler = $view->new_display('page', 'Page', 'page_1');
$handler->display->display_options['defaults']['group_by'] = FALSE;
$handler->display->display_options['group_by'] = TRUE;
$handler->display->display_options['defaults']['style_plugin'] = FALSE;
$handler->display->display_options['style_plugin'] = 'default';
$handler->display->display_options['defaults']['style_options'] = FALSE;
$handler->display->display_options['defaults']['row_plugin'] = FALSE;
$handler->display->display_options['row_plugin'] = 'fields';
$handler->display->display_options['defaults']['row_options'] = FALSE;
$handler->display->display_options['defaults']['fields'] = FALSE;
/* Field: Content: Image */
$handler->display->display_options['fields']['field_server_image']['id'] = 'field_server_image';
$handler->display->display_options['fields']['field_server_image']['table'] = 'field_data_field_server_image';
$handler->display->display_options['fields']['field_server_image']['field'] = 'field_server_image';
$handler->display->display_options['fields']['field_server_image']['label'] = '';
$handler->display->display_options['fields']['field_server_image']['element_label_colon'] = FALSE;
$handler->display->display_options['fields']['field_server_image']['click_sort_column'] = 'fid';
$handler->display->display_options['fields']['field_server_image']['settings'] = array(
  'image_style' => '200x200_scale_crop',
  'image_link' => '',
);
$handler->display->display_options['fields']['field_server_image']['group_column'] = 'entity_id';
/* Field: Content: Title */
$handler->display->display_options['fields']['title']['id'] = 'title';
$handler->display->display_options['fields']['title']['table'] = 'node';
$handler->display->display_options['fields']['title']['field'] = 'title';
$handler->display->display_options['fields']['title']['label'] = '';
$handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
$handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
/* Field: Content: Body */
$handler->display->display_options['fields']['body']['id'] = 'body';
$handler->display->display_options['fields']['body']['table'] = 'field_data_body';
$handler->display->display_options['fields']['body']['field'] = 'body';
$handler->display->display_options['fields']['body']['label'] = '';
$handler->display->display_options['fields']['body']['alter']['max_length'] = '50';
$handler->display->display_options['fields']['body']['alter']['trim'] = TRUE;
$handler->display->display_options['fields']['body']['element_label_colon'] = FALSE;
$handler->display->display_options['fields']['body']['settings'] = array(
  'trim_length' => '600',
);
$handler->display->display_options['fields']['body']['group_column'] = 'entity_id';
/* Field: Commerce Product: Price */
$handler->display->display_options['fields']['commerce_price']['id'] = 'commerce_price';
$handler->display->display_options['fields']['commerce_price']['table'] = 'field_data_commerce_price';
$handler->display->display_options['fields']['commerce_price']['field'] = 'commerce_price';
$handler->display->display_options['fields']['commerce_price']['relationship'] = 'field_product_product_id';
$handler->display->display_options['fields']['commerce_price']['label'] = '';
$handler->display->display_options['fields']['commerce_price']['element_label_colon'] = FALSE;
$handler->display->display_options['fields']['commerce_price']['click_sort_column'] = 'amount';
$handler->display->display_options['fields']['commerce_price']['settings'] = array(
  'calculation' => '0',
);
$handler->display->display_options['fields']['commerce_price']['group_column'] = 'entity_id';
$handler->display->display_options['fields']['commerce_price']['group_columns'] = array(
  'amount' => 'amount',
);
/* Field: Content: Nid */
$handler->display->display_options['fields']['nid']['id'] = 'nid';
$handler->display->display_options['fields']['nid']['table'] = 'node';
$handler->display->display_options['fields']['nid']['field'] = 'nid';
$handler->display->display_options['fields']['nid']['label'] = '';
$handler->display->display_options['fields']['nid']['alter']['alter_text'] = TRUE;
$handler->display->display_options['fields']['nid']['alter']['text'] = 'Select';
$handler->display->display_options['fields']['nid']['element_label_type'] = 'div';
$handler->display->display_options['fields']['nid']['element_label_class'] = 'button';
$handler->display->display_options['fields']['nid']['element_label_colon'] = FALSE;
$handler->display->display_options['fields']['nid']['link_to_node'] = TRUE;
$handler->display->display_options['path'] = 'service-catalog';
$handler->display->display_options['menu']['type'] = 'normal';
$handler->display->display_options['menu']['title'] = 'Service Catalog';
$handler->display->display_options['menu']['name'] = 'main-menu';


$dependencies = array();

$optional = array();

$modules = array(
  0 => 'views',
  1 => 'node',
  2 => 'image',
  3 => 'text',
  4 => 'commerce_price',
);
