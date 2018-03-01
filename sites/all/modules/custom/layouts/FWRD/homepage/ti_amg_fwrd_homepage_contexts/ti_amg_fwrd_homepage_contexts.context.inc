<?php
/**
 * @file
 * ti_amg_fwrd_homepage_contexts.context.inc
 */

/**
 * Implements hook_context_default_contexts().
 */
function ti_amg_fwrd_homepage_contexts_context_default_contexts() {
  $export = array();

  $context = new stdClass();
  $context->disabled = FALSE; /* Edit this to true to make a default context disabled initially */
  $context->api_version = 3;
  $context->name = 'ti_amg_fwrd_homepage_context';
  $context->description = 'Global Home Page Context For Responsive Design';
  $context->tag = '';
  $context->conditions = array(
    'node' => array(
      'values' => array(
        'home_page_responsive' => 'home_page_responsive',
      ),
      'options' => array(
        'node_form' => '1',
      ),
    ),
    'theme' => array(
      'values' => array(
        'fwresponsive' => 'fwresponsive',
      ),
    ),
  );
  $context->reactions = array(
    'block' => array(
      'blocks' => array(
        'ti_amg_fwrd_homepage-special_event_section' => array(
          'module' => 'ti_amg_fwrd_homepage',
          'delta' => 'special_event_section',
          'region' => 'fwrd_special_event',
          'weight' => '-10',
        ),
        'ti_amg_ads-gcr_728x90' => array(
          'module' => 'ti_amg_ads',
          'delta' => 'gcr_728x90',
          'region' => 'fwrd_page_top_ad',
          'weight' => '-10',
        ),
        'system-main' => array(
          'module' => 'system',
          'delta' => 'main',
          'region' => 'fwrd_content',
          'weight' => '-10',
        ),
        'ti_amg_fwrd_custom-responsive_footer' => array(
          'module' => 'ti_amg_fwrd_custom',
          'delta' => 'responsive_footer',
          'region' => 'fwrd_footer',
          'weight' => '-10',
        ),
      ),
    ),
  );
  $context->condition_mode = 1;

  // Translatables
  // Included for use with string extractors like potx.
  t('Global Home Page Context For Responsive Design');
  $export['ti_amg_fwrd_homepage_context'] = $context;

  return $export;
}
