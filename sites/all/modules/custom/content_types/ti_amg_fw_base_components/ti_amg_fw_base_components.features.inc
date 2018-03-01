<?php
/**
 * @file
 * ti_amg_fw_base_components.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function ti_amg_fw_base_components_ctools_plugin_api($module = NULL, $api = NULL) {
  if ($module == "breakpoints" && $api == "default_breakpoint_group") {
    return array("version" => "1");
  }
  if ($module == "breakpoints" && $api == "default_breakpoints") {
    return array("version" => "1");
  }
  if ($module == "context" && $api == "context") {
    return array("version" => "3");
  }
  if ($module == "elysia_cron" && $api == "default_elysia_cron_rules") {
    return array("version" => "1");
  }
  if ($module == "entity_embed" && $api == "default_entity_embed_configurations") {
    return array("version" => "1");
  }
  if ($module == "field_group" && $api == "field_group") {
    return array("version" => "1");
  }
  if ($module == "picture" && $api == "default_picture_mapping") {
    return array("version" => "2");
  }
  if ($module == "strongarm" && $api == "strongarm") {
    return array("version" => "1");
  }
}

/**
 * Implements hook_image_default_styles().
 */
function ti_amg_fw_base_components_image_default_styles() {
  $styles = array();

  // Exported image style: 270x288.
  $styles['270x288'] = array(
    'label' => '270x288',
    'effects' => array(
      59 => array(
        'name' => 'image_scale_and_crop',
        'data' => array(
          'width' => 270,
          'height' => 288,
          'style_name' => '270x288',
        ),
        'weight' => -1,
      ),
      60 => array(
        'name' => 'ti_editorial_image_crop_generate_on_crop',
        'data' => array(),
        'weight' => 3,
      ),
    ),
  );

  return $styles;
}

/**
 * Implements hook_themekey_features_rule_chain().
 */
