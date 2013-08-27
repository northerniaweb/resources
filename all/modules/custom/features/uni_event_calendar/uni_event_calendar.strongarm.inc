<?php
/**
 * @file
 * uni_event_calendar.strongarm.inc
 */

/**
 * Implements hook_strongarm().
 */
function uni_event_calendar_strongarm() {
  $export = array();

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'comment_anonymous_event_calendar';
  $strongarm->value = 0;
  $export['comment_anonymous_event_calendar'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'comment_default_mode_event_calendar';
  $strongarm->value = 1;
  $export['comment_default_mode_event_calendar'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'comment_default_per_page_event_calendar';
  $strongarm->value = '50';
  $export['comment_default_per_page_event_calendar'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'comment_event_calendar';
  $strongarm->value = '1';
  $export['comment_event_calendar'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'comment_form_location_event_calendar';
  $strongarm->value = 1;
  $export['comment_form_location_event_calendar'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'comment_preview_event_calendar';
  $strongarm->value = '1';
  $export['comment_preview_event_calendar'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'comment_subject_field_event_calendar';
  $strongarm->value = 1;
  $export['comment_subject_field_event_calendar'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'menu_options_event_calendar';
  $strongarm->value = array(
    0 => 'main-menu',
  );
  $export['menu_options_event_calendar'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'menu_parent_event_calendar';
  $strongarm->value = 'main-menu:0';
  $export['menu_parent_event_calendar'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'node_options_event_calendar';
  $strongarm->value = array(
    0 => 'status',
  );
  $export['node_options_event_calendar'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'node_preview_event_calendar';
  $strongarm->value = '1';
  $export['node_preview_event_calendar'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'node_submitted_event_calendar';
  $strongarm->value = 0;
  $export['node_submitted_event_calendar'] = $strongarm;

  return $export;
}
