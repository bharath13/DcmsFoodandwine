<?php

/**
 * @file
 * TI LSG Ctools content-type plugin to provide a Partner page.
 */
$plugin = array(
  'single' => TRUE,
  'title' => t('Partner Page'),
  'description' => t('Partner page'),
  'category' => t('FW Plugins'),
  'render callback' => 'ti_amg_fw_nativo_partner_render',
);

/**
 * Render Nativo Page.
 */
function ti_amg_fw_nativo_partner_render($subtype, $conf, $panel_args, $context) {
    // Getting the Ads for partner page and
  // passing TRUE to enable newsletter for the partner page.
  $page_info = ti_amg_fwrd_custom_get_ads(TRUE);
  
  // If Navito page added to sponsor logo campaign.
  if (ti_amg_fw_sponsor_logo_campaign_is_nativo()) {
    $page_info['is_nativo_campaign'] = TRUE;
  }
  else {
    $page_info['is_nativo_campaign'] = FALSE;
  }
  
  $block = new stdClass();
  $block->content = theme('partner', array('page_info' => $page_info));
  return $block;
}
