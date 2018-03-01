/**
 * @file
 * Javascript for loadind the ads.
 *
 * 1. Leaderbboard ad.
 */

(function ($) {
  var detect_device = get_device();
// Sticky header for gallery pages on desktop and tablets.
  if ($(".node-type-gallery").length > 0 && $(".vertical-gallery").length == 0) {
    var site_header_gallery = jQuery("#site-header-gallery");
    if (detect_device == "desktop") {
      var offset = $("#site-header-gallery").offset();
      var height = $("#site-header-gallery").height() + 50;
      function sticky_header() {
        if ($(window).scrollTop() > offset.top) {
          $("#site-header-gallery").addClass("is_stuck");
          $("#main-wrapper").css("margin-top", height + "px");
        }
        else {
          $("#site-header-gallery").removeClass("is_stuck");
          $("#main-wrapper").css("margin-top", "0px");
        }
      };
      // Sticky header.
      $(window).on('scroll', $.throttle(200, sticky_header));
      site_header_gallery.attr("data-js-component", "mainMenuBasic");
    }
    else {
      site_header_gallery.attr("data-js-component", "mainMenuGallery");
      if (detect_device == "tablet") {
        if ($(".vertical-gallery").length == 0) {
          $("#site-header-gallery").addClass("is-stick");
        }
        $("#main-wrapper").css("top", "180px");
        $("#main-wrapper").css("position", "absolute");
      }
    }
    window.componentRegistry.initComponents();
  }

  if (detect_device == "desktop" && ($('.node-type-recipe').length > 0
    || $('.node-type-channel-landing-page-responsive').length > 0
    || $('.node-type-blog').length > 0 )) {
    stickyWithTimeout($('#leaderboard_ad_holder'), 5000);
  }

  $(document).ready(function () {
    if (($(".node-type-home-page-responsive").length > 0) || ($(".node-type-channel-landing-page-responsive").length > 0)) {
      if (typeof (bcJumpstart) !== "undefined") {
        bcJumpstart.ready(function () {
          if (bcJumpstart.players.length > 0) {
            var videoIdsLth = bcJumpstart.players.length;
            // Loop through all jumpstart players
            // count how many videos are playing, make sure only one a time.
            bcJumpstart.when(bcJumpstart.players[videoIdsLth - 1], 'playing', function (videoJs) {
              for (var count = 0; count < videoIdsLth - 1; count++) {
                if (bcJumpstart.isPlayingVideo(bcJumpstart.players[count])) {
                  bcJumpstart.pauseVideo(bcJumpstart.players[count]);
                }
                if (bcJumpstart.isPlayingAd(bcJumpstart.players[count])) {
                  bcJumpstart.pauseAd(bcJumpstart.players[count]);
                }
              }
            });
            bcJumpstart.when(bcJumpstart.players[videoIdsLth - 1], 'ads-ad-started', function (videoJs) {
              for (var count = 0; count < videoIdsLth - 1; count++) {
                if (bcJumpstart.isPlayingVideo(bcJumpstart.players[count])) {
                  bcJumpstart.pauseVideo(bcJumpstart.players[count]);
                }
                if (bcJumpstart.isPlayingAd(bcJumpstart.players[count])) {
                  bcJumpstart.pauseAd(bcJumpstart.players[count]);
                }
              }
            });
            var carouseTotalSlides = videoIdsLth - 1;
            for (var count = 0; count < carouseTotalSlides; count++) {
              bcJumpstart.when(bcJumpstart.players[count], 'ads-ad-started', function (videoJs) {
                if (bcJumpstart.isPlayingVideo(bcJumpstart.players[videoIdsLth - 1])) {
                  bcJumpstart.pauseVideo(bcJumpstart.players[videoIdsLth - 1]);
                }
                if (bcJumpstart.isPlayingAd(bcJumpstart.players[videoIdsLth - 1])) {
                  bcJumpstart.pauseAd(bcJumpstart.players[videoIdsLth - 1]);
                }
              });
              bcJumpstart.when(bcJumpstart.players[count], 'playing', function (videoJs) {
                if (bcJumpstart.isPlayingVideo(bcJumpstart.players[videoIdsLth - 1])) {
                  bcJumpstart.pauseVideo(bcJumpstart.players[videoIdsLth - 1]);
                }
                if (bcJumpstart.isPlayingAd(bcJumpstart.players[videoIdsLth - 1])) {
                  bcJumpstart.pauseAd(bcJumpstart.players[videoIdsLth - 1]);
                }
              });
            }
          }
        })
      }
    }

    if ($(".node-type-blog").length > 0) {
      zergnetMobile();
      // Do not loadAds()
    }
    else if ($(".node-type-recipe").length > 0) {
      // Do not use loadAds()
    }
    else if ($(".node-type-gallery").length > 0 && $(".vertical-gallery").length == 0) {
      var current_url = document.location.pathname;
      var query_params = current_url.split("/");
      var last_slide = query_params.length - 1;
      if ((query_params[last_slide]) && (query_params[last_slide] == 'end')) {
        gallery_end_slate_outbrain();
      }
      if (detect_device != "desktop") {
        var current_url = document.location.pathname;
        var query_params = current_url.split("/");
        var last_slide = query_params.length - 1;
        if ((query_params[last_slide]) && (query_params[last_slide].split("-"))) {
          var slide = query_params[last_slide].split("-");
          if (slide[0] == "ad") {
            var ad_pos = slide[1] / 4;            
            var slotSettings = Drupal.settings['ad_settings_gallery_interstitial_ad'];
            slotSettings.getAd.setPosition = ad_pos;
            jQuery('.advertisement-mobile-gallery-interstitial-300x250-1').css({'display': 'block'});
            jQuery('#interstitial_ad').append('<div id="slide_ad_container"><div  class="ad-placeholder ad-refresh" id="ad-gallery_interstitial_ad" data-id="gallery_interstitial_ad" data-type="regular"></div>');
            try {
                time_dfp.updateCorrelator();
                Drupal.attachBehaviors();
              }             
              catch (err) {
                console.log(err.message);
              }
          }
        }
      }
      if (typeof (window.Ti.udo_metadata) !== "undefined") {
        window.Ti.udo_metadata.slide_title = gallerySliderConfig.current_slide.title;
        window.Ti.udo_metadata.page_number = gallerySliderConfig.current_slide.slide_number;
      }
      refresh_tealium_udo_tag();
    }
    $(window).load(function () {

      // For category or contributor pagination paege udo_metadata update by custom.   
      if (($(".node-type-category").length > 0 || $(".node-type-person").length > 0) && $(".pager").length > 0) {    
        if (typeof (window.Ti.udo_metadata) !== "undefined") {
          window.Ti.udo_metadata.channel = Drupal.settings.catpg_udo_metadata.channel;    
          window.Ti.udo_metadata.friendly_url = Drupal.settings.catpg_udo_metadata.friendly_url;    
          window.Ti.udo_metadata.page_name = Drupal.settings.catpg_udo_metadata.page_name;    
          window.Ti.udo_metadata.site_display_format = Drupal.settings.catpg_udo_metadata.site_display_format;    
          window.Ti.udo_metadata.template_type = Drupal.settings.catpg_udo_metadata.template_type;    
          window.Ti.udo_metadata.site_section1 = Drupal.settings.catpg_udo_metadata.site_section1;    
          window.Ti.udo_metadata.site_section2 = Drupal.settings.catpg_udo_metadata.site_section2;    
          refresh_tealium_udo_tag();    
        }
      }

      if ($(".node-type-video").length > 0) {

        var site_header_video = jQuery("#site-header-video");
        if (detect_device == "desktop") {
          var offset = $("#site-header-video").offset();
          var height = $("#site-header-video").height() - 55;
          // Sticky header.
          $(window).scroll(function () {
              if ($(window).scrollTop() > offset.top) {
                  $("#site-header-video").addClass("is_stuck");
                  $("#main-wrapper").css("margin-top", height + "px");
              }
              else {
                   $("#site-header-video").removeClass("is_stuck");
                   $("#main-wrapper").css("margin-top", "0px");
              }
          });
          site_header_video.attr("data-js-component","mainMenuBasic");
        }
        else {
          site_header_video.attr("data-js-component","mainMenuGallery");
          if (detect_device == "tablet") {
            $("#site-header-video").addClass("is-stick");
            $("#main-wrapper").css("top","180px");
            $("#main-wrapper").css("position","absolute");
          }
        }
        window.componentRegistry.initComponents();
      }

      if ($(".node-type-video-landing-page").length > 0) {
        var site_header_video = jQuery("#site-header-video");
        if (detect_device == "desktop") {
          var offset = $("#site-header-video").offset();
          var sticky = document.getElementById("#site-header-video");
          // Sticky header.
          $(window).scroll(function () {
            if ($(window).scrollTop() > offset.top) {
              $("#site-header-video").addClass("is_stuck");
            }
            else {
              $("#site-header-video").removeClass("is_stuck");
            }
          });
          // site_header_video.attr("data-js-component","mainMenuBasic");.
        }
        else {
          if (detect_device == "tablet") {
            var offset = $("#site-header-video").offset();
            var sticky = document.getElementById("#site-header-video");
            $(window).scroll(function () {
              if ($(window).scrollTop() > offset.top) {
                $("#site-header-video").addClass("is-stick");
              }
              else {
                $("#site-header-video").removeClass("is-stick");
              }
            });
          }
        }
      }
      
      // Implementing sticky for right rail banner.
      if (jQuery(".node-type-gallery").length > 0 && jQuery(".vertical-gallery").length == 0) {
        if (detect_device == "desktop") {
          var topad = 0;
          var classic_sec = 0;
          var hide_header_val = (jQuery('.site-header__content').offset().top + 15);
          if (jQuery(".classic_aspen_header").length > 0) {
            var classic_sec = parseInt(jQuery('.classic_aspen_header').height() - 30);
          }
          var main_wrapper_top = parseInt((jQuery('#main-wrapper').offset().top + classic_sec) - (hide_header_val)) + 'px'; // Returns number
          jQuery(window).scroll(function() { // scroll event.
            var top_header_height = parseInt(jQuery('.is_stuck').height());
            if (top_header_height && (topad == 0)) {
              topad = 1;
              jQuery('.gallery-right-rail-section').css({position: 'fixed', width: '300px', top: main_wrapper_top});
              setTimeout(function() {
                jQuery('.gallery-right-rail-section').css({position: 'relative', top: 'auto'});
              }, 3000);
            }
          });
        }
      }    
    });
    // Moving recipe video tout section between steps.
    if ((jQuery(".node-type-recipe").length > 0) && (jQuery(".video-tout-mob-tab").length > 0)) {
      jQuery(".hide-at-medium").detach().appendTo(".video-tout-mob-tab");
      jQuery(".video-tout-mob-tab .hide-at-medium").css("border", "none");
      jQuery(".video-tout-mob-tab .hide-at-medium").css("margin-bottom", "20px");
      var video_id = jQuery('.brightcove-jumpstart .video-js').attr('data-video-id');
      if (typeof (bcJumpstart) !== "undefined") {
        bcJumpstart.start(document.querySelector(".brightcove-jumpstart .video-js"));    
      }
    }

  });
}(jQuery));
function zergnetMobile() {
  var detect_device = get_device();
  if (detect_device == 'phone') {
    if (jQuery("#zergnet-widget")) {
      jQuery("#zergnet-widget").hide();
    }
  }
}
function loadAds() {
  var detect_device = get_device();
  var leaderboard_holder = jQuery("#leaderboard_ad_holder");
  if (detect_device == 'phone') {
    leaderboard_holder.html('<div class="ad ad--mobile-leaderboard"><div class="advertisement advertisement-mobile-320x50"><div id="ad_mobile_320x50_1"></div></div></div>');
    ad = adFactory.getMultiAd(new Array("320x50", "300x50"));
    ad.setPosition("1");
    ad.write("ad_mobile_320x50_1");
  }
  else if (detect_device == 'tablet') {
    leaderboard_holder.html('<div class="ad ad--leaderboard centered"><div id="adTop"></div></div>');
    ad = adFactory.getMultiAd(new Array("728x90"));
    ad.setPosition("1");
    ad.write("adTop");
  }
  else {
    var isFirefox = navigator.userAgent.match(/Firefox/i) != null;
    if (isFirefox) {
      leaderboard_holder.html(' <div class="ad ad--leaderboard centered"><div class="advertisement advertisement-dummy-ffx-2x9"><div id="ad_dummy_ffx_2x9"></div></div><div id="adTop"></div></div>');
      ad = adFactory.getAd("2", "9");
      ad.setPosition("1");
      ad.write("ad_dummy_ffx_2x9");
    }
    else {
      leaderboard_holder.html('<div class="ad ad--leaderboard centered"><div id="adTop"></div></div>');
    }
    ad = adFactory.getMultiAd(new Array("728x90", "101x1", "970x90", "970x66", "970x250"));
    ad.setPosition("1");
    ad.write("adTop");
  }

  // Rebinds data-js-components found in leaderboard_holder (fixToBottom) after page load
  // Remove leaderboard_holder from this call if you'd like to search the entire DOM for new data-js-components that have been added via Javascript.
  window.componentRegistry.initComponents(leaderboard_holder);

}

