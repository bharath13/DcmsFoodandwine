<?php
/**
 * @file unifiedtemplate_responsive/template.php
 * \file unifiedtemplate_responsive/template.php
 * \ingroup unifiedtemplate_responsive
 * template.php.
 */

/**
 * Implements hook_theme().
 */
function unifiedtemplate_responsive_theme($existing, $type, $theme, $path) {
  return ti_patternab_get_drupal_overrides($existing, $type, $theme, $path);
}

/**
 * Implements hook_preprocess_html().
 */
function unifiedtemplate_responsive_preprocess_html(&$variables) {
  $path = drupal_get_path('theme', 'unifiedtemplate_responsive') . '/pattern-lab';
  if (file_exists($path . '/public/assets/css/main.min.css')) {
    drupal_add_css($path . '/public/assets/css/main.min.css', array(
      'group' => CSS_DEFAULT,
      'every_page' => TRUE,
    ));
  }
  else {
    drupal_add_css($path . '/public/assets/css/main.css', array(
      'group' => CSS_DEFAULT,
      'every_page' => TRUE,
    ));
  }

  $js_main = '/' . $path . '/public/assets/js/built/main.bundle.js';
  $js_vendor = '/' .  $path . '/public/assets/js/built/vendor.bundle.js';

  $ti_ads_dfp_vendor = '/' .  $path . '/public/assets/js/lib/ti_ads_dfp.js';
  $mordernizr_path = '/' .  $path . '/public/assets/js/lib/modernizr.min.js';

  drupal_add_js($js_vendor, array(
    'type' => 'external',
    'scope' => 'footer',
    'weight' => -20,
    'group' => JS_DEFAULT,
    'every_page' => TRUE,
    'preprocess' => TRUE,
    'defer' => TRUE,
  ));

  drupal_add_js($js_main, array(
    'type' => 'external',
    'scope' => 'footer',
    'weight' => -20,
    'group' => JS_DEFAULT,
    'every_page' => TRUE,
    'preprocess' => TRUE,
    'defer' => TRUE,
  ));

  drupal_add_js($ti_ads_dfp_vendor, array(
    'type' => 'external',
    'scope' => 'footer',
    'weight' => -21,
    'group' => JS_DEFAULT,
    'every_page' => TRUE,
    'preprocess' => FALSE,
  ));

  drupal_add_js($mordernizr_path, array(
    'type' => 'external',
    'scope' => 'footer',
    'weight' => -22,
    'group' => JS_DEFAULT,
    'every_page' => TRUE,
    'preprocess' => FALSE,
  ));

  $outbrain_path = '//widgets.outbrain.com/outbrain.js';
  drupal_add_js($outbrain_path, array(
    'type' => 'external',
    'scope' => 'footer',
    'weight' => -21,
    'group' => JS_DEFAULT,
    'every_page' => TRUE,
    'preprocess' => FALSE,
    'async' => TRUE,
    'defer' => TRUE,
  ));

  $revsci_path = '//js.revsci.net/gateway/gw.js?csid=H07710';
  drupal_add_js($revsci_path, array(
    'type' => 'external',
    'scope' => 'footer',
    'weight' => -21,
    'group' => JS_DEFAULT,
    'every_page' => TRUE,
    'preprocess' => FALSE,
  ));

}

/**
 * Implements hook_preprocess_field().
 */
function unifiedtemplate_responsive_preprocess_field(&$variables, $hook) {
  ti_patternlab_set_field_override_suggestions($variables, $hook);
}

/**
 * Implements hook_preprocess().
 */
function unifiedtemplate_responsive_preprocess(&$variables, $hook) {

  if (!is_array($variables['theme_hook_suggestions'])) {
    $variables['theme_hook_suggestions'] = array();
  }

  // Panel Overrides.
  if ($hook == 'lsg_twocol_65_35_stacked') {
    $variables['theme_hook_suggestions'][] = 'templates-panels-' . $hook;
    if (!empty($variables['display']) && !empty($variables['display']->context)) {
      $variables['theme_hook_suggestions'][] = 'templates-panels-' . $hook;
    }
  }

  if ($hook == 'html') {
    // Add SVG inline.
    $svg_file = drupal_get_path('theme', 'unifiedtemplate_responsive') . '/pattern-lab/source/assets/img/symbols.svg';
    if (file_exists($svg_file)) {
      $svg_contents = str_replace('<svg xmlns="http://www.w3.org/2000/svg" xmlns:xlink="http://www.w3.org/1999/xlink">', '<svg xmlns="http://www.w3.org/2000/svg" xmlns:xlink="http://www.w3.org/1999/xlink" style="display:none">', file_get_contents($svg_file));
      $svg = array(
        '#type' => 'markup',
        '#markup' => $svg_contents,
      );
      $variables['page']['page_bottom']['inline_svg_sprite'] = $svg;
    }
  }

}

