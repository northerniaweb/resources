<?php
/**
 * @file
 * uni_snapshots.views_default.inc
 */

/**
 * Implements hook_views_default_views().
 */
function uni_snapshots_views_default_views() {
  $export = array();

  $view = new view;
  $view->name = 'snapshots';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'node';
  $view->human_name = 'Snapshots';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['title'] = 'Photo Gallery';
  $handler->display->display_options['use_more'] = TRUE;
  $handler->display->display_options['use_more_text'] = 'More Snapshots';
  $handler->display->display_options['access']['type'] = 'perm';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['query']['options']['distinct'] = TRUE;
  $handler->display->display_options['query']['options']['query_comment'] = FALSE;
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['pager']['type'] = 'none';
  $handler->display->display_options['pager']['options']['offset'] = '';
  $handler->display->display_options['style_plugin'] = 'grid';
  $handler->display->display_options['style_options']['grouping'] = array(
    0 => array(
      'field' => 'created',
      'rendered' => 1,
      'rendered_strip' => 0,
    ),
  );
  $handler->display->display_options['style_options']['columns'] = '3';
  $handler->display->display_options['style_options']['fill_single_line'] = 1;
  $handler->display->display_options['row_plugin'] = 'fields';
  /* Relationship: Nodequeue: Queue */
  $handler->display->display_options['relationships']['nodequeue_rel']['id'] = 'nodequeue_rel';
  $handler->display->display_options['relationships']['nodequeue_rel']['table'] = 'node';
  $handler->display->display_options['relationships']['nodequeue_rel']['field'] = 'nodequeue_rel';
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
  /* Field: Content: Images */
  $handler->display->display_options['fields']['field_snapshot_images']['id'] = 'field_snapshot_images';
  $handler->display->display_options['fields']['field_snapshot_images']['table'] = 'field_data_field_snapshot_images';
  $handler->display->display_options['fields']['field_snapshot_images']['field'] = 'field_snapshot_images';
  $handler->display->display_options['fields']['field_snapshot_images']['label'] = '';
  $handler->display->display_options['fields']['field_snapshot_images']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['field_snapshot_images']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['field_snapshot_images']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['field_snapshot_images']['alter']['external'] = 0;
  $handler->display->display_options['fields']['field_snapshot_images']['alter']['replace_spaces'] = 0;
  $handler->display->display_options['fields']['field_snapshot_images']['alter']['trim_whitespace'] = 0;
  $handler->display->display_options['fields']['field_snapshot_images']['alter']['nl2br'] = 0;
  $handler->display->display_options['fields']['field_snapshot_images']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['field_snapshot_images']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['field_snapshot_images']['alter']['more_link'] = 0;
  $handler->display->display_options['fields']['field_snapshot_images']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['field_snapshot_images']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['field_snapshot_images']['alter']['html'] = 0;
  $handler->display->display_options['fields']['field_snapshot_images']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_snapshot_images']['element_default_classes'] = 1;
  $handler->display->display_options['fields']['field_snapshot_images']['hide_empty'] = 0;
  $handler->display->display_options['fields']['field_snapshot_images']['empty_zero'] = 0;
  $handler->display->display_options['fields']['field_snapshot_images']['hide_alter_empty'] = 1;
  $handler->display->display_options['fields']['field_snapshot_images']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_snapshot_images']['settings'] = array(
    'image_style' => 'snapshots',
    'image_link' => 'content',
  );
  $handler->display->display_options['fields']['field_snapshot_images']['group_rows'] = 1;
  $handler->display->display_options['fields']['field_snapshot_images']['delta_limit'] = '1';
  $handler->display->display_options['fields']['field_snapshot_images']['delta_offset'] = '0';
  $handler->display->display_options['fields']['field_snapshot_images']['delta_reversed'] = 0;
  $handler->display->display_options['fields']['field_snapshot_images']['delta_first_last'] = 0;
  $handler->display->display_options['fields']['field_snapshot_images']['separator'] = '';
  $handler->display->display_options['fields']['field_snapshot_images']['field_api_classes'] = 0;
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
    'snapshots' => 'snapshots',
  );

  /* Display: Snapshots Page */
  $handler = $view->new_display('page', 'Snapshots Page', 'page');
  $handler->display->display_options['defaults']['use_more'] = FALSE;
  $handler->display->display_options['defaults']['relationships'] = FALSE;
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
  /* Field: Content: Images */
  $handler->display->display_options['fields']['field_snapshot_images']['id'] = 'field_snapshot_images';
  $handler->display->display_options['fields']['field_snapshot_images']['table'] = 'field_data_field_snapshot_images';
  $handler->display->display_options['fields']['field_snapshot_images']['field'] = 'field_snapshot_images';
  $handler->display->display_options['fields']['field_snapshot_images']['label'] = '';
  $handler->display->display_options['fields']['field_snapshot_images']['alter']['alter_text'] = 1;
  $handler->display->display_options['fields']['field_snapshot_images']['alter']['text'] = '<a href="/snapshot/[nid]/[title]">[field_snapshot_images]</a>';
  $handler->display->display_options['fields']['field_snapshot_images']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['field_snapshot_images']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['field_snapshot_images']['alter']['external'] = 0;
  $handler->display->display_options['fields']['field_snapshot_images']['alter']['replace_spaces'] = 0;
  $handler->display->display_options['fields']['field_snapshot_images']['alter']['trim_whitespace'] = 0;
  $handler->display->display_options['fields']['field_snapshot_images']['alter']['nl2br'] = 0;
  $handler->display->display_options['fields']['field_snapshot_images']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['field_snapshot_images']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['field_snapshot_images']['alter']['more_link'] = 0;
  $handler->display->display_options['fields']['field_snapshot_images']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['field_snapshot_images']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['field_snapshot_images']['alter']['html'] = 0;
  $handler->display->display_options['fields']['field_snapshot_images']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_snapshot_images']['element_default_classes'] = 1;
  $handler->display->display_options['fields']['field_snapshot_images']['hide_empty'] = 0;
  $handler->display->display_options['fields']['field_snapshot_images']['empty_zero'] = 0;
  $handler->display->display_options['fields']['field_snapshot_images']['hide_alter_empty'] = 1;
  $handler->display->display_options['fields']['field_snapshot_images']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_snapshot_images']['settings'] = array(
    'image_style' => 'snapshots_gallery',
    'image_link' => '',
  );
  $handler->display->display_options['fields']['field_snapshot_images']['group_rows'] = 1;
  $handler->display->display_options['fields']['field_snapshot_images']['delta_limit'] = '1';
  $handler->display->display_options['fields']['field_snapshot_images']['delta_offset'] = '0';
  $handler->display->display_options['fields']['field_snapshot_images']['delta_reversed'] = 0;
  $handler->display->display_options['fields']['field_snapshot_images']['delta_first_last'] = 0;
  $handler->display->display_options['fields']['field_snapshot_images']['separator'] = '';
  $handler->display->display_options['fields']['field_snapshot_images']['field_api_classes'] = 0;
  /* Field: Content: Post date */
  $handler->display->display_options['fields']['created']['id'] = 'created';
  $handler->display->display_options['fields']['created']['table'] = 'node';
  $handler->display->display_options['fields']['created']['field'] = 'created';
  $handler->display->display_options['fields']['created']['label'] = '';
  $handler->display->display_options['fields']['created']['exclude'] = TRUE;
  $handler->display->display_options['fields']['created']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['created']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['created']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['created']['alter']['external'] = 0;
  $handler->display->display_options['fields']['created']['alter']['replace_spaces'] = 0;
  $handler->display->display_options['fields']['created']['alter']['trim_whitespace'] = 0;
  $handler->display->display_options['fields']['created']['alter']['nl2br'] = 0;
  $handler->display->display_options['fields']['created']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['created']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['created']['alter']['more_link'] = 0;
  $handler->display->display_options['fields']['created']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['created']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['created']['alter']['html'] = 0;
  $handler->display->display_options['fields']['created']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['created']['element_default_classes'] = 1;
  $handler->display->display_options['fields']['created']['hide_empty'] = 0;
  $handler->display->display_options['fields']['created']['empty_zero'] = 0;
  $handler->display->display_options['fields']['created']['hide_alter_empty'] = 1;
  $handler->display->display_options['fields']['created']['date_format'] = 'custom';
  $handler->display->display_options['fields']['created']['custom_date_format'] = 'Y';
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title_1']['id'] = 'title_1';
  $handler->display->display_options['fields']['title_1']['table'] = 'node';
  $handler->display->display_options['fields']['title_1']['field'] = 'title';
  $handler->display->display_options['fields']['title_1']['label'] = '';
  $handler->display->display_options['fields']['title_1']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['title_1']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['title_1']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['title_1']['alter']['external'] = 0;
  $handler->display->display_options['fields']['title_1']['alter']['replace_spaces'] = 0;
  $handler->display->display_options['fields']['title_1']['alter']['trim_whitespace'] = 0;
  $handler->display->display_options['fields']['title_1']['alter']['nl2br'] = 0;
  $handler->display->display_options['fields']['title_1']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['title_1']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['title_1']['alter']['more_link'] = 0;
  $handler->display->display_options['fields']['title_1']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['title_1']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['title_1']['alter']['html'] = 0;
  $handler->display->display_options['fields']['title_1']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['title_1']['element_default_classes'] = 1;
  $handler->display->display_options['fields']['title_1']['hide_empty'] = 0;
  $handler->display->display_options['fields']['title_1']['empty_zero'] = 0;
  $handler->display->display_options['fields']['title_1']['hide_alter_empty'] = 1;
  $handler->display->display_options['fields']['title_1']['link_to_node'] = 0;
  $handler->display->display_options['path'] = 'resources/gallery';

  /* Display: Item Block */
  $handler = $view->new_display('block', 'Item Block', 'block');
  $handler->display->display_options['defaults']['use_more'] = FALSE;
  $handler->display->display_options['use_more'] = TRUE;
  $handler->display->display_options['defaults']['pager'] = FALSE;
  $handler->display->display_options['pager']['type'] = 'some';
  $handler->display->display_options['pager']['options']['items_per_page'] = '6';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'jcarousel';
  $handler->display->display_options['style_options']['wrap'] = 'circular';
  $handler->display->display_options['style_options']['skin'] = 'uni-glance';
  $handler->display->display_options['style_options']['visible'] = '3';
  $handler->display->display_options['style_options']['auto'] = '0';
  $handler->display->display_options['style_options']['autoPause'] = 1;
  $handler->display->display_options['style_options']['easing'] = '';
  $handler->display->display_options['style_options']['vertical'] = 0;
  $handler->display->display_options['style_options']['navigation'] = 'after';
  $handler->display->display_options['style_options']['ajax'] = 1;
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['row_plugin'] = 'fields';
  $handler->display->display_options['defaults']['row_options'] = FALSE;
  $handler->display->display_options['defaults']['footer'] = FALSE;
  /* Footer: Global: Text area */
  $handler->display->display_options['footer']['area']['id'] = 'area';
  $handler->display->display_options['footer']['area']['table'] = 'views';
  $handler->display->display_options['footer']['area']['field'] = 'area';
  $handler->display->display_options['footer']['area']['empty'] = FALSE;
  $handler->display->display_options['footer']['area']['content'] = '<a href="/resources/gallery"> More Snapshots »</a>';
  $handler->display->display_options['footer']['area']['format'] = 'full_html';
  $handler->display->display_options['footer']['area']['tokenize'] = 0;
  $handler->display->display_options['defaults']['relationships'] = FALSE;
  /* Relationship: Nodequeue: Queue */
  $handler->display->display_options['relationships']['nodequeue_rel']['id'] = 'nodequeue_rel';
  $handler->display->display_options['relationships']['nodequeue_rel']['table'] = 'node';
  $handler->display->display_options['relationships']['nodequeue_rel']['field'] = 'nodequeue_rel';
  $handler->display->display_options['relationships']['nodequeue_rel']['label'] = 'Snapshots Queue';
  $handler->display->display_options['relationships']['nodequeue_rel']['required'] = 1;
  $handler->display->display_options['relationships']['nodequeue_rel']['limit'] = 0;
  $handler->display->display_options['relationships']['nodequeue_rel']['names'] = array(
    'feature_story' => 0,
    'marketing_messages' => 0,
    'snapshots' => 0,
  );
  $handler->display->display_options['defaults']['fields'] = FALSE;
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
  /* Field: Content: Images */
  $handler->display->display_options['fields']['field_snapshot_images']['id'] = 'field_snapshot_images';
  $handler->display->display_options['fields']['field_snapshot_images']['table'] = 'field_data_field_snapshot_images';
  $handler->display->display_options['fields']['field_snapshot_images']['field'] = 'field_snapshot_images';
  $handler->display->display_options['fields']['field_snapshot_images']['label'] = '';
  $handler->display->display_options['fields']['field_snapshot_images']['alter']['alter_text'] = 1;
  $handler->display->display_options['fields']['field_snapshot_images']['alter']['text'] = '<a href="/gallery?nid=[nid]&fid=[field_snapshot_images-fid]" rel="lightmodal[[nid]][[title]]">[field_snapshot_images]</a>';
  $handler->display->display_options['fields']['field_snapshot_images']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['field_snapshot_images']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['field_snapshot_images']['alter']['external'] = 0;
  $handler->display->display_options['fields']['field_snapshot_images']['alter']['replace_spaces'] = 0;
  $handler->display->display_options['fields']['field_snapshot_images']['alter']['trim_whitespace'] = 0;
  $handler->display->display_options['fields']['field_snapshot_images']['alter']['nl2br'] = 0;
  $handler->display->display_options['fields']['field_snapshot_images']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['field_snapshot_images']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['field_snapshot_images']['alter']['more_link'] = 0;
  $handler->display->display_options['fields']['field_snapshot_images']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['field_snapshot_images']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['field_snapshot_images']['alter']['html'] = 0;
  $handler->display->display_options['fields']['field_snapshot_images']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_snapshot_images']['element_default_classes'] = 1;
  $handler->display->display_options['fields']['field_snapshot_images']['hide_empty'] = 0;
  $handler->display->display_options['fields']['field_snapshot_images']['empty_zero'] = 0;
  $handler->display->display_options['fields']['field_snapshot_images']['hide_alter_empty'] = 1;
  $handler->display->display_options['fields']['field_snapshot_images']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_snapshot_images']['type'] = 'lightbox2__lightbox__75px_square__large';
  $handler->display->display_options['fields']['field_snapshot_images']['settings'] = array(
    'image_style' => '75px_square',
    'image_link' => '',
  );
  $handler->display->display_options['fields']['field_snapshot_images']['group_rows'] = 1;
  $handler->display->display_options['fields']['field_snapshot_images']['delta_limit'] = '1';
  $handler->display->display_options['fields']['field_snapshot_images']['delta_offset'] = '0';
  $handler->display->display_options['fields']['field_snapshot_images']['delta_reversed'] = 0;
  $handler->display->display_options['fields']['field_snapshot_images']['delta_first_last'] = 0;
  $handler->display->display_options['fields']['field_snapshot_images']['separator'] = '';
  $handler->display->display_options['fields']['field_snapshot_images']['field_api_classes'] = 0;
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
    'snapshots' => 'snapshots',
  );
  /* Filter criterion: Content: Schedule -  start date (field_snapshot_schedule) */
  $handler->display->display_options['filters']['field_snapshot_schedule_value']['id'] = 'field_snapshot_schedule_value';
  $handler->display->display_options['filters']['field_snapshot_schedule_value']['table'] = 'field_data_field_snapshot_schedule';
  $handler->display->display_options['filters']['field_snapshot_schedule_value']['field'] = 'field_snapshot_schedule_value';
  $handler->display->display_options['filters']['field_snapshot_schedule_value']['operator'] = '<=';
  $handler->display->display_options['filters']['field_snapshot_schedule_value']['default_date'] = 'now';
  /* Filter criterion: Content: Schedule - end date (field_snapshot_schedule:value2) */
  $handler->display->display_options['filters']['field_snapshot_schedule_value2']['id'] = 'field_snapshot_schedule_value2';
  $handler->display->display_options['filters']['field_snapshot_schedule_value2']['table'] = 'field_data_field_snapshot_schedule';
  $handler->display->display_options['filters']['field_snapshot_schedule_value2']['field'] = 'field_snapshot_schedule_value2';
  $handler->display->display_options['filters']['field_snapshot_schedule_value2']['operator'] = '>=';
  $handler->display->display_options['filters']['field_snapshot_schedule_value2']['default_date'] = 'now';
  $handler->display->display_options['block_description'] = 'View: Snapshots';

  /* Display: Gallery Page */
  $handler = $view->new_display('page', 'Gallery Page', 'page_1');
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
    'title' => 0,
    'delta' => 0,
    'field_snapshot_images' => 0,
  );
  $handler->display->display_options['style_options']['widgets']['top']['views_slideshow_controls']['weight'] = '1';
  $handler->display->display_options['style_options']['widgets']['top']['views_slideshow_controls']['type'] = 'views_slideshow_controls_text';
  $handler->display->display_options['style_options']['widgets']['top']['views_slideshow_slide_counter']['weight'] = '1';
  $handler->display->display_options['style_options']['widgets']['bottom']['views_slideshow_pager']['weight'] = '1';
  $handler->display->display_options['style_options']['widgets']['bottom']['views_slideshow_pager']['type'] = 'views_slideshow_pager_fields';
  $handler->display->display_options['style_options']['widgets']['bottom']['views_slideshow_pager']['views_slideshow_pager_fields_fields'] = array(
    'title' => 0,
    'delta' => 0,
    'field_snapshot_images' => 0,
  );
  $handler->display->display_options['style_options']['widgets']['bottom']['views_slideshow_controls']['enable'] = 1;
  $handler->display->display_options['style_options']['widgets']['bottom']['views_slideshow_controls']['weight'] = '1';
  $handler->display->display_options['style_options']['widgets']['bottom']['views_slideshow_controls']['type'] = 'views_slideshow_controls_text';
  $handler->display->display_options['style_options']['widgets']['bottom']['views_slideshow_slide_counter']['weight'] = '1';
  $handler->display->display_options['style_options']['views_slideshow_cycle']['transition_advanced'] = 1;
  $handler->display->display_options['style_options']['views_slideshow_cycle']['timeout'] = '5000';
  $handler->display->display_options['style_options']['views_slideshow_cycle']['speed'] = '700';
  $handler->display->display_options['style_options']['views_slideshow_cycle']['delay'] = '0';
  $handler->display->display_options['style_options']['views_slideshow_cycle']['pause_on_click'] = 1;
  $handler->display->display_options['style_options']['views_slideshow_cycle']['action_advanced'] = 1;
  $handler->display->display_options['style_options']['views_slideshow_cycle']['start_paused'] = 1;
  $handler->display->display_options['style_options']['views_slideshow_cycle']['remember_slide_days'] = '1';
  $handler->display->display_options['style_options']['views_slideshow_cycle']['items_per_slide'] = '1';
  $handler->display->display_options['style_options']['views_slideshow_cycle']['wait_for_image_load_timeout'] = '0';
  $handler->display->display_options['style_options']['views_slideshow_cycle']['cleartype'] = 0;
  $handler->display->display_options['style_options']['views_slideshow_cycle']['cleartypenobg'] = 0;
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['row_plugin'] = 'fields';
  $handler->display->display_options['defaults']['row_options'] = FALSE;
  $handler->display->display_options['defaults']['fields'] = FALSE;
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
  /* Field: Content: Images (field_snapshot_images:delta) */
  $handler->display->display_options['fields']['delta']['id'] = 'delta';
  $handler->display->display_options['fields']['delta']['table'] = 'field_data_field_snapshot_images';
  $handler->display->display_options['fields']['delta']['field'] = 'delta';
  $handler->display->display_options['fields']['delta']['label'] = '';
  $handler->display->display_options['fields']['delta']['exclude'] = TRUE;
  $handler->display->display_options['fields']['delta']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['delta']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['delta']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['delta']['alter']['external'] = 0;
  $handler->display->display_options['fields']['delta']['alter']['replace_spaces'] = 0;
  $handler->display->display_options['fields']['delta']['alter']['trim_whitespace'] = 0;
  $handler->display->display_options['fields']['delta']['alter']['nl2br'] = 0;
  $handler->display->display_options['fields']['delta']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['delta']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['delta']['alter']['more_link'] = 0;
  $handler->display->display_options['fields']['delta']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['delta']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['delta']['alter']['html'] = 0;
  $handler->display->display_options['fields']['delta']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['delta']['element_default_classes'] = 1;
  $handler->display->display_options['fields']['delta']['hide_empty'] = 0;
  $handler->display->display_options['fields']['delta']['empty_zero'] = 0;
  $handler->display->display_options['fields']['delta']['hide_alter_empty'] = 1;
  $handler->display->display_options['fields']['delta']['separator'] = '';
  $handler->display->display_options['fields']['delta']['format_plural'] = 0;
  /* Field: Content: Images */
  $handler->display->display_options['fields']['field_snapshot_images']['id'] = 'field_snapshot_images';
  $handler->display->display_options['fields']['field_snapshot_images']['table'] = 'field_data_field_snapshot_images';
  $handler->display->display_options['fields']['field_snapshot_images']['field'] = 'field_snapshot_images';
  $handler->display->display_options['fields']['field_snapshot_images']['label'] = '';
  $handler->display->display_options['fields']['field_snapshot_images']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['field_snapshot_images']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['field_snapshot_images']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['field_snapshot_images']['alter']['external'] = 0;
  $handler->display->display_options['fields']['field_snapshot_images']['alter']['replace_spaces'] = 0;
  $handler->display->display_options['fields']['field_snapshot_images']['alter']['trim_whitespace'] = 0;
  $handler->display->display_options['fields']['field_snapshot_images']['alter']['nl2br'] = 0;
  $handler->display->display_options['fields']['field_snapshot_images']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['field_snapshot_images']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['field_snapshot_images']['alter']['more_link'] = 0;
  $handler->display->display_options['fields']['field_snapshot_images']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['field_snapshot_images']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['field_snapshot_images']['alter']['html'] = 0;
  $handler->display->display_options['fields']['field_snapshot_images']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_snapshot_images']['element_default_classes'] = 1;
  $handler->display->display_options['fields']['field_snapshot_images']['hide_empty'] = 0;
  $handler->display->display_options['fields']['field_snapshot_images']['empty_zero'] = 0;
  $handler->display->display_options['fields']['field_snapshot_images']['hide_alter_empty'] = 1;
  $handler->display->display_options['fields']['field_snapshot_images']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_snapshot_images']['settings'] = array(
    'image_style' => '',
    'image_link' => '',
  );
  $handler->display->display_options['fields']['field_snapshot_images']['group_rows'] = 0;
  $handler->display->display_options['fields']['field_snapshot_images']['delta_limit'] = '0';
  $handler->display->display_options['fields']['field_snapshot_images']['delta_offset'] = '0';
  $handler->display->display_options['fields']['field_snapshot_images']['delta_reversed'] = 0;
  $handler->display->display_options['fields']['field_snapshot_images']['delta_first_last'] = 0;
  $handler->display->display_options['fields']['field_snapshot_images']['separator'] = '';
  $handler->display->display_options['fields']['field_snapshot_images']['field_api_classes'] = 0;
  $handler->display->display_options['defaults']['arguments'] = FALSE;
  /* Contextual filter: Content: Nid */
  $handler->display->display_options['arguments']['nid']['id'] = 'nid';
  $handler->display->display_options['arguments']['nid']['table'] = 'node';
  $handler->display->display_options['arguments']['nid']['field'] = 'nid';
  $handler->display->display_options['arguments']['nid']['default_action'] = 'default';
  $handler->display->display_options['arguments']['nid']['default_argument_type'] = 'php';
  $handler->display->display_options['arguments']['nid']['default_argument_options']['code'] = 'return (int) $_GET[\'nid\'];';
  $handler->display->display_options['arguments']['nid']['default_argument_skip_url'] = 0;
  $handler->display->display_options['arguments']['nid']['summary']['number_of_records'] = '0';
  $handler->display->display_options['arguments']['nid']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['nid']['summary_options']['items_per_page'] = '25';
  $handler->display->display_options['arguments']['nid']['break_phrase'] = 0;
  $handler->display->display_options['arguments']['nid']['not'] = 0;
  $handler->display->display_options['path'] = 'gallery';

  /* Display: Page 2 */
  $handler = $view->new_display('page', 'Page 2', 'page_2');
  $handler->display->display_options['defaults']['relationships'] = FALSE;
  $handler->display->display_options['defaults']['fields'] = FALSE;
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
  /* Field: Content: Images */
  $handler->display->display_options['fields']['field_snapshot_images']['id'] = 'field_snapshot_images';
  $handler->display->display_options['fields']['field_snapshot_images']['table'] = 'field_data_field_snapshot_images';
  $handler->display->display_options['fields']['field_snapshot_images']['field'] = 'field_snapshot_images';
  $handler->display->display_options['fields']['field_snapshot_images']['label'] = '';
  $handler->display->display_options['fields']['field_snapshot_images']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['field_snapshot_images']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['field_snapshot_images']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['field_snapshot_images']['alter']['external'] = 0;
  $handler->display->display_options['fields']['field_snapshot_images']['alter']['replace_spaces'] = 0;
  $handler->display->display_options['fields']['field_snapshot_images']['alter']['trim_whitespace'] = 0;
  $handler->display->display_options['fields']['field_snapshot_images']['alter']['nl2br'] = 0;
  $handler->display->display_options['fields']['field_snapshot_images']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['field_snapshot_images']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['field_snapshot_images']['alter']['more_link'] = 0;
  $handler->display->display_options['fields']['field_snapshot_images']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['field_snapshot_images']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['field_snapshot_images']['alter']['html'] = 0;
  $handler->display->display_options['fields']['field_snapshot_images']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_snapshot_images']['element_default_classes'] = 1;
  $handler->display->display_options['fields']['field_snapshot_images']['hide_empty'] = 0;
  $handler->display->display_options['fields']['field_snapshot_images']['empty_zero'] = 0;
  $handler->display->display_options['fields']['field_snapshot_images']['hide_alter_empty'] = 1;
  $handler->display->display_options['fields']['field_snapshot_images']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_snapshot_images']['type'] = 'lightbox2__lightbox__snapshots_gallery__original';
  $handler->display->display_options['fields']['field_snapshot_images']['settings'] = array(
    'image_style' => 'snapshots_gallery',
    'image_link' => 'content',
  );
  $handler->display->display_options['fields']['field_snapshot_images']['group_rows'] = 0;
  $handler->display->display_options['fields']['field_snapshot_images']['delta_limit'] = '0';
  $handler->display->display_options['fields']['field_snapshot_images']['delta_offset'] = '0';
  $handler->display->display_options['fields']['field_snapshot_images']['delta_reversed'] = 0;
  $handler->display->display_options['fields']['field_snapshot_images']['delta_first_last'] = 0;
  $handler->display->display_options['fields']['field_snapshot_images']['separator'] = '';
  $handler->display->display_options['fields']['field_snapshot_images']['field_api_classes'] = 0;
  $handler->display->display_options['defaults']['arguments'] = FALSE;
  /* Contextual filter: Content: Nid */
  $handler->display->display_options['arguments']['nid']['id'] = 'nid';
  $handler->display->display_options['arguments']['nid']['table'] = 'node';
  $handler->display->display_options['arguments']['nid']['field'] = 'nid';
  $handler->display->display_options['arguments']['nid']['default_action'] = 'not found';
  $handler->display->display_options['arguments']['nid']['default_argument_type'] = 'fixed';
  $handler->display->display_options['arguments']['nid']['default_argument_skip_url'] = 0;
  $handler->display->display_options['arguments']['nid']['summary']['number_of_records'] = '0';
  $handler->display->display_options['arguments']['nid']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['nid']['summary_options']['items_per_page'] = '25';
  $handler->display->display_options['arguments']['nid']['break_phrase'] = 0;
  $handler->display->display_options['arguments']['nid']['not'] = 0;
  /* Contextual filter: Content: Title */
  $handler->display->display_options['arguments']['title']['id'] = 'title';
  $handler->display->display_options['arguments']['title']['table'] = 'node';
  $handler->display->display_options['arguments']['title']['field'] = 'title';
  $handler->display->display_options['arguments']['title']['default_action'] = 'not found';
  $handler->display->display_options['arguments']['title']['title_enable'] = 1;
  $handler->display->display_options['arguments']['title']['title'] = 'Snapshots: %2';
  $handler->display->display_options['arguments']['title']['default_argument_type'] = 'fixed';
  $handler->display->display_options['arguments']['title']['default_argument_skip_url'] = 0;
  $handler->display->display_options['arguments']['title']['summary']['number_of_records'] = '0';
  $handler->display->display_options['arguments']['title']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['title']['summary_options']['items_per_page'] = '25';
  $handler->display->display_options['arguments']['title']['glossary'] = 0;
  $handler->display->display_options['arguments']['title']['limit'] = '0';
  $handler->display->display_options['arguments']['title']['transform_dash'] = 0;
  $handler->display->display_options['arguments']['title']['break_phrase'] = 0;
  $handler->display->display_options['path'] = 'snapshot/%/%';
  $export['snapshots'] = $view;

  return $export;
}
