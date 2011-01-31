<?php

/**
* function to create Open Media Timeslot Theme CCK content type
*/
function _om_timeslot_scheduler_install_create_om_timeslot_rule_content_type() {

  $result = _om_timeslot_scheduler_install_import_content_type("\$content['type']  = array (
  'name' => 'Timeslot Rule',
  'type' => 'om_timeslot_rule',
  'description' => '<b>Open Media System</b> - This content type stores the SQL for timeslot rules.  ',
  'title_label' => 'Title',
  'body_label' => 'SQL',
  'min_word_count' => '0',
  'help' => '',
  'node_options' => 
  array (
    'status' => true,
    'promote' => false,
    'sticky' => false,
    'revision' => false,
  ),
  'upload' => '1',
  'creativecommons' => 0,
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
  'old_type' => 'om_timeslot_rule',
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
  'merci_type_setting' => '',
  'merci_status' => '1',
  'merci_spare_items' => 0,
  'merci_grouping' => '0',
  'merci_max_hours_per_reservation' => '0',
  'merci_allow_overnight' => '0',
  'merci_allow_weekends' => '0',
  'merci_rate_per_hour' => '0',
  'merci_late_fee_per_hour' => '0',
  'merci_fee_free_hours' => '0',
  'merci_min_cancel_hours' => '0',
  'ant' => '0',
  'ant_pattern' => '',
  'ant_php' => 0,
  'feedapi' => 
  array (
    'enabled' => false,
    'upload_method' => 'url',
    'refresh_on_create' => 0,
    'update_existing' => 1,
    'refresh_time' => 1800,
    'items_delete' => 0,
    'parsers' => 
    array (
      'parser_simplepie' => 
      array (
        'enabled' => false,
        'weight' => 0,
        'cache_lifetime' => '3600',
      ),
    ),
    'processors' => 
    array (
      'feedapi_node' => 
      array (
        'enabled' => false,
        'weight' => 0,
        'content_type' => 'webform',
        'input_format' => 0,
        'node_date' => 'feed',
        'x_dedupe' => 0,
      ),
      'feedapi_inherit' => 
      array (
        'enabled' => false,
        'weight' => 0,
        'inherit_og' => true,
        'inherit_taxonomy' => true,
        'inherit_author' => true,
      ),
    ),
  ),
);
\$content['groups']  = array (
  0 => 
  array (
    'label' => 'Post Processing Options',
    'group_type' => 'standard',
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
        5 => 
        array (
          'format' => 'fieldset',
          'exclude' => 0,
        ),
        'teaser' => 
        array (
          'format' => 'fieldset',
          'exclude' => 0,
        ),
        'full' => 
        array (
          'format' => 'fieldset',
          'exclude' => 0,
        ),
        4 => 
        array (
          'format' => 'fieldset',
          'exclude' => 0,
        ),
        2 => 
        array (
          'format' => 'fieldset',
          'exclude' => 0,
        ),
        3 => 
        array (
          'format' => 'fieldset',
          'exclude' => 0,
        ),
        'token' => 
        array (
          'format' => 'fieldset',
          'exclude' => 0,
        ),
        'label' => 'above',
      ),
    ),
    'weight' => '-2',
    'group_name' => 'group_om_timeslot_postprocess',
  ),
);
\$content['fields']  = array (
  0 => 
  array (
    'label' => 'Days Since Airing ',
    'field_name' => 'field_om_timeslot_days_past',
    'type' => 'number_integer',
    'widget_type' => 'number',
    'change' => 'Change basic information',
    'weight' => 0,
    'description' => '',
    'default_value' => 
    array (
      0 => 
      array (
        'value' => '',
        '_error_element' => 'default_value_widget][field_om_timeslot_days_past][0][value',
      ),
    ),
    'default_value_php' => '',
    'default_value_widget' => NULL,
    'group' => 'group_om_timeslot_postprocess',
    'required' => 0,
    'multiple' => '0',
    'min' => '',
    'max' => '',
    'prefix' => '',
    'suffix' => '',
    'allowed_values' => '',
    'allowed_values_php' => '',
    'op' => 'Save field settings',
    'module' => 'number',
    'widget_module' => 'number',
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
        'exclude' => 0,
      ),
      5 => 
      array (
        'format' => 'default',
        'exclude' => 0,
      ),
      'teaser' => 
      array (
        'format' => 'default',
        'exclude' => 0,
      ),
      'full' => 
      array (
        'format' => 'default',
        'exclude' => 0,
      ),
      4 => 
      array (
        'format' => 'default',
        'exclude' => 0,
      ),
      2 => 
      array (
        'format' => 'default',
        'exclude' => 0,
      ),
      3 => 
      array (
        'format' => 'default',
        'exclude' => 0,
      ),
      'token' => 
      array (
        'format' => 'default',
        'exclude' => 0,
      ),
    ),
  ),
  1 => 
  array (
    'label' => 'Days Before Airing',
    'field_name' => 'field_om_timeslot_days_ahead',
    'type' => 'number_integer',
    'widget_type' => 'number',
    'change' => 'Change basic information',
    'weight' => '1',
    'description' => '',
    'default_value' => 
    array (
      0 => 
      array (
        'value' => '',
        '_error_element' => 'default_value_widget][field_om_timeslot_days_ahead][0][value',
      ),
    ),
    'default_value_php' => '',
    'default_value_widget' => 
    array (
      'field_om_timeslot_days_ahead' => 
      array (
        0 => 
        array (
          'value' => '',
          '_error_element' => 'default_value_widget][field_om_timeslot_days_ahead][0][value',
        ),
      ),
    ),
    'group' => 'group_om_timeslot_postprocess',
    'required' => 0,
    'multiple' => '0',
    'min' => '',
    'max' => '',
    'prefix' => '',
    'suffix' => '',
    'allowed_values' => '',
    'allowed_values_php' => '',
    'op' => 'Save field settings',
    'module' => 'number',
    'widget_module' => 'number',
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
        'exclude' => 0,
      ),
      5 => 
      array (
        'format' => 'default',
        'exclude' => 0,
      ),
      'teaser' => 
      array (
        'format' => 'default',
        'exclude' => 0,
      ),
      'full' => 
      array (
        'format' => 'default',
        'exclude' => 0,
      ),
      4 => 
      array (
        'format' => 'default',
        'exclude' => 0,
      ),
      2 => 
      array (
        'format' => 'default',
        'exclude' => 0,
      ),
      3 => 
      array (
        'format' => 'default',
        'exclude' => 0,
      ),
      'token' => 
      array (
        'format' => 'default',
        'exclude' => 0,
      ),
    ),
  ),
  2 => 
  array (
    'label' => 'Do Not Air Shows from the Same Project Concurrently',
    'field_name' => 'field_om_timeslot_concurrent',
    'type' => 'number_integer',
    'widget_type' => 'optionwidgets_onoff',
    'change' => 'Change basic information',
    'weight' => '2',
    'description' => '',
    'default_value' => 
    array (
      0 => 
      array (
        'value' => NULL,
      ),
    ),
    'default_value_php' => '',
    'default_value_widget' => 
    array (
      'field_om_timeslot_concurrent' => 
      array (
        'value' => false,
      ),
    ),
    'group' => 'group_om_timeslot_postprocess',
    'required' => 0,
    'multiple' => '0',
    'min' => '',
    'max' => '',
    'prefix' => '',
    'suffix' => '',
    'allowed_values' => '0
1|Do Not Air Shows from the Same Project Concurrently',
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
        'exclude' => 0,
      ),
      5 => 
      array (
        'format' => 'default',
        'exclude' => 0,
      ),
      'teaser' => 
      array (
        'format' => 'default',
        'exclude' => 0,
      ),
      'full' => 
      array (
        'format' => 'default',
        'exclude' => 0,
      ),
      4 => 
      array (
        'format' => 'default',
        'exclude' => 0,
      ),
      2 => 
      array (
        'format' => 'default',
        'exclude' => 0,
      ),
      3 => 
      array (
        'format' => 'default',
        'exclude' => 0,
      ),
      'token' => 
      array (
        'format' => 'default',
        'exclude' => 0,
      ),
    ),
  ),
);
\$content['extra']  = array (
  'title' => '-5',
  'body_field' => '-3',
  'revision_information' => '1',
  'comment_settings' => '2',
  'menu' => '-4',
  'book' => '0',
  'path' => '3',
  'attachments' => '4',
);", 'om_timeslot_rule');

  return;
} // function _om_timeslot_scheduler_install_create_om_timeslot_rule_content_type 

