<?php
// $Id:$

/**
 * @file
 * uni_dashboard.page.inc
 */

/**
 * Build jQuery.Gantt.
 * @return rendered HTML.
 */
function uni_dashboard_build_view() {
  uni_dashboard_get_contents();
  $output = '';
  $list = array();
  //ctools_add_js('jquery.fn.gantt', 'uni_dashboard', 'library/jQuery.Gantt/js');
  ctools_add_css('style', 'uni_dashboard', 'library/jQuery.Gantt/css');
  
  // Setting the url for the Gantt library
  $library = url(drupal_get_path('module', 'uni_dashboard') . '/library/jQuery.Gantt/js/jquery.fn.gantt.js', array('absolute' => TRUE));
  
  $output .= <<<EOF
  <script src="http://code.jquery.com/jquery-1.7.2.min.js"></script>

EOF;

  // Order of js declaration is a must
  $output .= '<script src="'.$library.'"></script>';
  
  $output .= <<<EOF
   
   <script src="http://twitter.github.com/bootstrap/assets/js/bootstrap-tooltip.js"></script>
  <script src="http://twitter.github.com/bootstrap/assets/js/bootstrap-popover.js"></script>
  <script src="http://taitems.github.com/UX-Lab/core/js/prettify.js"></script>
  <link rel="stylesheet" href="http://twitter.github.com/bootstrap/assets/css/bootstrap.css" />
  <link rel="stylesheet" href="http://taitems.github.com/UX-Lab/core/css/prettify.css" />
EOF;
  $output .= <<<EOF
<div class="gantt"></div>
EOF;

  $output .= <<<EOF
<script>
    $(function() {

      "use strict";

      $(".gantt").gantt({
        source: [
EOF;

  $content = uni_dashboard_get_contents();
  
  foreach($content as $key => $value) {
    $list[] = implode(",", $value);
  }
  
  $output .= implode(",", $list);
  
  
  $output .= <<<EOF
],
        navigate: "scroll",
        scale: "days",
        maxScale: "years",
        minScale: "hours",
        itemsPerPage: 1000,
        onItemClick: function(data) {
          var nodeID = data.split(":");
          var proceed = confirm('Would you like to view ' + nodeID[1] + '?');
          if (proceed == true) {
            window.location = Drupal.settings.basePath + "node/" + nodeID[0];
          }
        },
        onAddClick: function(dt, rowId) {
          alert("Empty space clicked - add an item!");
        },
        onRender: function() {
          if (window.console && typeof console.log === "function") {
            console.log("chart rendered");
          }
        }
      });

      $(".gantt").popover({
        selector: ".bar",
        title: "Dashboard",
        content: "UNI content dashboard. Click on the title to go to the page.",
        trigger: "hover"
      });

      prettyPrint();

    });

    </script>
EOF;
  return $output;
}


/**
 * Retrieve all allowed content types on Dashboard
 */