(function ($) {
  Drupal.behaviors.hideAdTitle = {
    attach: function (context) {
      window.pageAdCallback = function (divID, adsize) {
        // Show adtxt.
        var wrapper_300x250 = $("#" + divID + " > div > script");
        var wrapper_300x250_div = (wrapper_300x250.length == 0) ? $("#" + divID + " > div") : wrapper_300x250.next();
        var check_ad_height = wrapper_300x250_div.find("iframe").css("height");
        setTimeout(function () {
          check_ad_height = wrapper_300x250_div.find("iframe").css("height");
          console.log(wrapper_300x250_div.find("iframe").css("height"));
          if (check_ad_height == "0px") {
            console.log("no ad title");
          }
          else {
            $("#" + divID).parent().find(".adtxt").show();
          }

        }, 600);
      }
    }
  };
  Drupal.behaviors.FWRDLazyLoadAndStickyAd = {
    attach: function (context, settings) {
      var attached_behavior_element = '';
      if ($('#main-wrapper').length) {
        attached_behavior_element = '#main-wrapper';
      }
      $(attached_behavior_element, context).once('lazy_load_set', function () {
        reinvoke_ads();
        sticky_ad();
        stickyLeaderboardAd();
      });
      return false;
    }
  };


  Drupal.behaviors.ti_amg_tl__custom_newsletter = {
      attach: function(context, settings) {
          jQuery('#newsletter_form').submit(function() {
            formValidation.correctEmail();
          });
          var formValidation = {
              'completeForm': function() {
                  var user_email = jQuery('#e_mail').val();
                  var selected_newsletter = jQuery('input:checked').length > 0;
                  if (((user_email === 'Enter your email address') || !user_email) && !selected_newsletter)
                  {
                      formValidation.errors = true;
                      jQuery('#newsletter_form input:checkbox').css({border: "2px red solid"});
                      jQuery('#flash-error').css('color', '#e71f3d');
                      jQuery('input#e_mail').css('background-color', '#fca7a7');
                      jQuery('#flash-error').text('*email & selection required');
                  }
                  else if (!selected_newsletter && user_email)
                  {
                      formValidation.errors = true;
                      jQuery('#newsletter_form input:checkbox').css({border: "2px red solid"});
                      jQuery('#flash-error').css('color', '#e71f3d');
                      jQuery('#flash-error').text('*selection required');
                  }
                  else if ((user_email === 'Enter your email address') || !user_email)
                  {
                      formValidation.errors = true;
                      jQuery('#flash-error').css('color', '#e71f3d');
                      jQuery('input#e_mail').css('background-color', '#fca7a7');
                      jQuery('#flash-error').text('*email required');
                  }
              },
              'correctEmail': function() {
                  var user_email = jQuery('#e_mail').val();
                  var email_pattern = /^.+@.+[.].{2,}$/i;
                  if (!email_pattern.test(user_email))
                  {
                      formValidation.errors = true;
                      jQuery('input#e_mail').css('background-color', '#fca7a7');
                      jQuery('#flash-error').css('color', '#e71f3d').text(' *valid email required');
                  }
                  else
                  {
                      jQuery('input#e_mail').css('background-color', '#fff');
                      jQuery('#flash-error').text('');
                  }
              },
              'chooseNewsletter': function() {
                  var user_email = jQuery('#e_mail').val();
                  var selected_newsletter = jQuery('input:checked').length > 0;
                  var user_email = jQuery('#e_mail').val();
                  if ((!selected_newsletter) && (user_email))
                  {
                      formValidation.errors = true;
                      jQuery('#newsletter_form input:checkbox').css({border: "2px red solid"});
                      jQuery('#flash-error').css('color', '#e71f3d').text(' *selection required');
                  }
              },
              'submitForm': function() {
                  if (!formValidation.errors)
                  {
                      var newsletters = new Array();
                      var newsletter_value = jQuery('input[name="newsletter[newsletter_ids][][newsletter_id]"]:checked');
                      var email = jQuery('#e_mail').val();
                      var source = jQuery('#newsletter_source').val();
                      jQuery.each(newsletter_value, function(i)
                      {
                          var newsletter_selected = jQuery(newsletter_value[i]).val();
                          newsletters.push(newsletter_selected);
                      });

                      if (jQuery.inArray('285407556', newsletters) != -1)
                      {
                          var dish = 'thedish=Y';
                      }
                      else
                      {
                          var dish = 'thedish=N';
                      }
                      ;
                      if (jQuery.inArray('2069486254', newsletters) != -1)
                      {
                          var wine = '&winelist=Y';
                      }
                      else
                      {
                          var wine = '&winelist=N';
                      }
                      ;
                      if (jQuery.inArray('260816546', newsletters) != -1)
                      {
                          var fw = '&fwdaily=Y';
                      }
                      else
                      {
                          var fw = '&fwdaily=N';
                      }
                      ;
                      window.location.replace("https://pages.email.foodandwine.com/opt-in?" + dish + wine + fw + "&email_address=" + email + "&source=" +source);
                  }
              }
          };
          jQuery(document).ready(function() {
              jQuery('#e_mail').change(formValidation.correctEmail);
              jQuery('#newsletter_form').submit(function() {
                  jQuery('.error').remove();
                  jQuery('#newsletter_form input:checkbox').css({border: "1px solid #c4c2c3"});
                  jQuery('#flash-error').text('');
                  formValidation.errors = false;
                  formValidation.completeForm();
                  formValidation.submitForm();
                  return false;
              });

          });
      }
  };
   window.sticky_ad = function () {
     if (jQuery(".node-type-recipe").length > 0) {
       if (detect_device == "desktop") {
         var topad = 0;
         jQuery(window).scroll(function () { // Scroll event.
           var top_header_height = parseInt(jQuery('.is_stuck').height() - 80);
           var scroll_position = parseInt($(window).scrollTop());
           var element_position = parseInt($("#ad_300x250_wrapper").offset().top);
           var top_sec_pos = parseInt((jQuery('#ad_multiad_300x250_wrapper').height()) + (jQuery('.SB_4').height()) - (top_header_height - 36));
           if ((scroll_position >= (element_position - (top_header_height + 20))) && (topad == 0)) {
             topad = 1;
             jQuery('.recipe-right-rail-section').css({position: 'fixed', width: '300px', top: '-' + top_sec_pos + 'px'});
             setTimeout(function () {
               jQuery('.recipe-right-rail-section').css({position: 'relative', top: 'auto'});
             }, 2000);
           }
         });
       }
     }
   }
  window.reinvoke_outbrain = function () {
    if (($(".node-type-recipe").length > 0) || ($(".node-type-home-page-responsive").length > 0) || ($(".node-type-channel-landing-page-responsive").length > 0) || ($(".node-type-category").length > 0) || ($(".page-taxonomy-term-fw_category").length > 0)) {
      var content_type = "";
      if ($(".node-type-recipe").length > 0)
        content_type = "recipe";
        loadAdWrapperPerDevice(content_type);   
    }
  }
  window.reinvoke_ads = function () {
    // Implementing lazy load for right rail second ad.
    // Lazy loading for all pages except for gallery and video pages
    // Lazy loading the ad for blog page - without using cookie value for the detected device.
    if (($(".node-type-recipe").length > 0) || ($(".node-type-home-page-responsive").length > 0) || ($(".node-type-channel-landing-page-responsive").length > 0) || ($(".node-type-category").length > 0) || ($(".page-taxonomy-term-fw_category").length > 0)) {
      var content_type = "";
      if ($(".node-type-recipe").length > 0)
        content_type = "recipe";
        loadAdWrapperPerDevice(content_type);   
    }
  }

  // Lazyload marketplace ad.
  var lazyload_ads;

  window.lazyload_ads_invoke_js = lazyload_ads;

  // For recipe stitching make sure we hide all unused ads and outbrain wrappers per device.
  window.loadAdWrapperPerDevice = function (content_type) {
    var outbrain_markup = "";
    var detect_device = get_device();
    if (detect_device == 'desktop') {
      if (content_type == "recipe") {
        if ($("#outbrain-wrapper-mobile").length > 0) {
          $("#outbrain-wrapper-mobile").hide();
        }
        var outbrain_module = bottom_outbrain_update();
        $("#outbrain-wrapper-bottom").html(outbrain_module);
      }
      $("#phone-lazy-load-first-ad-holder").hide();
      $("#phone-lazy-load-ad-holder").hide();
      $("#tablet-lazy-load-first-ad-holder").hide();
      $("#tablet-lazy-load-ad-holder").hide();
    }
    else if (detect_device == 'phone') {
      $("#tablet-lazy-load-first-ad-holder").hide();
      $("#tablet-lazy-load-ad-holder").hide();
      $("#desktop-lazy-load-first-ad-holder").hide();
      $("#desktop-lazy-load-ad-holder").hide();
      if (content_type == "recipe") {
        if ($("#outbrain-wrapper-bottom").length > 0) {
          $("#outbrain-wrapper-bottom").hide();
        }
        var outbrain_module = bottom_outbrain_update();
        $("#outbrain-wrapper-mobile").html(outbrain_module);
      }
    }
    else {
      $("#phone-lazy-load-first-ad-holder").hide();
      $("#phone-lazy-load-ad-holder").hide();
      $("#desktop-lazy-load-first-ad-holder").hide();
      $("#desktop-lazy-load-ad-holder").hide();
      if (content_type == "recipe") {
        if ($("#outbrain-wrapper-bottom").length > 0) {
          $("#outbrain-wrapper-bottom").hide();
        }
        var outbrain_module = bottom_outbrain_update();
        $("#outbrain-wrapper-mobile").html(outbrain_module);
      }
    }
  }
  window.stickyLeaderboardAd = function () {
    var detect_device = get_device();
    if (detect_device == 'phone') {
      var puthname = window.location.pathname;
      if ($('.ad--mobile-leaderboard').length) {
        var $win = $(window);
        $win.scroll(function () {
          var scrollTop = $win.scrollTop();
          var winHeight = $win.height();
          if (scrollTop > 0) {
            if (!$('.ad--mobile-leaderboard').hasClass("fix-to-bottom")) {
              $('.ad--mobile-leaderboard').addClass("fix-to-bottom");
            }
          }
          else {
            if ($('.ad--mobile-leaderboard').hasClass("fix-to-bottom")) {
              $('.ad--mobile-leaderboard').removeClass("fix-to-bottom");
            }
          }
        });
      }
    }
  };
}(jQuery));

