<?php
/**
 * @file
 * Template file for fw newsletter.
 */

/**
 * Implements hook_preprocess_node().
 */
function fw_newsletter_preprocess_node(&$vars) {
  global $base_url;
  $vars['theme_hook_suggestions'][] = 'node__' . $vars['type'] . '__' . $vars['view_mode'];
  if ($vars['type'] == 'newsletter') {
    // Fetching the xid value by node object.
    if (!empty($vars['node'])) {
      $xid = ti_amg_fw_newsletter_xid($vars['node']);
    }
    else {
      $xid = '';
    }
    $newsletter_display_date = '';
    if (!empty($display_date_items = field_get_items('node', $vars['node'], 'field_display_date'))) {
      $display_date_item = reset($display_date_items);
      $unix_display_date = $display_date_item['value'];
      $timezone = variable_get('date_default_timezone');
      $newsletter_display_date = format_date($unix_display_date, 'custom', 'F d, Y', $timezone);
    }
    $vars['newsletter_display_date'] = $newsletter_display_date;
  
    //Top Logo
    $vars['fw_logo_url'] = url($base_url, array('query' => array('xid' => $xid)));
    $vars['top_logo_path'] = url(path_to_theme() . '/images/fw-top-logo.jpg', array('absolute' => TRUE));
    $vars['bot_logo_path'] = url(path_to_theme() . '/images/fw-bottom-logo.jpg', array('absolute' => TRUE));
    // Construct FW Newsletter Socail icon images.
    $vars['fb_icon_path'] = url(path_to_theme() . '/images/icon-fb.png', array('absolute' => TRUE));
    $vars['twitter_icon_path'] = url(path_to_theme() . '/images/icon-twitter.png', array('absolute' => TRUE));
    $vars['pinterest_icon_path'] = url(path_to_theme() . '/images/icon-pinterest.png', array('absolute' => TRUE));
    $vars['insta_icon_path'] = url(path_to_theme() . '/images/icon-insta.png', array('absolute' => TRUE));
    // Fetch newsletter type ad zone value by node object.
    $vars['fwnl_adzone'] = '';
    $fw_ad_zone = _get_newsletter_type_adzone($node);
    if (!empty($fw_ad_zone)) {
      $vars['fwnl_adzone'] = $fw_ad_zone;
    }
    $vars['newsletter_intro'] = (!empty($newsletter_intro = field_get_items('node', $vars['node'], 'field_newsletter_intro'))) ? 
     $newsletter_intro[0]['value'] : '';
  }
}

/**
 * Implements hook_preprocess_page().
 */
function fw_newsletter_preprocess_page(&$vars) {
  global $base_url;
  $node = menu_get_object();
  if ($node && $node->type == 'newsletter') {
    // Fetching the xid value by node object.
    if (!empty($vars['node'])) {
      $xid = ti_amg_fw_newsletter_xid($node);
    }
    else {
      $xid = '';
    }
    //Bottom Logo
    $vars['fw_logo_url'] = url($base_url, array('query' => array('xid' => $xid)));
    $vars['bot_logo_path'] = url(path_to_theme() . '/images/fw-bottom-logo.jpg', array('absolute' => TRUE));
    // Construct FW Newsletter Socail icon images.
    $vars['fb_icon_path'] = url(path_to_theme() . '/images/icon-fb.png', array('absolute' => TRUE));
    $vars['twitter_icon_path'] = url(path_to_theme() . '/images/icon-twitter.png', array('absolute' => TRUE));
    $vars['pinterest_icon_path'] = url(path_to_theme() . '/images/icon-pinterest.png', array('absolute' => TRUE));
    $vars['insta_icon_path'] = url(path_to_theme() . '/images/icon-insta.png', array('absolute' => TRUE));
    // Fetch newsletter type ad zone value by node object.
    $vars['fwnl_adzone'] = '';
    $fw_ad_zone = _get_newsletter_type_adzone($node);
    if (!empty($fw_ad_zone)) {
      $vars['fwnl_adzone'] = $fw_ad_zone;
    }
    // Fetch newsletter type unsubscribe link value by node object.
    $vars['fwnl_unsubscribe_link'] = '';
    $fw_unsubscribe_link = _get_newsletter_type_unsubscribe_link($node);
    if (!empty($fw_unsubscribe_link)) {
      $vars['fwnl_unsubscribe_link'] = $fw_unsubscribe_link;
    }
    // Fetch newsletter pre header value by node object.
    $vars['fwnl_pre_header'] = '';
    if ($pre_header_items = field_get_items('node', $node, 'field_intro')) {
      $pre_header_item = reset($pre_header_items);
      if (!empty($pre_header_item['value'])) {
        $vars['fwnl_pre_header'] = $pre_header_item['value'];
      }
    }
    // Fetch newsletter subject line value by node object.
    $vars['fwnl_subject_line'] = '';
    if ($subject_line_items = field_get_items('node', $node, 'field_subject_line')) {
      $subject_line_item = reset($subject_line_items);
      if (!empty($subject_line_item['value'])) {
        $vars['fwnl_subject_line'] = $subject_line_item['value'];
      }
    }
  }
}

