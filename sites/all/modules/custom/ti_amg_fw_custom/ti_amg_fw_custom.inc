<?php

/**
 * @file
 * Module used for FoodAndWine customizations.
 */

/**
 * Implements hook_menu().
 */
function ti_amg_fw_custom_menu() {
  $items = array();
  $items['admin/config/foodandwine/general-settings'] = array(
    'title' => t('FW Settings'),
    'type' => MENU_NORMAL_ITEM,
    'access arguments' => array('editor settings'),
    'page callback' => 'drupal_get_form',
    'page arguments' => array('toc_settings_form'),
    'menu_name' => 'menu-ti-editorial-navbar',
    'weight' => 5,
  );
  $items['admin/config/foodandwine/general-settings/toc'] = array(
    'title' => t('TOC Settings'),
    'type' => MENU_DEFAULT_LOCAL_TASK,
    'access arguments' => array('editor settings'),
    'weight' => -10,
  );
  $items['admin/config/foodandwine/general-settings/campaign-setting'] = array(
    'title' => t('Campaign Settings'),
    'type' => MENU_LOCAL_TASK,
    'page callback' => 'drupal_get_form',
    'access arguments' => array('editor settings'),
    'page arguments' => array('ti_amg_fw_custom_campaign_setting_form'),
    'access callback' => TRUE,
    'weight' => -9,
  );
  $items['admin/config/foodandwine/general-settings/footer'] = array(
    'title' => t('Footer Settings'),
    'type' => MENU_LOCAL_TASK,
    'access arguments' => array('editor settings'),
    'page callback' => 'drupal_get_form',
    'page arguments' => array('ti_amg_fw_custom_footer_settings_form'),
    'weight' => -8,
  );

  $items['admin/config/foodandwine/general-settings/redesign_footer'] = array(
    'title' => t('Footer Settings for Redesigned Pages'),
    'type' => MENU_LOCAL_TASK,
    'access arguments' => array('editor settings'),
    'page callback' => 'drupal_get_form',
    'page arguments' => array('ti_amg_fw_custom_redesign_footer_settings_form'),
    'access callback' => TRUE,
    'weight' => -9,
  );

  $items['admin/config/foodandwine/general-settings/social_sharing'] = array(
    'title' => t('Social Sharing Settings'),
    'type' => MENU_LOCAL_TASK,
    'access arguments' => array('editor settings'),
    'page callback' => 'drupal_get_form',
    'page arguments' => array('ti_amg_fw_custom_social_sharing_settings_form'),
    'weight' => -8,
  );
  $items['admin/config/foodandwine/general-settings/classc-in-aspen-settings'] = array(
    'title' => t('Classic in Aspen Settings'),
    'type' => MENU_LOCAL_TASK,
    'access arguments' => array('editor settings'),
    'page callback' => 'drupal_get_form',
    'page arguments' => array('ti_amg_fw_custom_classic_in_aspen_settings_form'),
    'weight' => -7,
  );
  $items['admin/config/foodandwine/general-settings/swoop-ad-settings'] = array(
    'title' => t('Swoop Ad Settings'),
    'type' => MENU_LOCAL_TASK,
    'access arguments' => array('editor settings'),
    'page callback' => 'drupal_get_form',
    'page arguments' => array('swoopad_settings_form'),
    'weight' => -8,
  );
  $items['admin/config/foodandwine/general-settings/recipe-clickable-ingredients-settings'] = array(
    'title' => t('Recipe Clickable Ingredients Settings'),
    'type' => MENU_LOCAL_TASK,
    'access arguments' => array('editor settings'),
    'page callback' => 'drupal_get_form',
    'page arguments' => array('recipe_clickable_ingredients_settings_form'),
    'weight' => -8,
  );
  $items['update-slideinfo-tiudo'] = array(
    'title' => t('Update Gallery Slide Info to Tealium UDO'),
    'type' => MENU_NORMAL_ITEM,
    'page callback' => 'update_slideinfo_tiudo',
    'access callback' => TRUE,
  );
  $items['sitemap-fwx.xml'] = array(
    'page callback' => 'ti_amg_fw_custom_sitemap_fwx',
    'access callback' => TRUE,
    'type' => MENU_NORMAL_ITEM,
  );
  // To keep Rebelmouse embed code in our F&W
  // creating a menu item.
  $items['healthy-food'] = array(
    'title' => t('Healthy Food'),
    'page callback' => 'rebelmouse_healthyfood',
    'access callback' => TRUE,
    'type' => MENU_NORMAL_ITEM,
  );
  $items['admin/config/foodandwine/general-settings/spot-im-settings'] = array(
    'title' => t('Spot IM Settings'),
    'type' => MENU_LOCAL_TASK,
    'access arguments' => array('editor settings'),
    'page callback' => 'drupal_get_form',
    'page arguments' => array('ti_amg_fw_custom_spot_im_settings_form'),
    'weight' => -7,
  );
  $items['admin/config/foodandwine/general-settings/caas-most-popular-api-settings'] = array(
    'title' => t('CAAS most popular API Settings'),
    'type' => MENU_LOCAL_TASK,
    'access arguments' => array('editor settings'),
    'page callback' => 'drupal_get_form',
    'page arguments' => array('ti_amg_fw_custom_caas_most_popular_settings_form'),
    'weight' => -6,
  );
  $items['admin/config/fw_settings/video_player_settings'] = array(
    'title' => t('Brightcove Settings'),
    'description' => 'Brightcove Settings',
    'page callback' => 'ti_amg_fw_custom_video_player_settings',
    'access callback' => 'user_access',
    'access arguments' => array('access administration pages'),
  );
  return $items;
}