function uni_dashboard_get_content_types() {
  $types = array();
  $result = db_query('SELECT d.node_type, d.configuration
            FROM {uni_dashboard} d WHERE d.status = :status', array(':status' => 1));

  foreach ($result as $record) {
    $types[$record->node_type] = $record;
  }
  return $types;
}

/**
 * Retrieve all contents based on allowed content types
 */
function uni_dashboard_get_contents() {
  $output = array();
  
  // Get all allowed content types and its settings
  $types = uni_dashboard_get_content_types();

  foreach ($types as $type => $config) {
    $configuration = unserialize($config->configuration);
    $grouping = explode(':', $configuration['grouping']);
    switch($grouping[0]) {
      case 'n': 
        $output[] = uni_dashboard_get_content_by_nodequeue($type, $configuration['date'], $grouping[1], $configuration['color'], $grouping[2], $configuration['title']);
        break;
      case 't': 
        $output[] = uni_dashboard_get_content_by_taxonomy($type, $configuration['date'], $grouping[1], $configuration['color'], $configuration['title']);
        break;
    }
  }
  return $output;
}

/**
 * Get content based on nodequeues
 */
function uni_dashboard_get_content_by_nodequeue($type, $date, $grouping, $color, $count = 2, $title) {
  $nodes = array();
  $entries = array();
  // Retrieve all content 
  $result = db_query('SELECT n.nid FROM {nodequeue_nodes} nn
    LEFT JOIN {nodequeue_queue} q ON nn.qid = q.qid
    LEFT JOIN {node} n ON n.nid = nn.nid
    WHERE q.name = :name
    ORDER BY nn.position ASC', array(':name' => $grouping));
  
  $names = !empty($title) ? $title : uni_dashboard_translate_content_type($type);
  $desc = " ";
  $x = 1;
  foreach ($result as $record) {
  
    $node = node_load($record->nid);
    
    $name = $x == 1 ? $names : " ";
    
    // Get group value
    $groupings = array(0 => '', 1 => t("Position One"), 2 => t("Position Two"), 3 => t("Position Three"), 4 => t("Position Four"), 5 => t("Position Five"));
    $group = $x % ($count + 1);
    
    $desc = $groupings[$group];
    
    if ($date == 'created' || $date == 'changes') {
      $from = $node->$date;
      $to = $node->$date;
    } else {
      $timestamp = $node->$date;
      $from = $timestamp['und'][0]['value'];
      $to = !empty($timestamp['und'][0]['value2']) ? $timestamp['und'][0]['value2'] : $timestamp['und'][0]['value'];
    }
    
    $color = ($node->status == 0 ? 'ganttRed' : $color);

    $nodes[$desc][] = array(
      'name' => $name,
      'from'  => "/Date(".$from."000)/",
      'to'  => "/Date(".$to."000)/",
      'label' => $node->title,
      'customClass' => $color,
      'dataObj' => $node->nid . ':' . $node->title,
    );
    $x++;
  }
  
  $i = 0;
  foreach ($nodes as $category => $values) {
    $nodes = array();
    foreach ($values as $key => $value) {
      $nodes[] = '{
            from: "'.$value['from'].'",
            to: "'.$value['to'].'",
            label: "'.$value['label'].'",
            customClass: "'.$value['customClass'].'",
            dataObj: "'.$value['dataObj'].'",
          }';
    }
    
    $title = $i == 0 ? $names : " ";
    $output = '{
          name: "'.$title.'",
          desc: "'.$category.'",
          values: [';
    $output .= implode(",", $nodes);
    $output .= ']
        }';
    $entries[] = $output;
    $i++;
  }
  return $entries;
}


/**
 * Get content based on taxonomy
 */
function uni_dashboard_get_content_by_taxonomy($type, $date, $grouping, $color, $title = '') {
  $nodes = array();
  $entries = array();
  // Retrieve all content 
  $result = db_query('SELECT nid FROM {node} n WHERE n.type = :type', array(':type' => $type));
  
  $names = !empty($title) ? $title : uni_dashboard_translate_content_type($type);
  $desc = " ";
  $x = 1;
  foreach ($result as $record) {
  
    $node = node_load($record->nid);
    
    $name = $x == 1 ? $names : " ";
    
    // Get group value
    $group = $node->$grouping;
    $desc = uni_dashboard_translate_taxonomy($group['und'][0]['tid']);
    
    if ($date == 'created' || $date == 'changes') {
      $from = $node->$date;
      $to = $node->$date;
    } else {
      $timestamp = $node->$date;
      $from = $timestamp['und'][0]['value'];
      $to = !empty($timestamp['und'][0]['value2']) ? $timestamp['und'][0]['value2'] : $timestamp['und'][0]['value'];
    }
    
    $color = ($node->status == 0 ? 'ganttRed' : $color);

    $nodes[$desc][] = array(
      'name' => $name,
      'from'  => "/Date(".$from."000)/",
      'to'  => "/Date(".$to."000)/",
      'label' => $node->title,
      'customClass' => $color,
      'dataObj' => $node->nid . ':' . $node->title,
    );
    $x++;
  }
  
  $i = 0;
  ksort($nodes);
  foreach ($nodes as $category => $values) {
    $nodes = array();
    foreach ($values as $key => $value) {
      $nodes[] = '{
            from: "'.$value['from'].'",
            to: "'.$value['to'].'",
            label: "'.$value['label'].'",
            customClass: "'.$value['customClass'].'",
            dataObj: "'.$value['dataObj'].'",
          }';
    }
    
    $title = $i == 0 ? $names : " ";
    $output = '{
          name: "'.$title.'",
          desc: "'.$category.'",
          values: [';
    $output .= implode(",", $nodes);
    $output .= ']
        }';
    $entries[] = $output;
    $i++;
  } 
  return $entries;
}

function uni_dashboard_translate_content_type($type) {
  $result = db_query('SELECT name FROM {node_type} n WHERE n.type = :type', array(':type' => $type));
  $record = $result->fetchObject();
  
  return $record->name;
}

function uni_dashboard_translate_taxonomy($tid) {
  $result = db_query('SELECT name FROM {taxonomy_term_data} t WHERE t.tid = :tid', array(':tid' => $tid));
  $record = $result->fetchObject();
  
  return $record->name;
}