<?php
/*
 * To change update the blog urls using drush command call back function
 */

define('RESULT_LIMIT_END_DAYS', 30);
define('RESULT_LIMIT_START_DAYS', 0);

/**
* Implementation of hook_drush_command().
*/
function ti_amg_fw_custom_drush_command() {
  $items = array();
  // Name of the drush command.
  $items['blog-url-update'] = array(
    'description' => 'Updating the blog URLs',
    'callback' => 'drush_update_blog_urls',
  );
  $items['update-special-char-urls'] = array(
    'description' => 'Updating special characters on the URLs',
    'callback' => 'drush_update_special_char_on_url',
    'arguments' => array(
      'content_type' => t('Select the content type to update the special cahracters on URLs'),
    ),
  );
  // To update the recipe contents that are created in between before launch
  $items['recipe-update'] = array(
    'description' => 'To Update the recipe content items',
    'callback' => 'drush_recipe_update',
  );
  // To update the recipes and slideshows mapping for the exisitng migrated content
  $items['recipe-slideshow-mapping-update'] = array(
    'description' => 'Updating the slideshows slides to recipes',
    'callback' => 'drush_recipe_slideshow_mapping_update',
    'arguments' => array(
      'environment' => t('Select the Environment'),
    ),
  );
  // To Update Recipes with ratings
  $items['recipe-ratings'] = array(
    'description' => 'Updating Recipes with ratings',
    'callback' => 'drush_recipe_ratings',
  );

  // To Update fivestar table with already existing rating
  $items['update-rating-table'] = array(
    'description' => 'Update fivestar table with already existing rating',
    'callback' => 'drush_update_rating_table',
  );

  $items['ti_amg_fw_custom_update_redirect_path'] = array(
    'description' => 'Add URL Redirect',
    'aliases' => array('url-redirects'),
    'arguments' => array(
      'csv_path' => 'Path of csv file',
      'source_column_number' => 'Column Number that contains source URL',
      'destination_column_number' => 'Column Number that contains destination URL',
    ),
  );

  $items['ti_amg_fw_custom_update_robots_metatag'] = array(
    'description' => 'Add robots metatags',
    'aliases' => array('video_urls'),
    'arguments' => array(
      'csv_path' => 'Path of csv file',
      'source_column_number' => 'Column Number that contains URL',
    ),
  );

  $items['ti_amg_fw_custom_common_taxonomy_mapping'] = array(
    'description' => 'Mapping the content with Common Taxonomy',
    'aliases' => array('taxonomy-mapping'),
    'arguments' => array(
      'file_path' => 'Path of json file',
      'content_type' => 'Content Type for Taxonomy Mapping',
    ),
  );

  // To Update Recipe, slideshow and video content types with tags
  $items['update_tags'] = array(
    'description' => 'Updating Recipe, Slideshow and Video content types with tags',
    'callback' => 'drush_update_tags',
    'arguments' => array(
      'csv_path' => 'Path of csv file',
      'node_created_from' => 'node created from date',
      'node_created_to' => 'node created up to date',
      'vocabulary_name' => 'vocabulary name',
    ),
  );

  // To remove unwanted tags.
  $items['ti_amg_fw_custom_remove_unwanted_tags'] = array(
    'description' => 'Remove unwanted tags',
    'aliases' => array('remove-unwanted-tags'),
    'arguments' => array(
      'csv_path' => 'Path of csv file',
      'source_column_number' => 'Column Number that contains unwanted tags',
      'vocabulary_name' => 'vocabulary name',
    ),
  );

  // To clean up the blog's broken url redirects and old url aliases.
  $items['ti_amg_fw_custom_blog_url_cleanup'] = array(
    'description' => 'Cleaning up the broken blog URLs',
    'aliases' => array('remove-unwanted-broken-blog-urls'),
  );

  // To update syndication field value based on noindex and nofollow tag.
  $items['ti_amg_fw_custom_unsearchable_content_update'] = array(
    'description' => 'Updating syndication field based on unsearchable content',
    'aliases' => array('update-syndication-by-unsearchable-content'),
    'arguments' => array(
      'content_type' => t('Select the content type to update the syndication value'),
      'limit' => t('The limit of the content items to process'),
    ),
  );


  // To update syndication field value based on noindex and nofollow tag.
  $items['ti_amg_fw_custom_body_related_short_code'] = array(
    'description' => 'Update the body field related link short codes.',
    'aliases' => array('update-body-related-links'),
  );

  // To update syndication field value based on noindex and nofollow tag.
  $items['ti_amg_fw_custom_update_key_value_pair'] = array(
    'description' => 'Update the key value pair for ads.',
    'aliases' => array('update-ad-key-value'),
  );

  $items['article-metatag-update'] = array(
     'callback'    => 'ti_amg_fw_custom_update_article_metatag',
     'description' => dt('Update the article content types meta tag'),
   );

  // To log local flavor nids into migration success file.
  $items['ti_amg_fw_custom_log_local_flavor_nids'] = array(
    'description' => 'Log local flavor nids.',
    'aliases' => array('log-local-flavor-nids'),
  );

  // To update blog position value and body field text format.
  $items['ti_amg_fw_custom_update_blog_position'] = array(
    'description' => 'Update blog image position.',
    'aliases' => array('update-blog-position-value'),
  );

  // To update editor domain to anonymus domain in the gallery slide goto url.
  $items['ti_amg_fw_custom_update_editor_domain_url'] = array(
    'description' => 'Update editor domain to anonymus domain in the url.',
    'aliases' => array('update-editor-domain-url'),
  );

  $items['article-headline-seo-path'] = array(
     'callback'    => 'ti_amg_fw_custom_update_article_seo_path',
     'description' => dt('Update the article content types meta tag'),
   );

   $items['article-update-image-path'] = array(
      'callback'    => 'ti_amg_fw_custom_article_update_image_path',
      'description' => dt('Update the article content types body image field path'),
    );

    $items['article-update-video-text-format'] = array(
       'callback'    => 'ti_amg_fw_custom_article_update_video_text_format',
       'description' => dt('Update the article content types body image field path'),
     );

    $items['fwx_inline_image_migration'] = array(
      'callback'    => 'ti_amg_fw_custom_fwx_inline_image_migration',
      'aliases' => array('fwx-inline-image-migration'),
      'description' => t('Migrate inline images from FWX'),
    );

    $items['migrate_article_category'] = array(
      'callback'    => 'ti_amg_fw_custom_migrate_article_category',
      'aliases' => array('migrate-field-category'),
      'description' => t('Migrate field_category to field_fw_category on Article content type'),
    );

  $items['remove_duplicate_alias'] = array(
    'callback' => 'ti_amg_fw_custom_remove_duplicate_alias',
    'aliases' => array('remove-duplicate-alias'),
    'description' => t('Remove duplicate aliases and add redirects'),
  );

  return $items;
}


/**
 *
 * Call back function for removing duplicate aliases
 */
function ti_amg_fw_custom_remove_duplicate_alias() {
  $query = db_select('url_alias', 'u');
  $query->fields('u', array('source'));
  $query->condition('u.source', 'node/%', 'LIKE');
  $query->groupBy('u.alias');
  $query->addExpression('COUNT(u.pid)', 'pcount');
  $query->havingCondition('pcount', 1, '>');
  $result = $query->execute()->fetchAll();
  if (!empty($result) && count($result) > 0) {
    foreach ($result as $row) {
      $nids[] = $row->source;
    }
  }

  $unique_nids = array_unique($nids);

  //Break up all of our data so each process does not time out.
  $chunks = array_chunk($unique_nids, 50);
  $operations = array();
  $count_chunks = count($chunks);
  //for every chunk, assign some method to run on that chunk of data
  foreach ($chunks as $chunk) {
    $i++;
    $operations[] = array(
      "ti_amg_fw_custom_duplicate_alias_callback",
      array(
        $chunk,
        'details' => t('(Importing chunk @chunk  of  @count)', array(
          '@chunk ' => $i,
          '@count' => $count_chunks,
        )),
      ),
    );
  }

  //put all that information into our batch array
  $batch = array(
    'operations' => $operations,
    'title' => t('Import batch'),
    'init_message' => t('Initializing'),
    'error_message' => t('An error occurred'),
    'finished' => 'ti_amg_fw_custom_update_text_format_finished',
  );

  //Get the batch process all ready!
  batch_set($batch);
  $batch =& batch_get();

  //Because we are doing this on the back-end, we set progressive to false.
  $batch['progressive'] = FALSE;

  //Start processing the batch operations.
  drush_backend_batch_process();
}

function ti_amg_fw_custom_duplicate_alias_callback($chunk, $operation_details, &$context) {
  $success_log_fp = fopen("sites/default/files/remove_duplicate_alias_page.txt", "a+");
  foreach ($chunk as $key => $nid) {
    $raw_data = array();
    $temp_alias = array();
    $unique_alias = array();
    $redirect_list = array();
    $first_key = 0;
    $first_value = '';
    $query = db_select('url_alias', 'u');
    $query->fields('u', array('pid', 'source', 'alias'));
    $query->condition('u.source', $nid, '=');
    $result = $query->execute()->fetchAll();
    if (!empty($result) && count($result) > 0) {
      foreach ($result as $row) {
        $raw_data[$row->pid] = $row->alias;
      }
    }
    // Get current alias of the node
    reset($raw_data);
    list($first_key, $first_value) = each($raw_data);

    $temp_alias = array($first_value);
    // Duplicate aliases for single node
    $unique_alias = array_unique($raw_data);
    // Duplicate aliases excluding current alias of the node
    $redirect_list = array_diff($unique_alias, $temp_alias);
    // List all the aliases except first pid
    $remove_list = array_diff($raw_data, $temp_alias);

    if (count($redirect_list) >= 1) {
      foreach ($redirect_list as $rd_url) {
        // Build custom query instead of using "redirect_load_by_source"
        // to identify redirects with base URL.
        $rd_query = db_select('redirect', 'r');
        $rd_query->fields('r', array('rid'));
        $rd_query->condition('r.source', '%' . $rd_url, 'LIKE');
        $rd_result = $rd_query->execute()->fetchAll();
        if (!empty($rd_result) && count($rd_result) > 0) {
          foreach ($rd_result as $rd_row) {
            $rd_raw[] = $rd_row->rid;
          }
        }

        // Add redirect if it is not already exists.
        if (empty($rd_raw)) {
          $redirect = new stdClass();
          redirect_object_prepare(
            $redirect, [
              'source' => $rd_url,
              'source_options' => [],
              'redirect' => $nid,
              'redirect_options' => [],
              'language' => LANGUAGE_NONE,
            ]
          );
          redirect_save($redirect);
          drush_print("\n Redirect has been created for Alias: - $rd_url\n");
        }
        unset($rd_raw);
        // Delete duplicate aliases
        $rm_alias = db_delete('url_alias');
        $rm_alias->condition('source', $nid, 'LIKE');
        $rm_alias->condition('alias', $rd_url, 'LIKE');
        $rm_alias->condition('pid', $first_key, '<>');
        $rm_alias->execute();
        drush_print("\n Alias Removed: - $rd_url\n");
      }

      drush_print("\n Alias cleaned up for node: $nid\n");
      fwrite($success_log_fp, $nid . "\n");
    }
    $context['message'] = $operation_details; //Will show what chunk we're on.
  }
}

/**
 *
 * Call back function for field category migration on Article
 */
function ti_amg_fw_custom_migrate_article_category() {
  $bundle = 'article';

  $query = db_select('field_data_field_category', 'f');
  $query->fields('f',array('entity_id', 'field_category_tid'));
  $query->condition('f.bundle', $bundle, '=');
  $result = $query->execute()->fetchAll();
  if (!empty($result) && count($result) > 0) {
    foreach($result as $row) {
      $nids[] = $row->entity_id;
      $taxo_data[$row->entity_id] = $row->field_category_tid;
    }
  }

  //Break up all of our data so each process does not time out.
  $chunks = array_chunk($nids, 50);
  $operations = array();
  $count_chunks = count($chunks);
  //for every chunk, assign some method to run on that chunk of data
  foreach ($chunks as $chunk) {
    $i++;
    $operations[] = array("ti_amg_fw_custom_migrate_category", array( $chunk ,'details'=> t('(Importing chunk @chunk  of  @count)', array('@chunk '=>$i, '@count'=>$count_chunks)), $taxo_data));
  }

  //put all that information into our batch array
  $batch = array(
    'operations' => $operations,
    'title' => t('Import batch'),
    'init_message' => t('Initializing'),
    'error_message' => t('An error occurred'),
    'finished' => 'ti_amg_fw_custom_update_text_format_finished'
  );

  //Get the batch process all ready!
  batch_set($batch);
  $batch =& batch_get();

  //Because we are doing this on the back-end, we set progressive to false.
  $batch['progressive'] = FALSE;

  //Start processing the batch operations.
  drush_backend_batch_process();
}

