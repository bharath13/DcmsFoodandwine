<?php

/**
 * Add Omniture JavaScript.
 */
function _fwresponsive_add_omniture_js() {

  drupal_add_js(
    drupal_get_path('module', 'ti_amg_fw_omniture') . '/' . 'omniture_header.js',
    array(
      'type' => 'file',
      'scope' => 'footer',
      'group' => JS_LIBRARY - 10,
      'weight' => -47,
    )
  );

  drupal_add_js(
    drupal_get_path('module', 'ti_amg_fw_omniture') . '/' . 'foodandwine_scode.js',
    array(
      'type' => 'file',
      'scope' => 'footer',
      'group' => JS_LIBRARY - 10,
      'weight' => -46,
    )
  );

  // Only initialize separately if Tinypass is undefined.
  drupal_add_js(
    drupal_get_path('module', 'ti_amg_fw_omniture') . '/' . 'omniture_footer.js',
     array(
      'type' => 'file',
      'scope' => 'footer',
      'group' => JS_LIBRARY - 10,
      'weight' => -45,
    )
  );
}
