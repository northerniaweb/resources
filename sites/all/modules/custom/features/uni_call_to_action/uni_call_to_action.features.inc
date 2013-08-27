<?php
/**
 * @file
 * uni_call_to_action.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function uni_call_to_action_ctools_plugin_api() {
  list($module, $api) = func_get_args();
  if ($module == "strongarm" && $api == "strongarm") {
    return array("version" => "1");
  }
}

/**
 * Implements hook_node_info().
 */
function uni_call_to_action_node_info() {
  $items = array(
    'call_to_action' => array(
      'name' => t('Call to Action'),
      'base' => 'node_content',
      'description' => t('Used for specifying and listing Call to Action node types.'),
      'has_title' => '1',
      'title_label' => t('Title'),
      'help' => '',
    ),
  );
  return $items;
}
