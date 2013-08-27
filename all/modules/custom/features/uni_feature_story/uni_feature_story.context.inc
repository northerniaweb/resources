<?php
/**
 * @file
 * uni_feature_story.context.inc
 */

/**
 * Implements hook_context_default_contexts().
 */
function uni_feature_story_context_default_contexts() {
  $export = array();

  $context = new stdClass();
  $context->disabled = FALSE; /* Edit this to true to make a default context disabled initially */
  $context->api_version = 3;
  $context->name = 'inside_uni';
  $context->description = 'layout/context for inside uni page';
  $context->tag = 'INSIDE UNI';
  $context->conditions = array(
    'path' => array(
      'values' => array(
        'node/1822' => 'node/1822',
        'inside-uni' => 'inside-uni',
      ),
    ),
  );
  $context->reactions = array(
    'block' => array(
      'blocks' => array(
        'views-b63b973509c33f650dc1dd297528729c' => array(
          'module' => 'views',
          'delta' => 'b63b973509c33f650dc1dd297528729c',
          'region' => 'content',
          'weight' => '-10',
        ),
        'views-featured_events-block_1' => array(
          'module' => 'views',
          'delta' => 'featured_events-block_1',
          'region' => 'content',
          'weight' => '-9',
        ),
        'views-announcements-block' => array(
          'module' => 'views',
          'delta' => 'announcements-block',
          'region' => 'content',
          'weight' => '-8',
        ),
        'block-12' => array(
          'module' => 'block',
          'delta' => '12',
          'region' => 'sidebar_second',
          'weight' => '-49',
        ),
        'block-7' => array(
          'module' => 'block',
          'delta' => '7',
          'region' => 'sidebar_second',
          'weight' => '-48',
        ),
        'views-featured_news-block' => array(
          'module' => 'views',
          'delta' => 'featured_news-block',
          'region' => 'sidebar_second',
          'weight' => '-47',
        ),
        'views-featured_news-block_1' => array(
          'module' => 'views',
          'delta' => 'featured_news-block_1',
          'region' => 'sidebar_second',
          'weight' => '-46',
        ),
        'uni_news-uni_news' => array(
          'module' => 'uni_news',
          'delta' => 'uni_news',
          'region' => 'sidebar_second',
          'weight' => '-45',
        ),
        'block-5' => array(
          'module' => 'block',
          'delta' => '5',
          'region' => 'sidebar_second',
          'weight' => '-44',
        ),
      ),
    ),
    'theme_html' => array(
      'class' => 'inside-uni-bg-image',
    ),
  );
  $context->condition_mode = 0;

  // Translatables
  // Included for use with string extractors like potx.
  t('INSIDE UNI');
  t('layout/context for inside uni page');
  $export['inside_uni'] = $context;

  $context = new stdClass();
  $context->disabled = FALSE; /* Edit this to true to make a default context disabled initially */
  $context->api_version = 3;
  $context->name = 'sub_page';
  $context->description = 'layout/context for sub pages';
  $context->tag = 'disabled';
  $context->conditions = array(
    'path' => array(
      'values' => array(
        'node/1319' => 'node/1319',
      ),
    ),
  );
  $context->reactions = array(
    'block' => array(
      'blocks' => array(
        'views-b63b973509c33f650dc1dd297528729c' => array(
          'module' => 'views',
          'delta' => 'b63b973509c33f650dc1dd297528729c',
          'region' => 'content',
          'weight' => '-31',
        ),
        'views-featured_news-block' => array(
          'module' => 'views',
          'delta' => 'featured_news-block',
          'region' => 'sidebar_second',
          'weight' => '-10',
        ),
      ),
    ),
  );
  $context->condition_mode = 0;

  // Translatables
  // Included for use with string extractors like potx.
  t('disabled');
  t('layout/context for sub pages');
  $export['sub_page'] = $context;

  return $export;
}