/**
 * Implements hook_menu().
 */
function ti_amg_fw_custom_video_player_settings() {
  return drupal_get_form('ti_amg_fw_custom_video_player_settings_form');
}

/**
 * Implements ti_amg_fw_custom_video_player_settings_form().
 */
function ti_amg_fw_custom_video_player_settings_form() {
  $form['brightcove_settings'] = array(
    '#title' => 'Brghtcove Settings',
    '#type' => 'fieldset',
  );
  $form['brightcove_settings']['brightcove_account_id'] = array(
    '#title' => t('Brightcove Account ID'),
    '#type' => 'textfield',
    '#default_value' => variable_get('brightcove_account_id', ''),
    '#maxlength' => 1024,
  );
  $form['brightcove_settings']['brightcove_player_id'] = array(
    '#title' => t('Brightcove Player ID'),
    '#type' => 'textfield',
    '#default_value' => variable_get('brightcove_player_id', ''),
    '#maxlength' => 1024,
  );
  $form['brightcove_settings']['brightcove_jumpstart_url'] = array(
    '#title' => t('Brightcove Jumpstart URL'),
    '#type' => 'textfield',
    '#default_value' => variable_get('brightcove_jumpstart_url', ''),
    '#maxlength' => 1024,
  );
  return system_settings_form($form);
}

/**
 * Implements hook_permission().
 */
function ti_amg_fw_custom_permission() {
  return array(
    'editor settings' => array(
      'title' => t('Access General Settings for Site'),
    ),
  );
}

/**
 * Implements toc_settings_form().
 */
function toc_settings_form() {
  $form['toc_settings'] = array(
    '#title' => 'TOC Page Settings',
    '#type' => 'fieldset',
  );
  $issue_month_list = array();
  $issue_month_list = toc_page_issue_dropdown();
  array_unshift($issue_month_list, 'NONE');
  $form['toc_settings']['default_month'] = array(
    '#title' => 'Default Month for TOC page',
    '#type' => 'select',
    '#options' => $issue_month_list,
    '#default_value' => variable_get('default_month', ''),
  );
  return system_settings_form($form);
}

/**
 * Implements swoopad_settings_form().
 */
function swoopad_settings_form() {
  $form['swoopad_settings'] = array(
    '#title' => 'Swoop Ad Kill Switch Settings',
    '#type' => 'fieldset',
  );
  $form['swoopad_settings']['default_swoop'] = array(
    '#type' => 'checkbox',
    '#title' => t('Include Swoop Advertisements'),
    '#default_value' => variable_get('default_swoop', ''),
  );
  return system_settings_form($form);
}

/**
 * Implements Recipe Clickable Ingredients Settings.
 */
function recipe_clickable_ingredients_settings_form() {
  $form['recipe_clickable_ingredients_settings'] = array(
    '#title' => 'Recipe Clickable Ingredients Kill Switch Settings',
    '#type' => 'fieldset',
  );
  $form['recipe_clickable_ingredients_settings']['recipe_clickable_ingredients_switch'] = array(
    '#type' => 'checkbox',
    '#title' => t('Include Recipe Clickable Ingredients'),
    '#default_value' => variable_get('recipe_clickable_ingredients_switch', ''),
  );
  return system_settings_form($form);
}
/*
 * Implements Campaign Settings.
 */
function ti_amg_fw_custom_campaign_setting_form() {
  $form = array(
    'tl_logo_link' => array(
      '#type' => 'textfield',
      '#title' => t('T&L logo URL'),
      '#description' => t('Paste Your URL Here'),
      '#rows' => 5,
      '#format' => "FULL HTML",
      '#default_value' => variable_get('tl_logo_link', ''),
    ),
    'fw_logo_link' => array(
      '#type' => 'textfield',
      '#title' => t('F&W logo URL'),
      '#description' => t('Paste Your URL Here'),
      '#rows' => 5,
      '#format' => "FULL HTML",
      '#default_value' => variable_get('fw_logo_link', ''),
    ),
    'local_flavor_link' => array(
      '#type' => 'textfield',
      '#title' => t('Local Flavor  URL'),
      '#description' => t('Paste Your URL Here'),
      '#rows' => 5,
      '#format' => "FULL HTML",
      '#default_value' => variable_get('local_flavor_link', ''),
    ),
    'local_flavor_international_link' => array(
      '#type' => 'textfield',
      '#title' => t('Local Flavor International  URL'),
      '#description' => t('Paste Your URL Here'),
      '#rows' => 5,
      '#format' => "FULL HTML",
      '#default_value' => variable_get('local_flavor_international_link', ''),
    ),
  );
  return system_settings_form($form);
}

/**
 * Implements ti_amg_fw_custom_footer_settings_form().
 */
