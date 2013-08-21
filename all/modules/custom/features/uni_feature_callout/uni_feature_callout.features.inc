<?php
/**
 * @file
 * uni_feature_callout.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function uni_feature_callout_ctools_plugin_api() {
  list($module, $api) = func_get_args();
  if ($module == "strongarm" && $api == "strongarm") {
    return array("version" => "1");
  }
}

/**
 * Implements hook_views_api().
 */
function uni_feature_callout_views_api() {
  return array("version" => "3.0");
}

/**
 * Implements hook_image_default_styles().
 */
function uni_feature_callout_image_default_styles() {
  $styles = array();

  // Exported image style: feature_callout
  $styles['feature_callout'] = array(
    'name' => 'feature_callout',
    'effects' => array(
      11 => array(
        'label' => 'Scale and crop',
        'help' => 'Scale and crop will maintain the aspect-ratio of the original image, then crop the larger dimension. This is most useful for creating perfectly square thumbnails without stretching the image.',
        'effect callback' => 'image_scale_and_crop_effect',
        'dimensions callback' => 'image_resize_dimensions',
        'form callback' => 'image_resize_form',
        'summary theme' => 'image_resize_summary',
        'module' => 'image',
        'name' => 'image_scale_and_crop',
        'data' => array(
          'width' => '216',
          'height' => '126',
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
function uni_feature_callout_node_info() {
  $items = array(
    'feature_callout' => array(
      'name' => t('Featured Callout'),
      'base' => 'node_content',
      'description' => t('Used for specifying and listing feature callout.'),
      'has_title' => '1',
      'title_label' => t('Title'),
      'help' => '',
    ),
  );
  return $items;
}
