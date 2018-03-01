<?php

/**
 * @file
 * Override or insert variables into the node template.
 */

/**
 * Implements hook_preprocess_page().
 */
function fwresponsive_preprocess_page(&$vars) {
  global $conf;
  // POC test.
  if ($vars['node']->type == 'devtest') {
    $vars['theme_hook_suggestions'][] = 'page__' . $vars['node']->type;
  }

  // Use the basic page as the flexible template. Remove common header, footer and right rail sections.
  if ($vars['node']->type == 'page') {
    $vars['page']['disable_all'] = FALSE;
    if (isset($vars['node']->field_layout[LANGUAGE_NONE][0]['value']) && $vars['node']->field_layout[LANGUAGE_NONE][0]['value'] == 'full_width') {
      $vars['page']['disable_all'] = TRUE;
    }
  }

  // Assigning the meta tag elements to new redesign content region.
  $vars['page']['fwrd_content']['metatags'] = $vars['page']['content']['metatags'];

  if (isset($vars['node'])) {
    if (($vars['node']->type == 'recipe') && (arg(1, request_path()) != '')) {
      $vars['theme_hook_suggestions'][] = 'page__' . $vars['node']->type;
      drupal_set_title('');
    }
    if ($vars['node']->type == 'home_page_responsive') {
      $vars['theme_hook_suggestions'][] = 'page__' . $vars['node']->type;
      drupal_set_title('');
    }
    if ($vars['node']->type == 'channel_landing_page_responsive') {
      $vars['theme_hook_suggestions'][] = 'page__' . $vars['node']->type;
      drupal_set_title('');
    }
    if ($vars['node']->type == 'blog') {
      $vars['theme_hook_suggestions'][] = 'page__' . $vars['node']->type;
      drupal_set_title('');
    }
    if ($vars['node']->type == 'gallery') {
      $vars['theme_hook_suggestions'][] = 'page__' . $vars['node']->type;
      drupal_set_title('');
    }
    if ($vars['node']->type == 'video') {
      $vars['theme_hook_suggestions'][] = 'page__' . $vars['node']->type;
      drupal_set_title('');
    }
    if ($vars['node']->type == 'video_landing_page') {
      $vars['theme_hook_suggestions'][] = 'page__' . $vars['node']->type;
      drupal_set_title('');
    }
    if ($vars['node']->type == 'article') {
      $vars['theme_hook_suggestions'][] = 'page__' . $vars['node']->type;
      drupal_set_title('');
    }
    if ($vars['node']->type == 'person') {
      $vars['theme_hook_suggestions'][] = 'page__' . $vars['node']->type;
      drupal_set_title('');
    }
    if ($vars['node']->type == 'category') {
      $vars['theme_hook_suggestions'][] = 'page__' . $vars['node']->type;
      drupal_set_title('');
    }
  }

  if ((count(arg()) == 3 && $vars['node']->type == 'recipe')) {
    $title = $vars['node']->title;
    $meta_title = array(
      '#tag' => 'meta',
      '#attributes' => array(
        'property' => 'og:title',
        'content' => $title,
      ),
    );
    drupal_add_html_head($meta_title, 'title');
  }

  // Creating taxonomy term page for fw_category vocabulary.
  if (arg(0) == 'taxonomy' && arg(1) == 'term' && is_numeric(arg(2))) {
    $term_obj = taxonomy_term_load(arg(2));
    if ((!empty($term_obj)) && (!empty($term_obj->vocabulary_machine_name)) && ($term_obj->vocabulary_machine_name == 'fw_category')) {
      $vars['theme_hook_suggestions'][] = 'page__taxonomy__' . $term_obj->vocabulary_machine_name;
    }
  }

  // Selecting the tpl file for print page.
  if (arg(2) == 'print') {
    $vars['theme_hook_suggestions'] = array();
    $vars['theme_hook_suggestions'][0] = 'page__print';
  }

  if ($vars['node']->type == 'recipe') {
    $spotim_script =
      '!function(t,e,n){function a(t)
      {var a=e.createElement("script");a.type="text/javascript",a.async=!1,a.src=("https:"===e.location.protocol?"https":"http")+":"+n,(t||e.body||e.head).appendChild(a)}
      function o()
      {var t=e.getElementsByTagName("script"),n=t[t.length-1];return n.parentNode}
      var p=o();t.spotId="'.  $vars['recipe_info']['spot_id'] . '",t.parentElement=p,a(p)}(window.SPOTIM={},document,"//www.spot.im/launcher/bundle.js");';

    drupal_add_js($spotim_script, array('scope' => 'header', 'type' => 'inline'));
  }