function ti_amg_fw_custom_footer_settings_form() {
  $form = array(
    'footer_links' => array(
      '#type' => 'textarea',
      '#title' => t('Footer Links'),
      '#description' => t('Paste your HTML in this field.  ' . 'The changes you make here will go live <strong>immediately' . '</strong>, ' . 'so please make sure to test them before submitting this form.'
      ),
      '#rows' => 20,
      '#format' => "FULL HTML",
      '#default_value' =>
      variable_get('fw_footer_html', _ti_amg_fw_custom_footer_default_html()),
    ),
    'copyright_text' => array(
      '#type' => 'textarea',
      '#title' => t('Copyright Text'),
      '#description' => t('Paste your copyright HTML in this field.  ' . 'The changes you make here will go live <strong>immediately' . '</strong>, ' . 'so please make sure to test them before submitting this form.'
      ),
      '#rows' => 20,
      '#format' => "FULL HTML",
      '#default_value' =>
      variable_get('fw_footer_copyright_html', _ti_amg_fw_custom_footer_copyright_default_html()),
    ),
    'mobile_footer' => array(
      '#type' => 'textarea',
      '#title' => t('Mobile Footer'),
      '#description' => t('Paste your copyright HTML in this field.  ' . 'The changes you make here will go live <strong>immediately' . '</strong>, ' . 'so please make sure to test them before submitting this form.'
      ),
      '#rows' => 20,
      '#format' => "FULL HTML",
      '#default_value' =>
      variable_get('fw_footer_mobile_html', _ti_amg_fw_custom_footer_mobile_html()),
    ),
    'actions' => array(
      '#type' => 'actions',
      'submit' => array(
        '#type' => 'submit',
        '#value' => t('Publish Footer'),
        '#submit' => array('ti_amg_fw_custom_admin_submit'),
      ),
      'panic_button' => array(
        '#type' => 'submit',
        '#value' => t('Restore Default Footer'),
        '#submit' => array('ti_amg_fw_custom_panic_submit'),
      ),
    ),
  );
  return $form;
}

/**
 * Implements ti_amg_fw_custom_redesign_footer_settings_form().
 */
function ti_amg_fw_custom_redesign_footer_settings_form() {
  $form = array(
    'redesign_footer_links' => array(
      '#type' => 'textarea',
      '#title' => t('Footer Links'),
      '#description' => t('Paste your HTML in this field.  ' . 'The changes you make here will go live <strong>immediately' . '</strong>, ' . 'so please make sure to test them before submitting this form.'
      ),
      '#rows' => 20,
      '#format' => "FULL HTML",
      '#default_value' =>
      variable_get('fw_redesign_footer', _ti_amg_fw_custom_redesign_footer_default_html()),
    ),
    'actions' => array(
      '#type' => 'actions',
      'submit' => array(
        '#type' => 'submit',
        '#value' => t('Publish Footer'),
        '#submit' => array('ti_amg_fw_custom_redesign_footer_admin_submit'),
      ),
      'panic_button' => array(
        '#type' => 'submit',
        '#value' => t('Restore Default Footer'),
        '#submit' => array('ti_amg_fw_custom_redesign_footer_panic_submit'),
      ),
    ),
  );
  return $form;
}

/**
 * Implements ti_amg_fw_custom_admin_submit().
 */
function ti_amg_fw_custom_admin_submit($form, &$form_state) {
  $footer = $form_state['input']['footer_links'];
  $footer_copyright = $form_state['input']['copyright_text'];
  $footer_mobile = $form_state['input']['copyright_text'];
  variable_set('fw_footer_html', $footer);
  variable_set('fw_footer_copyright_html', $footer_copyright);
  variable_set('fw_footer_mobile_html', $footer_mobile);
  drupal_set_message(t('New footer HTML has been saved.'), 'status');
}

/**
 * Allow user to restore default footer.
 */
function ti_amg_fw_custom_panic_submit($form, &$form_state) {
  $default_footer = _ti_amg_fw_custom_footer_default_html();
  $default_footer_copyright = _ti_amg_fw_custom_footer_copyright_default_html();
  $mobile_footer = _ti_amg_fw_custom_footer_mobile_html();
  variable_set('fw_footer_html', $default_footer);
  variable_set('fw_footer_copyright_html', $default_footer_copyright);
  variable_set('fw_footer_mobile_html', $mobile_footer);
  drupal_set_message(t('Default values have been restored'), 'status');
}

/**
 * Form for configuring social share settings.
 */
function ti_amg_fw_custom_social_sharing_settings_form() {
  $form = array(
    'social_sharing_links' => array(
      '#type' => 'textarea',
      '#title' => t('social_sharing Links'),
      '#description' => t('Paste your HTML in this field.  ' . 'The changes you make here will go live <strong>immediately' . '</strong>, ' . 'so please make sure to test them before submitting this form.'
      ),
      '#rows' => 20,
      '#format' => "FULL HTML",
      '#default_value' =>
      variable_get('fw_social_sharing_html', _ti_amg_fw_custom_social_sharing_default_html()),
    ),
    'actions' => array(
      '#type' => 'actions',
      'submit' => array(
        '#type' => 'submit',
        '#value' => t('Publish social_sharing'),
        '#submit' => array('ti_amg_fw_custom_social_sharing_admin_submit'),
      ),
      'panic_button' => array(
        '#type' => 'submit',
        '#value' => t('Restore Default social_sharing'),
        '#submit' => array('ti_amg_fw_custom_social_sharing_panic_submit'),
      ),
    ),
  );
  return $form;
}

/**
 * Custom submit for social sharing.
 */
function ti_amg_fw_custom_social_sharing_admin_submit($form, &$form_state) {
  $social_sharing = $form_state['input']['social_sharing_links'];
  variable_set('fw_social_sharing_html', $social_sharing);
  drupal_set_message(t('New social_sharing HTML has been saved.'), 'status');
}

/**
 * Custom submit for footer.
 */
function ti_amg_fw_custom_redesign_footer_admin_submit($form, &$form_state) {
  $redesign_footer = $form_state['input']['redesign_footer_links'];
  variable_set('fw_redesign_footer', $redesign_footer);
  drupal_set_message(t('New Footer HTML has been saved.'), 'status');
}

/**
 * Allow user to restore default social_sharing.
 */
function ti_amg_fw_custom_social_sharing_panic_submit($form, &$form_state) {
  $default_social_sharing = _ti_amg_fw_custom_social_sharing_default_html();
  variable_set('fw_social_sharing_html', $default_social_sharing);
  drupal_set_message(t('Default values have been restored'), 'status');
}

