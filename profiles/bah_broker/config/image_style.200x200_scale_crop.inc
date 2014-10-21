<?php
/**
 * @file
 * image_style.200x200_scale_crop.inc
 */

$api = '2.0.0';

$data = array(
  'name' => '200x200_scale_crop',
  'label' => '200x200 scale crop',
  'effects' => array(
    0 => array(
      'label' => 'Scale',
      'help' => 'Scaling will maintain the aspect-ratio of the original image. If only a single dimension is specified, the other dimension will be calculated.',
      'effect callback' => 'image_scale_effect',
      'dimensions callback' => 'image_scale_dimensions',
      'form callback' => 'image_scale_form',
      'summary theme' => 'image_scale_summary',
      'module' => 'image',
      'name' => 'image_scale',
      'data' => array(
        'width' => '200',
        'height' => '',
        'upscale' => 1,
      ),
      'weight' => '1',
    ),
    1 => array(
      'label' => 'Crop',
      'help' => 'Cropping will remove portions of an image to make it the specified dimensions.',
      'effect callback' => 'image_crop_effect',
      'dimensions callback' => 'image_resize_dimensions',
      'form callback' => 'image_crop_form',
      'summary theme' => 'image_crop_summary',
      'module' => 'image',
      'name' => 'image_crop',
      'data' => array(
        'width' => '200',
        'height' => '200',
        'anchor' => 'left-top',
      ),
      'weight' => '2',
    ),
  ),
);

$dependencies = array();

$optional = array();

$modules = array(
  0 => 'image',
);