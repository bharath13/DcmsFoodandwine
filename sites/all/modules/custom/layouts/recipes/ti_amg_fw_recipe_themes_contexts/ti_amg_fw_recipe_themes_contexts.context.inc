<?php
/**
 * @file
 * ti_amg_fw_recipe_themes_contexts.context.inc
 */

/**
 * Implements hook_context_default_contexts().
 */
function ti_amg_fw_recipe_themes_contexts_context_default_contexts() {
  $export = array();

  $context = new stdClass();
  $context->disabled = FALSE; /* Edit this to true to make a default context disabled initially */
  $context->api_version = 3;
  $context->name = 'ti_amg_fw_recipes_themes_parent_page';
  $context->description = '';
  $context->tag = '';
  $context->conditions = array(
    'path' => array(
      'values' => array(
        'recipe-finder/*' => 'recipe-finder/*',
      ),
    ),
    'ti_amg_fw_mobile_context_condition_is_mobile' => array(
      'values' => array(
        'FALSE' => 'FALSE',
      ),
    ),
  );
  $context->reactions = array(
    'block' => array(
      'blocks' => array(
        'ti_amg_fw_custom-recipe_page_title' => array(
          'module' => 'ti_amg_fw_custom',
          'delta' => 'recipe_page_title',
          'region' => 'content',
          'weight' => '-82',
        ),
        'ti_amg_fw_custom-recipe_finder' => array(
          'module' => 'ti_amg_fw_custom',
          'delta' => 'recipe_finder',
          'region' => 'content',
          'weight' => '-80',
        ),
        'views-3cf84f194fe77ed3ff7b6cf3f6b4badd' => array(
          'module' => 'views',
          'delta' => '3cf84f194fe77ed3ff7b6cf3f6b4badd',
          'region' => 'content',
          'weight' => '-79',
        ),
        'system-main' => array(
          'module' => 'system',
          'delta' => 'main',
          'region' => 'content',
          'weight' => '-78',
        ),
      ),
    ),
  );
  $context->condition_mode = 1;
  $export['ti_amg_fw_recipes_themes_parent_page'] = $context;

  return $export;
}
