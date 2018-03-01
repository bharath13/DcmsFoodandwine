<?php
/**
 * @file
 * ti_amg_fw_base_components.features.filter.inc
 */

/**
 * Implements hook_filter_default_formats().
 */
function ti_amg_fw_base_components_filter_default_formats() {
  $formats = array();

  // Exported format: Article HTML.
  $formats['article_html'] = array(
    'format' => 'article_html',
    'name' => 'Article HTML',
    'cache' => 0,
    'status' => 1,
    'weight' => 0,
    'filters' => array(
      'ti_oembed_convert_drupal_entity' => array(
        'weight' => -47,
        'status' => 1,
        'settings' => array(),
      ),
      'entity_embed' => array(
        'weight' => -46,
        'status' => 1,
        'settings' => array(),
      ),
      'interlinking_word_filter' => array(
        'weight' => -33,
        'status' => 1,
        'settings' => array(),
      ),
      'filter_htmlcorrector' => array(
        'weight' => -20,
        'status' => 1,
        'settings' => array(),
      ),
      'filter_html' => array(
        'weight' => -10,
        'status' => 1,
        'settings' => array(
          'allowed_html' => '<script> <drupal-entity data-*> <figure> <svg> <picture> <use> <title> <a> <p> <span> <div> <h1> <h2> <h3> <h4> <h5> <h6> <img> <map> <area> <hr> <br> <br /> <ul> <ol> <li> <dl> <dt> <dd> <table> <tr> <td> <em> <b> <u> <i> <strong> <del> <ins> <sub> <sup> <quote> <blockquote> <pre> <address> <code> <cite> <embed> <video> <object> <param> <strike> <caption> <tbody> <iframe> <form> <input> <button> <select> <option> <label> <textarea> <oembed data-*>',
          'filter_html_help' => 1,
          'filter_html_nofollow' => 0,
        ),
      ),
      'entity_embed_extract_entity' => array(
        'weight' => 0,
        'status' => 1,
        'settings' => array(),
      ),
    ),
  );

  // Exported format: Full HTML.
  $formats['full_html'] = array(
    'format' => 'full_html',
    'name' => 'Full HTML',
    'cache' => 0,
    'status' => 1,
    'weight' => 0,
    'filters' => array(
      'ti_oembed_convert_drupal_entity' => array(
        'weight' => -50,
        'status' => 1,
        'settings' => array(),
      ),
      'convert_img_to_drupal_entity' => array(
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
        'weight' => -47,
        'status' => 1,
        'settings' => array(),
      ),
      'filter_htmlcorrector' => array(
        'weight' => -46,
        'status' => 1,
        'settings' => array(),
      ),
      'timeinc_filter_brightcove' => array(
        'weight' => -31,
        'status' => 1,
        'settings' => array(),
      ),
      'entity_embed_extract_entity' => array(
        'weight' => -27,
        'status' => 1,
        'settings' => array(),
      ),
    ),
  );

  // Exported format: FW Headline HTML.
  $formats['fw_headline_html'] = array(
    'format' => 'fw_headline_html',
    'name' => 'FW Headline HTML',
    'cache' => 1,
    'status' => 1,
    'weight' => 0,
    'filters' => array(
      'filter_html' => array(
        'weight' => -10,
        'status' => 1,
        'settings' => array(
          'allowed_html' => '<em> <strong> <u>',
          'filter_html_help' => 1,
          'filter_html_nofollow' => 0,
        ),
      ),
      'filter_htmlcorrector' => array(
        'weight' => 10,
        'status' => 1,
        'settings' => array(),
      ),
    ),
  );

  // Exported format: Plain text.
  $formats['plain_text'] = array(
    'format' => 'plain_text',
    'name' => 'Plain text',
    'cache' => 1,
    'status' => 1,
    'weight' => 10,
    'filters' => array(
      'filter_html_escape' => array(
        'weight' => 0,
        'status' => 1,
        'settings' => array(),
      ),
      'filter_url' => array(
        'weight' => 1,
        'status' => 1,
        'settings' => array(
          'filter_url_length' => 72,
        ),
      ),
      'filter_autop' => array(
        'weight' => 2,
        'status' => 1,
        'settings' => array(),
      ),
    ),
  );

  // Exported format: WYSIWYG.
  $formats['wysiwyg'] = array(
    'format' => 'wysiwyg',
    'name' => 'WYSIWYG',
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
        'weight' => -47,
        'status' => 1,
        'settings' => array(),
      ),
      'filter_html' => array(
        'weight' => -46,
        'status' => 1,
        'settings' => array(
          'allowed_html' => '<a> <p> <span> <div> <h1> <h2> <h3> <h4> <h5> <h6> <img> <map> <area> <hr> <br> <br /> <ul> <ol> <li> <dl> <dt> <dd> <table> <tr> <td> <em> <b> <u> <i> <strong> <del> <ins> <sub> <sup> <quote> <blockquote> <pre> <address> <code> <cite> <embed> <object> <param> <strike> <caption> <tbody> <iframe> <drupal-entity data-*> <oembed data-*> <video>',
          'filter_html_help' => 1,
          'filter_html_nofollow' => 0,
        ),
      ),
      'filter_htmlcorrector' => array(
        'weight' => -23,
        'status' => 1,
        'settings' => array(),
      ),
    ),
  );

  return $formats;
}
