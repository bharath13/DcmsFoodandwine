<?php

/**
 * @file
 * Preprocess header component.
 */

/**
 * Implements hook_preprocess_page().
 */
function ti_amg_fw_mm_config_preprocess_page(&$vars) {
  if ((variable_get('mm_toggle_nav_header', FALSE) == TRUE) && drupal_is_front_page() == FALSE) {
    $fw_mm_header = module_invoke('ti_mm_fallthrough_components', 'block_view', 'mm_navigation');
    $vars['fw_mm_header'] = render($fw_mm_header['content']);
  }
  if (variable_get('mm_toggle_footer', FALSE) == TRUE) {
    $fw_mm_footer = module_invoke('ti_mm_fallthrough_components', 'block_view', 'mm_footer');
    $vars['fw_mm_footer'] = render($fw_mm_footer['content']);
    $node_type = '';
    if (!empty($vars['node'])) {
      $node_type = $vars['node']->type;
    }
    $vars['fw_mm_footer'] = _ti_amg_fw_mm_config_above_footer($node_type) . $vars['fw_mm_footer'];
  }
  if ((!empty($vars['fw_mm_header'])) || (!empty($vars['fw_mm_footer']))) {
    drupal_add_css(drupal_get_path('module', 'ti_amg_fw_mm_config') . '/css/ti_amg_fw_mm_config.css', array('group' => CSS_THEME, 'weight' => 999));
  }
}

/**
 * Implements hook_theme().
 */
function ti_amg_fw_mm_config_theme() {
  return array(
    'ti_amg_fw_mm_config_above_footer' => array(
      'variables' => array(
        'subscribe_title' => NULL,
        'subscribe_dek' => NULL,
        'subscribe_link' => NULL,
        'subscribe_link_text' => NULL,
        'subscribe_cover' => NULL,
        'subscribe_cover_evergreen' => NULL,
        'newsletter_title' => NULL,
        'newsletter_dek' => NULL,
        'newsletter_link' => NULL,
        'newsletter_link_text' => NULL,
        'source_abbr' => NULL,
      ),
      'template' => 'templates/ti_amg_fw_mm_config_above_footer',
    ),
  );
}
/**
 * Helper function to create above footer subscribe info.
 */
function _ti_amg_fw_mm_config_above_footer($node_type) {
  $source = '';
  if ($node_type != '') {
    switch ($node_type) {
      case 'home_page_responsive':
        $source = 'WI_CMS_hp_footer';
        break;
      case 'channel_landing_page_responsive':
        $source = 'WI_CMS_Cha_footer';
        break;
      case 'category':
        $source = 'WI_CMS_cat_footer';
        break;
      case 'video_landing_page':
        $source = 'WI_CMS_Vid_footer';
        break;
      case 'gallery':
      case 'blog':
        // only for Local Flavor
        $source = 'WI_CMS_micro_footer';
        break;
      case 'person':
        $source = 'WI_CMS_contri_footer';
        break;
      default:
        $source = 'WI_CMS_misc_footer';
        break;
    }
  }
  $subscribe_title = variable_get('mm_components_subscribe_title', 'DELICIOUS DEAL');
  $subscribe_dek = variable_get('mm_components_subscribe_dek', '12 ISSUES FOR JUST $12');
  $subscribe_link = variable_get('mm_components_subscribe_link','//subscription.foodandwine.com/storefront/subscribe-to-food-and-wine/link/1042379.html');
  $subscribe_link_text = variable_get('mm_components_subscribe_link_text', 'Subscribe & Save');
  $subscribe_cover = variable_get('mm_components_subscribe_cover_image','//subscription-assets.timeinc.com/current/8422_top1_205_thumb.jpg');
  $subscribe_cover_evergreen = variable_get('mm_components_subscribe_cover_evergreen', '//www.foodandwine.com/sites/all/modules/custom/ti_amg_fw_mm_config/img/FW_20170501_C1_1338634_C1.png');
  $newsletter_title = variable_get('mm_components_newsletter_title', 'Sign Up for our Newsletter');
  $newsletter_dek = variable_get('mm_components_newsletter_dek', 'Keep you in the know on all the latest & greatest food and travel news, and other special offers.');
  $newsletter_link = variable_get('mm_components_newsletter_link', '//http://www.foodandwine.com/newsletter-sign-up?source=');
  $newsletter_link_text = variable_get('mm_components_newsletter_link_text', 'Sign Up');
  return theme('ti_amg_fw_mm_config_above_footer', array(
    'subscribe_title' => $subscribe_title,
    'subscribe_dek' => $subscribe_dek,
    'subscribe_link' => $subscribe_link,
    'subscribe_link_text' => $subscribe_link_text,
    'subscribe_cover' => $subscribe_cover,
    'subscribe_cover_evergreen' => $subscribe_cover_evergreen,
    'newsletter_title' => $newsletter_title,
    'newsletter_dek' => $newsletter_dek,
    'newsletter_link' => $newsletter_link,
    'newsletter_link_text' => $newsletter_link_text,
    'source' => $source,
  ));
}