function get_device() {
  $detect_device = 'desktop';
  isPhone = navigator.userAgent.match(/(up.browser|up.link|mmp|symbian|smartphone|midp|wap|iPhone|android|iemobile|mobile)/i) != null;
  isTablet = navigator.userAgent.match(/(tablet|ipad|playbook)|(android(?!.*(mobi|opera mini)))/i) != null;
  if (isTablet) {
    isPhone = false;
  }
  if (isPhone) {
    $detect_device = 'phone';
  }
  if (isTablet) {
    $detect_device = 'tablet';
  }
  return $detect_device;
}

/* Loading bottom outbrain module on the slide changing */
window.bottom_outbrain_update = function () {
  var content_path = jQuery('#omniture_vars').find('.content_path').html();
  var alias_url = jQuery.trim(content_path);
  var outbrain_markup = '';
  outbrain_markup = '<section class="recipe_outbrain section-container"><div class="section-heading section-heading--center"><span>Sponsored Stories</span></div><div class="grid grid—6"><div class="OUTBRAIN" data-src="http://www.foodandwine.com/' + alias_url + '" data-widget-id="AR_4"  data-ob-template="Food&Wine" ></div></div></section>';
  return outbrain_markup;
}
/* Loading bottom outbrain module on the slide changing */
window.gallery_bottom_outbrain_update = function () {
  var alias_url = document.location.pathname;
  var outbrain_markup = '';
  outbrain_markup = '<section class="recipe_outbrain section-container"><div class="section-heading section-heading--center"><span>Sponsored Stories</span></div><div class="grid grid—6"><div class="OUTBRAIN" data-src="http://www.foodandwine.com' + alias_url + '" data-widget-id="AR_4"  data-ob-template="Food&Wine" ></div></div></section>';
  return outbrain_markup;
}
/* Loading bottom outbrain module on the slide changing */
window.gallery_right_rail_outbrain = function () {
  var content_path = document.location.pathname;
  var outbrain_markup_rightrail = '';
  outbrain_markup_rightrail = '<div class="OUTBRAIN" data-src="http://www.foodandwine.com' + content_path + '" data-widget-id="SB_4" data-ob-template="Food&amp;Wine"></div>';
  return outbrain_markup_rightrail;
}

