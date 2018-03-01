<?php
/**
 * @file
 * ti_amg_fw_search_config.facetapi_defaults.inc
 */

/**
 * Implements hook_facetapi_default_facet_settings().
 */
function ti_amg_fw_search_config_facetapi_default_facet_settings() {
  $export = array();

  $facet = new stdClass();
  $facet->disabled = FALSE; /* Edit this to true to make a default facet disabled initially */
  $facet->api_version = 1;
  $facet->name = 'search_api@foodandwine_search::field_chefs_author';
  $facet->searcher = 'search_api@foodandwine_search';
  $facet->realm = '';
  $facet->facet = 'field_chefs_author';
  $facet->enabled = FALSE;
  $facet->settings = array(
    'operator' => 'and',
    'hard_limit' => '-1',
    'dependencies' => array(
      'roles' => array(
        1 => 0,
        2 => 0,
        3 => 0,
        8 => 0,
        7 => 0,
        5 => 0,
        6 => 0,
        4 => 0,
        9 => 0,
        10 => 0,
        11 => 0,
      ),
      'bundle' => 'referenced',
      'bundle_selected' => array(
        'article' => 0,
        'page' => 0,
        'blog' => 0,
        'channel_landing_page' => 0,
        'gallery' => 0,
        'home_page' => 0,
        'image' => 0,
        'person' => 0,
        'recipe' => 0,
        'tout' => 0,
        'video' => 0,
        'webform' => 0,
      ),
    ),
    'facet_mincount' => '1',
    'facet_missing' => '0',
    'flatten' => 0,
    'query_type' => 'term',
    'default_true' => '1',
    'facet_search_ids' => array(),
    'exclude' => 0,
  );
  $export['search_api@foodandwine_search::field_chefs_author'] = $facet;

  $facet = new stdClass();
  $facet->disabled = FALSE; /* Edit this to true to make a default facet disabled initially */
  $facet->api_version = 1;
  $facet->name = 'search_api@foodandwine_search::field_column';
  $facet->searcher = 'search_api@foodandwine_search';
  $facet->realm = '';
  $facet->facet = 'field_column';
  $facet->enabled = FALSE;
  $facet->settings = array(
    'operator' => 'and',
    'hard_limit' => '-1',
    'dependencies' => array(
      'bundle' => 'none',
      'bundle_selected' => array(),
      'roles' => array(),
    ),
    'facet_mincount' => '1',
    'facet_missing' => '0',
    'flatten' => '0',
    'query_type' => 'term',
    'default_true' => '1',
    'facet_search_ids' => array(),
    'exclude' => 0,
  );
  $export['search_api@foodandwine_search::field_column'] = $facet;

  $facet = new stdClass();
  $facet->disabled = FALSE; /* Edit this to true to make a default facet disabled initially */
  $facet->api_version = 1;
  $facet->name = 'search_api@foodandwine_search::field_complex_theme:parents_all';
  $facet->searcher = 'search_api@foodandwine_search';
  $facet->realm = '';
  $facet->facet = 'field_complex_theme:parents_all';
  $facet->enabled = FALSE;
  $facet->settings = array(
    'operator' => 'and',
    'hard_limit' => '-1',
    'dependencies' => array(
      'roles' => array(
        1 => 0,
        2 => 0,
        3 => 0,
        8 => 0,
        7 => 0,
        5 => 0,
        6 => 0,
        4 => 0,
        9 => 0,
        10 => 0,
        11 => 0,
      ),
      'bundle' => 'selected',
      'bundle_selected' => array(
        'recipe' => 'recipe',
        'article' => 0,
        'page' => 0,
        'blog' => 0,
        'channel_landing_page' => 0,
        'gallery' => 0,
        'genericpage' => 0,
        'home_page' => 0,
        'image' => 0,
        'person' => 0,
        'tout' => 0,
        'video' => 0,
        'webform' => 0,
      ),
    ),
    'facet_mincount' => '0',
    'facet_missing' => '0',
    'flatten' => '0',
    'query_type' => 'term',
    'default_true' => '1',
    'facet_search_ids' => array(),
    'exclude' => 0,
  );
  $export['search_api@foodandwine_search::field_complex_theme:parents_all'] = $facet;

  $facet = new stdClass();
  $facet->disabled = FALSE; /* Edit this to true to make a default facet disabled initially */
  $facet->api_version = 1;
  $facet->name = 'search_api@foodandwine_search::field_exclusions';
  $facet->searcher = 'search_api@foodandwine_search';
  $facet->realm = '';
  $facet->facet = 'field_exclusions';
  $facet->enabled = FALSE;
  $facet->settings = array(
    'operator' => 'and',
    'hard_limit' => '-1',
    'dependencies' => array(
      'roles' => array(
        1 => 0,
        2 => 0,
        3 => 0,
        8 => 0,
        7 => 0,
        5 => 0,
        6 => 0,
        4 => 0,
        9 => 0,
        10 => 0,
        11 => 0,
      ),
      'bundle' => 'referenced',
      'bundle_selected' => array(
        'article' => 0,
        'page' => 0,
        'blog' => 0,
        'channel_landing_page' => 0,
        'gallery' => 0,
        'home_page' => 0,
        'image' => 0,
        'person' => 0,
        'recipe' => 0,
        'tout' => 0,
        'video' => 0,
        'webform' => 0,
      ),
    ),
    'facet_mincount' => '1',
    'facet_missing' => '0',
    'flatten' => '0',
    'query_type' => 'term',
    'default_true' => '1',
    'facet_search_ids' => array(),
    'exclude' => 0,
  );
  $export['search_api@foodandwine_search::field_exclusions'] = $facet;

  $facet = new stdClass();
  $facet->disabled = FALSE; /* Edit this to true to make a default facet disabled initially */
  $facet->api_version = 1;
  $facet->name = 'search_api@foodandwine_search::field_ingredient_category';
  $facet->searcher = 'search_api@foodandwine_search';
  $facet->realm = '';
  $facet->facet = 'field_ingredient_category';
  $facet->enabled = FALSE;
  $facet->settings = array(
    'operator' => 'and',
    'hard_limit' => '-1',
    'dependencies' => array(
      'roles' => array(
        1 => 0,
        2 => 0,
        3 => 0,
        8 => 0,
        7 => 0,
        5 => 0,
        6 => 0,
        4 => 0,
        9 => 0,
        10 => 0,
        11 => 0,
      ),
      'bundle' => 'referenced',
      'bundle_selected' => array(
        'article' => 0,
        'page' => 0,
        'blog' => 0,
        'channel_landing_page' => 0,
        'gallery' => 0,
        'home_page' => 0,
        'image' => 0,
        'person' => 0,
        'recipe' => 0,
        'tout' => 0,
        'video' => 0,
        'webform' => 0,
      ),
    ),
    'facet_mincount' => '1',
    'facet_missing' => '0',
    'flatten' => '0',
    'query_type' => 'term',
    'default_true' => '1',
    'facet_search_ids' => array(),
    'exclude' => 0,
  );
  $export['search_api@foodandwine_search::field_ingredient_category'] = $facet;

  $facet = new stdClass();
  $facet->disabled = FALSE; /* Edit this to true to make a default facet disabled initially */
  $facet->api_version = 1;
  $facet->name = 'search_api@foodandwine_search::field_ingredients:field_ingredient_primary';
  $facet->searcher = 'search_api@foodandwine_search';
  $facet->realm = '';
  $facet->facet = 'field_ingredients:field_ingredient_primary';
  $facet->enabled = FALSE;
  $facet->settings = array(
    'operator' => 'and',
    'hard_limit' => '-1',
    'dependencies' => array(
      'bundle' => 'none',
      'bundle_selected' => array(),
      'roles' => array(),
    ),
    'facet_mincount' => '1',
    'facet_missing' => '0',
    'flatten' => '0',
    'query_type' => 'term',
    'default_true' => '1',
    'facet_search_ids' => array(),
    'exclude' => 0,
  );
  $export['search_api@foodandwine_search::field_ingredients:field_ingredient_primary'] = $facet;

  $facet = new stdClass();
  $facet->disabled = FALSE; /* Edit this to true to make a default facet disabled initially */
  $facet->api_version = 1;
  $facet->name = 'search_api@foodandwine_search::field_issue';
  $facet->searcher = 'search_api@foodandwine_search';
  $facet->realm = '';
  $facet->facet = 'field_issue';
  $facet->enabled = FALSE;
  $facet->settings = array(
    'operator' => 'and',
    'hard_limit' => '50',
    'dependencies' => array(
      'bundle' => 'none',
      'bundle_selected' => array(),
      'roles' => array(),
    ),
    'facet_mincount' => '1',
    'facet_missing' => '0',
    'flatten' => '0',
    'query_type' => 'term',
    'default_true' => TRUE,
    'facet_search_ids' => array(),
    'exclude' => 0,
  );
  $export['search_api@foodandwine_search::field_issue'] = $facet;

  $facet = new stdClass();
  $facet->disabled = FALSE; /* Edit this to true to make a default facet disabled initially */
  $facet->api_version = 1;
  $facet->name = 'search_api@foodandwine_search::field_topic';
  $facet->searcher = 'search_api@foodandwine_search';
  $facet->realm = '';
  $facet->facet = 'field_topic';
  $facet->enabled = FALSE;
  $facet->settings = array(
    'operator' => 'and',
    'hard_limit' => '50',
    'dependencies' => array(
      'bundle' => 'none',
      'bundle_selected' => array(),
    ),
    'facet_mincount' => '1',
    'facet_missing' => '0',
    'flatten' => '0',
    'query_type' => 'term',
    'default_true' => TRUE,
    'facet_search_ids' => array(),
    'exclude' => 0,
  );
  $export['search_api@foodandwine_search::field_topic'] = $facet;

  $facet = new stdClass();
  $facet->disabled = FALSE; /* Edit this to true to make a default facet disabled initially */
  $facet->api_version = 1;
  $facet->name = 'search_api@foodandwine_search::type';
  $facet->searcher = 'search_api@foodandwine_search';
  $facet->realm = '';
  $facet->facet = 'type';
  $facet->enabled = FALSE;
  $facet->settings = array(
    'operator' => 'and',
    'hard_limit' => '50',
    'dependencies' => array(
      'roles' => array(),
    ),
    'facet_mincount' => '0',
    'facet_missing' => '0',
    'flatten' => 0,
    'query_type' => 'term',
    'default_true' => TRUE,
    'facet_search_ids' => array(),
    'exclude' => 0,
  );
  $export['search_api@foodandwine_search::type'] = $facet;

  $facet = new stdClass();
  $facet->disabled = FALSE; /* Edit this to true to make a default facet disabled initially */
  $facet->api_version = 1;
  $facet->name = 'search_api@foodandwine_search:block:field_chefs_author';
  $facet->searcher = 'search_api@foodandwine_search';
  $facet->realm = 'block';
  $facet->facet = 'field_chefs_author';
  $facet->enabled = TRUE;
  $facet->settings = array(
    'weight' => 0,
    'widget' => 'facetapi_checkbox_links',
    'filters' => array(),
    'active_sorts' => array(
      'display' => 'display',
      'active' => 0,
      'count' => 0,
      'fw_issue_date' => 0,
      'indexed' => 0,
    ),
    'sort_weight' => array(
      'active' => '-50',
      'count' => '-49',
      'display' => '-48',
      'fw_issue_date' => '0',
      'indexed' => '0',
    ),
    'sort_order' => array(
      'active' => '3',
      'count' => '3',
      'display' => '4',
      'fw_issue_date' => '4',
      'indexed' => '4',
    ),
    'empty_behavior' => 'none',
    'soft_limit' => '0',
    'nofollow' => 1,
    'show_expanded' => 0,
    'empty_text' => array(
      'value' => '',
      'format' => 'wysiwyg',
    ),
    'submit_realm' => 'Save and go back to realm settings',
  );
  $export['search_api@foodandwine_search:block:field_chefs_author'] = $facet;

  $facet = new stdClass();
  $facet->disabled = FALSE; /* Edit this to true to make a default facet disabled initially */
  $facet->api_version = 1;
  $facet->name = 'search_api@foodandwine_search:block:field_column';
  $facet->searcher = 'search_api@foodandwine_search';
  $facet->realm = 'block';
  $facet->facet = 'field_column';
  $facet->enabled = TRUE;
  $facet->settings = array(
    'weight' => 0,
    'widget' => 'facetapi_checkbox_links',
    'filters' => array(),
    'active_sorts' => array(
      'display' => 'display',
      'active' => 0,
      'count' => 0,
      'fw_issue_date' => 0,
      'indexed' => 0,
    ),
    'sort_weight' => array(
      'active' => '-50',
      'count' => '-49',
      'display' => '-48',
      'fw_issue_date' => '0',
      'indexed' => '0',
    ),
    'sort_order' => array(
      'active' => '3',
      'count' => '3',
      'display' => '4',
      'fw_issue_date' => '4',
      'indexed' => '4',
    ),
    'empty_behavior' => 'none',
    'soft_limit' => '0',
    'nofollow' => 1,
    'show_expanded' => 0,
    'empty_text' => array(
      'value' => '',
      'format' => 'wysiwyg',
    ),
    'submit_realm' => 'Save and go back to realm settings',
  );
  $export['search_api@foodandwine_search:block:field_column'] = $facet;

  $facet = new stdClass();
  $facet->disabled = FALSE; /* Edit this to true to make a default facet disabled initially */
  $facet->api_version = 1;
  $facet->name = 'search_api@foodandwine_search:block:field_complex_theme:parents_all';
  $facet->searcher = 'search_api@foodandwine_search';
  $facet->realm = 'block';
  $facet->facet = 'field_complex_theme:parents_all';
  $facet->enabled = TRUE;
  $facet->settings = array(
    'weight' => 0,
    'widget' => 'facetapi_checkbox_links',
    'filters' => array(
      'active_items' => array(
        'status' => 0,
        'weight' => '-50',
      ),
      'current_depth' => array(
        'status' => 0,
        'weight' => '-49',
      ),
      'custom_fw_content_type' => array(
        'status' => 0,
        'weight' => '-48',
      ),
      'fw_complex_theme_filter' => array(
        'status' => 1,
        'weight' => '-48',
      ),
    ),
    'active_sorts' => array(
      'display' => 'display',
      'active' => 0,
      'count' => 0,
      'fw_issue_date' => 0,
      'indexed' => 0,
    ),
    'sort_weight' => array(
      'active' => '-50',
      'count' => '-49',
      'display' => '-48',
      'fw_issue_date' => '0',
      'indexed' => '0',
    ),
    'sort_order' => array(
      'active' => '3',
      'count' => '3',
      'display' => '4',
      'fw_issue_date' => '4',
      'indexed' => '4',
    ),
    'empty_behavior' => 'none',
    'soft_limit' => '0',
    'nofollow' => 1,
    'show_expanded' => 1,
    'empty_text' => array(
      'value' => '',
      'format' => 'wysiwyg',
    ),
    'submit_realm' => 'Save and go back to realm settings',
    'include' => 'ethnicity-cuisines, dish-types, holiday-occasions, meals, recipe-types, seasons, servings',
  );
  $export['search_api@foodandwine_search:block:field_complex_theme:parents_all'] = $facet;

  $facet = new stdClass();
  $facet->disabled = FALSE; /* Edit this to true to make a default facet disabled initially */
  $facet->api_version = 1;
  $facet->name = 'search_api@foodandwine_search:block:field_exclusions';
  $facet->searcher = 'search_api@foodandwine_search';
  $facet->realm = 'block';
  $facet->facet = 'field_exclusions';
  $facet->enabled = TRUE;
  $facet->settings = array(
    'weight' => 0,
    'widget' => 'facetapi_checkbox_links',
    'filters' => array(),
    'active_sorts' => array(
      'display' => 'display',
      'active' => 0,
      'count' => 0,
      'fw_issue_date' => 0,
      'indexed' => 0,
    ),
    'sort_weight' => array(
      'active' => '-50',
      'count' => '-49',
      'display' => '-48',
      'fw_issue_date' => '0',
      'indexed' => '0',
    ),
    'sort_order' => array(
      'active' => '3',
      'count' => '3',
      'display' => '4',
      'fw_issue_date' => '4',
      'indexed' => '4',
    ),
    'empty_behavior' => 'none',
    'soft_limit' => '0',
    'nofollow' => 1,
    'show_expanded' => 0,
    'empty_text' => array(
      'value' => '',
      'format' => 'wysiwyg',
    ),
    'submit_realm' => 'Save and go back to realm settings',
  );
  $export['search_api@foodandwine_search:block:field_exclusions'] = $facet;

  $facet = new stdClass();
  $facet->disabled = FALSE; /* Edit this to true to make a default facet disabled initially */
  $facet->api_version = 1;
  $facet->name = 'search_api@foodandwine_search:block:field_ingredient_category';
  $facet->searcher = 'search_api@foodandwine_search';
  $facet->realm = 'block';
  $facet->facet = 'field_ingredient_category';
  $facet->enabled = TRUE;
  $facet->settings = array(
    'weight' => 0,
    'widget' => 'facetapi_checkbox_links',
    'filters' => array(),
    'active_sorts' => array(
      'active' => 'active',
      'count' => 'count',
      'display' => 'display',
      'fw_issue_date' => 0,
      'indexed' => 0,
    ),
    'sort_weight' => array(
      'active' => '-50',
      'count' => '-49',
      'display' => '-48',
      'fw_issue_date' => '0',
      'indexed' => '0',
    ),
    'sort_order' => array(
      'active' => '3',
      'count' => '3',
      'display' => '4',
      'fw_issue_date' => '4',
      'indexed' => '4',
    ),
    'empty_behavior' => 'none',
    'soft_limit' => '0',
    'nofollow' => 1,
    'show_expanded' => 0,
    'empty_text' => array(
      'value' => '',
      'format' => 'wysiwyg',
    ),
    'submit_realm' => 'Save and go back to realm settings',
  );
  $export['search_api@foodandwine_search:block:field_ingredient_category'] = $facet;

  $facet = new stdClass();
  $facet->disabled = FALSE; /* Edit this to true to make a default facet disabled initially */
  $facet->api_version = 1;
  $facet->name = 'search_api@foodandwine_search:block:field_ingredients:field_ingredient_primary';
  $facet->searcher = 'search_api@foodandwine_search';
  $facet->realm = 'block';
  $facet->facet = 'field_ingredients:field_ingredient_primary';
  $facet->enabled = TRUE;
  $facet->settings = array(
    'weight' => 0,
    'widget' => 'facetapi_checkbox_links',
    'filters' => array(
      'active_items' => array(
        'status' => 0,
        'weight' => '-50',
      ),
      'current_depth' => array(
        'status' => 0,
        'weight' => '-49',
      ),
      'fw_complex_theme_filter' => array(
        'status' => 0,
        'weight' => '-48',
      ),
      'custom_fw_content_type' => array(
        'status' => 0,
        'weight' => '-47',
      ),
      'custom_fw_primary_ingredients' => array(
        'status' => 1,
        'weight' => '-46',
      ),
    ),
    'active_sorts' => array(
      'display' => 'display',
      'active' => 0,
      'count' => 0,
      'fw_issue_date' => 0,
      'indexed' => 0,
    ),
    'sort_weight' => array(
      'active' => '-50',
      'count' => '-49',
      'display' => '-48',
      'fw_issue_date' => '0',
      'indexed' => '0',
    ),
    'sort_order' => array(
      'active' => '3',
      'count' => '3',
      'display' => '4',
      'fw_issue_date' => '4',
      'indexed' => '4',
    ),
    'empty_behavior' => 'none',
    'soft_limit' => '0',
    'nofollow' => 1,
    'show_expanded' => 0,
    'empty_text' => array(
      'value' => '',
      'format' => 'wysiwyg',
    ),
    'submit_realm' => 'Save and go back to realm settings',
    'include' => 'ethnicity-cuisines, dish-types, holiday-occasions, meals, recipe-types, seasons, servings',
  );
  $export['search_api@foodandwine_search:block:field_ingredients:field_ingredient_primary'] = $facet;

  $facet = new stdClass();
  $facet->disabled = FALSE; /* Edit this to true to make a default facet disabled initially */
  $facet->api_version = 1;
  $facet->name = 'search_api@foodandwine_search:block:field_issue';
  $facet->searcher = 'search_api@foodandwine_search';
  $facet->realm = 'block';
  $facet->facet = 'field_issue';
  $facet->enabled = TRUE;
  $facet->settings = array(
    'weight' => 0,
    'widget' => 'fw_facetapi_select',
    'filters' => array(),
    'active_sorts' => array(
      'fw_issue_date' => 'fw_issue_date',
      'active' => 0,
      'count' => 0,
      'display' => 0,
      'indexed' => 0,
    ),
    'sort_weight' => array(
      'active' => '-50',
      'count' => '-49',
      'display' => '-48',
      'fw_issue_date' => '0',
      'indexed' => '0',
    ),
    'sort_order' => array(
      'active' => '3',
      'count' => '3',
      'display' => '4',
      'fw_issue_date' => '3',
      'indexed' => '4',
    ),
    'empty_behavior' => 'none',
    'soft_limit' => '20',
    'nofollow' => 1,
    'show_expanded' => 0,
    'empty_text' => array(
      'value' => '',
      'format' => 'wysiwyg',
    ),
    'submit_realm' => 'Save and go back to realm settings',
  );
  $export['search_api@foodandwine_search:block:field_issue'] = $facet;

  $facet = new stdClass();
  $facet->disabled = FALSE; /* Edit this to true to make a default facet disabled initially */
  $facet->api_version = 1;
  $facet->name = 'search_api@foodandwine_search:block:field_issue:field_taxo_issue_label';
  $facet->searcher = 'search_api@foodandwine_search';
  $facet->realm = 'block';
  $facet->facet = 'field_issue:field_taxo_issue_label';
  $facet->enabled = FALSE;
  $facet->settings = array(
    'weight' => 0,
    'widget' => 'facetapi_links',
    'filters' => array(),
    'active_sorts' => array(
      'active' => 'active',
      'count' => 'count',
      'display' => 'display',
    ),
    'sort_weight' => array(
      'active' => -50,
      'count' => -49,
      'display' => -48,
    ),
    'sort_order' => array(
      'active' => 3,
      'count' => 3,
      'display' => 4,
    ),
    'empty_behavior' => 'none',
    'soft_limit' => 20,
    'nofollow' => 1,
    'show_expanded' => 0,
  );
  $export['search_api@foodandwine_search:block:field_issue:field_taxo_issue_label'] = $facet;

  $facet = new stdClass();
  $facet->disabled = FALSE; /* Edit this to true to make a default facet disabled initially */
  $facet->api_version = 1;
  $facet->name = 'search_api@foodandwine_search:block:type';
  $facet->searcher = 'search_api@foodandwine_search';
  $facet->realm = 'block';
  $facet->facet = 'type';
  $facet->enabled = TRUE;
  $facet->settings = array(
    'weight' => 0,
    'widget' => 'facetapi_links',
    'filters' => array(
      'active_items' => array(
        'status' => 0,
        'weight' => '-50',
      ),
      'custom_fw_content_type' => array(
        'status' => 1,
        'weight' => '-49',
      ),
      'fw_complex_theme_filter' => array(
        'status' => 0,
        'weight' => '-49',
      ),
    ),
    'active_sorts' => array(
      'active' => 'active',
      'count' => 'count',
      'display' => 'display',
      'indexed' => 0,
    ),
    'sort_weight' => array(
      'active' => '-50',
      'count' => '-49',
      'display' => '-48',
      'indexed' => '0',
    ),
    'sort_order' => array(
      'active' => '3',
      'count' => '3',
      'display' => '4',
      'indexed' => '4',
    ),
    'empty_behavior' => 'none',
    'soft_limit' => '20',
    'nofollow' => 1,
    'show_expanded' => 0,
    'include' => 'ethnicity-cuisines, dish-types, holiday-occasions, meals, recipe-types, seasons, servings',
    'empty_text' => array(
      'value' => '',
      'format' => 'wysiwyg',
    ),
    'submit_realm' => 'Save and go back to realm settings',
  );
  $export['search_api@foodandwine_search:block:type'] = $facet;

  return $export;
}
