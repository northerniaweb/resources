<?php
/**
 * @file
 * uni_events_parser.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function uni_events_parser_ctools_plugin_api() {
  list($module, $api) = func_get_args();
  if ($module == "feeds" && $api == "feeds_importer_default") {
    return array("version" => "1");
  }
  list($module, $api) = func_get_args();
  if ($module == "strongarm" && $api == "strongarm") {
    return array("version" => "1");
  }
}

/**
 * Implements hook_node_info().
 */
function uni_events_parser_node_info() {
  $items = array(
    'event_feed' => array(
      'name' => t('Event Feed'),
      'base' => 'node_content',
      'description' => t('A feed from the central UNI calendar'),
      'has_title' => '1',
      'title_label' => t('Title'),
      'help' => '',
    ),
  );
  return $items;
}