// Making outbrain JS async.
  $outbrain_script = array(
    '#tag' => 'script',
    '#type' =>'html_tag',
    '#value' => '',
    '#attributes' => array(
    'type' => 'text/javascript',
    'src' => 'http://widgets.outbrain.com/outbrain.js',
    'defer' => 'defer',
    'async' => 'async',
    ),
  );
  $vars['outbrain_script'] = $outbrain_script;
  $vars['page']['fwrd_footer']['outbrain_script']['#markup'] = drupal_render($outbrain_script);
 
// Nav Header switch.
  $vars['fw_header'] = '';
  $vars['fw_footer'] = '';
  $vars['mm_header_set'] = variable_get('mm_toggle_nav_header', FALSE);
  $vars['mm_footer_set'] = variable_get('mm_toggle_footer', FALSE);
  if (variable_get('mm_toggle_nav_header', FALSE) == TRUE && isset($vars['fw_mm_header'])) {
    $vars['fw_header'] = $vars['fw_mm_header'];
  }
  else {
    $vars['fw_header'] = '';
  }
  if (variable_get('mm_toggle_footer', FALSE) == TRUE && isset($vars['fw_mm_footer'])) {
    $vars['fw_footer'] = $vars['fw_mm_footer'];
  }
  else {
    $vars['fw_footer'] = '';
  }
}

/**
 * Implements hook_preprocess_node().
 */
function fwresponsive_preprocess_node(&$vars) {
  $vars['content']['mm_footer_set'] = variable_get('mm_toggle_footer', FALSE);
  if ($vars['node']->type == 'gallery' && (!empty($vars['node']->field_gallery_template) && $vars['node']->field_gallery_template[LANGUAGE_NONE][0]['value'] == 'Vertical')) {
    $vars['theme_hook_suggestions'][] = 'node__' . $vars['node']->type . '_vertical';

    drupal_set_title('');
  }

  if ($vars['node']->type == 'page') {
      $vars['disable_all'] = FALSE;
    if (isset($vars['node']->field_layout[LANGUAGE_NONE][0]['value']) && $vars['node']->field_layout[LANGUAGE_NONE][0]['value'] == 'full_width') {
      $vars['disable_all'] = TRUE;
    }
  }
}

/**
 * Implements hook_preprocess_html().
 */
