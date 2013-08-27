<?php
/**
 * @file
 * uni_news_announcements.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function uni_news_announcements_ctools_plugin_api() {
  list($module, $api) = func_get_args();
  if ($module == "strongarm" && $api == "strongarm") {
    return array("version" => "1");
  }
  list($module, $api) = func_get_args();
  if ($module == "weight" && $api == "weight") {
    return array("version" => "1");
  }
}

/**
 * Implements hook_views_api().
 */
function uni_news_announcements_views_api() {
  return array("version" => "3.0");
}

/**
 * Implements hook_node_info().
 */
function uni_news_announcements_node_info() {
  $items = array(
    'uni_news_announcements' => array(
      'name' => t('UNI News & Announcements'),
      'base' => 'node_content',
      'description' => t('Content especially intended for special announcements and news.'),
      'has_title' => '1',
      'title_label' => t('Title'),
      'help' => '',
    ),
  );
  return $items;
}
