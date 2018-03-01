<?php
/**
 * @file
 * SSI Callbacks functions for the TI AMG FW Tout feature.
 *
 * \addtogroup ti_amg_fw_tout
 * \brief Provides the SSI Callback function for the Tout content type.
 *
 * @{
 */

// Define constants for TI AMG FW Tout feature.
define("TI_amg_fw_TOUT_SSI_FUNCTIONS", serialize(array(
  'daily-free-sample-tout' => 'ti_amg_fw_tout_ssi_dfs_tout',
  'coupon-tout' => 'ti_amg_fw_tout_ssi_coupon_tout',
)));
define("TI_amg_fw_TOUT_DFS_CALENDAR_ALIAS", 'coupons-deals/daily-free-samples');

/**
 * Return the function for a specified SSI identifier.
 *
 * @param string $identifier
 *   The identifier for the ssi callback.
 *
 * \details Returns a function name for a specified SSI Identifier, or FALSE
 *          if there is no corresponding function.
 */
function ti_amg_fw_tout_get_ssi_function($identifier) {
  $ssi_functions = unserialize(TI_amg_fw_TOUT_SSI_FUNCTIONS);

  if (!empty($ssi_functions[$identifier])) {
    $function = $ssi_functions[$identifier];

    if (function_exists($function)) {
      return $function;
    }
  }

  return FALSE;
}

/**
 * Helper function to switch the DFS Tout fields.
 *
 * @param array $variables
 *   The variables array from template_preprocess_ functions.
 */
function ti_amg_fw_tout_ssi_dfs_tout(&$variables) {
  $view_mode = $variables['view_mode'];
  $content = &$variables['content'];

  // Set the node_url to the DFS Calendar page.
  $variables['node_url'] = '/' . TI_amg_fw_TOUT_DFS_CALENDAR_ALIAS;

  // Only make the image and headline replacements on the homepage right now.
  if (drupal_is_front_page()) {
    // Retrieve the current DFS.
    if (function_exists('ti_amg_fw_dfs_get_todays_free_sample')) {
      if ($dfs_nid = ti_amg_fw_dfs_get_todays_free_sample()) {
        $dfs_nid = array_shift($dfs_nid);
        $dfs = node_load($dfs_nid);
      }
    }

    // Make the replacements.
    if (!empty($dfs)) {
      // Get the rendered version for the view mode.
      $dfs_view = node_view($dfs, $view_mode);

      // Replace the headline.
      if (!empty($dfs_view['field_headline'])) {
        $content['field_tout_headline'] = $dfs_view['field_headline'];
        $content['field_tout_headline']['#prefix'] = '<div class="tout-headline">';
        $content['field_tout_headline']['#suffix'] = '</div>';
      }

      // Replace the image.
      if (!empty($dfs_view['field_image'])) {
        $content['field_tout_image'] = $dfs_view['field_image'];
        $content['field_tout_image']['#prefix'] = '<div class="tout-image">';
        $content['field_tout_image']['#suffix'] = '</div>';
      }
    }
  }
}

/**
 * Helper function to output the coupon touts.
 *
 * @param array $variables
 *   The variables array from template_preprocess_ functions.
 *
 * @param string $data
 *   The full data from the ssi_callback field.
 */
function ti_amg_fw_tout_ssi_coupon_tout(&$variables, $data) {
  $node = $variables['node'];

  // Separate the ssi data into the requisite parts.
  $data = explode('::', $data);

  // Set the path to the static coupon file.
  $file = 'http://www.foodandwine.com' . $data[1];

  // Create a stream context to add a timeout.
  $ctx = stream_context_create(array(
    'http' => array(
      'timeout' => 1,
    ),
  ));

  // Get the file contents.
  if ($file_content = file_get_contents($file, FALSE, $ctx)) {
    // Create an item in the content array for the coupon.
    $variables['content']['coupon'] = array(
      '#markup' => $file_content,
    );
  }

  // Update the external_link field to include a full link.
  if ($items = field_get_items('node', $node, 'field_external_link')) {
    if ($item = field_view_value('node', $node, 'field_external_link', $items[0])) {
      $variables['content']['field_external_link'] = $item;
    }
  }

  // Add a theme hook suggestion to handle these coupons.
  $variables['theme_hook_suggestions'][] = 'node__tout__' . $variables['view_mode'] . '__coupon';
}

/**@}*/
