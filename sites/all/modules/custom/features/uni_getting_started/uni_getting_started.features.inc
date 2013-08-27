<?php
/**
 * @file
 * uni_getting_started.features.inc
 */

/**
 * Implements hook_image_default_styles().
 */
function uni_getting_started_image_default_styles() {
  $styles = array();

  // Exported image style: getting_started
  $styles['getting_started'] = array(
    'name' => 'getting_started',
    'effects' => array(
      3 => array(
        'label' => 'Scale and crop',
        'help' => 'Scale and crop will maintain the aspect-ratio of the original image, then crop the larger dimension. This is most useful for creating perfectly square thumbnails without stretching the image.',
        'effect callback' => 'image_scale_and_crop_effect',
        'dimensions callback' => 'image_resize_dimensions',
        'form callback' => 'image_resize_form',
        'summary theme' => 'image_resize_summary',
        'module' => 'image',
        'name' => 'image_scale_and_crop',
        'data' => array(
          'width' => '40',
          'height' => '40',
        ),
        'weight' => '1',
      ),
    ),
  );

  return $styles;
}
