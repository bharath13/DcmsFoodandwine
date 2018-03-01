<?php

/* 
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/**
 * Implements hook_token_info().
 */
function ti_amg_fw_common_ads_settings_token_info() {
  // Token for node theme.
  $info['tokens']['node']['theme'] = array(
    'name' => t('Theme of the page'),
    'description' => t('Theme of the page.'),
  );
  // Token for node tags.
  $info['tokens']['node']['tags'] = array(
    'name' => t('Tags of the page'),
    'description' => t('Tags of the page.'),
  );

  return $info;
}

/**
 * Implements hook_tokens().
 */
function ti_amg_fw_common_ads_settings_tokens($type, $tokens, array $data = array(), array $options = array()) {
  $replacements = array();
  if ($type == 'node' && !empty($data['node'])) {
    $node = $data['node'];
    foreach ($tokens as $name => $original) {
      switch ($name) {
        case 'theme':
          $theme = array();
          if (!empty($node->field_column[LANGUAGE_NONE][0]['tid'])) {
            foreach ($node->field_column[LANGUAGE_NONE] as $cat) {
              $theme[] = $cat['tid'];
            }
          }
          if (!empty($node->field_tags[LANGUAGE_NONE][0]['tid'])) {
            foreach ($node->field_tags[LANGUAGE_NONE] as $cat) {
              $theme[] = $cat['tid'];
            }
          }
          if (!empty($node->field_topic[LANGUAGE_NONE][0]['tid'])) {
            foreach ($node->field_topic[LANGUAGE_NONE] as $cat) {
              $theme[] = $cat['tid'];
            }
          }
          if (!empty($node->field_issue[LANGUAGE_NONE][0]['tid'])) {
            foreach ($node->field_issue[LANGUAGE_NONE] as $cat) {
              $theme[] = $cat['tid'];
            }
          }
          // Adding Taxonomy term label values.
          if (!empty($theme)) {
            $themes = taxonomy_term_load_multiple($theme);
            $theme = array();
            foreach ($themes as $term) {
              @$term_val = $term->field_taxo_category_label[LANGUAGE_NONE][0]['value'] . $term->field_taxo_tags_label[LANGUAGE_NONE][0]['value'] . $term->field_taxo_issue_label[LANGUAGE_NONE][0]['value'] . $term->field_taxo_topic_label[LANGUAGE_NONE][0]['value'];
              if ($term_val != '') {
                $theme[] = $term_val;
              }
            }
          }
          // Adding meta keywords
          if (!empty($node->metatags[LANGUAGE_NONE]) && !empty($node->metatags[LANGUAGE_NONE]['keywords'])) {
            $meta_keywords = $node->metatags[LANGUAGE_NONE]['keywords']['value'];
            if (isset($meta_keywords) && !empty($meta_keywords)) {
              $keywords = explode(',', $meta_keywords);
              // trim and add words
              foreach ($keywords as $word) {
                $tword = trim($word);
                if (!empty($tword)) {
                  $theme[] = $tword;
                }
              }
            }
          }  

          $replacements[$original] = implode('","', $theme);
          break;
        case 'tags':
          $tags = '';
          if (isset($node->field_fw_tags[LANGUAGE_NONE]) && !empty($node->field_fw_tags[LANGUAGE_NONE])) {
            $tag_field = $node->field_fw_tags[LANGUAGE_NONE];
            foreach ($tag_field as $key => $term_ids) {
              $term_name = ti_amg_fwrd_category_get_term_name($term_ids['tid']);
              $term_name = str_replace(' ', '-', strtolower($term_name));
              $tags .= (count($tag_field) - 1 > $key) ? $term_name . '","' : $term_name;
            }
          }
          $replacements[$original] = $tags;
          break;
      }
    }
  }

  return $replacements;
}

/**
 * Implements hook_tokens_alter().
 *
 * Provide tokens replacements for TGX ads placement.
 */
function ti_amg_fw_common_ads_settings_tokens_alter(array &$replacements, array $context) {
  if ('tgx' == $context['type']) {
    $node = $context['data']['node'];
    foreach ($context['tokens'] as $token_name => $original_token) {
      switch ($token_name) {
        case 'ad-zone':
          // Altering the zone value based on content type.
          $hooks = array();
          $hooks[] = 'tgx_config_zone_' . $node->type;

          $settings = array();
          drupal_alter($hooks, $settings, $node);

          if (!empty($settings['zone_value'])) {
            $replacements[$original_token] = $settings['zone_value'];
          }
          break;

        case 'ad-channel':
          // Altering the channel value based on content type.
          $hooks = array();
          $hooks[] = 'tgx_config_channel_' . $node->type;

          $settings = array();
          drupal_alter($hooks, $settings, $node);
          
          if (!empty($settings['channel_value'])) {
            $replacements[$original_token] = $settings['channel_value'];
          }
          else {
            $replacements[$original_token] = '';
          }
          break;

        case 'ad-subchannel':
          // Altering based on content type.
          if (!empty($node)) {
            $hooks = array();
            $hooks[] = 'tgx_config_subchannel_' . $node->type;
            $settings = array();
            drupal_alter($hooks, $settings, $node);
          }

          if (!empty($settings['sub_channel'])) {
            $replacements[$original_token] = $settings['sub_channel'];
          }
          else {
            $replacements[$original_token] = ti_amg_fw_common_ads_settings_get_subchannel($node);
          }
          break;
      }
    }
  }
}

/**
 * Callback function to construct subchannel for blogs and galleries.
 */
function ti_amg_fw_common_ads_settings_get_subchannel($node) {
  // Getting the values from page url.
  $path = explode('/', request_path());
  $sub_channel = implode('","', $path);
  return $sub_channel;
}