/**
 * Allow user to restore default footer.
 */
function ti_amg_fw_custom_redesign_footer_panic_submit($form, &$form_state) {
  $redesign_default_footer = _ti_amg_fw_custom_redesign_footer_default_html();
  variable_set('fw_redesign_footer', $redesign_default_footer);
  drupal_set_message(t('Default Footer have been restored'), 'status');
}

/**
 * Implements hook_page_alter().
 */
function ti_amg_fw_custom_page_alter(&$page) {
  // Phone device.
  if (isset($_COOKIE['TI_PREFS']) && ($_COOKIE['TI_PREFS'] == 'phone')) {
    $page['footer'] = variable_get('fw_footer_mobile_html', _ti_amg_fw_custom_footer_mobile_html());
  }
  // Normal footer.
  else {
    $page['footer'] = variable_get('fw_footer_html', _ti_amg_fw_custom_footer_default_html());
    $page['footer'] = $page['footer'] . variable_get('fw_footer_copyright_html', _ti_amg_fw_custom_footer_copyright_default_html());
  }
  $page['fw_rd_footer'] = variable_get('fw_redesign_footer', _ti_amg_fw_custom_redesign_footer_default_html());
  $page['social_sharing'] = variable_get('fw_social_sharing_html', _ti_amg_fw_custom_social_sharing_default_html());
}

/**
 * Default text for social sharing.
 */
function _ti_amg_fw_custom_social_sharing_default_html() {
  // Set default footer links html.
  $social_sharing_html = <<<EOD
<div id='newsy-bits'>
    <div id="social-media">
        <ul id="media-links">
            <li id="facebook-medialink">
                <a href="http://www.facebook.com/foodandwine" target="_blank" title="Facebook"></a>
            </li>
            <li id="twitter-medialink"><a href="https://twitter.com/foodandwine" target="_blank" title="Twitter">
                </a>
            </li>
            <li id="pinterest-medialink">
                <a href="http://www.pinterest.com/foodandwine" target="_blank" title="Pinterest"></a>
            </li>
            <li id="tumblr-medialink">
                <a href="http://foodandwine.tumblr.com" target="_blank" title="Tumblr"></a>
            </li>
            <li id="instagram-medialink">
                <a href="http://instagram.com/foodandwine" target="_blank" title="Instagram"></a>
            </li>
            <li id="gplus-medialink">
                <a href="https://plus.google.com/+foodandwine/posts" target="_blank" title="Gplus"></a>
            </li>
        </ul>
    </div>
</div>
EOD;
  return $social_sharing_html;
}

/**
 * Default text for footer links.
 */
function _ti_amg_fw_custom_footer_default_html() {
  // Set default footer links html.
  $footer_html = <<<EOD
<div class="wrapper container">
    <ul class="table">
      <li>
        <ul class="link-column">
          <li>
            <p class="column-title">Holidays &amp; Occasions</p>
            <ul class="links">
                <li><a title="Thanksgiving Recipes" href="/ultimate-thanksgiving">Thanksgiving Recipes</a></li>
                <li><a title="Christmas Recipes" href="/holiday-guide"> Christmas Recipes</a></li>
                <li><a title="Halloween Recipes" href="/halloween-recipes">Halloween Recipes</a></li>
                <li><a title="Brunch Recipes" href="/brunch-recipes"> Brunch Recipes</a></li>
                <li><a title="Mardi Gras Recipes" href="/mardi-gras-recipes">Mardi Gras Recipes</a></li>
                <li><a title="Passover Recipes" href="/passover-recipes"> Passover Recipes</a></li>
                <li><a title="Easter Recipes" href="/easter-recipes">Easter Recipes</a></li>
                <li><a title="Cinco de Mayo Recipes" href="/cinco-de-mayo-recipes">Cinco de Mayo Recipes</a></li>
                <li><a title="Mother's Day" href="/mothers-day-recipes">Mother's Day</a></li>
                <li><a title="4th of July Recipes" href="/4th-of-july-recipes">4th of July Recipes</a></li>
                <li><a title="4th of July Desserts" href="/4th-of-july-desserts">4th of July Desserts</a></li>
            </ul>
          </li>
        </ul>
        <ul class = "link-column">
          <li>
            <p class="column-title">Cuisines</p>
            <ul class="links">
                <li><a title="Mexican Recipes" href="/mexican-recipes"> Mexican Recipes</a></li>
                <li><a title="Italian Recipes" href="/italian-recipes"> Italian Recipes</a></li>
                <li><a title="French Recipes" href="/french-recipes"> French Recipes</a></li>
            </ul>
          </li>
        </ul>
        <ul class="link-column">
          <li>
            <p class="column-title">Popular Ingredients</p>
            <ul class="links">
                <li><a title="Chicken Recipes" href="/chicken-recipes"> Chicken Recipes</a></li>
                <li><a title="Beef Recipes" href="/beef-recipes"> Beef Recipes</a></li>
                <li><a title="Quinoa Recipes" href="/slideshows/quinoa-recipes"> Quinoa Recipes</a></li>
                <li><a title="Chicken Breast Recipes" href="/slideshows/chicken-breasts"> Chicken Breast Recipes</a></li>
                <li><a title="Pasta Recipes" href="/pasta-recipes"> Pasta Recipes</a></li>
                <li><a title="Dessert Recipes" href="/dessert-recipes"> Dessert Recipes</a></li>
                <li><a title="Healthy Recipes" href="/healthy-recipes"> Healthy Recipes</a></li>
                <li><a title="Fish Recipes" href="/fish-recipes"> Fish Recipes</a></li>
            </ul>
          </li>
        </ul>
        <ul class="link-column">
          <li>
            <p class="column-title">Subscribe</p>
            <ul class="links">
                <li><a title="Subscribe to Food &amp; Wine" target="_blank" href="https://subscription.foodandwine.com/storefront/subscribe-to-food-and-wine/link/1023066.html"> Subscribe to Food &amp; Wine</a></li>
                <li><a title="Give a Gift Subscription" target="_blank" href="https://subscription.foodandwine.com/storefront/subscribe-to-food-and-wine/link/1023067.html"> Give a Gift Subscription</a></li>
                <li><a title="Food &amp; Wine Books" href="/books"> Food &amp; Wine Books</a></li>
                <li><a title="Get Food &amp; Wine iPad Edition" target="_blank" href="http://itunes.apple.com/us/app/food-wine/id391100624"> Get Food &amp; Wine iPad Edition</a></li>
                <li><a title="Get Food &amp; Wine Mobile Apps" href="/mobile-apps"> Get F&amp;W Mobile Apps</a></li>
                <li></li>
            </ul></li>
            <li>
            <p class="column-title">Clubs &amp; Events</p>
            <ul class="links">
                <li><a title="Food &amp; Wine Connoisseur Club" target="_blank" href="https://www.theconnoisseurclub.com/"> Food &amp; Wine Connoisseur Club</a></li>               
                <li><a title="Food &amp; Wine Events" href="/promo/events"> Events</a></li>
            </ul></li>
        </ul>
        <ul class="link-column">
          <li>
            <p class="column-title">Contact</p>
            <ul class="links">
                <li><a title="Customer Service" target="_blank" href="https://secure.customersvc.com/servlet/Show?WESPAGE=pe/home.html&MSRSMAG=WI"> Customer Service</a></li>
                <li><a title="Contact Us" href="/contact"> Contact Us</a></li>
                <li><a title="Advertising" target="_blank" href="http://www.fwmediakit.com/"> Advertising</a></li>
            </ul>
          </li>
        </ul>
        <ul class="link-column">
          <li>
            <p class="column-title">Time Inc.
                <br>Affluent Media Group
            </p></li>
          <li>
            <ul class="links">
                <li><a href="http://www.travelandleisure.com/" target="_blank" title="Travel + Leisure">Travel + Leisure</a></li>
                <li><a href="http://departures.com/" target="_blank" title="Departures Magazine"> Departures</a></li>
                <li>Black Ink</li>
            </ul></li>
            <li>
            <div class="site-map">
                <a href="/sitemap" title="Site Map">Site Map
                </a>
            </div></li>
        </ul>
      </li>
    </ul>
</div>
EOD;
  return $footer_html;
}

