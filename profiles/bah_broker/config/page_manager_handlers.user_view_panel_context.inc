<?php
/**
 * @file
 * page_manager_handlers.user_view_panel_context.inc
 */

$api = '2.0.0';

$data = $handler = new stdClass();
$handler->disabled = FALSE; /* Edit this to true to make a default handler disabled initially */
$handler->api_version = 1;
$handler->name = 'user_view_panel_context';
$handler->task = 'user_view';
$handler->subtask = '';
$handler->handler = 'panel_context';
$handler->weight = 0;
$handler->conf = array(
  'title' => 'Panel',
  'no_blocks' => 0,
  'pipeline' => 'standard',
  'body_classes_to_remove' => '',
  'body_classes_to_add' => '',
  'css_id' => '',
  'css' => '',
  'contexts' => array(),
  'relationships' => array(),
);
$display = new panels_display();
$display->layout = 'golden';
$display->layout_settings = array();
$display->panel_settings = array(
  'style_settings' => array(
    'default' => NULL,
    'first' => NULL,
    'second' => NULL,
    'third' => NULL,
  ),
);
$display->cache = array();
$display->title = '';
$display->uuid = '6e5253cd-a608-4be8-8055-9b46ab52459b';
$display->content = array();
$display->panels = array();
  $pane = new stdClass();
  $pane->pid = 'new-c67f9a9b-bcb0-442e-be8e-ec938fe8394e';
  $pane->panel = 'first';
  $pane->type = 'block';
  $pane->subtype = 'views-commerce_user_orders-block_1';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'override_title' => 0,
    'override_title_text' => '',
  );
  $pane->cache = array();
  $pane->style = array(
    'settings' => NULL,
  );
  $pane->css = array();
  $pane->extras = array();
  $pane->position = 0;
  $pane->locks = array();
  $pane->uuid = 'c67f9a9b-bcb0-442e-be8e-ec938fe8394e';
  $display->content['new-c67f9a9b-bcb0-442e-be8e-ec938fe8394e'] = $pane;
  $display->panels['first'][0] = 'new-c67f9a9b-bcb0-442e-be8e-ec938fe8394e';
  $pane = new stdClass();
  $pane->pid = 'new-10e782e5-f50d-442e-9973-0bec13303790';
  $pane->panel = 'first';
  $pane->type = 'block';
  $pane->subtype = 'block-11';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'override_title' => 0,
    'override_title_text' => 'My Support',
  );
  $pane->cache = array();
  $pane->style = array(
    'settings' => NULL,
  );
  $pane->css = array();
  $pane->extras = array();
  $pane->position = 1;
  $pane->locks = array();
  $pane->uuid = '10e782e5-f50d-442e-9973-0bec13303790';
  $display->content['new-10e782e5-f50d-442e-9973-0bec13303790'] = $pane;
  $display->panels['first'][1] = 'new-10e782e5-f50d-442e-9973-0bec13303790';
  $pane = new stdClass();
  $pane->pid = 'new-895060a7-186d-41ac-bde5-3d1527603f40';
  $pane->panel = 'first';
  $pane->type = 'block';
  $pane->subtype = 'views-my_details-my_details_block';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'override_title' => 1,
    'override_title_text' => 'My Details',
  );
  $pane->cache = array();
  $pane->style = array(
    'settings' => NULL,
  );
  $pane->css = array();
  $pane->extras = array();
  $pane->position = 2;
  $pane->locks = array();
  $pane->uuid = '895060a7-186d-41ac-bde5-3d1527603f40';
  $display->content['new-895060a7-186d-41ac-bde5-3d1527603f40'] = $pane;
  $display->panels['first'][2] = 'new-895060a7-186d-41ac-bde5-3d1527603f40';
  $pane = new stdClass();
  $pane->pid = 'new-b3f156ff-687f-4bf0-95f2-cd732bccb8ad';
  $pane->panel = 'first';
  $pane->type = 'block';
  $pane->subtype = 'views-my_projects-block_1';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'override_title' => 0,
    'override_title_text' => '',
  );
  $pane->cache = array();
  $pane->style = array(
    'settings' => NULL,
  );
  $pane->css = array();
  $pane->extras = array();
  $pane->position = 3;
  $pane->locks = array();
  $pane->uuid = 'b3f156ff-687f-4bf0-95f2-cd732bccb8ad';
  $display->content['new-b3f156ff-687f-4bf0-95f2-cd732bccb8ad'] = $pane;
  $display->panels['first'][3] = 'new-b3f156ff-687f-4bf0-95f2-cd732bccb8ad';
$display->hide_title = PANELS_TITLE_FIXED;
$display->title_pane = 'new-10e782e5-f50d-442e-9973-0bec13303790';
$handler->conf['display'] = $display;


$dependencies = array(
  'views_view.commerce_user_orders' => 'views_view.commerce_user_orders',
  'views_view.my_details' => 'views_view.my_details',
  'views_view.my_projects' => 'views_view.my_projects',
);

$optional = array();

$modules = array(
  0 => 'ctools',
  1 => 'page_manager',
);
