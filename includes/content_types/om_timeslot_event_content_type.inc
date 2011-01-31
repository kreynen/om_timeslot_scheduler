<?php

/**
* function to create Open Media Timeslot Event CCK content type
*/
function _om_timeslot_scheduler_install_create_om_timeslot_event_content_type() {

  $result = _om_timeslot_scheduler_install_import_content_type("\$content[type]  = array (
  'name' => 'Timeslot Event',
  'type' => 'om_timeslot_event',
  'description' => '<b>Open Media System</b> - This content type is a reoccurring event linked to Timeslots.',
  'title_label' => 'Title',
  'body_label' => '',
  'min_word_count' => '0',
  'help' => '',
  'node_options' => 
  array (
    'status' => false,
    'promote' => false,
    'sticky' => false,
    'revision' => false,
  ),
  'language_content_type' => '0',
  'upload' => 1,
  'creativecommons_lite' => 0,
  'file_path' => '',
  'file_path_pathauto' => 0,
  'file_path_tolower' => 0,
  'file_path_transliterate' => 0,
  'file_name' => '[filefield-onlyname-original].[filefield-extension-original]',
  'file_name_pathauto' => 0,
  'file_name_tolower' => 0,
  'file_name_transliterate' => 0,
  'retroactive_update' => '',
  'notifications_node_ui' => 
  array (
    'links' => true,
    'form' => false,
    'comment' => false,
    'block' => false,
  ),
  'scheduler' => 0,
  'scheduler_touch' => 0,
  'i18n_node' => '1',
  'old_type' => 'om_timeslot_event',
  'orig_type' => '',
  'module' => 'node',
  'custom' => '1',
  'modified' => '1',
  'locked' => '0',
  'location_maxnum' => '0',
  'location_defaultnum' => '0',
  'location_weight' => '9',
  'location_collapsible' => 1,
  'location_collapsed' => 1,
  'location_rss' => 'simple',
  'og_content_type_usage' => 'omitted',
  'comment' => '0',
  'comment_default_mode' => '4',
  'comment_default_order' => '1',
  'comment_default_per_page' => '50',
  'comment_controls' => '3',
  'comment_anonymous' => 0,
  'comment_subject_field' => '1',
  'comment_preview' => '1',
  'comment_form_location' => '0',
  'fivestar' => 0,
  'fivestar_stars' => 5,
  'fivestar_labels_enable' => 1,
  'fivestar_label_0' => 'Cancel rating',
  'fivestar_label_1' => 'Poor',
  'fivestar_label_2' => 'Okay',
  'fivestar_label_3' => 'Good',
  'fivestar_label_4' => 'Great',
  'fivestar_label_5' => 'Awesome',
  'fivestar_label_6' => 'Give it @star/@count',
  'fivestar_label_7' => 'Give it @star/@count',
  'fivestar_label_8' => 'Give it @star/@count',
  'fivestar_label_9' => 'Give it @star/@count',
  'fivestar_label_10' => 'Give it @star/@count',
  'fivestar_style' => 'average',
  'fivestar_text' => 'dual',
  'fivestar_title' => 1,
  'fivestar_feedback' => 1,
  'fivestar_unvote' => 0,
  'fivestar_position_teaser' => 'hidden',
  'fivestar_position' => 'below',
  'merci_type_setting' => 'disabled',
  'merci_status' => '1',
  'merci_spare_items' => 0,
  'merci_max_hours_per_reservation' => '0',
  'merci_allow_overnight' => '0',
  'merci_allow_weekends' => '0',
  'merci_rate_per_hour' => '0',
  'merci_late_fee_per_hour' => '0',
  'merci_fee_free_hours' => '0',
  'ant' => '0',
  'ant_pattern' => '',
  'ant_php' => 0,
  'feedapi' => 
  array (
    'enabled' => 0,
    'refresh_on_create' => 0,
    'update_existing' => 1,
    'skip' => 0,
    'items_delete' => '0',
    'parsers' => 
    array (
      'parser_simplepie' => 
      array (
        'enabled' => 0,
        'weight' => '0',
      ),
      'parser_csv' => 
      array (
        'enabled' => false,
        'weight' => 0,
        'timestamp_rule' => '',
        'title_rule' => '',
        'description_rule' => '',
      ),
    ),
    'processors' => 
    array (
      'feedapi_node' => 
      array (
        'enabled' => 0,
        'weight' => '0',
        'content_type' => 'merci_reservation',
        'node_date' => 'feed',
        'promote' => '3',
        'x_dedupe' => '0',
      ),
      'feedapi_inherit' => 
      array (
        'enabled' => 0,
        'weight' => '0',
        'inherit_og' => 1,
        'inherit_taxonomy' => 1,
      ),
    ),
  ),
);
\$content[groups]  = array (
  0 => 
  array (
    'label' => 'Scheduling',
    'settings' => 
    array (
      'form' => 
      array (
        'style' => 'fieldset',
        'description' => '',
      ),
      'display' => 
      array (
        'description' => '',
        'teaser' => 
        array (
          'format' => 'fieldset',
        ),
        'full' => 
        array (
          'format' => 'fieldset',
        ),
        'label' => 'above',
      ),
    ),
    'weight' => '4',
    'group_name' => 'group_scheduling',
  ),
);
\$content[fields]  = array (
  0 => 
  array (
    'label' => 'Timeslot Theme',
    'field_name' => 'field_om_timeslot_theme',
    'type' => 'nodereference',
    'widget_type' => 'nodereference_select',
    'change' => 'Change basic information',
    'weight' => 0,
    'description' => '',
    'default_value' => 
    array (
      0 => 
      array (
        'nid' => '',
      ),
    ),
    'default_value_php' => '',
    'default_value_widget' => NULL,
    'group' => false,
    'required' => 0,
    'multiple' => '0',
    'locked' => '1',
    'referenceable_types' => 
    array (
      'om_timeslot_theme' => 'om_timeslot_theme',
      'om_airing' => 0,
      'om_feed' => 0,
      'page' => 0,
      'om_project' => 0,
      'om_project_type' => 0,
      'om_show' => 0,
      'story' => 0,
      'om_timeslot_event' => 0,
      'dv_camera' => false,
      'deadwood_category' => false,
      'deadwood_item' => false,
      'merci_reservation' => false,
      'book' => false,
      'boom_pole' => false,
      'canon_video_light' => false,
      'canon_xl1_dv_camera' => false,
      'class' => false,
      'class_description' => false,
      'class_feed' => false,
      'dv_palmcorder' => false,
      'editing_computer_equipment' => false,
      'event' => false,
      'facilities' => false,
      'field_monitor' => false,
      'hdv_palmcorder' => false,
      'handheld_microphone' => false,
      'headphone' => false,
      'large_tripod' => false,
      'lavalier_microphone' => false,
      'light_kit' => false,
      'livestream' => false,
      'member_level' => false,
      'monopod' => false,
      'news_item' => false,
      'om_migration_feed' => false,
      'panasonic_dvx100a_dv_camera' => false,
      'product' => false,
      'profile' => false,
      'project_blog' => false,
      'project_event' => false,
      'project_wiki' => false,
      'sms_message' => false,
      'shotgun_microphone' => false,
      'small_tripod' => false,
      'sony_lseries_video_light' => false,
      'sony_pd170_dvcam' => false,
      'sony_z1u_hdv_camera' => false,
      'studios' => false,
      'technical_problem' => false,
      'webform' => false,
      'wireless_lavalier' => false,
      'xlr_adapter' => false,
      'external_hard_drives' => false,
      'hdv_deck_portable' => false,
      'media_test' => false,
      'minidv_vtr_decks' => false,
      'outdoor_reflector' => false,
      'panasonic_gs300' => false,
      'projector_large_venue' => false,
      'projector_medium_venue' => false,
      'small_amp_and_speakers' => false,
      'wide_angle_adapter_sony_z1u' => false,
    ),
    'advanced_view' => '--',
    'advanced_view_args' => '',
    'op' => 'Save field settings',
    'module' => 'nodereference',
    'widget_module' => 'nodereference',
    'columns' => 
    array (
      'nid' => 
      array (
        'type' => 'int',
        'unsigned' => true,
        'not null' => false,
      ),
    ),
    'display_settings' => 
    array (
      'label' => 
      array (
        'format' => 'above',
      ),
      'teaser' => 
      array (
        'format' => 'default',
      ),
      'full' => 
      array (
        'format' => 'default',
      ),
      4 => 
      array (
        'format' => 'default',
      ),
    ),
  ),
  1 => 
  array (
    'label' => 'User Scheduled',
    'field_name' => 'field_om_timeslot_userscheduled',
    'type' => 'number_integer',
    'widget_type' => 'optionwidgets_onoff',
    'change' => 'Change basic information',
    'weight' => 0,
    'description' => '',
    'default_value' => 
    array (
      0 => 
      array (
        'value' => 0,
      ),
    ),
    'default_value_php' => '',
    'default_value_widget' => 
    array (
      'field_om_timeslot_userscheduled' => 
      array (
        'value' => false,
      ),
    ),
    'group' => 'group_scheduling',
    'required' => 0,
    'multiple' => '0',
    'min' => '',
    'max' => '',
    'prefix' => '',
    'suffix' => '',
    'allowed_values' => '0
1|User Scheduled',
    'allowed_values_php' => '',
    'op' => 'Save field settings',
    'module' => 'number',
    'locked' => '1',
    'widget_module' => 'optionwidgets',
    'columns' => 
    array (
      'value' => 
      array (
        'type' => 'int',
        'not null' => false,
        'sortable' => true,
      ),
    ),
    'display_settings' => 
    array (
      'label' => 
      array (
        'format' => 'above',
      ),
      'teaser' => 
      array (
        'format' => 'default',
      ),
      'full' => 
      array (
        'format' => 'default',
      ),
      4 => 
      array (
        'format' => 'default',
      ),
    ),
  ),
  2 => 
  array (
    'label' => 'Auto Scheduled',
    'field_name' => 'field_om_timeslot_autoscheduled',
    'type' => 'number_integer',
    'widget_type' => 'optionwidgets_onoff',
    'change' => 'Change basic information',
    'weight' => '1',
    'locked' => '1',
    'description' => '',
    'default_value' => 
    array (
      0 => 
      array (
        'value' => 0,
      ),
    ),
    'default_value_php' => '',
    'default_value_widget' => 
    array (
      'field_om_timeslot_autoscheduled' => 
      array (
        'value' => false,
      ),
    ),
    'group' => 'group_scheduling',
    'required' => 0,
    'multiple' => '0',
    'min' => '',
    'max' => '',
    'prefix' => '',
    'suffix' => '',
    'allowed_values' => '0
1|Auto Scheduled',
    'allowed_values_php' => '',
    'op' => 'Save field settings',
    'module' => 'number',
    'widget_module' => 'optionwidgets',
    'columns' => 
    array (
      'value' => 
      array (
        'type' => 'int',
        'not null' => false,
        'sortable' => true,
      ),
    ),
    'display_settings' => 
    array (
      'label' => 
      array (
        'format' => 'above',
      ),
      'teaser' => 
      array (
        'format' => 'default',
      ),
      'full' => 
      array (
        'format' => 'default',
      ),
      4 => 
      array (
        'format' => 'default',
      ),
    ),
  ),
  3 => 
  array (
    'label' => 'Project',
    'field_name' => 'field_om_project',
    'type' => 'nodereference',
    'widget_type' => 'nodereference_select',
    'change' => 'Change basic information',
    'weight' => '2',
    'locked' => '1',
    'description' => '',
    'default_value' => 
    array (
      0 => 
      array (
        'nid' => '',
      ),
    ),
    'default_value_php' => '',
    'default_value_widget' => 
    array (
      'field_om_project' => 
      array (
        0 => 
        array (
          'nid' => '',
        ),
        'nid' => 
        array (
          'nid' => '',
        ),
      ),
    ),
    'group' => 'group_scheduling',
    'required' => 0,
    'multiple' => '0',
    'referenceable_types' => 
    array (
      'om_project' => 'om_project',
      'om_airing' => 0,
      'om_feed' => 0,
      'page' => 0,
      'om_project_type' => 0,
      'om_show' => 0,
      'story' => 0,
      'om_timeslot_event' => 0,
      'om_timeslot_theme' => 0,
      'dv_camera' => false,
      'deadwood_category' => false,
      'deadwood_item' => false,
      'merci_reservation' => false,
      'book' => false,
      'boom_pole' => false,
      'canon_video_light' => false,
      'canon_xl1_dv_camera' => false,
      'class' => false,
      'class_description' => false,
      'class_feed' => false,
      'dv_palmcorder' => false,
      'editing_computer_equipment' => false,
      'event' => false,
      'facilities' => false,
      'field_monitor' => false,
      'hdv_palmcorder' => false,
      'handheld_microphone' => false,
      'headphone' => false,
      'large_tripod' => false,
      'lavalier_microphone' => false,
      'light_kit' => false,
      'livestream' => false,
      'member_level' => false,
      'monopod' => false,
      'news_item' => false,
      'om_migration_feed' => false,
      'panasonic_dvx100a_dv_camera' => false,
      'product' => false,
      'profile' => false,
      'project_blog' => false,
      'project_event' => false,
      'project_wiki' => false,
      'sms_message' => false,
      'shotgun_microphone' => false,
      'small_tripod' => false,
      'sony_lseries_video_light' => false,
      'sony_pd170_dvcam' => false,
      'sony_z1u_hdv_camera' => false,
      'studios' => false,
      'technical_problem' => false,
      'webform' => false,
      'wireless_lavalier' => false,
      'xlr_adapter' => false,
      'external_hard_drives' => false,
      'hdv_deck_portable' => false,
      'media_test' => false,
      'minidv_vtr_decks' => false,
      'outdoor_reflector' => false,
      'panasonic_gs300' => false,
      'projector_large_venue' => false,
      'projector_medium_venue' => false,
      'small_amp_and_speakers' => false,
      'wide_angle_adapter_sony_z1u' => false,
    ),
    'advanced_view' => '--',
    'advanced_view_args' => '',
    'op' => 'Save field settings',
    'module' => 'nodereference',
    'widget_module' => 'nodereference',
    'columns' => 
    array (
      'nid' => 
      array (
        'type' => 'int',
        'unsigned' => true,
        'not null' => false,
      ),
    ),
    'display_settings' => 
    array (
      'label' => 
      array (
        'format' => 'above',
      ),
      'teaser' => 
      array (
        'format' => 'default',
      ),
      'full' => 
      array (
        'format' => 'default',
      ),
      4 => 
      array (
        'format' => 'default',
      ),
    ),
  ),
  4 => 
  array (
    'label' => 'Date',
    'field_name' => 'field_om_timeslot_date',
    'type' => 'datetime',
    'widget_type' => 'date_popup_repeat',
    'change' => 'Change basic information',
    'weight' => '3',
    'locked' => '1',
    'default_value' => 'blank',
    'default_value_code' => '',
    'default_value2' => 'same',
    'default_value_code2' => '',
    'input_format' => 'Y-m-d H:i:s',
    'input_format_custom' => '',
    'year_range' => '-3:+3',
    'increment' => '1',
    'advanced' => 
    array (
      'label_position' => 'above',
      'text_parts' => 
      array (
        'year' => 0,
        'month' => 0,
        'day' => 0,
        'hour' => 0,
        'minute' => 0,
        'second' => 0,
      ),
    ),
    'label_position' => 'above',
    'text_parts' => 
    array (
    ),
    'description' => '',
    'group' => false,
    'required' => 1,
    'multiple' => 1,
    'repeat' => 1,
    'todate' => 'required',
    'granularity' => 
    array (
      'year' => 'year',
      'month' => 'month',
      'day' => 'day',
      'hour' => 'hour',
      'minute' => 'minute',
      'second' => 'second',
    ),
    'output_format_date' => 'm/d/Y - g:ia',
    'output_format_custom' => '',
    'output_format_date_long' => 'l, F j, Y - g:ia',
    'output_format_custom_long' => '',
    'output_format_date_medium' => 'F j, Y - g:ia',
    'output_format_custom_medium' => '',
    'output_format_date_short' => 'm/d/Y - g:ia',
    'output_format_custom_short' => '',
    'tz_handling' => 'none',
    'timezone_db' => 'UTC',
    'repeat_collapsed' => '0',
    'op' => 'Save field settings',
    'module' => 'date',
    'widget_module' => 'date',
    'columns' => 
    array (
      'value' => 
      array (
        'type' => 'datetime',
        'not null' => false,
        'sortable' => true,
      ),
      'value2' => 
      array (
        'type' => 'datetime',
        'not null' => false,
        'sortable' => true,
      ),
      'rrule' => 
      array (
        'type' => 'text',
        'not null' => false,
        'sortable' => false,
      ),
    ),
    'display_settings' => 
    array (
      'label' => 
      array (
        'format' => 'above',
      ),
      'teaser' => 
      array (
        'format' => 'default',
      ),
      'full' => 
      array (
        'format' => 'default',
      ),
      4 => 
      array (
        'format' => 'default',
      ),
    ),
  ),
);
", 'om_timeslot_event');

  return;
} // function _om_timeslot_scheduler_install_create_om_timeslot_event_content_type 

