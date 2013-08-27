<?php
/**
 * @file
 * uni_contexts_and_basic_pages.features.menu_custom.inc
 */

/**
 * Implements hook_menu_default_menu_custom().
 */
function uni_contexts_and_basic_pages_menu_default_menu_custom() {
  $menus = array();

  // Exported menu: menu-subpages-menu
  $menus['menu-subpages-menu'] = array(
    'menu_name' => 'menu-subpages-menu',
    'title' => 'Subpages Menu',
    'description' => 'Holds all the menus for all subpages.',
  );
  // Translatables
  // Included for use with string extractors like potx.
  t('Holds all the menus for all subpages.');
  t('Subpages Menu');


  return $menus;
}
