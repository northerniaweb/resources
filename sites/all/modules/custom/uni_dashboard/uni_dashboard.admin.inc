<?php
// $Id$
/**
 * @file
 * jQuery Gantt Administrative Interface
 * Render a Gantt chart-like view for content dashboard.
 *
 */

/**
 * Admin configuration form
 */
function uni_dashboard_admin_settings() {  
  // set empty arrays
  $form = array();

  // get all content types
  $node_types = _node_types_build()->names;
  
  $form['intro'] = array(
    '#type' => 'markup',
    '#markup' => t('Make all necessary settings for UNI Dashboard.'),
  );
  
  // make alteration on options
  foreach ($node_types as $node_type => $node_type_label) {
    $type = array();
    $type['name'] = $node_type;
    $type['label'] = $node_type_label;
    
    $form['fieldset_' . $node_type] = array(
      '#type' => 'fieldset',
      '#title' => t($node_type_label),
      '#description' => t('Configure !nodetype dashboard settings.', array('!nodetype' => $node_type_label)),
      '#collapsible' => TRUE,
      '#collapsed' => (variable_get('uni_dashboard_' . $node_type, FALSE) ? FALSE : TRUE),
    );
    $form['fieldset_' . $node_type]['uni_dashboard_' . $node_type] = array(
      '#type' => 'checkbox',
      '#title' => t('Enable'),
      '#default_value' => variable_get('uni_dashboard_' . $node_type, FALSE),
    );
    
    // Show additional field settigns if enabled
    if ((!empty($form_state['values']['uni_dashboard_' . $node_type]) && $form_state['values']['uni_dashboard_' . $node_type]) || variable_get('uni_dashboard_' . $node_type, FALSE)) {
      // Get values from database if available
      $values = _uni_dashboard_node_setting_values($type);

      $form['fieldset_' . $node_type]['uni_dashboard_' . $node_type . '_title'] = array(
        '#type' => 'textfield',
        '#title' => t('Optional Title Override'),
        '#description' => t('Title to be used per section.'),
        '#default_value' => (isset($values['title']) ? $values['title'] : NULL),
      );
      $form['fieldset_' . $node_type]['uni_dashboard_' . $node_type . '_date'] = array(
        '#type' => 'select',
        '#title' => t('Date Field'),
        '#description' => t('The date field where the date of the content must be based upon.'),
        '#default_value' => (isset($values['date']) ? $values['date'] : NULL),
        '#options' => _uni_dashboard_get_options($node_type, 'date'),
      );
      $form['fieldset_' . $node_type]['uni_dashboard_' . $node_type . '_grouping'] = array(
        '#type' => 'select',
        '#title' => t('Grouping'),
        '#description' => t('Determines how the content will be grouped.'),
        '#default_value' => (isset($values['grouping']) ? $values['grouping'] : NULL),
        '#options' => _uni_dashboard_get_options($node_type, 'grouping'),
      );
      $form['fieldset_' . $node_type]['uni_dashboard_' . $node_type . '_color'] = array(
        '#type' => 'select',
        '#title' => t('Color'),
        '#description' => t('Determines the color of the group.'),
        '#default_value' => (isset($values['color']) ? $values['color'] : NULL),
        '#options' => _uni_dashboard_get_options($node_type, 'color'),
      );
      // Todo make js load for all available nodequeue for this type of node
      // Todo make js load for all available taxonomy for this type of node
    }
  }
  
  // Add additional processing for form submission
  $form['#submit'][] = 'uni_dashboard_admin_node_settings_submit';
  
  // Add additional processing for form validation
  $form['#validate'][] = 'uni_dashboard_admin_node_settings_validate';
  
  return system_settings_form($form);
}

/**
 * Submit function of node type setting
 */
function uni_dashboard_admin_node_settings_validate($form, &$form_state) {
  $values = $form_state['values'];
  
  // get all content types
  $node_types = _node_types_build()->names;
  
  // make alteration on options
  foreach ($node_types as $node_type => $node_type_label) {
    if ($values['uni_dashboard_' . $node_type] && isset($values['uni_dashboard_' . $node_type . '_date'])&& empty($values['uni_dashboard_' . $node_type . '_date'])) {
      form_set_error('uni_dashboard_' . $node_type . '_date', $node_type_label . ' date settings must be configured.');
    }
  }
}

/**
 * Submit function of node type setting
 */
