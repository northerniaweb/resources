<?php
/**
 * @file
 * uni_glance.views_default.inc
 */

/**
 * Implements hook_views_default_views().
 */
function uni_glance_views_default_views() {
  $export = array();

  $view = new view;
  $view->name = 'uni_at_a_glance';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'node';
  $view->human_name = 'UNI At A Glance';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['title'] = 'UNI At A Glance';
  $handler->display->display_options['access']['type'] = 'perm';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['query']['options']['query_comment'] = FALSE;
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['pager']['type'] = 'none';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['style_plugin'] = 'slideshow';
  $handler->display->display_options['style_options']['slideshow_type'] = 'views_slideshow_cycle';
  $handler->display->display_options['style_options']['slideshow_skin'] = 'default';
  $handler->display->display_options['style_options']['skin_info'] = array(
    'class' => 'default',
    'name' => 'Default',
    'module' => 'views_slideshow',
    'path' => '',
    'stylesheets' => array(),
  );
  $handler->display->display_options['style_options']['widgets']['top']['views_slideshow_pager']['weight'] = '1';
  $handler->display->display_options['style_options']['widgets']['top']['views_slideshow_pager']['type'] = 'views_slideshow_pager_fields';
  $handler->display->display_options['style_options']['widgets']['top']['views_slideshow_pager']['views_slideshow_pager_fields_fields'] = array(
    'field_uni_image' => 0,
    'field_uni_link' => 0,
    'field_uni_start_date' => 0,
  );
  $handler->display->display_options['style_options']['widgets']['top']['views_slideshow_controls']['weight'] = '1';
  $handler->display->display_options['style_options']['widgets']['top']['views_slideshow_controls']['type'] = 'views_slideshow_controls_text';
  $handler->display->display_options['style_options']['widgets']['top']['views_slideshow_slide_counter']['weight'] = '1';
  $handler->display->display_options['style_options']['widgets']['bottom']['views_slideshow_pager']['weight'] = '1';
  $handler->display->display_options['style_options']['widgets']['bottom']['views_slideshow_pager']['type'] = 'views_slideshow_pager_fields';
  $handler->display->display_options['style_options']['widgets']['bottom']['views_slideshow_pager']['views_slideshow_pager_fields_fields'] = array(
    'field_uni_image' => 0,
    'field_uni_link' => 0,
    'field_uni_start_date' => 0,
  );
  $handler->display->display_options['style_options']['widgets']['bottom']['views_slideshow_controls']['weight'] = '1';
  $handler->display->display_options['style_options']['widgets']['bottom']['views_slideshow_controls']['type'] = 'views_slideshow_controls_text';
  $handler->display->display_options['style_options']['widgets']['bottom']['views_slideshow_slide_counter']['weight'] = '1';
  $handler->display->display_options['style_options']['views_slideshow_cycle']['timeout'] = '5000';
  $handler->display->display_options['style_options']['views_slideshow_cycle']['speed'] = '700';
  $handler->display->display_options['style_options']['views_slideshow_cycle']['delay'] = '0';
  $handler->display->display_options['style_options']['views_slideshow_cycle']['start_paused'] = 0;
  $handler->display->display_options['style_options']['views_slideshow_cycle']['remember_slide_days'] = '1';
  $handler->display->display_options['style_options']['views_slideshow_cycle']['items_per_slide'] = '1';
  $handler->display->display_options['style_options']['views_slideshow_cycle']['wait_for_image_load_timeout'] = '3000';
  $handler->display->display_options['style_options']['views_slideshow_cycle']['cleartype'] = 0;
  $handler->display->display_options['style_options']['views_slideshow_cycle']['cleartypenobg'] = 0;
  $handler->display->display_options['row_plugin'] = 'fields';
  /* Field: Content: Image */
  $handler->display->display_options['fields']['field_uni_image']['id'] = 'field_uni_image';
  $handler->display->display_options['fields']['field_uni_image']['table'] = 'field_data_field_uni_image';
  $handler->display->display_options['fields']['field_uni_image']['field'] = 'field_uni_image';
  $handler->display->display_options['fields']['field_uni_image']['label'] = '';
  $handler->display->display_options['fields']['field_uni_image']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['field_uni_image']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['field_uni_image']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['field_uni_image']['alter']['external'] = 0;
  $handler->display->display_options['fields']['field_uni_image']['alter']['replace_spaces'] = 0;
  $handler->display->display_options['fields']['field_uni_image']['alter']['trim_whitespace'] = 0;
  $handler->display->display_options['fields']['field_uni_image']['alter']['nl2br'] = 0;
  $handler->display->display_options['fields']['field_uni_image']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['field_uni_image']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['field_uni_image']['alter']['more_link'] = 0;
  $handler->display->display_options['fields']['field_uni_image']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['field_uni_image']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['field_uni_image']['alter']['html'] = 0;
  $handler->display->display_options['fields']['field_uni_image']['element_class'] = 'grid-12 alpha omega';
  $handler->display->display_options['fields']['field_uni_image']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_uni_image']['element_default_classes'] = 1;
  $handler->display->display_options['fields']['field_uni_image']['hide_empty'] = 0;
  $handler->display->display_options['fields']['field_uni_image']['empty_zero'] = 0;
  $handler->display->display_options['fields']['field_uni_image']['hide_alter_empty'] = 1;
  $handler->display->display_options['fields']['field_uni_image']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_uni_image']['settings'] = array(
    'image_style' => '',
    'image_link' => 'content',
  );
  $handler->display->display_options['fields']['field_uni_image']['field_api_classes'] = 0;
  /* Field: Content: Link */
  $handler->display->display_options['fields']['field_uni_link']['id'] = 'field_uni_link';
  $handler->display->display_options['fields']['field_uni_link']['table'] = 'field_data_field_uni_link';
  $handler->display->display_options['fields']['field_uni_link']['field'] = 'field_uni_link';
  $handler->display->display_options['fields']['field_uni_link']['label'] = '';
  $handler->display->display_options['fields']['field_uni_link']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['field_uni_link']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['field_uni_link']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['field_uni_link']['alter']['external'] = 0;
  $handler->display->display_options['fields']['field_uni_link']['alter']['replace_spaces'] = 0;
  $handler->display->display_options['fields']['field_uni_link']['alter']['trim_whitespace'] = 0;
  $handler->display->display_options['fields']['field_uni_link']['alter']['nl2br'] = 0;
  $handler->display->display_options['fields']['field_uni_link']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['field_uni_link']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['field_uni_link']['alter']['more_link'] = 0;
  $handler->display->display_options['fields']['field_uni_link']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['field_uni_link']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['field_uni_link']['alter']['html'] = 0;
  $handler->display->display_options['fields']['field_uni_link']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_uni_link']['element_default_classes'] = 1;
  $handler->display->display_options['fields']['field_uni_link']['hide_empty'] = 0;
  $handler->display->display_options['fields']['field_uni_link']['empty_zero'] = 0;
  $handler->display->display_options['fields']['field_uni_link']['hide_alter_empty'] = 1;
  $handler->display->display_options['fields']['field_uni_link']['click_sort_column'] = 'url';
  $handler->display->display_options['fields']['field_uni_link']['field_api_classes'] = 0;
  /* Field: Content: Schedule */
  $handler->display->display_options['fields']['field_uni_start_date']['id'] = 'field_uni_start_date';
  $handler->display->display_options['fields']['field_uni_start_date']['table'] = 'field_data_field_uni_start_date';
  $handler->display->display_options['fields']['field_uni_start_date']['field'] = 'field_uni_start_date';
  $handler->display->display_options['fields']['field_uni_start_date']['label'] = '';
  $handler->display->display_options['fields']['field_uni_start_date']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_uni_start_date']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['field_uni_start_date']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['field_uni_start_date']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['field_uni_start_date']['alter']['external'] = 0;
  $handler->display->display_options['fields']['field_uni_start_date']['alter']['replace_spaces'] = 0;
  $handler->display->display_options['fields']['field_uni_start_date']['alter']['trim_whitespace'] = 0;
  $handler->display->display_options['fields']['field_uni_start_date']['alter']['nl2br'] = 0;
  $handler->display->display_options['fields']['field_uni_start_date']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['field_uni_start_date']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['field_uni_start_date']['alter']['more_link'] = 0;
  $handler->display->display_options['fields']['field_uni_start_date']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['field_uni_start_date']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['field_uni_start_date']['alter']['html'] = 0;
  $handler->display->display_options['fields']['field_uni_start_date']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_uni_start_date']['element_default_classes'] = 1;
  $handler->display->display_options['fields']['field_uni_start_date']['hide_empty'] = 0;
  $handler->display->display_options['fields']['field_uni_start_date']['empty_zero'] = 0;
  $handler->display->display_options['fields']['field_uni_start_date']['hide_alter_empty'] = 1;
  $handler->display->display_options['fields']['field_uni_start_date']['settings'] = array(
    'format_type' => 'medium',
    'fromto' => 'both',
    'multiple_number' => '',
    'multiple_from' => '',
    'multiple_to' => '',
  );
  $handler->display->display_options['fields']['field_uni_start_date']['field_api_classes'] = 0;
  /* Sort criterion: Global: Random */
  $handler->display->display_options['sorts']['random']['id'] = 'random';
  $handler->display->display_options['sorts']['random']['table'] = 'views';
  $handler->display->display_options['sorts']['random']['field'] = 'random';
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
    'uni_at_a_glance' => 'uni_at_a_glance',
  );
  $handler->display->display_options['filters']['type']['group'] = 1;
  /* Filter criterion: Content: Schedule -  start date (field_uni_start_date) */
  $handler->display->display_options['filters']['field_uni_start_date_value']['id'] = 'field_uni_start_date_value';
  $handler->display->display_options['filters']['field_uni_start_date_value']['table'] = 'field_data_field_uni_start_date';
  $handler->display->display_options['filters']['field_uni_start_date_value']['field'] = 'field_uni_start_date_value';
  $handler->display->display_options['filters']['field_uni_start_date_value']['operator'] = '<=';
  $handler->display->display_options['filters']['field_uni_start_date_value']['default_date'] = 'now';
  /* Filter criterion: Content: Schedule - end date (field_uni_start_date:value2) */
  $handler->display->display_options['filters']['field_uni_start_date_value2']['id'] = 'field_uni_start_date_value2';
  $handler->display->display_options['filters']['field_uni_start_date_value2']['table'] = 'field_data_field_uni_start_date';
  $handler->display->display_options['filters']['field_uni_start_date_value2']['field'] = 'field_uni_start_date_value2';
  $handler->display->display_options['filters']['field_uni_start_date_value2']['operator'] = '>=';
  $handler->display->display_options['filters']['field_uni_start_date_value2']['default_date'] = 'now';

  /* Display: Block */
  $handler = $view->new_display('block', 'Block', 'block');
  $export['uni_at_a_glance'] = $view;

  return $export;
}
