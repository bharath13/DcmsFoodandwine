<?php
/**
 * @file
 * ti_amg_fw_search_context.context.inc
 */

/**
 * Implements hook_context_default_contexts().
 */
function ti_amg_fw_search_context_context_default_contexts() {
  $export = array();

  $context = new stdClass();
  $context->disabled = FALSE; /* Edit this to true to make a default context disabled initially */
  $context->api_version = 3;
  $context->name = 'ti_amg_fw_advanced_search_context';
  $context->description = '';
  $context->tag = '';
  $context->conditions = array(
    'path' => array(
      'values' => array(
        'search/advanced' => 'search/advanced',
      ),
    ),
  );
  $context->reactions = array(
    'block' => array(
      'blocks' => array(
        'system-main' => array(
          'module' => 'system',
          'delta' => 'main',
          'region' => 'content',
          'weight' => '-10',
        ),
        'views-ti_amg_fw_recipe_finder-block_1' => array(
          'module' => 'views',
          'delta' => 'ti_amg_fw_recipe_finder-block_1',
          'region' => 'content',
          'weight' => '-9',
        ),
      ),
    ),
  );
  $context->condition_mode = 0;
  $export['ti_amg_fw_advanced_search_context'] = $context;

  $context = new stdClass();
  $context->disabled = FALSE; /* Edit this to true to make a default context disabled initially */
  $context->api_version = 3;
  $context->name = 'ti_amg_fw_mobile_search_context';
  $context->description = '';
  $context->tag = '';
  $context->conditions = array(
    'path' => array(
      'values' => array(
        'search.mobi*' => 'search.mobi*',
      ),
    ),
    'ti_amg_fw_mobile_context_condition_is_mobile' => array(
      'values' => array(
        'TRUE' => 'TRUE',
      ),
    ),
  );
  $context->reactions = array(
    'block' => array(
      'blocks' => array(
        'ti_amg_fw_search-search_text' => array(
          'module' => 'ti_amg_fw_search',
          'delta' => 'search_text',
          'region' => 'page_title',
          'weight' => '-10',
        ),
        'ti_amg_fw_custom-fw_legacy_leaderboardad_block' => array(
          'module' => 'ti_amg_fw_custom',
          'delta' => 'fw_legacy_leaderboardad_block',
          'region' => 'content',
          'weight' => '-10',
        ),
        'ti_amg_fw_mobile_blocks-mobile_search_filters' => array(
          'module' => 'ti_amg_fw_mobile_blocks',
          'delta' => 'mobile_search_filters',
          'region' => 'content',
          'weight' => '-8',
        ),
        'system-main' => array(
          'module' => 'system',
          'delta' => 'main',
          'region' => 'content',
          'weight' => '-7',
        ),
        'ti_amg_fw_custom-fw_mobilead_320x320_block' => array(
          'module' => 'ti_amg_fw_custom',
          'delta' => 'fw_mobilead_320x320_block',
          'region' => 'content',
          'weight' => '-5',
        ),
      ),
    ),
    'theme_html' => array(
      'class' => 'mobile',
    ),
  );
  $context->condition_mode = 1;
  $export['ti_amg_fw_mobile_search_context'] = $context;

  $context = new stdClass();
  $context->disabled = FALSE; /* Edit this to true to make a default context disabled initially */
  $context->api_version = 3;
  $context->name = 'ti_amg_fw_search_article_context';
  $context->description = '';
  $context->tag = '';
  $context->conditions = array(
    'fw_search' => array(
      'values' => array(
        'article' => 'article',
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
        'ti_amg_fw_search-search_text' => array(
          'module' => 'ti_amg_fw_search',
          'delta' => 'search_text',
          'region' => 'page_title',
          'weight' => '-10',
        ),
        'ti_amg_fw_search-search_tabs' => array(
          'module' => 'ti_amg_fw_search',
          'delta' => 'search_tabs',
          'region' => 'page_title',
          'weight' => '-9',
        ),
        'ti_amg_fw_search-facet_title' => array(
          'module' => 'ti_amg_fw_search',
          'delta' => 'facet_title',
          'region' => 'sidebar_first',
          'weight' => '-10',
        ),
        'current_search-fw_search_active_facets' => array(
          'module' => 'current_search',
          'delta' => 'fw_search_active_facets',
          'region' => 'sidebar_first',
          'weight' => '-9',
        ),
        'facetapi-0xd6MuEx9QLC1stslfPtc6nrvdB1oDj1' => array(
          'module' => 'facetapi',
          'delta' => '0xd6MuEx9QLC1stslfPtc6nrvdB1oDj1',
          'region' => 'sidebar_first',
          'weight' => '-8',
        ),
        'facetapi-d91lq6V4rBS7m4rPVIuDudp2ZKtvJVtP' => array(
          'module' => 'facetapi',
          'delta' => 'd91lq6V4rBS7m4rPVIuDudp2ZKtvJVtP',
          'region' => 'sidebar_first',
          'weight' => '-7',
        ),
      ),
    ),
  );
  $context->condition_mode = 1;
  $export['ti_amg_fw_search_article_context'] = $context;

  $context = new stdClass();
  $context->disabled = FALSE; /* Edit this to true to make a default context disabled initially */
  $context->api_version = 3;
  $context->name = 'ti_amg_fw_search_context';
  $context->description = '';
  $context->tag = '';
  $context->conditions = array(
    'fw_search' => array(
      'values' => array(
        'all' => 'all',
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
        'ti_amg_fw_search-search_text' => array(
          'module' => 'ti_amg_fw_search',
          'delta' => 'search_text',
          'region' => 'page_title',
          'weight' => '-10',
        ),
        'ti_amg_fw_search-search_tabs' => array(
          'module' => 'ti_amg_fw_search',
          'delta' => 'search_tabs',
          'region' => 'page_title',
          'weight' => '-9',
        ),
        'ti_amg_fw_search-facet_title' => array(
          'module' => 'ti_amg_fw_search',
          'delta' => 'facet_title',
          'region' => 'sidebar_first',
          'weight' => '-10',
        ),
        'current_search-fw_search_active_facets' => array(
          'module' => 'current_search',
          'delta' => 'fw_search_active_facets',
          'region' => 'sidebar_first',
          'weight' => '-9',
        ),
        'facetapi-d91lq6V4rBS7m4rPVIuDudp2ZKtvJVtP' => array(
          'module' => 'facetapi',
          'delta' => 'd91lq6V4rBS7m4rPVIuDudp2ZKtvJVtP',
          'region' => 'sidebar_first',
          'weight' => '-8',
        ),
        'facetapi-KXRUwjG5xdIuiV16w25v8ay3R6sS0ONR' => array(
          'module' => 'facetapi',
          'delta' => 'KXRUwjG5xdIuiV16w25v8ay3R6sS0ONR',
          'region' => 'sidebar_first',
          'weight' => '-7',
        ),
      ),
    ),
  );
  $context->condition_mode = 1;
  $export['ti_amg_fw_search_context'] = $context;

  $context = new stdClass();
  $context->disabled = FALSE; /* Edit this to true to make a default context disabled initially */
  $context->api_version = 3;
  $context->name = 'ti_amg_fw_search_recipe_context';
  $context->description = '';
  $context->tag = '';
  $context->conditions = array(
    'fw_search' => array(
      'values' => array(
        'recipe' => 'recipe',
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
        'ti_amg_fw_search-search_text' => array(
          'module' => 'ti_amg_fw_search',
          'delta' => 'search_text',
          'region' => 'page_title',
          'weight' => '-10',
        ),
        'ti_amg_fw_search-search_tabs' => array(
          'module' => 'ti_amg_fw_search',
          'delta' => 'search_tabs',
          'region' => 'page_title',
          'weight' => '-9',
        ),
        'ti_amg_fw_search-facet_title' => array(
          'module' => 'ti_amg_fw_search',
          'delta' => 'facet_title',
          'region' => 'sidebar_first',
          'weight' => '-10',
        ),
        'current_search-fw_search_active_facets' => array(
          'module' => 'current_search',
          'delta' => 'fw_search_active_facets',
          'region' => 'sidebar_first',
          'weight' => '-9',
        ),
        'facetapi-MG11grfhuM0b0TKcHLxcqmKqwF6yNOm6' => array(
          'module' => 'facetapi',
          'delta' => 'MG11grfhuM0b0TKcHLxcqmKqwF6yNOm6',
          'region' => 'sidebar_first',
          'weight' => '-8',
        ),
        'facetapi-zqGCIThD3f6jNid6j31hLvqGO4z2LvJj' => array(
          'module' => 'facetapi',
          'delta' => 'zqGCIThD3f6jNid6j31hLvqGO4z2LvJj',
          'region' => 'sidebar_first',
          'weight' => '-7',
        ),
        'facetapi-iHluhvDgVbRPa1oOonP1D0BrqhnNcAHK' => array(
          'module' => 'facetapi',
          'delta' => 'iHluhvDgVbRPa1oOonP1D0BrqhnNcAHK',
          'region' => 'sidebar_first',
          'weight' => '-6',
        ),
        'facetapi-9Yo5u8j0Z2WvCE3AO82ZU20IMoPV1c8G' => array(
          'module' => 'facetapi',
          'delta' => '9Yo5u8j0Z2WvCE3AO82ZU20IMoPV1c8G',
          'region' => 'sidebar_first',
          'weight' => '-5',
        ),
        'facetapi-DZq236tLBWMq1AOfiau9njTzhjgv4YQc' => array(
          'module' => 'facetapi',
          'delta' => 'DZq236tLBWMq1AOfiau9njTzhjgv4YQc',
          'region' => 'sidebar_first',
          'weight' => '-4',
        ),
        'facetapi-d91lq6V4rBS7m4rPVIuDudp2ZKtvJVtP' => array(
          'module' => 'facetapi',
          'delta' => 'd91lq6V4rBS7m4rPVIuDudp2ZKtvJVtP',
          'region' => 'sidebar_first',
          'weight' => '-3',
        ),
      ),
    ),
  );
  $context->condition_mode = 1;
  $export['ti_amg_fw_search_recipe_context'] = $context;

  return $export;
}
