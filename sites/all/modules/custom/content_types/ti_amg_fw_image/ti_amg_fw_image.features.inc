<?php
/**
 * @file
 * ti_amg_fw_image.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function ti_amg_fw_image_ctools_plugin_api($module = NULL, $api = NULL) {
  if ($module == "field_group" && $api == "field_group") {
    return array("version" => "1");
  }
  if ($module == "strongarm" && $api == "strongarm") {
    return array("version" => "1");
  }
}

/**
 * Implements hook_views_api().
 */
function ti_amg_fw_image_views_api($module = NULL, $api = NULL) {
  return array("api" => "3.0");
}

/**
 * Implements hook_image_default_styles().
 */
function ti_amg_fw_image_image_default_styles() {
  $styles = array();

  // Exported image style: 150x150.
  $styles['150x150'] = array(
    'label' => '150x150',
    'effects' => array(
      53 => array(
        'name' => 'image_scale_and_crop',
        'data' => array(
          'width' => 150,
          'height' => 150,
          'style_name' => '150x150',
        ),
        'weight' => -2,
      ),
      52 => array(
        'name' => 'ti_editorial_image_effects_rgbprofile',
        'data' => array(
          'style_name' => '150x150',
        ),
        'weight' => -1,
      ),
    ),
  );

  // Exported image style: 300x300.
  $styles['300x300'] = array(
    'label' => '300x300',
    'effects' => array(
      36 => array(
        'name' => 'image_scale_and_crop',
        'data' => array(
          'width' => 300,
          'height' => 300,
          'style_name' => '300x300',
        ),
        'weight' => -2,
      ),
      35 => array(
        'name' => 'ti_editorial_image_effects_rgbprofile',
        'data' => array(
          'style_name' => '300x300',
        ),
        'weight' => -1,
      ),
    ),
  );

  // Exported image style: 420x420.
  $styles['420x420'] = array(
    'label' => '420x420',
    'effects' => array(
      33 => array(
        'name' => 'image_scale_and_crop',
        'data' => array(
          'width' => 420,
          'height' => 420,
          'style_name' => '420x420',
        ),
        'weight' => -2,
      ),
      32 => array(
        'name' => 'ti_editorial_image_effects_rgbprofile',
        'data' => array(
          'style_name' => '420x420',
        ),
        'weight' => -1,
      ),
    ),
  );

  // Exported image style: 500x500.
  $styles['500x500'] = array(
    'label' => '500x500',
    'effects' => array(
      9 => array(
        'name' => 'image_scale_and_crop',
        'data' => array(
          'width' => 500,
          'height' => 500,
          'style_name' => '500x500',
        ),
        'weight' => -2,
      ),
      7 => array(
        'name' => 'ti_editorial_image_effects_rgbprofile',
        'data' => array(
          'style_name' => '500x500',
        ),
        'weight' => -1,
      ),
    ),
  );

  // Exported image style: 75x75.
  $styles['75x75'] = array(
    'label' => '75x75',
    'effects' => array(
      6 => array(
        'name' => 'image_scale_and_crop',
        'data' => array(
          'width' => 75,
          'height' => 75,
          'style_name' => '75x75',
        ),
        'weight' => -2,
      ),
      3 => array(
        'name' => 'ti_editorial_image_effects_rgbprofile',
        'data' => array(
          'style_name' => '75x75',
        ),
        'weight' => -1,
      ),
    ),
  );

  // Exported image style: 768x768.
  $styles['768x768'] = array(
    'label' => '768x768',
    'effects' => array(
      30 => array(
        'name' => 'image_scale_and_crop',
        'data' => array(
          'width' => 768,
          'height' => 768,
          'style_name' => '768x768',
        ),
        'weight' => -2,
      ),
      29 => array(
        'name' => 'ti_editorial_image_effects_rgbprofile',
        'data' => array(
          'style_name' => '768x768',
        ),
        'weight' => -1,
      ),
    ),
  );

  return $styles;
}