/**
 * Implements hook_preprocess_html().
 */
function fw_newsletter_preprocess_html(&$vars) {
  $node = menu_get_object();
  $head_title = '';
  if (!empty($node) && $node->type == 'newsletter') {
    // Fetch newsletter type by node object.
    _get_newsletter_type($node, $vars);
    $type = $vars['newsletter_type'];
    // Fetch label based on newsletter type.
    $head_title = _get_newsletter_type_label($type);
    if (!empty($head_title)) {
      $vars['head_title'] = $head_title;
    }
  }
}

/**
 * Custom function to get newsletter type.
 */
function _get_newsletter_type($node, &$vars) {
  if ($newsletter_types = field_get_items('node', $node, 'field_newsletter_type')) {
    $newsletter_type = reset($newsletter_types);
    if (!empty($newsletter_type['value'])) {
      $vars['newsletter_type'] = $newsletter_type['value'];
    }
  }
}

/**
 * Custom function to fetch newsletter type label.
 */
function _get_newsletter_type_label($type = NULL) {
  $label = '';
  switch ($type) {
    case 'dish':
         $label = 'The Dish';
      break;

    case 'fwx':
         $label = 'FWx';
      break;

    case 'daily':
         $label = 'The Daily';
      break;

    case 'wine_list':
         $label = 'The Wine List';
      break;

    case 'top_10':
         $label = 'Top 10';
      break;

    case 'travel_tips':
         $label = 'Travel Tips';
      break;
  }
  return $label;
}

/**
 * Custom function to fetch newsletter type ad zone value.
 *
 * @param object $node
 * Node object to get the newsletter type.
 *
 * @return string
 * Returns the ad zone value based on the newsletter type.
 */
function _get_newsletter_type_adzone($node = NULL) {
  $adzone = '';
  if ((!empty($node)) && ($newsletter_types = field_get_items('node', $node, 'field_newsletter_type')) ) {
    $newsletter_type = reset($newsletter_types);
    if (!empty($newsletter_type['value'])) {
      $type = $newsletter_type['value'];
      switch ($type) {
        case 'dish':
             $adzone = '/8484/fw/newsletter_dishweekend';
          break;

        case 'fwx':
             $adzone = '/8484/fw/newsletter_fwx';
          break;

        case 'daily':
             $adzone = '/8484/fw/newsletter_dailyedit';
          break;

        case 'wine_list':
             $adzone = '/8484/fw/newsletter_winelist';
          break;

        case 'top_10':
             $adzone = '/8484/fw/newsletter_top10';
          break;

        case 'travel_tips':
             $adzone = '/8484/fw/newsletter_traveltips';
          break;
      }
    }
  }
  return $adzone;
}

/**
 * Custom function to fetch newsletter type unsubscribe link value.
 *
 * @param object $node
 * Node object to get the newsletter type.
 *
 * @return string
 * Returns the unsubscribe link value based on the newsletter type.
 */
function _get_newsletter_type_unsubscribe_link($node = NULL) {
  $unsubscribe = '';
  if ((!empty($node)) && ($newsletter_types = field_get_items('node', $node, 'field_newsletter_type')) ) {
    $newsletter_type = reset($newsletter_types);
    if (!empty($newsletter_type['value'])) {
      $type = $newsletter_type['value'];
      switch ($type) {
        case 'dish':
             $unsubscribe = '%%=MicrositeURL(5914)=%%';
          break;

        case 'daily':
             $unsubscribe = '%%=MicrositeURL(5941)=%%';
          break;

        case 'wine_list':
             $unsubscribe = '%%=MicrositeURL(5941)=%%';
          break;

        case 'travel_tips':
             $unsubscribe = '%%=MicrositeURL(5941)=%%';
          break;

        case 'top_10':
             $unsubscribe = '%%=MicrositeURL(5941)=%%';
          break;

        case 'fwx':
             $unsubscribe = '%%=MicrositeURL(5918)=%%';
          break;
      }
    }
  }
  return $unsubscribe;
}