function fwresponsive_preprocess_html(&$vars) {
  global $page_title, $base_url, $slideshow_smrt_info;

  $page_mode = '';

  $node = menu_get_object();
  if ($node->type == 'page') {
    if (isset($node->field_layout[LANGUAGE_NONE][0]['value']) && $node->field_layout[LANGUAGE_NONE][0]['value'] == 'full_width') {
      $vars['classes_array'][] = 'page-mode-full-width';
      $page_mode = 'disable_all';
    }
  }

  if ($node->type == 'gallery') {
    if (isset($node->field_gallery_template[LANGUAGE_NONE][0]['value'])) {
      if ($node->field_gallery_template[LANGUAGE_NONE][0]['value'] == 'Vertical') {
        $vars['classes_array'][] = 'vertical-gallery';
      }
    }
  }

  // Do not load the js files if the page is rendering on full width mode.
  if ($page_mode != 'disable_all') {

    drupal_add_css(drupal_get_path('theme', 'fwresponsive') . '/rdtemplate/assets/css/main.min.css', array(
      'group' => CSS_DEFAULT, 
      'every_page' => TRUE,
    )
    );
    
    drupal_add_js(drupal_get_path('theme', 'fwresponsive') . '/rdtemplate/assets/js/lib/modernizr.min.js', array(
      'scope' => 'header',
      'group' => JS_THEME,
      'every_page' => TRUE,
      'cache' => TRUE,
    )
    );

    drupal_add_js(drupal_get_path('theme', 'fwresponsive') . '/rdtemplate/assets/js/built/vendor.bundle.js', array(
      'scope' => 'footer',
      'group' => JS_THEME,
      'weight' => 19,
      'every_page' => TRUE,
      'preprocess' => FALSE,
      'cache' => TRUE,
      'defer' => FALSE,
    )
    );
    // Include geenrated JS file.
    drupal_add_js(drupal_get_path('theme', 'fwresponsive') . '/rdtemplate/assets/js/built/main.bundle.js', array(
      'scope' => 'footer',
      'group' => JS_THEME,
      'weight' => 21,
      'every_page' => TRUE,
      'preprocess' => FALSE,
      'cache' => TRUE,
      'defer' => FALSE,
    )
    );

    // Include geenrated JS file.
    drupal_add_js(drupal_get_path('theme', 'fwresponsive') . '/js/ads_invoke.js', array(
      'scope' => 'footer',
      'group' => JS_THEME,
      'weight' => 22,
      'every_page' => TRUE,
      'preprocess' => FALSE,
      'cache' => TRUE,
      'defer' => FALSE,
    )
    );

    drupal_add_js(drupal_get_path('theme', 'fwresponsive') . '/js/fwrd_custom.js', array(
      'scope' => 'footer',
      'group' => JS_THEME,
      'every_page' => TRUE,
      'preprocess' => FALSE,
      'cache' => TRUE,
      'defer' => TRUE,
    )
    );

    drupal_add_js(drupal_get_path('theme', 'fwresponsive') . '/js/vertical_gallery_sticky_right_rail.js', array(
      'scope' => 'footer',
      'group' => JS_THEME,
      'weight' => 24,
      'every_page' => TRUE,
      'preprocess' => FALSE,
      'cache' => TRUE,
      'defer' => TRUE,
    )
    );
  }

  libraries_load('jquery-throttle-debounce');

  // Adjusting the page title of recipe with respective contributor names.
  $node = menu_get_object();
  if ($node->type == 'recipe') {
    drupal_add_js('http://chicoryapp.com/widget_v2', array(
      'type' => 'external',
      'scope' => 'footer',
      'group' => JS_THEME,
      'weight' => 30,
      'preprocess' => TRUE,
      'cache' => TRUE,
      'defer' => FALSE,
    )
    );

    $head_title_array = explode('@', $vars['head_title']);
    // Adding a word 'Recipe' to the end of recipe title.
    $reicpe_title = trim($head_title_array[0]);
    $title_array = explode(" ", $reicpe_title);
    $title_last_word = $title_array[count($title_array) - 1];
    if (strnatcasecmp($title_last_word, 'recipe') != 0) {
      $reicpe_title .= ' Recipe ';
    }
    if ($head_title_array[2] == '' && $head_title_array[1] == '') {
      $vars['head_title'] = $reicpe_title . $head_title_array[3];
    }
    elseif (($head_title_array[2] != '' && $head_title_array[1] != '') || $head_title_array[2] == '') {
      $vars['head_title'] = $reicpe_title . ' - ' . $head_title_array[1] . $head_title_array[3];
    }
    else {
      $vars['head_title'] = $reicpe_title . ' - ' . $head_title_array[2] . $head_title_array[3];
    }
  }

  if ($node->type == 'gallery') {
    if (!$vars['head_title']) {
      $vars['head_title'] = $page_title . ' | ' . variable_get('site_name', t('Food & Wine'));
    }
    elseif (!empty($vars['head_title']) && $vars['head_title'] == 'Food &amp; Wine') {
      $vars['head_title'] = $page_title . ' | ' . variable_get('site_name', t('Food & Wine'));
    }
    if (arg(2)) {
      $current_page_num = arg(2);
      $vars['head_title'] = $current_page_num . ' - ' . $vars['head_title'];
    }
  }
  // Updating meta title for contributor paginated pages.
  if ($node->type == 'person') {
    if (!empty(arg(2)) && substr(arg(2), 0, 4) == 'page') {
      if (!empty(substr(arg(2), 4)) && is_numeric(substr(arg(2), 4))) {
        $current_page_num = substr(arg(2), 4);
        $vars['head_title'] = $node->title . ' - Page ' . $current_page_num . ' | ' . variable_get('site_name', t('Food & Wine'));
      }
    }
  }

  $vars['smrt_flag'] = 0;
  $vars['smrt_native_adv_flag'] = 0;
  if (arg(0) == 'node' && is_numeric(arg(1))) {
    $nid = arg(1);
    $node = node_load($nid);

    // For Simple Reach Test Setting Page Variables.
    $vars['smrt_published_at'] = date('Y-m-d H:i:s', $node->published_at);
    $authors = array();
    $vars['smrt_author'] = '';
    $vars['smrt_tags'] = '';
    $tags = array();

    if ($node->type == 'article' || $node->type == 'blog') {
      if (isset($node->field_author[LANGUAGE_NONE])) {
        $authors = $node->field_author[LANGUAGE_NONE];
      }
      if (isset($node->field_topic[LANGUAGE_NONE])) {
        $tags = $node->field_topic[LANGUAGE_NONE];
      }
    }
    if ($node->type == 'recipe') {
      if (isset($node->field_chefs_author[LANGUAGE_NONE])) {
        $authors = $node->field_chefs_author[LANGUAGE_NONE];
      }
      else {
        $authors = $node->field_source_author[LANGUAGE_NONE];
      }
      if (isset($node->field_complex_theme[LANGUAGE_NONE])) {
        $tags = $node->field_complex_theme[LANGUAGE_NONE];
      }
    }
    if (!empty($authors)) {
      foreach ($authors as $author) {
        if ($vars['smrt_author'] == '') {
          $vars['smrt_author'] = '"' . $author['entity']->title . '"';
        }
        else {
          $vars['smrt_author'] .= ', "' . $author['entity']->title . '"';
        }
      }
    }
    if (!empty($tags)) {
      foreach ($tags as $tag) {
        if ($vars['smrt_tags'] == '') {
          $vars['smrt_tags'] = '"' . $tag['taxonomy_term']->name . '"';
        }
        else {
          $vars['smrt_tags'] .= ', "' . $tag['taxonomy_term']->name . '"';
        }
      }
    }

    if (($node->type == 'channel_landing_page') || ($node->type == 'channel_landing_page_responsive')) {
      $vars['smrt_flag'] = 0;
    }
    else {
      $vars['smrt_flag'] = 1;
    }

    if (request_uri() == '/video') {
      $vars['smrt_flag'] = 0;
    }

    $vars['smrt_picd'] = '545bd595d70ba01dd900002d';
    $vars['smrt_url'] = $base_url . request_uri();
    if ($node->type == 'page') {
      $vars['smrt_channel'] = 'general';
    }
    else {
      $base_type = explode('/', request_path());
      $vars['smrt_channel'] = $base_type[0];
    }
    if ($vars['smrt_tags'] == '') {
      $vars['smrt_tags'] = '"' . $vars['smrt_channel'] . '"';
    }
    $site_domain = explode('//', $base_url);
    $vars['smrt_domain'] = $site_domain[1];

    $vars['smrt_gallery_flag'] = 0;
    // Creating new variable for simple reach native advertisement flag.
    $vars['smrt_native_adv_flag'] = 0;
    // Checking in article content type section.
    if ($node->type == 'article') {
      if (isset($node->field_native_advertising[LANGUAGE_NONE])) {
        $vars['smrt_native_adv_flag'] = $node->field_native_advertising[LANGUAGE_NONE][0]['value'];
      }
    }
    // Checking in gallery content type section.
    if ($node->type == 'gallery') {
      if (isset($node->field_native_advertising[LANGUAGE_NONE])) {
        $vars['smrt_native_adv_flag'] = $node->field_native_advertising[LANGUAGE_NONE][0]['value'];
      }
      $vars['smrt_title'] = $node->title;
      drupal_add_js(array('ti_amg_fw_gallery' => array('publish_date' => $vars['smrt_published_at'])), array('type' => 'setting'));
    }
    else {
      $vars['smrt_title'] = $node->title;
    }
  }
  // Updating class for taxonomy term page.
  if (arg(0) == 'taxonomy' && arg(1) == 'term' && is_numeric(arg(2))) {
    $term_obj = taxonomy_term_load(arg(2));
    if ((!empty($term_obj)) && (!empty($term_obj->vocabulary_machine_name)) && ($term_obj->vocabulary_machine_name == 'fw_category')) {
      $vars['classes_array'][] = 'page-taxonomy-term-' . $term_obj->vocabulary_machine_name;
    }
  }

  // Spot Id for spot im api
  $vars['spot_id'] = variable_get('spot_id', 'sp_b3BDxGSu');
}