function ti_amg_fw_custom_migrate_category($chunk, $operation_details, $taxo_data, &$context) {

  $success_log_fp = fopen("sites/default/files/article_migrate_category.txt", "a+");
  $jj = 0;
  $file_path = '';
  $img = array();
  $content_updated = '';
  foreach ($chunk as $key => $nid) {
    $node = node_load($nid);
    $taxo_term_id = $taxo_data[$nid];
   
    if($taxo_term_id != '') {
      $node->field_fw_category[LANGUAGE_NONE][0]['tid'] = $taxo_term_id;
      field_attach_update('node', $node);
      entity_get_controller('node')->resetCache(array($nid));
      drush_print("\n Category field is migrated for node : $nid\n");
      fwrite($success_log_fp, $nid . "\n");
      $context['message'] = $operation_details; //Will show what chunk we're on.
    }
  } 
}

function ti_amg_fw_custom_fwx_inline_image_migration() {

  $bundle = 'article';
  $search = 'fwx/sites/default/files';
  $find_or = 'fwx/sites/production/files';

  $query = db_select('node', 'n');
  $query->join('field_data_body', 'f', 'n.nid = f.entity_id');
  $query->fields('n',array('nid'));
  $query->condition('f.bundle', $bundle, '=');
  $db_or = db_or();
  $db_or->condition('f.body_value', '%'.$search.'%', 'LIKE');
  $db_or->condition('f.body_value', '%'.$find_or.'%', 'LIKE');
  $query->condition($db_or);
  $result = $query->execute()->fetchAll();
  if (!empty($result) && count($result) > 0) {
    foreach($result as $row) {
      $nids[] = $row->nid;
    }
  }

  //Break up all of our data so each process does not time out.
  $chunks = array_chunk($nids, 50);
  $operations = array();
  $count_chunks = count($chunks);
  //for every chunk, assign some method to run on that chunk of data
  foreach ($chunks as $chunk) {
    $i++;
    $operations[] = array("ti_amg_fw_custom_update_inline_image", array( $chunk ,'details'=> t('(Importing chunk @chunk  of  @count)', array('@chunk '=>$i, '@count'=>$count_chunks))));
  }

  //put all that information into our batch array
  $batch = array(
    'operations' => $operations,
    'title' => t('Import batch'),
    'init_message' => t('Initializing'),
    'error_message' => t('An error occurred'),
    'finished' => 'ti_amg_fw_custom_update_text_format_finished'
  );

  //Get the batch process all ready!
  batch_set($batch);
  $batch =& batch_get();

  //Because we are doing this on the back-end, we set progressive to false.
  $batch['progressive'] = FALSE;

  //Start processing the batch operations.
  drush_backend_batch_process();
}

function ti_amg_fw_custom_update_inline_image($chunk, $operation_details, &$context) {
  $success_log_fp = fopen("sites/default/files/article_update_inline_image.txt", "a+");
  $jj = 0;
  $file_path = '';
  $img = array();
  $content_updated = '';
  foreach ($chunk as $key => $nid) {
    $node = node_load($nid);
    $body = $node->body[LANGUAGE_NONE][0]['value'];
    //preg_match_all('/<img[^>]+>/i',$body, $result); 
    //$pattern = "/<img[^>]+>/i";

    $pattern = '/<img.*?src=".*?fwx\/.*?".*?>/i';
    $replacement = '';
    $content_updated = preg_replace($pattern, $replacement, $body);
   
    if($content_updated != '') {
      $node->body[LANGUAGE_NONE][0]['value'] = $content_updated;
      field_attach_update('node', $node);
      entity_get_controller('node')->resetCache(array($node->nid));
      drush_print("\n Image tag is cleaned up on node : $nid\n");
      fwrite($success_log_fp, $node->nid . "\n");
      $context['message'] = $operation_details; //Will show what chunk we're on.
    }
  } 
}

function ti_amg_fw_custom_article_update_video_text_format() {
  $bundle = 'article';
  $success_log_fp = fopen("sites/default/files/article_video_text_format_update_success.txt", "w");
  $query = db_select('node', 'n');
  $query->join('field_data_field_blog_video', 'f', 'n.nid = f.entity_id');
  $query->fields('n',array('nid'));
  $query->condition('f.bundle', $bundle, '=');
  $query->isNull('f.field_blog_video_format');
  $result = $query->execute()->fetchAll();
  if (!empty($result) && count($result) > 0) {
    foreach($result as $row) {
      $nids[] = $row->nid;
    }
  }
  //Break up all of our data so each process does not time out.
  $chunks = array_chunk($nids, 50);
  $operations = array();
  $count_chunks = count($chunks);
  //for every chunk, assign some method to run on that chunk of data
  foreach ($chunks as $chunk) {
    $i++;
    $operations[] = array("ti_amg_fw_custom_update_text_format", array( $chunk ,'details'=> t('(Importing chunk @chunk  of  @count)', array('@chunk '=>$i, '@count'=>$count_chunks))));
  }

  //put all that information into our batch array
  $batch = array(
    'operations' => $operations,
    'title' => t('Import batch'),
    'init_message' => t('Initializing'),
    'error_message' => t('An error occurred'),
    'finished' => 'ti_amg_fw_custom_update_text_format_finished'
  );

  //Get the batch process all ready!
  batch_set($batch);
  $batch =& batch_get();

  //Because we are doing this on the back-end, we set progressive to false.
  $batch['progressive'] = FALSE;

  //Start processing the batch operations.
  drush_backend_batch_process();
}

function ti_amg_fw_custom_update_text_format($chunk, $operation_details, &$context) {
  $success_log_fp = fopen("sites/default/files/article_video_text_format_update_success.txt", "a+");
  foreach ($chunk as $key => $nid) {
    $node = node_load($nid);
    if(empty($node->field_blog_video[LANGUAGE_NONE][0][format])) {
      $node->field_blog_video[LANGUAGE_NONE][0][format] = 'wysiwyg';
    }
    field_attach_update('node', $node);
    entity_get_controller('node')->resetCache(array($node->nid));
    drush_print("\n The following nids text format has been updated : $node->nid\n");
    fwrite($success_log_fp, $node->nid . "\n");
    $context['message'] = $operation_details; //Will show what chunk we're on.
  }
}

function ti_amg_fw_custom_update_text_format_finished ($success, $results, $operations) {
  print t('Finished importing!');
}

function ti_amg_fw_custom_article_update_image_path() {
  $success_log_fp = fopen("sites/default/files/article_image_path_update_success.txt", "w");
  $last_item = "/sites/default/files/styles/main/public";
  $query = db_select('field_data_body', 'f');
  $query->fields('f',array('entity_id'))//SELECT the fields from body field.
    ->condition('body_value', '%' . db_like($last_item) . '%', 'LIKE');

  $result = $query->execute();
  $nids = array();
  while($record = $result->fetchAssoc()) {
    $nids[] = $record['entity_id'];
  }
  //Break up all of our data so each process does not time out.
  $chunks = array_chunk($nids, 500);
  $operations = array();
  $count_chunks = count($chunks);
  //for every chunk, assign some method to run on that chunk of data
  foreach ($chunks as $chunk) {
    $i++;
    $operations[] = array("ti_amg_fw_custom_update_image_chunk", array( $chunk ,'details'=> t('(Importing chunk @chunk  of  @count)', array('@chunk '=>$i, '@count'=>$count_chunks))));
  }

  //put all that information into our batch array
  $batch = array(
    'operations' => $operations,
    'title' => t('Import batch'),
    'init_message' => t('Initializing'),
    'error_message' => t('An error occurred'),
    'finished' => 'ti_amg_fw_custom_update_image_path_finished'
  );

  //Get the batch process all ready!
  batch_set($batch);
  $batch =& batch_get();

  //Because we are doing this on the back-end, we set progressive to false.
  $batch['progressive'] = FALSE;

  //Start processing the batch operations.
  drush_backend_batch_process();
}

function ti_amg_fw_custom_update_image_chunk($chunk, $operation_details, &$context) {
  $success_log_fp = fopen("sites/default/files/article_image_path_update_success.txt", "a+");
  foreach ($chunk as $key => $nid) {
       $node = node_load($nid);
       $body = $node->body[LANGUAGE_NONE][0]['value'];
     if (strpos($body, '/sites/default/files/styles/main/public/') !== FALSE) {
        $body = str_replace('/sites/default/files/styles/main/public/', '/sites/default/files/', $body);
        $node->body[LANGUAGE_NONE][0]['value'] = $body;
        field_attach_update('node', $node);
        entity_get_controller('node')->resetCache(array($node->nid));
        drush_print("\n The following nid files directory path has been updated : $node->nid\n");
        fwrite($success_log_fp, $node->nid . "\n");
      }
      $context['message'] = $operation_details; //Will show what chunk we're on.
    }

}

function ti_amg_fw_custom_update_image_path_finished($success, $results, $operations) {
  //Let the user know we have finished!
  print t('Finished importing!');
}

function ti_amg_fw_custom_update_article_seo_path() {
  $success_log_fp = fopen("sites/default/files/article_seo_path_update_success.txt", "w");
  $bundle = 'image';
  $query = db_select('node', 'n');
  $query->join('field_data_field_headline', 'f', 'n.nid = f.entity_id');
  $query->condition('f.bundle', $bundle, '=');
  $query->fields('n',array('nid'));
  $result = $query->execute()->fetchAll();
  $nids = array();
  foreach ($result as $key => $value) {
    $nids[] = $value->nid;
  }
  //Break up all of our data so each process does not time out.
  $chunks = array_chunk($nids, 500);
  $operations = array();
  $count_chunks = count($chunks);
  //for every chunk, assign some method to run on that chunk of data
  foreach ($chunks as $chunk) {
    $i++;
    $operations[] = array("ti_amg_fw_custom_update_seo_chunk", array( $chunk ,'details'=> t('(Importing chunk @chunk  of  @count)', array('@chunk '=>$i, '@count'=>$count_chunks))));
  }

  //put all that information into our batch array
  $batch = array(
    'operations' => $operations,
    'title' => t('Import batch'),
    'init_message' => t('Initializing'),
    'error_message' => t('An error occurred'),
    'finished' => 'ti_amg_fw_custom_update_seo_finished'
  );

  //Get the batch process all ready!
  batch_set($batch);
  $batch =& batch_get();

  //Because we are doing this on the back-end, we set progressive to false.
  $batch['progressive'] = FALSE;

  //Start processing the batch operations.
  drush_backend_batch_process();
}

function ti_amg_fw_custom_update_seo_chunk($chunk, $operation_details, &$context) {
  $success_log_fp = fopen("sites/default/files/article_seo_path_update_success.txt", "a+");
  include_once module_load_include('inc', 'pathauto');
  $remove_accent = FALSE;
  if((function_exists('ti_amg_fwrd_custom_convert_accented_char'))
   && (function_exists('ti_amg_fw_custom_remove_accents'))) {
    $remove_accent = TRUE;
  }
  foreach ($chunk as $key => $nid) {
    $node = node_load($nid);
    $headline = $node->field_headline[LANGUAGE_NONE][0]['value'];
    $seo_path = $node->field_seo_path;
    if (!empty($headline) && empty($seo_path)) {
      $headline = trim($headline);
      if ($remove_accent) {
        $headline = ti_amg_fwrd_custom_convert_accented_char(ti_amg_fw_custom_remove_accents($headline));
      }
      $updated_path_str = pathauto_cleanstring($headline);
      $node->field_seo_path[LANGUAGE_NONE][0]['value'] = $updated_path_str;
      field_attach_update('node', $node);
      entity_get_controller('node')->resetCache(array($node->nid));
      drush_print("\n The following nid SEO path has been updated : $node->nid\n");
      fwrite($success_log_fp, $node->nid . "\n");
    }
      $context['message'] = $operation_details; //Will show what chunk we're on.
    }
}

function ti_amg_fw_custom_update_seo_finished($success, $results, $operations) {
  //Let the user know we have finished!
  print t('Finished importing!');
}

