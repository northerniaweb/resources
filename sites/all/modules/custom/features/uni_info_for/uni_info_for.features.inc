<?php
/**
 * @file
 * uni_info_for.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function uni_info_for_ctools_plugin_api() {
  list($module, $api) = func_get_args();
  if ($module == "strongarm" && $api == "strongarm") {
    return array("version" => "1");
  }
}

/**
 * Implements hook_image_default_styles().
 */
function uni_info_for_image_default_styles() {
  $styles = array();

  // Exported image style: info_for
  $styles['info_for'] = array(
    'name' => 'info_for',
    'effects' => array(
      4 => array(
        'label' => 'Scale and crop',
        'help' => 'Scale and crop will maintain the aspect-ratio of the original image, then crop the larger dimension. This is most useful for creating perfectly square thumbnails without stretching the image.',
        'effect callback' => 'image_scale_and_crop_effect',
        'dimensions callback' => 'image_resize_dimensions',
        'form callback' => 'image_resize_form',
        'summary theme' => 'image_resize_summary',
        'module' => 'image',
        'name' => 'image_scale_and_crop',
        'data' => array(
          'width' => '140',
          'height' => '180',
        ),
        'weight' => '1',
      ),
    ),
  );

  // Exported image style: info_for_image
  $styles['info_for_image'] = array(
    'name' => 'info_for_image',
    'effects' => array(
      2 => array(
        'label' => 'Scale and crop',
        'help' => 'Scale and crop will maintain the aspect-ratio of the original image, then crop the larger dimension. This is most useful for creating perfectly square thumbnails without stretching the image.',
        'effect callback' => 'image_scale_and_crop_effect',
        'dimensions callback' => 'image_resize_dimensions',
        'form callback' => 'image_resize_form',
        'summary theme' => 'image_resize_summary',
        'module' => 'image',
        'name' => 'image_scale_and_crop',
        'data' => array(
          'width' => '140',
          'height' => '180',
        ),
        'weight' => '1',
      ),
    ),
  );

  return $styles;
}
