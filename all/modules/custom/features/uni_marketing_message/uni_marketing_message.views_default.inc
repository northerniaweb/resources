<?php
/**
 * @file
 * uni_marketing_message.views_default.inc
 */

/**
 * Implements hook_views_default_views().
 */
function uni_marketing_message_views_default_views() {
  $export = array();

  $view = new view;
  $view->name = 'marketing_messages';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'node';
  $view->human_name = 'Marketing Messages';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['title'] = 'View: Featured Story on Hompage';
  $handler->display->display_options['access']['type'] = 'perm';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['query']['options']['distinct'] = TRUE;
  $handler->display->display_options['query']['options']['query_comment'] = FALSE;
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['pager']['type'] = 'some';
  $handler->display->display_options['pager']['options']['items_per_page'] = '4';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['style_plugin'] = 'default';
  $handler->display->display_options['row_plugin'] = 'fields';
  /* Relationship: Nodequeue: Queue */
  $handler->display->display_options['relationships']['nodequeue_rel']['id'] = 'nodequeue_rel';
  $handler->display->display_options['relationships']['nodequeue_rel']['table'] = 'node';
  $handler->display->display_options['relationships']['nodequeue_rel']['field'] = 'nodequeue_rel';
  $handler->display->display_options['relationships']['nodequeue_rel']['label'] = 'Marketing Message Queue';
  $handler->display->display_options['relationships']['nodequeue_rel']['required'] = 1;
  $handler->display->display_options['relationships']['nodequeue_rel']['limit'] = 1;
  $handler->display->display_options['relationships']['nodequeue_rel']['names'] = array(
    'marketing_messages' => 'marketing_messages',
    'feature_story' => 0,
    'snapshots' => 0,
    'featured_news' => 0,
    'event_calendar' => 0,
  );
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['exclude'] = TRUE;
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
  $handler->display->display_options['fields']['title']['link_to_node'] = 1;
  /* Field: Content: Marketing Link */
  $handler->display->display_options['fields']['field_marketing_link']['id'] = 'field_marketing_link';
  $handler->display->display_options['fields']['field_marketing_link']['table'] = 'field_data_field_marketing_link';
  $handler->display->display_options['fields']['field_marketing_link']['field'] = 'field_marketing_link';
  $handler->display->display_options['fields']['field_marketing_link']['label'] = '';
  $handler->display->display_options['fields']['field_marketing_link']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_marketing_link']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['field_marketing_link']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['field_marketing_link']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['field_marketing_link']['alter']['external'] = 0;
  $handler->display->display_options['fields']['field_marketing_link']['alter']['replace_spaces'] = 0;
  $handler->display->display_options['fields']['field_marketing_link']['alter']['trim_whitespace'] = 0;
  $handler->display->display_options['fields']['field_marketing_link']['alter']['nl2br'] = 0;
  $handler->display->display_options['fields']['field_marketing_link']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['field_marketing_link']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['field_marketing_link']['alter']['more_link'] = 0;
  $handler->display->display_options['fields']['field_marketing_link']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['field_marketing_link']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['field_marketing_link']['alter']['html'] = 0;
  $handler->display->display_options['fields']['field_marketing_link']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_marketing_link']['element_default_classes'] = 1;
  $handler->display->display_options['fields']['field_marketing_link']['empty'] = '#';
  $handler->display->display_options['fields']['field_marketing_link']['hide_empty'] = 0;
  $handler->display->display_options['fields']['field_marketing_link']['empty_zero'] = 0;
  $handler->display->display_options['fields']['field_marketing_link']['hide_alter_empty'] = 1;
  $handler->display->display_options['fields']['field_marketing_link']['click_sort_column'] = 'url';
  $handler->display->display_options['fields']['field_marketing_link']['type'] = 'link_plain';
  $handler->display->display_options['fields']['field_marketing_link']['field_api_classes'] = 0;
  /* Field: Content: Marketing Image */
  $handler->display->display_options['fields']['field_marketing_image']['id'] = 'field_marketing_image';
  $handler->display->display_options['fields']['field_marketing_image']['table'] = 'field_data_field_marketing_image';
  $handler->display->display_options['fields']['field_marketing_image']['field'] = 'field_marketing_image';
  $handler->display->display_options['fields']['field_marketing_image']['label'] = '';
  $handler->display->display_options['fields']['field_marketing_image']['alter']['alter_text'] = 1;
  $handler->display->display_options['fields']['field_marketing_image']['alter']['text'] = '<a href="[field_marketing_link]">[field_marketing_image]</a>';
  $handler->display->display_options['fields']['field_marketing_image']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['field_marketing_image']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['field_marketing_image']['alter']['external'] = 0;
  $handler->display->display_options['fields']['field_marketing_image']['alter']['replace_spaces'] = 0;
  $handler->display->display_options['fields']['field_marketing_image']['alter']['trim_whitespace'] = 0;
  $handler->display->display_options['fields']['field_marketing_image']['alter']['nl2br'] = 0;
  $handler->display->display_options['fields']['field_marketing_image']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['field_marketing_image']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['field_marketing_image']['alter']['more_link'] = 0;
  $handler->display->display_options['fields']['field_marketing_image']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['field_marketing_image']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['field_marketing_image']['alter']['html'] = 0;
  $handler->display->display_options['fields']['field_marketing_image']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_marketing_image']['element_default_classes'] = 1;
  $handler->display->display_options['fields']['field_marketing_image']['hide_empty'] = 0;
  $handler->display->display_options['fields']['field_marketing_image']['empty_zero'] = 0;
  $handler->display->display_options['fields']['field_marketing_image']['hide_alter_empty'] = 1;
  $handler->display->display_options['fields']['field_marketing_image']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_marketing_image']['settings'] = array(
    'image_style' => '',
    'image_link' => '',
  );
  $handler->display->display_options['fields']['field_marketing_image']['field_api_classes'] = 0;
  /* Sort criterion: Nodequeue: Position */
  $handler->display->display_options['sorts']['position']['id'] = 'position';
  $handler->display->display_options['sorts']['position']['table'] = 'nodequeue_nodes';
  $handler->display->display_options['sorts']['position']['field'] = 'position';
  $handler->display->display_options['sorts']['position']['relationship'] = 'nodequeue_rel';
  /* Sort criterion: Content: Post date */
  $handler->display->display_options['sorts']['created']['id'] = 'created';
  $handler->display->display_options['sorts']['created']['table'] = 'node';
  $handler->display->display_options['sorts']['created']['field'] = 'created';
  $handler->display->display_options['sorts']['created']['order'] = 'DESC';
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
    'feature_story' => 'feature_story',
  );
  $handler->display->display_options['filters']['type']['group'] = 1;
  /* Filter criterion: Nodequeue: In queue */
  $handler->display->display_options['filters']['in_queue']['id'] = 'in_queue';
  $handler->display->display_options['filters']['in_queue']['table'] = 'nodequeue_nodes';
  $handler->display->display_options['filters']['in_queue']['field'] = 'in_queue';
  $handler->display->display_options['filters']['in_queue']['relationship'] = 'nodequeue_rel';
  $handler->display->display_options['filters']['in_queue']['value'] = '1';
  $handler->display->display_options['filters']['in_queue']['group'] = 1;
  /* Filter criterion: Content: Display on Hompage (field_display_on_hompage) */
  $handler->display->display_options['filters']['field_display_on_hompage_value']['id'] = 'field_display_on_hompage_value';
  $handler->display->display_options['filters']['field_display_on_hompage_value']['table'] = 'field_data_field_display_on_hompage';
  $handler->display->display_options['filters']['field_display_on_hompage_value']['field'] = 'field_display_on_hompage_value';
  $handler->display->display_options['filters']['field_display_on_hompage_value']['value'] = array(
    1 => '1',
  );
  $handler->display->display_options['filters']['field_display_on_hompage_value']['group'] = 1;
  /* Filter criterion: Content: Schedule -  start date (field_schedule) */
  $handler->display->display_options['filters']['field_schedule_value']['id'] = 'field_schedule_value';
  $handler->display->display_options['filters']['field_schedule_value']['table'] = 'field_data_field_schedule';
  $handler->display->display_options['filters']['field_schedule_value']['field'] = 'field_schedule_value';
  $handler->display->display_options['filters']['field_schedule_value']['operator'] = '<=';
  $handler->display->display_options['filters']['field_schedule_value']['default_date'] = 'now';

  /* Display: Block */
  $handler = $view->new_display('block', 'Block', 'block');
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
    'marketing_message' => 'marketing_message',
  );
  $handler->display->display_options['filters']['type']['group'] = 1;
  /* Filter criterion: Nodequeue: In queue */
  $handler->display->display_options['filters']['in_queue']['id'] = 'in_queue';
  $handler->display->display_options['filters']['in_queue']['table'] = 'nodequeue_nodes';
  $handler->display->display_options['filters']['in_queue']['field'] = 'in_queue';
  $handler->display->display_options['filters']['in_queue']['relationship'] = 'nodequeue_rel';
  $handler->display->display_options['filters']['in_queue']['value'] = '1';
  $handler->display->display_options['filters']['in_queue']['group'] = 1;
  $export['marketing_messages'] = $view;

  return $export;
}
