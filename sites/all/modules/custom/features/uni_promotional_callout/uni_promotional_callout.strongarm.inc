<?php
/**
 * @file
 * uni_promotional_callout.strongarm.inc
 */

/**
 * Implements hook_strongarm().
 */
function uni_promotional_callout_strongarm() {
  $export = array();

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'comment_anonymous_promotional_callout';
  $strongarm->value = 0;
  $export['comment_anonymous_promotional_callout'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'comment_default_mode_promotional_callout';
  $strongarm->value = 1;
  $export['comment_default_mode_promotional_callout'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'comment_default_per_page_promotional_callout';
  $strongarm->value = '50';
  $export['comment_default_per_page_promotional_callout'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'comment_form_location_promotional_callout';
  $strongarm->value = 1;
  $export['comment_form_location_promotional_callout'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'comment_preview_promotional_callout';
  $strongarm->value = '1';
  $export['comment_preview_promotional_callout'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'comment_promotional_callout';
  $strongarm->value = '1';
  $export['comment_promotional_callout'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'comment_subject_field_promotional_callout';
  $strongarm->value = 1;
  $export['comment_subject_field_promotional_callout'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'menu_options_promotional_callout';
  $strongarm->value = array(
    0 => 'main-menu',
  );
  $export['menu_options_promotional_callout'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'menu_parent_promotional_callout';
  $strongarm->value = 'main-menu:0';
  $export['menu_parent_promotional_callout'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'node_options_promotional_callout';
  $strongarm->value = array(
    0 => 'status',
  );
  $export['node_options_promotional_callout'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'node_preview_promotional_callout';
  $strongarm->value = '1';
  $export['node_preview_promotional_callout'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'node_submitted_promotional_callout';
  $strongarm->value = 0;
  $export['node_submitted_promotional_callout'] = $strongarm;

  return $export;
}