/**
 * Implements hook_page_alter().
 */
function unifiedtemplate_responsive_page_alter(&$page) {
  unset($page['footer']);
  unset($page['fw_rd_footer']); 
  unset($page["contextual_links"]);
  unset($page['social_sharing']);
  // Quantcast - changes the script in ti_lsg_snst_comscore.module to async,
  // Moves the revsci script to preprocess_html.
 $inline_script_fb = <<<EOL
<script type="text/javascript">
<!--//--><![CDATA[// ><!--

<!--//--><![CDATA[// ><!--
(function(d, s, id) {
  var js, fjs = d.getElementsByTagName(s)[0];
  if (d.getElementById(id)) return;
  js = d.createElement(s); js.id = id;
  js.src = "//connect.facebook.net/en_US/sdk.js#xfbml=1&version=v2.3";
  fjs.parentNode.insertBefore(js, fjs);
}(document, 'script', 'facebook-jssdk'));
//--><!]]]]><![CDATA[>

//--><!]]>
</script>
EOL;
  $element_fb = array(
    '#type' => 'markup',
    '#markup' => $inline_script_fb,
  );
  $page['page_bottom']['ti_fb'] = $element_fb;
  $inline_script = <<<EOL
<script type="text/javascript">
  var _qevents = _qevents || [];
  (function() {
    var elem = document.createElement('script');
    elem.src = (document.location.protocol == "https:" ? "https://secure" : "http://edge")  
                + ".quantserve.com/quant.js";
    elem.async = true;
    elem.type = "text/javascript";
    var scpt = document.getElementsByTagName('script')[0];
    scpt.parentNode.insertBefore(elem, scpt);  
  })();
</script> 
<script type="text/javascript">
  _qevents.push( { qacct:"p-5dyPa639IrgIw"} );
</script>
<noscript>
  <div style="display: none;">
    <img src="//pixel.quantserve.com/pixel/p-5dyPa639IrgIw.gif" height="1" width="1" alt="Quantcast"/>
  </div>
</noscript>
EOL;
  $element = array(
    '#type' => 'markup',
    '#markup' => $inline_script,
  );
  $page['page_bottom']['ti_lsg_snst_comscore'] = $element;
}

/**
 * Implements hook_css_alter().
 *
 * Removes unnecessary CSS on the page.
 *
 * @param $css
 */
function unifiedtemplate_responsive_css_alter(&$css) {
  global $theme;

  $excluded_css = array(
    'sites/all/modules/contrib/colorbox/styles/default/colorbox_style.css',
    'sites/all/modules/contrib/ctools/css/ctools.css',
    'sites/all/modules/contrib/ldap/ldap_servers/ldap_servers.admin.css',
    'sites/all/modules/contrib/panels/css/panels.css',
    'modules/system/system.menus.css',
    'modules/system/system.theme.css',
    'sites/all/modules/contrib/ldap/ldap_user/ldap_user.css',
    'sites/all/modules/contrib/date/date_api/date.css',
    'sites/all/modules/contrib/date/date_popup/themes/datepicker.1.7.css',
    'modules/field/theme/field.css',
    'modules/node/node.css',
    'modules/search/search.css',
    'modules/user/user.css',
    'sites/all/modules/contrib/views/css/views.css',
    'sites/all/modules/contrib/purr_messages/purrcss/purr.css',
    'sites/all/modules/contrib/ckeditor/css/ckeditor.css',
    'sites/all/modules/contrib/cache_consistent/css/cache_consistent.css',
    'sites/all/modules/contrib/entity_embed/css/entity_embed.css',
    'sites/all/modules/custom/workflow_content_creation_ti/ti_editorial_ckeditor_plugins/plugins/emoji/css/emoji_sprites.css',
    'sites/all/modules/custom/ti_unified_templates/ti_unified_templates_panel_layouts/plugins/layouts/ti_twocol_65_35_stacked/ti_twocol_65_35_stacked.css',
  );

  // Styles for errors and notices.
  $display_errors = variable_get('error_level', "0");
  if ($display_errors == "0") {
    $excluded_css[] = 'modules/system/system.messages.css';
  }

  if ($theme == 'unifiedtemplate_responsive' && !path_is_admin(current_path())) {
    // Clean out css.
    foreach ($excluded_css as $k => $file) {
      if (isset($css[$file])) {
        unset($css[$file]);
      }
    }
  }
}

