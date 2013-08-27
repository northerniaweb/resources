<?php
/**
 * @file
 * uni_contexts_and_basic_pages.context.inc
 */

/**
 * Implements hook_context_default_contexts().
 */
function uni_contexts_and_basic_pages_context_default_contexts() {
  $export = array();

  $context = new stdClass();
  $context->disabled = FALSE; /* Edit this to true to make a default context disabled initially */
  $context->api_version = 3;
  $context->name = 'current_students';
  $context->description = 'current students layout';
  $context->tag = 'current students';
  $context->conditions = array(
    'path' => array(
      'values' => array(
        'node/1338' => 'node/1338',
        'resources/current' => 'resources/current',
      ),
    ),
  );
  $context->reactions = array(
    'block' => array(
      'blocks' => array(
        'views-b17fa3a3247640cb677281d61509b035' => array(
          'module' => 'views',
          'delta' => 'b17fa3a3247640cb677281d61509b035',
          'region' => 'content',
          'weight' => '-10',
        ),
        'views-student_life-block_1' => array(
          'module' => 'views',
          'delta' => 'student_life-block_1',
          'region' => 'content',
          'weight' => '-9',
        ),
        'block-6' => array(
          'module' => 'block',
          'delta' => 6,
          'region' => 'content',
          'weight' => '-6',
        ),
        'views-kudos_archive-block_1' => array(
          'module' => 'views',
          'delta' => 'kudos_archive-block_1',
          'region' => 'content',
          'weight' => '-5',
        ),
        'block-7' => array(
          'module' => 'block',
          'delta' => 7,
          'region' => 'sidebar_second',
          'weight' => '-10',
        ),
        'views-announcements-block' => array(
          'module' => 'views',
          'delta' => 'announcements-block',
          'region' => 'sidebar_second',
          'weight' => '-9',
        ),
        'views-featured_news-block_1' => array(
          'module' => 'views',
          'delta' => 'featured_news-block_1',
          'region' => 'sidebar_second',
          'weight' => '-8',
        ),
        'block-5' => array(
          'module' => 'block',
          'delta' => 5,
          'region' => 'sidebar_second',
          'weight' => '-7',
        ),
      ),
    ),
  );
  $context->condition_mode = 0;

  // Translatables
  // Included for use with string extractors like potx.
  t('current students');
  t('current students layout');
  $export['current_students'] = $context;

  $context = new stdClass();
  $context->disabled = FALSE; /* Edit this to true to make a default context disabled initially */
  $context->api_version = 3;
  $context->name = 'faculty_staff';
  $context->description = 'faculty and staff layout page';
  $context->tag = 'faculty';
  $context->conditions = array(
    'path' => array(
      'values' => array(
        'resources/faculty-staff' => 'resources/faculty-staff',
      ),
    ),
  );
  $context->reactions = array(
    'block' => array(
      'blocks' => array(
        'views-5f0fbbe02645391cb29c895149038323' => array(
          'module' => 'views',
          'delta' => '5f0fbbe02645391cb29c895149038323',
          'region' => 'content',
          'weight' => '-10',
        ),
        'views-student_life-block_1' => array(
          'module' => 'views',
          'delta' => 'student_life-block_1',
          'region' => 'content',
          'weight' => '-9',
        ),
        'block-6' => array(
          'module' => 'block',
          'delta' => 6,
          'region' => 'content',
          'weight' => '-8',
        ),
        'views-kudos_archive-block_1' => array(
          'module' => 'views',
          'delta' => 'kudos_archive-block_1',
          'region' => 'content',
          'weight' => '-6',
        ),
        'block-7' => array(
          'module' => 'block',
          'delta' => 7,
          'region' => 'sidebar_second',
          'weight' => '-10',
        ),
        'views-announcements-block' => array(
          'module' => 'views',
          'delta' => 'announcements-block',
          'region' => 'sidebar_second',
          'weight' => '-9',
        ),
        'views-featured_news-block_1' => array(
          'module' => 'views',
          'delta' => 'featured_news-block_1',
          'region' => 'sidebar_second',
          'weight' => '-8',
        ),
        'block-5' => array(
          'module' => 'block',
          'delta' => 5,
          'region' => 'sidebar_second',
          'weight' => '-7',
        ),
      ),
    ),
  );
  $context->condition_mode = 1;

  // Translatables
  // Included for use with string extractors like potx.
  t('faculty');
  t('faculty and staff layout page');
  $export['faculty_staff'] = $context;

  $context = new stdClass();
  $context->disabled = FALSE; /* Edit this to true to make a default context disabled initially */
  $context->api_version = 3;
  $context->name = 'homepage';
  $context->description = 'homepage ';
  $context->tag = 'homepage';
  $context->conditions = array(
    'path' => array(
      'values' => array(
        'node/1392' => 'node/1392',
        '<front>' => '<front>',
        'uni.prometdev.com' => 'uni.prometdev.com',
      ),
    ),
  );
  $context->reactions = array(
    'block' => array(
      'blocks' => array(
        'views-uni_news_announcements-block' => array(
          'module' => 'views',
          'delta' => 'uni_news_announcements-block',
          'region' => 'content',
          'weight' => '-10',
        ),
        'views-featured_events-block' => array(
          'module' => 'views',
          'delta' => 'featured_events-block',
          'region' => 'content',
          'weight' => '-9',
        ),
        'views-snapshots-block' => array(
          'module' => 'views',
          'delta' => 'snapshots-block',
          'region' => 'content',
          'weight' => '-8',
        ),
        'block-4' => array(
          'module' => 'block',
          'delta' => 4,
          'region' => 'content',
          'weight' => '-7',
        ),
        'menu-menu-getting-started' => array(
          'module' => 'menu',
          'delta' => 'menu-getting-started',
          'region' => 'sidebar_first',
          'weight' => '-10',
        ),
        'menu-menu-info-for-menu' => array(
          'module' => 'menu',
          'delta' => 'menu-info-for-menu',
          'region' => 'sidebar_first',
          'weight' => '-8',
        ),
        'views-marketing_messages-block' => array(
          'module' => 'views',
          'delta' => 'marketing_messages-block',
          'region' => 'preface_first',
          'weight' => '-28',
        ),
        'views-feature_story_on_hompage-block' => array(
          'module' => 'views',
          'delta' => 'feature_story_on_hompage-block',
          'region' => 'preface_first',
          'weight' => '-27',
        ),
        'views-uni_at_a_glance-block' => array(
          'module' => 'views',
          'delta' => 'uni_at_a_glance-block',
          'region' => 'postscript_fourth',
          'weight' => '-10',
        ),
      ),
    ),
    'delta' => array(
      'delta_template' => 'homepage',
    ),
  );
  $context->condition_mode = 0;

  // Translatables
  // Included for use with string extractors like potx.
  t('homepage');
  t('homepage ');
  $export['homepage'] = $context;

  $context = new stdClass();
  $context->disabled = FALSE; /* Edit this to true to make a default context disabled initially */
  $context->api_version = 3;
  $context->name = 'page-titles';
  $context->description = 'page titles';
  $context->tag = 'page tiles';
  $context->conditions = array(
    'path' => array(
      'values' => array(
        '*' => '*',
        '~<front>' => '~<front>',
        '~resources/inside-uni' => '~resources/inside-uni',
        '~resources/current' => '~resources/current',
        '~resources/faculty-staff' => '~resources/faculty-staff',
      ),
    ),
  );
  $context->reactions = array(
    'block' => array(
      'blocks' => array(
        'delta_blocks-page-title' => array(
          'module' => 'delta_blocks',
          'delta' => 'page-title',
          'region' => 'preface_third',
          'weight' => '-10',
        ),
      ),
    ),
  );
  $context->condition_mode = 1;

  // Translatables
  // Included for use with string extractors like potx.
  t('page tiles');
  t('page titles');
  $export['page-titles'] = $context;

  $context = new stdClass();
  $context->disabled = FALSE; /* Edit this to true to make a default context disabled initially */
  $context->api_version = 3;
  $context->name = 'right_sidebar';
  $context->description = 'right sidebar ';
  $context->tag = 'right column';
  $context->conditions = array(
    'path' => array(
      'values' => array(
        'resources/alumni' => 'resources/alumni',
        'resources/studentlife' => 'resources/studentlife',
        'resources/academics' => 'resources/academics',
        'resources/get-to-know-uni' => 'resources/get-to-know-uni',
        'resources/parents' => 'resources/parents',
        'resources/prospective' => 'resources/prospective',
        'node/1319' => 'node/1319',
      ),
    ),
  );
  $context->reactions = array(
    'delta' => array(
      'delta_template' => 'right_sidebar',
    ),
    'theme_html' => array(
      'class' => 'sidebar-second',
    ),
  );
  $context->condition_mode = 0;

  // Translatables
  // Included for use with string extractors like potx.
  t('right column');
  t('right sidebar ');
  $export['right_sidebar'] = $context;

  $context = new stdClass();
  $context->disabled = FALSE; /* Edit this to true to make a default context disabled initially */
  $context->api_version = 3;
  $context->name = 'secondary_sidebar_menu';
  $context->description = 'sidebar menus';
  $context->tag = 'sidebar menu';
  $context->conditions = array(
    'path' => array(
      'values' => array(
        'resources/visit-uni' => 'resources/visit-uni',
        'resources/contact' => 'resources/contact',
        'resources/capstone' => 'resources/capstone',
        'resources/service-learning' => 'resources/service-learning',
        'resources/consumer-info' => 'resources/consumer-info',
      ),
    ),
  );
  $context->reactions = array(
    'block' => array(
      'blocks' => array(
        'menu_block-1' => array(
          'module' => 'menu_block',
          'delta' => 1,
          'region' => 'sidebar_second',
          'weight' => '-10',
        ),
      ),
    ),
  );
  $context->condition_mode = 0;

  // Translatables
  // Included for use with string extractors like potx.
  t('sidebar menu');
  t('sidebar menus');
  $export['secondary_sidebar_menu'] = $context;

  $context = new stdClass();
  $context->disabled = FALSE; /* Edit this to true to make a default context disabled initially */
  $context->api_version = 3;
  $context->name = 'sitewide';
  $context->description = 'sitewide context/layout';
  $context->tag = 'sitewide';
  $context->conditions = array(
    'sitewide' => array(
      'values' => array(
        1 => 1,
      ),
    ),
  );
  $context->reactions = array(
    'block' => array(
      'blocks' => array(
        'menu-menu-secondary-menu' => array(
          'module' => 'menu',
          'delta' => 'menu-secondary-menu',
          'region' => 'user_second',
          'weight' => '-26',
        ),
        'search-form' => array(
          'module' => 'search',
          'delta' => 'form',
          'region' => 'user_second',
          'weight' => '-25',
        ),
        'block-1' => array(
          'module' => 'block',
          'delta' => 1,
          'region' => 'footer_first',
          'weight' => '-10',
        ),
        'block-2' => array(
          'module' => 'block',
          'delta' => 2,
          'region' => 'footer_first',
          'weight' => '-9',
        ),
      ),
    ),
  );
  $context->condition_mode = 0;

  // Translatables
  // Included for use with string extractors like potx.
  t('sitewide');
  t('sitewide context/layout');
  $export['sitewide'] = $context;

  $context = new stdClass();
  $context->disabled = FALSE; /* Edit this to true to make a default context disabled initially */
  $context->api_version = 3;
  $context->name = 'studentlife';
  $context->description = 'student life page only';
  $context->tag = 'student life';
  $context->conditions = array(
    'path' => array(
      'values' => array(
        'resources/studentlife' => 'resources/studentlife',
      ),
    ),
  );
  $context->reactions = array(
    'block' => array(
      'blocks' => array(
        'views-subpage_slideshow-block_1' => array(
          'module' => 'views',
          'delta' => 'subpage_slideshow-block_1',
          'region' => 'content',
          'weight' => '-10',
        ),
        'views-subpage_slideshow-block' => array(
          'module' => 'views',
          'delta' => 'subpage_slideshow-block',
          'region' => 'content',
          'weight' => '-9',
        ),
        'views-student_life-block' => array(
          'module' => 'views',
          'delta' => 'student_life-block',
          'region' => 'content',
          'weight' => '-8',
        ),
        'menu-menu-get-involved' => array(
          'module' => 'menu',
          'delta' => 'menu-get-involved',
          'region' => 'sidebar_second',
          'weight' => '-10',
        ),
        'menu-menu-health-and-safety' => array(
          'module' => 'menu',
          'delta' => 'menu-health-and-safety',
          'region' => 'sidebar_second',
          'weight' => '-9',
        ),
        'menu-menu-academic-resources' => array(
          'module' => 'menu',
          'delta' => 'menu-academic-resources',
          'region' => 'sidebar_second',
          'weight' => '-8',
        ),
        'views-feature_callout-block' => array(
          'module' => 'views',
          'delta' => 'feature_callout-block',
          'region' => 'sidebar_second',
          'weight' => '-7',
        ),
        'views-promotional_callout-block' => array(
          'module' => 'views',
          'delta' => 'promotional_callout-block',
          'region' => 'sidebar_second',
          'weight' => '-6',
        ),
      ),
    ),
  );
  $context->condition_mode = 1;

  // Translatables
  // Included for use with string extractors like potx.
  t('student life');
  t('student life page only');
  $export['studentlife'] = $context;

  return $export;
}
