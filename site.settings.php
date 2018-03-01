<?php
/**
 * Set session lifetime (in seconds), i.e. the time from the user's last visit
 * to the active session may be deleted by the session garbage collector. When
 * a session is deleted, authenticated users are logged out, and the contents
 * of the user's $_SESSION variable is discarded.
 */
//ini_set('session.gc_maxlifetime', 43200); //resetting to 12 hrs

/**
 * Set session cookie lifetime (in seconds), i.e. the time from the session is
 * created to the cookie expires, i.e. when the browser is expected to discard
 * the cookie. The value 0 means "until the browser is closed".
 */
//ini_set('session.cookie_lifetime', 43200);

// Set jQuery Update to use 1.7
$conf['jquery_update_jquery_version'] = '1.7';

$conf['ti_amg_migrate_domain'] = 'foodandwine.com';

// Disable "Poorman's Cron"
$conf['cron_safe_threshold'] = 0; // Set cron to "Never" so it only happens when manually triggered
// Get Environment info.
$env = getenv("TI_ENV") ? : $_ENV['TI_ENV'];

// Provide environment information globally
$conf['environment'] = $env;

// Use Memcache for all caches.
// AH will set the proper servers. local must do so explicitly.
if ($env == "local") {
    $conf['cache_backends'][] = './sites/all/modules/contrib/memcache/memcache.inc';
    $conf['cache_default_class'] = 'MemCacheDrupal';
    $conf['cache_class_cache_form'] = 'DrupalDatabaseCache';
    $conf['memcache_servers'] = array('localhost:11211' => 'default');

    // Add Varnish support on local only; this is in the reference platform.
    $conf['reverse_proxy'] = TRUE;
}


/**
 * Choose an appropriate SOLR index by environment.
 */
switch ($env) {
    case 'local':
        $conf['apachesolr_default_environment'] = 'site_search';
        break;
}

/**
 * Omniture variables not environment specific
 */
$conf['ti_amg_omniture_reporting_company_name'] = 'Time Inc';
$conf['ti_amg_omniture_reporting_secret'] = '162f07ac0589e954b6679af2f7b81f51';
$conf['ti_amg_omniture_reporting_username'] = 'spcdigital:Time Inc';
$conf['ti_amg_omniture_reporting_period'] = '30 days';
$conf['ti_amg_omniture_reporting_number_results'] = '30';
$conf['ti_amg_omniture_reporting_content_types'] = 'Foodandwine';
$conf['ti_amg_omniture_reporting_report_json'] = '
  {
  "reportDescription": {
    "reportSuiteID": "timefoodandwinenew",
    "dateFrom":"2013-09-22",
    "dateTo":"2013-10-23",
    "date": "2013-08-20",
    "sortBy":"pageViews",
    "validate":"true",
    "metrics":[
      {
        "id":"instances"
      }
    ],
    "elements":[
      {
        "id":"prop7",
        "top": "50"
      }
    ]
  }
}
';
/**
 * Set the omniture suite based on environment.
 * the $conf variable will override the configuration screens variables
 */
switch ($env) {
    case 'local':
        $conf['ti_amg_omniture_reporting_suite'] = 'timefoodandwinelocal';
        $conf['ti_amg_omniture_reporting_suite_mobile'] = 'timefoodandwinelocalmobile';
        break;
    case 'dev':
        $conf['ti_amg_omniture_reporting_suite'] = 'timefoodandwinenewdev';
        $conf['ti_amg_omniture_reporting_suite_mobile'] = 'timefoodandwinelocalmobile';
        break;
    case 'qa':
        $conf['ti_amg_omniture_reporting_suite'] = 'timefoodandwinenewqa';
        $conf['ti_amg_omniture_reporting_suite_mobile'] = 'timefoodandwinelocalmobile';
        break;
    case 'prod':
        $conf['ti_amg_omniture_reporting_suite'] = 'timefoodandwinenew';
        $conf['ti_amg_omniture_reporting_suite_mobile'] = 'timefoodandwinemobile';

        break;
    default:
        break;
}

/**
 * Set the correct ka js server reference and global js reference based on environment
 */
