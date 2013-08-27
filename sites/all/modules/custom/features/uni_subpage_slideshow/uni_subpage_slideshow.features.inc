<?php
/**
 * @file
 * uni_subpage_slideshow.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function uni_subpage_slideshow_ctools_plugin_api() {
  list($module, $api) = func_get_args();
  if ($module == "strongarm" && $api == "strongarm") {
    return array("version" => "1");
  }
}

/**
 * Implements hook_views_api().
 */
function uni_subpage_slideshow_views_api() {
  return array("version" => "3.0");
}

/**
 * Implements hook_image_default_styles().
 */
function uni_subpage_slideshow_image_default_styles() {
  $styles = array();

  // Exported image style: subpage_slideshow
  $styles['subpage_slideshow'] = array(
    'name' => 'subpage_slideshow',
    'effects' => array(
      5 => array(
        'label' => 'Scale and crop',
        'help' => 'Scale and crop will maintain the aspect-ratio of the original image, then crop the larger dimension. This is most useful for creating perfectly square thumbnails without stretching the image.',
        'effect callback' => 'image_scale_and_crop_effect',
        'dimensions callback' => 'image_resize_dimensions',
        'form callback' => 'image_resize_form',
        'summary theme' => 'image_resize_summary',
        'module' => 'image',
        'name' => 'image_scale_and_crop',
        'data' => array(
          'width' => '680',
          'height' => '360',
        ),
        'weight' => '1',
      ),
    ),
  );

  return $styles;
}

/**
 * Implements hook_node_info().
 */
function uni_subpage_slideshow_node_info() {
  $items = array(
    'subpage_slideshow' => array(
      'name' => t('Subpage Slideshow'),
      'base' => 'node_content',
      'description' => t('A collection of images to be displayed on the sub header.'),
      'has_title' => '1',
      'title_label' => t('Title'),
      'help' => '',
    ),
  );
  return $items;
}
