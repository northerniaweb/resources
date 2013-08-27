<?php
/**
 * @file
 * uni_kudos.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function uni_kudos_ctools_plugin_api() {
  list($module, $api) = func_get_args();
  if ($module == "strongarm" && $api == "strongarm") {
    return array("version" => "1");
  }
}

/**
 * Implements hook_views_api().
 */
function uni_kudos_views_api() {
  return array("version" => "3.0");
}

/**
 * Implements hook_node_info().
 */
function uni_kudos_node_info() {
  $items = array(
    'kudos' => array(
      'name' => t('Kudos'),
      'base' => 'node_content',
      'description' => t('For listing or archiving names of people who belonged into this category.'),
      'has_title' => '1',
      'title_label' => t('Name'),
      'help' => '',
    ),
  );
  return $items;
}