/**
 * Default text for footer links.
 */
function _ti_amg_fw_custom_redesign_footer_default_html() {
  global $base_url;
  $img_link = 'http://www.foodandwine.com/' . drupal_get_path('module', 'ti_amg_fwrd_custom')
           . '/img/spritemap.svg#fw-logo';
  // Set default footer links html.
  $redesign_footer_html = <<<EOD
    <div class="footer omniture_global_set-processed omniture_set-processed">
  <div class="footer__content page-container">
    <a class="footer__logo" href="/">
      <svg viewBox="0 0 332 44" title="Food and Wine" role="img">
        <use xlink:href=" 
           $img_link"></use>
      </svg>
    </a>
    <div>
      <div class="footer__column">
        <p class="footer__column__title">Holidays &amp; Occasions</p>
        <ul class="footer__column__links">
          <li><a href="/st-patricks-day-recipes" title="St Patrick's Day Recipes">St Patrick's Day Recipes</a></li>
          <li><a href="/super-bowl-recipes" title="Super Bowl Recipes">Super Bowl Recipes</a></li>
          <li><a href="/chinese-new-year" title="Chinese New Year Recipes">Chinese New Year Recipes</a></li>
          <li><a href="/valentines-day" title="Valentine's Day Recipes">Valentine's Day Recipes</a></li>
          <li><a href="/ultimate-thanksgiving" title="Thanksgiving Recipes">Thanksgiving Recipes</a></li>
          <li><a href="/holiday-guide" title="Christmas Recipes"> Christmas Recipes</a></li>
          <li><a href="/halloween-recipes" title="Halloween Recipes">Halloween Recipes</a></li>
          <li><a href="/brunch-recipes" title="Brunch Recipes"> Brunch Recipes</a></li>
          <li><a href="/mardi-gras-recipes" title="Mardi Gras Recipes">Mardi Gras Recipes</a></li>          
          <li><a href="/easter-recipes" title="Easter Recipes">Easter Recipes</a></li>
          <li><a href="/cinco-de-mayo-recipes" title="Cinco de Mayo Recipes">Cinco de Mayo Recipes</a></li>
          <li><a href="/mothers-day-recipes" title="Mother's Day">Mother's Day</a></li>
          <li><a href="/4th-of-july-recipes" title="4th of July Recipes">4th of July Recipes</a></li>          
        </ul>
      </div>
      <div class="footer__column">
        <p class="footer__column__title">Cuisines</p>
        <ul class="footer__column__links">
            <li><a href="/mexican-recipes" title="Mexican Recipes"> Mexican Recipes</a></li>
            <li><a href="/italian-recipes" title="Italian Recipes"> Italian Recipes</a></li>
            <li><a href="/french-recipes" title="French Recipes"> French Recipes</a></li>
        </ul>
        <p class="footer__column__title">Popular Ingredients</p>
        <ul class="footer__column__links">
            <li><a href="/chicken-recipes" title="Chicken Recipes"> Chicken Recipes</a></li>
            <li><a href="/beef-recipes" title="Beef Recipes"> Beef Recipes</a></li>
            <li><a href="/slideshows/quinoa-recipes" title="Quinoa Recipes"> Quinoa Recipes</a></li>
            <li><a href="/slideshows/chicken-breasts" title="Chicken Breast Recipes"> Chicken Breast Recipes</a></li>
            <li><a href="/pasta-recipes" title="Pasta Recipes"> Pasta Recipes</a></li>
            <li><a href="/dessert-recipes" title="Dessert Recipes"> Dessert Recipes</a></li>
            <li><a href="/healthy-recipes" title="Healthy Recipes"> Healthy Recipes</a></li>
            <li><a href="/fish-recipes" title="Fish Recipes"> Fish Recipes</a></li>
        </ul>
      </div>
      <div class="footer__column">
        <p class="footer__column__title">Subscribe</p>
        <ul class="footer__column__links">
            <li><a href="https://subscription.foodandwine.com/storefront/subscribe-to-food-and-wine/link/1023066.html" target="_blank" title="Subscribe to Food &amp; Wine"> Subscribe to Food &amp; Wine</a></li>
            <li><a href="https://subscription.foodandwine.com/storefront/subscribe-to-food-and-wine/link/1023067.html" target="_blank" title="Give a Gift Subscription"> Give a Gift Subscription</a></li>
            <li><a href="/books" title="Food &amp; Wine Books"> Food &amp; Wine Books</a></li>
            <li><a href="http://itunes.apple.com/us/app/food-wine/id391100624" target="_blank" title="Get Food &amp; Wine iPad Edition"> Get Food &amp; Wine iPad Edition</a></li>
            <li><a href="/mobile-apps" title="Get Food &amp; Wine Mobile Apps"> Get F&amp;W Mobile Apps</a></li>
        </ul>
        <p class="footer__column__title">Clubs &amp; Events</p>
        <ul class="footer__column__links">
            <li><a href="https://www.theconnoisseurclub.com/" target="_blank" title="Food &amp; Wine Connoisseur Club"> Food &amp; Wine Connoisseur Club</a></li>            
            <li><a href="/promo/events" title="Food &amp; Wine Events"> Events</a></li>
        </ul>         
      </div>
      <div class="footer__column">
        <p class="footer__column__title">Contact</p>
        <ul class="footer__column__links">
            <li><a href="https://secure.customersvc.com/servlet/Show?WESPAGE=pe/home.html&amp;MSRSMAG=WI" target="_blank" title="Customer Service"> Customer Service</a></li>
            <li><a href="/contact" title="Contact Us"> Contact Us</a></li>
            <li><a href="http://www.fwmediakit.com/" target="_blank" title="Advertising"> Advertising</a></li>
        </ul>
        <p class="footer__column__title">Time Inc.
            <br>Affluent Media Group
        </p>
        <ul class="footer__column__links">
          <li><a title="Travel + Leisure" target="_blank" href="http://www.travelandleisure.com/">Travel + Leisure</a></li>
          <li><a title="Departures Magazine" target="_blank" href="http://departures.com/"> Departures</a></li>
          <li>Centurion</li>
          <li><a title="Site Map" href="/sitemap">Site Map</a></li>
        </ul>
      </div>
    </div>
  </div>
  
  <div class="footer__terms">
    <div class="footer__terms__content page-container">
      <p>View Website <a href="https://subscription.foodandwine.com/storefront/privacy/foodwine/privacy_terms_service.html">Terms and Conditions</a> and <a href="https://subscription.foodandwine.com/storefront/privacy/foodwine/generic_privacy_new.html">Privacy Policy</a>. <a href="https://subscription.foodandwine.com/storefront/privacy/foodwine/generic_privacy_new.html?dnp-source=E#california">Your California Privacy Rights</a>. <a href="http://subscription-assets.timeinc.com/prod/assets/themes/magazines/default/template-resources/html/legal/ti-corp-behavioral.html">Ad Choices</a>.<br> 
Users of this site agree to be bound by the <a href="https://subscription.foodandwine.com/storefront/privacy/foodwine/privacy_terms_service.html">Website Terms and Conditions</a> and <a href="https://subscription.foodandwine.com/storefront/privacy/foodwine/generic_privacy_new.html">Privacy Policy</a>.
      <br/><span>
        All products and services featured are selected by our editors. Food & Wine may receive compensation for some links to products and services on this website.
      </span><br/>
        &copy; Time Inc. Affluent Media Group. All rights reserved.</p>
    </div>
  </div>
</div>
EOD;
  return $redesign_footer_html;
}

