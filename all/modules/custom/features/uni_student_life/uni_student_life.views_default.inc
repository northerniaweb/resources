<?php
/**
 * @file
 * uni_student_life.views_default.inc
 */

/**
 * Implements hook_views_default_views().
 */
function uni_student_life_views_default_views() {
  $export = array();

  $view = new view;
  $view->name = 'student_life';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'node';
  $view->human_name = 'Boxes';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['title'] = '<none>';
  $handler->display->display_options['access']['type'] = 'perm';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['query']['options']['query_comment'] = FALSE;
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['pager']['type'] = 'none';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['style_plugin'] = 'default';
  $handler->display->display_options['row_plugin'] = 'fields';
  /* Field: Content: Image */
  $handler->display->display_options['fields']['field_student_life_image']['id'] = 'field_student_life_image';
  $handler->display->display_options['fields']['field_student_life_image']['table'] = 'field_data_field_student_life_image';
  $handler->display->display_options['fields']['field_student_life_image']['field'] = 'field_student_life_image';
  $handler->display->display_options['fields']['field_student_life_image']['label'] = '';
  $handler->display->display_options['fields']['field_student_life_image']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['field_student_life_image']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['field_student_life_image']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['field_student_life_image']['alter']['external'] = 0;
  $handler->display->display_options['fields']['field_student_life_image']['alter']['replace_spaces'] = 0;
  $handler->display->display_options['fields']['field_student_life_image']['alter']['trim_whitespace'] = 0;
  $handler->display->display_options['fields']['field_student_life_image']['alter']['nl2br'] = 0;
  $handler->display->display_options['fields']['field_student_life_image']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['field_student_life_image']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['field_student_life_image']['alter']['more_link'] = 0;
  $handler->display->display_options['fields']['field_student_life_image']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['field_student_life_image']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['field_student_life_image']['alter']['html'] = 0;
  $handler->display->display_options['fields']['field_student_life_image']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_student_life_image']['element_default_classes'] = 1;
  $handler->display->display_options['fields']['field_student_life_image']['hide_empty'] = 0;
  $handler->display->display_options['fields']['field_student_life_image']['empty_zero'] = 0;
  $handler->display->display_options['fields']['field_student_life_image']['hide_alter_empty'] = 1;
  $handler->display->display_options['fields']['field_student_life_image']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_student_life_image']['settings'] = array(
    'image_style' => 'student_life',
    'image_link' => '',
  );
  $handler->display->display_options['fields']['field_student_life_image']['field_api_classes'] = 0;
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['title']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['title']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['title']['alter']['external'] = 0;
  $handler->display->display_options['fields']['title']['alter']['replace_spaces'] = 0;
  $handler->display->display_options['fields']['title']['alter']['trim_whitespace'] = 0;
  $handler->display->display_options['fields']['title']['alter']['nl2br'] = 0;
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = 0;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = 0;
  $handler->display->display_options['fields']['title']['alter']['more_link'] = 0;
  $handler->display->display_options['fields']['title']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['title']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['title']['alter']['html'] = 0;
  $handler->display->display_options['fields']['title']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['title']['element_default_classes'] = 1;
  $handler->display->display_options['fields']['title']['hide_empty'] = 0;
  $handler->display->display_options['fields']['title']['empty_zero'] = 0;
  $handler->display->display_options['fields']['title']['hide_alter_empty'] = 1;
  $handler->display->display_options['fields']['title']['link_to_node'] = 0;
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
  $handler->display->display_options['fields']['body']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['body']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['body']['alter']['more_link'] = 0;
  $handler->display->display_options['fields']['body']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['body']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['body']['alter']['html'] = 0;
  $handler->display->display_options['fields']['body']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['body']['element_default_classes'] = 1;
  $handler->display->display_options['fields']['body']['hide_empty'] = 0;
  $handler->display->display_options['fields']['body']['empty_zero'] = 0;
  $handler->display->display_options['fields']['body']['hide_alter_empty'] = 1;
  $handler->display->display_options['fields']['body']['field_api_classes'] = 0;
  /* Field: Content: Links */
  $handler->display->display_options['fields']['field_student_life_questions']['id'] = 'field_student_life_questions';
  $handler->display->display_options['fields']['field_student_life_questions']['table'] = 'field_data_field_student_life_questions';
  $handler->display->display_options['fields']['field_student_life_questions']['field'] = 'field_student_life_questions';
  $handler->display->display_options['fields']['field_student_life_questions']['label'] = '';
  $handler->display->display_options['fields']['field_student_life_questions']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['field_student_life_questions']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['field_student_life_questions']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['field_student_life_questions']['alter']['external'] = 0;
  $handler->display->display_options['fields']['field_student_life_questions']['alter']['replace_spaces'] = 0;
  $handler->display->display_options['fields']['field_student_life_questions']['alter']['trim_whitespace'] = 0;
  $handler->display->display_options['fields']['field_student_life_questions']['alter']['nl2br'] = 0;
  $handler->display->display_options['fields']['field_student_life_questions']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['field_student_life_questions']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['field_student_life_questions']['alter']['more_link'] = 0;
  $handler->display->display_options['fields']['field_student_life_questions']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['field_student_life_questions']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['field_student_life_questions']['alter']['html'] = 0;
  $handler->display->display_options['fields']['field_student_life_questions']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_student_life_questions']['element_default_classes'] = 1;
  $handler->display->display_options['fields']['field_student_life_questions']['hide_empty'] = 0;
  $handler->display->display_options['fields']['field_student_life_questions']['empty_zero'] = 0;
  $handler->display->display_options['fields']['field_student_life_questions']['hide_alter_empty'] = 1;
  $handler->display->display_options['fields']['field_student_life_questions']['click_sort_column'] = 'url';
  $handler->display->display_options['fields']['field_student_life_questions']['group_rows'] = 1;
  $handler->display->display_options['fields']['field_student_life_questions']['delta_offset'] = '0';
  $handler->display->display_options['fields']['field_student_life_questions']['delta_reversed'] = 0;
  $handler->display->display_options['fields']['field_student_life_questions']['delta_first_last'] = 0;
  $handler->display->display_options['fields']['field_student_life_questions']['multi_type'] = 'ul';
  $handler->display->display_options['fields']['field_student_life_questions']['field_api_classes'] = 0;
  /* Sort criterion: Content: Order (field_boxes_order) */
  $handler->display->display_options['sorts']['field_boxes_order_value']['id'] = 'field_boxes_order_value';
  $handler->display->display_options['sorts']['field_boxes_order_value']['table'] = 'field_data_field_boxes_order';
  $handler->display->display_options['sorts']['field_boxes_order_value']['field'] = 'field_boxes_order_value';
  /* Contextual filter: Content: Sections (field_student_life_sections) */
  $handler->display->display_options['arguments']['field_student_life_sections_tid']['id'] = 'field_student_life_sections_tid';
  $handler->display->display_options['arguments']['field_student_life_sections_tid']['table'] = 'field_data_field_student_life_sections';
  $handler->display->display_options['arguments']['field_student_life_sections_tid']['field'] = 'field_student_life_sections_tid';
  $handler->display->display_options['arguments']['field_student_life_sections_tid']['default_action'] = 'default';
  $handler->display->display_options['arguments']['field_student_life_sections_tid']['default_argument_type'] = 'taxonomy_tid';
  $handler->display->display_options['arguments']['field_student_life_sections_tid']['default_argument_options']['term_page'] = 0;
  $handler->display->display_options['arguments']['field_student_life_sections_tid']['default_argument_options']['node'] = 1;
  $handler->display->display_options['arguments']['field_student_life_sections_tid']['default_argument_options']['limit'] = 1;
  $handler->display->display_options['arguments']['field_student_life_sections_tid']['default_argument_options']['vocabularies'] = array(
    'feature_callout_section' => 'feature_callout_section',
  );
  $handler->display->display_options['arguments']['field_student_life_sections_tid']['default_argument_skip_url'] = 0;
  $handler->display->display_options['arguments']['field_student_life_sections_tid']['summary']['number_of_records'] = '0';
  $handler->display->display_options['arguments']['field_student_life_sections_tid']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['field_student_life_sections_tid']['summary_options']['items_per_page'] = '25';
  $handler->display->display_options['arguments']['field_student_life_sections_tid']['break_phrase'] = 0;
  $handler->display->display_options['arguments']['field_student_life_sections_tid']['not'] = 0;
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
    'boxes' => 'boxes',
  );

  /* Display: Subpage Boxes */
  $handler = $view->new_display('block', 'Subpage Boxes', 'block');
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Content: Image */
  $handler->display->display_options['fields']['field_student_life_image']['id'] = 'field_student_life_image';
  $handler->display->display_options['fields']['field_student_life_image']['table'] = 'field_data_field_student_life_image';
  $handler->display->display_options['fields']['field_student_life_image']['field'] = 'field_student_life_image';
  $handler->display->display_options['fields']['field_student_life_image']['label'] = '';
  $handler->display->display_options['fields']['field_student_life_image']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['field_student_life_image']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['field_student_life_image']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['field_student_life_image']['alter']['external'] = 0;
  $handler->display->display_options['fields']['field_student_life_image']['alter']['replace_spaces'] = 0;
  $handler->display->display_options['fields']['field_student_life_image']['alter']['trim_whitespace'] = 0;
  $handler->display->display_options['fields']['field_student_life_image']['alter']['nl2br'] = 0;
  $handler->display->display_options['fields']['field_student_life_image']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['field_student_life_image']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['field_student_life_image']['alter']['more_link'] = 0;
  $handler->display->display_options['fields']['field_student_life_image']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['field_student_life_image']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['field_student_life_image']['alter']['html'] = 0;
  $handler->display->display_options['fields']['field_student_life_image']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_student_life_image']['element_default_classes'] = 1;
  $handler->display->display_options['fields']['field_student_life_image']['hide_empty'] = 0;
  $handler->display->display_options['fields']['field_student_life_image']['empty_zero'] = 0;
  $handler->display->display_options['fields']['field_student_life_image']['hide_alter_empty'] = 1;
  $handler->display->display_options['fields']['field_student_life_image']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_student_life_image']['settings'] = array(
    'image_style' => 'multi-block__mobile',
    'image_link' => '',
  );
  $handler->display->display_options['fields']['field_student_life_image']['field_api_classes'] = 0;
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['title']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['title']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['title']['alter']['external'] = 0;
  $handler->display->display_options['fields']['title']['alter']['replace_spaces'] = 0;
  $handler->display->display_options['fields']['title']['alter']['trim_whitespace'] = 0;
  $handler->display->display_options['fields']['title']['alter']['nl2br'] = 0;
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = 0;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = 0;
  $handler->display->display_options['fields']['title']['alter']['more_link'] = 0;
  $handler->display->display_options['fields']['title']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['title']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['title']['alter']['html'] = 0;
  $handler->display->display_options['fields']['title']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['title']['element_default_classes'] = 1;
  $handler->display->display_options['fields']['title']['hide_empty'] = 0;
  $handler->display->display_options['fields']['title']['empty_zero'] = 0;
  $handler->display->display_options['fields']['title']['hide_alter_empty'] = 1;
  $handler->display->display_options['fields']['title']['link_to_node'] = 0;
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
  $handler->display->display_options['fields']['body']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['body']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['body']['alter']['more_link'] = 0;
  $handler->display->display_options['fields']['body']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['body']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['body']['alter']['html'] = 0;
  $handler->display->display_options['fields']['body']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['body']['element_default_classes'] = 1;
  $handler->display->display_options['fields']['body']['hide_empty'] = 0;
  $handler->display->display_options['fields']['body']['empty_zero'] = 0;
  $handler->display->display_options['fields']['body']['hide_alter_empty'] = 1;
  $handler->display->display_options['fields']['body']['field_api_classes'] = 0;
  /* Field: Content: Links */
  $handler->display->display_options['fields']['field_student_life_questions']['id'] = 'field_student_life_questions';
  $handler->display->display_options['fields']['field_student_life_questions']['table'] = 'field_data_field_student_life_questions';
  $handler->display->display_options['fields']['field_student_life_questions']['field'] = 'field_student_life_questions';
  $handler->display->display_options['fields']['field_student_life_questions']['label'] = '';
  $handler->display->display_options['fields']['field_student_life_questions']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['field_student_life_questions']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['field_student_life_questions']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['field_student_life_questions']['alter']['external'] = 0;
  $handler->display->display_options['fields']['field_student_life_questions']['alter']['replace_spaces'] = 0;
  $handler->display->display_options['fields']['field_student_life_questions']['alter']['trim_whitespace'] = 0;
  $handler->display->display_options['fields']['field_student_life_questions']['alter']['nl2br'] = 0;
  $handler->display->display_options['fields']['field_student_life_questions']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['field_student_life_questions']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['field_student_life_questions']['alter']['more_link'] = 0;
  $handler->display->display_options['fields']['field_student_life_questions']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['field_student_life_questions']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['field_student_life_questions']['alter']['html'] = 0;
  $handler->display->display_options['fields']['field_student_life_questions']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_student_life_questions']['element_default_classes'] = 1;
  $handler->display->display_options['fields']['field_student_life_questions']['hide_empty'] = 0;
  $handler->display->display_options['fields']['field_student_life_questions']['empty_zero'] = 0;
  $handler->display->display_options['fields']['field_student_life_questions']['hide_alter_empty'] = 1;
  $handler->display->display_options['fields']['field_student_life_questions']['click_sort_column'] = 'url';
  $handler->display->display_options['fields']['field_student_life_questions']['group_rows'] = 1;
  $handler->display->display_options['fields']['field_student_life_questions']['delta_offset'] = '0';
  $handler->display->display_options['fields']['field_student_life_questions']['delta_reversed'] = 0;
  $handler->display->display_options['fields']['field_student_life_questions']['delta_first_last'] = 0;
  $handler->display->display_options['fields']['field_student_life_questions']['multi_type'] = 'ul';
  $handler->display->display_options['fields']['field_student_life_questions']['field_api_classes'] = 0;
  $handler->display->display_options['block_description'] = 'Views: Subpage Boxes';

  /* Display: Inside UNI Boxes */
  $handler = $view->new_display('block', 'Inside UNI Boxes', 'block_1');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['title'] = '<none>';
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Content: Image */
  $handler->display->display_options['fields']['field_student_life_image']['id'] = 'field_student_life_image';
  $handler->display->display_options['fields']['field_student_life_image']['table'] = 'field_data_field_student_life_image';
  $handler->display->display_options['fields']['field_student_life_image']['field'] = 'field_student_life_image';
  $handler->display->display_options['fields']['field_student_life_image']['label'] = '';
  $handler->display->display_options['fields']['field_student_life_image']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['field_student_life_image']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['field_student_life_image']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['field_student_life_image']['alter']['external'] = 0;
  $handler->display->display_options['fields']['field_student_life_image']['alter']['replace_spaces'] = 0;
  $handler->display->display_options['fields']['field_student_life_image']['alter']['trim_whitespace'] = 0;
  $handler->display->display_options['fields']['field_student_life_image']['alter']['nl2br'] = 0;
  $handler->display->display_options['fields']['field_student_life_image']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['field_student_life_image']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['field_student_life_image']['alter']['more_link'] = 0;
  $handler->display->display_options['fields']['field_student_life_image']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['field_student_life_image']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['field_student_life_image']['alter']['html'] = 0;
  $handler->display->display_options['fields']['field_student_life_image']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_student_life_image']['element_default_classes'] = 1;
  $handler->display->display_options['fields']['field_student_life_image']['hide_empty'] = 0;
  $handler->display->display_options['fields']['field_student_life_image']['empty_zero'] = 0;
  $handler->display->display_options['fields']['field_student_life_image']['hide_alter_empty'] = 1;
  $handler->display->display_options['fields']['field_student_life_image']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_student_life_image']['settings'] = array(
    'image_style' => 'offgrid__mobile',
    'image_link' => '',
  );
  $handler->display->display_options['fields']['field_student_life_image']['field_api_classes'] = 0;
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['title']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['title']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['title']['alter']['external'] = 0;
  $handler->display->display_options['fields']['title']['alter']['replace_spaces'] = 0;
  $handler->display->display_options['fields']['title']['alter']['trim_whitespace'] = 0;
  $handler->display->display_options['fields']['title']['alter']['nl2br'] = 0;
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = 0;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = 0;
  $handler->display->display_options['fields']['title']['alter']['more_link'] = 0;
  $handler->display->display_options['fields']['title']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['title']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['title']['alter']['html'] = 0;
  $handler->display->display_options['fields']['title']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['title']['element_default_classes'] = 1;
  $handler->display->display_options['fields']['title']['hide_empty'] = 0;
  $handler->display->display_options['fields']['title']['empty_zero'] = 0;
  $handler->display->display_options['fields']['title']['hide_alter_empty'] = 1;
  $handler->display->display_options['fields']['title']['link_to_node'] = 0;
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
  $handler->display->display_options['fields']['body']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['body']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['body']['alter']['more_link'] = 0;
  $handler->display->display_options['fields']['body']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['body']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['body']['alter']['html'] = 0;
  $handler->display->display_options['fields']['body']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['body']['element_default_classes'] = 1;
  $handler->display->display_options['fields']['body']['hide_empty'] = 0;
  $handler->display->display_options['fields']['body']['empty_zero'] = 0;
  $handler->display->display_options['fields']['body']['hide_alter_empty'] = 1;
  $handler->display->display_options['fields']['body']['field_api_classes'] = 0;
  /* Field: Content: Links */
  $handler->display->display_options['fields']['field_student_life_questions']['id'] = 'field_student_life_questions';
  $handler->display->display_options['fields']['field_student_life_questions']['table'] = 'field_data_field_student_life_questions';
  $handler->display->display_options['fields']['field_student_life_questions']['field'] = 'field_student_life_questions';
  $handler->display->display_options['fields']['field_student_life_questions']['label'] = '';
  $handler->display->display_options['fields']['field_student_life_questions']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['field_student_life_questions']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['field_student_life_questions']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['field_student_life_questions']['alter']['external'] = 0;
  $handler->display->display_options['fields']['field_student_life_questions']['alter']['replace_spaces'] = 0;
  $handler->display->display_options['fields']['field_student_life_questions']['alter']['trim_whitespace'] = 0;
  $handler->display->display_options['fields']['field_student_life_questions']['alter']['nl2br'] = 0;
  $handler->display->display_options['fields']['field_student_life_questions']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['field_student_life_questions']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['field_student_life_questions']['alter']['more_link'] = 0;
  $handler->display->display_options['fields']['field_student_life_questions']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['field_student_life_questions']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['field_student_life_questions']['alter']['html'] = 0;
  $handler->display->display_options['fields']['field_student_life_questions']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_student_life_questions']['element_default_classes'] = 1;
  $handler->display->display_options['fields']['field_student_life_questions']['hide_empty'] = 0;
  $handler->display->display_options['fields']['field_student_life_questions']['empty_zero'] = 0;
  $handler->display->display_options['fields']['field_student_life_questions']['hide_alter_empty'] = 1;
  $handler->display->display_options['fields']['field_student_life_questions']['click_sort_column'] = 'url';
  $handler->display->display_options['fields']['field_student_life_questions']['group_rows'] = 1;
  $handler->display->display_options['fields']['field_student_life_questions']['delta_offset'] = '0';
  $handler->display->display_options['fields']['field_student_life_questions']['delta_reversed'] = 0;
  $handler->display->display_options['fields']['field_student_life_questions']['delta_first_last'] = 0;
  $handler->display->display_options['fields']['field_student_life_questions']['multi_type'] = 'ul';
  $handler->display->display_options['fields']['field_student_life_questions']['field_api_classes'] = 0;
  $handler->display->display_options['block_description'] = 'Views: Inside UNI Boxes';
  $export['student_life'] = $view;

  return $export;
}
