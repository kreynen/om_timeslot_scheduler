<?php

/**
 * Add this function to you theme's template.php
 */
 

/**
 * Display a day view with events spanned on multiple rows.
 */
function phptemplate_preprocess_calendar_day(&$vars) {

  // Get rid of visual duplicates.
  $vars['view']->style_with_weekno = FALSE;
  
  $view = $vars['view'];
  $rows = $vars['rows'];
  $show_empty_times = $view->date_info->style_show_empty_times;
  $grouping_field = $view->date_info->style_groupby_field;
    
  // Move all_day items into the right columns and render them.
  $columns = array();
  $grouped_items = array();
  foreach ($rows['all_day'] as $group_key => $item) {
    if (!($columns["$group_key"])) { // init group on first encounter
      $columns["$group_key"][] = $group_key .'-0';
    }  
    $theme = isset($item->calendar_node_theme) ? $item->calendar_node_theme : 'calendar_'. $view->date_info->granularity .'_node';
    // assign already themed items
    $grouped_items ["$group_key"]['value'] = $item;
  }
  $vars['rows']['all_day'] = $grouped_items; 
  // Move timed items into the right columns and render them.
  $start_times = $view->date_info->style_groupby_times;
  $show_empty_times = FALSE;
  $end_start_time = '23:59:59';
  
  $grouped_items = array();
  
  $timeslots = $view->date_info->style_groupby_times;
  array_push($timeslots, $end_start_time);
  $timeslots_count = count($timeslots);
  
  //translate rows into better format
  $events = $vars['items'];
  foreach ($events as $event) {
    if ($event->calendar_all_day) continue; // skip all day events.
    $group_key = isset($event->raw->{$grouping_field}) ? $event->raw->{$grouping_field} : t('Items'); // get initial value as formatted one already blanked
    $key = $group_key .'-'. 0;
    if (!($columns["$group_key"])) { // init group on first encounter
      $columns["$group_key"][] = $group_key .'-0';
    }
    $event_start = $event->calendar_start_date->format('H:i:s');
    $event_end = $event->calendar_end_date->format('H:i:s');
    for ($slot = 0; $slot < $timeslots_count; $slot++) {
      if ($event_start >= $timeslots[$slot] &&
          $event_end <= $timeslots[$slot+1]) { // one slot event
          $theme = isset($event->calendar_node_theme) ? $event->calendar_node_theme : 'calendar_'. $view->date_info->granularity .'_node';
          // find free column to use
          $found = FALSE;
          foreach ($columns["$group_key"] as $ckey => $column) {
            $key = $group_key .'-'. $ckey;
            if (!($grouped_items[$timeslots[$slot]]['values']["$key"])) {
              $found = TRUE;
              break;
            }
          }
          if ( !$found ) {
            $key = $group_key .'-'. (count($columns[$group_key]));
            $columns["$group_key"][] = $key; // add new column
          }
          $grouped_items[$timeslots[$slot]]['values']["$key"] = theme($theme, $event, $view);
        }
      elseif ($event_start >= $timeslots[$slot] &&
          $event_start < $timeslots[$slot+1] &&
          $event_end > $timeslots[$i+1]) { // first slot of multi slot event
          $theme = isset($event->calendar_node_theme) ? $event->calendar_node_theme : 'calendar_'. $view->date_info->granularity .'_node';
          // find free column to use
          $found = FALSE;
          foreach ($columns["$group_key"] as $ckey => $column) {
            $key = $group_key .'-'. $ckey;
            if (!($grouped_items[$timeslots[$slot]]['values']["$key"])) {
              $found = TRUE;
              break;
            }
          }
          if ( !$found ) {
            $key = $group_key .'-'. (count($columns["$group_key"]));
            $columns["$group_key"][] = $key; // add new column
          }
          $span = $timeslots[$slot];
          $grouped_items[$timeslots[$slot]]['values']["$key"] = theme($theme, $event, $view);
          $grouped_items[$timeslots[$slot]]['span']["$key"] = 1;
        }
      elseif ($event_start < $timeslots[$slot] &&
          $event_end > $timeslots[$slot]) { // middle of end slot of event
          $grouped_items[$span]['span']["$key"]++;
          $grouped_items[$timeslots[$slot]]['values']["$key"] = '***busy***';
        }
      else { // empty slot
          //$grouped_items[$timeslots[$slot]]['values']["$key"] = '';
      }
    }
  }
  // Do the headers last, once we know what the actual values are.
  $i = 0;
  $start_times = array_keys($grouped_items);
  $start_times = $view->date_info->style_groupby_times;
  foreach ($start_times as $start_time) {
    $next_start_time = array_key_exists($i + 1, $start_times) ? $start_times[$i + 1] : '23:59:59';
    $heading = theme('calendar_time_row_heading', $start_time, $next_start_time, $rows['date']);
    $grouped_items[$start_time]['hour'] = $heading['hour'];
    $grouped_items[$start_time]['ampm'] = $heading['ampm'];
    $i++;      
  }
  ksort($grouped_items);
  $vars['rows']['items'] = $grouped_items;
  if (empty($columns)) {
    $header_columns[t('Items')]['title'] = t('Items');
    $flat_columns[t('Items')] = '';
  }
  else {
    $header_columns = array();
    foreach($columns as $group_key => $group_column) {
      $header_columns[$group_key]['title'] = $group_key;
      $header_columns[$group_key]['span'] = count($group_column);
      // also span all days events
      $vars['rows']['all_day'][$group_key]['span'] = count($group_column);
      foreach($group_column as $column) {
        $flat_columns[] = $column;
      }
    }
  }
  
  $vars['header_columns'] = $header_columns;
  $vars['columns'] = $flat_columns;
  if (count($flat_columns)) {
    $vars['column_width'] = round(90/count($flat_columns));
  }
  else {
    $vars['column_width'] = 90;
  }
  
  // add small javascript to extend datebox to whole td height
  drupal_add_js(
    "Drupal.behaviors.myEventBehavior = function(context){
      $('.calendar-calendar td.calendar-agenda-items div.calendar div.view-item').each( function(){
        // Just a dirty fix. I have no idea how to properly calculate weight for this element
        var height = Math.max(($(this).parents('td').height())-5, $(this).height());
        $(this).height(height); 
        });
    };",
    "inline");
  
  return;
}



