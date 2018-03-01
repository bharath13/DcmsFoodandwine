<?php
/**
 * @file
 * ti_amg_fw_text_formats.features.filter.inc
 */

/**
 * Implements hook_filter_default_formats().
 */
function ti_amg_fw_text_formats_filter_default_formats() {
  $formats = array();

  // Exported format: Filtered HTML.
  $formats['filtered_html'] = array(
    'format' => 'filtered_html',
    'name' => 'Filtered HTML',
    'cache' => 0,
    'status' => 1,
    'weight' => 0,
    'filters' => array(
      'ti_oembed_convert_drupal_entity' => array(
        'weight' => -49,
        'status' => 1,
        'settings' => array(),
      ),
      'entity_embed' => array(
        'weight' => -48,
        'status' => 1,
        'settings' => array(),
      ),
      'interlinking_word_filter' => array(
        'weight' => -44,
        'status' => 1,
        'settings' => array(),
      ),
      'filter_url' => array(
        'weight' => -33,
        'status' => 1,
        'settings' => array(
          'filter_url_length' => 72,
        ),
      ),
      'filter_html' => array(
        'weight' => -25,
        'status' => 1,
        'settings' => array(
          'allowed_html' => '<blockquote> <p> <br> <em> <strong> <u> <s> <sub> <sup> <a> <ol> <li> <ul> <cite> <code> <dl> <dt> <dd> <div> <footer> <h1> <h2> <h3> <h4> <h5> <h6> <pre> <address> <hr> <table> <tbody> <tr> <td> <th> <thead> <img> <object> <video> <embed> <param> <iframe> <drupal-entity data-*>',
          'filter_html_help' => 1,
          'filter_html_nofollow' => 0,
        ),
      ),
      'filter_autop' => array(
        'weight' => -24,
        'status' => 1,
        'settings' => array(),
      ),
    ),
  );

  // Exported format: Mini Text format.
  $formats['mini_text_format'] = array(
    'format' => 'mini_text_format',
    'name' => 'Mini Text format',
    'cache' => 0,
    'status' => 1,
    'weight' => 0,
    'filters' => array(
      'interlinking_word_filter' => array(
        'weight' => -50,
        'status' => 1,
        'settings' => array(),
      ),
      'filter_html_escape' => array(
        'weight' => -49,
        'status' => 1,
        'settings' => array(),
      ),
      'filter_html' => array(
        'weight' => -48,
        'status' => 1,
        'settings' => array(
          'allowed_html' => '<a>',
          'filter_html_help' => 1,
          'filter_html_nofollow' => 0,
        ),
      ),
      'filter_htmlcorrector' => array(
        'weight' => -29,
        'status' => 1,
        'settings' => array(),
      ),
    ),
  );

  return $formats;
}
