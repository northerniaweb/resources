<?php
/**
 * @file
 * uni_promotional_callout.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function uni_promotional_callout_ctools_plugin_api() {
  list($module, $api) = func_get_args();
  if ($module == "strongarm" && $api == "strongarm") {
    return array("version" => "1");
  }
}

/**
 * Implements hook_views_api().
 */
function uni_promotional_callout_views_api() {
  return array("version" => "3.0");
}

/**
 * Implements hook_image_default_styles().
 */
function uni_promotional_callout_image_default_styles() {
  $styles = array();

  // Exported image style: promo_callout
  $styles['promo_callout'] = array(
    'name' => 'promo_callout',
    'effects' => array(
      12 => array(
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
          'height' => '120',
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
function uni_promotional_callout_node_info() {
  $items = array(
    'promotional_callout' => array(
      'name' => t('Promotional Callout'),
      'base' => 'node_content',
      'description' => t('Used for specifying and listing promotional callout.'),
      'has_title' => '1',
      'title_label' => t('Title'),
      'help' => '',
    ),
  );
  return $items;
}
