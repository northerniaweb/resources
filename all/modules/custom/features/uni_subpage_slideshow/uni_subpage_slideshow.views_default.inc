<?php
/**
 * @file
 * uni_subpage_slideshow.views_default.inc
 */

/**
 * Implements hook_views_default_views().
 */
function uni_subpage_slideshow_views_default_views() {
  $export = array();

  $view = new view;
  $view->name = 'subpage_slideshow';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'node';
  $view->human_name = 'Subpage Slideshow';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['title'] = 'Subpage Slideshow';
  $handler->display->display_options['access']['type'] = 'perm';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['query']['options']['query_comment'] = FALSE;
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['pager']['type'] = 'some';
  $handler->display->display_options['pager']['options']['items_per_page'] = '5';
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
    'field_slideshow_images' => 0,
    'title' => 0,
  );
  $handler->display->display_options['style_options']['widgets']['top']['views_slideshow_controls']['weight'] = '1';
  $handler->display->display_options['style_options']['widgets']['top']['views_slideshow_controls']['type'] = 'views_slideshow_controls_text';
  $handler->display->display_options['style_options']['widgets']['top']['views_slideshow_slide_counter']['weight'] = '1';
  $handler->display->display_options['style_options']['widgets']['bottom']['views_slideshow_pager']['enable'] = 1;
  $handler->display->display_options['style_options']['widgets']['bottom']['views_slideshow_pager']['weight'] = '1';
  $handler->display->display_options['style_options']['widgets']['bottom']['views_slideshow_pager']['type'] = 'views_slideshow_pager_fields';
  $handler->display->display_options['style_options']['widgets']['bottom']['views_slideshow_pager']['views_slideshow_pager_fields_fields'] = array(
    'field_slideshow_images' => 0,
    'title' => 0,
  );
  $handler->display->display_options['style_options']['widgets']['bottom']['views_slideshow_controls']['weight'] = '1';
  $handler->display->display_options['style_options']['widgets']['bottom']['views_slideshow_controls']['type'] = 'views_slideshow_controls_text';
  $handler->display->display_options['style_options']['widgets']['bottom']['views_slideshow_slide_counter']['enable'] = 1;
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
  /* Field: Content: Images */
  $handler->display->display_options['fields']['field_slideshow_images']['id'] = 'field_slideshow_images';
  $handler->display->display_options['fields']['field_slideshow_images']['table'] = 'field_data_field_slideshow_images';
  $handler->display->display_options['fields']['field_slideshow_images']['field'] = 'field_slideshow_images';
  $handler->display->display_options['fields']['field_slideshow_images']['label'] = '';
  $handler->display->display_options['fields']['field_slideshow_images']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['field_slideshow_images']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['field_slideshow_images']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['field_slideshow_images']['alter']['external'] = 0;
  $handler->display->display_options['fields']['field_slideshow_images']['alter']['replace_spaces'] = 0;
  $handler->display->display_options['fields']['field_slideshow_images']['alter']['trim_whitespace'] = 0;
  $handler->display->display_options['fields']['field_slideshow_images']['alter']['nl2br'] = 0;
  $handler->display->display_options['fields']['field_slideshow_images']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['field_slideshow_images']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['field_slideshow_images']['alter']['more_link'] = 0;
  $handler->display->display_options['fields']['field_slideshow_images']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['field_slideshow_images']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['field_slideshow_images']['alter']['html'] = 0;
  $handler->display->display_options['fields']['field_slideshow_images']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_slideshow_images']['element_default_classes'] = 1;
  $handler->display->display_options['fields']['field_slideshow_images']['hide_empty'] = 0;
  $handler->display->display_options['fields']['field_slideshow_images']['empty_zero'] = 0;
  $handler->display->display_options['fields']['field_slideshow_images']['hide_alter_empty'] = 1;
  $handler->display->display_options['fields']['field_slideshow_images']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_slideshow_images']['settings'] = array(
    'image_style' => 'slideshow__mobile',
    'image_link' => '',
  );
  $handler->display->display_options['fields']['field_slideshow_images']['group_rows'] = 1;
  $handler->display->display_options['fields']['field_slideshow_images']['delta_limit'] = '1';
  $handler->display->display_options['fields']['field_slideshow_images']['delta_offset'] = '0';
  $handler->display->display_options['fields']['field_slideshow_images']['delta_reversed'] = 0;
  $handler->display->display_options['fields']['field_slideshow_images']['delta_first_last'] = 0;
  $handler->display->display_options['fields']['field_slideshow_images']['field_api_classes'] = 0;
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
  /* Field: Global: View result counter */
  $handler->display->display_options['fields']['counter']['id'] = 'counter';
  $handler->display->display_options['fields']['counter']['table'] = 'views';
  $handler->display->display_options['fields']['counter']['field'] = 'counter';
  $handler->display->display_options['fields']['counter']['label'] = '';
  $handler->display->display_options['fields']['counter']['exclude'] = TRUE;
  $handler->display->display_options['fields']['counter']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['counter']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['counter']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['counter']['alter']['external'] = 0;
  $handler->display->display_options['fields']['counter']['alter']['replace_spaces'] = 0;
  $handler->display->display_options['fields']['counter']['alter']['trim_whitespace'] = 0;
  $handler->display->display_options['fields']['counter']['alter']['nl2br'] = 0;
  $handler->display->display_options['fields']['counter']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['counter']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['counter']['alter']['more_link'] = 0;
  $handler->display->display_options['fields']['counter']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['counter']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['counter']['alter']['html'] = 0;
  $handler->display->display_options['fields']['counter']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['counter']['element_default_classes'] = 1;
  $handler->display->display_options['fields']['counter']['hide_empty'] = 0;
  $handler->display->display_options['fields']['counter']['empty_zero'] = 0;
  $handler->display->display_options['fields']['counter']['hide_alter_empty'] = 1;
  $handler->display->display_options['fields']['counter']['counter_start'] = '1';
  /* Sort criterion: Content: Post date */
  $handler->display->display_options['sorts']['created']['id'] = 'created';
  $handler->display->display_options['sorts']['created']['table'] = 'node';
  $handler->display->display_options['sorts']['created']['field'] = 'created';
  /* Contextual filter: Content: Section (field_slideshow_section) */
  $handler->display->display_options['arguments']['field_slideshow_section_tid']['id'] = 'field_slideshow_section_tid';
  $handler->display->display_options['arguments']['field_slideshow_section_tid']['table'] = 'field_data_field_slideshow_section';
  $handler->display->display_options['arguments']['field_slideshow_section_tid']['field'] = 'field_slideshow_section_tid';
  $handler->display->display_options['arguments']['field_slideshow_section_tid']['default_action'] = 'default';
  $handler->display->display_options['arguments']['field_slideshow_section_tid']['default_argument_type'] = 'taxonomy_tid';
  $handler->display->display_options['arguments']['field_slideshow_section_tid']['default_argument_options']['term_page'] = 0;
  $handler->display->display_options['arguments']['field_slideshow_section_tid']['default_argument_options']['node'] = 1;
  $handler->display->display_options['arguments']['field_slideshow_section_tid']['default_argument_options']['limit'] = 1;
  $handler->display->display_options['arguments']['field_slideshow_section_tid']['default_argument_options']['vocabularies'] = array(
    'feature_callout_section' => 'feature_callout_section',
  );
  $handler->display->display_options['arguments']['field_slideshow_section_tid']['default_argument_skip_url'] = 0;
  $handler->display->display_options['arguments']['field_slideshow_section_tid']['summary']['number_of_records'] = '0';
  $handler->display->display_options['arguments']['field_slideshow_section_tid']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['field_slideshow_section_tid']['summary_options']['items_per_page'] = '25';
  $handler->display->display_options['arguments']['field_slideshow_section_tid']['break_phrase'] = 0;
  $handler->display->display_options['arguments']['field_slideshow_section_tid']['not'] = 0;
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
    'subpage_slideshow' => 'subpage_slideshow',
  );

  /* Display: Block */
  $handler = $view->new_display('block', 'Block', 'block');
  $handler->display->display_options['defaults']['pager'] = FALSE;
  $handler->display->display_options['pager']['type'] = 'some';
  $handler->display->display_options['pager']['options']['items_per_page'] = '5';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
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
    'nid' => 0,
    'title' => 0,
    'field_body_subpage_slideshow' => 0,
    'field_slideshow_images' => 0,
    'counter' => 0,
  );
  $handler->display->display_options['style_options']['widgets']['top']['views_slideshow_controls']['weight'] = '1';
  $handler->display->display_options['style_options']['widgets']['top']['views_slideshow_controls']['type'] = 'views_slideshow_controls_text';
  $handler->display->display_options['style_options']['widgets']['top']['views_slideshow_slide_counter']['weight'] = '1';
  $handler->display->display_options['style_options']['widgets']['bottom']['views_slideshow_pager']['enable'] = 1;
  $handler->display->display_options['style_options']['widgets']['bottom']['views_slideshow_pager']['weight'] = '1';
  $handler->display->display_options['style_options']['widgets']['bottom']['views_slideshow_pager']['type'] = 'views_slideshow_pager_fields';
  $handler->display->display_options['style_options']['widgets']['bottom']['views_slideshow_pager']['views_slideshow_pager_fields_fields'] = array(
    'counter' => 'counter',
    'nid' => 0,
    'title' => 0,
    'field_body_subpage_slideshow' => 0,
    'field_slideshow_images' => 0,
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
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['row_plugin'] = 'fields';
  $handler->display->display_options['defaults']['row_options'] = FALSE;
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Content: Nid */
  $handler->display->display_options['fields']['nid']['id'] = 'nid';
  $handler->display->display_options['fields']['nid']['table'] = 'node';
  $handler->display->display_options['fields']['nid']['field'] = 'nid';
  $handler->display->display_options['fields']['nid']['label'] = '';
  $handler->display->display_options['fields']['nid']['exclude'] = TRUE;
  $handler->display->display_options['fields']['nid']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['nid']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['nid']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['nid']['alter']['external'] = 0;
  $handler->display->display_options['fields']['nid']['alter']['replace_spaces'] = 0;
  $handler->display->display_options['fields']['nid']['alter']['trim_whitespace'] = 0;
  $handler->display->display_options['fields']['nid']['alter']['nl2br'] = 0;
  $handler->display->display_options['fields']['nid']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['nid']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['nid']['alter']['more_link'] = 0;
  $handler->display->display_options['fields']['nid']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['nid']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['nid']['alter']['html'] = 0;
  $handler->display->display_options['fields']['nid']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['nid']['element_default_classes'] = 1;
  $handler->display->display_options['fields']['nid']['hide_empty'] = 0;
  $handler->display->display_options['fields']['nid']['empty_zero'] = 0;
  $handler->display->display_options['fields']['nid']['hide_alter_empty'] = 1;
  $handler->display->display_options['fields']['nid']['link_to_node'] = 0;
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
  $handler->display->display_options['fields']['title']['link_to_node'] = 0;
  /* Field: Content: body */
  $handler->display->display_options['fields']['field_body_subpage_slideshow']['id'] = 'field_body_subpage_slideshow';
  $handler->display->display_options['fields']['field_body_subpage_slideshow']['table'] = 'field_data_field_body_subpage_slideshow';
  $handler->display->display_options['fields']['field_body_subpage_slideshow']['field'] = 'field_body_subpage_slideshow';
  $handler->display->display_options['fields']['field_body_subpage_slideshow']['label'] = '';
  $handler->display->display_options['fields']['field_body_subpage_slideshow']['alter']['alter_text'] = 1;
  $handler->display->display_options['fields']['field_body_subpage_slideshow']['alter']['text'] = '[title] <br/>
[field_body_subpage_slideshow]';
  $handler->display->display_options['fields']['field_body_subpage_slideshow']['alter']['make_link'] = 1;
  $handler->display->display_options['fields']['field_body_subpage_slideshow']['alter']['path'] = 'node/[nid]';
  $handler->display->display_options['fields']['field_body_subpage_slideshow']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['field_body_subpage_slideshow']['alter']['external'] = 0;
  $handler->display->display_options['fields']['field_body_subpage_slideshow']['alter']['replace_spaces'] = 0;
  $handler->display->display_options['fields']['field_body_subpage_slideshow']['alter']['trim_whitespace'] = 0;
  $handler->display->display_options['fields']['field_body_subpage_slideshow']['alter']['nl2br'] = 0;
  $handler->display->display_options['fields']['field_body_subpage_slideshow']['alter']['max_length'] = '100';
  $handler->display->display_options['fields']['field_body_subpage_slideshow']['alter']['word_boundary'] = 0;
  $handler->display->display_options['fields']['field_body_subpage_slideshow']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['field_body_subpage_slideshow']['alter']['more_link'] = 0;
  $handler->display->display_options['fields']['field_body_subpage_slideshow']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['field_body_subpage_slideshow']['alter']['trim'] = 1;
  $handler->display->display_options['fields']['field_body_subpage_slideshow']['alter']['html'] = 0;
  $handler->display->display_options['fields']['field_body_subpage_slideshow']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_body_subpage_slideshow']['element_default_classes'] = 1;
  $handler->display->display_options['fields']['field_body_subpage_slideshow']['hide_empty'] = 0;
  $handler->display->display_options['fields']['field_body_subpage_slideshow']['empty_zero'] = 0;
  $handler->display->display_options['fields']['field_body_subpage_slideshow']['hide_alter_empty'] = 0;
  $handler->display->display_options['fields']['field_body_subpage_slideshow']['settings'] = array(
    'trim_length' => '600',
  );
  $handler->display->display_options['fields']['field_body_subpage_slideshow']['field_api_classes'] = 0;
  /* Field: Content: Images */
  $handler->display->display_options['fields']['field_slideshow_images']['id'] = 'field_slideshow_images';
  $handler->display->display_options['fields']['field_slideshow_images']['table'] = 'field_data_field_slideshow_images';
  $handler->display->display_options['fields']['field_slideshow_images']['field'] = 'field_slideshow_images';
  $handler->display->display_options['fields']['field_slideshow_images']['label'] = '';
  $handler->display->display_options['fields']['field_slideshow_images']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['field_slideshow_images']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['field_slideshow_images']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['field_slideshow_images']['alter']['external'] = 0;
  $handler->display->display_options['fields']['field_slideshow_images']['alter']['replace_spaces'] = 0;
  $handler->display->display_options['fields']['field_slideshow_images']['alter']['trim_whitespace'] = 0;
  $handler->display->display_options['fields']['field_slideshow_images']['alter']['nl2br'] = 0;
  $handler->display->display_options['fields']['field_slideshow_images']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['field_slideshow_images']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['field_slideshow_images']['alter']['more_link'] = 0;
  $handler->display->display_options['fields']['field_slideshow_images']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['field_slideshow_images']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['field_slideshow_images']['alter']['html'] = 0;
  $handler->display->display_options['fields']['field_slideshow_images']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_slideshow_images']['element_default_classes'] = 1;
  $handler->display->display_options['fields']['field_slideshow_images']['hide_empty'] = 0;
  $handler->display->display_options['fields']['field_slideshow_images']['empty_zero'] = 0;
  $handler->display->display_options['fields']['field_slideshow_images']['hide_alter_empty'] = 1;
  $handler->display->display_options['fields']['field_slideshow_images']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_slideshow_images']['settings'] = array(
    'image_style' => 'slideshow__mobile',
    'image_link' => '',
  );
  $handler->display->display_options['fields']['field_slideshow_images']['group_rows'] = 1;
  $handler->display->display_options['fields']['field_slideshow_images']['delta_limit'] = '1';
  $handler->display->display_options['fields']['field_slideshow_images']['delta_offset'] = '0';
  $handler->display->display_options['fields']['field_slideshow_images']['delta_reversed'] = 0;
  $handler->display->display_options['fields']['field_slideshow_images']['delta_first_last'] = 0;
  $handler->display->display_options['fields']['field_slideshow_images']['field_api_classes'] = 0;
  /* Field: Global: View result counter */
  $handler->display->display_options['fields']['counter']['id'] = 'counter';
  $handler->display->display_options['fields']['counter']['table'] = 'views';
  $handler->display->display_options['fields']['counter']['field'] = 'counter';
  $handler->display->display_options['fields']['counter']['label'] = '';
  $handler->display->display_options['fields']['counter']['exclude'] = TRUE;
  $handler->display->display_options['fields']['counter']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['counter']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['counter']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['counter']['alter']['external'] = 0;
  $handler->display->display_options['fields']['counter']['alter']['replace_spaces'] = 0;
  $handler->display->display_options['fields']['counter']['alter']['trim_whitespace'] = 0;
  $handler->display->display_options['fields']['counter']['alter']['nl2br'] = 0;
  $handler->display->display_options['fields']['counter']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['counter']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['counter']['alter']['more_link'] = 0;
  $handler->display->display_options['fields']['counter']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['counter']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['counter']['alter']['html'] = 0;
  $handler->display->display_options['fields']['counter']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['counter']['element_default_classes'] = 1;
  $handler->display->display_options['fields']['counter']['hide_empty'] = 0;
  $handler->display->display_options['fields']['counter']['empty_zero'] = 0;
  $handler->display->display_options['fields']['counter']['hide_alter_empty'] = 1;
  $handler->display->display_options['fields']['counter']['counter_start'] = '1';

  /* Display: mobile subpage slideshow */
  $handler = $view->new_display('block', 'mobile subpage slideshow', 'block_1');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['title'] = 'Subpage Slideshow - mobile';
  $handler->display->display_options['defaults']['pager'] = FALSE;
  $handler->display->display_options['pager']['type'] = 'some';
  $handler->display->display_options['pager']['options']['items_per_page'] = '1';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'default';
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['row_plugin'] = 'fields';
  $handler->display->display_options['defaults']['row_options'] = FALSE;
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Content: Images */
  $handler->display->display_options['fields']['field_slideshow_images']['id'] = 'field_slideshow_images';
  $handler->display->display_options['fields']['field_slideshow_images']['table'] = 'field_data_field_slideshow_images';
  $handler->display->display_options['fields']['field_slideshow_images']['field'] = 'field_slideshow_images';
  $handler->display->display_options['fields']['field_slideshow_images']['label'] = '';
  $handler->display->display_options['fields']['field_slideshow_images']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['field_slideshow_images']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['field_slideshow_images']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['field_slideshow_images']['alter']['external'] = 0;
  $handler->display->display_options['fields']['field_slideshow_images']['alter']['replace_spaces'] = 0;
  $handler->display->display_options['fields']['field_slideshow_images']['alter']['trim_whitespace'] = 0;
  $handler->display->display_options['fields']['field_slideshow_images']['alter']['nl2br'] = 0;
  $handler->display->display_options['fields']['field_slideshow_images']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['field_slideshow_images']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['field_slideshow_images']['alter']['more_link'] = 0;
  $handler->display->display_options['fields']['field_slideshow_images']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['field_slideshow_images']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['field_slideshow_images']['alter']['html'] = 0;
  $handler->display->display_options['fields']['field_slideshow_images']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_slideshow_images']['element_default_classes'] = 1;
  $handler->display->display_options['fields']['field_slideshow_images']['hide_empty'] = 0;
  $handler->display->display_options['fields']['field_slideshow_images']['empty_zero'] = 0;
  $handler->display->display_options['fields']['field_slideshow_images']['hide_alter_empty'] = 1;
  $handler->display->display_options['fields']['field_slideshow_images']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_slideshow_images']['settings'] = array(
    'image_style' => 'slideshow__mobile',
    'image_link' => '',
  );
  $handler->display->display_options['fields']['field_slideshow_images']['group_rows'] = 1;
  $handler->display->display_options['fields']['field_slideshow_images']['delta_limit'] = '1';
  $handler->display->display_options['fields']['field_slideshow_images']['delta_offset'] = '0';
  $handler->display->display_options['fields']['field_slideshow_images']['delta_reversed'] = 0;
  $handler->display->display_options['fields']['field_slideshow_images']['delta_first_last'] = 0;
  $handler->display->display_options['fields']['field_slideshow_images']['field_api_classes'] = 0;
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
  $export['subpage_slideshow'] = $view;

  return $export;
}