window.reloadGlobalOutBrainModules = function () {
  if (typeof (OBR) !== "undefined" && typeof (OBR.extern) !== "undefined" &&
    typeof (OBR.extern.researchWidget) !== "undefined") {
    OBR.extern.researchWidget("http://" + document.location.hostname + document.location.pathname);
  }
}

/* Outbrain for the last gallery slide */
window.gallery_end_slate_outbrain = function () {
  jQuery('#showSkipAd').hide();
  jQuery(".gallery-section-container").addClass("outbrain-slide");
  jQuery("#gallery-end-slate-wrapper").show(); 
}

/**
 * Custom function to find the viewport of the element.
 *
 * This function will check whether this element fully visible.
 */
function is_in_viewport(element) {
  var bottomOfElement, scrollTopPosition, topOfElement, windowScrollTop;
    topOfElement = Math.round(jQuery(element).offset().top);
    bottomOfElement = Math.round(jQuery(element).offset().top + jQuery(element).outerHeight(true));
    scrollTopPosition = Math.round(jQuery(window).scrollTop() + jQuery(window).height());
    windowScrollTop = Math.round(jQuery(window).scrollTop());
  if (windowScrollTop > topOfElement && windowScrollTop < bottomOfElement) {
    return true;
  }
  else if (windowScrollTop > bottomOfElement && windowScrollTop > topOfElement) {
    return false;
  }
  else if (scrollTopPosition < topOfElement && scrollTopPosition < bottomOfElement) {
    return false;
  }
  else if (scrollTopPosition < bottomOfElement && scrollTopPosition > topOfElement) {
    return true;
  }
  else {
    return true;
  }
}

/**
 * Updating Tealium udo_metadata to utag.
 *
 * View function for tracking object data.
 */
function refresh_tealium_udo_tag() {
  if (typeof (utag) !== "undefined" && typeof (utag.view) !== "undefined" && typeof (window.Ti) !== "undefined" && typeof (window.Ti.udo_metadata) !== "undefined") {
    utag.view(window.Ti.udo_metadata);
  }
}

/**
 * Makes an element sticky for a certain period of time.
 *
 * @param $el : Element which will be sticky.
 * @param stickyDelay : Number of milliseconds to stick ad to top.
 */
function stickyWithTimeout($el, stickyDelay) {
  var processed = 0;
  jQuery(window).scroll(function () {
    if (processed == 0) {
      $el.addClass('sticky-ad');
      processed = 1;
      setTimeout(function () {
        $el.removeClass('sticky-ad');
      }, stickyDelay);
    }
  });
}
