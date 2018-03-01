<?php
/**
 * @file
 * ti_amg_fw_search_config.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function ti_amg_fw_search_config_ctools_plugin_api($module = NULL, $api = NULL) {
  if ($module == "current_search" && $api == "current_search") {
    return array("version" => "1");
  }
  if ($module == "facetapi" && $api == "facetapi_defaults") {
    return array("version" => "1");
  }
}

/**
 * Implements hook_views_api().
 */
function ti_amg_fw_search_config_views_api($module = NULL, $api = NULL) {
  return array("api" => "3.0");
}

/**
 * Implements hook_default_search_api_index().
 */
function ti_amg_fw_search_config_default_search_api_index() {
  $items = array();
  $items['foodandwine_search'] = entity_import('search_api_index', '{
    "name" : "Foodandwine Search",
    "machine_name" : "foodandwine_search",
    "description" : null,
    "server" : "editorial_search",
    "item_type" : "node",
    "options" : {
      "index_directly" : 1,
      "cron_limit" : "50",
      "fields" : {
        "body:value" : { "type" : "text" },
        "field_author" : { "type" : "list\\u003Cinteger\\u003E", "entity_type" : "node" },
        "field_chefs_author" : { "type" : "list\\u003Cinteger\\u003E", "entity_type" : "node" },
        "field_column" : { "type" : "integer", "entity_type" : "taxonomy_term" },
        "field_complex_theme:parents_all" : {
          "type" : "list\\u003Clist\\u003Cinteger\\u003E\\u003E",
          "entity_type" : "taxonomy_term"
        },
        "field_deck:value" : { "type" : "text" },
        "field_ets_rights" : { "type" : "integer", "entity_type" : "taxonomy_term" },
        "field_exclusions" : { "type" : "list\\u003Cinteger\\u003E", "entity_type" : "taxonomy_term" },
        "field_image_rights" : { "type" : "integer", "entity_type" : "taxonomy_term" },
        "field_images" : { "type" : "integer", "entity_type" : "node" },
        "field_ingredient_category" : { "type" : "list\\u003Cinteger\\u003E", "entity_type" : "taxonomy_term" },
        "field_ingredients:field_ingredient_primary" : { "type" : "list\\u003Cinteger\\u003E", "entity_type" : "taxonomy_term" },
        "field_issue" : { "type" : "integer", "entity_type" : "taxonomy_term" },
        "field_issue:field_taxo_issue_label" : { "type" : "text" },
        "field_sponsor_flag" : { "type" : "boolean" },
        "field_sponsor_list" : { "type" : "list\\u003Cinteger\\u003E", "entity_type" : "node" },
        "field_topic" : { "type" : "list\\u003Cinteger\\u003E", "entity_type" : "taxonomy_term" },
        "field_topic:field_taxo_topic_label" : { "type" : "list\\u003Ctext\\u003E" },
        "field_wf_edit_check_1" : { "type" : "boolean" },
        "field_wf_edit_check_2" : { "type" : "boolean" },
        "field_wf_final_check" : { "type" : "boolean" },
        "field_wf_parsing" : { "type" : "boolean" },
        "field_wf_parsing_qa" : { "type" : "boolean" },
        "field_wf_photo_added" : { "type" : "boolean" },
        "field_wf_photo_qa" : { "type" : "boolean" },
        "field_wf_producer_qa" : { "type" : "boolean" },
        "field_wf_rights_check" : { "type" : "boolean" },
        "published_at" : { "type" : "date" },
        "search_api_language" : { "type" : "string" },
        "status" : { "type" : "integer" },
        "title" : { "type" : "text" },
        "type" : { "type" : "string" }
      }
    },
    "enabled" : "1",
    "read_only" : "0",
    "entity_type" : "search_api_index",
    "rdf_mapping" : []
  }');
  return $items;
}
