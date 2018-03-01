<?php
/**
 * @file
 * ti_amg_fw_content_sharing.feeds_tamper_default.inc
 */

/**
 * Implements hook_feeds_tamper_default().
 */
function ti_amg_fw_content_sharing_feeds_tamper_default() {
  $export = array();

  $feeds_tamper = new stdClass();
  $feeds_tamper->disabled = FALSE; /* Edit this to true to make a default feeds_tamper disabled initially */
  $feeds_tamper->api_version = 2;
  $feeds_tamper->id = 'syndication_article-blank_source_1-ti_pronto_cass_boolean';
  $feeds_tamper->importer = 'syndication_article';
  $feeds_tamper->source = 'Blank source 1';
  $feeds_tamper->plugin_id = 'ti_pronto_cass_boolean';
  $feeds_tamper->settings = array(
    'boolean_operation' => '1',
  );
  $feeds_tamper->weight = 0;
  $feeds_tamper->description = 'Boolean Conversion';
  $export['syndication_article-blank_source_1-ti_pronto_cass_boolean'] = $feeds_tamper;

  $feeds_tamper = new stdClass();
  $feeds_tamper->disabled = FALSE; /* Edit this to true to make a default feeds_tamper disabled initially */
  $feeds_tamper->api_version = 2;
  $feeds_tamper->id = 'syndication_article-pronto_authors-implode';
  $feeds_tamper->importer = 'syndication_article';
  $feeds_tamper->source = 'pronto_authors';
  $feeds_tamper->plugin_id = 'implode';
  $feeds_tamper->settings = array(
    'glue' => ', ',
    'real_glue' => ', ',
  );
  $feeds_tamper->weight = 0;
  $feeds_tamper->description = 'Implode';
  $export['syndication_article-pronto_authors-implode'] = $feeds_tamper;

  $feeds_tamper = new stdClass();
  $feeds_tamper->disabled = FALSE; /* Edit this to true to make a default feeds_tamper disabled initially */
  $feeds_tamper->api_version = 2;
  $feeds_tamper->id = 'syndication_article-pronto_hero_image_alt-truncate_text';
  $feeds_tamper->importer = 'syndication_article';
  $feeds_tamper->source = 'pronto_hero_image_alt';
  $feeds_tamper->plugin_id = 'truncate_text';
  $feeds_tamper->settings = array(
    'num_char' => '250',
    'ellipses' => 1,
    'wordsafe' => 1,
  );
  $feeds_tamper->weight = 0;
  $feeds_tamper->description = 'Truncate';
  $export['syndication_article-pronto_hero_image_alt-truncate_text'] = $feeds_tamper;

  $feeds_tamper = new stdClass();
  $feeds_tamper->disabled = FALSE; /* Edit this to true to make a default feeds_tamper disabled initially */
  $feeds_tamper->api_version = 2;
  $feeds_tamper->id = 'syndication_article-pronto_image_path_alias-ti_pronto_caas_seo_path';
  $feeds_tamper->importer = 'syndication_article';
  $feeds_tamper->source = 'pronto_image_path_alias';
  $feeds_tamper->plugin_id = 'ti_pronto_caas_seo_path';
  $feeds_tamper->settings = array(
    'custom_first_param' => 'syndication/image',
  );
  $feeds_tamper->weight = 0;
  $feeds_tamper->description = 'CaaS SEO Path';
  $export['syndication_article-pronto_image_path_alias-ti_pronto_caas_seo_path'] = $feeds_tamper;

  $feeds_tamper = new stdClass();
  $feeds_tamper->disabled = FALSE; /* Edit this to true to make a default feeds_tamper disabled initially */
  $feeds_tamper->api_version = 2;
  $feeds_tamper->id = 'syndication_article-pronto_image_rights_cloned_image-ti_pronto_cass_boolean';
  $feeds_tamper->importer = 'syndication_article';
  $feeds_tamper->source = 'pronto_image_rights_cloned_image';
  $feeds_tamper->plugin_id = 'ti_pronto_cass_boolean';
  $feeds_tamper->settings = array(
    'boolean_operation' => '0',
  );
  $feeds_tamper->weight = 0;
  $feeds_tamper->description = 'Boolean Conversion';
  $export['syndication_article-pronto_image_rights_cloned_image-ti_pronto_cass_boolean'] = $feeds_tamper;

  $feeds_tamper = new stdClass();
  $feeds_tamper->disabled = FALSE; /* Edit this to true to make a default feeds_tamper disabled initially */
  $feeds_tamper->api_version = 2;
  $feeds_tamper->id = 'syndication_article-pronto_image_rights_time_inc_syn-ti_pronto_cass_boolean';
  $feeds_tamper->importer = 'syndication_article';
  $feeds_tamper->source = 'pronto_image_rights_time_inc_syn';
  $feeds_tamper->plugin_id = 'ti_pronto_cass_boolean';
  $feeds_tamper->settings = array(
    'boolean_operation' => '1',
  );
  $feeds_tamper->weight = 0;
  $feeds_tamper->description = 'Boolean Conversion';
  $export['syndication_article-pronto_image_rights_time_inc_syn-ti_pronto_cass_boolean'] = $feeds_tamper;

  $feeds_tamper = new stdClass();
  $feeds_tamper->disabled = FALSE; /* Edit this to true to make a default feeds_tamper disabled initially */
  $feeds_tamper->api_version = 2;
  $feeds_tamper->id = 'syndication_article-pronto_path_alias-ti_pronto_caas_seo_path';
  $feeds_tamper->importer = 'syndication_article';
  $feeds_tamper->source = 'pronto_path_alias';
  $feeds_tamper->plugin_id = 'ti_pronto_caas_seo_path';
  $feeds_tamper->settings = array(
    'custom_first_param' => 'syndication',
  );
  $feeds_tamper->weight = 0;
  $feeds_tamper->description = 'CaaS SEO Path';
  $export['syndication_article-pronto_path_alias-ti_pronto_caas_seo_path'] = $feeds_tamper;

  $feeds_tamper = new stdClass();
  $feeds_tamper->disabled = FALSE; /* Edit this to true to make a default feeds_tamper disabled initially */
  $feeds_tamper->api_version = 2;
  $feeds_tamper->id = 'syndication_article-pronto_seo_path-ti_pronto_caas_seo_path';
  $feeds_tamper->importer = 'syndication_article';
  $feeds_tamper->source = 'pronto_seo_path';
  $feeds_tamper->plugin_id = 'ti_pronto_caas_seo_path';
  $feeds_tamper->settings = array(
    'custom_first_param' => '',
  );
  $feeds_tamper->weight = 2;
  $feeds_tamper->description = 'CaaS SEO Path';
  $export['syndication_article-pronto_seo_path-ti_pronto_caas_seo_path'] = $feeds_tamper;

  $feeds_tamper = new stdClass();
  $feeds_tamper->disabled = FALSE; /* Edit this to true to make a default feeds_tamper disabled initially */
  $feeds_tamper->api_version = 2;
  $feeds_tamper->id = 'syndication_article-pronto_title-html_entity_decode';
  $feeds_tamper->importer = 'syndication_article';
  $feeds_tamper->source = 'pronto_title';
  $feeds_tamper->plugin_id = 'html_entity_decode';
  $feeds_tamper->settings = array();
  $feeds_tamper->weight = 0;
  $feeds_tamper->description = 'HTML entity decode';
  $export['syndication_article-pronto_title-html_entity_decode'] = $feeds_tamper;

  $feeds_tamper = new stdClass();
  $feeds_tamper->disabled = FALSE; /* Edit this to true to make a default feeds_tamper disabled initially */
  $feeds_tamper->api_version = 2;
  $feeds_tamper->id = 'syndication_article-pronto_title-strip_tags';
  $feeds_tamper->importer = 'syndication_article';
  $feeds_tamper->source = 'pronto_title';
  $feeds_tamper->plugin_id = 'strip_tags';
  $feeds_tamper->settings = array(
    'allowed_tags' => '',
  );
  $feeds_tamper->weight = 1;
  $feeds_tamper->description = 'Strip tags';
  $export['syndication_article-pronto_title-strip_tags'] = $feeds_tamper;

  $feeds_tamper = new stdClass();
  $feeds_tamper->disabled = FALSE; /* Edit this to true to make a default feeds_tamper disabled initially */
  $feeds_tamper->api_version = 2;
  $feeds_tamper->id = 'syndication_gallery-blank_source_1-ti_pronto_cass_boolean';
  $feeds_tamper->importer = 'syndication_gallery';
  $feeds_tamper->source = 'Blank source 1';
  $feeds_tamper->plugin_id = 'ti_pronto_cass_boolean';
  $feeds_tamper->settings = array(
    'boolean_operation' => '1',
  );
  $feeds_tamper->weight = 0;
  $feeds_tamper->description = 'Boolean Conversion';
  $export['syndication_gallery-blank_source_1-ti_pronto_cass_boolean'] = $feeds_tamper;

  $feeds_tamper = new stdClass();
  $feeds_tamper->disabled = FALSE; /* Edit this to true to make a default feeds_tamper disabled initially */
  $feeds_tamper->api_version = 2;
  $feeds_tamper->id = 'syndication_gallery-blank_source_2-ti_pronto_cass_boolean';
  $feeds_tamper->importer = 'syndication_gallery';
  $feeds_tamper->source = 'Blank source 2';
  $feeds_tamper->plugin_id = 'ti_pronto_cass_boolean';
  $feeds_tamper->settings = array(
    'boolean_operation' => '1',
  );
  $feeds_tamper->weight = 0;
  $feeds_tamper->description = 'Boolean Conversion';
  $export['syndication_gallery-blank_source_2-ti_pronto_cass_boolean'] = $feeds_tamper;

  $feeds_tamper = new stdClass();
  $feeds_tamper->disabled = FALSE; /* Edit this to true to make a default feeds_tamper disabled initially */
  $feeds_tamper->api_version = 2;
  $feeds_tamper->id = 'syndication_gallery-blank_source_3-ti_pronto_cass_boolean';
  $feeds_tamper->importer = 'syndication_gallery';
  $feeds_tamper->source = 'Blank source 3';
  $feeds_tamper->plugin_id = 'ti_pronto_cass_boolean';
  $feeds_tamper->settings = array(
    'boolean_operation' => '1',
  );
  $feeds_tamper->weight = 0;
  $feeds_tamper->description = 'Boolean Conversion';
  $export['syndication_gallery-blank_source_3-ti_pronto_cass_boolean'] = $feeds_tamper;

  $feeds_tamper = new stdClass();
  $feeds_tamper->disabled = FALSE; /* Edit this to true to make a default feeds_tamper disabled initially */
  $feeds_tamper->api_version = 2;
  $feeds_tamper->id = 'syndication_gallery-pronto_fragments-html_entity_decode';
  $feeds_tamper->importer = 'syndication_gallery';
  $feeds_tamper->source = 'pronto_fragments';
  $feeds_tamper->plugin_id = 'html_entity_decode';
  $feeds_tamper->settings = array();
  $feeds_tamper->weight = 0;
  $feeds_tamper->description = 'HTML entity decode';
  $export['syndication_gallery-pronto_fragments-html_entity_decode'] = $feeds_tamper;

  $feeds_tamper = new stdClass();
  $feeds_tamper->disabled = FALSE; /* Edit this to true to make a default feeds_tamper disabled initially */
  $feeds_tamper->api_version = 2;
  $feeds_tamper->id = 'syndication_gallery-pronto_fragments-implode';
  $feeds_tamper->importer = 'syndication_gallery';
  $feeds_tamper->source = 'pronto_fragments';
  $feeds_tamper->plugin_id = 'implode';
  $feeds_tamper->settings = array(
    'glue' => '',
    'real_glue' => '',
  );
  $feeds_tamper->weight = 2;
  $feeds_tamper->description = 'Implode';
  $export['syndication_gallery-pronto_fragments-implode'] = $feeds_tamper;

  $feeds_tamper = new stdClass();
  $feeds_tamper->disabled = FALSE; /* Edit this to true to make a default feeds_tamper disabled initially */
  $feeds_tamper->api_version = 2;
  $feeds_tamper->id = 'syndication_gallery-pronto_fragments-sprintf';
  $feeds_tamper->importer = 'syndication_gallery';
  $feeds_tamper->source = 'pronto_fragments';
  $feeds_tamper->plugin_id = 'sprintf';
  $feeds_tamper->settings = array(
    'format' => '<p>%s</p>',
  );
  $feeds_tamper->weight = 1;
  $feeds_tamper->description = 'Format string';
  $export['syndication_gallery-pronto_fragments-sprintf'] = $feeds_tamper;

  $feeds_tamper = new stdClass();
  $feeds_tamper->disabled = FALSE; /* Edit this to true to make a default feeds_tamper disabled initially */
  $feeds_tamper->api_version = 2;
  $feeds_tamper->id = 'syndication_gallery-pronto_hero_image_alt-truncate_text';
  $feeds_tamper->importer = 'syndication_gallery';
  $feeds_tamper->source = 'pronto_hero_image_alt';
  $feeds_tamper->plugin_id = 'truncate_text';
  $feeds_tamper->settings = array(
    'num_char' => '250',
    'ellipses' => 1,
    'wordsafe' => 1,
  );
  $feeds_tamper->weight = 0;
  $feeds_tamper->description = 'Truncate';
  $export['syndication_gallery-pronto_hero_image_alt-truncate_text'] = $feeds_tamper;

  $feeds_tamper = new stdClass();
  $feeds_tamper->disabled = FALSE; /* Edit this to true to make a default feeds_tamper disabled initially */
  $feeds_tamper->api_version = 2;
  $feeds_tamper->id = 'syndication_gallery-pronto_hero_image_rights_cloned_image-ti_pronto_cass_boolean';
  $feeds_tamper->importer = 'syndication_gallery';
  $feeds_tamper->source = 'pronto_hero_image_rights_cloned_image';
  $feeds_tamper->plugin_id = 'ti_pronto_cass_boolean';
  $feeds_tamper->settings = array(
    'boolean_operation' => '0',
  );
  $feeds_tamper->weight = 0;
  $feeds_tamper->description = 'Boolean Conversion';
  $export['syndication_gallery-pronto_hero_image_rights_cloned_image-ti_pronto_cass_boolean'] = $feeds_tamper;

  $feeds_tamper = new stdClass();
  $feeds_tamper->disabled = FALSE; /* Edit this to true to make a default feeds_tamper disabled initially */
  $feeds_tamper->api_version = 2;
  $feeds_tamper->id = 'syndication_gallery-pronto_hero_image_rights_time_inc_syn-ti_pronto_cass_boolean';
  $feeds_tamper->importer = 'syndication_gallery';
  $feeds_tamper->source = 'pronto_hero_image_rights_time_inc_syn';
  $feeds_tamper->plugin_id = 'ti_pronto_cass_boolean';
  $feeds_tamper->settings = array(
    'boolean_operation' => '1',
  );
  $feeds_tamper->weight = 0;
  $feeds_tamper->description = 'Boolean Conversion';
  $export['syndication_gallery-pronto_hero_image_rights_time_inc_syn-ti_pronto_cass_boolean'] = $feeds_tamper;

  $feeds_tamper = new stdClass();
  $feeds_tamper->disabled = FALSE; /* Edit this to true to make a default feeds_tamper disabled initially */
  $feeds_tamper->api_version = 2;
  $feeds_tamper->id = 'syndication_gallery-pronto_path_alias-ti_pronto_caas_seo_path';
  $feeds_tamper->importer = 'syndication_gallery';
  $feeds_tamper->source = 'pronto_path_alias';
  $feeds_tamper->plugin_id = 'ti_pronto_caas_seo_path';
  $feeds_tamper->settings = array(
    'custom_first_param' => 'syndication',
  );
  $feeds_tamper->weight = 0;
  $feeds_tamper->description = 'CaaS SEO Path';
  $export['syndication_gallery-pronto_path_alias-ti_pronto_caas_seo_path'] = $feeds_tamper;

  $feeds_tamper = new stdClass();
  $feeds_tamper->disabled = FALSE; /* Edit this to true to make a default feeds_tamper disabled initially */
  $feeds_tamper->api_version = 2;
  $feeds_tamper->id = 'syndication_gallery-pronto_slides_fig_cloned_image-ti_pronto_cass_boolean';
  $feeds_tamper->importer = 'syndication_gallery';
  $feeds_tamper->source = 'pronto_slides_fig_cloned_image';
  $feeds_tamper->plugin_id = 'ti_pronto_cass_boolean';
  $feeds_tamper->settings = array(
    'boolean_operation' => '0',
  );
  $feeds_tamper->weight = 0;
  $feeds_tamper->description = 'Boolean Conversion';
  $export['syndication_gallery-pronto_slides_fig_cloned_image-ti_pronto_cass_boolean'] = $feeds_tamper;

  $feeds_tamper = new stdClass();
  $feeds_tamper->disabled = FALSE; /* Edit this to true to make a default feeds_tamper disabled initially */
  $feeds_tamper->api_version = 2;
  $feeds_tamper->id = 'syndication_gallery-pronto_slides_fig_ti_syndicated-ti_pronto_cass_boolean';
  $feeds_tamper->importer = 'syndication_gallery';
  $feeds_tamper->source = 'pronto_slides_fig_ti_syndicated';
  $feeds_tamper->plugin_id = 'ti_pronto_cass_boolean';
  $feeds_tamper->settings = array(
    'boolean_operation' => '1',
  );
  $feeds_tamper->weight = 0;
  $feeds_tamper->description = 'Boolean Conversion';
  $export['syndication_gallery-pronto_slides_fig_ti_syndicated-ti_pronto_cass_boolean'] = $feeds_tamper;

  $feeds_tamper = new stdClass();
  $feeds_tamper->disabled = FALSE; /* Edit this to true to make a default feeds_tamper disabled initially */
  $feeds_tamper->api_version = 2;
  $feeds_tamper->id = 'syndication_gallery-pronto_slides_figure_alt-truncate_text';
  $feeds_tamper->importer = 'syndication_gallery';
  $feeds_tamper->source = 'pronto_slides_figure_alt';
  $feeds_tamper->plugin_id = 'truncate_text';
  $feeds_tamper->settings = array(
    'num_char' => '250',
    'ellipses' => 1,
    'wordsafe' => 1,
  );
  $feeds_tamper->weight = 0;
  $feeds_tamper->description = 'Truncate';
  $export['syndication_gallery-pronto_slides_figure_alt-truncate_text'] = $feeds_tamper;

  $feeds_tamper = new stdClass();
  $feeds_tamper->disabled = FALSE; /* Edit this to true to make a default feeds_tamper disabled initially */
  $feeds_tamper->api_version = 2;
  $feeds_tamper->id = 'syndication_gallery-pronto_title-html_entity_decode';
  $feeds_tamper->importer = 'syndication_gallery';
  $feeds_tamper->source = 'pronto_title';
  $feeds_tamper->plugin_id = 'html_entity_decode';
  $feeds_tamper->settings = array();
  $feeds_tamper->weight = 0;
  $feeds_tamper->description = 'HTML entity decode';
  $export['syndication_gallery-pronto_title-html_entity_decode'] = $feeds_tamper;

  $feeds_tamper = new stdClass();
  $feeds_tamper->disabled = FALSE; /* Edit this to true to make a default feeds_tamper disabled initially */
  $feeds_tamper->api_version = 2;
  $feeds_tamper->id = 'syndication_gallery-pronto_title-strip_tags';
  $feeds_tamper->importer = 'syndication_gallery';
  $feeds_tamper->source = 'pronto_title';
  $feeds_tamper->plugin_id = 'strip_tags';
  $feeds_tamper->settings = array(
    'allowed_tags' => '',
  );
  $feeds_tamper->weight = 1;
  $feeds_tamper->description = 'Strip tags';
  $export['syndication_gallery-pronto_title-strip_tags'] = $feeds_tamper;

  $feeds_tamper = new stdClass();
  $feeds_tamper->disabled = FALSE; /* Edit this to true to make a default feeds_tamper disabled initially */
  $feeds_tamper->api_version = 2;
  $feeds_tamper->id = 'syndication_recipe-pronto_hero_image_alt-truncate_text';
  $feeds_tamper->importer = 'syndication_recipe';
  $feeds_tamper->source = 'pronto_hero_image_alt';
  $feeds_tamper->plugin_id = 'truncate_text';
  $feeds_tamper->settings = array(
    'num_char' => '250',
    'ellipses' => 1,
    'wordsafe' => 1,
  );
  $feeds_tamper->weight = 0;
  $feeds_tamper->description = 'Truncate';
  $export['syndication_recipe-pronto_hero_image_alt-truncate_text'] = $feeds_tamper;

  $feeds_tamper = new stdClass();
  $feeds_tamper->disabled = FALSE; /* Edit this to true to make a default feeds_tamper disabled initially */
  $feeds_tamper->api_version = 2;
  $feeds_tamper->id = 'syndication_recipe-pronto_image_path_alias-ti_pronto_caas_seo_path';
  $feeds_tamper->importer = 'syndication_recipe';
  $feeds_tamper->source = 'pronto_image_path_alias';
  $feeds_tamper->plugin_id = 'ti_pronto_caas_seo_path';
  $feeds_tamper->settings = array(
    'custom_first_param' => 'syndication/image',
  );
  $feeds_tamper->weight = 0;
  $feeds_tamper->description = 'CaaS SEO Path';
  $export['syndication_recipe-pronto_image_path_alias-ti_pronto_caas_seo_path'] = $feeds_tamper;

  $feeds_tamper = new stdClass();
  $feeds_tamper->disabled = FALSE; /* Edit this to true to make a default feeds_tamper disabled initially */
  $feeds_tamper->api_version = 2;
  $feeds_tamper->id = 'syndication_recipe-pronto_image_rights_cloned_image-ti_pronto_cass_boolean';
  $feeds_tamper->importer = 'syndication_recipe';
  $feeds_tamper->source = 'pronto_image_rights_cloned_image';
  $feeds_tamper->plugin_id = 'ti_pronto_cass_boolean';
  $feeds_tamper->settings = array(
    'boolean_operation' => '0',
  );
  $feeds_tamper->weight = 0;
  $feeds_tamper->description = 'Boolean Conversion';
  $export['syndication_recipe-pronto_image_rights_cloned_image-ti_pronto_cass_boolean'] = $feeds_tamper;

  $feeds_tamper = new stdClass();
  $feeds_tamper->disabled = FALSE; /* Edit this to true to make a default feeds_tamper disabled initially */
  $feeds_tamper->api_version = 2;
  $feeds_tamper->id = 'syndication_recipe-pronto_image_rights_time_inc_syn-ti_pronto_cass_boolean';
  $feeds_tamper->importer = 'syndication_recipe';
  $feeds_tamper->source = 'pronto_image_rights_time_inc_syn';
  $feeds_tamper->plugin_id = 'ti_pronto_cass_boolean';
  $feeds_tamper->settings = array(
    'boolean_operation' => '1',
  );
  $feeds_tamper->weight = 0;
  $feeds_tamper->description = 'Boolean Conversion';
  $export['syndication_recipe-pronto_image_rights_time_inc_syn-ti_pronto_cass_boolean'] = $feeds_tamper;

  $feeds_tamper = new stdClass();
  $feeds_tamper->disabled = FALSE; /* Edit this to true to make a default feeds_tamper disabled initially */
  $feeds_tamper->api_version = 2;
  $feeds_tamper->id = 'syndication_recipe-pronto_path_alias-ti_pronto_caas_seo_path';
  $feeds_tamper->importer = 'syndication_recipe';
  $feeds_tamper->source = 'pronto_path_alias';
  $feeds_tamper->plugin_id = 'ti_pronto_caas_seo_path';
  $feeds_tamper->settings = array(
    'custom_first_param' => 'syndication',
  );
  $feeds_tamper->weight = 0;
  $feeds_tamper->description = 'CaaS SEO Path';
  $export['syndication_recipe-pronto_path_alias-ti_pronto_caas_seo_path'] = $feeds_tamper;

  $feeds_tamper = new stdClass();
  $feeds_tamper->disabled = FALSE; /* Edit this to true to make a default feeds_tamper disabled initially */
  $feeds_tamper->api_version = 2;
  $feeds_tamper->id = 'syndication_recipe-pronto_seo_path-ti_pronto_caas_seo_path';
  $feeds_tamper->importer = 'syndication_recipe';
  $feeds_tamper->source = 'pronto_seo_path';
  $feeds_tamper->plugin_id = 'ti_pronto_caas_seo_path';
  $feeds_tamper->settings = array(
    'custom_first_param' => '',
  );
  $feeds_tamper->weight = 0;
  $feeds_tamper->description = 'CaaS SEO Path';
  $export['syndication_recipe-pronto_seo_path-ti_pronto_caas_seo_path'] = $feeds_tamper;

  $feeds_tamper = new stdClass();
  $feeds_tamper->disabled = FALSE; /* Edit this to true to make a default feeds_tamper disabled initially */
  $feeds_tamper->api_version = 2;
  $feeds_tamper->id = 'syndication_recipe-pronto_syndication-ti_pronto_cass_boolean';
  $feeds_tamper->importer = 'syndication_recipe';
  $feeds_tamper->source = 'pronto_syndication';
  $feeds_tamper->plugin_id = 'ti_pronto_cass_boolean';
  $feeds_tamper->settings = array(
    'boolean_operation' => '1',
  );
  $feeds_tamper->weight = 0;
  $feeds_tamper->description = 'Boolean Conversion';
  $export['syndication_recipe-pronto_syndication-ti_pronto_cass_boolean'] = $feeds_tamper;

  $feeds_tamper = new stdClass();
  $feeds_tamper->disabled = FALSE; /* Edit this to true to make a default feeds_tamper disabled initially */
  $feeds_tamper->api_version = 2;
  $feeds_tamper->id = 'syndication_recipe-pronto_title-html_entity_decode';
  $feeds_tamper->importer = 'syndication_recipe';
  $feeds_tamper->source = 'pronto_title';
  $feeds_tamper->plugin_id = 'html_entity_decode';
  $feeds_tamper->settings = array();
  $feeds_tamper->weight = 0;
  $feeds_tamper->description = 'HTML entity decode';
  $export['syndication_recipe-pronto_title-html_entity_decode'] = $feeds_tamper;

  $feeds_tamper = new stdClass();
  $feeds_tamper->disabled = FALSE; /* Edit this to true to make a default feeds_tamper disabled initially */
  $feeds_tamper->api_version = 2;
  $feeds_tamper->id = 'syndication_recipe-pronto_title-strip_tags';
  $feeds_tamper->importer = 'syndication_recipe';
  $feeds_tamper->source = 'pronto_title';
  $feeds_tamper->plugin_id = 'strip_tags';
  $feeds_tamper->settings = array(
    'allowed_tags' => '',
  );
  $feeds_tamper->weight = 1;
  $feeds_tamper->description = 'Strip tags';
  $export['syndication_recipe-pronto_title-strip_tags'] = $feeds_tamper;

  return $export;
}