switch ($env) {
    case 'local':
    case 'dev':
        $conf['ti_amg_fw_core_ka_script'] = 'http://dev-imgka.foodandwine.com/javascripts';
        $conf['ti_amg_fw_ka_js_server'] = $conf['ti_amg_fw_core_ka_script'] . '/ka-debug.js';
        $conf['ti_amg_fw_core_ka_env'] = 'ti_aws_ka_dev';

        break;

    case 'qa':
        $conf['ti_amg_fw_core_ka_script'] = 'http://qa-imgka.foodandwine.com/javascripts';
        $conf['ti_amg_fw_ka_js_server'] = $conf['ti_amg_fw_core_ka_script'] . '/ka-debug.js';
        $conf['ti_amg_fw_core_ka_env'] = 'ti_aws_ka_qa';

        break;

    case 'prod':
        $conf['ti_amg_fw_core_ka_script'] = 'http://imgka.foodandwine.com/javascripts';
        $conf['ti_amg_fw_ka_js_server'] = $conf['ti_amg_fw_core_ka_script'] . '/ka.js';
        $conf['ti_amg_fw_core_ka_env'] = 'ti_aws_ka_prod';

        break;

    default:
        break;
}

$conf['ti_amg_fw_ka_js_server_mobile'] = $conf['ti_amg_fw_core_ka_script'] . '/mobile-all.js';

// Gigya js file
switch ($env) {
    case 'local':
    case 'dev':
        $conf['gigya_js_path'] = 'http://cdn.gigya.com/JS/socialize.js?apikey=3_I5_6hSnFKjE6dxeQOaTXI0e9EhnZlmMyKDtKzdgimFUZzfJl_wn-TE6P6hG1gD9k';

        break;

    case 'qa':
        $conf['gigya_js_path'] = 'http://cdn.gigya.com/JS/socialize.js?apikey=3_6iIOIvKakWfmxZtfPt-_ulqlvS9rYep4CJqOz0NBzcZGYzeoByCy3wUh8fbGDPeL';

        break;

    case 'prod':
        $conf['gigya_js_path'] = 'http://cdn.gigya.com/JS/socialize.js?apikey=2_HpHALCpCbkIUbgzW69kzWgT7KYymlgiiYSUzVWx17XtD3IRYvCchk6WUOXwqDVl8';

        break;

    default:
        $conf['gigya_js_path'] = 'http://cdn.gigya.com/JS/socialize.js?apikey=2_HpHALCpCbkIUbgzW69kzWgT7KYymlgiiYSUzVWx17XtD3IRYvCchk6WUOXwqDVl8';

        break;
}

// Ad mode
$conf['adMode'] = ($env == 'prod' ? 'live' : 'test');

// Set jumpstart data player based on env.
if ($env == 'prod') {
  $conf['brightcove_data_player'] = 'default';
}
else {
  $conf['brightcove_data_player'] = 'SJ6MKWKF';
}

/**
 * Set the Brightcove keys depending on the environment.
 */
// MM settings
$conf['dcms_ti_search_url'] = '/search?keyword=';
// These may have to change on prod.
$conf['brightcove_read_api_key'] = 'G0WAHddcP6XZOG9rNsyKkIyiDCGh9C7gfIxjRADssc0.';
$conf['brightcove_write_api_key'] = 'vlaGJdxmYfmeDGZNdQqq8gmKTuy8DL2H24cMU480yeUWjhRwiRHUvw..';
$conf['brightcove_link_field'] = 'nid';
$conf['brightcove_user_field'] = 'user';

$conf['file_public_path'] = 'sites/default/files';

// Variable to hold securepages urls by environment.
$securepages_urls = array(
    'local' => array(
        'securepages_basepath' => 'http://foodandwine.local',
        'securepages_basepath_ssl' => 'https://secure.foodandwine.local',
        'securepages_basepath_ssl_editor' => 'https://editor.foodandwine.local',
    ),
    'dev' => array(
        'securepages_basepath' => 'http://dev.foodandwine.com',
        'securepages_basepath_ssl' => 'https://dev-secure.foodandwine.com',
        'securepages_basepath_ssl_editor' => 'https://dev-editor.foodandwine.com',
    ),
    'qa' => array(
        'securepages_basepath' => 'http://qa.foodandwine.com',
        'securepages_basepath_ssl' => 'https://qa-secure.foodandwine.com',
        'securepages_basepath_ssl_editor' => 'https://qa-editor.foodandwine.com',
    ),
    'prod' => array(
        'securepages_basepath' => 'http://www.foodandwine.com',
        'securepages_basepath_ssl' => 'https://secure.foodandwine.com',
        'securepages_basepath_ssl_editor' => 'https://editor.foodandwine.com',
    ),
);

