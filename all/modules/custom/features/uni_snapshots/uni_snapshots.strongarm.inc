<?php
/**
 * @file
 * uni_snapshots.strongarm.inc
 */

/**
 * Implements hook_strongarm().
 */
function uni_snapshots_strongarm() {
  $export = array();

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'comment_anonymous_snapshots';
  $strongarm->value = 0;
  $export['comment_anonymous_snapshots'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'comment_default_mode_snapshots';
  $strongarm->value = 1;
  $export['comment_default_mode_snapshots'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'comment_default_per_page_snapshots';
  $strongarm->value = '50';
  $export['comment_default_per_page_snapshots'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'comment_form_location_snapshots';
  $strongarm->value = 1;
  $export['comment_form_location_snapshots'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'comment_preview_snapshots';
  $strongarm->value = '1';
  $export['comment_preview_snapshots'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'comment_snapshots';
  $strongarm->value = '1';
  $export['comment_snapshots'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'comment_subject_field_snapshots';
  $strongarm->value = 1;
  $export['comment_subject_field_snapshots'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'menu_options_snapshots';
  $strongarm->value = array(
    0 => 'main-menu',
  );
  $export['menu_options_snapshots'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'menu_parent_snapshots';
  $strongarm->value = 'main-menu:0';
  $export['menu_parent_snapshots'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'node_options_snapshots';
  $strongarm->value = array(
    0 => 'status',
  );
  $export['node_options_snapshots'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'node_preview_snapshots';
  $strongarm->value = '1';
  $export['node_preview_snapshots'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'node_submitted_snapshots';
  $strongarm->value = 0;
  $export['node_submitted_snapshots'] = $strongarm;

  return $export;
}