/**
 * Implements hook_html_head_alter().
 */
function fwresponsive_html_head_alter(&$head_elements) {
  global $og_img_path, $slideshow_flag;
  // Assigning the meta description value to og:description tag.
  if (!isset($slideshow_flag)) {
    if (isset($head_elements['metatag_description_0'])) {
      $head_elements['metatag_og:description_0']['#value'] = $head_elements['metatag_description_0']['#value'];
    }
    elseif (isset($head_elements['meta_description'])) {
      $head_elements['metatag_og:description_0']['#value'] = $head_elements['meta_description']['#attributes']['content'];
    }
    // Assigning node image path to og:image tag.
    if (isset($head_elements['metatag_og:image_0']) && !empty($og_img_path)) {
      $head_elements['metatag_og:image_0']['#value'] = $og_img_path;
      $head_elements['metatag_twitter:image_0']['#value'] = $og_img_path;
    }

    foreach ($head_elements as $key => $element) {
      if (isset($element['#attributes']['property']) &&
          $element['#attributes']['property'] == 'og:description') {
        $head_elements[$key]['#attributes']['content'] = $head_elements['metatag_og:description_0']['#value'];
        break;
      }
    }
  }

  if (isset($head_elements['metatag_og:description_0']) && $slideshow_flag == 1) {
    unset($head_elements['metatag_og:description_0']);
  }

  if (isset($head_elements['metatag_og:title_0']) && $slideshow_flag == 1) {
    unset($head_elements['metatag_og:title_0']);
  }

  if (isset($head_elements['metatag_og:image_0']) && $slideshow_flag == 1) {
    unset($head_elements['metatag_og:image_0']);
  }

  // Adding query paramters to the canonical and OG URL's.
  $query_parameters = drupal_get_query_parameters();
  if (isset($query_parameters['list'])) {
    $query_params_string = ti_amg_fwrd_custom_get_query_params($query_parameters);
    if ($query_params_string != '') {
      if (!empty($head_elements['metatag_canonical'])) {
        $head_elements['metatag_canonical']['#value'] .= $query_params_string;
      }
      if (!empty($head_elements['metatag_og:url_0'])) {
        $head_elements['metatag_og:url_0']['#value'] .= $query_params_string;
      }
    }
  }
}

