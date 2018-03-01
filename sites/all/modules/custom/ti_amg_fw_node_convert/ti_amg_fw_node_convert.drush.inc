<?php

/*
 * Drush commands for node convert.
 */

/**
 * Implementation of hook_drush_command().
 */
function ti_amg_fw_node_convert_drush_command() {
  $items = array();

  // To migrate blogs to article content type.
  $items['ti_amg_fw_node_convert_migrate_blog_to_article'] = array(
    'description' => 'Migrate Blog To Article',
    'aliases' => array('migrate-blog-to-article'),
  );
  // To revert migration from article to blog.
  $items['ti_amg_fw_node_convert_migrate_blog_to_article_revert'] = array(
    'description' => 'Reverting Blog to Article Migration',
    'aliases' => array('revert-migrate-blog-to-article'),
  );
  // To clear the logs.
  $items['ti_amg_fw_node_convert_clear_migrate_logs'] = array(
    'description' => 'Clear the Migrate Logs',
    'aliases' => array('clear-logs'),
  );
  return $items;
}

/**
 * Callback function for blog to article migration.
 */
function drush_ti_amg_fw_node_convert_migrate_blog_to_article() {
  // Choosing the option to run the migration script.
  $options = array(
    '50' => '50 nodes to convert',
    '100' => '100 nodes to convert',
    'all' => 'All nodes to convert',
  );
  $choice = drush_choice($options, 'Please enter the option to execute the migration script');
  // Depend on the choice of selection the nodes for migration.
  if ($choice == 50 || $choice == 100) {
    $nids = ti_amg_fw_node_convert_get_content(array('blog'), $choice);
  }
  elseif ($choice == 'all') {
    $nids = ti_amg_fw_node_convert_get_content(array('blog'), '');
  }
  // Fetching the template name for blog to article migration.
  $template_name = variable_get('blog_to_article_nodeconvert_template_name', '');
  if ($template_name == '') {
    return drush_set_error('No template name was defined for this migration. please update here => admin/config/fw_settings/fw_migration');
  }
  // If any nodes available for migration.
  if (isset($nids) && !empty($nids)) {
    // Checking if the migration logs directory available or not.
    if (!file_exists('sites/default/files/migration_logs')) {
      mkdir('sites/default/files/migration_logs', 0755, true);
    }
    // Clearing the logs before start of migration.
    if (file_exists("sites/default/files/migration_logs/migration_que.txt")) {
      unlink("sites/default/files/migration_logs/migration_que.txt");
    }

    if (file_exists("sites/default/files/migration_logs/migration_processed.txt")) {
      unlink("sites/default/files/migration_logs/migration_processed.txt");
    }

    if (file_exists("sites/default/files/migration_logs/migration_failed.txt")) {
      unlink("sites/default/files/migration_logs/migration_failed.txt");
    }

    //Break up all of our data, so each process does not time out.
    $chunks = array_chunk($nids, 50, TRUE);
    $operations = array();
    $count_chunks = count($chunks);

    $chunk_count = 0;
    //for every chunk, assigning some method to run on that chunk of data
    foreach ($chunks as $chunk) {
      $chunk_count++;
      $operations[] = array("migrate_blog_to_article", array($chunk, $template_name, 'details' => t('(Migrating Blog to Article for chunk @chunk  of  @count)', array('@chunk ' => $chunk_count, '@count' => $count_chunks))));
    }

    //put all that information into our batch array
    $batch = array(
      'operations' => $operations,
      'title' => t('Migrate batch'),
      'init_message' => t('Initializing'),
      'error_message' => t('An error occurred'),
      'finished' => 'migration_blog_to_article_finished'
    );

    //Get the batch process all ready!
    batch_set($batch);
    $batch = & batch_get();

    //Because we are doing this on the back-end, we set progressive to false.
    $batch['progressive'] = FALSE;

    //Start processing the batch operations.
    drush_backend_batch_process();
  }else{
    drush_print('No Nodes are available for migration.');
  }
}

/**
 * Callback function for every batch process of blog to article migration.
 */