/**
 * Implements hook_js_alter()
 *
 * Removes unnecessary JS on the page.
 *
 * @param $javascript
 */
function unifiedtemplate_responsive_js_alter(&$javascript) {
  global $theme, $user;

  $excluded_js = array(
    'http://admin.brightcove.com/js/BrightcoveExperiences.js',
    'https://sadmin.brightcove.com/js/BrightcoveExperiences.js',
    'sites/all/modules/custom/ti_amg_fwrd_custom/js/newsletters-signup.js',
    'sites/all/modules/custom/ti_amg_fwrd_article/js/fw_featured_recipes_carousel.js',
    'sites/all/modules/custom/ti_amg_fw_sponsor_logo_campaign/js/campaign.js',
    'sites/all/modules/custom/ti_amg_fwrd_article/js/jquery.contentSlider.js',
    'sites/all/modules/custom/ti_amg_fwrd_custom/css/newsletters-signup.css',
    'sites/all/modules/contrib/panels/js/panels.js',
    'sites/all/libraries/colorbox/jquery.colorbox-min.js',
    'sites/all/modules/contrib/colorbox/js/colorbox.js',
    'sites/all/modules/contrib/colorbox/styles/default/colorbox_style.js',
    'sites/all/modules/contrib/colorbox/js/colorbox_load.js',
    'sites/all/modules/contrib/colorbox/js/colorbox_inline.js',
    'sites/all/modules/custom/ti_lsg_mobile/js/mobile-detect.js',
    'sites/all/modules/contrib/prevent_js_alerts/prevent_js_alerts.js',
    'sites/all/modules/custom/ti_amg_fw_comscore/js/Brightcove-adPolicy-override.js',
    'sites/all/modules/custom/ti_amg_fw_page_sharing_social/js/facebook_init.js',
    // TEMPORARY.
   // 'sites/all/modules/custom/layouts/ti_lsg_cstl_layouts_homepage/js/ti_lsg_cstl_layouts_homepage.js',
    '0', // Inline JS for mobile redirect
    '1', // Qualroo Inline JS
  );

  $footer_js = array(
    'misc/drupal.js',
    'sites/all/modules/contrib/jquery_update/replace/jquery/1.7/jquery.min.js',
    'misc/jquery.once.js',
  );

  $footer_defer_js = array(
    'http://native.sharethrough.com/assets/tag.js',
    'sites/all/modules/custom/external_integration_ti/ti_udo/js/metadata.js',
    '//s.skimresources.com/js/58287X1374665.skimlinks.js',
  );

  if ($theme == 'unifiedtemplate_responsive' && $user->uid === 0) {
    // Clean out js.
    foreach ($excluded_js as $k => $file) {
      if (isset($javascript[$file])) {
        unset($javascript[$file]);
      }
    }

    // Remove the drupal settings
    unset($javascript['settings']);

    // Move JS to footer and defer
    foreach($footer_defer_js as $k => $file) {
      if (isset($javascript[$file])) {
        $javascript[$file]['scope'] = 'footer';
        $javascript[$file]['defer'] = TRUE;
        $javascript[$file]['every_page'] = TRUE;
        $javascript[$file]['group'] = JS_DEFAULT;
        $javascript[$file]['weight'] = -21;
      }
    }

    // Move JS to footer
    foreach($footer_js as $k => $file) {
      if (isset($javascript[$file])) {
        $javascript[$file]['scope'] = 'header';
      }
    }
  }
}
