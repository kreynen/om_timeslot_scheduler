<?php

/**
* function to create Open Media Timeslot Theme CCK content type
*/
function _om_timeslot_scheduler_install_create_om_timeslot_theme_content_type() {

  $result = _om_timeslot_scheduler_install_import_content_type("\$content['type']  = array (
  'name' => 'Timeslot Theme',
  'type' => 'om_timeslot_theme',
  'description' => '<b>Open Media System</b> - This content type is linked to reoccurring events. It has taxonomy terms associated with it. Shows are scheduled into this themed block of time.',
  'title_label' => 'Title',
  'body_label' => 'Body',
  'min_word_count' => '0',
  'help' => '',
  'node_options' => 
  array (
    'status' => true,
    'promote' => false,
    'sticky' => false,
    'revision' => false,
  ),
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
  'old_type' => 'om_timeslot_theme',
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
  'merci_status' => 1,
  'merci_spare_items' => 0,
  'merci_max_hours_per_reservation' => '0',
  'merci_allow_overnight' => '0',
  'merci_allow_weekends' => '0',
  'merci_rate_per_hour' => '0',
  'merci_late_fee_per_hour' => '0',
  'merci_fee_free_hours' => '0',
  'merci_min_cancel_hours' => '0',
  'merci_autocheckout' => '0',
  'merci_autocheckin' => '0',
  'merci_selfcheckout' => '0',
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
\$content['fields']  = array (
  0 => 
  array (
    'label' => 'Color',
    'field_name' => 'field_om_timeslot_theme_color',
    'type' => 'colorpicker_cck_textfield',
    'widget_type' => 'colorpicker_cck',
    'change' => 'Change basic information',
    'weight' => '-4',
    'description' => '',
    'default_value' => 
    array (
    ),
    'default_value_php' => '',
    'default_value_widget' => NULL,
    'group' => false,
    'required' => 0,
    'multiple' => '0',
    'locked' => '1',
    'op' => 'Save field settings',
    'module' => 'colorpicker_cck',
    'widget_module' => 'colorpicker_cck',
    'columns' => 
    array (
      'value' => 
      array (
        'type' => 'varchar',
        'length' => 64,
        'not null' => false,
        'sortable' => true,
      ),
    ),
    'display_settings' => 
    array (
      'weight' => '-4',
      'parent' => '',
      2 => 
      array (
        'format' => 'default',
        'exclude' => 1,
      ),
      3 => 
      array (
        'format' => 'default',
        'exclude' => 1,
      ),
      4 => 
      array (
        'format' => 'default',
        'exclude' => 1,
      ),
      5 => 
      array (
        'format' => 'default',
        'exclude' => 1,
      ),
      'label' => 
      array (
        'format' => 'above',
      ),
      'teaser' => 
      array (
        'format' => 'default',
        'exclude' => 0,
      ),
      'full' => 
      array (
        'format' => 'default',
        'exclude' => 1,
      ),
    ),
  ),
);
\$content['extra']  = array (
  'title' => '-5',
  'body_field' => '-1',
  'menu' => '-2',
  'taxonomy' => '-3',
  'attachments' => '0',
);
", 'om_timeslot_theme');

  return;
} // function _om_timeslot_scheduler_install_create_om_timeslot_theme_content_type 