function migrate_blog_to_article($chunk, $template_name, $operation_details, &$context) {
  drush_print($operation_details);
  // Getting the reverted nodes list.
  $already_reverted_nodes = array();
  $reverted_list = ti_amg_fw_node_convert_get_reverted_nodes();
  // Opening the files to write the nids.
  $que_log_fp = fopen("sites/default/files/migration_logs/migration_que.txt", "a+");
  $processed_log_fp = fopen("sites/default/files/migration_logs/migration_processed.txt", "a+");
  $failed_log_fp = fopen("sites/default/files/migration_logs/migration_failed.txt", "a+");
  $success_log_fp = fopen("sites/default/files/migration_logs/migration_success.txt", "a+");
  $node_convert_context = array('template' => $template_name);
  if (isset($chunk) && $chunk != '') {
    $nodes = entity_load('node', $chunk);
    foreach ($nodes as $node) {
      if ($node->type == 'blog') {
        fwrite($que_log_fp, $node->nid . "\n");
        node_convert_convert_action($node, $node_convert_context);
        if ($node->type == 'article') {
          fwrite($processed_log_fp, $node->nid . "\n");
          // Checking if the nid is already reverted from the migration.     
          if (!in_array($node->nid, $reverted_list)) {
            fwrite($success_log_fp, $node->nid . "\n");
          }
          else {
            $already_reverted_nodes[] = $node->nid;
          }
        }
        else {
          fwrite($failed_log_fp, $node->nid . "\n");
        }
      }
      else {
        drush_set_error($node->nid . 'is not a Blog content id');
      }
    }
  }
  fclose($que_log_fp);
  fclose($processed_log_fp);
  fclose($failed_log_fp);
  fclose($success_log_fp);

  // Removing the nids from the reverted list, if exists.
  if (!empty($already_reverted_nodes)) {
    $reverted_list = array_diff($reverted_list, $already_reverted_nodes);
    $revert_fp = fopen("sites/default/files/migration_logs/revert_success.txt", "w");
    foreach ($reverted_list as $reverted_node) {
      fwrite($revert_fp, $reverted_node);
    }
    fclose($revert_fp);
  }
}

/**
 * Which calls when blog to article migration completed.
 */
