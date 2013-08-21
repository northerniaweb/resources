<?php
/**
 * @file
 * uni_student_life.context.inc
 */

/**
 * Implements hook_context_default_contexts().
 */
function uni_student_life_context_default_contexts() {
  $export = array();

  $context = new stdClass();
  $context->disabled = FALSE; /* Edit this to true to make a default context disabled initially */
  $context->api_version = 3;
  $context->name = 'student_life';
  $context->description = 'layout/context for sub pages';
  $context->tag = 'sub pages';
  $context->conditions = array(
    'path' => array(
      'values' => array(
        'resources/academics' => 'resources/academics',
        'resources/get-to-know-uni' => 'resources/get-to-know-uni',
        'resources/parents' => 'resources/parents',
        'resources/prospective' => 'resources/prospective',
      ),
    ),
  );
  $context->reactions = array(
    'block' => array(
      'blocks' => array(
        'views-subpage_slideshow-block' => array(
          'module' => 'views',
          'delta' => 'subpage_slideshow-block',
          'region' => 'content',
          'weight' => '-30',
        ),
        'views-subpage_slideshow-block_1' => array(
          'module' => 'views',
          'delta' => 'subpage_slideshow-block_1',
          'region' => 'content',
          'weight' => '-30',
        ),
        'views-student_life-block' => array(
          'module' => 'views',
          'delta' => 'student_life-block',
          'region' => 'content',
          'weight' => '-10',
        ),
        'menu_block-2' => array(
          'module' => 'menu_block',
          'delta' => 2,
          'region' => 'sidebar_second',
          'weight' => '-10',
        ),
        'views-feature_callout-block' => array(
          'module' => 'views',
          'delta' => 'feature_callout-block',
          'region' => 'sidebar_second',
          'weight' => '-9',
        ),
        'views-promotional_callout-block' => array(
          'module' => 'views',
          'delta' => 'promotional_callout-block',
          'region' => 'sidebar_second',
          'weight' => '-8',
        ),
      ),
    ),
  );
  $context->condition_mode = 0;

  // Translatables
  // Included for use with string extractors like potx.
  t('layout/context for sub pages');
  t('sub pages');
  $export['student_life'] = $context;

  return $export;
}