function ti_amg_fw_custom_update_article_metatag() {

    $options = array(
      '500' => '500',
      '1000' => '1000',
      '2000' => '2000',
      '5000'=> '5000',
      '1'=> 'all'
    );

  $choice = drush_choice($options, dt('How much nodes you want to update ?'));
  $query = new EntityFieldQuery();
  $query->entityCondition('entity_type', 'node');
  $query->entityCondition('bundle', 'article');
  $query->propertyCondition('status', 1);
  if($choice != 1 ) {
    $query->range(0,$choice);
  }
  $result = $query->execute();
  if (isset($result['node'])) {
    $node_ids = array_keys($result['node']);
  }
  if ($choice) {
    //Break up all of our data so each process does not time out.
    $chunks = array_chunk($node_ids, 50);
    $operations = array();
    $count_chunks = count($chunks);
    //for every chunk, assign some method to run on that chunk of data
    foreach ($chunks as $chunk) {
      $i++;
      $operations[] = array("ti_amg_fw_custom_update_metatag_chunk", array( $chunk ,'details'=> t('(Importing chunk @chunk  of  @count)', array('@chunk '=>$i, '@count'=>$count_chunks))));
    }

    //put all that information into our batch array
    $batch = array(
      'operations' => $operations,
      'title' => t('Import batch'),
      'init_message' => t('Initializing'),
      'error_message' => t('An error occurred'),
      'finished' => 'ti_amg_fw_custom_update_metatag_finished'
    );

    //Get the batch process all ready!
    batch_set($batch);
    $batch =& batch_get();

    //Because we are doing this on the back-end, we set progressive to false.
    $batch['progressive'] = FALSE;

    //Start processing the batch operations.
    drush_backend_batch_process();
  }
}

function ti_amg_fw_custom_update_metatag_chunk($chunk, $operation_details, &$context) {

  $success_log_fp = fopen("sites/default/files/migration_logs/article_meta_update_success.txt", "a+");
  foreach ($chunk as $key => $nid) {
      $metatags = metatag_metatags_load('node', $nid, NULL);
      $node = node_load($nid);

      if (empty($metatags[LANGUAGE_NONE]['title']['value'])) {
        $metatags[LANGUAGE_NONE]['title']['value'] = '[node:title] | [site:name]';
        metatag_metatags_save('node', $nid, $node->vid, $metatags);
        drush_print("\nThe following nid Title has been updated : $node->nid\n");
        fwrite($success_log_fp, $node->nid . "\n");
      }
      if (empty($metatags[LANGUAGE_NONE]['description']['value'])) {
        $metatags[LANGUAGE_NONE]['description']['value'] = '[node:fw_custom_meta_description]';
        metatag_metatags_save('node', $nid, $node->vid, $metatags);
        drush_print("\nThe following nid  Description has been updated : $node->nid\n");
        fwrite($success_log_fp, $node->nid . "\n");
      }
    }
    fclose($success_log_fp);
    $context['message'] = $operation_details; //Will show what chunk we're on.
}

function ti_amg_fw_custom_update_metatag_finished($success, $results, $operations) {
  //Let the user know we have finished!
  print t('Finished importing!');
}
/**
 * Drush Command Callback - Redirect URL.
 */
function drush_ti_amg_fw_custom_update_robots_metatag($csv_path = NULL, $source_column_number = NULL) {
  if(!$source_column_number) {
    return drush_set_error('Invalid Input');
  }
  if($source_column_number < 1) {
    return drush_set_error('Invalid Input: Column number starts from 1.');
  }
  $source_column_number --;
  if(!$csv_path) {
    return drush_set_error('CSV File path is missing in command');
  }
  $file = fopen($csv_path, 'r');
  if(!$file) {
    return drush_set_error('Unable to read given CSV file.');
  }
  $count = 0;
  while (($line = fgetcsv($file)) !== FALSE) {
    if(!isset($line[$source_column_number])) {
      return drush_set_error(dt('Unable to fetch data from column number @source_column_number.',
        array('@source_column_number' => $source_column_number)));
    }
    $source_path = $line[$source_column_number];
    $path = drupal_lookup_path("source", $source_path);
    $node = menu_get_object("node", 1, $path);
    $metatags = array(
     'und' => array(
       'robots' =>  array('value' => array(
          'noindex' => 'noindex',
          'follow' => 'follow',
        )
        )
      )
     );
    $count++;
    metatag_metatags_save('node', $node->nid, $node->vid, $metatags, $node->language);
  }
  fclose($file);
  drupal_set_message($count . 'Completed !!!');
}

/**
 * Drush Command Callback - Redirect URL.
 */
function drush_ti_amg_fw_custom_update_redirect_path($csv_path = NULL, $source_column_number = NULL, $destination_column_number = NULL) {
  if(!$source_column_number || !$destination_column_number) {
    return drush_set_error('Invalid Input');
  }
  if($source_column_number < 1 || $destination_column_number < 1) {
    return drush_set_error('Invalid Input: Column number starts from 1.');
  }
  $source_column_number --;
  $destination_column_number --;
  if(!$csv_path) {
    return drush_set_error('CSV File path is missing in command');
  }
  $file = fopen($csv_path, 'r');
  if(!$file) {
    return drush_set_error('Unable to read given CSV file.');
  }
  $count = 0;
  while (($line = fgetcsv($file)) !== FALSE) {
    if(!isset($line[$source_column_number])) {
      return drush_set_error(dt('Unable to fetch data from column number @source_column_number.',
        array('@source_column_number' => $source_column_number)));
    }
    if(!isset($line[$destination_column_number])) {
      return drush_set_error(dt('Unable to fetch data from column number @destination_column_number.',
        array('@destination_column_number' => $destination_column_number)));
    }
    $source_path = $line[$source_column_number];
    if ($source_path == '23%') {
      $source_path = '%23';
    }
    $destination_path = $line[$destination_column_number];
    $redirect = redirect_load_by_source($source_path);
    if ($redirect) {
      redirect_delete($redirect->rid);
    }
    $redirect = new stdClass();
    redirect_object_prepare(
      $redirect, array(
        'source' => $source_path,
        'source_options' => array(),
        'redirect' => $destination_path,
        'redirect_options' => array(),
        'language' => LANGUAGE_NONE,
        'status_code' => 301,
      )
    );
    $count++;
    redirect_save($redirect);
    drupal_set_message(dt('@count Redirected: @source_path -> @destination_path', array('@source_path' =>  $source_path, '@destination_path' => $destination_path, '@count' => $count)));
  }
  fclose($file);
  drupal_set_message('Completed !!!');
}

function drush_update_blog_urls() {
  //Update the Blog URL Pattern For Date Format
  $query = db_select('url_alias', 'url');
  $query->fields('url', array('source'));
  $query->fields('url', array('alias'));
  $query->condition('alias', '%blogs/%', 'LIKE');
  $result = $query->execute()->fetchAll();
  $i = 1;
  foreach ($result as $row) {

    if (isset($row->alias) && !empty($row->alias)) {
      $blog_pattern_array = explode('/', $row->alias);
      $zero_flag = 0;
      if (count($blog_pattern_array) > 2) {
        // print strlen($blog_pattern_array[2]);
        $month_value = $blog_pattern_array[2];
        if (strlen($blog_pattern_array[2]) == 1) {
          $month_value = '0' . $blog_pattern_array[2];
          $zero_flag = 1;
        }
        $day_value = $blog_pattern_array[3];
        if (strlen($blog_pattern_array[3]) == 1) {
          $day_value = '0' . $blog_pattern_array[3];
          $zero_flag = 1;
        }
        if ($zero_flag == 1) {
          $path = array();
          $path['source'] = $row->source;
          $path['alias'] = $blog_pattern_array[0] . '/' . $blog_pattern_array[1] . '/' . $month_value . '/' . $day_value . '/' . $blog_pattern_array[4];
          path_save($path);
          print_r($i . '-----' . $path['alias'] . '---' . $path['source'] . " completed \n");
          $i++;
        }
      }
    }
  }
}


function drush_update_special_char_on_url($content_type=NULL) {
  $types = array(
    'BLOG'=>'blog',
    'GALLERY'=>'gallery',
    'RECIPE'=>'recipe',
    'VIDEO'=>'video'
    );
  $content_type = drush_choice($types, 'Enter a number to choose the content type.', '!key');
  if(isset($types[$content_type]) && $types[$content_type] !=''){
    $content_types = $types[$content_type];
    $items_nids = ti_amg_fw_custom_latest_content($content_types);
    $nodes_content = node_load_multiple($items_nids);
    $i = 0;
    foreach($nodes_content as $node) {
      $nid = $node->nid;
      $current_path = drupal_get_path_alias('node/' . $nid);
      $new_path = '';
      $blog_pattern_array = explode('/', $current_path);
      if (count($blog_pattern_array) == 2) {
        if (!empty($blog_pattern_array[1])) {
          $updated_path_str = pathauto_cleanstring(ti_amg_fwrd_custom_convert_accented_char(ti_amg_fw_custom_remove_accents($blog_pattern_array[1])));
          $new_path = $blog_pattern_array[0] . '/' . $updated_path_str;
        }
      }
      elseif (count($blog_pattern_array) > 4) {
        if (!empty($blog_pattern_array[4])) {
          $updated_path_str = pathauto_cleanstring(ti_amg_fwrd_custom_convert_accented_char(ti_amg_fw_custom_remove_accents($blog_pattern_array[4])));
          $new_path = $blog_pattern_array[0] . '/' . $blog_pattern_array[1] . '/' . $blog_pattern_array[2] . '/' . $blog_pattern_array[3] . '/' . $updated_path_str;
        }
      }
      elseif (count($blog_pattern_array) == 1) {
        if (!empty($blog_pattern_array[0])) {
          $updated_path_str = pathauto_cleanstring(ti_amg_fwrd_custom_convert_accented_char(ti_amg_fw_custom_remove_accents($blog_pattern_array[0])));
          $new_path = $updated_path_str;
        }
      }
      if ($current_path != $new_path) {
        // Delete old path alias.
        $criteria = array('source' => 'node/' . $nid);
        path_delete($criteria);
        $path = array(
          'source' => 'node/' . $nid,
          'alias' => $new_path,
        );
        // Save new path alias.
        path_save($path);

        // Redirect old path alias to new path alias.
        $redirect = redirect_load_by_source($current_path);
        if ($redirect) {
          redirect_delete($redirect->rid);
        }
        $redirect = new stdClass();
        redirect_object_prepare(
          $redirect, array(
            'source' => $current_path,
            'source_options' => array(),
            'redirect' => 'node/' . $nid,
            'redirect_options' => array(),
            'language' => LANGUAGE_NONE,
          )
        );
        redirect_save($redirect);
        $i++;
        drush_print("\n----------------------------------------------------------------------------------\n");
        drush_print($i . ' || Node: ' .$nid. ' || Old Path: ' . $current_path . ' || Updated Path: ' . $new_path);
        drush_print("\n----------------------------------------------------------------------------------\n");
      }
    }
  }
}

/*
 * To Fetch the latest content nids.
 *
 * @param $node_types
 *   Node type of the content.
 * @param $count
 *   Count of the fetching content.
 * @param $nids_excempt
 *   Nids which need to exclude in the content fetching.
 *
 * @return The latest content node ids based on content types
 */

function ti_amg_fw_custom_latest_content($node_types = array()) {
  $node_ids = array();
  if (!empty($node_types)) {
    $query = new EntityFieldQuery();
    $query->entityCondition('entity_type', 'node');
    $query->entityCondition('bundle', $node_types);
    $query->addTag('get_publication_date_latest');
    $query->propertyCondition('status', 1);
    $result = $query->execute();
    if (isset($result['node'])) {
      $node_ids = array_keys($result['node']);
    }
  }
  return $node_ids;
}

/**
 *
 * Altering the entity query and adding the published date sort criteria
 */
function ti_amg_fw_custom_query_get_publication_date_latest_alter(QueryAlterableInterface $query) {
  $end = (60 * 60 * 24 * RESULT_LIMIT_END_DAYS);
  $start = (60 * 60 * 24 * RESULT_LIMIT_START_DAYS);
  $query->join('publication_date', 'pd', 'pd.nid = node.nid');
  $query->condition('pd.published_at', array((REQUEST_TIME - $end), (REQUEST_TIME - $start)), 'BETWEEN');
  $query->orderBy('pd.published_at', 'DESC');
}



/**
* Implementation of drush_recipe_update().
*/

