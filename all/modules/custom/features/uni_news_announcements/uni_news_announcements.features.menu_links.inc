<?php
/**
 * @file
 * uni_news_announcements.features.menu_links.inc
 */

/**
 * Implements hook_menu_default_menu_links().
 */
function uni_news_announcements_menu_default_menu_links() {
  $menu_links = array();

  // Exported menu link: navigation:admin/content/news
  $menu_links['navigation:admin/content/news'] = array(
    'menu_name' => 'navigation',
    'link_path' => 'admin/content/news',
    'router_path' => 'admin/content/news',
    'link_title' => 'News & Announcements',
    'options' => array(),
    'module' => 'system',
    'hidden' => '0',
    'external' => '0',
    'has_children' => '0',
    'expanded' => '0',
    'weight' => '-49',
  );
  // Translatables
  // Included for use with string extractors like potx.
  t('News & Announcements');


  return $menu_links;
}
