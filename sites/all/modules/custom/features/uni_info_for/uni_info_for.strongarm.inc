<?php
/**
 * @file
 * uni_info_for.strongarm.inc
 */

/**
 * Implements hook_strongarm().
 */
function uni_info_for_strongarm() {
  $export = array();

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'menu_icons_default_icon';
  $strongarm->value = 'sites/all/modules/contrib/menu_icons/images/default_icon.png';
  $export['menu_icons_default_icon'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'menu_icons_hide_titles';
  $strongarm->value = 0;
  $export['menu_icons_hide_titles'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'menu_icons_image_folder';
  $strongarm->value = 'menu_icons';
  $export['menu_icons_image_folder'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'menu_icons_image_style_default';
  $strongarm->value = 'info_for_image';
  $export['menu_icons_image_style_default'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'menu_icons_position';
  $strongarm->value = 'left';
  $export['menu_icons_position'] = $strongarm;

  return $export;
}
