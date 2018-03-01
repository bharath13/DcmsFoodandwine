<?php

global $modules_dir;

$modules_dir = __DIR__ . '/../../modules/';
$templates_dir = __DIR__ . '/../templates/';
$asset_path = '../../assets/';

/**
 * Given a module name, returns the rendered module.
 * 
 * @param  string $module_name The name of the module to render
 * @param  array $vars Array of data to be made available to the module
 * 
 * @return string The rendered module
 */
function theme($module_name, $vars = array()) {
  global $modules_dir;
  
  // extract the data vars so they are availble for the included module below
  extract($vars);
  
  // start buffer to capture module as string to be returned  
  ob_start();
  include($modules_dir . $module_name . '.tpl.php');
  $module_markup = ob_get_contents();
  ob_end_clean();

  return $module_markup;
}

/**
 * Renders a string containing default classes and any additional classes
 * provided in a call to render_module.
 *
 * @param string[] $default The list of default classes to output
 * @param string[] $classes An array of additional classes to output
 */
function render_class_list($default, $classes = array()) {
  $classes_merged = array_merge($default, $classes);

  print implode(' ', $classes_merged);
}


/**
 * Outputs a relative asset path
 *
 * @param string $asset The path to the asset relative to the asset dir
 */
function asset($asset) {
  global $asset_path;

  print '../../assets/' . $asset;
}