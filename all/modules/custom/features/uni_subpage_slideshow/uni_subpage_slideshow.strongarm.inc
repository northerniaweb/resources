<?php
/**
 * @file
 * uni_subpage_slideshow.strongarm.inc
 */

/**
 * Implements hook_strongarm().
 */
function uni_subpage_slideshow_strongarm() {
  $export = array();

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'comment_anonymous_subpage_slideshow';
  $strongarm->value = 0;
  $export['comment_anonymous_subpage_slideshow'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'comment_default_mode_subpage_slideshow';
  $strongarm->value = 1;
  $export['comment_default_mode_subpage_slideshow'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'comment_default_per_page_subpage_slideshow';
  $strongarm->value = '50';
  $export['comment_default_per_page_subpage_slideshow'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'comment_form_location_subpage_slideshow';
  $strongarm->value = 1;
  $export['comment_form_location_subpage_slideshow'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'comment_preview_subpage_slideshow';
  $strongarm->value = '1';
  $export['comment_preview_subpage_slideshow'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'comment_subject_field_subpage_slideshow';
  $strongarm->value = 1;
  $export['comment_subject_field_subpage_slideshow'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'comment_subpage_slideshow';
  $strongarm->value = '1';
  $export['comment_subpage_slideshow'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'menu_options_subpage_slideshow';
  $strongarm->value = array(
    0 => 'main-menu',
  );
  $export['menu_options_subpage_slideshow'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'menu_parent_subpage_slideshow';
  $strongarm->value = 'main-menu:0';
  $export['menu_parent_subpage_slideshow'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'node_options_subpage_slideshow';
  $strongarm->value = array(
    0 => 'status',
  );
  $export['node_options_subpage_slideshow'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'node_preview_subpage_slideshow';
  $strongarm->value = '1';
  $export['node_preview_subpage_slideshow'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'node_submitted_subpage_slideshow';
  $strongarm->value = 0;
  $export['node_submitted_subpage_slideshow'] = $strongarm;

  return $export;
}
