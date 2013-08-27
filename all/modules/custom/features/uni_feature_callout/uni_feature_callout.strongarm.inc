<?php
/**
 * @file
 * uni_feature_callout.strongarm.inc
 */

/**
 * Implements hook_strongarm().
 */
function uni_feature_callout_strongarm() {
  $export = array();

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'comment_anonymous_feature_callout';
  $strongarm->value = 0;
  $export['comment_anonymous_feature_callout'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'comment_default_mode_feature_callout';
  $strongarm->value = 1;
  $export['comment_default_mode_feature_callout'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'comment_default_per_page_feature_callout';
  $strongarm->value = '50';
  $export['comment_default_per_page_feature_callout'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'comment_feature_callout';
  $strongarm->value = '1';
  $export['comment_feature_callout'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'comment_form_location_feature_callout';
  $strongarm->value = 1;
  $export['comment_form_location_feature_callout'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'comment_preview_feature_callout';
  $strongarm->value = '1';
  $export['comment_preview_feature_callout'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'comment_subject_field_feature_callout';
  $strongarm->value = 1;
  $export['comment_subject_field_feature_callout'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'menu_options_feature_callout';
  $strongarm->value = array(
    0 => 'main-menu',
  );
  $export['menu_options_feature_callout'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'menu_parent_feature_callout';
  $strongarm->value = 'main-menu:0';
  $export['menu_parent_feature_callout'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'node_options_feature_callout';
  $strongarm->value = array(
    0 => 'status',
  );
  $export['node_options_feature_callout'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'node_preview_feature_callout';
  $strongarm->value = '1';
  $export['node_preview_feature_callout'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'node_submitted_feature_callout';
  $strongarm->value = 0;
  $export['node_submitted_feature_callout'] = $strongarm;

  return $export;
}