function ti_amg_fw_base_components_themekey_features_rule_chain() {
if (!defined('THEMEKEY_PAGECACHE_UNSUPPORTED')) {
    define('THEMEKEY_PAGECACHE_UNSUPPORTED', 0);
    define('THEMEKEY_PAGECACHE_SUPPORTED', 1);
    define('THEMEKEY_PAGECACHE_TIMEBASED', 2);
  }
$rules = array(
  0 => array(
    'rule' => array(
      'property' => 'node:type',
      'operator' => '=',
      'value' => 'home_page_responsive',
      'theme' => 'fwresponsive',
      'enabled' => 1,
      'wildcards' => 'a:0:{}',
      'module' => 'ti_amg_fw_base_components',
    ),
    'string' => '"node:type = home_page_responsive >>> fwresponsive"',
    'childs' => array(),
  ),
  1 => array(
    'rule' => array(
      'property' => 'node:type',
      'operator' => '=',
      'value' => 'recipe',
      'theme' => 'fwresponsive',
      'enabled' => 1,
      'wildcards' => 'a:0:{}',
      'module' => 'ti_amg_fw_base_components',
    ),
    'string' => '"node:type = recipe >>> fwresponsive"',
    'childs' => array(),
  ),
  2 => array(
    'rule' => array(
      'property' => 'node:type',
      'operator' => '=',
      'value' => 'blog',
      'theme' => 'fwresponsive',
      'enabled' => 1,
      'wildcards' => 'a:0:{}',
      'module' => 'ti_amg_fw_base_components',
    ),
    'string' => '"node:type = blog >>> fwresponsive"',
    'childs' => array(),
  ),
  3 => array(
    'rule' => array(
      'property' => 'node:type',
      'operator' => '=',
      'value' => 'channel_landing_page_responsive',
      'theme' => 'fwresponsive',
      'enabled' => 1,
      'wildcards' => 'a:0:{}',
      'module' => 'ti_amg_fw_base_components',
    ),
    'string' => '"node:type = channel_landing_page_responsive >>> fwresponsive"',
    'childs' => array(),
  ),
  4 => array(
    'rule' => array(
      'property' => 'drupal:path',
      'operator' => '=',
      'value' => 'partner',
      'theme' => 'fwresponsive',
      'enabled' => 1,
      'wildcards' => array(),
      'module' => 'ti_amg_fw_base_components',
    ),
    'string' => '"drupal:path = partner >>> fwresponsive"',
    'childs' => array(),
  ),
  5 => array(
    'rule' => array(
      'property' => 'node:type',
      'operator' => '=',
      'value' => 'gallery',
      'theme' => 'fwresponsive',
      'enabled' => 1,
      'wildcards' => 'a:0:{}',
      'module' => 'ti_amg_fw_base_components',
    ),
    'string' => '"node:type = gallery >>> fwresponsive"',
    'childs' => array(),
  ),
  6 => array(
    'rule' => array(
      'property' => 'node:type',
      'operator' => '=',
      'value' => 'video',
      'theme' => 'fwresponsive',
      'enabled' => 1,
      'wildcards' => 'a:0:{}',
      'module' => 'ti_amg_fw_base_components',
    ),
    'string' => '"node:type = video >>> fwresponsive"',
    'childs' => array(),
  ),
  7 => array(
    'rule' => array(
      'property' => 'node:type',
      'operator' => '=',
      'value' => 'video_landing_page',
      'theme' => 'fwresponsive',
      'enabled' => 1,
      'wildcards' => 'a:0:{}',
      'module' => 'ti_amg_fw_base_components',
    ),
    'string' => '"node:type = video_landing_page >>> fwresponsive"',
    'childs' => array(),
  ),
  8 => array(
    'rule' => array(
      'property' => 'node:type',
      'operator' => '=',
      'value' => 'article',
      'theme' => 'fwresponsive',
      'enabled' => 1,
      'wildcards' => 'a:0:{}',
      'module' => 'ti_amg_fw_base_components',
    ),
    'string' => '"node:type = article >>> fwresponsive"',
    'childs' => array(),
  ),
  9 => array(
    'rule' => array(
      'property' => 'node:type',
      'operator' => '=',
      'value' => 'person',
      'theme' => 'fwresponsive',
      'enabled' => 1,
      'wildcards' => 'a:0:{}',
      'module' => 'ti_amg_fw_base_components',
    ),
    'string' => '"node:type = person >>> fwresponsive"',
    'childs' => array(),
  ),
  10 => array(
    'rule' => array(
      'property' => 'node:type',
      'operator' => '=',
      'value' => 'category',
      'theme' => 'fwresponsive',
      'enabled' => 1,
      'wildcards' => 'a:0:{}',
      'module' => 'ti_amg_fw_base_components',
    ),
    'string' => '"node:type = category >>> fwresponsive"',
    'childs' => array(),
  ),
  11 => array(
    'rule' => array(
      'property' => 'node:type',
      'operator' => '=',
      'value' => 'newsletter',
      'theme' => 'fw_newsletter',
      'enabled' => 1,
      'wildcards' => 'a:0:{}',
      'module' => 'ti_amg_fw_base_components',
    ),
    'string' => '"node:type = newsletter >>> fw_newsletter"',
    'childs' => array(),
  ),
  12 => array(
    'rule' => array(
      'property' => 'themekey_compat:module_panels_theme_override_triggers_theme',
      'operator' => '=',
      'value' => 'static',
      'theme' => 'default',
      'enabled' => 1,
      'wildcards' => 'a:0:{}',
      'module' => 'ti_amg_fw_base_components',
    ),
    'string' => '"themekey_compat:module_panels_theme_override_triggers_theme = static >>> triggered"',
    'childs' => array(),
  ),
  13 => array(
    'rule' => array(
      'property' => 'themekey_compat:module_system_triggers_theme',
      'operator' => '=',
      'value' => 'static',
      'theme' => 'default',
      'enabled' => 1,
      'wildcards' => 'a:0:{}',
      'module' => 'ti_amg_fw_base_components',
    ),
    'string' => '"drupal:path:wildcard themekey_compat:module_system_triggers_theme = static >>> default"',
    'childs' => array(),
  ),
);

return $rules;
}