function drush_recipe_update() {
  $recipe_id_array = array('913474', '990079', '890092', '990085', '990091',
    '990097', '990103', '990106', '990160', '998725', '1000873',
    '1029445', '1029541', '1029556', '1029820');
  foreach ($recipe_id_array as $node_id) {
    $node = node_load($node_id);
    $node_language = $node->language;
    $node_title = $node->title;
    $field_deck = $node->field_deck[$node_language][0]['value'];
    $node->field_deck[$node_language][0]['value'] = $field_deck;
    $node->field_deck[$node_language][0]['format'] = 'full_html';
    node_save($node);
    echo "\n node save completed - " . $node_title . " - id - "
        . $node_id . "\n";
  }
}

/**
* Implementation of drush_recipe_slideshow_mapping_update().
*/
function drush_recipe_slideshow_mapping_update($environment=NULL) {
  //Mapping slideshows to the related recipes
  $types = array(
    'LOCAL'=>'https://editor.foodandwine.local',
    'DEV'=>'http://dev.foodandwine.com',
    'QA'=>'http://qa.foodandwine.com',
    'PROD'=>'http://www.foodandwine.com'
    );
  $environment = drush_choice($types, 'Enter a number to choose the Environment.', '!key');
  if(isset($types[$environment]) && $types[$environment] !=''){

  $query = new EntityFieldQuery();
  $query->entityCondition('entity_type', 'node')
  ->entityCondition('bundle', 'gallery');
  //->range(0, 20);
  //->propertyCondition('status', 1);

  $result = $query->execute();
  $count = $query->count()->execute();
  if (isset($result['node'])) {
    $gallery_items_nids = array_keys($result['node']);
    $slide_items = entity_load('node', $gallery_items_nids);

    //Break up all of our slideshows data, so each process does not time out.
    $chunks = array_chunk($slide_items, 1);
    $operations = array();
    $count_chunks = count($chunks);
  }

  drush_print("\n--------------------------------------------------------\n");
  //drush_print(t("Number of Chunks: ".$count_chunks));
  drush_print(t("Total Number of Slideshows: ".$count));
  drush_print("\n--------------------------------------------------------\n");

  //for every chunk(Slideshow), assign some method to run on that chunk of data
  foreach ($chunks as $chunk) {
    $chunk['env'] = $types[$environment];
    $i++;
    $operations[] = array("update_drush_operation_by_batch", array( $chunk ,'details'=> t('(Updating Slideshow @chunk  of  @count)', array('@chunk '=>$i, '@count'=>$count_chunks))));
  }

  //put all that information into our batch array
  $batch = array(
    'operations' => $operations,
    'title' => t('Import batch'),
    'init_message' => t('Initializing'),
    'error_message' => t('An error occurred'),
    'finished' => 'update_drush_batch_process_finished'
  );

  //Get the batch process all ready!
  batch_set($batch);
  $batch =& batch_get();

  //Because we are doing this on the back-end, we set progressive to false.
  $batch['progressive'] = FALSE;

  //Start processing the batch operations.
  drush_backend_batch_process();
  }
}

//To updating the slideshow and recipe mapping by batch operation callback function
function update_drush_operation_by_batch($chunk, $operation_details, &$context){
  $context['message'] = $operation_details; //Will show what chunk we're on.
  if(isset($chunk) && $chunk !=''){
    $slide_item = $chunk[0];
    $ss_title = $slide_item->title;
    $ss_nid = $slide_item->nid;
    if(isset($ss_nid)  && $ss_nid != ''){
      $ss_link = $chunk['env'].'/'.drupal_get_path_alias('node/'.$ss_nid);
    }
    drush_print("\n".'--Slides Count--'.count($slide_item->field_slide_info[LANGUAGE_NONE]).'--'."\n");
    //drush_print("\n".'--Slideshow--'.$s.'--'.$ss_nid.'--'.$ss_title.'--'.$ss_link."\n");
    if (count($slide_item->field_slide_info[LANGUAGE_NONE]) > 0) {
      foreach ($slide_item->field_slide_info[LANGUAGE_NONE] as $slide) {
        //Load the slide link value to the array
        $slide_entity = entity_load('field_collection_item', array($slide['value']));
        $slide_entity_id = $slide['value'];
        if (isset($slide_entity[$slide_entity_id]->field_slide_link_url[LANGUAGE_NONE][0]['url'])) {
          $slide_rcp_links = $slide_entity[$slide_entity_id]->field_slide_link_url[LANGUAGE_NONE][0]['url'];
          //Checking whether the url having the recipes pattern
          if (preg_match("/recipes/i", $slide_rcp_links)) {
            $addlinks = get_url_part_recipes($slide_rcp_links);
            if ($addlinks != '') {
              $rpath = drupal_lookup_path("source", $addlinks);
              $rnode = menu_get_object("node", 1, $rpath);
              if (isset($rnode->nid)) {
                $recp_counter = update_recipe_by_slideshow_drushcmnd($rnode->nid, $ss_title, $ss_link);
                if($recp_counter == 1){
                  $rcounter++;
                  $r_upd = 'Updated';
                  $context['results']['updated'][] = $rnode->nid;
                } else{
                  $r_upd = 'Not Updated';
                  $context['results']['not_updated'][] = $rnode->nid;
                }
                //drush_print("\n\n".'----------Recipe--'.$r_upd.'-----'.$rcounter.'------'.$addlinks.'--'.$rnode->nid."\n");
                //$r++;
              }
            }
          }
        }
      }
    }

  }
}

//Processing batch operation finished method callback function
function slideshow_batch_process_finished($success, $results, $operations) {
  if ($success) {
    drush_print("\n----------------------------------------------------------");
    drush_print(t('@count Recipes are Updated', array('@count' => count($results['updated']))));
    drush_print(t('@count Recipes are not Updated', array('@count' => count($results['not_updated']))));
    drush_print("----------------------------------------------------------\n\r");
  }
  else {
    // An error occurred.
    // $operations contains the operations that remained unprocessed.
    $error_operation = reset($operations);
    drush_print("\n--------------------------------------------------------\n");
    drush_print(
        t('An error occurred while processing @operation with arguments : @args',
            array('@operation' => $error_operation[0],
      '@args' => print_r($error_operation[0], TRUE),
            )
        )
    );
    drush_print("\n------------------------------------------------------\n\r");
  }
}

function drush_recipe_ratings(){
    variable_set('recipe_count',0);
    variable_set('recipes_failed',0);
    $rating_file_path = drupal_get_path('module', 'ti_amg_fw_migrate') . '/json/' . 'recipe_ratings.json';
    $rating_contents = file_get_contents($rating_file_path);
    $decoded_rating_contents = json_decode($rating_contents, TRUE);
    $labels_with_rating = $decoded_rating_contents[0];

    //Break up all of our slideshows data, so each process does not time out.
    $chunks = array_chunk($labels_with_rating, 50, TRUE);
    $operations = array();
    $total_chunks = count($chunks);

    $chunk_count = 0;
    //for every chunk, assign some method to run on that chunk of data
    foreach ($chunks as $chunk) {
        $chunk_count++;
        $operations[] = array("update_recipes_with_ratings", array(
          $chunk,
          'details' => t('(Updating Recipes with Ratings for chunk= @chunk_count  of  @total_chunks)',
              array('@chunk_count '=>$chunk_count, '@total_chunks'=>$total_chunks))));
    }

    //put all that information into our batch array
    $batch = array(
      'operations' => $operations,
      'title' => t('Import batch'),
      'init_message' => t('Initializing'),
      'error_message' => t('An error occurred'),
      'finished' => 'update_recipes_with_ratings_finished'
    );

    //Get the batch process all ready!
    batch_set($batch);
    $batch = & batch_get();

    //Because we are doing this on the back-end, we set progressive to false.
    $batch['progressive'] = FALSE;

    //Start processing the batch operations.
    drush_backend_batch_process();
}

function update_recipes_with_ratings($chunk, $operation_details, &$context){
    $recipes_failed = 0;
    drush_print($operation_details);//Will show what chunk we're on.
    $count = 0;
    if (isset($chunk) && $chunk != '') {
        foreach ($chunk as $label => $rating_value) {
            $count++;
            $path = drupal_lookup_path("source", $label);
            $nid = '';
            if ($path != '') {
                $path_array = explode('/', $path);
                $nid = $path_array[1];
                $node = node_load($nid);
                if(isset($node->field_rating[LANGUAGE_NONE])){
                    drush_print("\n" . $count . '.' . $label . ' ---- of NID=' . $nid . ' Already Updated');
                }else{
                    $node->field_rating[LANGUAGE_NONE][0]['value'] = $rating_value;
                    node_save($node);
                    drush_print("\n" . $count . '.' . $label . ' ---- of NID=' . $nid . ' Got Updated');
                }
            }
            else {
                $count--;
                $recipes_failed++;
                drush_print("\n".$count . '.' . $label . ' ---- Not found NID and not Updated');
            }

        }
    }
    $recipe_count = variable_get('recipe_count','')+ $count;
    variable_set('recipe_count',$recipe_count);

    $recipes_failed = variable_get('recipes_failed','') + $recipes_failed;
    variable_set('recipes_failed',$recipes_failed);

    $context['results']['updated']['recipe_count'] = variable_get('recipe_count','');
    $context['results']['updated']['recipes_failed'] = variable_get('recipes_failed','');

    drush_print("\n".$context['results']['updated']['recipe_count'] . ' Recipes Got Processed');
    drush_print("\n".$context['results']['updated']['recipes_failed'] . ' Recipes Got Failed');
}

//Processing batch operation finished method callback function
function update_recipes_with_ratings_finished($success, $results, $operations) {
  if ($success) {
    drush_print("\n----------------------------------------------------------");
    drush_print(t('@count Recipes are Updated', array('@count' => $results['updated']['recipe_count'])));
    drush_print(t('@failed_count Recipes are Failed', array('@failed_count' => $results['updated']['recipes_failed'])));
    drush_print("----------------------------------------------------------\n\r");
  }
  else {
    // An error occurred.
    // $operations contains the operations that remained unprocessed.
    $error_operation = reset($operations);
    drush_print("\n--------------------------------------------------------\n");
    drush_print(
        t('An error occurred while processing @operation with arguments : @args',
            array('@operation' => $error_operation[0],
      '@args' => print_r($error_operation[0], TRUE),
            )
        )
    );
    drush_print("\n------------------------------------------------------\n\r");
  }
}

//Inserting Already existed ratings to the votingapi_vote table
function drush_update_rating_table() {
  $recipes_with_rating = db_query('select entity_id,field_rating_value from field_data_field_rating')->fetchAll();
  $last_vote_id = db_query('select max(vote_id) from votingapi_vote')->fetchField();
  $current_timestamp = time();
  $count = 0;
  foreach ($recipes_with_rating as $recipe) {
    $rating_value = $recipe->field_rating_value * 20;
    db_insert('votingapi_vote')
        ->fields(array(
          'vote_id' => ++$last_vote_id,
          'entity_type' => 'node',
          'entity_id' => $recipe->entity_id,
          'value' => $rating_value,
          'value_type' => 'percent',
          'tag' => 'vote',
          'uid' => 0,
          'timestamp' => $current_timestamp,
          'vote_source' => '127.0.0.1'
        ))
        ->execute();
    $count++;
  }
  print $count . 'rows inserted into the table';
}

/**
 * Callback function for taxonomy mapping.
 */
