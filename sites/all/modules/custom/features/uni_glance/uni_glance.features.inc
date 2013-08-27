<?php
/**
 * @file
 * uni_glance.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function uni_glance_ctools_plugin_api() {
  list($module, $api) = func_get_args();
  if ($module == "strongarm" && $api == "strongarm") {
    return array("version" => "1");
  }
}

/**
 * Implements hook_views_api().
 */
function uni_glance_views_api() {
  return array("version" => "3.0");
}

/**
 * Implements hook_node_info().
 */
function uni_glance_node_info() {
  $items = array(
    'uni_at_a_glance' => array(
      'name' => t('UNI At A Glance'),
      'base' => 'node_content',
      'description' => t('"UNI At A Glance" content type.'),
      'has_title' => '1',
      'title_label' => t('Title'),
      'help' => '',
    ),
  );
  return $items;
}
