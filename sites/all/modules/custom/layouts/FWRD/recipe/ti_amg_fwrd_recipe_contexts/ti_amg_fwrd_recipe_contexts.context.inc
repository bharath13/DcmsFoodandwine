<?php
/**
 * @file
 * ti_amg_fwrd_recipe_contexts.context.inc
 */

/**
 * Implements hook_context_default_contexts().
 */
function ti_amg_fwrd_recipe_contexts_context_default_contexts() {
  $export = array();

  $context = new stdClass();
  $context->disabled = FALSE; /* Edit this to true to make a default context disabled initially */
  $context->api_version = 3;
  $context->name = 'ti_amg_fwrd_recipe_context';
  $context->description = 'Global Recipe Context For Responsive Design';
  $context->tag = '';
  $context->conditions = array(
    'node' => array(
      'values' => array(
        'recipe' => 'recipe',
      ),
      'options' => array(
        'node_form' => '0',
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
        'ti_amg_ads-gcr_728x90' => array(
          'module' => 'ti_amg_ads',
          'delta' => 'gcr_728x90',
          'region' => 'fwrd_page_top_ad',
          'weight' => '-10',
        ),
        'ti_amg_fwrd_recipe-recipe_hero_carousel' => array(
          'module' => 'ti_amg_fwrd_recipe',
          'delta' => 'recipe_hero_carousel',
          'region' => 'fwrd_hero_carousel',
          'weight' => '-10',
        ),
        'system-main' => array(
          'module' => 'system',
          'delta' => 'main',
          'region' => 'fwrd_content',
          'weight' => '-10',
        ),
        'ti_amg_ads-multiad_300x250' => array(
          'module' => 'ti_amg_ads',
          'delta' => 'multiad_300x250',
          'region' => 'fwrd_sidebar_right',
          'weight' => '-10',
        ),
        'ti_amg_fw_custom-fw_outbrain_block' => array(
          'module' => 'ti_amg_fw_custom',
          'delta' => 'fw_outbrain_block',
          'region' => 'fwrd_sidebar_right',
          'weight' => '-9',
        ),
        'ti_amg_ads-normal_300x250' => array(
          'module' => 'ti_amg_ads',
          'delta' => 'normal_300x250',
          'region' => 'fwrd_sidebar_right',
          'weight' => '-8',
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
  t('Global Recipe Context For Responsive Design');
  $export['ti_amg_fwrd_recipe_context'] = $context;

  return $export;
}