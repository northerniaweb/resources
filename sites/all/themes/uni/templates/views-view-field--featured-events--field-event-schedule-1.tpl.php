<?php

/**
 * @file
 * This template is used to print a single field in a view.
 *
 * It is not actually used in default Views, as this is registered as a theme
 * function which has better performance. For single overrides, the template is
 * perfectly okay.
 *
 * Variables available:
 * - $view: The view object
 * - $field: The field handler object that can process the input
 * - $row: The raw SQL result that can be used
 * - $output: The processed output that will normally be used.
 *
 * When fetching output from the $row, this construct should be used:
 * $data = $row->{$field->field_alias}
 *
 * The above will guarantee that you'll always get the correct data,
 * regardless of any changes in the aliasing that might happen if
 * the view is modified.
 */
?>

<!--
  If the event's start date is prior to the current time, 
  display today's date on the Event Calendar homepage block.
  This is meant to be helpful for events that span multiple days,
  so that it doens't look like the event posting is out of date.
-->

<?php 
  $current_time = time();
  $event_start_date = $row->_field_data['nid']['entity']->field_event_schedule['und']['0']['value'];
  if ($event_start_date < $current_time) {
    $output = "<p class=month>".date('M')."</p><p class=date>".date('j')."</p>";
  }
  print $output;
?>