/**
 * Default text for footer copyright.
 */
function _ti_amg_fw_custom_footer_copyright_default_html() {
  // Set default copyright html.
  $footer_copyright_html = <<<EOD
    <div class="wrapper container">
    <div class="terms">
        <p>
            <a style="text-decoration:underline;" title="Terms of Use" target="_blank" href="https://subscription.foodandwine.com/storefront/privacy/foodwine/privacy_terms_service.html">Website Terms and Conditions</a> and <a style="text-decoration:underline;" title="Privacy Policy" target="_blank" href="https://subscription.foodandwine.com/storefront/privacy/foodwine/generic_privacy_new.html?dnp-source=E">Privacy Policy</a>. <a style="text-decoration:underline;" target="_blank" href="https://subscription.foodandwine.com/storefront/privacy/foodwine/generic_privacy_new.html?dnp-source=E#california">Your California Privacy Rights.</a>
            <a style="text-decoration:none !important" target="_blank" href="http://www.foodandwine.com/promo/privacy/amg-behavioral.html" id="_bapw-link"><span style="vertical-align:middle !important;font-weight:bold">Ad Choices</span>
                <img style="border:0 !important;display:inline !important;vertical-align:middle !important;margin-left:5px" id="_bapw-icon" src="http://cdn.betrad.com/pub/icon1.png"></a>
        </p>
        <p>
            Users of this site agree to be bound by the
            <a style="text-decoration:underline;" href="https://subscription.foodandwine.com/storefront/privacy/foodwine/privacy_terms_service.html" target="_blank" title="Terms of Use">Website Terms and Conditions</a> and <a style="text-decoration:underline;" href="https://subscription.foodandwine.com/storefront/privacy/foodwine/generic_privacy_new.html?dnp-source=E" target="_blank" title="Privacy Policy">Privacy Policy.
            </a>
        </p><br/>
        <p class="copy-text">
          All products and services featured are selected by our editors. Food & Wine may receive compensation for some links to products and services on this website.
        </p><br/>
        <p>
          &copy; Time Inc. Affluent Media Group. All rights reserved.
        </p>
    </div>
</div>
EOD;
  return $footer_copyright_html;
}

