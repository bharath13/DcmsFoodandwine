/**
 * @file
 * Javascript for invoking fivestar for a slide.
 */
// setting global variable for Simple Reach referrer URL
var fw_recipe_referrer_url = "http://" + document.location.hostname + document.location.pathname;

(function ($) {
  $(document).on('recipe::loaded', function (event) {
    // Reinvoke all drupal functions included fivestar.
    Drupal.attachBehaviors();
    update_video_tout_location();
    // Invoking the jumpstart player on recipe stitching.
    var video_id = $('.brightcove-jumpstart .video-js').attr('data-video-id');
    if (typeof (bcJumpstart) !== "undefined") {
      bcJumpstart.start(document.querySelector(".brightcove-jumpstart .video-js"));    
    }
    slideOmnitureRefresh();
    reinvoke_outbrain();
    reloadOutBrainModules();
    sticky_ad();
    AdsRefresh();
  });

}(jQuery));

// Moving recipe video tout section between steps.
function update_video_tout_location() {
  if ((jQuery(".node-type-recipe").length > 0) && (jQuery(".video-tout-mob-tab").length > 0)) {
    jQuery(".hide-at-medium").detach().appendTo(".video-tout-mob-tab");
    jQuery(".video-tout-mob-tab .hide-at-medium").css("border", "none");
    jQuery(".video-tout-mob-tab .hide-at-medium").css("margin-bottom", "20px");
  }
}

function reloadOutBrainModules() {
  if (typeof (OBR) !== "undefined" && typeof (OBR.extern) !== "undefined" &&
          typeof (OBR.extern.researchWidget) !== "undefined") {
    OBR.extern.researchWidget("http://" + document.location.hostname + document.location.pathname);
  }
}

function slideOmnitureRefresh() {
  content_id = jQuery('#omniture_vars').find('.content_id').html();
  published_date = jQuery('#omniture_vars').find('.published_date').html();
  slide_authors = jQuery('#omniture_vars').find('.slide_authors').html();
  slide_terms = jQuery('#omniture_vars').find('.slide_terms').html();
  title = jQuery('.recipe__title').html();
  title = title.replace(/^\s*|\s*$/g, '');
  pageName = 'fw|recipes|' + title + '-' + slide_authors;
  path = document.location.pathname;
  prop_four = document.location.pathname;
  sub_channel = path.replace(/\//g, '|');
  prop_five = sub_channel.substring(1);
  page_title = title.replace(/\(|\)/g, '');
  lastword = page_title.match(/\w+$/)[0];
  if (lastword.toLowerCase() != 'recipe') {
    page_title = page_title + ' Recipe';
  }
  if (jQuery.trim(slide_authors) != '') {
    document.title = page_title + ' - ' + slide_authors + ' | Food&Wine';
  }
  else {
    document.title = page_title + ' | Food&Wine';
  }
  url = location.protocol + "//" + location.host + location.pathname;
  if (utag && typeof (window.Ti.udo_metadata) !== "undefined") {
    window.Ti.udo_metadata.page_name = jQuery.trim(title);
    window.Ti.udo_metadata.content_id = jQuery.trim(content_id);
    window.Ti.udo_metadata.author_name = jQuery.trim(slide_authors);
    window.Ti.udo_metadata.friendly_url = url;
    window.Ti.udo_metadata.publish_date = jQuery.trim(published_date);
    var recipe_pathname_arr = window.location.pathname.split('/');
    if (recipe_pathname_arr != '') {
      window.Ti.udo_metadata.site_section1 = recipe_pathname_arr[1];
      window.Ti.udo_metadata.site_section2 = recipe_pathname_arr[2];
    }
    window.Ti.udo_metadata._sc_url = url;
    window.Ti.udo_metadata.referrer = fw_recipe_referrer_url;
    fw_recipe_referrer_url = url;
  }
  if (utag && utag.view && typeof (window.Ti) !== "undefined" && typeof (window.Ti.udo_metadata) !== "undefined") {
    utag.view(window.Ti.udo_metadata);
  }
}
// Updating the adFactory values when recipe carousel chagnes.
function updateAdFactoryParams() {
  adFactory_theme = jQuery.trim(jQuery('#omniture_vars').find('.adfactory_theme').html()).split(',');
  adFactory_sub = jQuery.trim(jQuery('#omniture_vars').find('.adfactory_sub').html()).split(',');
  adFactory_nid = jQuery.trim(jQuery('#omniture_vars').find('.adfactory_nid').html());
  adFactory.setParam('theme', adFactory_theme);
  adFactory.setParam('sub', adFactory_sub);
  adFactory.setParam('nid', adFactory_nid);
}
