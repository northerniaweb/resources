<?php
/**
 * @file
 * uni_feature_story.views_default.inc
 */

/**
 * Implements hook_views_default_views().
 */
function uni_feature_story_views_default_views() {
  $export = array();

  $view = new view();
  $view->name = 'feature_story_on_hompage';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'node';
  $view->human_name = 'Featured Story';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['title'] = 'Featured Story';
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['access']['type'] = 'perm';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['query']['options']['query_comment'] = FALSE;
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['pager']['type'] = 'full';
  $handler->display->display_options['pager']['options']['items_per_page'] = '3';
  $handler->display->display_options['style_plugin'] = 'default';
  $handler->display->display_options['row_plugin'] = 'fields';
  /* Relationship: Nodequeue: Queue */
  $handler->display->display_options['relationships']['nodequeue_rel']['id'] = 'nodequeue_rel';
  $handler->display->display_options['relationships']['nodequeue_rel']['table'] = 'node';
  $handler->display->display_options['relationships']['nodequeue_rel']['field'] = 'nodequeue_rel';
  $handler->display->display_options['relationships']['nodequeue_rel']['label'] = 'Feature Story Queue';
  $handler->display->display_options['relationships']['nodequeue_rel']['required'] = TRUE;
  $handler->display->display_options['relationships']['nodequeue_rel']['limit'] = 1;
  $handler->display->display_options['relationships']['nodequeue_rel']['names'] = array(
    'feature_story' => 'feature_story',
  );
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  $handler->display->display_options['fields']['title']['element_label_colon'] = FALSE;
  /* Field: Content: UNI Homepage Image */
  $handler->display->display_options['fields']['field_homepage_image']['id'] = 'field_homepage_image';
  $handler->display->display_options['fields']['field_homepage_image']['table'] = 'field_data_field_homepage_image';
  $handler->display->display_options['fields']['field_homepage_image']['field'] = 'field_homepage_image';
  $handler->display->display_options['fields']['field_homepage_image']['label'] = '';
  $handler->display->display_options['fields']['field_homepage_image']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_homepage_image']['hide_empty'] = TRUE;
  $handler->display->display_options['fields']['field_homepage_image']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_homepage_image']['settings'] = array(
    'image_style' => 'front__mobile',
    'image_link' => 'content',
  );
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

  /* Display: Homepage */
  $handler = $view->new_display('block', 'Homepage', 'block');
  $handler->display->display_options['defaults']['hide_admin_links'] = FALSE;
  $handler->display->display_options['defaults']['pager'] = FALSE;
  $handler->display->display_options['pager']['type'] = 'some';
  $handler->display->display_options['pager']['options']['items_per_page'] = '3';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['exclude'] = TRUE;
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  $handler->display->display_options['fields']['title']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['title']['link_to_node'] = FALSE;
  /* Field: Content: UNI Homepage Image */
  $handler->display->display_options['fields']['field_homepage_image']['id'] = 'field_homepage_image';
  $handler->display->display_options['fields']['field_homepage_image']['table'] = 'field_data_field_homepage_image';
  $handler->display->display_options['fields']['field_homepage_image']['field'] = 'field_homepage_image';
  $handler->display->display_options['fields']['field_homepage_image']['label'] = '';
  $handler->display->display_options['fields']['field_homepage_image']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_homepage_image']['hide_empty'] = TRUE;
  $handler->display->display_options['fields']['field_homepage_image']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_homepage_image']['settings'] = array(
    'image_style' => 'front__mobile',
    'image_link' => 'content',
  );
  $handler->display->display_options['defaults']['filter_groups'] = FALSE;
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
  $handler->display->display_options['block_description'] = 'Views: Featured Story Homepage';

  /* Display: Inside UNI */
  $handler = $view->new_display('block', 'Inside UNI', 'block_1');
  $handler->display->display_options['defaults']['hide_admin_links'] = FALSE;
  $handler->display->display_options['defaults']['pager'] = FALSE;
  $handler->display->display_options['pager']['type'] = 'some';
  $handler->display->display_options['pager']['options']['items_per_page'] = '1';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Content: Inside UNI Image */
  $handler->display->display_options['fields']['field_inside_uni_image']['id'] = 'field_inside_uni_image';
  $handler->display->display_options['fields']['field_inside_uni_image']['table'] = 'field_data_field_inside_uni_image';
  $handler->display->display_options['fields']['field_inside_uni_image']['field'] = 'field_inside_uni_image';
  $handler->display->display_options['fields']['field_inside_uni_image']['label'] = '';
  $handler->display->display_options['fields']['field_inside_uni_image']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_inside_uni_image']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_inside_uni_image']['settings'] = array(
    'image_style' => 'insideuni__mobile',
    'image_link' => '',
  );
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  $handler->display->display_options['fields']['title']['element_label_colon'] = FALSE;
  /* Field: Content: Teaser */
  $handler->display->display_options['fields']['field_teaser']['id'] = 'field_teaser';
  $handler->display->display_options['fields']['field_teaser']['table'] = 'field_data_field_teaser';
  $handler->display->display_options['fields']['field_teaser']['field'] = 'field_teaser';
  $handler->display->display_options['fields']['field_teaser']['label'] = '';
  $handler->display->display_options['fields']['field_teaser']['element_label_colon'] = FALSE;
  $handler->display->display_options['defaults']['sorts'] = FALSE;
  /* Sort criterion: Content: Post date */
  $handler->display->display_options['sorts']['created']['id'] = 'created';
  $handler->display->display_options['sorts']['created']['table'] = 'node';
  $handler->display->display_options['sorts']['created']['field'] = 'created';
  $handler->display->display_options['sorts']['created']['order'] = 'DESC';
  $handler->display->display_options['defaults']['filter_groups'] = FALSE;
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
    'feature_story' => 'feature_story',
  );
  $handler->display->display_options['filters']['type']['group'] = 1;
  $handler->display->display_options['block_description'] = 'Views: Featured Story Inside UNI';

  /* Display: Inside UNI-Currrent */
  $handler = $view->new_display('block', 'Inside UNI-Currrent', 'block_current_students');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['title'] = 'Featured Story - Current Students';
  $handler->display->display_options['display_description'] = 'Current Students';
  $handler->display->display_options['defaults']['hide_admin_links'] = FALSE;
  $handler->display->display_options['defaults']['link_display'] = FALSE;
  $handler->display->display_options['defaults']['pager'] = FALSE;
  $handler->display->display_options['pager']['type'] = 'some';
  $handler->display->display_options['pager']['options']['items_per_page'] = '1';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['defaults']['relationships'] = FALSE;
  /* Relationship: Nodequeue: Queue */
  $handler->display->display_options['relationships']['nodequeue_rel']['id'] = 'nodequeue_rel';
  $handler->display->display_options['relationships']['nodequeue_rel']['table'] = 'node';
  $handler->display->display_options['relationships']['nodequeue_rel']['field'] = 'nodequeue_rel';
  $handler->display->display_options['relationships']['nodequeue_rel']['label'] = 'Feature Story - Current Students Queue';
  $handler->display->display_options['relationships']['nodequeue_rel']['required'] = TRUE;
  $handler->display->display_options['relationships']['nodequeue_rel']['limit'] = 1;
  $handler->display->display_options['relationships']['nodequeue_rel']['names'] = array(
    'featured_story_current_students' => 'featured_story_current_students',
    'feature_story' => 0,
    'marketing_messages' => 0,
    'snapshots' => 0,
    'featured_news' => 0,
    'event_calendar' => 0,
  );
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Content: Inside UNI Image */
  $handler->display->display_options['fields']['field_inside_uni_image']['id'] = 'field_inside_uni_image';
  $handler->display->display_options['fields']['field_inside_uni_image']['table'] = 'field_data_field_inside_uni_image';
  $handler->display->display_options['fields']['field_inside_uni_image']['field'] = 'field_inside_uni_image';
  $handler->display->display_options['fields']['field_inside_uni_image']['label'] = '';
  $handler->display->display_options['fields']['field_inside_uni_image']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_inside_uni_image']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_inside_uni_image']['settings'] = array(
    'image_style' => 'insideuni__mobile',
    'image_link' => '',
  );
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  $handler->display->display_options['fields']['title']['element_label_colon'] = FALSE;
  /* Field: Content: Teaser */
  $handler->display->display_options['fields']['field_teaser']['id'] = 'field_teaser';
  $handler->display->display_options['fields']['field_teaser']['table'] = 'field_data_field_teaser';
  $handler->display->display_options['fields']['field_teaser']['field'] = 'field_teaser';
  $handler->display->display_options['fields']['field_teaser']['label'] = '';
  $handler->display->display_options['fields']['field_teaser']['element_label_colon'] = FALSE;
  $handler->display->display_options['defaults']['sorts'] = FALSE;
  /* Sort criterion: Content: Post date */
  $handler->display->display_options['sorts']['created']['id'] = 'created';
  $handler->display->display_options['sorts']['created']['table'] = 'node';
  $handler->display->display_options['sorts']['created']['field'] = 'created';
  $handler->display->display_options['sorts']['created']['order'] = 'DESC';
  $handler->display->display_options['defaults']['filter_groups'] = FALSE;
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
    'feature_story' => 'feature_story',
  );
  $handler->display->display_options['filters']['type']['group'] = 1;
  /* Filter criterion: Content: Inside UNI Section (field_section) */
  $handler->display->display_options['filters']['field_section_tid']['id'] = 'field_section_tid';
  $handler->display->display_options['filters']['field_section_tid']['table'] = 'field_data_field_section';
  $handler->display->display_options['filters']['field_section_tid']['field'] = 'field_section_tid';
  $handler->display->display_options['filters']['field_section_tid']['value'] = array(
    2 => '2',
  );
  $handler->display->display_options['filters']['field_section_tid']['type'] = 'select';
  $handler->display->display_options['filters']['field_section_tid']['vocabulary'] = 'feature_story_section';
  $handler->display->display_options['block_description'] = 'Views: Featured Story Inside UNI - Current Students';

  /* Display: Inside UNI-Faculty */
  $handler = $view->new_display('block', 'Inside UNI-Faculty', 'block_2');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['title'] = 'Featured Story - Faculty / Staff';
  $handler->display->display_options['display_description'] = 'Faculty and Staff';
  $handler->display->display_options['defaults']['hide_admin_links'] = FALSE;
  $handler->display->display_options['defaults']['pager'] = FALSE;
  $handler->display->display_options['pager']['type'] = 'some';
  $handler->display->display_options['pager']['options']['items_per_page'] = '1';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['defaults']['relationships'] = FALSE;
  /* Relationship: Nodequeue: Queue */
  $handler->display->display_options['relationships']['nodequeue_rel']['id'] = 'nodequeue_rel';
  $handler->display->display_options['relationships']['nodequeue_rel']['table'] = 'node';
  $handler->display->display_options['relationships']['nodequeue_rel']['field'] = 'nodequeue_rel';
  $handler->display->display_options['relationships']['nodequeue_rel']['label'] = 'Feature Story - Current Students Queue';
  $handler->display->display_options['relationships']['nodequeue_rel']['required'] = TRUE;
  $handler->display->display_options['relationships']['nodequeue_rel']['limit'] = 1;
  $handler->display->display_options['relationships']['nodequeue_rel']['names'] = array(
    'featured_story_faculty_staff' => 'featured_story_faculty_staff',
    'feature_story' => 0,
    'marketing_messages' => 0,
    'snapshots' => 0,
    'featured_news' => 0,
    'event_calendar' => 0,
    'featured_story_current_students' => 0,
  );
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Content: Inside UNI Image */
  $handler->display->display_options['fields']['field_inside_uni_image']['id'] = 'field_inside_uni_image';
  $handler->display->display_options['fields']['field_inside_uni_image']['table'] = 'field_data_field_inside_uni_image';
  $handler->display->display_options['fields']['field_inside_uni_image']['field'] = 'field_inside_uni_image';
  $handler->display->display_options['fields']['field_inside_uni_image']['label'] = '';
  $handler->display->display_options['fields']['field_inside_uni_image']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_inside_uni_image']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_inside_uni_image']['settings'] = array(
    'image_style' => 'insideuni__mobile',
    'image_link' => '',
  );
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  $handler->display->display_options['fields']['title']['element_label_colon'] = FALSE;
  /* Field: Content: Teaser */
  $handler->display->display_options['fields']['field_teaser']['id'] = 'field_teaser';
  $handler->display->display_options['fields']['field_teaser']['table'] = 'field_data_field_teaser';
  $handler->display->display_options['fields']['field_teaser']['field'] = 'field_teaser';
  $handler->display->display_options['fields']['field_teaser']['label'] = '';
  $handler->display->display_options['fields']['field_teaser']['element_label_colon'] = FALSE;
  $handler->display->display_options['defaults']['sorts'] = FALSE;
  /* Sort criterion: Content: Post date */
  $handler->display->display_options['sorts']['created']['id'] = 'created';
  $handler->display->display_options['sorts']['created']['table'] = 'node';
  $handler->display->display_options['sorts']['created']['field'] = 'created';
  $handler->display->display_options['sorts']['created']['order'] = 'DESC';
  $handler->display->display_options['defaults']['filter_groups'] = FALSE;
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
    'feature_story' => 'feature_story',
  );
  $handler->display->display_options['filters']['type']['group'] = 1;
  $handler->display->display_options['block_description'] = 'Views: Featured Story Inside UNI - Faculty/Staff';

  /* Display: Feature Story Archive */
  $handler = $view->new_display('page_with_page_title', 'Feature Story Archive', 'page_with_page_title_1');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['title'] = 'Inside UNI Feature Story Archive';
  $handler->display->display_options['defaults']['hide_admin_links'] = FALSE;
  $handler->display->display_options['defaults']['pager'] = FALSE;
  $handler->display->display_options['pager']['type'] = 'full';
  $handler->display->display_options['pager']['options']['items_per_page'] = '20';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['pager']['options']['id'] = '0';
  $handler->display->display_options['pager']['options']['quantity'] = '9';
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'table';
  $handler->display->display_options['style_options']['row_class_special'] = FALSE;
  $handler->display->display_options['style_options']['columns'] = array(
    'field_inside_uni_image' => 'field_inside_uni_image',
    'created' => 'created',
    'title' => 'created',
    'field_teaser' => 'created',
  );
  $handler->display->display_options['style_options']['default'] = '-1';
  $handler->display->display_options['style_options']['info'] = array(
    'field_inside_uni_image' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'created' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'title' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_teaser' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
  );
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['defaults']['row_options'] = FALSE;
  $handler->display->display_options['defaults']['relationships'] = FALSE;
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Content: Inside UNI Image */
  $handler->display->display_options['fields']['field_inside_uni_image']['id'] = 'field_inside_uni_image';
  $handler->display->display_options['fields']['field_inside_uni_image']['table'] = 'field_data_field_inside_uni_image';
  $handler->display->display_options['fields']['field_inside_uni_image']['field'] = 'field_inside_uni_image';
  $handler->display->display_options['fields']['field_inside_uni_image']['label'] = '';
  $handler->display->display_options['fields']['field_inside_uni_image']['alter']['path'] = '[field_homepage_image-fid]';
  $handler->display->display_options['fields']['field_inside_uni_image']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_inside_uni_image']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_inside_uni_image']['type'] = 'lightbox2__lightbox__medium__original';
  $handler->display->display_options['fields']['field_inside_uni_image']['settings'] = array(
    'image_style' => '',
    'image_link' => '',
  );
  /* Field: Content: Post date */
  $handler->display->display_options['fields']['created']['id'] = 'created';
  $handler->display->display_options['fields']['created']['table'] = 'node';
  $handler->display->display_options['fields']['created']['field'] = 'created';
  $handler->display->display_options['fields']['created']['label'] = '';
  $handler->display->display_options['fields']['created']['element_type'] = 'h6';
  $handler->display->display_options['fields']['created']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['created']['date_format'] = 'custom';
  $handler->display->display_options['fields']['created']['custom_date_format'] = 'l, F j, Y';
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  $handler->display->display_options['fields']['title']['element_type'] = 'h3';
  $handler->display->display_options['fields']['title']['element_label_colon'] = FALSE;
  /* Field: Content: Teaser */
  $handler->display->display_options['fields']['field_teaser']['id'] = 'field_teaser';
  $handler->display->display_options['fields']['field_teaser']['table'] = 'field_data_field_teaser';
  $handler->display->display_options['fields']['field_teaser']['field'] = 'field_teaser';
  $handler->display->display_options['fields']['field_teaser']['label'] = '';
  $handler->display->display_options['fields']['field_teaser']['element_label_colon'] = FALSE;
  $handler->display->display_options['defaults']['sorts'] = FALSE;
  /* Sort criterion: Content: Post date */
  $handler->display->display_options['sorts']['created']['id'] = 'created';
  $handler->display->display_options['sorts']['created']['table'] = 'node';
  $handler->display->display_options['sorts']['created']['field'] = 'created';
  $handler->display->display_options['sorts']['created']['order'] = 'DESC';
  $handler->display->display_options['defaults']['filter_groups'] = FALSE;
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
    'feature_story' => 'feature_story',
  );
  $handler->display->display_options['filters']['type']['group'] = 1;
  $handler->display->display_options['path'] = 'inside-uni/archive';
  $export['feature_story_on_hompage'] = $view;

  return $export;
}