/**
 * Override pager link.
 */
function fwresponsive_pager_link($variables) {

  $text = $variables['text'];
  $page_new = $variables['page_new'];
  $element = $variables['element'];
  $parameters = $variables['parameters'];
  $attributes = $variables['attributes'];
  $page = isset($_GET['page']) ? $_GET['page'] : '';
  if ($new_page = implode(',', pager_load_array($page_new[$element], $element, explode(',', $page)))) {
    $parameters['page'] = $new_page;
  }
  $query = array();
  if (count($parameters)) {
    $query = drupal_get_query_parameters($parameters, array());
  }
  // Set each pager link title.
  if (!isset($attributes['title'])) {
    static $titles = NULL;
    if (!isset($titles)) {
      $titles = array(
        t('« first') => t('Go to first page'),
        t('‹ previous') => t('Go to previous page'),
        t('next ›') => t('Go to next page'),
        t('last »') => t('Go to last page'),
      );
    }
    if (isset($titles[$text])) {
      $attributes['title'] = $titles[$text];
    }
    elseif (is_numeric($text)) {
      $attributes['title'] = t('Go to page @number', array('@number' => $text));
    }
  }

  $attributes['href'] = url($_GET['q'], array('query' => $query));

  $output = '<a' . drupal_attributes($attributes) . '>' . check_plain($text) . '</a>';

  if (arg(0) == 'sitemap') {
    if (count(arg()) == 2) {
      $output = preg_replace_callback('/\?page=[0-9]+/', function ($matches) {
        return '/page' . ((int) substr($matches[0], 6));
      }, $output
      );
    }
    else {
      $output = preg_replace_callback('/\/page[0-9]+/', function ($matches) {
        return '';
      }, $output
      );

      $output = preg_replace_callback('/\?page=[0-9]+/', function ($matches) {
        return '/page' . ((int) substr($matches[0], 6));
      }, $output
      );
    }

    return $output;
  }
  elseif (count(arg()) == 3 && arg(0) == 'node') {
    $output = preg_replace_callback('/\?page=[0-9]+/', function ($matches) {
      return '/page' . ((int) substr($matches[0], 6));
    }, $output
    );

    $pattern = '/' . arg(2);

    return str_replace(
        array(
          '&amp;',
          $pattern,
        ), array(
          '&',
          '',
        ), $output
    );
  }
  else {
    return $output;
  }
}
