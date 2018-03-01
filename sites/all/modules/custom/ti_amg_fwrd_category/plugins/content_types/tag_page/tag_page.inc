<?php

/**
 * @file
 * TI LSG Ctools content-type plugin to provide a Partner page.
 */
$plugin = array(
  'single' => TRUE,
  'title' => t('Tag Page'),
  'description' => t('Tag page'),
  'category' => t('FW Plugins'),
  'required context' => new ctools_context_required(t('Term'), array('term', 'taxonomy_term')),
  'render callback' => 'ti_amg_fw_category_tag_page_render',
);

/**
 * Render Nativo Page.
 */
function ti_amg_fw_category_tag_page_render($subtype, $conf, $panel_args, $context) {
  // Get a shortcut to the term.
  $term = $context->data;
  // Load the vocabulary.
  $vocab = taxonomy_vocabulary_load($term->vid);

  if ($vocab->machine_name != 'fw_category') {
    return;
  }

  $header = ti_amg_fwrd_category_get_term_header($term);
  $touts = ti_amg_fwrd_category_get_touts_by_term($term->tid);

  $block = new stdClass();
  $block->content = theme('tag_page', array('header' => $header,
    'touts' => $touts)
  );
  return $block;
}
