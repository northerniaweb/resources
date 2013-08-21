<?php
/**
 * @file
 * uni_contexts_and_basic_pages.features.menu_links.inc
 */

/**
 * Implements hook_menu_default_menu_links().
 */
function uni_contexts_and_basic_pages_menu_default_menu_links() {
  $menu_links = array();

  // Exported menu link: menu-subpages-menu:http://cba.uni.edu
  $menu_links['menu-subpages-menu:http://cba.uni.edu'] = array(
    'menu_name' => 'menu-subpages-menu',
    'link_path' => 'http://cba.uni.edu',
    'router_path' => '',
    'link_title' => 'Business Adminitration',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
      'menu_icon' => array(
        'enable' => 0,
        'path' => 'sites/all/modules/contrib/menu_icons/images/default_icon.png',
        'image_style' => 'info_for_image',
      ),
    ),
    'module' => 'menu',
    'hidden' => '0',
    'external' => '1',
    'has_children' => '0',
    'expanded' => '0',
    'weight' => '1',
    'parent_path' => 'node/1315',
  );
  // Exported menu link: menu-subpages-menu:http://collegeportraits.org/IA/UNI
  $menu_links['menu-subpages-menu:http://collegeportraits.org/IA/UNI'] = array(
    'menu_name' => 'menu-subpages-menu',
    'link_path' => 'http://collegeportraits.org/IA/UNI',
    'router_path' => '',
    'link_title' => 'College Portraits',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
      'menu_icon' => array(
        'enable' => 0,
        'path' => 'sites/all/modules/contrib/menu_icons/images/default_icon.png',
        'image_style' => 'info_for_image',
      ),
    ),
    'module' => 'menu',
    'hidden' => '0',
    'external' => '1',
    'has_children' => '0',
    'expanded' => '0',
    'weight' => '0',
    'parent_path' => 'node/1337',
  );
  // Exported menu link: menu-subpages-menu:http://uni.edu/chas
  $menu_links['menu-subpages-menu:http://uni.edu/chas'] = array(
    'menu_name' => 'menu-subpages-menu',
    'link_path' => 'http://uni.edu/chas',
    'router_path' => '',
    'link_title' => 'Humanities, Arts & Sciences',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
      'menu_icon' => array(
        'enable' => 0,
        'path' => 'sites/all/modules/contrib/menu_icons/images/default_icon.png',
        'image_style' => 'info_for_image',
      ),
    ),
    'module' => 'menu',
    'hidden' => '0',
    'external' => '1',
    'has_children' => '0',
    'expanded' => '0',
    'weight' => '3',
    'parent_path' => 'node/1315',
  );
  // Exported menu link: menu-subpages-menu:http://uni.edu/cme
  $menu_links['menu-subpages-menu:http://uni.edu/cme'] = array(
    'menu_name' => 'menu-subpages-menu',
    'link_path' => 'http://uni.edu/cme',
    'router_path' => '',
    'link_title' => 'CME',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
      'menu_icon' => array(
        'enable' => 0,
        'path' => 'sites/all/modules/contrib/menu_icons/images/default_icon.png',
        'image_style' => 'info_for_image',
      ),
    ),
    'module' => 'menu',
    'hidden' => '0',
    'external' => '1',
    'has_children' => '0',
    'expanded' => '0',
    'weight' => '1',
    'parent_path' => 'node/1317',
  );
  // Exported menu link: menu-subpages-menu:http://uni.edu/coe
  $menu_links['menu-subpages-menu:http://uni.edu/coe'] = array(
    'menu_name' => 'menu-subpages-menu',
    'link_path' => 'http://uni.edu/coe',
    'router_path' => '',
    'link_title' => 'Education',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
      'menu_icon' => array(
        'enable' => 0,
        'path' => 'sites/all/modules/contrib/menu_icons/images/default_icon.png',
        'image_style' => 'info_for_image',
      ),
    ),
    'module' => 'menu',
    'hidden' => '0',
    'external' => '1',
    'has_children' => '0',
    'expanded' => '0',
    'weight' => '2',
    'parent_path' => 'node/1315',
  );
  // Exported menu link: menu-subpages-menu:http://uni.edu/csbs
  $menu_links['menu-subpages-menu:http://uni.edu/csbs'] = array(
    'menu_name' => 'menu-subpages-menu',
    'link_path' => 'http://uni.edu/csbs',
    'router_path' => '',
    'link_title' => 'College of Social & Behavioral Sciences',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
      'menu_icon' => array(
        'enable' => 0,
        'path' => 'sites/all/modules/contrib/menu_icons/images/default_icon.png',
        'image_style' => 'info_for_image',
      ),
    ),
    'module' => 'menu',
    'hidden' => '0',
    'external' => '1',
    'has_children' => '0',
    'expanded' => '0',
    'weight' => '4',
    'parent_path' => 'node/1315',
  );
  // Exported menu link: menu-subpages-menu:http://uni.edu/disability
  $menu_links['menu-subpages-menu:http://uni.edu/disability'] = array(
    'menu_name' => 'menu-subpages-menu',
    'link_path' => 'http://uni.edu/disability',
    'router_path' => '',
    'link_title' => 'Disability Resources',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
      'menu_icon' => array(
        'enable' => 0,
        'path' => 'sites/all/modules/contrib/menu_icons/images/default_icon.png',
        'image_style' => 'info_for_image',
      ),
    ),
    'module' => 'menu',
    'hidden' => '0',
    'external' => '1',
    'has_children' => '0',
    'expanded' => '0',
    'weight' => '2',
    'parent_path' => 'node/1317',
  );
  // Exported menu link: menu-subpages-menu:http://uni.edu/diversity
  $menu_links['menu-subpages-menu:http://uni.edu/diversity'] = array(
    'menu_name' => 'menu-subpages-menu',
    'link_path' => 'http://uni.edu/diversity',
    'router_path' => '',
    'link_title' => 'Diversity Matters',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
      'menu_icon' => array(
        'enable' => 0,
        'path' => 'sites/all/modules/contrib/menu_icons/images/default_icon.png',
        'image_style' => 'info_for_image',
      ),
    ),
    'module' => 'menu',
    'hidden' => '0',
    'external' => '1',
    'has_children' => '0',
    'expanded' => '0',
    'weight' => '0',
    'parent_path' => 'node/1317',
  );
  // Exported menu link: menu-subpages-menu:http://uni.edu/lac
  $menu_links['menu-subpages-menu:http://uni.edu/lac'] = array(
    'menu_name' => 'menu-subpages-menu',
    'link_path' => 'http://uni.edu/lac',
    'router_path' => '',
    'link_title' => 'Liberal Arts Core',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
      'menu_icon' => array(
        'enable' => 0,
        'path' => 'sites/all/modules/contrib/menu_icons/images/default_icon.png',
        'image_style' => 'info_for_image',
      ),
    ),
    'module' => 'menu',
    'hidden' => '0',
    'external' => '1',
    'has_children' => '0',
    'expanded' => '0',
    'weight' => '6',
    'parent_path' => 'node/1315',
  );
  // Exported menu link: menu-subpages-menu:http://uni.edu/registrar/calendars/academic-calendars/
  $menu_links['menu-subpages-menu:http://uni.edu/registrar/calendars/academic-calendars/'] = array(
    'menu_name' => 'menu-subpages-menu',
    'link_path' => 'http://uni.edu/registrar/calendars/academic-calendars/',
    'router_path' => '',
    'link_title' => 'Academic Calendar',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
      'menu_icon' => array(
        'enable' => 0,
        'path' => 'sites/all/modules/contrib/menu_icons/images/default_icon.png',
        'image_style' => 'info_for_image',
      ),
    ),
    'module' => 'menu',
    'hidden' => '0',
    'external' => '1',
    'has_children' => '0',
    'expanded' => '0',
    'weight' => '3',
    'parent_path' => 'node/1339',
  );
  // Exported menu link: menu-subpages-menu:http://uni.edu/resources/consumer-info
  $menu_links['menu-subpages-menu:http://uni.edu/resources/consumer-info'] = array(
    'menu_name' => 'menu-subpages-menu',
    'link_path' => 'http://uni.edu/resources/consumer-info',
    'router_path' => '',
    'link_title' => 'Consumer Information',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
      'menu_icon' => array(
        'enable' => 0,
        'path' => 'sites/all/modules/contrib/menu_icons/images/default_icon.png',
        'image_style' => 'info_for_image',
      ),
    ),
    'module' => 'menu',
    'hidden' => '0',
    'external' => '1',
    'has_children' => '0',
    'expanded' => '0',
    'weight' => '1',
    'parent_path' => 'node/1337',
  );
  // Exported menu link: menu-subpages-menu:http://uni.edu/resources/rankings
  $menu_links['menu-subpages-menu:http://uni.edu/resources/rankings'] = array(
    'menu_name' => 'menu-subpages-menu',
    'link_path' => 'http://uni.edu/resources/rankings',
    'router_path' => '',
    'link_title' => 'National Rankings & Honors',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
      'menu_icon' => array(
        'enable' => 0,
        'path' => 'sites/all/modules/contrib/menu_icons/images/default_icon.png',
        'image_style' => 'info_for_image',
      ),
    ),
    'module' => 'menu',
    'hidden' => '0',
    'external' => '1',
    'has_children' => '0',
    'expanded' => '0',
    'weight' => '7',
    'parent_path' => 'node/1315',
  );
  // Exported menu link: menu-subpages-menu:http://www.grad.uni.edu/
  $menu_links['menu-subpages-menu:http://www.grad.uni.edu/'] = array(
    'menu_name' => 'menu-subpages-menu',
    'link_path' => 'http://www.grad.uni.edu/',
    'router_path' => '',
    'link_title' => 'Graduate College',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
      'menu_icon' => array(
        'enable' => 0,
        'path' => 'sites/all/modules/contrib/menu_icons/images/default_icon.png',
        'image_style' => 'info_for_image',
      ),
    ),
    'module' => 'menu',
    'hidden' => '0',
    'external' => '1',
    'has_children' => '0',
    'expanded' => '0',
    'weight' => '5',
    'parent_path' => 'node/1315',
  );
  // Exported menu link: menu-subpages-menu:https://cgi.access.uni.edu/cgi-bin/calc_aid/calc_aid.cgi
  $menu_links['menu-subpages-menu:https://cgi.access.uni.edu/cgi-bin/calc_aid/calc_aid.cgi'] = array(
    'menu_name' => 'menu-subpages-menu',
    'link_path' => 'https://cgi.access.uni.edu/cgi-bin/calc_aid/calc_aid.cgi',
    'router_path' => '',
    'link_title' => 'Cost Calculator',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
      'menu_icon' => array(
        'enable' => 0,
        'path' => 'sites/all/modules/contrib/menu_icons/images/default_icon.png',
        'image_style' => 'info_for_image',
      ),
    ),
    'module' => 'menu',
    'hidden' => '0',
    'external' => '1',
    'has_children' => '0',
    'expanded' => '0',
    'weight' => '3',
    'parent_path' => 'node/1337',
  );
  // Exported menu link: menu-subpages-menu:https://cgi.access.uni.edu/cgi-bin/transfer/transferPlanIt.cgi
  $menu_links['menu-subpages-menu:https://cgi.access.uni.edu/cgi-bin/transfer/transferPlanIt.cgi'] = array(
    'menu_name' => 'menu-subpages-menu',
    'link_path' => 'https://cgi.access.uni.edu/cgi-bin/transfer/transferPlanIt.cgi',
    'router_path' => '',
    'link_title' => 'Transfer Plan-It',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
      'menu_icon' => array(
        'enable' => 0,
        'path' => 'sites/all/modules/contrib/menu_icons/images/default_icon.png',
        'image_style' => 'info_for_image',
      ),
    ),
    'module' => 'menu',
    'hidden' => '0',
    'external' => '1',
    'has_children' => '0',
    'expanded' => '0',
    'weight' => '2',
    'parent_path' => 'node/1337',
  );
  // Exported menu link: menu-subpages-menu:https://uni.edu/admissions/visit/
  $menu_links['menu-subpages-menu:https://uni.edu/admissions/visit/'] = array(
    'menu_name' => 'menu-subpages-menu',
    'link_path' => 'https://uni.edu/admissions/visit/',
    'router_path' => '',
    'link_title' => 'Schedule a Visit',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
      'menu_icon' => array(
        'enable' => 0,
        'path' => 'sites/all/modules/contrib/menu_icons/images/default_icon.png',
        'image_style' => 'info_for_image',
      ),
    ),
    'module' => 'menu',
    'hidden' => '0',
    'external' => '1',
    'has_children' => '0',
    'expanded' => '0',
    'weight' => '4',
    'parent_path' => 'node/1337',
  );
  // Exported menu link: menu-subpages-menu:node/1315
  $menu_links['menu-subpages-menu:node/1315'] = array(
    'menu_name' => 'menu-subpages-menu',
    'link_path' => 'node/1315',
    'router_path' => 'node/%',
    'link_title' => 'Academics',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
      'menu_icon' => array(
        'enable' => 0,
        'path' => 'sites/all/modules/contrib/menu_icons/images/default_icon.png',
        'image_style' => 'info_for_image',
      ),
    ),
    'module' => 'menu',
    'hidden' => '0',
    'external' => '0',
    'has_children' => '1',
    'expanded' => '1',
    'weight' => '0',
  );
  // Exported menu link: menu-subpages-menu:node/1317
  $menu_links['menu-subpages-menu:node/1317'] = array(
    'menu_name' => 'menu-subpages-menu',
    'link_path' => 'node/1317',
    'router_path' => 'node/%',
    'link_title' => 'Student Life',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
      'menu_icon' => array(
        'enable' => 0,
        'path' => 'sites/all/modules/contrib/menu_icons/images/default_icon.png',
        'image_style' => 'info_for_image',
      ),
    ),
    'module' => 'menu',
    'hidden' => '0',
    'external' => '0',
    'has_children' => '1',
    'expanded' => '1',
    'weight' => '1',
  );
  // Exported menu link: menu-subpages-menu:node/1319
  $menu_links['menu-subpages-menu:node/1319'] = array(
    'menu_name' => 'menu-subpages-menu',
    'link_path' => 'node/1319',
    'router_path' => 'node/%',
    'link_title' => 'Get to Know UNI',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
      'menu_icon' => array(
        'enable' => 0,
        'path' => 'sites/all/modules/contrib/menu_icons/images/default_icon.png',
        'image_style' => 'info_for_image',
      ),
    ),
    'module' => 'menu',
    'hidden' => '0',
    'external' => '0',
    'has_children' => '1',
    'expanded' => '1',
    'weight' => '2',
  );
  // Exported menu link: menu-subpages-menu:node/1337
  $menu_links['menu-subpages-menu:node/1337'] = array(
    'menu_name' => 'menu-subpages-menu',
    'link_path' => 'node/1337',
    'router_path' => 'node/%',
    'link_title' => 'Prospective Students',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
      'menu_icon' => array(
        'enable' => 0,
        'path' => 'sites/all/modules/contrib/menu_icons/images/default_icon.png',
        'image_style' => 'info_for_image',
      ),
    ),
    'module' => 'menu',
    'hidden' => '0',
    'external' => '0',
    'has_children' => '1',
    'expanded' => '0',
    'weight' => '0',
    'parent_path' => 'node/1319',
  );
  // Exported menu link: menu-subpages-menu:node/1338
  $menu_links['menu-subpages-menu:node/1338'] = array(
    'menu_name' => 'menu-subpages-menu',
    'link_path' => 'node/1338',
    'router_path' => 'node/%',
    'link_title' => 'Current Students',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
      'menu_icon' => array(
        'enable' => 0,
        'path' => 'sites/all/modules/contrib/menu_icons/images/default_icon.png',
        'image_style' => 'info_for_image',
      ),
    ),
    'module' => 'menu',
    'hidden' => '0',
    'external' => '0',
    'has_children' => '0',
    'expanded' => '0',
    'weight' => '1',
    'parent_path' => 'node/1319',
  );
  // Exported menu link: menu-subpages-menu:node/1339
  $menu_links['menu-subpages-menu:node/1339'] = array(
    'menu_name' => 'menu-subpages-menu',
    'link_path' => 'node/1339',
    'router_path' => 'node/%',
    'link_title' => 'Parents & Family',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
      'menu_icon' => array(
        'enable' => 0,
        'path' => 'sites/all/modules/contrib/menu_icons/images/default_icon.png',
        'image_style' => 'info_for_image',
      ),
    ),
    'module' => 'menu',
    'hidden' => '0',
    'external' => '0',
    'has_children' => '1',
    'expanded' => '0',
    'weight' => '2',
    'parent_path' => 'node/1319',
  );
  // Exported menu link: menu-subpages-menu:node/1340
  $menu_links['menu-subpages-menu:node/1340'] = array(
    'menu_name' => 'menu-subpages-menu',
    'link_path' => 'node/1340',
    'router_path' => 'node/%',
    'link_title' => 'Faculty & Staff',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
      'menu_icon' => array(
        'enable' => 0,
        'path' => 'sites/all/modules/contrib/menu_icons/images/default_icon.png',
        'image_style' => 'info_for_image',
      ),
    ),
    'module' => 'menu',
    'hidden' => '0',
    'external' => '0',
    'has_children' => '0',
    'expanded' => '0',
    'weight' => '3',
    'parent_path' => 'node/1319',
  );
  // Exported menu link: menu-subpages-menu:node/1341
  $menu_links['menu-subpages-menu:node/1341'] = array(
    'menu_name' => 'menu-subpages-menu',
    'link_path' => 'node/1341',
    'router_path' => 'node/%',
    'link_title' => 'Alumni & Friends',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
      'menu_icon' => array(
        'enable' => 0,
        'path' => 'sites/all/modules/contrib/menu_icons/images/default_icon.png',
        'image_style' => 'info_for_image',
      ),
    ),
    'module' => 'menu',
    'hidden' => '0',
    'external' => '0',
    'has_children' => '0',
    'expanded' => '0',
    'weight' => '4',
    'parent_path' => 'node/1319',
  );
  // Exported menu link: menu-subpages-menu:node/4201
  $menu_links['menu-subpages-menu:node/4201'] = array(
    'menu_name' => 'menu-subpages-menu',
    'link_path' => 'node/4201',
    'router_path' => 'node/%',
    'link_title' => 'Colleges and Departments',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
      'menu_icon' => array(
        'enable' => 0,
        'path' => 'sites/all/modules/contrib/menu_icons/images/default_icon.png',
        'image_style' => 'info_for_image',
      ),
    ),
    'module' => 'menu',
    'hidden' => '0',
    'external' => '0',
    'has_children' => '0',
    'expanded' => '0',
    'weight' => '0',
    'parent_path' => 'node/1315',
  );
  // Exported menu link: menu-subpages-menu:node/4305
  $menu_links['menu-subpages-menu:node/4305'] = array(
    'menu_name' => 'menu-subpages-menu',
    'link_path' => 'node/4305',
    'router_path' => 'node/%',
    'link_title' => 'Parent Newsletter',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
      'menu_icon' => array(
        'enable' => 0,
        'path' => 'sites/all/modules/contrib/menu_icons/images/default_icon.png',
        'image_style' => 'info_for_image',
      ),
    ),
    'module' => 'menu',
    'hidden' => '0',
    'external' => '0',
    'has_children' => '0',
    'expanded' => '0',
    'weight' => '1',
    'parent_path' => 'node/1339',
  );
  // Exported menu link: menu-subpages-menu:node/4306
  $menu_links['menu-subpages-menu:node/4306'] = array(
    'menu_name' => 'menu-subpages-menu',
    'link_path' => 'node/4306',
    'router_path' => 'node/%',
    'link_title' => 'UNIPA',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
      'menu_icon' => array(
        'enable' => 0,
        'path' => 'sites/all/modules/contrib/menu_icons/images/default_icon.png',
        'image_style' => 'info_for_image',
      ),
    ),
    'module' => 'menu',
    'hidden' => '0',
    'external' => '0',
    'has_children' => '0',
    'expanded' => '0',
    'weight' => '2',
    'parent_path' => 'node/1339',
  );
  // Translatables
  // Included for use with string extractors like potx.
  t('Academic Calendar');
  t('Academics');
  t('Alumni & Friends');
  t('Business Adminitration');
  t('CME');
  t('College Portraits');
  t('College of Social & Behavioral Sciences');
  t('Colleges and Departments');
  t('Consumer Information');
  t('Cost Calculator');
  t('Current Students');
  t('Disability Resources');
  t('Diversity Matters');
  t('Education');
  t('Faculty & Staff');
  t('Get to Know UNI');
  t('Graduate College');
  t('Humanities, Arts & Sciences');
  t('Liberal Arts Core');
  t('National Rankings & Honors');
  t('Parent Newsletter');
  t('Parents & Family');
  t('Prospective Students');
  t('Schedule a Visit');
  t('Student Life');
  t('Transfer Plan-It');
  t('UNIPA');


  return $menu_links;
}
