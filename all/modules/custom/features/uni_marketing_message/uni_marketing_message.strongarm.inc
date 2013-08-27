<?php
/**
 * @file
 * uni_marketing_message.strongarm.inc
 */

/**
 * Implements hook_strongarm().
 */
function uni_marketing_message_strongarm() {
  $export = array();

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'comment_anonymous_marketing_message';
  $strongarm->value = 0;
  $export['comment_anonymous_marketing_message'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'comment_default_mode_marketing_message';
  $strongarm->value = 1;
  $export['comment_default_mode_marketing_message'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'comment_default_per_page_marketing_message';
  $strongarm->value = '50';
  $export['comment_default_per_page_marketing_message'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'comment_form_location_marketing_message';
  $strongarm->value = 1;
  $export['comment_form_location_marketing_message'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'comment_marketing_message';
  $strongarm->value = '1';
  $export['comment_marketing_message'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'comment_preview_marketing_message';
  $strongarm->value = '1';
  $export['comment_preview_marketing_message'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'comment_subject_field_marketing_message';
  $strongarm->value = 1;
  $export['comment_subject_field_marketing_message'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'menu_options_marketing_message';
  $strongarm->value = array(
    0 => 'main-menu',
  );
  $export['menu_options_marketing_message'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'menu_parent_marketing_message';
  $strongarm->value = 'main-menu:0';
  $export['menu_parent_marketing_message'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'node_options_marketing_message';
  $strongarm->value = array(
    0 => 'status',
  );
  $export['node_options_marketing_message'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'node_preview_marketing_message';
  $strongarm->value = '1';
  $export['node_preview_marketing_message'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'node_submitted_marketing_message';
  $strongarm->value = 0;
  $export['node_submitted_marketing_message'] = $strongarm;

  return $export;
}