/**
 * Default text for mobile footer.
 */
function _ti_amg_fw_custom_footer_mobile_html() {
  // Set default copyright html.
  $footer_mobile_html = <<<EOD
    <div class="wrapper container">
    <div class="terms">
        <p>
            <a style="text-decoration:underline;" title="Terms of Use" target="_blank" href="https://subscription.foodandwine.com/storefront/privacy/foodwine/privacy_terms_service.html">Website Terms and Conditions</a> and <a style="text-decoration:underline;" title="Privacy Policy" target="_blank" href="https://subscription.foodandwine.com/storefront/privacy/foodwine/generic_privacy_new.html?dnp-source=E">Privacy Policy</a>. <a style="text-decoration:underline;" target="_blank" href="https://subscription.foodandwine.com/storefront/privacy/foodwine/generic_privacy_new.html?dnp-source=E#california">Your California Privacy Rights.</a>
            <a style="text-decoration:none !important" target="_blank" href="http://www.foodandwine.com/promo/privacy/amg-behavioral.html" id="_bapw-link"><span style="vertical-align:middle !important;font-weight:bold">Ad Choices</span>
                <img style="border:0 !important;display:inline !important;vertical-align:middle !important;margin-left:5px" id="_bapw-icon" src="http://cdn.betrad.com/pub/icon1.png"></a>
        </p>
        <p>
            Users of this site agree to be bound by the
            <a style="text-decoration:underline;" href="https://subscription.foodandwine.com/storefront/privacy/foodwine/privacy_terms_service.html" target="_blank" title="Terms of Use">Website Terms and Conditions</a> and <a style="text-decoration:underline;" href="https://subscription.foodandwine.com/storefront/privacy/foodwine/generic_privacy_new.html?dnp-source=E" target="_blank" title="Privacy Policy">Privacy Policy.
            </a>
        </p><br/>
      <p class="copy-text">
        All products and services featured are selected by our editors. Food & Wine may receive compensation for some links to products and services on this website.
      </p><br/>
        <p>
          &copy; Time Inc. Affluent Media Group. All rights reserved.
        </p>
        <p class="info">13.50-20150130192902</p>
    </div>
</div>
EOD;
  return $footer_mobile_html;
}

/**
 * Generate sitemap for fwx.
 */
function ti_amg_fw_custom_sitemap_fwx() {
  $content = '<?xml version="1.0" encoding="UTF-8"?>';
  $content .= '<?xml-stylesheet type="text/xsl" href="/sitemap.xsl"?>';
  // Get content from fwx sitemap.
  $fwx_sitemap_url = 'http://www.foodandwine.com/fwx/sitemap.xml';
  $array = get_headers($fwx_sitemap_url);
  $string = $array[0];
  if (strpos($string, "200")) {
    $raw = file_get_contents($fwx_sitemap_url, FALSE, $context);
    $raw = str_replace('<?xml version="1.0" encoding="UTF-8"?>', '', $raw);
    $raw = str_replace('<?xml-stylesheet type="text/xsl" href="http://www.foodandwine.com/fwx/sitemap.xsl"?>', '', $raw);
    $content .= $raw;
  }
  else {
    $content .= '<urlset xmlns="http://www.sitemaps.org/schemas/sitemap/0.9"></urlset>';
  }
  drupal_add_http_header('Content-Type', 'text/xml; charset=utf-8');
  print $content;
  drupal_exit();
}

/**
 * Call back function for /healthy-food.
 */
function rebelmouse_healthyfood() {
  return '';
}

/**
 * Function to create aspen setting form.
 */
