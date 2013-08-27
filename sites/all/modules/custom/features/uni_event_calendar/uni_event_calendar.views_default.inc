<?php
/**
 * @file
 * uni_event_calendar.views_default.inc
 */

/**
 * Implements hook_views_default_views().
 */
function uni_event_calendar_views_default_views() {
  $export = array();

  $view = new view;
  $view->name = 'featured_events';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'node';
  $view->human_name = 'Featured Events';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['title'] = 'Upcoming Events';
  $handler->display->display_options['use_more_always'] = TRUE;
  $handler->display->display_options['use_more_text'] = 'More Events » ';
  $handler->display->display_options['access']['type'] = 'perm';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['query']['options']['query_comment'] = FALSE;
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['pager']['type'] = 'some';
  $handler->display->display_options['pager']['options']['items_per_page'] = '10';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['style_plugin'] = 'default';
  $handler->display->display_options['row_plugin'] = 'fields';
  /* Footer: Global: Text area */
  $handler->display->display_options['footer']['area']['id'] = 'area';
  $handler->display->display_options['footer']['area']['table'] = 'views';
  $handler->display->display_options['footer']['area']['field'] = 'area';
  $handler->display->display_options['footer']['area']['empty'] = TRUE;
  $handler->display->display_options['footer']['area']['content'] = '<a href="#">Full Calendar</a> <a href="/node/add/event-calendar">Submit Event</a>';
  $handler->display->display_options['footer']['area']['format'] = 'wysiwyg_format';
  $handler->display->display_options['footer']['area']['tokenize'] = 0;
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['title']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['title']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = 0;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = 0;
  $handler->display->display_options['fields']['title']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['title']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['title']['alter']['html'] = 0;
  $handler->display->display_options['fields']['title']['hide_empty'] = 0;
  $handler->display->display_options['fields']['title']['empty_zero'] = 0;
  $handler->display->display_options['fields']['title']['link_to_node'] = 1;
  /* Field: Content: Body */
  $handler->display->display_options['fields']['body']['id'] = 'body';
  $handler->display->display_options['fields']['body']['table'] = 'field_data_body';
  $handler->display->display_options['fields']['body']['field'] = 'body';
  $handler->display->display_options['fields']['body']['label'] = '';
  $handler->display->display_options['fields']['body']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['body']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['body']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['body']['alter']['external'] = 0;
  $handler->display->display_options['fields']['body']['alter']['replace_spaces'] = 0;
  $handler->display->display_options['fields']['body']['alter']['trim_whitespace'] = 0;
  $handler->display->display_options['fields']['body']['alter']['nl2br'] = 0;
  $handler->display->display_options['fields']['body']['alter']['max_length'] = '100';
  $handler->display->display_options['fields']['body']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['body']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['body']['alter']['more_link'] = 0;
  $handler->display->display_options['fields']['body']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['body']['alter']['trim'] = 1;
  $handler->display->display_options['fields']['body']['alter']['html'] = 0;
  $handler->display->display_options['fields']['body']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['body']['element_default_classes'] = 1;
  $handler->display->display_options['fields']['body']['hide_empty'] = 0;
  $handler->display->display_options['fields']['body']['empty_zero'] = 0;
  $handler->display->display_options['fields']['body']['hide_alter_empty'] = 1;
  $handler->display->display_options['fields']['body']['field_api_classes'] = 0;
  /* Field: Content: Schedule */
  $handler->display->display_options['fields']['field_event_schedule']['id'] = 'field_event_schedule';
  $handler->display->display_options['fields']['field_event_schedule']['table'] = 'field_data_field_event_schedule';
  $handler->display->display_options['fields']['field_event_schedule']['field'] = 'field_event_schedule';
  $handler->display->display_options['fields']['field_event_schedule']['label'] = '';
  $handler->display->display_options['fields']['field_event_schedule']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_event_schedule']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['field_event_schedule']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['field_event_schedule']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['field_event_schedule']['alter']['external'] = 0;
  $handler->display->display_options['fields']['field_event_schedule']['alter']['replace_spaces'] = 0;
  $handler->display->display_options['fields']['field_event_schedule']['alter']['trim_whitespace'] = 0;
  $handler->display->display_options['fields']['field_event_schedule']['alter']['nl2br'] = 0;
  $handler->display->display_options['fields']['field_event_schedule']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['field_event_schedule']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['field_event_schedule']['alter']['more_link'] = 0;
  $handler->display->display_options['fields']['field_event_schedule']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['field_event_schedule']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['field_event_schedule']['alter']['html'] = 0;
  $handler->display->display_options['fields']['field_event_schedule']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_event_schedule']['element_default_classes'] = 1;
  $handler->display->display_options['fields']['field_event_schedule']['hide_empty'] = 0;
  $handler->display->display_options['fields']['field_event_schedule']['empty_zero'] = 0;
  $handler->display->display_options['fields']['field_event_schedule']['hide_alter_empty'] = 1;
  $handler->display->display_options['fields']['field_event_schedule']['settings'] = array(
    'format_type' => 'long',
    'fromto' => 'both',
    'multiple_number' => '',
    'multiple_from' => '',
    'multiple_to' => '',
  );
  $handler->display->display_options['fields']['field_event_schedule']['field_api_classes'] = 0;
  /* Sort criterion: Content: Post date */
  $handler->display->display_options['sorts']['created']['id'] = 'created';
  $handler->display->display_options['sorts']['created']['table'] = 'node';
  $handler->display->display_options['sorts']['created']['field'] = 'created';
  $handler->display->display_options['sorts']['created']['order'] = 'DESC';
  /* Sort criterion: Content: Schedule (field_event_schedule) */
  $handler->display->display_options['sorts']['field_event_schedule_value']['id'] = 'field_event_schedule_value';
  $handler->display->display_options['sorts']['field_event_schedule_value']['table'] = 'field_data_field_event_schedule';
  $handler->display->display_options['sorts']['field_event_schedule_value']['field'] = 'field_event_schedule_value';
  $handler->display->display_options['sorts']['field_event_schedule_value']['order'] = 'DESC';
  /* Filter criterion: Content: Published */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = 1;
  $handler->display->display_options['filters']['status']['group'] = 1;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
  /* Filter criterion: Content: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'event_calendar' => 'event_calendar',
  );
  $handler->display->display_options['filters']['type']['group'] = 1;
  /* Filter criterion: Content: Schedule (field_event_schedule) */
  $handler->display->display_options['filters']['field_event_schedule_value']['id'] = 'field_event_schedule_value';
  $handler->display->display_options['filters']['field_event_schedule_value']['table'] = 'field_data_field_event_schedule';
  $handler->display->display_options['filters']['field_event_schedule_value']['field'] = 'field_event_schedule_value';
  $handler->display->display_options['filters']['field_event_schedule_value']['operator'] = '<=';
  $handler->display->display_options['filters']['field_event_schedule_value']['group'] = 1;
  $handler->display->display_options['filters']['field_event_schedule_value']['default_date'] = 'now';
  /* Filter criterion: Content: To (field_event_end_schedule) */
  $handler->display->display_options['filters']['field_event_end_schedule_value']['id'] = 'field_event_end_schedule_value';
  $handler->display->display_options['filters']['field_event_end_schedule_value']['table'] = 'field_data_field_event_end_schedule';
  $handler->display->display_options['filters']['field_event_end_schedule_value']['field'] = 'field_event_end_schedule_value';
  $handler->display->display_options['filters']['field_event_end_schedule_value']['operator'] = '>=';
  $handler->display->display_options['filters']['field_event_end_schedule_value']['group'] = 1;
  $handler->display->display_options['filters']['field_event_end_schedule_value']['default_date'] = 'now';

  /* Display: Event Calendar */
  $handler = $view->new_display('block', 'Event Calendar', 'block');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['title'] = 'Event Calendar';
  $handler->display->display_options['defaults']['use_more'] = FALSE;
  $handler->display->display_options['use_more'] = TRUE;
  $handler->display->display_options['defaults']['pager'] = FALSE;
  $handler->display->display_options['pager']['type'] = 'some';
  $handler->display->display_options['pager']['options']['items_per_page'] = '3';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['defaults']['footer'] = FALSE;
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Content: Schedule */
  $handler->display->display_options['fields']['field_event_schedule']['id'] = 'field_event_schedule';
  $handler->display->display_options['fields']['field_event_schedule']['table'] = 'field_data_field_event_schedule';
  $handler->display->display_options['fields']['field_event_schedule']['field'] = 'field_event_schedule';
  $handler->display->display_options['fields']['field_event_schedule']['label'] = '';
  $handler->display->display_options['fields']['field_event_schedule']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_event_schedule']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['field_event_schedule']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['field_event_schedule']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['field_event_schedule']['alter']['external'] = 0;
  $handler->display->display_options['fields']['field_event_schedule']['alter']['replace_spaces'] = 0;
  $handler->display->display_options['fields']['field_event_schedule']['alter']['trim_whitespace'] = 0;
  $handler->display->display_options['fields']['field_event_schedule']['alter']['nl2br'] = 0;
  $handler->display->display_options['fields']['field_event_schedule']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['field_event_schedule']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['field_event_schedule']['alter']['more_link'] = 0;
  $handler->display->display_options['fields']['field_event_schedule']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['field_event_schedule']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['field_event_schedule']['alter']['html'] = 0;
  $handler->display->display_options['fields']['field_event_schedule']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_event_schedule']['element_default_classes'] = 1;
  $handler->display->display_options['fields']['field_event_schedule']['hide_empty'] = 0;
  $handler->display->display_options['fields']['field_event_schedule']['empty_zero'] = 0;
  $handler->display->display_options['fields']['field_event_schedule']['hide_alter_empty'] = 1;
  $handler->display->display_options['fields']['field_event_schedule']['settings'] = array(
    'format_type' => 'short_boxed',
    'fromto' => 'both',
    'multiple_number' => '',
    'multiple_from' => '',
    'multiple_to' => '',
  );
  $handler->display->display_options['fields']['field_event_schedule']['field_api_classes'] = 0;
  /* Field: Content: Schedule */
  $handler->display->display_options['fields']['field_event_schedule_1']['id'] = 'field_event_schedule_1';
  $handler->display->display_options['fields']['field_event_schedule_1']['table'] = 'field_data_field_event_schedule';
  $handler->display->display_options['fields']['field_event_schedule_1']['field'] = 'field_event_schedule';
  $handler->display->display_options['fields']['field_event_schedule_1']['label'] = '';
  $handler->display->display_options['fields']['field_event_schedule_1']['alter']['alter_text'] = 1;
  $handler->display->display_options['fields']['field_event_schedule_1']['alter']['text'] = '<p class="month">[field_event_schedule]</p>
<p class="date">[field_event_schedule_1]</p>';
  $handler->display->display_options['fields']['field_event_schedule_1']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['field_event_schedule_1']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['field_event_schedule_1']['alter']['external'] = 0;
  $handler->display->display_options['fields']['field_event_schedule_1']['alter']['replace_spaces'] = 0;
  $handler->display->display_options['fields']['field_event_schedule_1']['alter']['trim_whitespace'] = 0;
  $handler->display->display_options['fields']['field_event_schedule_1']['alter']['nl2br'] = 0;
  $handler->display->display_options['fields']['field_event_schedule_1']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['field_event_schedule_1']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['field_event_schedule_1']['alter']['more_link'] = 0;
  $handler->display->display_options['fields']['field_event_schedule_1']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['field_event_schedule_1']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['field_event_schedule_1']['alter']['html'] = 0;
  $handler->display->display_options['fields']['field_event_schedule_1']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_event_schedule_1']['element_default_classes'] = 1;
  $handler->display->display_options['fields']['field_event_schedule_1']['hide_empty'] = 0;
  $handler->display->display_options['fields']['field_event_schedule_1']['empty_zero'] = 0;
  $handler->display->display_options['fields']['field_event_schedule_1']['hide_alter_empty'] = 1;
  $handler->display->display_options['fields']['field_event_schedule_1']['settings'] = array(
    'format_type' => 'short_boxed_day',
    'fromto' => 'both',
    'multiple_number' => '',
    'multiple_from' => '',
    'multiple_to' => '',
  );
  $handler->display->display_options['fields']['field_event_schedule_1']['field_api_classes'] = 0;
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['title']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['title']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = 0;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = 0;
  $handler->display->display_options['fields']['title']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['title']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['title']['alter']['html'] = 0;
  $handler->display->display_options['fields']['title']['hide_empty'] = 0;
  $handler->display->display_options['fields']['title']['empty_zero'] = 0;
  $handler->display->display_options['fields']['title']['link_to_node'] = 1;
  $handler->display->display_options['defaults']['sorts'] = FALSE;
  /* Sort criterion: Content: Schedule (field_event_schedule) */
  $handler->display->display_options['sorts']['field_event_schedule_value']['id'] = 'field_event_schedule_value';
  $handler->display->display_options['sorts']['field_event_schedule_value']['table'] = 'field_data_field_event_schedule';
  $handler->display->display_options['sorts']['field_event_schedule_value']['field'] = 'field_event_schedule_value';
  $handler->display->display_options['sorts']['field_event_schedule_value']['order'] = 'DESC';
  $handler->display->display_options['block_description'] = 'Views: Event Calendar';

  /* Display: Upcoming Events */
  $handler = $view->new_display('block', 'Upcoming Events', 'block_1');
  $handler->display->display_options['defaults']['pager'] = FALSE;
  $handler->display->display_options['pager']['type'] = 'some';
  $handler->display->display_options['pager']['options']['items_per_page'] = '5';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Content: Schedule */
  $handler->display->display_options['fields']['field_event_schedule']['id'] = 'field_event_schedule';
  $handler->display->display_options['fields']['field_event_schedule']['table'] = 'field_data_field_event_schedule';
  $handler->display->display_options['fields']['field_event_schedule']['field'] = 'field_event_schedule';
  $handler->display->display_options['fields']['field_event_schedule']['label'] = '';
  $handler->display->display_options['fields']['field_event_schedule']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_event_schedule']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['field_event_schedule']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['field_event_schedule']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['field_event_schedule']['alter']['external'] = 0;
  $handler->display->display_options['fields']['field_event_schedule']['alter']['replace_spaces'] = 0;
  $handler->display->display_options['fields']['field_event_schedule']['alter']['trim_whitespace'] = 0;
  $handler->display->display_options['fields']['field_event_schedule']['alter']['nl2br'] = 0;
  $handler->display->display_options['fields']['field_event_schedule']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['field_event_schedule']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['field_event_schedule']['alter']['more_link'] = 0;
  $handler->display->display_options['fields']['field_event_schedule']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['field_event_schedule']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['field_event_schedule']['alter']['html'] = 0;
  $handler->display->display_options['fields']['field_event_schedule']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_event_schedule']['element_default_classes'] = 1;
  $handler->display->display_options['fields']['field_event_schedule']['hide_empty'] = 0;
  $handler->display->display_options['fields']['field_event_schedule']['empty_zero'] = 0;
  $handler->display->display_options['fields']['field_event_schedule']['hide_alter_empty'] = 1;
  $handler->display->display_options['fields']['field_event_schedule']['settings'] = array(
    'format_type' => 'short_boxed',
    'fromto' => 'both',
    'multiple_number' => '',
    'multiple_from' => '',
    'multiple_to' => '',
  );
  $handler->display->display_options['fields']['field_event_schedule']['field_api_classes'] = 0;
  /* Field: Content: Schedule */
  $handler->display->display_options['fields']['field_event_schedule_1']['id'] = 'field_event_schedule_1';
  $handler->display->display_options['fields']['field_event_schedule_1']['table'] = 'field_data_field_event_schedule';
  $handler->display->display_options['fields']['field_event_schedule_1']['field'] = 'field_event_schedule';
  $handler->display->display_options['fields']['field_event_schedule_1']['label'] = '';
  $handler->display->display_options['fields']['field_event_schedule_1']['alter']['alter_text'] = 1;
  $handler->display->display_options['fields']['field_event_schedule_1']['alter']['text'] = '<p class="month">[field_event_schedule]</p>
<p class="date">[field_event_schedule_1]</p>';
  $handler->display->display_options['fields']['field_event_schedule_1']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['field_event_schedule_1']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['field_event_schedule_1']['alter']['external'] = 0;
  $handler->display->display_options['fields']['field_event_schedule_1']['alter']['replace_spaces'] = 0;
  $handler->display->display_options['fields']['field_event_schedule_1']['alter']['trim_whitespace'] = 0;
  $handler->display->display_options['fields']['field_event_schedule_1']['alter']['nl2br'] = 0;
  $handler->display->display_options['fields']['field_event_schedule_1']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['field_event_schedule_1']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['field_event_schedule_1']['alter']['more_link'] = 0;
  $handler->display->display_options['fields']['field_event_schedule_1']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['field_event_schedule_1']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['field_event_schedule_1']['alter']['html'] = 0;
  $handler->display->display_options['fields']['field_event_schedule_1']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_event_schedule_1']['element_default_classes'] = 1;
  $handler->display->display_options['fields']['field_event_schedule_1']['hide_empty'] = 0;
  $handler->display->display_options['fields']['field_event_schedule_1']['empty_zero'] = 0;
  $handler->display->display_options['fields']['field_event_schedule_1']['hide_alter_empty'] = 1;
  $handler->display->display_options['fields']['field_event_schedule_1']['settings'] = array(
    'format_type' => 'short_boxed_day',
    'fromto' => 'both',
    'multiple_number' => '',
    'multiple_from' => '',
    'multiple_to' => '',
  );
  $handler->display->display_options['fields']['field_event_schedule_1']['field_api_classes'] = 0;
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['title']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['title']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = 0;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = 0;
  $handler->display->display_options['fields']['title']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['title']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['title']['alter']['html'] = 0;
  $handler->display->display_options['fields']['title']['hide_empty'] = 0;
  $handler->display->display_options['fields']['title']['empty_zero'] = 0;
  $handler->display->display_options['fields']['title']['link_to_node'] = 1;
  /* Field: Content: Body */
  $handler->display->display_options['fields']['body']['id'] = 'body';
  $handler->display->display_options['fields']['body']['table'] = 'field_data_body';
  $handler->display->display_options['fields']['body']['field'] = 'body';
  $handler->display->display_options['fields']['body']['label'] = '';
  $handler->display->display_options['fields']['body']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['body']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['body']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['body']['alter']['external'] = 0;
  $handler->display->display_options['fields']['body']['alter']['replace_spaces'] = 0;
  $handler->display->display_options['fields']['body']['alter']['trim_whitespace'] = 0;
  $handler->display->display_options['fields']['body']['alter']['nl2br'] = 0;
  $handler->display->display_options['fields']['body']['alter']['max_length'] = '100';
  $handler->display->display_options['fields']['body']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['body']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['body']['alter']['more_link'] = 0;
  $handler->display->display_options['fields']['body']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['body']['alter']['trim'] = 1;
  $handler->display->display_options['fields']['body']['alter']['html'] = 0;
  $handler->display->display_options['fields']['body']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['body']['element_default_classes'] = 1;
  $handler->display->display_options['fields']['body']['hide_empty'] = 0;
  $handler->display->display_options['fields']['body']['empty_zero'] = 0;
  $handler->display->display_options['fields']['body']['hide_alter_empty'] = 1;
  $handler->display->display_options['fields']['body']['field_api_classes'] = 0;
  $handler->display->display_options['defaults']['sorts'] = FALSE;
  /* Sort criterion: Content: Schedule (field_event_schedule) */
  $handler->display->display_options['sorts']['field_event_schedule_value']['id'] = 'field_event_schedule_value';
  $handler->display->display_options['sorts']['field_event_schedule_value']['table'] = 'field_data_field_event_schedule';
  $handler->display->display_options['sorts']['field_event_schedule_value']['field'] = 'field_event_schedule_value';
  $handler->display->display_options['sorts']['field_event_schedule_value']['order'] = 'DESC';
  $handler->display->display_options['block_description'] = 'Views: Upcoming Events';

  /* Display: Event Calendar Page */
  $handler = $view->new_display('page', 'Event Calendar Page', 'page_1');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['title'] = 'Event Calendar';
  $handler->display->display_options['defaults']['pager'] = FALSE;
  $handler->display->display_options['pager']['type'] = 'full';
  $handler->display->display_options['pager']['options']['items_per_page'] = '10';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['pager']['options']['id'] = '0';
  $handler->display->display_options['pager']['options']['expose']['items_per_page_options_all'] = 0;
  $handler->display->display_options['defaults']['footer'] = FALSE;
  $handler->display->display_options['defaults']['sorts'] = FALSE;
  /* Sort criterion: Content: Schedule (field_event_schedule) */
  $handler->display->display_options['sorts']['field_event_schedule_value']['id'] = 'field_event_schedule_value';
  $handler->display->display_options['sorts']['field_event_schedule_value']['table'] = 'field_data_field_event_schedule';
  $handler->display->display_options['sorts']['field_event_schedule_value']['field'] = 'field_event_schedule_value';
  $handler->display->display_options['sorts']['field_event_schedule_value']['order'] = 'DESC';
  $handler->display->display_options['defaults']['filters'] = FALSE;
  /* Filter criterion: Content: Published */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = 1;
  $handler->display->display_options['filters']['status']['group'] = 1;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
  /* Filter criterion: Content: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'event_calendar' => 'event_calendar',
  );
  $handler->display->display_options['filters']['type']['group'] = 1;
  $handler->display->display_options['path'] = 'events';
  $export['featured_events'] = $view;

  return $export;
}