function uni_dashboard_admin_node_settings_submit($form, &$form_state) {
  $values = $form_state['values'];
  
  // Disable all settings first
  db_update('uni_dashboard') // Table name no longer needs {}
    ->fields(array(
      'status' => 0,
    ))
    ->execute();
  
  // get all content types
  $node_types = _node_types_build()->names;
  
  // make alteration on options
  foreach ($node_types as $node_type => $node_type_label) {
    if ($values['uni_dashboard_' . $node_type]) {
      // get config settigns and serialize
      $config = array();
      $config['title'] = (isset($values['uni_dashboard_' . $node_type . '_title']) ? $values['uni_dashboard_' . $node_type . '_title'] : NULL);
      $config['date'] = (isset($values['uni_dashboard_' . $node_type . '_date']) ? $values['uni_dashboard_' . $node_type . '_date'] : NULL);
      $config['grouping'] = (isset($values['uni_dashboard_' . $node_type . '_grouping']) ? $values['uni_dashboard_' . $node_type . '_grouping'] : NULL);
      $config['color'] = (isset($values['uni_dashboard_' . $node_type . '_color']) ? $values['uni_dashboard_' . $node_type . '_color'] : NULL);
      $config = serialize($config);

      // If there is nothing to update, then save new entry
      $check = db_query('SELECT * FROM {uni_dashboard} d WHERE d.node_type = :node_type', array(':node_type' => $node_type));  
          
      if ($check->rowCount()) {
        db_update('uni_dashboard') // Table name no longer needs {}
          ->fields(array(
            'configuration' => $config,
            'status' => 1,
          ))
          ->condition('node_type', $node_type, '=')
          ->execute();
      } else {
        db_insert('uni_dashboard') // Table name no longer needs {}
          ->fields(array(
            'node_type' => $node_type,
            'configuration' => $config,
            'status' => 1,
          ))
          ->execute();
      }
    }
  }
}

/**
 * Function to retrieve current values if present in database
 *
 */
function _uni_dashboard_node_setting_values($node_type) {
  if (isset($node_type['name'])) {
    $configs = db_query('SELECT d.configuration
FROM {uni_dashboard} d WHERE d.node_type = :node_type', array(':node_type' => $node_type['name']));
    
    // Get first value as per db_query API
    $config = $configs->fetchCol();

    return unserialize($config[0]);
  }
  
  return;
}

/**
 * Retrieves available options based on given parameters
 * 
 * @Params
 *      $node_type: Node type to be based with.
 *      $field: The field requesting the function.
 */
function _uni_dashboard_get_options($node_type, $field) {
  switch ($field) {
    case 'date':
      $options = _uni_dashboard_get_date_options($node_type);
    break;
    case 'grouping':
      $options = _uni_dashboard_get_grouping_options($node_type);
    break;
    case 'color':
      $options = _uni_dashboard_get_color_options($node_type);
    break;
  }
  return $options;
}

/**
 * Retrieves available date options based on given parameter
 * 
 */
function _uni_dashboard_get_date_options($node_type) {
  $options = array();
  
  // Setting node ceated and changed field by default
  $options[''] = '- Select -';
  $options['created'] = 'Node: Post date';
  $options['changed'] = 'Node: Revision date';
  
  // Get all date fields associated with the node type
  $fields = db_query('SELECT c.field_name FROM {field_config} c
      LEFT JOIN {field_config_instance} i
      ON c.id = i.field_id
      WHERE c.module = :module AND i.entity_type = :entity_type AND i.bundle = :bundle', 
      array(':module' => 'date', ':entity_type' => 'node', ':bundle' => $node_type)); 
                    
  foreach ($fields as $field) {
    $options[$field->field_name] = 'Date field: ' . $field->field_name;
  }
  return $options;
}

/**
 * Retrieves available grouping options based on given parameter
 * 
 */
function _uni_dashboard_get_grouping_options($node_type) {
  $options = array();
  
  // Setting node ceated and changed field by default
  $options[''] = 'None';
  
  // Get all Nodequeues associated with the node type
  $nodequeues = db_query('SELECT q.name, q.title FROM {nodequeue_queue} q
      LEFT JOIN {nodequeue_types} t
      ON q.qid = t.qid
      WHERE t.type = :type', 
      array(':type' => $node_type)); 
                    
  foreach ($nodequeues as $nodequeue) {
    $options['n:' . $nodequeue->name . ':2'] = 'Nodequeue: ' . $nodequeue->title . ', by twos';
    $options['n:' . $nodequeue->name . ':3']  = 'Nodequeue: ' . $nodequeue->title . ', by threes';
    $options['n:' . $nodequeue->name . ':4']  = 'Nodequeue: ' . $nodequeue->title . ', by fours';
    $options['n:' . $nodequeue->name . ':5']  = 'Nodequeue: ' . $nodequeue->title . ', by fives';
  }
  
  // Get all taxonomy associated with the node type
  $taxonomies = db_query('SELECT c.field_name FROM {field_config} c
      LEFT JOIN {field_config_instance} i
      ON c.id = i.field_id
      WHERE c.module = :module AND i.entity_type = :entity_type AND i.bundle = :bundle', 
      array(':module' => 'taxonomy', ':entity_type' => 'node', ':bundle' => $node_type)); 
                    
  foreach ($taxonomies as $taxonomy) {
    $options['t:' . $taxonomy->field_name] = 'Taxonomy: ' . $taxonomy->field_name;
  }

  return $options;
}

/**
 * Retrieves available color options based on given parameter
 * 
 */
function _uni_dashboard_get_color_options($node_type) {
  $options = array();
  
  // Set options with colors
  $options['ganttGrey'] = 'Default';
  // $options['ganttRed'] = 'Red';
  $options['ganttOrange'] = 'Orange';
  $options['ganttYellow'] = 'Yellow';
  $options['ganttGreen'] = 'Green';
  $options['ganttBlue'] = 'Blue';
  $options['ganttIndigo'] = 'Indigo';
  $options['ganttViolet'] = 'Violet';

  return $options;
}