// Set the securepages urls.
$conf['securepages_basepath'] = $securepages_urls[$env]['securepages_basepath'];
$conf['securepages_basepath_ssl'] = $securepages_urls[$env]['securepages_basepath_ssl'];

// Require SSL for admin pages. Check for CLI so that Behat isn't affected.
if ((!isset($_SERVER['HTTPS']) || $_SERVER['HTTPS'] != 'on') && !drupal_is_cli()) {
    $redirects = array(
        '\/admin',
        '\/admin\/.*',
        '\/user',
        '\/user\/.*',
        '\/node\/.*\/edit',
    );
    $redirects = '/^(' . implode('|', $redirects) . ')$/';

    // If this is an admin page or we are on insecure editor subdomain, redirect
    // to secure domain.
    if (preg_match($redirects, $_SERVER['REQUEST_URI']) || strpos($_SERVER['HTTP_HOST'], 'editor') !== FALSE) {
        $redirect_domain = $securepages_urls[$env]['securepages_basepath_ssl_editor'];
        $redirect_location = $redirect_domain . $_SERVER['REQUEST_URI'];
        header('HTTP/1.0 301 Moved Permanently');
        header('Location: ' . $redirect_location);
        exit();
    }
}

// General editor/secure/Akamai domain check.
if (strpos($_SERVER['HTTP_HOST'], 'editor') !== FALSE) {
    // We're on an edit domain.
    // Set securepages variables here to enable securepages but not switch pages
    // back to non-secure automatically.
    $conf['securepages_switch'] = FALSE;
    $conf['securepages_secure'] = '0';
    $conf['securepages_pages'] = '';
    $conf['securepages_basepath_ssl'] = $securepages_urls[$env]['securepages_basepath_ssl_editor'];
} elseif (strpos($_SERVER['HTTP_HOST'], 'secure') !== FALSE) {
    // We're on the secure campaign domain.
} else {
    // Assume we are on the main Akamai origin and remove Vary: Cookie.
    $conf['omit_vary_cookie'] = TRUE;
}

// AY-452: Turn on CSS and JavaScript aggregation.
if ($env == 'local') {
    $conf['preprocess_css'] = FALSE;
    $conf['preprocess_js'] = FALSE;
} else {
    $conf['preprocess_css'] = TRUE;
    $conf['preprocess_js'] = TRUE;
}

// AY-458: Shard images / CSS / JS.
// Note that $conf['cdn_status'] is now in strongarm, so it will default to 0
// (off) until we can fix any Akamai issues, but can be changed without a code
// deploy.
switch ($env) {
    case 'local':
        // Forcibly disable CDN on local, no matter what. Also set a bogus FQDN,
        // just in case.
        $conf['cdn_status'] = 0;
        $cdn_prefix = "local";
        $conf['error_level'] = '2';
        break;
    case 'dev':
        $cdn_prefix = "dev-cdn";
        $conf['error_level'] = '0';
        break;
    case 'qa':
        $cdn_prefix = "qa-cdn";
        $conf['error_level'] = '0';
        break;
    case 'prod':
        $cdn_prefix = "cdn";
        $conf['error_level'] = '0';
        break;
    default:
        $cdn_prefix = "";
        $conf['error_level'] = '0';
        break;
}

$conf['cdn_basic_mapping'] = "http://${cdn_prefix}-css.foodandwine.com|.css
http://${cdn_prefix}-js.foodandwine.com|.js
http://${cdn_prefix}-image.foodandwine.com|.jpg
http://${cdn_prefix}-image.foodandwine.com|.png
http://${cdn_prefix}-image.foodandwine.com|.gif
http://${cdn_prefix}-image.foodandwine.com";