function drush_ti_amg_fw_custom_common_taxonomy_mapping($file_path = NULL, $content_type = NULL) {
  if (!$file_path || !$content_type) {
    return drush_set_error('Invalid Input');
  }
  if (!$file_path) {
    return drush_set_error('Json File path is missing in command');
  }
  if (!$content_type) {
    return drush_set_error('Content Type is missing in command');
  }
  $map_array = array();
  if ($content_type != 'gallery' && $content_type != 'video') {
    $mapping_contents = file_get_contents($file_path);
    $decoded_map_contents = json_decode($mapping_contents, TRUE);
    $map_array = $decoded_map_contents[0];
  }
  variable_set('map_array', $map_array);

  if (file_exists("sites/default/files/content_mapping_logs/" . $content_type . "_already_mapped_nodes_log.txt")) {
    unlink("sites/default/files/content_mapping_logs/" . $content_type . "_already_mapped_nodes_log.txt");
  }

  if ($content_type == 'blog') {
    $nids = ti_amg_fw_custom_get_blog_nids();
  }
  else
  if ($content_type == 'recipe') {
    $nids = ti_amg_fw_custom_get_recipe_nids_with_ingredient_ids();
  }
  else
  if ($content_type == 'gallery') {
    $nids = ti_amg_fw_custom_get_gallery_nids();
  }
  else
  if ($content_type == 'video') {
    $nids = ti_amg_fw_custom_get_video_nids();
  }

  if (file_exists("sites/default/files/content_mapping_logs/" . $content_type . "_mapped_nodes_log.txt")) {
    unlink("sites/default/files/content_mapping_logs/" . $content_type . "_mapped_nodes_log.txt");
  }
  if (file_exists("sites/default/files/content_mapping_logs/" . $content_type . "_not_mapped_nodes_log.txt")) {
    unlink("sites/default/files/content_mapping_logs/" . $content_type . "_not_mapped_nodes_log.txt");
  }
  if (file_exists("sites/default/files/content_mapping_logs/" . $content_type . "_mapped_tags_log.txt")) {
    unlink("sites/default/files/content_mapping_logs/" . $content_type . "_mapped_tags_log.txt");
  }
  if (file_exists("sites/default/files/content_mapping_logs/" . $content_type . "_not_mapped_tags_log.txt")) {
    unlink("sites/default/files/content_mapping_logs/" . $content_type . "_not_mapped_tags_log.txt");
  }

  if (isset($nids) && !empty($nids)) {
    //Break up all of our data, so each process does not time out.
    $chunks = array_chunk($nids, 50, TRUE);
    $operations = array();
    $count_chunks = count($chunks);

    $chunk_count = 0;
    //for every chunk, assigning some method to run on that chunk of data
    foreach ($chunks as $chunk) {
      $chunk_count++;
      if ($content_type == 'blog') {
        $operations[] = array("mapping_blog_category_taxonomy", array($chunk, 'details' => t('(Mapping the taxonomy for chunk @chunk  of  @count)', array('@chunk ' => $chunk_count, '@count' => $count_chunks))));
      }
      else if ($content_type == 'recipe') {
        $operations[] = array("mapping_recipe_category_taxonomy", array($chunk, 'details' => t('(Mapping the taxonomy for chunk @chunk  of  @count)', array('@chunk ' => $chunk_count, '@count' => $count_chunks))));
      }
      else if ($content_type == 'gallery') {
        $operations[] = array("mapping_gallery_category_taxonomy", array($chunk, 'details' => t('(Mapping the taxonomy for chunk @chunk  of  @count)', array('@chunk ' => $chunk_count, '@count' => $count_chunks))));
      }
      else if ($content_type == 'video') {
        $operations[] = array("mapping_video_category_taxonomy", array($chunk, 'details' => t('(Mapping the taxonomy for chunk @chunk  of  @count)', array('@chunk ' => $chunk_count, '@count' => $count_chunks))));
      }
    }

    //put all that information into our batch array
    $batch = array(
      'operations' => $operations,
      'title' => t('Import batch'),
      'init_message' => t('Initializing'),
      'error_message' => t('An error occurred'),
      'finished' => 'taxonomy_mapping_finished'
    );

    //Get the batch process all ready!
    batch_set($batch);
    $batch = & batch_get();

    //Because we are doing this on the back-end, we set progressive to false.
    $batch['progressive'] = FALSE;

    //Start processing the batch operations.
    drush_backend_batch_process();
  }
  else{
    drush_print("No nodes are available to map. All nodes are mapped");
  }
}

function mapping_blog_category_taxonomy($chunk, $operation_details, &$context) {
  $map_array = variable_get('map_array', '');
  drush_print($operation_details . " Starting"); //Will show what chunk we're on.
  $mapped_nodes_fp = fopen("sites/default/files/content_mapping_logs/blog_mapped_nodes_log.txt", "a+");
  $not_mapped_nodes_fp = fopen("sites/default/files/content_mapping_logs/blog_not_mapped_nodes_log.txt", "a+");
  $mapped_tags_fp = fopen("sites/default/files/content_mapping_logs/blog_mapped_tags_log.txt", "a+");
  $not_mapped_tags_fp = fopen("sites/default/files/content_mapping_logs/blog_not_mapped_tags_log.txt", "a+");

  if (isset($chunk) && $chunk != '') {
    $blog_nodes = entity_load('node', $chunk);
    foreach ($blog_nodes as $blog) {
      $terms_name_list = array();
      $terms_id_list = array();
      $target_term_id = '';
      if (isset($blog->field_topic[LANGUAGE_NONE])) {
        foreach ($blog->field_topic[LANGUAGE_NONE] as $topic) {
          $terms_id_list[] = trim($topic['tid']);
        }
        if (!empty($terms_id_list)) {
          $terms_list = taxonomy_term_load_multiple($terms_id_list);
          foreach ($terms_list as $term) {
            $terms_name_list[] = trim($term->name);
          }
          foreach ($terms_name_list as $key => $term_name) {
            $target_term = array();
            $target_term = taxonomy_get_term_by_name($term_name, 'fw_category');
            // if the topic name exist in category taxonomy.
            if (!empty($target_term) && sizeof($target_term) == 1) {
              break;
            }
            else {
              if (isset($map_array[$term_name])) {
                $target_term = taxonomy_get_term_by_name($map_array[$term_name], 'fw_category');
                if (!empty($target_term) && sizeof($target_term) == 1) {
                  break;
                }
              }
            }
          }
          // If any term matched with new Category taxonomy.
          if (!empty($target_term) && sizeof($target_term) == 1) {
            foreach ($target_term as $term) {
              $target_term_id = $term->tid;
            }
            fwrite($mapped_tags_fp, $term_name . "\n");
          }
          else {
            fwrite($not_mapped_tags_fp, $term_name . "\n");
          }
        }
      }

      if (isset($target_term_id) && !empty($target_term_id) && $target_term_id != '') {
        $blog->field_fw_category[LANGUAGE_NONE][0]['tid'] = $target_term_id;
        node_save($blog);
        fwrite($mapped_nodes_fp, $blog->nid . "\n");
        drush_print("\n" . $blog->nid . ' Got Updated');
      }
      else {
        fwrite($not_mapped_nodes_fp, $blog->nid . "\n");
        drush_print("\n" . $blog->nid . ' not Updated');
      }
    }
  }

  fclose($mapped_nodes_fp);
  fclose($not_mapped_nodes_fp);
  fclose($mapped_tags_fp);
  fclose($not_mapped_tags_fp);
  drush_print($operation_details . " Completed");
}

//Processing batch operation finished method callback function
function taxonomy_mapping_finished($success, $results, $operations) {
  if ($success) {
    drush_print("Mapping Process Completed");
    variable_del("map_array");
  }
  else {
    // An error occurred.
    // $operations contains the operations that remained unprocessed.
    $error_operation = reset($operations);
    drush_print("\n--------------------------------------------------------\n");
    drush_print(
        t('An error occurred while processing @operation with arguments : @args', array('@operation' => $error_operation[0],
      '@args' => print_r($error_operation[0], TRUE),
            )
        )
    );
    drush_print("\n------------------------------------------------------\n\r");
  }
}

/**
 * @return array
 *   List of Blog NIDs which having any topic field value.
 */
function ti_amg_fw_custom_get_blog_nids() {
  $existed_mapped_nodes = ti_amg_fw_custom_get_mapped_nodes('blog');
  $blog_nids = array();
  $query = new EntityFieldQuery();
  $query->entityCondition('entity_type', 'node')
      ->propertyCondition('status', 1)
      ->entityCondition('bundle', array('blog'))
      ->fieldCondition('field_topic', 'tid', 'NULL', '!=');
  if (!empty($existed_mapped_nodes)) {
    $query->propertyCondition('nid', $existed_mapped_nodes, 'NOT IN');
  }

  $result = $query->execute();
  if (isset($result['node'])) {
    $blog_nids = array_keys($result['node']);
  }
  return $blog_nids;
}

/**
 *
 * @return array
 *   nids of recipes.
 */
function ti_amg_fw_custom_get_recipe_nids_with_ingredient_ids() {
  $existed_mapped_nodes = ti_amg_fw_custom_get_mapped_nodes('recipe');
  $recipe_nodes = array();
  $primary_ingredients = new EntityFieldQuery();
  $primary_ingredients->entityCondition('entity_type', 'field_collection_item')
      ->fieldCondition('field_ingredient_is_primary', 'value', 1, '=')
      ->fieldCondition('field_ingredient_primary', 'tid', 'NULL', '!=');
  $result = $primary_ingredients->execute();
  if (isset($result['field_collection_item'])) {
    $primary_entity_ids = array_keys($result['field_collection_item']);
    $primary_nodes = db_select('field_data_field_ingredients', 'field_ingredients')
        ->fields('field_ingredients', array('entity_id', 'field_ingredients_value'))
        ->condition('field_ingredients_value', $primary_entity_ids, 'IN');
    if (!empty($existed_mapped_nodes)) {
      $primary_nodes->condition('entity_id', $existed_mapped_nodes, 'NOT IN');
    }
    $primary_nodes_result = $primary_nodes->execute()->fetchAll();

    foreach ($primary_nodes_result as $row) {
      $recipe_nodes[$row->entity_id] = $row->field_ingredients_value;
    }
  }

  return $recipe_nodes;
}

/**
 * Callback Function for Mapping Recipe Category Field.
 */
function mapping_recipe_category_taxonomy($chunk, $operation_details, &$context) {
  $map_array = variable_get('map_array', '');
  drush_print($operation_details); //Will show what chunk we're on.
  $mapped_nodes_fp = fopen("sites/default/files/content_mapping_logs/recipe_mapped_nodes_log.txt", "a+");
  $not_mapped_nodes_fp = fopen("sites/default/files/content_mapping_logs/recipe_not_mapped_nodes_log.txt", "a+");
  $mapped_tags_fp = fopen("sites/default/files/content_mapping_logs/recipe_mapped_tags_log.txt", "a+");
  $not_mapped_tags_fp = fopen("sites/default/files/content_mapping_logs/recipe_not_mapped_tags_log.txt", "a+");

  if (isset($chunk) && $chunk != '') {
    foreach ($chunk as $nid => $entity_id) {
      $target_term_id = '';
      $term_name = '';
      $ingredient_entity = entity_load('field_collection_item', array($entity_id));
      if (isset($ingredient_entity[$entity_id]->field_ingredient_primary)) {
        $tid = $ingredient_entity[$entity_id]->field_ingredient_primary[LANGUAGE_NONE][0]['tid'];
        $term = taxonomy_term_load($tid);
        if (isset($term) && !empty($term)) {
          $term_name = $term->name;
          $target_term = taxonomy_get_term_by_name($term_name, 'fw_category');
          if (!empty($target_term) && sizeof($target_term) >= 1) {
            foreach ($target_term as $term) {
              $target_term_id = $term->tid;
            }
            fwrite($mapped_tags_fp, $term_name . "\n");
          }
          elseif (isset($map_array[$term_name])) {
            $target_term = taxonomy_get_term_by_name($map_array[$term_name], 'fw_category');
            if (!empty($target_term) && sizeof($target_term) >= 1) {
              foreach ($target_term as $term) {
                $target_term_id = $term->tid;
              }

              fwrite($mapped_tags_fp, $map_array[$term_name] . "\n");
            }
          }
          else {
            if (!empty($term_name)) {
              fwrite($not_mapped_tags_fp, $term_name . "\n");
            }
          }
          if (isset($target_term_id) && !empty($target_term_id)) {
            $recipe_node = node_load($nid);
            $recipe_node->field_fw_category[LANGUAGE_NONE][0]['tid'] = $target_term_id;
            node_save($recipe_node);
            fwrite($mapped_nodes_fp, $nid . "\n");
            drush_print("\n" . $nid . ' Got Updated');
          }
          else {
            fwrite($not_mapped_nodes_fp, $nid . "\n");
            drush_print("\n" . $nid . ' Not Updated');
            fwrite($not_mapped_tags_fp, $term_name . "\n");
          }
        }
      }
    }
  }
  fclose($mapped_nodes_fp);
  fclose($not_mapped_nodes_fp);
  fclose($mapped_tags_fp);
  fclose($not_mapped_tags_fp);
  drush_print($operation_details . " Completed");
}

/**
 *
 * @return array
 *   gallery nids.
 */
