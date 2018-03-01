<?php

/**
 * @file
 * Default theme implementation to display the basic html structure of a single
 * Drupal page.
 *
 * Variables:
 * - $css: An array of CSS files for the current page.
 * - $language: (object) The language the site is being displayed in.
 *   $language->language contains its textual representation.
 *   $language->dir contains the language direction. It will either be 'ltr' or
 *   'rtl'.
 * - $rdf_namespaces: All the RDF namespace prefixes used in the HTML document.
 * - $grddl_profile: A GRDDL profile allowing agents to extract the RDF data.
 * - $head_title: A modified version of the page title, for use in the TITLE
 *   tag.
 * - $head_title_array: (array) An associative array containing the string parts
 *   that were used to generate the $head_title variable, already prepared to be
 *   output as TITLE tag. The key/value pairs may contain one or more of the
 *   following, depending on conditions:
 *   - title: The title of the current page, if any.
 *   - name: The name of the site.
 *   - slogan: The slogan of the site, if any, and if there is no title.
 * - $head: Markup for the HEAD section (including meta tags, keyword tags, and
 *   so on).
 * - $styles: Style tags necessary to import all CSS files for the page.
 * - $scripts: Script tags necessary to load the JavaScript files and settings
 *   for the page.
 * - $page_top: Initial markup from any modules that have altered the
 *   page. This variable should always be output first, before all other dynamic
 *   content.
 * - $page: The rendered page content.
 * - $page_bottom: Final closing markup from any modules that have altered the
 *   page. This variable should always be output last, after all other dynamic
 *   content.
 * - $classes String of classes that can be used to style contextually through
 *   CSS.
 *
 * @see bootstrap_preprocess_html()
 * @see template_preprocess()
 * @see template_preprocess_html()
 * @see template_process()
 *
 * @ingroup themeable
 */
?><!DOCTYPE html PUBLIC "-//W3C//DTD XHTML+RDFa 1.0//EN"
  "http://www.w3.org/MarkUp/DTD/xhtml-rdfa-1.dtd">
<html lang="<?php print $language->language; ?>" dir="<?php print $language->dir; ?>"<?php print $rdf_namespaces; ?>>
  <head profile="<?php print $grddl_profile; ?>">
    <?php if (!empty($ga_script)) : print $ga_script; endif; ?>
    <script>
      window.facebookID = "154653334553109"
      // otherwise IE9 has issues
      if (!window.console)
        window.console = {};
      if (!window.console.log)
        window.console.log = function () {
        };
    </script>
    <!-- To Turn Off the Bluekai Setting Starts -->
    <script>
      var TGX_SITE_CONFIG = {'gpt_sync_mode': 'async', 'refresh_oop_slot': true, 'bluekai': false};
    </script>
    <!-- To Turn Off the Bluekai Setting Ends -->
    <meta charset="utf-8">
    <meta name="viewport" content="width=device-width, initial-scale=1.0">
    <?php print $head; ?>
    <title><?php print $head_title; ?></title>
    <link rel="stylesheet" type="text/css"
      href="https://fonts.googleapis.com/css?family=Droid+Sans:400,700|Droid+Serif:400,400i,700">
    <?php print $styles; ?>
    <!-- HTML5 element support for IE6-8 -->
    <!--[if lt IE 9]>
      <script src="//html5shiv.googlecode.com/svn/trunk/html5.js"></script>
    <![endif]-->   
    <?php print $scripts; ?> 
    <?php 
    if ($variables['smrt_native_adv_flag'] == 0) {
      if ($variables['smrt_flag'] == 1) {
        if ($variables['smrt_gallery_flag'] == 0) {
    ?>
        <script>
       __reach_config = {
      pid: "<?php print $variables['smrt_picd']?>",
      title: "<?php print $variables['smrt_title']?>",
      date: "<?php print $variables['smrt_published_at']?>",
      authors: [<?php print $variables['smrt_author']?>],
      channels: ['<?php print $variables['smrt_channel']?>'],
      tags: [<?php print $variables['smrt_tags']?>],
      iframe: true,
      ignore_errors: false,
      domain: "<?php print $variables['smrt_domain'];?>"
    };</script>
      <?php
        }
      ?>
        <script>
    (function(){
      var s = document.createElement('script');
      s.async = true;
      s.type = 'text/javascript';
      s.src = document.location.protocol + '//d8rk54i4mohrb.cloudfront.net/js/reach.js';
      (document.getElementsByTagName('head')[0] || document.getElementsByTagName('body')[0]).appendChild(s);
    })();</script>
    <?php
      }
    }
    ?>
  </head>
  <body class="<?php print $classes; ?>" <?php print $attributes; ?>>
    <div id="skip-link">
      <a href="#main-content" class="element-invisible element-focusable"><?php print t('Skip to main content'); ?></a>
    </div>
    <?php print $page_top; ?>
    <?php print $page; ?>
    <?php print $page_bottom; ?>
    <script src="https://apis.google.com/js/platform.js" async defer></script>
    <script type="text/javascript" src="https://d1xnn692s7u6t6.cloudfront.net/widget.js"></script>
    <!-- Facebook remarketing tag see https://tools.timeinc.net/wiki/display/APE/Retargeting+Tags for more info -->
    <script>(function() {
        var _fbq = window._fbq || (window._fbq = []);
        if (!_fbq.loaded) {
          var fbds = document.createElement('script');
          fbds.async = true;
          fbds.src = '//connect.facebook.net/en_US/fbds.js';
          var s = document.getElementsByTagName('script')[0];
          s.parentNode.insertBefore(fbds, s);
          _fbq.loaded = true;
        }
        _fbq.push(['addPixelId', '910064729023741']);
      })();
      window._fbq = window._fbq || [];
      window._fbq.push(['track', 'PixelInitialized', {}]);
    </script>
    <noscript><img height='1' width='1' alt='' style='display:none' src='https://www.facebook.com/tr?id=910064729023741&amp;ev=PixelInitialized' /></noscript>

    <?php
    if($variables['print_flag'] == 0){
        ?>
    <!-- Google Remarketing Tag see https://tools.timeinc.net/wiki/display/APE/Retargeting+Tags for more info -->
    <script type='text/javascript'>
    /* <![CDATA[ */
    var google_conversion_id = 978269893;
    var google_custom_params = window.google_tag_params;
    var google_remarketing_only = true;
    /* ]]> */
        </script>
        <script type='text/javascript' src='//www.googleadservices.com/pagead/conversion.js'>
        </script>
        <noscript>
        <div style='display:inline;'>
            <img height='1' width='1' style='border-style:none;' alt='' src='//googleads.g.doubleclick.net/pagead/viewthroughconversion/978269893/?value=0&amp;guid=ON&amp;script=0'/>
        </div>
        </noscript>
    <?php }?>
    <script type="text/javascript">(function k(){window.$SendToKindle&&window.$SendToKindle.Widget?$SendToKindle.Widget.init({}):setTimeout(k,500);})();</script>
  </body>
</html>