function migration_blog_to_article_finished($success, $results, $operations) {
  if ($success) {
    drush_print('Successfully Migrated the nodes.');
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
 * Implements hook_node_convert_presave().
 */
function ti_amg_fw_node_convert_node_convert_presave($node, $hook_options = array()) {
  // Taking the title value from the alias.
  $alias = drupal_get_path_alias('node/' . $node->nid);
  $alias_parts = explode('/', $alias);
  $node->field_seo_path[LANGUAGE_NONE][0]['value'] = end($alias_parts);

  // Enabling the checkbox if it convet from blog to article.
  $node->field_converted_from_blog[LANGUAGE_NONE][0]['value'] = 1;
}

/**
 * Callback function for revert migration from article fo blog.
 */
function drush_ti_amg_fw_node_convert_migrate_blog_to_article_revert() {
  // Taking the migration log files as base for revert process.
  // So checking whether logs file directory is existed or not.
  if (!file_exists('sites/default/files/migration_logs')) {
    return drush_set_error('No migration logs available to revert.');
  }
  // Taking the template name for revert migration.
  $template_name = variable_get('article_to_blog_nodeconvert_template_name', '');
  if ($template_name == '') {
    return drush_set_error('No template name was defined for revert migration. please update here => admin/config/fw_settings/fw_migration');
  }
  // Removing the revert migration logs before start of the revert process.
  if (file_exists("sites/default/files/migration_logs/revert_que.txt")) {
    unlink("sites/default/files/migration_logs/revert_que.txt");
  }

  if (file_exists("sites/default/files/migration_logs/revert_processed.txt")) {
    unlink("sites/default/files/migration_logs/revert_processed.txt");
  }

  if (file_exists("sites/default/files/migration_logs/revert_failed.txt")) {
    unlink("sites/default/files/migration_logs/revert_failed.txt");
  }

  // Taking which are migrated from blog to article nodes list from logs.
  $migrated_nodes = ti_amg_fw_node_convert_get_migrated_nodes();
  if (!empty($migrated_nodes)) {
    //Break up all of our data, so each process does not time out.
    $chunks = array_chunk($migrated_nodes, 50, TRUE);
    $operations = array();
    $count_chunks = count($chunks);

    $chunk_count = 0;
    //for every chunk, assigning some method to run on that chunk of data
    foreach ($chunks as $chunk) {
      $chunk_count++;

      $operations[] = array("migrate_article_to_blog", array($chunk, $template_name, 'details' => t('(Migrating Blog to Article for chunk @chunk  of  @count)', array('@chunk ' => $chunk_count, '@count' => $count_chunks))));
    }

    //put all that information into our batch array
    $batch = array(
      'operations' => $operations,
      'title' => t('Migrate batch'),
      'init_message' => t('Initializing'),
      'error_message' => t('An error occurred'),
      'finished' => 'migration_article_to_blog_finished'
    );

    //Get the batch process all ready!
    batch_set($batch);
    $batch = & batch_get();

    //Because we are doing this on the back-end, we set progressive to false.
    $batch['progressive'] = FALSE;

    //Start processing the batch operations.
    drush_backend_batch_process();
  }
  else {
    drush_print('No nodes are available for revert migration.');
  }
}

/**
 * Batch function for revert migration.
 */
function migrate_article_to_blog($chunk, $template_name, $operation_details, &$context) {
  // Printing the every batch details.
  drush_print($operation_details);
  // Opening the revert migration logs before start.
  $revert_que_log_fp = fopen("sites/default/files/migration_logs/revert_que.txt", "a+");
  $revert_processed_log_fp = fopen("sites/default/files/migration_logs/revert_processed.txt", "a+");
  $revert_success_log_fp = fopen("sites/default/files/migration_logs/revert_success.txt", "a+");
  $revert_failed_log_fp = fopen("sites/default/files/migration_logs/revert_failed.txt", "a+");

  $node_convert_context = array('template' => $template_name);

  if (isset($chunk) && $chunk != '') {
    $nodes = entity_load('node', $chunk);
    foreach ($nodes as $node) {
      if ($node->type == 'article') {
        fwrite($revert_que_log_fp, $node->nid . "\n");
        node_convert_convert_action($node, $node_convert_context);
        if ($node->type == 'blog') {
          fwrite($revert_processed_log_fp, $node->nid . "\n");
          fwrite($revert_success_log_fp, $node->nid . "\n");
        }
        else {
          fwrite($revert_failed_log_fp, $node->nid . "\n");
        }
      }
      else {
        drush_set_error($node->nid . 'is not a Article content id');
      }
    }
  }
  fclose($revert_que_log_fp);
  fclose($revert_processed_log_fp);
  fclose($revert_success_log_fp);
  fclose($revert_failed_log_fp);
}

/**
 * Batch process finished function for revert migration.
 */
function migration_article_to_blog_finished($success, $results, $operations) {
  if ($success) {
    drush_print('Successfully reverted the nodes.');
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
 * To get the migrated nid list from logs.
 */
function ti_amg_fw_node_convert_get_migrated_nodes() {
  $migrated_list = array();
  $already_reverted_list = array();
  if (file_exists("sites/default/files/migration_logs/migration_success.txt")) {
    $migrated_list = file('sites/default/files/migration_logs/migration_success.txt', FILE_IGNORE_NEW_LINES);
  }

  if (file_exists("sites/default/files/migration_logs/revert_success.txt")) {
    $already_reverted_list = file('sites/default/files/migration_logs/revert_success.txt', FILE_IGNORE_NEW_LINES);
  }
  $migrated_nodes = array_diff($migrated_list, $already_reverted_list);

  return $migrated_nodes;
}

/**
 * To get the reverted nid list from logs.
 */
function ti_amg_fw_node_convert_get_reverted_nodes() {
  $reverted_list = array();
  if (file_exists("sites/default/files/migration_logs/revert_success.txt")) {
    $reverted_list = file('sites/default/files/migration_logs/revert_success.txt', FILE_IGNORE_NEW_LINES);
  }
  return $reverted_list;
}

/**
 * To get nid list of particular content type.
 */
function ti_amg_fw_node_convert_get_content($node_types = array(), $count = 0) {
  $node_ids = array();
  if (!empty($node_types)) {
    $query = new EntityFieldQuery();
    $query->entityCondition('entity_type', 'node');
    $query->entityCondition('bundle', $node_types);
    if ($count > 0) {
      $query->range(0, $count);
    }

    $result = $query->execute();
    if (isset($result['node'])) {
      $node_ids = array_keys($result['node']);
    }
  }
  return $node_ids;
}

/**
 * Callback function to clear logs command.
 */
function drush_ti_amg_fw_node_convert_clear_migrate_logs() {
  if (!file_exists('sites/default/files/migration_logs')) {
    return drush_set_error('No migration logs available to clear.');
  }
  if (file_exists("sites/default/files/migration_logs/migration_que.txt")) {
    unlink("sites/default/files/migration_logs/migration_que.txt");
  }

  if (file_exists("sites/default/files/migration_logs/migration_processed.txt")) {
    unlink("sites/default/files/migration_logs/migration_processed.txt");
  }

  if (file_exists("sites/default/files/migration_logs/migration_failed.txt")) {
    unlink("sites/default/files/migration_logs/migration_failed.txt");
  }

  if (file_exists("sites/default/files/migration_logs/migration_success.txt")) {
    unlink("sites/default/files/migration_logs/migration_success.txt");
  }

  if (file_exists("sites/default/files/migration_logs/revert_que.txt")) {
    unlink("sites/default/files/migration_logs/revert_que.txt");
  }

  if (file_exists("sites/default/files/migration_logs/revert_processed.txt")) {
    unlink("sites/default/files/migration_logs/revert_processed.txt");
  }

  if (file_exists("sites/default/files/migration_logs/revert_failed.txt")) {
    unlink("sites/default/files/migration_logs/revert_failed.txt");
  }

  if (file_exists("sites/default/files/migration_logs/revert_success.txt")) {
    unlink("sites/default/files/migration_logs/revert_success.txt");
  }
  drush_print("Cleared the logs");
}