function ti_amg_fw_custom_get_gallery_nids() {
  $existed_mapped_nodes = ti_amg_fw_custom_get_mapped_nodes('gallery');
  $gallery_nids = array();
  $query = new EntityFieldQuery();
  $query->entityCondition('entity_type', 'node')
      ->propertyCondition('status', 1)
      ->entityCondition('bundle', array('gallery'));
  if(!empty($existed_mapped_nodes)) {
    $query->propertyCondition('nid', $existed_mapped_nodes, 'NOT IN');
  }

  $result = $query->execute();
  if (isset($result['node'])) {
    $gallery_nids = array_keys($result['node']);
  }
  return $gallery_nids;
}

function mapping_gallery_category_taxonomy($chunk, $operation_details, &$context) {
  $map_array = array("Recipes" => "Recipes", "Other" => "Lifestyle", "Wine" => "Wine", "Travel" => "Travel");
  drush_print($operation_details); //Will show what chunk we're on.
  $mapped_nodes_fp = fopen("sites/default/files/content_mapping_logs/gallery_mapped_nodes_log.txt", "a+");
  $not_mapped_nodes_fp = fopen("sites/default/files/content_mapping_logs/gallery_not_mapped_nodes_log.txt", "a+");

  if (isset($chunk) && $chunk != '') {
    $gallery_nodes = entity_load('node', $chunk);
    foreach ($gallery_nodes as $gallery) {
      $term_name = '';
      $term_id = '';
      $target_term_id = '';
      if (isset($gallery->field_gallery_type[LANGUAGE_NONE])) {
        $term_id = $gallery->field_gallery_type[LANGUAGE_NONE][0]['tid'];
        if (!empty($term_id)) {
          $term_obj = taxonomy_term_load($term_id);
          if (!empty($term_obj)) {
            $term_name = $term_obj->name;
          }

          $target_term = taxonomy_get_term_by_name($map_array[$term_name], 'fw_category');
          if (!empty($target_term) && sizeof($target_term) >= 1) {
            foreach ($target_term as $term) {
              $target_term_id = $term->tid;
            }
          }
        }
      }

      if (!empty($target_term_id)) {
        $gallery->field_fw_category[LANGUAGE_NONE][0]['tid'] = $target_term_id;
        node_save($gallery);
        fwrite($mapped_nodes_fp, $gallery->nid . "\n");
        drush_print("\n" . $gallery->nid . ' Got Updated');
      }
      else {
        fwrite($not_mapped_nodes_fp, $gallery->nid . "\n");
        drush_print("\n" . $gallery->nid . ' not Updated');
      }
    }
  }
  fclose($mapped_nodes_fp);
  fclose($not_mapped_nodes_fp);
  drush_print($operation_details . " Completed");
}

/**
 * @return array
 *   List of Video NIDs which having any field_global_tags field value.
 */
function ti_amg_fw_custom_get_video_nids() {
  $existed_mapped_nodes = ti_amg_fw_custom_get_mapped_nodes('video');
  $video_nids = array();
  $query = new EntityFieldQuery();
  $query->entityCondition('entity_type', 'node')
      ->propertyCondition('status', 1)
      ->entityCondition('bundle', array('video'));
  if(!empty($existed_mapped_nodes)) {
    $query->propertyCondition('nid', $existed_mapped_nodes, 'NOT IN');
  }

  $result = $query->execute();
  if (isset($result['node'])) {
    $video_nids = array_keys($result['node']);
  }
  return $video_nids;
}

function mapping_video_category_taxonomy($chunk, $operation_details, &$context) {
  $mapped_nodes_fp = fopen("sites/default/files/content_mapping_logs/video_mapped_nodes_log.txt", "a+");
  $not_mapped_nodes_fp = fopen("sites/default/files/content_mapping_logs/video_not_mapped_nodes_log.txt", "a+");
  $mapped_tags_fp = fopen("sites/default/files/content_mapping_logs/video_mapped_tags_log.txt", "a+");
  $not_mapped_tags_fp = fopen("sites/default/files/content_mapping_logs/video_not_mapped_tags_log.txt", "a+");

  drush_print($operation_details . " Starting..."); //Will show what chunk we're on.

  if (isset($chunk) && $chunk != '') {
    $video_nodes = entity_load('node', $chunk);
    foreach ($video_nodes as $video) {
      $term_name = '';
      $term_id = '';
      $target_term_id = '';
      $empty_term_flag = 0;
      if (isset($video->field_global_tags[LANGUAGE_NONE])) {
        $term_id = $video->field_global_tags[LANGUAGE_NONE][0]['tid'];
        if (!empty($term_id)) {
          $term_obj = taxonomy_term_load($term_id);
          if (!empty($term_obj)) {
            $term_name = $term_obj->name;
          }
          else {
            $empty_term_flag = 1;
          }
          if (!empty($term_name) && $empty_term_flag == 0) {
            $target_term = taxonomy_get_term_by_name($term_name, 'fw_category');
            if (!empty($target_term) && sizeof($target_term) == 1) {
              foreach ($target_term as $term) {
                $target_term_id = $term->tid;
              }
              fwrite($mapped_tags_fp, $term_name . "\n");
            }
            else {
              $empty_term_flag = 1;
              fwrite($not_mapped_tags_fp, $term_name . "\n");
            }
          }
        }
      }
      else {
        $empty_term_flag = 1;
      }
      if ($empty_term_flag == 1) {
        $target_term = taxonomy_get_term_by_name('Video', 'fw_category');
        if (!empty($target_term) && sizeof($target_term) == 1) {
          foreach ($target_term as $term) {
            $target_term_id = $term->tid;
          }
        }
      }
      if (!empty($target_term_id) && $empty_term_flag == 0) {
        $video->field_fw_category[LANGUAGE_NONE][0]['tid'] = $target_term_id;
        node_save($video);
        fwrite($mapped_nodes_fp, $video->nid . "\n");
        drush_print("\n" . $video->nid . ' Got Updated');
      }
      else
      if (!empty($target_term_id) && $empty_term_flag == 1) {
        $video->field_fw_category[LANGUAGE_NONE][0]['tid'] = $target_term_id;
        node_save($video);
        fwrite($not_mapped_nodes_fp, $video->nid . "\n");
        drush_print("\n" . $video->nid . ' Got Updated with /Video');
      }
    }
  }
  fclose($mapped_nodes_fp);
  fclose($not_mapped_nodes_fp);
  fclose($mapped_tags_fp);
  fclose($not_mapped_tags_fp);
  drush_print($operation_details . " Completed");
}

/**
 *
 * @param string $content_type.
 * @return array
 *   array of nids.
 */
function ti_amg_fw_custom_get_mapped_nodes($content_type) {
  $already_mapped_fp = fopen("sites/default/files/content_mapping_logs/" . $content_type . "_already_mapped_nodes_log.txt", "a+");
  $nids = array();
  $types = array($content_type);
  $query = new EntityFieldQuery();
  $query->entityCondition('entity_type', 'node')
      ->entityCondition('bundle', $types)
      ->fieldCondition('field_fw_category', 'tid', 'NULL', '!=');
  $result = $query->execute();
  if (isset($result['node'])) {
    $nids = array_keys($result['node']);
  }
  foreach ($nids as $nid) {
    fwrite($already_mapped_fp, $nid . "\n");
  }
  fclose($already_mapped_fp);

  return $nids;
}

/*
 * Drush command to update Recipe, Slideshow and Video content type tags.
 */
function drush_update_tags($csv_path = NULL, $node_created_from = NULL, $node_created_to = NULL, $vocabulary_name = NULL) {
  global $node_created_from;
  global $node_created_to;
  $node_created_from = drush_prompt(dt('Enter date to select nodes created from:format "dd-mm-yyyy H:i:s" eg:31-05-2014 23:59:59'));
  $node_created_from = strtotime($node_created_from);
  $node_created_to = drush_prompt(dt('Enter date to select nodes created up to:format "dd-mm-yyyy H:i:s" eg:31-05-2015 23:59:59'));
  $node_created_to = strtotime($node_created_to);
  //$taxonomy = 'fw_category';
  $vocabulary_name = drush_prompt(dt('Enter Vocabulary Machine Name eg:fw_category'));
   if(!$csv_path) {
    return drush_set_error('CSV File path is missing in command');
  }
  $file = $csv_path;
  $tax_terms = ti_amg_fwrd_custom_get_taxonomy($vocabulary_name);
  $exempt_ids = file($file, FILE_IGNORE_NEW_LINES);
  $nodes = ti_amg_fwrd_custom_get_nodes_by_create_date($node_created_from, $node_created_to, $exempt_ids);
  echo "\n" . count($nodes) . ' nodes are available for update ' . "\n";
  if ($nodes) {
  $i = 1;
    foreach ($nodes as $node) {
      $tax_tids = $tids = $term_names = '';
      $nid = $node->nid;
      $node_url = drupal_get_path_alias('node/' . $nid);
      $segments = explode('/', $node_url);
      $end_seg = end($segments);
      $new_sent = str_replace('-', ' ', $end_seg);
      $tids = array();
      $node_tids = !empty($node->field_fw_tags[LANGUAGE_NONE]) ? $node->field_fw_tags[LANGUAGE_NONE] : '';
      if (!empty($node_tids)) {
        foreach ($node_tids as $node_tid) {
          $tids[] = $node_tid['tid'];
        }
      }
      foreach ($tax_terms as $tx_term) {
        $term_name = strtolower($tx_term->name);
        if (preg_match('/\b' . $term_name . '\b/', $new_sent)) {
          $term_names[] = $term_name;
          $tids[] = $tx_term->tid;
        }
      }

      $tax_tids = array_unique($tids);
      if (!empty($tax_tids)) {
        foreach ($tax_tids as $key => $tax_tid) {
          $node->field_fw_tags[LANGUAGE_NONE][$key]['tid'] = $tax_tid;
        }
        field_attach_update('node', $node);
        echo "\n" . $i++ . ' node save completed  - id - '
        . $nid . "\n";
      }
      else {
        echo "\n" . $i++ . ' match not found  - id - '
        . $nid . "\n";
      }
      file_put_contents($file, $nid . "\n", FILE_APPEND);
    }
  }
  echo "\n" . count($nodes) . ' Nodes Updated Successfully' . "\n";
}

/**
 * Drush Command Callback - remove unwanted tags.
 */
function drush_ti_amg_fw_custom_remove_unwanted_tags($csv_path = NULL, $source_column_number = NULL, $vocabulary_name = NULL) {
  $vocabulary_name = drush_prompt(dt('Enter Vocabulary Machine Name eg:fw_category'));
  if (!$source_column_number) {
    return drush_set_error('Invalid Input');
  }
  if ($source_column_number < 1) {
    return drush_set_error('Invalid Input: Column number starts from 1.');
  }
  $source_column_number --;
  if (!$csv_path) {
    return drush_set_error('CSV File path is missing in command');
  }
  $file = fopen($csv_path, 'r');
  if (!$file) {
    return drush_set_error('Unable to read given CSV file.');
  }
  $count = 0;
  $taxonomy_terms = ti_amg_fwrd_custom_get_taxonomy($vocabulary_name);
  foreach ($taxonomy_terms as $taxo_term) {
    $term[] = $taxo_term->name;
    $tid[] = $taxo_term->tid;
    $vid[] = $taxo_term->vid;
  }
  $count = 0;
  while (($line = fgetcsv($file)) !== FALSE) {
    if (!isset($line[$source_column_number])) {
      return drush_set_error(dt('Unable to fetch data from column number @source_column_number.', array('@source_column_number' => $source_column_number)));
    }
    $source_paths = $line[$source_column_number];

    $term_id_objs = taxonomy_get_term_by_name($source_paths, $vocabulary_name);
    foreach ($term_id_objs as $term_id_obj) {
      $remove_term_name = $term_id_obj->name;
      $remove_tid = $term_id_obj->tid;
      $remove_vid = $term_id_obj->vid;
      if (in_array($remove_term_name, $term) && in_array($remove_tid, $tid) && in_array($remove_vid, $vid)) {
        taxonomy_term_delete($remove_tid);
        $count++;
        drupal_set_message(dt('@count Removed: @source_path', array('@source_path' => $source_paths, '@count' => $count)));
      }
    }
  }
  drupal_set_message(dt('@count Found and Removed', array('@count' => $count)));
  fclose($file);
  drupal_set_message('Completed !!!');
}

/**
 * Drush Command Callback - Remove unwanted blog urls.
 */