function ti_amg_fw_custom_classic_in_aspen_settings_form() {
  $form['classic_aspen_header_title'] = array(
    '#type' => 'textfield',
    '#title' => t('Classic in Aspen Header Title'),
    '#default_value' => variable_get('classic_aspen_header_title', ''),
  );
  $form['classic_aspen_sub_title'] = array(
    '#type' => 'textfield',
    '#title' => t('Classic in Aspen Sub Title'),
    '#default_value' => variable_get('classic_aspen_sub_title', ''),
  );
  $form['classic_aspen_cta'] = array(
    '#title' => 'CTA',
    '#type' => 'fieldset',
  );
  $form['classic_aspen_cta']['classic_aspen_cta_title'] = array(
    '#type' => 'textfield',
    '#title' => t('CTA Title'),
    '#default_value' => variable_get('classic_aspen_cta_title', ''),
  );
  $form['classic_aspen_cta']['classic_aspen_cta_link'] = array(
    '#type' => 'textfield',
    '#title' => t('CTA Link'),
    '#default_value' => (valid_url(variable_get('classic_aspen_cta_link', ''))) ? variable_get('classic_aspen_cta_link', '') : '',
    '#rules' => array('url'),
  );
  $form['classic_aspen_cta']['cta_enable_red'] = array(
    '#type' => 'checkbox',
    '#title' => t('Make the CTA link to red color'),
    '#default_value' => variable_get('cta_enable_red', ''),
  );
  $form['classic_aspen_cta']['cta_new_window'] = array(
    '#type' => 'checkbox',
    '#title' => t('Open the CTA link in new window'),
    '#default_value' => variable_get('cta_new_window', ''),
  );
  $form['classic_aspen_sponser'] = array(
    '#title' => 'Sponser Details',
    '#type' => 'fieldset',
  );
  $form['classic_aspen_sponser']['classic_aspen_sponser_text'] = array(
    '#type' => 'textfield',
    '#title' => t('Sponser Text'),
    '#default_value' => variable_get('classic_aspen_sponser_text', ''),
  );
  $form['classic_aspen_sponser']['classic_aspen_sponser_img'] = array(
    '#type' => 'managed_file',
    '#default_value' => variable_get('classic_aspen_sponser_img', ''),
    '#required' => TRUE,
    '#description' => t('Upload an image'),
    '#upload_location' => 'public://',
    '#theme' => 'ti_amg_fw_custom_thumb_upload',
    '#upload_validators' => array(
      'file_validate_is_image' => array(),
      'file_validate_extensions' => array('jpg jpeg gif png'),
    ),
  );
  $form['classic_aspen_home_link'] = array(
    '#title' => 'Classic Aspen Homepage URL',
    '#type' => 'fieldset',
  );
  $form['classic_aspen_home_link']['classic_home_url'] = array(
    '#type' => 'textfield',
    '#title' => t('Classic Aspen Homepage URL'),
    '#default_value' => (valid_url(variable_get('classic_home_url', ''))) ? variable_get('classic_home_url', '') : '',
    '#rules' => array('url'),
  );
  $form['#submit'][] = 'ti_amg_fw_custom_classic_in_aspen_settings_form_submit';
  return system_settings_form($form);
}

/**
 * Function to thumb upload.
 */
function theme_ti_amg_fw_custom_thumb_upload($variables) {
  $element = $variables['element'];
  $output = '';
  $output .= '<div class="image-widget form-managed-file clearfix">';
  if ($element['fid']['#value'] != 0) {
    $output .= '<div class="image-preview">';
    // Even though I was uploading to public:
    // the $element uri was pointing to temporary:
    // system, so the path to the preview image was a 404.
    $output .= theme('image_style', array(
      'style_name' => 'thumbnail',
      'path' => 'public://' . $element['#file']->filename,
      'getsize' => FALSE,
    )
    );
    $output .= '</div>';
  }
  $output .= '<div class="image-widget-data">';
  if ($element['fid']['#value'] != 0) {
    $element['filename']['#markup'] .= ' <span class="file-size">(' . format_size($element['#file']->filesize) . ')</span> ';
  }
  // The remove button is already taken care of by rendering  rest of the form.
  // No need to hack up some HTML!
  $output .= drupal_render_children($element);
  $output .= '</div>';
  $output .= '</div>';
  return $output;
}

/**
 * Form_submit handler for classic aspen settings form.
 *
 * Changing the staus of uploaded sponsor logo to permanenet.
 */
function ti_amg_fw_custom_classic_in_aspen_settings_form_submit(&$form, &$form_state) {
  // Changing the uploaded file staus as permanent.
  if (!empty($form_state['values']['classic_aspen_sponser_img'])) {
    $file = file_load($form_state['values']['classic_aspen_sponser_img']);
    if ($file->status == 0) {
      $file->status = FILE_STATUS_PERMANENT;
      file_save($file);
      file_usage_add($file, 'ti_amg_fw_custom', 'classic_aspen_settings', 1);
    }
  }
}

/**
 * Spot IM Configuration Settings for Editor.
 */
function ti_amg_fw_custom_spot_im_settings_form() {
  // Settings for Spot-IM in Food&Wine.
  $form['spotim_enable'] = array(
    '#title' => 'Spot-IM Settings',
    '#type' => 'fieldset',
  );
  $form['spotim_enable']['spot_id'] = array(
    '#type' => 'textfield',
    '#title' => t('Spot ID'),
    '#default_value' => variable_get('spot_id', ''),
  );
  $form['spotim_enable']['enable_spot_im'] = array(
    '#type' => 'checkbox',
    '#title' => t('Enable Spot-IM in F&W.'),
    '#default_value' => variable_get('enable_spot_im', TRUE),
  );
  $form['spotim_enable']['schema_api'] = array(
    '#type' => 'textfield',
    '#title' => t('Schema API'),
    '#default_value' => variable_get('schema_api', ''),
  );
  $form['spotim_enable']['spotim_log_file'] = array(
    '#type' => 'textfield',
    '#title' => t('Log file'),
    '#description' => t('Provided log file will be created at sites/default/files'),
    '#default_value' => variable_get('spotim_log_file', ''),
  );
  $form['spotim_enable']['enable_custom_log'] = array(
    '#type' => 'checkbox',
    '#title' => t('Enable custom log to store issues on connecting schema API.'),
    '#default_value' => variable_get('enable_custom_log', FALSE),
  );
  return system_settings_form($form);
}

// CAAS API configuration.
function ti_amg_fw_custom_caas_most_popular_settings_form() {
  $form['caas_most_popular_api'] = array(
    '#type' => 'textfield',
    '#title' => t('CASS MOST POPULAR API'),
    '#default_value' => variable_get('caas_most_popular_api',''),
  );
  return system_settings_form($form);
}
