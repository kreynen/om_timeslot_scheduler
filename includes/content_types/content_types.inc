<?php

/**
* function to create CCK content types
*/
function _om_timeslot_scheduler_install_create_content_types() {

  // in order to create CCK content types, we use the form-based content_copy import/export functionality
  
  //Load existing content_types so we're not trying to recreate something that already exists
  $content_info = _content_type_info();
  
  // create om_timeslot_theme content type
  if (!in_array('om_timeslot_theme', array_keys($content_info['content types']))) {
     module_load_include('inc', 'om_timeslot_scheduler', 'includes/content_types/om_timeslot_theme_content_type');
     _om_timeslot_scheduler_install_create_om_timeslot_theme_content_type();
  }

  // create om_timeslot_event content type
  if (!in_array('om_timeslot_event', array_keys($content_info['content types']))) {
     module_load_include('inc', 'om_timeslot_scheduler', 'includes/content_types/om_timeslot_event_content_type');
     _om_timeslot_scheduler_install_create_om_timeslot_event_content_type();
  }
  
  // create om_timeslot_rule content type
  if (!in_array('om_timeslot_rule', array_keys($content_info['content types']))) {
     module_load_include('inc', 'om_timeslot_scheduler', 'includes/content_types/om_timeslot_rule_content_type');
     _om_timeslot_scheduler_install_create_om_timeslot_rule_content_type();
  }
    
  return;
} // function _om_timeslot_scheduler_install_create_content_types


/**
* function to import a new content type using CCK import functionality
*/
function _om_timeslot_scheduler_install_import_content_type($macro, $type_name) {
  if (!$type_name) {
    $type_name = '<create>';
  }
  $form_state = array();
  $form = content_copy_import_form($form_state);
  $form_state['values']['type_name'] = $type_name ;
  $form_state['values']['macro'] = $macro;
  return content_copy_import_form_submit($form, $form_state);
} // function _om_project_install_import_content_type  

