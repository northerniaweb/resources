<?php
/**
 * @file
 * uni_getting_started.features.menu_custom.inc
 */

/**
 * Implements hook_menu_default_menu_custom().
 */
function uni_getting_started_menu_default_menu_custom() {
  $menus = array();

  // Exported menu: menu-getting-started
  $menus['menu-getting-started'] = array(
    'menu_name' => 'menu-getting-started',
    'title' => 'Getting Started',
    'description' => 'Menu for Getting Started Menu section with specialized icons.',
  );
  // Translatables
  // Included for use with string extractors like potx.
  t('Getting Started');
  t('Menu for Getting Started Menu section with specialized icons.');


  return $menus;
}
