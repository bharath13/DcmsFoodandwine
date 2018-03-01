<?php

/**
 * @file
 * template.php
 */

/**
 * Implement hook_preprocess_html().
 *
 * @param type $variables
 */
function foodandwine_preprocess_html(&$variables) {
  global $user, $base_url, $slideshow_smrt_info;
  // Assigning noindex & nofollow tags to advanced search page
  if (arg(0) == 'search' && arg(1) == 'advanced') {
    $elements = array(
      '#tag' => 'meta',
      '#attributes' => array(
        'name' => 'robots',
        'content' => 'noindex, nofollow',
      ),
    );
    drupal_add_html_head($elements, 'robots');
  }
  
    $variables['print_flag'] = 0;
    if (arg(2) == 'print') {
        $variables['print_flag'] = 1;
    }
       $variables['smrt_flag'] = 0;
    // Add class (representing gallery layout) to body tag in slideshow details page
  if (arg(0) == 'node' && is_numeric(arg(1))) {
    // To change the header title for recipes with authors.
    $nid = arg(1);
    $node = node_load($nid);
    if ($node->type == 'recipe') {
      $head_title_array = explode('@', $variables['head_title']);
      if ($head_title_array[2] == '' && $head_title_array[1] == '') {
        $variables['head_title'] = $head_title_array[0] . $head_title_array[3];
      }
      elseif (($head_title_array[2] != '' && $head_title_array[1] != '') || $head_title_array[2] == '') {
        $variables['head_title'] = $head_title_array[0] . '-' . $head_title_array[1] . $head_title_array[3];
      }
      else $variables['head_title'] = $head_title_array[0] . '-' . $head_title_array[2] . $head_title_array[3];
    }
    else if ($node->type == 'gallery') {
      if (!$variables['head_title']) {
        $variables['head_title'] = strip_tags($node->title) . ' | ' . variable_get('site_name', t('Food & Wine'));
      }
    }

    if (in_array('node-type-gallery', $variables['classes_array'])) {
      $nid = arg(1);
      $entity_type = 'node';
      $bundle = 'gallery';

      $query = db_select('node', 'n');
      $query->join('field_data_field_gallery_layout', 'layout', 'n.nid = layout.entity_id AND n.vid=layout.revision_id');
      $query->fields('layout', array('field_gallery_layout_value'))->condition('n.nid', $nid, '=');
      $layout = strtolower($query->execute()->fetchField());
      $variables['classes_array'][] = drupal_clean_css_identifier('gallery-layout-' . $layout);
    }
    if ($node->type == 'person') {
      if ($node->field_person_type[LANGUAGE_NONE][0]['value'] == 's' && $user->uid == 0) {
        fast_404_error_return(TRUE);
      }
    }
    
    //For Simple Reach Test Setting Page Variables
    $variables['smrt_published_at'] = date('Y-m-d H:i:s', $node->published_at);
    $authors = array();
    $variables['smrt_author'] = '';
    $variables['smrt_tags'] = '';
    $tags = array();
    if ($node->type == 'article' || $node->type == 'blog') {
            if (isset($node->field_author[LANGUAGE_NONE])) {
                $authors = $node->field_author[LANGUAGE_NONE];
            }            
            if($node->type == 'blog' && isset($node->field_topic[LANGUAGE_NONE])){
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
            if(isset($node->field_complex_theme[LANGUAGE_NONE])){
                $tags = $node->field_complex_theme[LANGUAGE_NONE];
            }            
        }
        if (!empty($authors)) {
            foreach ($authors as $author) {
                if ($variables['smrt_author'] == '') {
                    $variables['smrt_author'] = '"' . $author['entity']->title . '"';
                }
                else {
                    $variables['smrt_author'] .= ', ' . '"' . $author['entity']->title . '"';
                }
            }
        }
        if (!empty($tags)) {
            foreach ($tags as $tag) {
                if ($variables['smrt_tags'] == '') {
                    $variables['smrt_tags'] = '"' . $tag['taxonomy_term']->name . '"';
                }
                else {
                    $variables['smrt_tags'] .= ', ' . '"' . $tag['taxonomy_term']->name . '"';
                }
            }
        }
        
        if ($node->type == 'channel_landing_page') {
            $variables['smrt_flag'] = 0;
        }
        else {
            $variables['smrt_flag'] = 1;
        }
        
        if(request_uri() == '/video'){
            $variables['smrt_flag'] = 0;           
        }
        
        $variables['smrt_picd'] = '545bd595d70ba01dd900002d';
        $variables['smrt_url'] = $base_url . request_uri();
        if ($node->type == 'page') {
            $variables['smrt_channel'] = 'general';
        }
        else {
            $base_type = explode('/', request_path());
            $variables['smrt_channel'] = $base_type[0];
        }
        if($variables['smrt_tags'] == ''){
            $variables['smrt_tags'] = '"'.$variables['smrt_channel'].'"';
        }
        $site_domain = explode('//', $base_url);
        $variables['smrt_domain'] = $site_domain[1];
        $variables['smrt_title'] = $node->title;
        $variables['smrt_gallery_flag'] = 0;
        // Creating new variable for simple reach native advertisement flag
        $variables['smrt_native_adv_flag'] = 0;  
        // Checking in article content type section
        if ($node->type == 'article') {
          if (isset($node->field_native_advertising[LANGUAGE_NONE])) {
            $variables['smrt_native_adv_flag'] = $node->field_native_advertising[LANGUAGE_NONE][0]['value'];
          }
        }
        // Checking in gallery content type section
        if ($node->type == 'gallery' && $slideshow_smrt_info['type'] == 'HD') {
            if (isset($node->field_native_advertising[LANGUAGE_NONE])) {
              $variables['smrt_native_adv_flag'] = $node->field_native_advertising[LANGUAGE_NONE][0]['value'];
            } 
            $variables['smrt_gallery_flag'] = 1;
            drupal_add_js(array('ti_amg_fw_gallery' => array('publish_date' => $variables['smrt_published_at'])), array('type' => 'setting'));
        } elseif ($node->type == 'gallery' && $slideshow_smrt_info['type'] == 'STD') {
            $variables['smrt_title'] = $slideshow_smrt_info['title'];
            if (isset($node->field_native_advertising[LANGUAGE_NONE])) {
              $variables['smrt_native_adv_flag'] = $node->field_native_advertising[LANGUAGE_NONE][0]['value'];
            } 
        }       
  }
  // Set Header Page Title for search
  else if (arg(0) == 'search') {
    $current_tab = '';
    if (isset($_GET['f'])) {
      foreach ($_GET['f'] as $key => $value) {
        if (substr($value, 0, 5) == 'type:') {
          $current_tab = substr($value, 5);
        }
      }
    }
    switch ($current_tab) {
      case 'article':
        $display_name = t('Articles');
        break;
      case 'recipe':
        $display_name = t('Recipes');
        break;
      case '':
        $display_name = t('All');
        break;
      default:
        $display_name = NULL;
    }
    if ($display_name) {
      $head_title_prefix = t('Search') . ' - ' . $display_name;
    }
    else {
      $head_title_prefix = t('Search');
    }
    $variables['head_title'] = $head_title_prefix . ' | ' . variable_get('site_name', t('Food & Wine'));
  }
  //adding class to parent taxonomy of recipe theme pages//
  if (arg(0) == 'recipe-finder') {
    $ogimg_url = $base_url . '/sites/default/files/foodandwine-social.jpg';
    if (arg(1)) {
      $tid = '';
      $term_name = '';
      $tid = get_tid_from_label(array(arg(1)), 'field_complex_theme_label');

      if ($tid) {
        $term_name = taxonomy_term_load($tid[0])->name;
        $query = db_select('taxonomy_term_hierarchy', 't');
        $query->condition('parent', $tid, '=')->fields('t', array('tid'));
        $result = $query->execute();
        
        if ($result->rowCount() > 0) {         
          $variables['classes_array'][] = 'recipe-finder-parent-term';
        }
      }

      // Changing the <title> tag for recipe finder pages
      $page_title = variable_get('site_name', 'Food & Wine');
      preg_match('/\d+/', arg(1), $matches);
      if (!empty($matches[0])) {
        if (arg(1) == '20-for-a-crowd') {
          $term_name = 'Serves 20+ (for a crowd)';
        }
        else $term_name = 'Serves ' . arg(1);
      }
      $variables['head_title'] = $term_name . ' | Recipe Finder | ' . $page_title;
      $og_title = $term_name . ' | Recipe Finder';
    }
    else {
      $og_title = 'Recipe Finder';
    }

    //Adding og:image & og:title tags for recipe finder pages
    $html_head = array(
      'og_image' => array(
        '#tag' => 'meta',
        '#attributes' => array(
          'property' => 'og:image',
          'content' => $ogimg_url,
        ),
      ),
      'og_title' => array(
        '#tag' => 'meta',
        '#attributes' => array(
          'property' => 'og:title',
          'content' => $og_title,
        ),
      ),
    );
    foreach ($html_head as $key => $data) {
      drupal_add_html_head($data, $key);
    }
  }
  //Selecting XML Namespaces for rebelmouse page
  if(arg(0)=='rebelmouse')
  { 
    $xml_name_spaces = array('xmlns:dc' => 'http://purl.org/dc/elements/1.1/',
          'xmlns:content' => 'http://purl.org/rss/1.0/modules/content/',
          'xmlns:foaf' => 'http://xmlns.com/foaf/0.1/', 'xmlns:og' => 'http://ogp.me/ns#',
          'xmlns:rdfs' => 'http://www.w3.org/2000/01/rdf-schema#', 'xmlns:sioc' => 'http://rdfs.org/sioc/ns#',
          'xmlns:sioct' => 'http://rdfs.org/sioc/ns#', 'xmlns:skos' => 'http://www.w3.org/2004/02/skos/core#',
          'xmlns:xsd' => 'http://www.w3.org/2001/XMLSchema#', 'xmlns:owl' => 'http://www.w3.org/2002/07/owl#',
          'xmlns:rdf' => 'http://www.w3.org/1999/02/22-rdf-syntax-ns#', 'xmlns:rss' => 'http://purl.org/rss/1.0/',
          'xmlns:site' => $base_url . '/ns#',
        );
    $variables['xml_name_spaces'] = drupal_attributes($xml_name_spaces);
  }
}

/**
 *  Implementing hook_preprocess_page
 */
function foodandwine_preprocess_page(&$vars) {
  global $is_https, $conf, $og_img_url, $base_url; 
  $vars['page']['disable_second_sidebar'] = FALSE;
  $vars['page']['footer_css_links'] = '';
  if ($vars['is_front'] && $_COOKIE['TI_PREFS'] == 'phone') {
    unset($vars['page']['content']['system_main']);
  }

  if (isset($vars['node'])) {
    if ($vars['node']->type == 'article' || $vars['node']->type == 'blog' || $vars['node']->type == 'page' || $vars['node']->type == 'channel_landing_page' || $vars['node']->type == 'person') {
      unset($vars['page']['content']['system_main']['nodes']);
      drupal_set_title('');
    }
    if ($vars['node']->type == 'gallery' || $vars['node']->type == 'recipe' || $vars['node']->type == 'video' || $vars['node']->type == 'video_landing_page') {
      drupal_set_title('');
    }

    // Attach CSS & JS files for Basic Page content
    if ($vars['node']->type == 'page') {
      if (count($vars['node']->field_attachments) > 0) {
        foreach ($vars['node']->field_attachments['und'] as $file) {
          if ($file['filemime'] == 'text/css') {
            $css_url = file_create_url($file['uri']);
            //This CSS should load after style.css in theme info
            //So link tag is being used instead of drupal_add_css
            $vars['page']['footer_css_links'] .= '<link type="text/css" rel="stylesheet" href="' . $css_url . '" media="all" />';
          }
          if ($file['filemime'] == 'application/x-javascript') {
            drupal_add_js($file['uri']);
          }
        }
      }
    }


    //Alter layout of Basic Page
    if ($vars['node']->type == 'page') {
      if ($vars['node']->field_layout['und'][0]['value'] == 'NS') {
        $vars['page']['disable_second_sidebar'] = TRUE;
      }
    }
    //Alter layout of Slideshow detail page
    if ($vars['node']->type == 'gallery') {
      $language = $vars['node']->language;
      if ($vars['node']->field_gallery_layout[$language][0]['value'] == 'HD') {
        $vars['page']['disable_second_sidebar'] = TRUE;
      }
    }
    if ($vars['node']->type == 'article' || $vars['node']->type == 'page') {
      //Enable UI.WIDGET jQuery Library Flie
      drupal_add_library('system', 'ui.widget');
    }
        
    if($vars['node']->type == 'blog'){       
        drupal_add_css(drupal_get_path('module', 'ti_amg_fw_custom') . '/css/new_blog.css', array('weight' => CSS_THEME)); 
    }
    // Taking default meta decription from configuration varables
    // If any deck exists meta description from deck
    // else if body exists meta description from body
    $meta_desc_val = $conf['ti_amg_fw_default_meta_desc'];     
    if (!isset($vars['node']->metatags[LANGUAGE_NONE]['description']['value']) || $vars['node']->metatags[LANGUAGE_NONE]['description']['value'] == '') {

      if ($vars['node']->type == 'blog' || $vars['node']->type == 'article' || $vars['node']->type == 'recipe') {
        if (!empty($vars['node']->field_deck[LANGUAGE_NONE][0]['value'])) {
          $meta_desc_val = ltrim(substr(str_replace('&nbsp;', '', strip_tags($vars['node']->field_deck[LANGUAGE_NONE][0]['value'])), 0, 155)) . '...';
        }
        elseif (!empty($vars['node']->body[LANGUAGE_NONE][0]['value'])) {
          $meta_desc_val = ltrim(substr(str_replace('&nbsp;', '', strip_tags($vars['node']->body[LANGUAGE_NONE][0]['value'])), 0, 155)) . '...';
        }
      }
      // Except gallery type generating meta description for every node type
      if ($vars['node']->type != 'gallery') {
        $meta_description = array(
          '#tag' => 'meta',
          '#attributes' => array(
            'property' => 'description',
            'content' => $meta_desc_val,
          ),
        );
        drupal_add_html_head($meta_description, 'meta_description');
      }
    }

    // Taking image from node, if image not exists for that node, showing default social share image  
    $og_img_url = $base_url . $conf['social_share_default_img'];
    if (isset($vars['node']->field_images['und'][0]['entity']->field_image['und'][0]['uri'])) {
      $og_img_url = file_create_url($vars['node']->field_images['und'][0]['entity']->field_image['und'][0]['uri']);
    }
    
    if ($vars['node']->type == 'recipe' && isset($vars['node']->field_images[$vars['node']->language][0]['target_id'])) {
      $image_id = $vars['node']->field_images[$vars['node']->language][0]['target_id'];
      $image_obj = node_load($image_id);
      $image_uri = $image_obj->field_image[$vars['node']->language][0]['uri'];
      $og_img_url = file_create_url($image_uri);
    }
    
    // noindex, nofollow for place and sub_menu_settings content types
    if (($vars['node']->type == 'place') || ($vars['node']->type == 'sub_menu_settings')) {
      $meta_element = array(
        '#tag' => 'meta',
        '#attributes' => array(
          'name' => 'robots',
          'content' => 'noindex, nofollow',
        ),
      );
      drupal_add_html_head($meta_element, 'robots');
    }
  }

  //Added foodandwine_custom.js for custom jQuery code
  
   drupal_add_js(
    drupal_get_path('theme', 'foodandwine') . '/js/foodandwine_custom.js',
    array(
      'scope' => 'footer',
      'type' => 'file',
      'every_page' => TRUE,
      'weight' => -110,
    )
  );
   
  if ($_COOKIE['TI_PREFS'] == 'phone') { 
    drupal_add_js(
      drupal_get_path('theme', 'foodandwine') . '/js/foodandwine_mobile.js',
      array(
        'scope' => 'footer',
        'type' => 'file',
        'every_page' => TRUE,
        'weight' => -112,
      )
    );
  }

  if (isset($vars['node'])) {
    if ($vars['node']->type == 'article' || $vars['node']->type == 'page') {
      //Added fw_featured_recipes_carousel for custom jQuery code
      drupal_add_js(drupal_get_path('theme', 'foodandwine') . '/js/fw_featured_recipes_carousel.js',
        array(
          'scope' => 'footer',
          'type' => 'file',
          'weight' => -109,
        )   
      );
      //Includes jquery.contentSlider external library file for Article Featured Recipes Section
      drupal_add_js(drupal_get_path('theme', 'foodandwine') . '/js/jquery.contentSlider.js',
          array(
          'scope' => 'footer',
          'type' => 'file',
          'weight' => -108,
        )  
      );
    }
  }

  //unsetting the default title for recipe-finder page and rss page
  if (request_uri() == '/recipe-finder' || request_uri() == '/rss') {
    drupal_set_title('');
  }
  
  if (isset($vars['node'])) {
    if ($_COOKIE['TI_PREFS'] == 'phone' && $vars['node']->type == 'gallery') {
      drupal_add_js(drupal_get_path('module', 'ti_amg_fw_slideshow') . '/js/tgx_site_config.js',
        array(
          'scope' => 'footer',
          'type' => 'file',
          'weight' => -107,
        )  
      );
  
      drupal_add_js(drupal_get_path('theme', 'foodandwine') . '/js/jquery.flexslider.js',
        array(
          'scope' => 'footer',
          'type' => 'file',
          'weight' => -106,
        )  
      );
      drupal_add_js(drupal_get_path('theme', 'foodandwine') . '/js/mobile_slideshow.js',
        array(
          'scope' => 'footer',
          'type' => 'file',
          'weight' => -106,
        )  
      );
      drupal_add_js(drupal_get_path('theme', 'foodandwine') . '/js/refresh-mob-ads.js',
        array(
          'scope' => 'footer',
          'type' => 'file',
          'weight' => -105,
        )  
      );
      drupal_add_css(drupal_get_path('theme', 'foodandwine') . '/css/flexslider.css');
      drupal_add_js(drupal_get_path('module', 'ti_amg_fw_slideshow') . '/js/hd_omniture.js',
        array(
          'scope' => 'footer',
          'type' => 'file',
          'group' => JS_LIBRARY - 10,
          'weight' => -40,
        )      
      );
    }
  }
  
  //Selecting the tpl file for print page
  if(arg(2)=='print')
  {
      $vars['theme_hook_suggestions'][0] = 'page__print';
      unset($vars['page']['content']['ti_amg_fw_outbrain_outbrain_block']);
      unset($vars['page']['content']['ti_amg_ads_cmad_460x70']);
  } 
  //Selecting the tpl file for rebelmouse page
  if(arg(0)=='rebelmouse')
  {
      $vars['theme_hook_suggestions'][0] = 'page__rebelmouse';
      unset($vars['page']['content']['ti_amg_fw_outbrain_outbrain_block']);
      unset($vars['page']['content']['ti_amg_ads_cmad_460x70']);      
  }

  // Setting SEO links for Rebelmouse page
  if(arg(0)=='healthy-food')
  {
    // Adding Canonical Tag
    $canonical_link = array(
      'rel' => 'canonical',
      'href' => $base_url . '/' . request_path(),
    );
    drupal_add_html_head_link($canonical_link);

    // Adding meta description
    $meta_desc = array(
      '#tag' => 'meta',
      '#attributes' => array(
        'property' => 'description',
        'content' => $conf['ti_amg_fw_default_meta_desc'],
      ),
    );
    drupal_add_html_head($meta_desc, 'meta_description');

    $meta_title = array(
      '#tag' => 'meta',
      '#attributes' => array(
        'property' => 'og:title',
        'content' => 'Healthy Food',
      ),
    );
    drupal_add_html_head($meta_title, 'title');

    $meta_og_desc = array(
      '#tag' => 'meta',
      '#attributes' => array(
        'property' => 'og:description',
        'content' => $conf['ti_amg_fw_default_meta_desc'],
      ),
    );
    drupal_add_html_head($meta_og_desc, 'og:description');

    $meta_og_type = array(
      '#tag' => 'meta',
      '#attributes' => array(
        'property' => 'og:type',
        'content' => 'article',
      ),
    );
    drupal_add_html_head($meta_og_type, 'og:type');

    $meta_og_url = array(
      '#tag' => 'meta',
      '#attributes' => array(
        'property' => 'og:url',
        'content' => $base_url . '/' . request_path(),
      ),
    );
    drupal_add_html_head($meta_og_url, 'og:url');

  }

}
/**
 *  Implementing hook_js_alter().
 */
function foodandwine_js_alter(&$javascript) {
  if (isset($_COOKIE['TI_PREFS']) && ($_COOKIE['TI_PREFS'] == 'phone')) {
    unset($javascript['sites/all/modules/custom/ti_amg_fw_slideshow/js/iframe-ads.js']);
    unset($javascript['sites/all/modules/custom/ti_amg_fw_slideshow/js/hd_slideshows.js']);
    unset($javascript['sites/all/modules/custom/ti_amg_fw_slideshow/js/hd_carousel.js']);
    unset($javascript['sites/all/modules/custom/ti_amg_fw_slideshow/js/hd_slideshow_invoke.js']);
    unset($javascript['sites/all/modules/custom/ti_amg_fw_slideshow/js/jquery.ba-bbq.js']);
    unset($javascript['sites/all/modules/custom/ti_amg_fw_slideshow/js/json2.js']);
  }
}

/**
 * Overrides theme_menu_link().
 */
function foodandwine_menu_link(array$variables) {
  $element = $variables['element'];
  $sub_menu = '';

  if ($element['#below']) {
    // Prevent dropdown functions from being added to management menu so it
    // does not affect the navbar module.
    if (($element['#original_link']['menu_name'] == 'management') && (module_exists('navbar'))) {
      $sub_menu = drupal_render($element['#below']);
    }
    elseif ((!empty($element['#original_link']['depth'])) && ($element['#original_link']['depth'] == 1)) {
      // Add our own wrapper.
      unset($element['#below']['#theme_wrappers']);
      $sub_menu = '<ul class="dropdown-menu">' . drupal_render($element['#below']) . '</ul>';
      // Generate as standard dropdown.
      $element['#title'] .= ' <span class="caret"></span>';
      $element['#attributes']['class'][] = 'dropdown';
      $element['#localized_options']['html'] = TRUE;

      // Set dropdown trigger element to # to prevent inadvertant page loading
      // when a submenu link is clicked.
      $element['#localized_options']['attributes']['data-target'] = '#';
      $element['#localized_options']['attributes']['class'][] = 'dropdown-toggle';
    }
  }
  // On primary navigation menu, class 'active' is not set on active menu item.
  // @see https://drupal.org/node/1896674
  if (($element['#href'] == $_GET['q'] || ($element['#href'] == '<front>' && drupal_is_front_page())) && (empty($element['#localized_options']['language']))) {
    $element['#attributes']['class'][] = 'active';
  }
  $menu_class = strtolower(drupal_clean_css_identifier($element['#original_link']['title']));
  if ($menu_class && $element['#original_link']['depth'] == 1) {
    $element['#attributes']['class'][] = 'menu-' . $menu_class;
  }

  $element['#localized_options']['attributes']['title'] = $element['#title'];
  $output = l($element['#title'], $element['#href'], $element['#localized_options']);
  return '<li' . drupal_attributes($element['#attributes']) . '>' . $output . $sub_menu . "</li>\n";
}

/**
 * Implementing hook_html_head_alter
 */
function foodandwine_html_head_alter(&$head_elements) {   
  global $base_url, $slideshow_type, $og_img_url, $conf;  
  $person_flag = 0;
  $slideshow_flag = 0;
  
  if (arg(0) == 'node' && is_numeric(arg(1))) {
    $nid = arg(1);
    $query = db_select('node', 'n');      
    $query->fields('n', array('type'))->condition('n.nid', arg(1), '=');
    $node_type = $query->execute()->fetchField();
       
    //For canonical tags purpose we are making person_flag = 1
    if ($node_type == 'person') {
      $person_flag = 1;
    }
    
    if ($node_type == 'gallery') {
      $slideshow_flag = 1;
    }
      
    $head_elements['metatag_og:image']['#value'] = $og_img_url;
    $head_elements['metatag_twitter:image_0']['#value'] = $og_img_url;
  }
    
  if($slideshow_flag == 0){
      if (isset($head_elements['metatag_description'])) {
              $head_elements['metatag_og:description']['#value'] = $head_elements['metatag_description']['#value'];    
    }elseif(isset($head_elements['meta_description'])){         
              $head_elements['metatag_og:description']['#value'] = $head_elements['meta_description']['#attributes']['content'];
    }
  }
  
  if(isset($head_elements['metatag_og:description']) && $slideshow_flag == 1){
      unset($head_elements['metatag_og:description']);
  }
  
  // If there is no canonical tag was assigned to the node
  // Adding base url to the relative node path
  if (!isset($head_elements['metatag_canonical'])) {
    foreach ($head_elements as $key => $element) {
      if (isset($element['#attributes']['rel']) &&
        $element['#attributes']['rel'] == 'canonical' &&
        !preg_match('/http/', $element['#attributes']['href'])
      ) {
        $head_elements[$key]['#attributes']['href'] = $base_url . $element['#attributes']['href'];
        break;
      }
    }
  }
  // Removing the duplicates from meta keywords.
  if (isset($head_elements['metatag_keywords']['#value'])) {
    $m_keywords = $head_elements['metatag_keywords']['#value'];
    $m_keywords = explode(',', $m_keywords);
    if (count($m_keywords) > 1) {
      $trimmed_keywords = array();
      foreach ($m_keywords as $value) {
        $trimmed_keywords[] = trim($value);
      }
      $head_elements['metatag_keywords']['#value'] = implode(',', array_unique(array_filter($trimmed_keywords)));
    }
  }

  // Adding Pagination arguments in canonical tags
  if (arg(0) == 'blogs' || $person_flag == 1) {
    $meta_canonical_url = $head_elements['metatag_canonical']['#value'];
    $canonical_array = explode('?page=', $meta_canonical_url);
    $page_number = $canonical_array[1] + 1;
    if ($page_number == 1) {
      $head_elements['metatag_canonical']['#value'] = $canonical_array[0];
    }
    else $head_elements['metatag_canonical']['#value'] = $canonical_array[0] . '?page=' . $page_number;
  }  
  
}

/**
 * Returns HTML for the facet title, usually the title of the block.
 *
 * @param $variables
 *   An associative array containing:
 *   - title: The title of the facet.
 *   - facet: The facet definition as returned by facetapi_facet_load().
 *
 */
function foodandwine_facetapi_title($variables) {
  return $variables['title'];
}

/**
 * Returns HTML for an inactive facet item.
 * Hide facet counts for checkbox widget
 * Hide links for checkbox widget.
 *
 * @param $variables
 *   An associative array containing the keys 'text', 'path', 'options', and
 *   'count'. See the l() and theme_facetapi_count() functions for information
 *   about these variables.
 *
 */
function foodandwine_facetapi_link_inactive($variables) {
  
  if($variables['path'] == 'blogs') {
    $tid = substr($variables['options']['query']['f'][0], 12);
    $display_text = $variables['text'] . ' ('. $variables['count'] . ')';
    $topics = get_label_for_all_topics();
    $label = $topics[$tid];
    return l($display_text, 'blogs/'.$label);
  }  
  
  $accessible_vars = array(
    'text' => $variables['text'],
    'active' => FALSE,
  );
  $accessible_markup = theme('facetapi_accessible_markup', $accessible_vars);

  // Sanitizes the link text if necessary.
  $sanitize = empty($variables['options']['html']);
  $variables['text'] = ($sanitize) ? check_plain($variables['text']) : $variables['text'];

  // Adds count to link if one was passed.
  //Hide facet counts for checkbox widget
  if (in_array('facetapi-checkbox', $variables['options']['attributes']['class'])) {
    $variables['options']['attributes']['class'][] = 'element-invisible';
  }
  elseif (isset($variables['count'])) {
    $variables['text'] .= ' ' . theme('facetapi_count', $variables);
  }


  // Resets link text, sets to options to HTML since we already sanitized the
  // link text and are providing additional markup for accessibility.
  $variables['text'] .= $accessible_markup;
  $variables['options']['html'] = TRUE;


  if (!in_array('facetapi-checkbox', $variables['options']['attributes']['class'])) {
    return theme_link($variables);
  }
  else {
    return theme_link($variables) . $variables['text'];
  }
}

/**
 * Implements template_preprocess_views_view().
 */
function foodandwine_preprocess_views_view(&$vars) {
  global $base_path;

  $view = $vars['view'];

  $vars['rows'] = (!empty($view->result) || $view->style_plugin->even_empty()) ? $view->style_plugin->render($view->result) : '';

  $vars['css_name'] = drupal_clean_css_identifier($view->name);
  $vars['name'] = $view->name;
  $vars['display_id'] = $view->current_display;

  // Basic classes
  $vars['css_class'] = '';

  $vars['classes_array'] = array();
  $vars['classes_array'][] = 'view';
  $vars['classes_array'][] = 'view-' . drupal_clean_css_identifier($vars['name']);
  $vars['classes_array'][] = 'view-id-' . $vars['name'];
  $vars['classes_array'][] = 'view-display-id-' . $vars['display_id'];

  $css_class = $view->display_handler->get_option('css_class');
  if (!empty($css_class)) {
    $vars['css_class'] = preg_replace('/[^a-zA-Z0-9- ]/', '-', $css_class);
    $vars['classes_array'][] = $vars['css_class'];
  }

  $empty = empty($vars['rows']);

  $vars['header'] = $view->display_handler->render_area('header', $empty);
  $vars['footer'] = $view->display_handler->render_area('footer', $empty);
  if ($empty) {
    $vars['empty'] = $view->display_handler->render_area('empty', $empty);
  }

  $vars['exposed'] = !empty($view->exposed_widgets) ? $view->exposed_widgets : '';
  $vars['more'] = $view->display_handler->render_more_link();
  $vars['feed_icon'] = !empty($view->feed_icon) ? $view->feed_icon : '';

  $vars['pager'] = '';

  // @todo: Figure out whether this belongs into views_ui_preprocess_views_view.
  // Render title for the admin preview.
  $vars['title'] = !empty($view->views_ui_context) ? filter_xss_admin($view->get_title()) : '';

  if ($view->display_handler->render_pager()) {
    $exposed_input = isset($view->exposed_raw_input) ? $view->exposed_raw_input : NULL;
    $vars['pager'] = $view->query->render_pager($exposed_input);
  }

  $vars['attachment_before'] = !empty($view->attachment_before) ? $view->attachment_before : '';
  $vars['attachment_after'] = !empty($view->attachment_after) ? $view->attachment_after : '';

  // Add contextual links to the view. We need to attach them to the dummy
  // $view_array variable, since contextual_preprocess() requires that they be
  // attached to an array (not an object) in order to process them. For our
  // purposes, it doesn't matter what we attach them to, since once they are
  // processed by contextual_preprocess() they will appear in the $title_suffix
  // variable (which we will then render in views-view.tpl.php).
  views_add_contextual_links($vars['view_array'], 'view', $view, $view->current_display);

  // Attachments are always updated with the outer view, never by themselves,
  // so they do not have dom ids.
  if (empty($view->is_attachment)) {
    // Our JavaScript needs to have some means to find the HTML belonging to this
    // view.
    //
    // It is true that the DIV wrapper has classes denoting the name of the view
    // and its display ID, but this is not enough to unequivocally match a view
    // with its HTML, because one view may appear several times on the page. So
    // we set up a hash with the current time, $dom_id, to issue a "unique" identifier for
    // each view. This identifier is written to both Drupal.settings and the DIV
    // wrapper.
    $vars['dom_id'] = $view->dom_id;
    $vars['classes_array'][] = 'view-dom-id-' . $vars['dom_id'];
  }

  // If using AJAX, send identifying data about this view.
  if ($view->use_ajax && empty($view->is_attachment) && empty($view->live_preview)) {
    $settings = array(
      'views' => array(
        'ajax_path' => url('views/ajax'),
        'ajaxViews' => array(
          'views_dom_id:' . $vars['dom_id'] => array(
            'view_name' => $view->name,
            'view_display_id' => $view->current_display,
            'view_args' => check_plain(implode('/', $view->args)),
            'view_path' => check_plain($_GET['q']),
            // Pass through URL to ensure we get for example, language prefixes.
            //            'view_base_path' => isset($view->display['page']) ? substr(url($view->display['page']->display_options['path']), strlen($base_path)) : '',
            'view_base_path' => $view->get_path(),
            'view_dom_id' => $vars['dom_id'],
            // To fit multiple views on a page, the programmer may have
            // overridden the display's pager_element.
            'pager_element' => isset($view->query->pager) ? $view->query->pager->get_pager_id() : 0,
          ),
        ),
      ),
    );

    drupal_add_js($settings, 'setting');
    views_add_js('ajax_view');
  }

  // If form fields were found in the View, reformat the View output as a form.
  if (views_view_has_form_elements($view)) {
    $output = !empty($vars['rows']) ? $vars['rows'] : $vars['empty'];
    $form = drupal_get_form(views_form_id($view), $view, $output);
    // The form is requesting that all non-essential views elements be hidden,
    // usually because the rendered step is not a view result.
    if ($form['show_view_elements']['#value'] == FALSE) {
      $vars['header'] = '';
      $vars['exposed'] = '';
      $vars['pager'] = '';
      $vars['footer'] = '';
      $vars['more'] = '';
      $vars['feed_icon'] = '';
    }
    $vars['rows'] = $form;
  }

  if (($vars['view']->name == 'foodandwine_search' && $vars['view']->current_display == 'page')
    || $view->name == 'ti_amg_fw_recipe_finder_child'
  ) {
    $vars['fw_pager_options'] = '';
    if (count($view->result) > 0) {
      if ($view->results_per_page) {
        $links = fw_get_views_pager_links($view->results_per_page);
        if ($links) {
          $vars['fw_pager_options'] = "<span class='views-results-per-page'>" . $links . "</span>";
        }
      }
    }
  }
}

/**
 * Implements theme_facetapi_deactivate_widget
 *
 */
function foodandwine_facetapi_deactivate_widget($variables) {
  return '<span class="deactivate-facet"><span>';
}

/**
 * Implements theme_facetapi_count()
 *
 */
function foodandwine_facetapi_count($variables) {
  return '<span class="count">(' . (int) $variables['count'] . ')</span>';
}

/**
 * Implements theme_image_style($variables)
 * Adding 'data-pin-media' attribute to images to share original image
 *
 */
function foodandwine_image_style($variables) {
  // Determine the dimensions of the styled image.
  $dimensions = array(
    'width' => $variables['width'],
    'height' => $variables['height'],
  );

  image_style_transform_dimensions($variables['style_name'], $dimensions);

  $variables['width'] = $dimensions['width'];
  $variables['height'] = $dimensions['height'];

  // Getting the original image path
  $pinterest_image_path = file_create_url($variables['path']);

  // Determine the URL for the styled image.
  $variables['path'] = image_style_url($variables['style_name'], $variables['path']); 
  $variables['attributes']['data-pin-media'] = $pinterest_image_path;

  return theme('image', $variables);
}

/**
 * Implements hook_context_load_alter().
 * unset twitter and pinterest blocks
 */
function foodandwine_context_load_alter(&$context) {
  if (arg(0) == 'node' && is_numeric(arg(1))) {
    $nid = arg(1);
    $node = node_load($nid);
    if ($node->type == 'gallery' || $node->type == 'person' || $node->type == 'blog' || $node->type == 'recipe') {
      if (isset($context->reactions['block']['blocks']['ti_amg_fw_custom-fw_twitter_block'])) {
        unset($context->reactions['block']['blocks']['ti_amg_fw_custom-fw_twitter_block']);
      }
      if (isset($context->reactions['block']['blocks']['ti_amg_fw_custom-fw_pinterest_block'])) {
        unset($context->reactions['block']['blocks']['ti_amg_fw_custom-fw_pinterest_block']);
      }      
    }

    if ($node->type == 'gallery' && $_COOKIE['TI_PREFS'] == 'phone') {
      if (isset($context->reactions['block']['blocks']['ti_amg_fw_hat-ti_amg_fw_hat_block'])) {
        unset($context->reactions['block']['blocks']['ti_amg_fw_hat-ti_amg_fw_hat_block']);
      }
      if (isset($context->reactions['block']['blocks']['ti_amg_ads-gcr_728x90'])) {
        unset($context->reactions['block']['blocks']['ti_amg_ads-gcr_728x90']);
      }
      if (isset($context->reactions['block']['blocks']['search-form'])) {
        unset($context->reactions['block']['blocks']['search-form']);
      }
      if (isset($context->reactions['block']['blocks']['ti_amg_fw_custom-fw_logo_block'])) {
        unset($context->reactions['block']['blocks']['ti_amg_fw_custom-fw_logo_block']);
      }
      if (isset($context->reactions['block']['blocks']['ti_amg_ads-cmad_220x100'])) {
        unset($context->reactions['block']['blocks']['ti_amg_ads-cmad_220x100']);
      }
      if (isset($context->reactions['block']['blocks']['ti_amg_fw_custom-fw_social_media_block'])) {
        unset($context->reactions['block']['blocks']['ti_amg_fw_custom-fw_social_media_block']);
      }
      if (isset($context->reactions['block']['blocks']['ti_amg_ads-multiad_300x250'])) {
        unset($context->reactions['block']['blocks']['ti_amg_ads-multiad_300x250']);
      }
      if (isset($context->reactions['block']['blocks']['ti_amg_fw_custom-fw_outbrain_block'])) {
        unset($context->reactions['block']['blocks']['ti_amg_fw_custom-fw_outbrain_block']);
      }
      if (isset($context->reactions['block']['blocks']['ti_amg_ads-normal_300x250'])) {
        unset($context->reactions['block']['blocks']['ti_amg_ads-normal_300x250']);
      }
      if (isset($context->reactions['block']['blocks']['ti_amg_fw_custom-fw_newsletter_block'])) {
        unset($context->reactions['block']['blocks']['ti_amg_fw_custom-fw_newsletter_block']);
      }
      if (isset($context->reactions['block']['blocks']['views-183d0cbd896115df03a55583c02c83d8'])) {
        unset($context->reactions['block']['blocks']['views-183d0cbd896115df03a55583c02c83d8']);
      }
      if (isset($context->reactions['block']['blocks']['ti_amg_ads-142x70_1'])) {
        unset($context->reactions['block']['blocks']['ti_amg_ads-142x70_1']);
      }
      if (isset($context->reactions['block']['blocks']['ti_amg_ads-142x70_2'])) {
        unset($context->reactions['block']['blocks']['ti_amg_ads-142x70_2']);
      }
      if (isset($context->reactions['block']['blocks']['ti_amg_ads-142x70_3'])) {
        unset($context->reactions['block']['blocks']['ti_amg_ads-142x70_3']);
      }
      if (isset($context->reactions['block']['blocks']['system-main-menu'])) {
        unset($context->reactions['block']['blocks']['system-main-menu']);
      }
    }
  }
}
