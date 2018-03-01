<?php

/**
 * @file
 * TI LSG Ctools content-type plugin to provide a Ussweeps Nativo Page.
 */
$plugin = array(
  'single' => TRUE,
  'title' => t('Ussweeps Page'),
  'description' => t('Ussweeps Page'),
  'category' => t('FW Plugins'),
  'render callback' => 'ti_amg_fw_nativo_ussweeps_render',
);

/**
 * Render Ussweeps Nativo Page.
 */
function ussweeps_render($subtype, $conf, $panel_args, $context) {
  $block = new stdClass();
  $block->content = array(
    '#theme' => 'ussweeps',
  );
  return $block;
}
