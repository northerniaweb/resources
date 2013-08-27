<?php
/**
 * @file
 * uni_event_calendar.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function uni_event_calendar_ctools_plugin_api() {
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
 * Implements hook_views_api().
 */
function uni_event_calendar_views_api() {
  return array("version" => "3.0");
}

/**
 * Implements hook_node_info().
 */
function uni_event_calendar_node_info() {
  $items = array(
    'event_calendar' => array(
      'name' => t('Event Calendar'),
      'base' => 'node_content',
      'description' => t('For event calendar items generated from a feed.'),
      'has_title' => '1',
      'title_label' => t('Title'),
      'help' => '',
    ),
  );
  return $items;
}
