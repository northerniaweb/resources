<?php
/**
 * @file
 * uni_info_for.features.menu_custom.inc
 */

/**
 * Implements hook_menu_default_menu_custom().
 */
function uni_info_for_menu_default_menu_custom() {
  $menus = array();

  // Exported menu: menu-info-for-menu
  $menus['menu-info-for-menu'] = array(
    'menu_name' => 'menu-info-for-menu',
    'title' => 'Info For',
    'description' => 'Used for adding links on the "Info For" section in the homepage, with image pop-up and hover effect.',
  );
  // Translatables
  // Included for use with string extractors like potx.
  t('Info For');
  t('Used for adding links on the "Info For" section in the homepage, with image pop-up and hover effect.');


  return $menus;
}