function drush_ti_amg_fw_custom_blog_url_cleanup() {
  $r = 0;
  $path = variable_get('file_public_path', conf_path());
  $path = $path . '/blogs_redirect_csv';
  $file_name = '/blogs_broken_url_redirects.csv';
  $redirect_array = array();
  // Header for CSV File.
  $list[0] = array('RID', 'PID', 'Source', 'Destination');
  $blogs_aliases = db_query("SELECT pid, alias, source FROM (SELECT pid, source, alias FROM url_alias WHERE source in (SELECT CONCAT('node/', nid) from node where type = 'blog' and status = 1) ORDER BY pid DESC) url_alias GROUP BY source ")->fetchAll();
  if (!empty($blogs_aliases) && count($blogs_aliases) > 0) {
    foreach ($blogs_aliases as $blogs_alias) {
      $rd_query = db_select('redirect', 'r');
      $rd_query->fields('r', array('rid', 'source', 'redirect'));
      $rd_query->condition('r.source', $blogs_alias->alias, '=');
      $rd_query->condition('r.redirect', $blogs_alias->source, '=');
      $blogs_redirects = $rd_query->distinct()->execute()->fetchAll();
      if (!empty($blogs_redirects) && count($blogs_redirects) > 0) {
        foreach ($blogs_redirects as $blogs_redirect) {
          ti_amg_fw_custom_cleanup_old_blog_url_alias($blogs_redirect, $blogs_alias->pid);
          $redirect_array['rid'] = $blogs_redirect->rid;
          $redirect_array['pid'] = $blogs_alias->pid;
          $redirect_array['source'] = $blogs_redirect->source;
          $redirect_array['destination'] = $blogs_redirect->redirect;
          $r++;
          $list[$r + 1] = $redirect_array;
          drupal_set_message(dt('@count Removing: -- RID: @rid -- Source: @source_path -- Destination: @destination_path', array('@rid' => $blogs_redirect->rid, '@source_path' => $blogs_redirect->source, '@destination_path' => $blogs_redirect->redirect, '@count' => $r)));
        }
      }
    }
    if (!empty($list) && count($list) > 1) {
      file_prepare_directory($path, FILE_CREATE_DIRECTORY);
      $file_path = $path . $file_name;
      $fp = fopen($file_path, 'w');
      foreach ($list as $fields) {
        fputcsv($fp, $fields);
      }
      drupal_set_message(dt('@count Broken Blog URL Redirects Found and Removed', array('@count' => $r)));
      fclose($fp);
      drupal_set_message('Completed !!!');
    }
  }
}

// To cleanup old url aliases and broken url redirects.
function ti_amg_fw_custom_cleanup_old_blog_url_alias($blogs_redirect = '', $pid = '') {
  if (!empty($blogs_redirect) && is_object($blogs_redirect) && !empty($pid)) {
    $rd_query = db_select('url_alias', 'u');
    $rd_query->fields('u', array('pid', 'source', 'alias'));
    $rd_query->condition('u.source', $blogs_redirect->redirect, '=');
    $rd_query->condition('u.pid', $pid, '<>');
    $blog_url_aliases = $rd_query->execute()->fetchAll();
    if (!empty($blog_url_aliases) && count($blog_url_aliases) > 0) {
      foreach ($blog_url_aliases as $blog_url_alias) {
        $redirect_source = redirect_load_by_source($blog_url_alias->alias);
        if (!isset($redirect_source->rid)) {
          $redirect = new stdClass();
          redirect_object_prepare(
              $redirect, array(
            'source' => $blog_url_alias->alias,
            'source_options' => array(),
            'redirect' => $blog_url_alias->source,
            'redirect_options' => array(),
            'language' => LANGUAGE_NONE,
              )
          );
          redirect_save($redirect);
        }
        path_delete($blog_url_alias->pid);
      }
    }
    redirect_delete($blogs_redirect->rid);
  }
}

/**
* Callback function for drush unsearchable content update.
*/
function drush_ti_amg_fw_custom_unsearchable_content_update($content_type = NULL, $limit = NULL) {
  $types = array(
    'Blog'=>'blog',
    'Recipe'=>'recipe',
    'Gallery'=>'gallery',
    'Article'=>'article'
  );
  $content_type = drush_choice($types, 'Enter a number to choose the content type to execute!', '!key');
  if(isset($types[$content_type]) && $types[$content_type] !=''){
    $bundle = $types[$content_type];
    variable_set('bundle', $bundle);
    if (file_exists("sites/default/files/" . $bundle . "_syndication_updated_nodes_log.txt")) {
      unlink("sites/default/files/" . $bundle . "_syndication_updated_nodes_log.txt");
    }
    if (file_exists("sites/default/files/" . $bundle . "_syndication_not_updated_nodes_log.txt")) {
      unlink("sites/default/files/" . $bundle . "_syndication_not_updated_nodes_log.txt");
    }
    // To get all node nids from the respective content type.
    $query = new EntityFieldQuery();
    $query->entityCondition('entity_type', 'node');
    $query->entityCondition('bundle', $bundle);
    if (!empty($limit)) {
      $query->range(0, $limit);
    }
    $query->propertyOrderBy('created', 'DESC');
    $result = $query->execute();
    $count = $query->count()->execute();
    if (isset($result['node'])) {
      $items_nids = array_keys($result['node']);
      //Break up all node items, so each process does not time out.
      $chunks = array_chunk($items_nids, 1);
      $operations = array();
      $count_chunks = count($chunks);
    }
    drush_print("\n--------------------------------------------------------\n");
    drush_print(t("Total Number of ". $content_type ." contents: ".$count));
    drush_print("\n--------------------------------------------------------\n");
    // for every chunk, assign some method to run on that chunk of data
    foreach ($chunks as $chunk) {
      $i++;
      $operations[] = array("ti_amg_fw_custom_syndicate_unsearchable_content", array( $chunk ,'details'=> t('(Updating content @chunk  of  @count)', array('@chunk '=>$i, '@count'=>$count_chunks))));
    }
    // put all that information into our batch array
    $batch = array(
      'operations' => $operations,
      'title' => t('Import batch'),
      'init_message' => t('Initializing'),
      'error_message' => t('An error occurred'),
      'finished' => 'ti_amg_fw_custom_syndicate_unsearchable_batch_finished'
    );
    // Get the batch process all ready!
    batch_set($batch);
    $batch =& batch_get();
    // Because we are doing this on the back-end, we set progressive to false.
    $batch['progressive'] = FALSE;
    // Start processing the batch operations.
    drush_backend_batch_process();
  }
}

// To updating the syndicate flag by batch operation callback function.
function ti_amg_fw_custom_syndicate_unsearchable_content($chunk, $operation_details, &$context){
  $context['message'] = $operation_details; //Will show what chunk we're on.
  $bundle = variable_get('bundle', '');
  $synd_updated_nodes_fp = fopen("sites/default/files/".$bundle."_syndication_updated_nodes_log.txt", "a+");
  $synd_not_updated_nodes_fp = fopen("sites/default/files/".$bundle."_syndication_not_updated_nodes_log.txt", "a+");
  if(!empty($chunk)) {
    $node = node_load($chunk[0]);
    $syndication_flag = 0;
    // If syndication flag is empty or not checked already then proceed further.
    if (empty($node->field_syndication[LANGUAGE_NONE]) || $node->field_syndication[LANGUAGE_NONE][0]['value'] == 0) {
      if (!empty($node->metatags[LANGUAGE_NONE]['robots']['value'])) {
        $metatags_robots_value = $node->metatags[LANGUAGE_NONE]['robots']['value'];
        if ( (!empty($metatags_robots_value['noindex']) && $metatags_robots_value['noindex'] == 'noindex') && (!empty($metatags_robots_value['nofollow']) && $metatags_robots_value['nofollow'] == 'nofollow') ) {
          $syndication_flag = 1;
          $context['message'] = 'Noindex and nofollow value exist - ' . $node->nid;
          $context['results']['updated'][] = $node->nid;
          fwrite($synd_updated_nodes_fp, $node->nid . "\n");
        }
      }
      // If content type is blog, then we have one more check to enable syndication flag.
      if ($node->type == 'blog' && $syndication_flag == 0) {
        if (!empty($node->field_block_indexing[LANGUAGE_NONE]) && $node->field_block_indexing[LANGUAGE_NONE][0]['value'] == 1) {
          $syndication_flag = 1;
          $context['message'] = 'Block indexing by search engine value exist - ' . $node->nid;
          $context['results']['updated'][] = $node->nid;
          fwrite($synd_updated_nodes_fp, $node->nid . "\n");
        }
      }
      if ($syndication_flag == 1) {
        // Update field_syndication value to 1 in database record
        $node->field_syndication[LANGUAGE_NONE][0]['value'] = $syndication_flag;
        field_attach_update('node', $node);
        entity_get_controller('node')->resetCache(array($node->nid));
      }
      else {
        if (empty($node->field_syndication[LANGUAGE_NONE])) {
          // Update field_syndication value to 0 in database record
          $node->field_syndication[LANGUAGE_NONE][0]['value'] = $syndication_flag;
          field_attach_update('node', $node);
          entity_get_controller('node')->resetCache(array($node->nid));
        }
        $context['message'] = 'No match found - ' . $node->nid;
        $context['results']['not_updated'][] = $node->nid;
        fwrite($synd_not_updated_nodes_fp, $node->nid . "\n");
      }
    }
    else {
      $context['message'] = 'Syndication flag already enabled - ' . $node->nid;
      $context['results']['not_updated'][] = $node->nid;
      fwrite($synd_not_updated_nodes_fp, $node->nid . "\n");
    }
  }
  fclose($synd_updated_nodes_fp);
  fclose($synd_not_updated_nodes_fp);
}

// Processing syndicate unsearchable batch operation finished method callback function.
function ti_amg_fw_custom_syndicate_unsearchable_batch_finished($success, $results, $operations) {
  if ($success) {
    drush_print("\n----------------------------------------------------------");
    drush_print(t('Task Status : Success'));
    drush_print(t('@count Nodes are updated successfully!', array('@count' => count($results['updated']))));
    drush_print(t('@count Nodes are not updated.', array('@count' => count($results['not_updated']))));
    drush_print("----------------------------------------------------------\n\r");
  }
  else {
    // An error occurred.
    // $operations contains the operations that remained unprocessed.
    $error_operation = reset($operations);
    drush_print("\n--------------------------------------------------------\n");
    drush_print(
        t('An error occurred while processing @operation with arguments : @args',
            array('@operation' => $error_operation[0],
      '@args' => print_r($error_operation[0], TRUE),
            )
        )
    );
    drush_print("\n------------------------------------------------------\n\r");
  }
}

function drush_ti_amg_fw_custom_body_related_short_code() {
  $last_item = "<p>[%related]</p>";
  $query = db_select('field_data_body', 'f');

  $query->join('node', 'n', 'n.nid = f.entity_id'); //JOIN node body

  $query->fields('n',array('nid'))//SELECT the fields from node
    ->condition('f.bundle','article','=')
    ->condition('body_value', '%' . db_like($last_item) . '%', 'LIKE');

  $result = $query->execute();
  $nids = array();
  while($record = $result->fetchAssoc()) {
    $nids[] = $record['nid'];
  }
  $count = count($nids);
  if (isset($nids)) {
     //Break up all node items, so each process does not time out.
     $chunks = array_chunk($nids, 1);
     $operations = array();
     $count_chunks = count($chunks);
   }
  drush_print("\n--------------------------------------------------------\n");
  drush_print(t("Total Number of Article contents: ".$count));
  drush_print("\n--------------------------------------------------------\n");
  foreach ($chunks as $chunk) {
    $i++;
    $operations[] = array("ti_amg_fw_custom_replace_body_content", array( $chunk ,'details'=> t('(Updating content @chunk  of  @count)', array('@chunk '=>$i, '@count'=>$count_chunks))));
  }
    //for every nids
    // put all that information into our batch array
     $batch = array(
       'operations' => $operations,
       'title' => t('Import batch'),
       'init_message' => t('Initializing'),
       'error_message' => t('An error occurred'),
       'finished' => 'update_drush_operation_by_batch_finished'
     );
     // Get the batch process all ready!
     batch_set($batch);
     $batch =& batch_get();
     // Because we are doing this on the back-end, we set progressive to false.
     $batch['progressive'] = FALSE;
     // Start processing the batch operations.
     drush_backend_batch_process();
   }