// Brand List current site identifier, should be one of:
// 'ay', 'cx', 'cl', 'fw', 'hl', 'fw', 'rs', 'sl', 'st'
$conf['brand_list_current_site'] = 'fw';

// SL-291: Cache purging.
if ($env == 'local') {
    $conf['purge_proxy_urls'] = 'http://127.0.0.1:80';
}

# Check paths during bootstrap and see if they are legitimate.
$conf['fast_404_path_check'] = TRUE;
# This page needs to be in your docroot.
$conf['fast_404_HTML_error_page'] = './404.html';
// Add .pdf and .shtml paths to the fast 404 list.
$conf['404_fast_paths'] = '/\.(?:txt|png|gif|jpe?g|css|js|ico|swf|flv|cgi|bat|pl|dll|exe|asp|shtml|pdf)$/i';
if ($env != 'local') {
    // Activate the fastest 404s possible.
    drupal_fast_404();
}

// Redirect caching
$conf['redirect_page_cache'] = TRUE;
$conf['page_cache_invoke_hooks'] = TRUE;

// Set the blog default image conf variable
$conf['ti_amg_fw_blog_default_image'] = "/sites/all/themes/foodandwine/images/fw-default-img.jpeg";
$conf['ti_amg_fw_default_meta_desc'] = "Food & Wine goes way beyond mere eating and drinking. We're on a mission to find the most exciting places, new experiences, emerging trends and sensations.";
$conf['social_share_default_img'] = '/sites/default/files/foodandwine-social.jpg';
/**
 * Caching.
 */
$conf['cache_backends'][] = 'sites/all/modules/contrib/memcache/memcache.inc';
// The 'cache_form' bin must be assigned no non-volatile storage.
$conf['cache_class_cache_form'] = 'DrupalDatabaseCache';

// Pretend the TI_PREFS cookie is set, even if it's not. Does not actually set
// the cookie, but sets the representative variable.
// The only time this should be relevant is for local development. On dev, qa,
// and prod, TI_PREFS will always be set before the request gets to Drupal.

/**
 * Tealium Configurations.
 */
// Tealium TLLE-1608
switch ($env) {

case 'prod':
 $conf['tealium_environment'] = 'prod';
 $conf['xmlsitemap_base_url'] = 'http://www.foodandwine.com';
 break;

case 'qa':
 $conf['tealium_environment'] = 'qa';
 $conf['xmlsitemap_base_url'] = 'http://qa.foodandwine.com';
 break;

case 'local':
  $conf['tealium_environment'] = 'dev';
  $conf['xmlsitemap_base_url'] = 'http://www.foodandwine.local';
 break;

case 'dev':
default:
 $conf['tealium_environment'] = 'dev';
 $conf['xmlsitemap_base_url'] = 'http://dev.foodandwine.com';
 break;

}

$conf['tealium_account'] = 'timeinc';
$conf['tealium_profile'] = 'foodandwine.com';
//$conf['tealium_environment'] = $env;
$conf['tealium_utag_async'] = TRUE;

/**
 * New Relic
 */
$conf['new_relic_extended_tracking'] = TRUE;
$conf['new_relic_rum'] = TRUE;

// httprl configuration (without https)
$conf['ti_site_basepath_editor'] = $securepages_urls[$env]['securepages_basepath_ssl_editor'];
$conf['httprl_server_addr'] = str_replace("https://", "", $conf['ti_site_basepath_editor']);

if (file_exists("sites/all/modules/contrib/pathcache/path.inc")) {
  $conf['path_inc'] = 'sites/all/modules/contrib/pathcache/path.inc';
}

/**
 * Provide stage_file_proxy origin setting on non-prod environments.
 */
if (in_array($env, array('local', 'dev', 'qa'))) {
  $conf['stage_file_proxy_origin'] = 'http://www.foodandwine.com';
}

// Ti Caas Backfill settings
$conf['ti_caas_backfill_enabled'] = 1;

//Segmentio write key is unique to each title
$conf['segmentio_write_key'] = '8NpHEDgX8Hd2JBcbevqwVvW3CKssMaG8';

$conf['ut_site_name'] = 'foodandwine';
