<?php
/**
* Implementation of hook_views_default_views().
*/
function om_timeslot_scheduler_views_default_views() {
  /*
  * View 'timeslot_calendar'
  */
  $view = new view;
  $view->name = 'timeslot_calendar';
  $view->description = 'A multi-dimensional calendar view with back/next navigation.';
  $view->tag = 'Calendar';
  $view->view_php = '';
  $view->base_table = 'node';
  $view->is_cacheable = FALSE;
  $view->api_version = 2;
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */
  $handler = $view->new_display('default', 'Defaults', 'default');
  $handler->override_option('fields', array(
      'title' => array(
        'label' => '',
        'alter' => array(
          'alter_text' => 0,
          'text' => '',
          'make_link' => 0,
          'path' => '',
          'link_class' => '',
          'alt' => '',
          'prefix' => '',
          'suffix' => '',
          'help' => '',
          'trim' => 0,
          'max_length' => '',
          'word_boundary' => 1,
          'ellipsis' => 1,
          'strip_tags' => 0,
          'html' => 0,
        ),
        'link_to_node' => 1,
        'exclude' => 0,
        'id' => 'title',
        'table' => 'node',
        'field' => 'title',
        'relationship' => 'none',
        'override' => array(
          'button' => 'Override',
        ),
      ),
      'field_om_timeslot_date_value' => array(
        'label' => 'Date',
        'alter' => array(
          'alter_text' => 0,
          'text' => '',
          'make_link' => 0,
          'path' => '',
          'link_class' => '',
          'alt' => '',
          'prefix' => '',
          'suffix' => '',
          'help' => '',
          'trim' => 0,
          'max_length' => '',
          'word_boundary' => 1,
          'ellipsis' => 1,
          'strip_tags' => 0,
          'html' => 0,
        ),
        'link_to_node' => 0,
        'label_type' => 'widget',
        'format' => 'default',
        'multiple' => array(
          'multiple_number' => '',
          'multiple_from' => '',
          'multiple_to' => '',
          'group' => 0,
        ),
        'repeat' => array(
          'show_repeat_rule' => 'show',
        ),
        'fromto' => array(
          'fromto' => 'both',
        ),
        'exclude' => 1,
        'id' => 'field_om_timeslot_date_value',
        'table' => 'node_data_field_om_timeslot_date',
        'field' => 'field_om_timeslot_date_value',
        'relationship' => 'none',
      ),
      'field_om_timeslot_theme_nid' => array(
        'label' => '',
        'alter' => array(
          'alter_text' => 0,
          'text' => '',
          'make_link' => 0,
          'path' => '',
          'link_class' => '',
          'alt' => '',
          'prefix' => '',
          'suffix' => '',
          'help' => '',
          'trim' => 0,
          'max_length' => '',
          'word_boundary' => 1,
          'ellipsis' => 1,
          'strip_tags' => 0,
          'html' => 0,
        ),
        'link_to_node' => 0,
        'label_type' => 'none',
        'format' => 'plain',
        'multiple' => array(
          'group' => TRUE,
          'multiple_number' => '',
          'multiple_from' => '',
          'multiple_reversed' => FALSE,
        ),
        'exclude' => 0,
        'id' => 'field_om_timeslot_theme_nid',
        'table' => 'node_data_field_om_timeslot_theme',
        'field' => 'field_om_timeslot_theme_nid',
        'override' => array(
          'button' => 'Override',
        ),
        'relationship' => 'none',
      ),
  ));
  $handler->override_option('arguments', array(
      'date_argument' => array(
        'default_action' => 'default',
        'style_plugin' => 'default_summary',
        'style_options' => array(),
        'wildcard' => 'all',
        'wildcard_substitution' => 'All',
        'title' => '',
        'breadcrumb' => '',
        'default_argument_type' => 'date',
        'default_argument' => '',
        'validate_type' => 'none',
        'validate_fail' => 'not found',
        'date_fields' => array(
          'node_data_field_om_timeslot_date.field_om_timeslot_date_value' => 'node_data_field_om_timeslot_date.field_om_timeslot_date_value',
        ),
        'year_range' => '-3:+3',
        'date_method' => 'OR',
        'granularity' => 'month',
        'id' => 'date_argument',
        'table' => 'node',
        'field' => 'date_argument',
        'relationship' => 'none',
        'default_argument_user' => 0,
        'default_argument_fixed' => '',
        'default_argument_php' => '',
        'validate_argument_node_type' => array(
          'webform' => 0,
          'merci_reservation' => 0,
          'merci_reservation_template' => 0,
          'account_change_request' => 0,
          'book' => 0,
          'boom_pole' => 0,
          'canon_video_light' => 0,
          'canon_xl1_dv_camera' => 0,
          'class' => 0,
          'class_description' => 0,
          'class_feed' => 0,
          'dv_palmcorder' => 0,
          'editing_computer_equipment' => 0,
          'event' => 0,
          'external_hard_drives' => 0,
          'facilities' => 0,
          'field_monitor' => 0,
          'handheld_microphone' => 0,
          'hdv_deck_portable' => 0,
          'hdv_palmcorder' => 0,
          'headphone' => 0,
          'large_tripod' => 0,
          'lavalier_microphone' => 0,
          'light_kit' => 0,
          'livestream' => 0,
          'media_test' => 0,
          'member_level' => 0,
          'merci_projectors' => 0,
          'minidv_vtr_decks' => 0,
          'monopod' => 0,
          'news_item' => 0,
          'om_airing' => 0,
          'om_crew_request' => 0,
          'om_feed' => 0,
          'om_formtest_show' => 0,
          'om_handbook' => 0,
          'om_handbook_updates' => 0,
          'om_handbook_update_feed' => 0,
          'om_lobby_message' => 0,
          'om_migration_feed' => 0,
          'om_project' => 0,
          'om_project_feed' => 0,
          'om_project_type' => 0,
          'om_show' => 0,
          'om_timeslot_event' => 0,
          'om_timeslot_theme' => 0,
          'outdoor_reflector' => 0,
          'page' => 0,
          'panasonic_dvx100a_dv_camera' => 0,
          'panasonic_gs300' => 0,
          'profile' => 0,
          'project_blog' => 0,
          'project_event' => 0,
          'project_wiki' => 0,
          'shotgun_microphone' => 0,
          'small_amp_and_speakers' => 0,
          'small_tripod' => 0,
          'sms_message' => 0,
          'sony_lseries_video_light' => 0,
          'sony_pd170_dvcam' => 0,
          'sony_z1u_hdv_camera' => 0,
          'studios' => 0,
          'technical_problem' => 0,
          'wide_angle_adapter_sony_z1u' => 0,
          'wireless_lavalier' => 0,
          'xlr_adapter' => 0,
        ),
        'validate_argument_node_access' => 0,
        'validate_argument_nid_type' => 'nid',
        'validate_argument_vocabulary' => array(
          '7' => 0,
          '23' => 0,
          '14' => 0,
          '6' => 0,
          '9' => 0,
          '27' => 0,
          '20' => 0,
          '2' => 0,
          '3' => 0,
          '25' => 0,
          '28' => 0,
          '5' => 0,
          '24' => 0,
          '21' => 0,
          '34' => 0,
          '8' => 0,
          '10' => 0,
          '17' => 0,
          '18' => 0,
          '16' => 0,
          '22' => 0,
          '4' => 0,
          '26' => 0,
          '19' => 0,
          '31' => 0,
          '32' => 0,
          '30' => 0,
          '33' => 0,
          '12' => 0,
        ),
        'validate_argument_type' => 'tid',
        'validate_argument_php' => '',
        'validate_user_argument_type' => 'uid',
        'validate_user_roles' => array(
          '2' => 0,
          '21' => 0,
          '14' => 0,
          '17' => 0,
          '5' => 0,
          '20' => 0,
          '4' => 0,
          '16' => 0,
          '6' => 0,
          '10' => 0,
          '13' => 0,
          '15' => 0,
          '22' => 0,
          '19' => 0,
          '18' => 0,
          '3' => 0,
          '12' => 0,
        ),
        'override' => array(
          'button' => 'Override',
        ),
        'default_options_div_prefix' => '',
        'validate_argument_transform' => 0,
        'validate_user_restrict_roles' => 0,
        'validate_argument_is_member' => 0,
      ),
  ));
  $handler->override_option('filters', array(
      'tid' => array(
        'operator' => 'or',
        'value' => array(),
        'group' => '0',
        'exposed' => TRUE,
        'expose' => array(
          'use_operator' => 0,
          'operator' => 'tid_op',
          'identifier' => 'tid',
          'label' => 'Channel',
          'optional' => 1,
          'single' => 1,
          'remember' => 0,
          'reduce' => 0,
        ),
        'type' => 'select',
        'limit' => TRUE,
        'vid' => '3',
        'id' => 'tid',
        'table' => 'term_node',
        'field' => 'tid',
        'hierarchy' => 0,
        'override' => array(
          'button' => 'Override',
        ),
        'relationship' => 'none',
        'reduce_duplicates' => 0,
      ),
      'status' => array(
        'operator' => '=',
        'value' => '0',
        'group' => '0',
        'exposed' => FALSE,
        'expose' => array(
          'operator' => FALSE,
          'label' => '',
        ),
        'id' => 'status',
        'table' => 'node',
        'field' => 'status',
        'override' => array(
          'button' => 'Override',
        ),
        'relationship' => 'none',
      ),
  ));
  $handler->override_option('access', array(
      'type' => 'none',
      'role' => array(),
      'perm' => '',
  ));
  $handler->override_option('cache', array(
      'type' => 'none',
  ));
  $handler->override_option('header_format', '3');
  $handler->override_option('header_empty', 0);
  $handler->override_option('items_per_page', 0);
  $handler->override_option('style_plugin', 'calendar_nav');
  $handler->override_option('style_options', array(
      'name_size' => '3',
      'with_weekno' => '0',
  ));
  $handler = $view->new_display('calendar', 'Timeslot Calendar', 'calendar_1');
  $handler->override_option('fields', array(
      'title' => array(
        'label' => '',
        'alter' => array(
          'alter_text' => 0,
          'text' => '',
          'make_link' => 0,
          'path' => '',
          'link_class' => '',
          'alt' => '',
          'prefix' => '',
          'suffix' => '',
          'help' => '',
          'trim' => 0,
          'max_length' => '',
          'word_boundary' => 1,
          'ellipsis' => 1,
          'strip_tags' => 0,
          'html' => 0,
        ),
        'link_to_node' => 1,
        'exclude' => 0,
        'id' => 'title',
        'table' => 'node',
        'field' => 'title',
        'relationship' => 'none',
        'override' => array(
          'button' => 'Use default',
        ),
      ),
      'field_om_timeslot_date_value' => array(
        'label' => 'Date',
        'alter' => array(
          'alter_text' => 0,
          'text' => '',
          'make_link' => 0,
          'path' => '',
          'link_class' => '',
          'alt' => '',
          'prefix' => '',
          'suffix' => '',
          'help' => '',
          'trim' => 0,
          'max_length' => '',
          'word_boundary' => 1,
          'ellipsis' => 1,
          'strip_tags' => 0,
          'html' => 0,
        ),
        'link_to_node' => 0,
        'label_type' => 'widget',
        'format' => 'default',
        'multiple' => array(
          'multiple_number' => '',
          'multiple_from' => '',
          'multiple_to' => '',
          'group' => 1,
        ),
        'repeat' => array(
          'show_repeat_rule' => 'show',
        ),
        'fromto' => array(
          'fromto' => 'both',
        ),
        'exclude' => 0,
        'id' => 'field_om_timeslot_date_value',
        'table' => 'node_data_field_om_timeslot_date',
        'field' => 'field_om_timeslot_date_value',
        'override' => array(
          'button' => 'Use default',
        ),
        'relationship' => 'none',
      ),
  ));
  $handler->override_option('header', '<?php

    om_timeslot_theme_style_key();');
  $handler->override_option('style_options', array());
  $handler->override_option('path', 'timeslot-calendar');
  $handler->override_option('menu', array(
      'type' => 'none',
      'title' => '',
      'description' => '',
      'weight' => 0,
      'name' => 'navigation',
  ));
  $handler->override_option('tab_options', array(
      'type' => 'none',
      'title' => '',
      'description' => '',
      'weight' => 0,
  ));
  $handler->override_option('calendar_colors', array(
      'page' => '#ffff66',
      'story' => '#668cff',
  ));
  $handler->override_option('calendar_colors_vocabulary', array());
  $handler->override_option('calendar_colors_taxonomy', array());
  $handler->override_option('calendar_popup', 0);
  $handler->override_option('calendar_date_link', '');
  $handler = $view->new_display('calendar_block', 'Calendar block', 'calendar_block_1');
  $handler->override_option('style_options', array());
  $handler->override_option('block_description', '');
  $handler->override_option('block_caching', -1);
  $handler = $view->new_display('calendar_period', 'Timeslot Year view', 'calendar_period_1');
  $handler->override_option('style_plugin', 'calendar_style');
  $handler->override_option('style_options', array(
      'display_type' => 'year',
      'name_size' => '1',
  ));
  $handler->override_option('attachment_position', 'after');
  $handler->override_option('inherit_arguments', TRUE);
  $handler->override_option('inherit_exposed_filters', TRUE);
  $handler->override_option('displays', array(
      'calendar_1' => 'calendar_1',
      'default' => 0,
      'calendar_block_1' => 0,
  ));
  $handler->override_option('calendar_type', 'year');
  $handler = $view->new_display('calendar_period', 'Timeslot Month view', 'calendar_period_2');
  $handler->override_option('style_plugin', 'calendar_style');
  $handler->override_option('style_options', array(
      'name_size' => '99',
      'with_weekno' => '0',
      'max_items' => '0',
      'max_items_behavior' => 'more',
      'groupby_times' => 'hour',
      'groupby_times_custom' => '',
      'groupby_field' => '',
  ));
  $handler->override_option('attachment_position', 'after');
  $handler->override_option('inherit_arguments', TRUE);
  $handler->override_option('inherit_exposed_filters', TRUE);
  $handler->override_option('displays', array(
      'calendar_1' => 'calendar_1',
      'default' => 0,
      'calendar_block_1' => 0,
  ));
  $handler->override_option('calendar_type', 'month');
  $handler = $view->new_display('calendar_period', 'Timeslot Day view', 'calendar_period_3');
  $handler->override_option('style_plugin', 'calendar_style');
  $handler->override_option('style_options', array(
      'display_type' => 'day',
      'name_size' => '99',
  ));
  $handler->override_option('attachment_position', 'after');
  $handler->override_option('inherit_arguments', TRUE);
  $handler->override_option('inherit_exposed_filters', TRUE);
  $handler->override_option('displays', array(
      'calendar_1' => 'calendar_1',
      'default' => 0,
      'calendar_block_1' => 0,
  ));
  $handler->override_option('calendar_type', 'day');
  $handler = $view->new_display('calendar_period', 'Timeslot Week view', 'calendar_period_4');
  $handler->override_option('style_plugin', 'calendar_style');
  $handler->override_option('style_options', array(
      'display_type' => 'week',
      'name_size' => '99',
  ));
  $handler->override_option('attachment_position', 'after');
  $handler->override_option('inherit_arguments', TRUE);
  $handler->override_option('inherit_exposed_filters', TRUE);
  $handler->override_option('displays', array(
      'calendar_1' => 'calendar_1',
      'default' => 0,
      'calendar_block_1' => 0,
  ));
  $handler->override_option('calendar_type', 'week');
  $handler = $view->new_display('calendar_period', 'Block view', 'calendar_period_5');
  $handler->override_option('style_plugin', 'calendar_style');
  $handler->override_option('style_options', array(
      'display_type' => 'month',
      'name_size' => '1',
  ));
  $handler->override_option('attachment_position', 'after');
  $handler->override_option('inherit_arguments', TRUE);
  $handler->override_option('inherit_exposed_filters', TRUE);
  $handler->override_option('displays', array(
      'calendar_1' => 0,
      'default' => 0,
      'calendar_block_1' => 'calendar_block_1',
  ));
  $handler->override_option('calendar_type', 'month');
  $handler = $view->new_display('calendar_ical', 'iCal feed', 'calendar_ical_1');
  $handler->override_option('style_plugin', 'ical');
  $handler->override_option('style_options', array(
      'mission_description' => FALSE,
      'description' => '',
      'summary_field' => 'node_title',
      'description_field' => 'node_revisions_body',
      'location_field' => '',
  ));
  $handler->override_option('row_plugin', '');
  $handler->override_option('path', 'calendar/%/ical');
  $handler->override_option('menu', array(
      'type' => 'none',
      'title' => '',
      'description' => '',
      'weight' => 0,
      'name' => 'navigation',
  ));
  $handler->override_option('tab_options', array(
      'type' => 'none',
      'title' => '',
      'description' => '',
      'weight' => 0,
  ));
  $handler->override_option('displays', array(
      'calendar_1' => 'calendar_1',
      'default' => 0,
      'calendar_block_1' => 'calendar_block_1',
  ));
  $handler->override_option('sitename_title', FALSE);
  $views[$view->name] = $view;

  /*
  * View 'timeslotthemes'
  */
  $view = new view;
  $view->name = 'timeslotthemes';
  $view->description = '';
  $view->tag = '';
  $view->view_php = '';
  $view->base_table = 'node';
  $view->is_cacheable = FALSE;
  $view->api_version = 2;
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */
  $handler = $view->new_display('default', 'Defaults', 'default');
  $handler->override_option('fields', array(
      'title' => array(
        'label' => 'Theme Title',
        'alter' => array(
          'alter_text' => 0,
          'text' => '',
          'make_link' => 0,
          'path' => '',
          'link_class' => '',
          'alt' => '',
          'prefix' => '',
          'suffix' => '',
          'help' => '',
          'trim' => 0,
          'max_length' => '',
          'word_boundary' => 1,
          'ellipsis' => 1,
          'strip_tags' => 0,
          'html' => 0,
        ),
        'link_to_node' => 1,
        'exclude' => 0,
        'id' => 'title',
        'table' => 'node',
        'field' => 'title',
        'relationship' => 'none',
        'override' => array(
          'button' => 'Override',
        ),
      ),
      'teaser' => array(
        'label' => 'Description',
        'alter' => array(
          'alter_text' => 0,
          'text' => '',
          'make_link' => 0,
          'path' => '',
          'link_class' => '',
          'alt' => '',
          'prefix' => '',
          'suffix' => '',
          'help' => '',
          'trim' => 0,
          'max_length' => '',
          'word_boundary' => 1,
          'ellipsis' => 1,
          'strip_tags' => 0,
          'html' => 0,
        ),
        'exclude' => 0,
        'id' => 'teaser',
        'table' => 'node_revisions',
        'field' => 'teaser',
        'relationship' => 'none',
        'override' => array(
          'button' => 'Override',
        ),
      ),
      'tid' => array(
        'label' => 'Metadata matches scheduled into this theme',
        'alter' => array(
          'alter_text' => 0,
          'text' => '',
          'make_link' => 0,
          'path' => '',
          'link_class' => '',
          'alt' => '',
          'prefix' => '',
          'suffix' => '',
          'help' => '',
          'trim' => 0,
          'max_length' => '',
          'word_boundary' => 1,
          'ellipsis' => 1,
          'strip_tags' => 0,
          'html' => 0,
        ),
        'type' => 'ul',
        'separator' => ', ',
        'empty' => '',
        'link_to_taxonomy' => 1,
        'limit' => 0,
        'vids' => array(
          '7' => 0,
          '23' => 0,
          '14' => 0,
          '6' => 0,
          '9' => 0,
          '27' => 0,
          '20' => 0,
          '2' => 0,
          '3' => 0,
          '25' => 0,
          '28' => 0,
          '5' => 0,
          '24' => 0,
          '21' => 0,
          '8' => 0,
          '10' => 0,
          '17' => 0,
          '18' => 0,
          '16' => 0,
          '22' => 0,
          '4' => 0,
          '26' => 0,
          '19' => 0,
          '31' => 0,
          '32' => 0,
          '30' => 0,
          '12' => 0,
        ),
        'exclude' => 0,
        'id' => 'tid',
        'table' => 'term_node',
        'field' => 'tid',
        'override' => array(
          'button' => 'Override',
        ),
        'relationship' => 'none',
      ),
  ));
  $handler->override_option('sorts', array(
      'title' => array(
        'order' => 'ASC',
        'id' => 'title',
        'table' => 'node',
        'field' => 'title',
        'override' => array(
          'button' => 'Override',
        ),
        'relationship' => 'none',
      ),
  ));
  $handler->override_option('filters', array(
      'status' => array(
        'operator' => '=',
        'value' => '1',
        'group' => '0',
        'exposed' => FALSE,
        'expose' => array(
          'operator' => FALSE,
          'label' => '',
        ),
        'id' => 'status',
        'table' => 'node',
        'field' => 'status',
        'relationship' => 'none',
      ),
      'type' => array(
        'operator' => 'in',
        'value' => array(
          'om_timeslot_theme' => 'om_timeslot_theme',
        ),
        'group' => '0',
        'exposed' => FALSE,
        'expose' => array(
          'operator' => FALSE,
          'label' => '',
        ),
        'id' => 'type',
        'table' => 'node',
        'field' => 'type',
        'relationship' => 'none',
      ),
  ));
  $handler->override_option('access', array(
      'type' => 'none',
  ));
  $handler->override_option('cache', array(
      'type' => 'none',
  ));
  $handler->override_option('title', 'Current Programming Themes');
  $handler->override_option('header', 'Shows are grouped together by Themes at Denver Open Media.  Themes group shows that might appeal to a common audience together.  ');
  $handler->override_option('header_format', '1');
  $handler->override_option('header_empty', 0);
  $handler->override_option('items_per_page', 0);
  $handler->override_option('style_plugin', 'table');
  $handler->override_option('style_options', array(
      'grouping' => '',
      'override' => 1,
      'sticky' => 0,
      'order' => 'asc',
      'columns' => array(
        'title' => 'title',
        'teaser' => 'teaser',
      ),
      'info' => array(
        'title' => array(
          'sortable' => 0,
          'separator' => '',
        ),
        'teaser' => array(
          'separator' => '',
        ),
      ),
      'default' => '-1',
  ));
  $handler = $view->new_display('page', 'Page', 'page_1');
  $handler->override_option('path', 'timeslot-themes');
  $handler->override_option('menu', array(
      'type' => 'none',
      'title' => '',
      'description' => '',
      'weight' => 0,
      'name' => 'navigation',
  ));
  $handler->override_option('tab_options', array(
      'type' => 'none',
      'title' => '',
      'description' => '',
      'weight' => 0,
  ));
  $views[$view->name] = $view;

  return $views;
}



