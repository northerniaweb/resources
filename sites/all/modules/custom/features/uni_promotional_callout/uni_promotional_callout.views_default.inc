<?php
/**
 * @file
 * uni_promotional_callout.views_default.inc
 */

/**
 * Implements hook_views_default_views().
 */
function uni_promotional_callout_views_default_views() {
  $export = array();

  $view = new view;
  $view->name = 'promotional_callout';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'node';
  $view->human_name = 'Promotional Callout';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['title'] = 'Promotional Callout';
  $handler->display->display_options['access']['type'] = 'perm';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['query']['options']['query_comment'] = FALSE;
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['pager']['type'] = 'some';
  $handler->display->display_options['pager']['options']['items_per_page'] = '1';
  $handler->display->display_options['style_plugin'] = 'default';
  $handler->display->display_options['row_plugin'] = 'fields';
  /* Field: Content: Image */
  $handler->display->display_options['fields']['field_promotional_callout_image']['id'] = 'field_promotional_callout_image';
  $handler->display->display_options['fields']['field_promotional_callout_image']['table'] = 'field_data_field_promotional_callout_image';
  $handler->display->display_options['fields']['field_promotional_callout_image']['field'] = 'field_promotional_callout_image';
  $handler->display->display_options['fields']['field_promotional_callout_image']['label'] = '';
  $handler->display->display_options['fields']['field_promotional_callout_image']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['field_promotional_callout_image']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['field_promotional_callout_image']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['field_promotional_callout_image']['alter']['external'] = 0;
  $handler->display->display_options['fields']['field_promotional_callout_image']['alter']['replace_spaces'] = 0;
  $handler->display->display_options['fields']['field_promotional_callout_image']['alter']['trim_whitespace'] = 0;
  $handler->display->display_options['fields']['field_promotional_callout_image']['alter']['nl2br'] = 0;
  $handler->display->display_options['fields']['field_promotional_callout_image']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['field_promotional_callout_image']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['field_promotional_callout_image']['alter']['more_link'] = 0;
  $handler->display->display_options['fields']['field_promotional_callout_image']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['field_promotional_callout_image']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['field_promotional_callout_image']['alter']['html'] = 0;
  $handler->display->display_options['fields']['field_promotional_callout_image']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_promotional_callout_image']['element_default_classes'] = 1;
  $handler->display->display_options['fields']['field_promotional_callout_image']['hide_empty'] = 0;
  $handler->display->display_options['fields']['field_promotional_callout_image']['empty_zero'] = 0;
  $handler->display->display_options['fields']['field_promotional_callout_image']['hide_alter_empty'] = 1;
  $handler->display->display_options['fields']['field_promotional_callout_image']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_promotional_callout_image']['settings'] = array(
    'image_style' => 'side__mobile',
    'image_link' => '',
  );
  $handler->display->display_options['fields']['field_promotional_callout_image']['field_api_classes'] = 0;
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
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = 1;
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
  $handler->display->display_options['fields']['body']['alter']['max_length'] = '150';
  $handler->display->display_options['fields']['body']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['body']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['body']['alter']['more_link'] = 0;
  $handler->display->display_options['fields']['body']['alter']['strip_tags'] = 1;
  $handler->display->display_options['fields']['body']['alter']['trim'] = 1;
  $handler->display->display_options['fields']['body']['alter']['html'] = 0;
  $handler->display->display_options['fields']['body']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['body']['element_default_classes'] = 1;
  $handler->display->display_options['fields']['body']['hide_empty'] = 0;
  $handler->display->display_options['fields']['body']['empty_zero'] = 0;
  $handler->display->display_options['fields']['body']['hide_alter_empty'] = 1;
  $handler->display->display_options['fields']['body']['field_api_classes'] = 0;
  /* Field: Content: Link */
  $handler->display->display_options['fields']['field_promotional_callout_link']['id'] = 'field_promotional_callout_link';
  $handler->display->display_options['fields']['field_promotional_callout_link']['table'] = 'field_data_field_promotional_callout_link';
  $handler->display->display_options['fields']['field_promotional_callout_link']['field'] = 'field_promotional_callout_link';
  $handler->display->display_options['fields']['field_promotional_callout_link']['label'] = '';
  $handler->display->display_options['fields']['field_promotional_callout_link']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['field_promotional_callout_link']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['field_promotional_callout_link']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['field_promotional_callout_link']['alter']['external'] = 0;
  $handler->display->display_options['fields']['field_promotional_callout_link']['alter']['replace_spaces'] = 0;
  $handler->display->display_options['fields']['field_promotional_callout_link']['alter']['trim_whitespace'] = 0;
  $handler->display->display_options['fields']['field_promotional_callout_link']['alter']['nl2br'] = 0;
  $handler->display->display_options['fields']['field_promotional_callout_link']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['field_promotional_callout_link']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['field_promotional_callout_link']['alter']['more_link'] = 0;
  $handler->display->display_options['fields']['field_promotional_callout_link']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['field_promotional_callout_link']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['field_promotional_callout_link']['alter']['html'] = 0;
  $handler->display->display_options['fields']['field_promotional_callout_link']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_promotional_callout_link']['element_default_classes'] = 1;
  $handler->display->display_options['fields']['field_promotional_callout_link']['hide_empty'] = 0;
  $handler->display->display_options['fields']['field_promotional_callout_link']['empty_zero'] = 0;
  $handler->display->display_options['fields']['field_promotional_callout_link']['hide_alter_empty'] = 1;
  $handler->display->display_options['fields']['field_promotional_callout_link']['click_sort_column'] = 'url';
  $handler->display->display_options['fields']['field_promotional_callout_link']['field_api_classes'] = 0;
  /* Sort criterion: Content: Post date */
  $handler->display->display_options['sorts']['created']['id'] = 'created';
  $handler->display->display_options['sorts']['created']['table'] = 'node';
  $handler->display->display_options['sorts']['created']['field'] = 'created';
  $handler->display->display_options['sorts']['created']['order'] = 'DESC';
  /* Contextual filter: Content: Section (field_promo_callout_section) */
  $handler->display->display_options['arguments']['field_promo_callout_section_tid']['id'] = 'field_promo_callout_section_tid';
  $handler->display->display_options['arguments']['field_promo_callout_section_tid']['table'] = 'field_data_field_promo_callout_section';
  $handler->display->display_options['arguments']['field_promo_callout_section_tid']['field'] = 'field_promo_callout_section_tid';
  $handler->display->display_options['arguments']['field_promo_callout_section_tid']['default_action'] = 'default';
  $handler->display->display_options['arguments']['field_promo_callout_section_tid']['default_argument_type'] = 'taxonomy_tid';
  $handler->display->display_options['arguments']['field_promo_callout_section_tid']['default_argument_options']['term_page'] = 0;
  $handler->display->display_options['arguments']['field_promo_callout_section_tid']['default_argument_options']['node'] = 1;
  $handler->display->display_options['arguments']['field_promo_callout_section_tid']['default_argument_options']['limit'] = 1;
  $handler->display->display_options['arguments']['field_promo_callout_section_tid']['default_argument_options']['vocabularies'] = array(
    'feature_callout_section' => 'feature_callout_section',
  );
  $handler->display->display_options['arguments']['field_promo_callout_section_tid']['default_argument_skip_url'] = 0;
  $handler->display->display_options['arguments']['field_promo_callout_section_tid']['summary']['number_of_records'] = '0';
  $handler->display->display_options['arguments']['field_promo_callout_section_tid']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['field_promo_callout_section_tid']['summary_options']['items_per_page'] = '25';
  $handler->display->display_options['arguments']['field_promo_callout_section_tid']['break_phrase'] = 0;
  $handler->display->display_options['arguments']['field_promo_callout_section_tid']['not'] = 0;
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
    'promotional_callout' => 'promotional_callout',
  );
  /* Filter criterion: Content: Schedule -  start date (field_promo_callout_schedule) */
  $handler->display->display_options['filters']['field_promo_callout_schedule_value']['id'] = 'field_promo_callout_schedule_value';
  $handler->display->display_options['filters']['field_promo_callout_schedule_value']['table'] = 'field_data_field_promo_callout_schedule';
  $handler->display->display_options['filters']['field_promo_callout_schedule_value']['field'] = 'field_promo_callout_schedule_value';
  $handler->display->display_options['filters']['field_promo_callout_schedule_value']['operator'] = '<=';
  $handler->display->display_options['filters']['field_promo_callout_schedule_value']['granularity'] = 'hour';
  $handler->display->display_options['filters']['field_promo_callout_schedule_value']['default_date'] = 'now';
  /* Filter criterion: Content: Schedule - end date (field_promo_callout_schedule:value2) */
  $handler->display->display_options['filters']['field_promo_callout_schedule_value2']['id'] = 'field_promo_callout_schedule_value2';
  $handler->display->display_options['filters']['field_promo_callout_schedule_value2']['table'] = 'field_data_field_promo_callout_schedule';
  $handler->display->display_options['filters']['field_promo_callout_schedule_value2']['field'] = 'field_promo_callout_schedule_value2';
  $handler->display->display_options['filters']['field_promo_callout_schedule_value2']['operator'] = '>=';
  $handler->display->display_options['filters']['field_promo_callout_schedule_value2']['default_date'] = 'now';

  /* Display: Block */
  $handler = $view->new_display('block', 'Block', 'block');
  $handler->display->display_options['block_description'] = 'Views: Promotional Callout';
  $export['promotional_callout'] = $view;

  return $export;
}
