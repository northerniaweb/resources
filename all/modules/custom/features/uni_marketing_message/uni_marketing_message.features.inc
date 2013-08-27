<?php
/**
 * @file
 * uni_marketing_message.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function uni_marketing_message_ctools_plugin_api() {
  list($module, $api) = func_get_args();
  if ($module == "strongarm" && $api == "strongarm") {
    return array("version" => "1");
  }
}

/**
 * Implements hook_views_api().
 */
function uni_marketing_message_views_api() {
  return array("version" => "3.0");
}

/**
 * Implements hook_node_info().
 */
function uni_marketing_message_node_info() {
  $items = array(
    'marketing_message' => array(
      'name' => t('Marketing Message'),
      'base' => 'node_content',
      'description' => t('Contents used as marketing messages on the homepage.'),
      'has_title' => '1',
      'title_label' => t('Title'),
      'help' => '',
    ),
  );
  return $items;
}