function ti_amg_fw_custom_replace_body_content ($chunk, $operation_details, &$context) {
  $context['message'] = $operation_details;
  if(isset($chunk) && $chunk !=''){
   $nid =  $chunk[0];
  }
  $node = node_load($nid);
  $body = $node->body[LANGUAGE_NONE][0]['value'];
  $i =1;
  if (strpos($body, '<p>[%related]</p>') !== FALSE) {
    $body = preg_replace('/(<p>)?\[%related](<\/p>)?/', '', $body);
    $node->body[LANGUAGE_NONE][0]['value'] = $body;
    field_attach_update('node', $node);
    $context['results']['updated'][] = $node->nid;
  }
  entity_get_controller('node')->resetCache(array($node->nid));
  drush_print(t('@nid Node is updated successfully!', array('@nid' => $node->nid)));
}

//Processing batch operation finished method callback function
function update_drush_operation_by_batch_finished($success, $results, $operations) {
  if ($success) {
     drush_print("\n----------------------------------------------------------");
     drush_print(t('Task Status : Success'));
     drush_print(t('@count Nodes are updated successfully!', array('@count' => count($results['updated']))));
     drush_print(t('@count Nodes are not updated.', array('@count' => count($results['not_updated']))));
     drush_print("----------------------------------------------------------\n\r");
   }
   else {
     // An error occurred.
     // $operations contains the operations that remained unprocessed.
     $error_operation = reset($operations);
     drush_print("\n--------------------------------------------------------\n");
     drush_print(
         t('An error occurred while processing @operation with arguments : @args',
             array('@operation' => $error_operation[0],
       '@args' => print_r($error_operation[0], TRUE),
             )
         )
     );
     drush_print("\n------------------------------------------------------\n\r");
   }
}

function drush_ti_amg_fw_custom_update_key_value_pair() {

  $query = db_select('field_data_field_ad_keys', 'f');
  $query->join('node', 'n', 'n.nid = f.entity_id');
  $query->fields('n',array('nid'));
  $result = $query->execute();
  $nids = array();
  while($record = $result->fetchAssoc()) {
    $nids[] = $record['nid'];
  }
  $count = count($nids);
  if (isset($nids)) {
     //Break up all node items, so each process does not time out.
     $chunks = array_chunk($nids, 1);
     $operations = array();
     $count_chunks = count($chunks);
   }
  drush_print("\n--------------------------------------------------------\n");
  drush_print(t("Total Number of contents with key value: ".$count));
  drush_print("\n--------------------------------------------------------\n");
  foreach ($chunks as $chunk) {
    $i++;
    $operations[] = array("ti_amg_fw_custom_replace_key_value", array( $chunk ,'details'=> t('(Updating content @chunk  of  @count)', array('@chunk '=>$i, '@count'=>$count_chunks))));
  }
    //for every nids
    // put all that information into our batch array
     $batch = array(
       'operations' => $operations,
       'title' => t('Import batch'),
       'init_message' => t('Initializing'),
       'error_message' => t('An error occurred'),
       'finished' => 'update_drush_operation_by_batch_finished'
     );
     // Get the batch process all ready!
     batch_set($batch);
     $batch =& batch_get();
     // Because we are doing this on the back-end, we set progressive to false.
     $batch['progressive'] = FALSE;
     // Start processing the batch operations.
     drush_backend_batch_process();
}

function ti_amg_fw_custom_replace_key_value ($chunk, $operation_details, &$context) {
  $context['message'] = $operation_details;
  if(isset($chunk) && $chunk !=''){
   $nid =  $chunk[0];
  }
  $node = node_load($nid);
  $i=1;
  if(isset($node->field_ad_keys[LANGUAGE_NONE][0]['value'])) {
    $initial_value = $node->field_ad_keys[LANGUAGE_NONE][0]['value'];
    $initial_value = str_replace(";","",$initial_value);
    $key_value = (explode("=",$initial_value));
  }
  if(isset($key_value[0]) && isset($key_value[1])) {
    $node->field_ad_keys[LANGUAGE_NONE][0]['value'] = $key_value[0];
    $node->field_ad_value[LANGUAGE_NONE][0]['value'] = $key_value[1];
  } else if(isset($key_value[0])) {
    $node->field_ad_keys[LANGUAGE_NONE][0]['value'] = $key_value[0];
  } else {
    $node->field_ad_keys[LANGUAGE_NONE][0]['value'] = 'frnch';
  }

   field_attach_update('node', $node);
   $context['results']['updated'][] = $node->nid;
   entity_get_controller('node')->resetCache(array($node->nid));
  drush_print(t('@nid Node is updated successfully!', array('@nid' => $node->nid)));
}

/*
* Callback function for drush to update blog postion value and body text format.
*/
function drush_ti_amg_fw_custom_update_blog_position() {
  $bundle = 'blog';
  $result_nids = ti_amg_fw_custom_get_local_flavor_nids($bundle);
  if (!empty($result_nids) && count($result_nids) > 0) {
    foreach($result_nids as $nid) {
      $node = node_load($nid);
      $flag = 0;
      if (!empty($node)) {
        if (empty($node->body[LANGUAGE_NONE][0]['format']) || $node->body[LANGUAGE_NONE][0]['format'] == 'article_html') {
          $flag = 1;
          $node->body[LANGUAGE_NONE][0]['format'] = 'full_html';
          drush_print(dt("@nid: Body field text format has been updated to full_html", array('@nid' => $node->nid)));
        }
        if (empty($node->field_image_position) || empty($node->field_image_position[LANGUAGE_NONE][0]['value']) ) {
          $flag = 1;
          $node->field_image_position[LANGUAGE_NONE][0]['value'] = 'Full';
          drush_print(dt("@nid: Position field has been updated to full", array('@nid' => $node->nid)));
        }
        if ($flag == 1) {
          field_attach_update('node', $node);
          entity_get_controller('node')->resetCache(array($node->nid));
        }
      }
    }
  }
}

/*
* Callback function for drush to log local flavor contents into migration success file.
*/
function drush_ti_amg_fw_custom_log_local_flavor_nids() {
  $bundle = 'article';
  $result_nids = ti_amg_fw_custom_get_local_flavor_nids($bundle);
  $success_fp = fopen("sites/default/files/migration_logs/migration_success.txt", "w+");
  if (!empty($result_nids) && count($result_nids) > 0) {
    $success_log_fp = fopen("sites/default/files/migration_logs/migration_success.txt", "a+");
    drush_print("\n--------------------------------------------------------\n");
    drush_print(dt("Total number of ". $bundle ." nodes with local flavor: @count", array('@count' => count($result_nids))));
    drush_print("\n--------------------------------------------------------\n");
    foreach($result_nids as $nid) {
      fwrite($success_log_fp, $nid . "\r\n");
      drush_print("Nid: " . $nid);
      drush_print(PHP_EOL);
    }
  }
}

/*
* Callback function to get local flavor nids.
*/
function ti_amg_fw_custom_get_local_flavor_nids($bundle = NULL) {
  $nids = array();
  if (!empty($bundle)) {
    $terms_to_check = array();
    $terms_to_check[] = 'Local Flavor';
    $terms_to_check[] = 'Local Flavor International';
    $tids_to_check = array();
    foreach($terms_to_check as $term) {
      $term_obj = taxonomy_get_term_by_name($term);
      $current_term = current($term_obj);
      $tids_to_check[] = $current_term->tid;
    }
    if (!empty($tids_to_check) && count($tids_to_check) > 0 ) {
      $query = db_select('node', 'n');
      $query->join('field_data_field_fw_tags', 't', 'n.nid = t.entity_id');
      $query->fields('n',array('nid'));
      $query->condition('t.bundle', $bundle, '=');
      $query->condition('t.field_fw_tags_tid', $tids_to_check, 'IN');
      $query->groupBy('t.entity_id');
      $result = $query->execute()->fetchAll();
      if (!empty($result) && count($result) > 0) {
        foreach($result as $row) {
          $nids[] = $row->nid;
        }
      }
    }
  }
  return $nids;
}


/*
* Callback function for drush to update editor domain to anonymus url.
*/
function drush_ti_amg_fw_custom_update_editor_domain_url() {
  $success_log_fp = fopen("sites/default/files/updated_gallery_editor_domain_url_log.txt", "w");
  $external_links_bundle = 'image';
  $external_links_nids = ti_amg_fw_custom_get_external_links_nids($external_links_bundle);
  $slide_links_bundle = 'gallery';
  $slide_links_nids = ti_amg_fw_custom_get_slide_links_nids($slide_links_bundle);

  if (!empty($external_links_nids) && count($external_links_nids) > 0) {
    $success_log_fp = fopen("sites/default/files/updated_gallery_editor_domain_url_log.txt", "a+");

    db_update('field_data_field_external_link')
    ->expression('field_external_link_url', 'replace(field_external_link_url, :old_site, :current_site)', array(':old_site' => '//editor.', ':current_site' => '//www.'))
    ->execute();

    db_update('field_revision_field_external_link')
    ->expression('field_external_link_url', 'replace(field_external_link_url, :old_site, :current_site)', array(':old_site' => '//editor.', ':current_site' => '//www.'))
    ->execute();

    drush_print("\n--------------------------------------------------------\n");
    drush_print(dt("Total number of ". $external_links_bundle ." nodes which updated: @count", array('@count' => count($external_links_nids))));
    drush_print("\n--------------------------------------------------------\n");
    foreach($external_links_nids as $nid) {
      $node = node_load($nid);
      entity_get_controller('node')->resetCache(array($node->nid));
      ti_document_store_clear_document($node);
      drush_print(t('@nid Node is updated successfully!', array('@nid' => $node->nid)));
      fwrite($success_log_fp, $nid . "\r\n");
      drush_print(PHP_EOL);
    }
  }

  if (!empty($slide_links_nids) && count($slide_links_nids) > 0) {
    $success_log_fp = fopen("sites/default/files/updated_gallery_editor_domain_url_log.txt", "a+");

    db_update('field_data_field_slide_link_url')
    ->expression('field_slide_link_url_url', 'replace(field_slide_link_url_url, :old_site, :current_site)', array(':old_site' => '//editor.', ':current_site' => '//www.'))
    ->execute();

    db_update('field_revision_field_slide_link_url')
    ->expression('field_slide_link_url_url', 'replace(field_slide_link_url_url, :old_site, :current_site)', array(':old_site' => '//editor.', ':current_site' => '//www.'))
    ->execute();

    drush_print("\n--------------------------------------------------------\n");
    drush_print(dt("Total number of ". $slide_links_bundle ." nodes which updated: @count", array('@count' => count($slide_links_nids))));
    drush_print("\n--------------------------------------------------------\n");
    foreach($slide_links_nids as $nid) {
      $node = node_load($nid);
      entity_get_controller('node')->resetCache(array($node->nid));
      ti_document_store_clear_document($node);
      drush_print(t('@nid Node is updated successfully!', array('@nid' => $node->nid)));
      fwrite($success_log_fp, $nid . "\r\n");
      drush_print(PHP_EOL);
    }
  }
}

/*
* Callback function to get external links nids.
*/
function ti_amg_fw_custom_get_external_links_nids($bundle = NULL) {
  $nids = array();
  $search_item = '//editor.';
  $query = db_select('node', 'n');
  $query->join('field_data_field_external_link', 'el', 'n.nid = el.entity_id');
  $query->fields('n',array('nid'));
  $query->condition('el.bundle', $bundle, '=');
  $query->condition('el.field_external_link_url', '%' . db_like($search_item) . '%', 'LIKE');
  $query->groupBy('n.nid');
  $result = $query->execute()->fetchAll();
  if (!empty($result) && count($result) > 0) {
    foreach($result as $row) {
      $nids[] = $row->nid;
    }
  }
  return $nids;
}

/*
* Callback function to get slide links nids.
*/
function ti_amg_fw_custom_get_slide_links_nids($bundle = NULL) {
  $nids = array();
  $search_item = '//editor.';
  $query = db_select('node', 'n');
  $query->join('field_data_field_slide_info', 'si', 'n.nid = si.entity_id');
  $query->join('field_data_field_slide_link_url', 'sl', 'si.field_slide_info_value = sl.entity_id');
  $query->fields('n',array('nid'));
  $query->condition('si.bundle', $bundle, '=');
  $query->condition('sl.field_slide_link_url_url', '%' . db_like($search_item) . '%', 'LIKE');
  $query->groupBy('n.nid');
  $result = $query->execute()->fetchAll();
  if (!empty($result) && count($result) > 0) {
    foreach($result as $row) {
      $nids[] = $row->nid;
    }
  }
  return $nids;
}
