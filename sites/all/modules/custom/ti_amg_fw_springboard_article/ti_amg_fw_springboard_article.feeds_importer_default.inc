<?php
/**
 * @file
 * ti_amg_fw_springboard_article.feeds_importer_default.inc
 */

/**
 * Implements hook_feeds_importer_default().
 */
function ti_amg_fw_springboard_article_feeds_importer_default() {
  $export = array();

  $feeds_importer = new stdClass();
  $feeds_importer->disabled = FALSE; /* Edit this to true to make a default feeds_importer disabled initially */
  $feeds_importer->api_version = 1;
  $feeds_importer->id = 'fw_springboard_article';
  $feeds_importer->config = array(
    'name' => 'FW springboard Article',
    'description' => 'FoodAndWine Springboard Article Importer',
    'fetcher' => array(
      'plugin_key' => 'TiFeedsFansidedFetcher',
      'config' => array(),
    ),
    'parser' => array(
      'plugin_key' => 'FeedsExJsonPath',
      'config' => array(
        'context' => array(
          'value' => '$.*',
        ),
        'sources' => array(
          'guid' => array(
            'name' => 'Guid',
            'value' => '$.guid',
            'debug' => 1,
            'weight' => '2',
          ),
          'image' => array(
            'name' => 'Image URL',
            'value' => '$.featured_image_url',
            'debug' => 1,
            'weight' => '3',
          ),
          'author' => array(
            'name' => 'Author',
            'value' => '$.post_author_name',
            'debug' => 1,
            'weight' => '4',
          ),
          'body' => array(
            'name' => 'Body',
            'value' => '$.body',
            'debug' => 1,
            'weight' => '5',
          ),
          'title' => array(
            'name' => 'Title',
            'value' => '$.title',
            'debug' => 1,
            'weight' => '6',
          ),
          'post_excerpt' => array(
            'name' => 'Post Excerpt',
            'value' => '$.post_excerpt',
            'debug' => 0,
            'weight' => '8',
          ),
          'post_tags' => array(
            'name' => 'Post tags',
            'value' => '$.post_tags',
            'debug' => 0,
            'weight' => '9',
          ),
          'author_email_id' => array(
            'name' => 'Author Email ID',
            'value' => '$.post_author_email',
            'debug' => 0,
            'weight' => '10',
          ),
          'post_id' => array(
            'name' => 'Post ID',
            'value' => '$.post_id',
            'debug' => 0,
            'weight' => '21',
          ),
          'author_email' => array(
            'name' => 'Author Email',
            'value' => '$.post_author_email',
            'debug' => 0,
            'weight' => '22',
          ),
          'is_locked' => array(
            'name' => 'Post Is Locked',
            'value' => '$.locked',
            'debug' => 0,
            'weight' => '23',
          ),
          'prepaid' => array(
            'name' => 'Prepaid',
            'value' => '$.payable',
            'debug' => 0,
            'weight' => '24',
          ),
          'flat_rate' => array(
            'name' => 'Flat Rate',
            'value' => '$.flat_rate',
            'debug' => 0,
            'weight' => '25',
          ),
        ),
        'display_errors' => 1,
        'debug_mode' => 1,
        'source_encoding' => array(
          0 => 'auto',
        ),
      ),
    ),
    'processor' => array(
      'plugin_key' => 'FeedsSpringboardProcessor',
      'config' => array(
        'expire' => '-1',
        'author' => 0,
        'authorize' => 1,
        'mappings' => array(
          0 => array(
            'source' => 'guid',
            'target' => 'guid',
            'unique' => 1,
            'language' => 'und',
          ),
          1 => array(
            'source' => 'body',
            'target' => 'body',
            'unique' => FALSE,
            'language' => 'und',
          ),
          2 => array(
            'source' => 'image',
            'target' => 'field_images:image:entityreference_feeds:guid',
            'unique' => FALSE,
            'language' => 'und',
          ),
          3 => array(
            'source' => 'image',
            'target' => 'field_images:image:file_feeds_set_target:field_image:uri',
            'unique' => FALSE,
            'language' => 'und',
          ),
          4 => array(
            'source' => 'title',
            'target' => 'title',
            'unique' => FALSE,
            'language' => 'und',
          ),
          5 => array(
            'source' => 'title',
            'target' => 'field_headline',
            'unique' => FALSE,
            'language' => 'und',
          ),
          6 => array(
            'source' => 'title',
            'target' => 'field_images:image:entityreference_feeds:title',
            'unique' => FALSE,
            'language' => 'und',
          ),
          7 => array(
            'source' => 'Blank source 1',
            'target' => 'uid',
            'unique' => FALSE,
            'language' => 'und',
          ),
          8 => array(
            'source' => 'Blank source 3',
            'target' => 'field_images:image:entityreference_feeds:author',
            'unique' => FALSE,
            'language' => 'und',
          ),
          9 => array(
            'source' => 'post_tags',
            'target' => 'field_fw_tags',
            'term_search' => '0',
            'autocreate' => 1,
            'language' => 'und',
          ),
          10 => array(
            'source' => 'post_id',
            'target' => 'field_springboard_id',
            'unique' => FALSE,
            'language' => 'und',
          ),
          11 => array(
            'source' => 'author',
            'target' => 'field_springboard_author_name',
            'unique' => FALSE,
            'language' => 'und',
          ),
          12 => array(
            'source' => 'author_email',
            'target' => 'field_springboard_author_email',
            'unique' => FALSE,
            'language' => 'und',
          ),
          13 => array(
            'source' => 'is_locked',
            'target' => 'field_springboard_is_locked',
            'unique' => FALSE,
            'language' => 'und',
          ),
          14 => array(
            'source' => 'prepaid',
            'target' => 'field_springboard_is_prepaid',
            'unique' => FALSE,
            'language' => 'und',
          ),
          15 => array(
            'source' => 'flat_rate',
            'target' => 'field_springboard_prepaid_price',
            'unique' => FALSE,
            'language' => 'und',
          ),
        ),
        'insert_new' => '1',
        'update_existing' => '2',
        'update_non_existent' => 'skip',
        'input_format' => 'filtered_html',
        'skip_hash_check' => 0,
        'bundle' => 'article',
        'language' => 'und',
        'skip_fields' => array(),
      ),
    ),
    'content_type' => '',
    'update' => 0,
    'import_period' => '0',
    'expire_period' => 3600,
    'import_on_create' => 1,
    'process_in_background' => 0,
  );
  $export['fw_springboard_article'] = $feeds_importer;

  return $export;
}
