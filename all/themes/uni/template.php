<?php

/**
 * @file
 * This file is empty by default because the base theme chain (Alpha & Omega) provides
 * all the basic functionality. However, in case you wish to customize the output that Drupal
 * generates through Alpha & Omega this file is a good place to do so.
 * 
 * Alpha comes with a neat solution for keeping this file as clean as possible while the code
 * for your subtheme grows. Please read the README.txt in the /preprocess and /process subfolders
 * for more information on this topic.
 */
 
 /**
  * Implements hook_form_BASE_FORM_ID_alter()
 */
function uni_form_announcements_node_form_alter(&$form, &$form_state, $form_id) {
  drupal_set_title(t('Submit an Announcement'));
  $form['actions']['submit']['#value'] = 'Submit';
  if (user_is_logged_in() == FALSE){
    $form['revision_information']['#access'] = FALSE;
    $form['field_inside_uni_home']['#access'] = FALSE;
    $form['actions']['submit']['#submit'][] = 'uni_node_form_submit';
  }
}
    
/* Alter Accolades creation form */
function uni_form_kudos_node_form_alter(&$form, &$form_state, $form_id) {
  drupal_set_title(t('Submit an Accolade'));
  $form['actions']['submit']['#value'] = 'Submit';
  if (user_is_logged_in() == FALSE){
    $form['revision_information']['#access'] = FALSE;
    $form['actions']['submit']['#submit'][] = 'uni_node_form_submit';
  }
}

/* redirect page for anonymous users creating nodes (announcements and accolades) */
function uni_node_form_submit($form, &$form_state) {
    $form_state['redirect'] = 'submission-confirmation';
}

/* include stylesheets specifically for IE 7 */
drupal_add_css(path_to_theme() . '/css/ie7.css', array('group' => CSS_THEME, 'browsers' => array('IE' => 'lte IE 7', '!IE' => FALSE), 'preprocess' => FALSE));
drupal_add_css(path_to_theme() . '/css/ie8.css', array('group' => CSS_THEME, 'browsers' => array('IE' => 'lte IE 8', '!IE' => FALSE), 'preprocess' => FALSE));
