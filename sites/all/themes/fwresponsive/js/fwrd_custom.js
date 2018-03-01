/**
 * @file
 * Custom js file for redesigned theme.
 */

(function ($) {

  Drupal.behaviors.homepageredesign = {
  attach: function(context, settings) {
    var detect_device = get_device();
    if ($('body').find(".node-type-home-page-responsive") && detect_device == 'phone') {
      var item_height = 0;
      $('.grid-4-up').children().each(function(i, el) {
        if (i < 5) {
          if (i % 2 === 0) {
            item_height = $(this).height();
          } else {
            if ($(this).height() > item_height) {
              $(this).prev('article').css('height', $(this).height());
              $(this).css('height', $(this).height());
            } else {
              $(this).css('height', item_height);
              $(this).prev('article').css('height', item_height);
            }
          }
        }
        else {
          item_height = 0;
        }
        });
      }
    }
  };

  // Making Pop-up window for recipe video.
  Drupal.behaviors.recipeVideoPopup = {
    attach: function (context, settings) {
      var video_id = $('.brightcove-jumpstart .video-js').attr('data-video-id');
      var detect_device = get_device();
      if (detect_device == "desktop") {
        jQuery("body").on("click", ".recipe__video-image-wrapper", function () {
          document.getElementById("playerLightbox").className = "playerShow";
          var player = document.getElementById("playerLightbox").querySelector('.video-js');
          if (typeof (bcJumpstart) !== "undefined") {
            bcJumpstart.ready(function (player) {
              bcJumpstart.playVideoOrAd(player);
            }, player)
          }
        });
        jQuery("body").on("click", "#playerClose", function () {
          document.getElementById("playerLightbox").className = "playerHide";
          var player = document.getElementById("playerLightbox").querySelector('.video-js');
          if (typeof (bcJumpstart) !== "undefined") {
            bcJumpstart.ready(function (player) {
              bcJumpstart.pauseVideoOrAd(player);
            }, player)
          }
        });
      }
   }
  }
  // Making Pop-up window for social share buttons.
  Drupal.behaviors.socialSharePopup = {
    attach: function (context, settings) {
      var detect_device = get_device();
      var pickclick = (detect_device != "desktop") ? "touchstart" : "click";
      // Adding Omniture user action tracking.
      // For slideshows and video pages socail share links.
      $(".slideshow-deck-social, .social-share-hover, .video-social, .article-social, .feature__info-top__share").find("li a").not(".main-menu__social-icon--comments").on(pickclick, function (e) {
        e.preventDefault();
        var sc_link_class = $(this).attr("class");
        var sc_arr = sc_link_class.split(' ');
        var inWindow = false;
        if (sc_arr[2] != '') {
          var sc_share_class = sc_arr[2];
          var omni_social_network = '';
          switch (sc_share_class) {
            case 'main-menu__social-icon--fb':
              omni_social_network = 'facebook';
              update_utag_link("social_share|" + omni_social_network);
              break;

            case 'main-menu__social-icon--twitter':
              omni_social_network = 'twitter';
              update_utag_link("social_share|" + omni_social_network);
              break;

            case 'main-menu__social-icon--pinterest':
              omni_social_network = 'pinterest';
              update_utag_link("social_share|" + omni_social_network);
              break;

            case 'main-menu__social-icon--instagram':
              omni_social_network = 'instagram';
              update_utag_link("social_share|" + omni_social_network);
              break;
          }
        }
        var url = $(this).attr('href');
        if (detect_device == "desktop") {
             popupWindow = window.open(url,
                'popUpWindow',
                'height=500,width=500,left=100,top=100,resizable=yes,scrollbars=yes,toolbar=yes,menubar=no,location=no,directories=no, status=yes');
             inWindow = false;
        }
        else {
          inWindow = true;
        }
        return inWindow;
      });
      // Adding Omniture user action tracking.
      // For page header menu socail share links.
      $(".main-menu__nav .main-menu__social").find("a").on(pickclick, function (e) {
        var sc_link_class = $(this).attr("class");
        var sc_arr = sc_link_class.split(' ');
        if (sc_arr[2] != '') {
          var sc_share_class = sc_arr[2];
          var omni_social_network = '';
          switch (sc_share_class) {
            case 'main-menu__social-icon--fb':
              omni_social_network = 'facebook';
              update_utag_link("social_share|" + omni_social_network);
              break;

            case 'main-menu__social-icon--twitter':
              omni_social_network = 'twitter';
              update_utag_link("social_share|" + omni_social_network);
              break;

            case 'main-menu__social-icon--pinterest':
              omni_social_network = 'pinterest';
              update_utag_link("social_share|" + omni_social_network);
              break;

            case 'main-menu__social-icon--instagram':
              omni_social_network = 'instagram';
              update_utag_link("social_share|" + omni_social_network);
              break;
          }
        }
        return true;
      });
      // Adding Omniture user action tracking.
      // For blogs and recipes pages socail share links.
      $("a#p-social-share-button").on(pickclick, function (e) {
        e.preventDefault();
        var inWindow = false;
        var omni_social_network = 'pinterest';
        update_utag_link("social_share|" + omni_social_network);
        var url = $(this).attr('href');
        if (detect_device == "desktop") {
          popupWindow = window.open(url,
                  'popUpWindow',
                  'height=500,width=500,left=100,top=100,resizable=yes,scrollbars=yes,toolbar=yes,menubar=no,location=no,directories=no, status=yes');
          inWindow = false;
        }
        else {
          inWindow = true;
        }
          return inWindow;
      });
      $("a#f-social-share-button").on(pickclick, function (e) {
        e.preventDefault();
        var inWindow = false;
        var omni_social_network = 'facebook';
        update_utag_link("social_share|" + omni_social_network);
        var url = $(this).attr('href');
        if (detect_device == "desktop") {
          popupWindow = window.open(url,
                'popUpWindow',
                'height=500,width=500,left=100,top=100,resizable=yes,scrollbars=yes,toolbar=yes,menubar=no,location=no,directories=no, status=yes');
          inWindow = false;
        }
        else {
          inWindow = true;
        }
        return inWindow;
      });
      $("a#t-social-share-button").on(pickclick, function (e) {
        e.preventDefault();
        var omni_social_network = 'twitter';
        var inWindow = false;
        update_utag_link("social_share|" + omni_social_network);
        var url = $(this).attr('href');
        if (detect_device == "desktop") {
            popupWindow = window.open(url,
                'popUpWindow',
                'height=500,width=500,left=100,top=100,resizable=yes,scrollbars=yes,toolbar=yes,menubar=no,location=no,directories=no, status=yes');
            inWindow = false;
        }
        else {
          inWindow = true;
        }
        return inWindow;
      });
      $("a#email-button").on(pickclick, function (e) {
        e.preventDefault();
        var omni_social_network = 'email';
        update_utag_link("social_share|" + omni_social_network);
        var url = $(this).attr('href');
        window.open(url, '_parent');
        return false;
      });
      $("a#print-button").on(pickclick, function (e) {
        e.preventDefault();
        var omni_social_network = 'print';
        update_utag_link("social_share|" + omni_social_network);
        var url = $(this).attr('href');
        window.location.href = url;
        return false;
      });
    }
  }
  // Drupal.behaviors.mobileHamburgerMenu = {
  // attach: function(context, settings) {.
  var mobileHamburgerMenu = function () {
    if ($('.cassic-aspen-mobile-bottom').length > 0) {
      $('.mobile_subnav_hamburger').click(function () {
        $('.cassic-aspen-mobile-bottom').addClass('expand-menu');
        $('.mobile_subnav_hamburger').css({'display': 'none'});
        $('.mobile_subnav_expand_hamburger').css({'display': 'block'});
        var device = get_device();
        if (device == 'phone') {
          $('.cassic-aspen-mobile-bottom').height($(window).height() - parseInt($('.site-header').height()));
        }
      });
      $('.mobile_subnav_expand_hamburger').click(function () {
        $('.cassic-aspen-mobile-bottom').removeClass('expand-menu');
        $('.mobile_subnav_expand_hamburger').css({'display': 'none'});
        $('.mobile_subnav_hamburger').css({'display': 'block'});
      });
    }
  };
  // }
  // }
  // Drupal.behaviors.stickySubMenu = {
  // attach: function(context, settings) {.
  var stickySubMenu = function () {
    if ($('.classic_aspen_header').length > 0) {
      var is_sticky = 0;
      var sub_nav_pos = parseInt($('.classic_aspen_header').offset().top);
      var device = get_device();
      if ($('.node-type-gallery').length > 0 && device != 'phone') {
        var sub_nav_pos = parseInt($('#gallery_leaderboard_ad_holder').offset().top);
        $(window).scroll(function () {
          var scrollTop = $(window).scrollTop();
          if ($('.sub_nav_sticky_gallery').length > 0) {
            if (scrollTop < sub_nav_pos) {
              $('.classic_aspen_header').removeClass('sub_nav_sticky_gallery');
            }
          }
          else {
              if (scrollTop > sub_nav_pos) {
                $('.classic_aspen_header').addClass('sub_nav_sticky_gallery');

              }

            }
          });
        }
        else {
          $(window).scroll(function() {
            var scrollTop = $(window).scrollTop();
            if ($('.sub_nav_sticky').length > 0) {
              if (scrollTop < sub_nav_pos) {
                $('.classic_aspen_header').removeClass('sub_nav_sticky');
              }
            }
            else {
              if (scrollTop > sub_nav_pos) {
                $('.classic_aspen_header').addClass('sub_nav_sticky');

              }

            }
          });
        }
      }
    };
    //}
  //}
    //Making Ajax request for the video detail page if a video is clicked on the related videos
    // If a video is clicked on the related videos.
    Drupal.behaviors.ti_amg_fwrd_video = {
        attach: function (context, settings) {
            $('body').on('click', '.node-type-video article.story-card--is-video > a.story-card__link', function (e) {
                e.preventDefault();
                $("html, body").animate({scrollTop:0},"slow");
                $('.video-carousel__video__loader, .video-carousel__fade_video_loader').css('display','block');
                var videoID = $(this).parent().attr('data-video-id');
                var video_asset_id = $(this).parent().attr('data-video-asset-id');
                var publishedDate = $(this).parent().attr('data-published-date');
                var pathalias = $(this).parent().attr('data-path-alias');
                var baseURL = location.protocol + "//" + location.host + "/loadvideo/";
                if (videoID !== null || videoID !== 'undefined') {
                    // do ajax request
                    $.ajax({
                        method: "get",
                        url: baseURL + videoID,
                        success: function (data) {
                          // Update the main wrapper with the new data
                          $("#video-holder").html(data);
                          // Update the URL
                          var replaceURL = location.protocol + "//" + location.host + "/" + pathalias;
                          history.replaceState(null, null, replaceURL);
                          // To reinitiating the jumpstart player.
                          if (typeof (bcJumpstart) !== "undefined") {
                            bcJumpstart.start(document.querySelector(".brightcove-jumpstart .video-js"));
                            bcJumpstart.rebind.stickyplay();
                          }
                          // Reinitate the player
                          brightcove.createExperiencesPostLoad();
                          // Reinitalize the components for the carosuel to load properly after the ajax call
                          window.componentRegistry.initComponents();
                          // reload the outbrain modules
                          videoOmnitureRefresh(videoID, publishedDate, video_asset_id);
                          AdsRefresh();
                          reloadOutBrainModules();
                          $('.video-carousel__video__loader, .video-carousel__fade_video_loader').css('display', 'none');
                          Drupal.attachBehaviors();
                        }
                    });
                }
            });
        }
    }

  // Hide Spot-IM Neswfeed.
  Drupal.behaviors.Spot_IM_Hide = {
    attach: function (context, settings) {
      jQuery(window).bind("load", function () {
        jQuery('div.spot-im-newsfeed-module').remove();
        jQuery('div.sp_ticker').remove();
      });
    }
  }

    // Category Page Tout Section - Load More Function.
    Drupal.behaviors.Tout_Load_More_Display = {
        attach: function (context, settings) {
            jQuery(document).ready(function() {
                var tout_row_count_latest = Drupal.settings.tout_row_count_latest;
                var tout_row_count_recipe = Drupal.settings.tout_row_count_recipe;
                var see_more_url = Drupal.settings.term_path_alias;
                if (jQuery(".grid-row-latest-3").length > 0) {
                    jQuery('.grid-row-latest-3').hide();
                }
                if (jQuery(".grid-row-latest-4").length > 0) {
                    jQuery('.grid-row-latest-4').hide();
                }
                if (jQuery(".grid-row-latest-5").length > 0) {
                    jQuery('.grid-row-latest-5').hide();
                }
                if (jQuery(".load-more-touts-latest").length > 0) {
                    jQuery('.load-more-touts-latest').show();
                }
                if (jQuery(".nojs-see-more-touts-latest").length > 0) {
                    jQuery('.nojs-see-more-touts-latest').hide();
                }
                jQuery('.load-more-touts-latest').css( 'cursor', 'pointer' );
                jQuery('.load-more-touts-latest').click(function() {
                    if (tout_row_count_latest > 2) {
                        if ( (jQuery(".grid-row-latest-3").length > 0) && (jQuery('.grid-row-latest-3').is(':hidden')) ) {
                            jQuery('.grid-row-latest-3').fadeIn(1000);
                            if (tout_row_count_latest <= 3) {
                                jQuery('.load-more-touts-latest').hide();
                            }
                            return false;
                        }
                        if ( (jQuery(".grid-row-latest-4").length > 0) && (jQuery('.grid-row-latest-3').is(':visible')) && (jQuery('.grid-row-latest-4').is(':hidden')) ) {
                            jQuery('.grid-row-latest-4').fadeIn(1000);
                            if (tout_row_count_latest <= 4) {
                                jQuery('.load-more-touts-latest').hide();
                            }
                            return false;
                        }
                        if ( (jQuery(".grid-row-latest-5").length > 0) && (jQuery('.grid-row-latest-3').is(':visible')) && (jQuery('.grid-row-latest-4').is(':visible')) && (jQuery('.grid-row-latest-5').is(':hidden')) ) {
                            jQuery('.grid-row-latest-5').fadeIn(1000);
                            if (tout_row_count_latest == 5) {
                                jQuery('.load-more-touts-latest').text('See More');
                                jQuery('.load-more-touts-latest').attr('href', see_more_url);
                            }
                            return false;
                        }
                    }
                });
                if (jQuery(".grid-row-recipe-3").length > 0) {
                    jQuery('.grid-row-recipe-3').hide();
                }
                if (jQuery(".grid-row-recipe-4").length > 0) {
                    jQuery('.grid-row-recipe-4').hide();
                }
                if (jQuery(".grid-row-recipe-5").length > 0) {
                    jQuery('.grid-row-recipe-5').hide();
                }
                if (jQuery(".load-more-touts-recipe").length > 0) {
                    jQuery('.load-more-touts-recipe').show();
                }
                if (jQuery(".nojs-see-more-touts-recipe").length > 0) {
                    jQuery('.nojs-see-more-touts-recipe').hide();
                }
                jQuery('.load-more-touts-recipe').css( 'cursor', 'pointer' );
                jQuery('.load-more-touts-recipe').click(function() {
                    if (tout_row_count_recipe > 2) {
                        if ( (jQuery(".grid-row-recipe-3").length > 0) && (jQuery('.grid-row-recipe-3').is(':hidden')) ) {
                            jQuery('.grid-row-recipe-3').fadeIn(1000);
                            if (tout_row_count_recipe <= 3) {
                                jQuery('.load-more-touts-recipe').hide();
                            }
                            return false;
                        }
                        if ( (jQuery(".grid-row-recipe-4").length > 0) && (jQuery('.grid-row-recipe-3').is(':visible')) && (jQuery('.grid-row-recipe-4').is(':hidden')) ) {
                            jQuery('.grid-row-recipe-4').fadeIn(1000);
                            if (tout_row_count_recipe <= 4) {
                                jQuery('.load-more-touts-recipe').hide();
                            }
                            return false;
                        }
                        if ( (jQuery(".grid-row-recipe-5").length > 0) && (jQuery('.grid-row-recipe-3').is(':visible')) && (jQuery('.grid-row-recipe-4').is(':visible')) && (jQuery('.grid-row-recipe-5').is(':hidden')) ) {
                            jQuery('.grid-row-recipe-5').fadeIn(1000);
                            if (tout_row_count_recipe == 5) {
                                jQuery('.load-more-touts-recipe').text('See More');
                                jQuery('.load-more-touts-recipe').attr('href', see_more_url);
                            }
                            return false;
                        }
                    }
                });
                jQuery('.load-more-text-links').css( 'cursor', 'pointer' );
                // Text Link Section Load More button implementation.
                var text_link_row_count = $('.text-link-section .grid-3-up .grid-row').length;
                var hidden_rows = $('.text-link-section .grid-3-up .grid-row.hide').length;
                var limit = text_link_row_count - hidden_rows;
                var counter = 0
                $('.load-more-text-links').click(function() {
                  if (text_link_row_count > limit) {
                    ++counter;
                    if (counter == 3) {
                      $('.text-link-section .grid-3-up').find("*").removeClass("hide");
                      $('.text-link-section .load-more-text-links').addClass('hide');
                    }
                    if (counter < 3) {
                      toggle_item_number = limit + counter;
                      next_item_number = toggle_item_number + 1;
                      if($('.text-link-section .grid-3-up .grid-row--' + next_item_number).length <= 0){
                        $('.text-link-section .load-more-text-links').addClass('hide');
                      }
                      if ($('.text-link-section .grid-3-up .grid-row--' + toggle_item_number).length > 0) {
                        $('.text-link-section .grid-3-up .grid-row--' + toggle_item_number).removeClass('hide');
                      }
                    }
                  }
                });
            });
        }
    }
  // Read More Button in Category page.
  Drupal.behaviors.readMore = {
    attach: function(context, settings) {
      var closedHeight = $('.page-heading--desc').height();
      var openHeight = $('.page-heading--desc-interior').height() + 15;
      var isOpen = false;
      if (closedHeight <= openHeight) {
        $(".node-type-category .page-heading__link, .page-taxonomy-term-fw_category .page-heading__link, .node-type-channel-landing-page-responsive .page-heading__link,  .node-type-video-landing-page .page-heading__link").click(function() {
          if (isOpen) {
            $('.page-heading__link').text('READ MORE').removeClass('open');
            $('.page-heading--desc').height(closedHeight);
            isOpen = false;
          }
          else {
            $('.page-heading__link').text('READ LESS').addClass('open');
            $('.page-heading--desc').height(openHeight);
            isOpen = true;
          }
        });
      }
    }
  }
  // User Action Tracking for Global Naviagion Menu.
  Drupal.behaviors.homepageredesign = {
  attach: function(context, settings) {
      $("ul.main-menu__nav a.main-menu__item__link").not(".main-menu__social-icon").click(function (e) {
        var link_name = $(this).text();
        update_utag_link("global-nav|" + link_name);
      });
    }
  };
  mobileHamburgerMenu();
  stickySubMenu();
})(jQuery);

// Reload the outbrain modules after the ajax call
function reloadOutBrainModules() {
    if (typeof(OBR) !== "undefined" && typeof(OBR.extern) !== "undefined" &&
            typeof(OBR.extern.researchWidget) !== "undefined") {
       OBR.extern.researchWidget("http://" + document.location.hostname + document.location.pathname);
    }
}

function videoOmnitureRefresh(videoID,publishedDate,video_asset_id) {
    content_id = videoID;
    published_date = publishedDate;
    title = jQuery('.story-card__title').html();
    title = title.replace(/^\s*|\s*$/g, '');
    pageName = 'fw|video|' + title;
    path = document.location.pathname;
    prop_four = document.location.pathname;
    sub_channel = path.replace(/\//g, '|');
    prop_five = sub_channel.substring(1);
    page_title = title;
    document.title = 'Video |' + page_title + ' | Food&Wine';
    url = location.protocol + "//" + location.host + location.pathname;
    var video_bc_id = '';
    if (video_asset_id != '') {
        video_bc_id = video_asset_id;
    }
    if (utag && typeof (window.Ti.udo_metadata) !== "undefined") {
        window.Ti.udo_metadata.page_name = jQuery.trim(title);
        window.Ti.udo_metadata.content_id = jQuery.trim(content_id);
        window.Ti.udo_metadata.friendly_url = url;
        window.Ti.udo_metadata.publish_date = jQuery.trim(published_date);
        window.Ti.udo_metadata.video_asset_id = video_bc_id;
        var video_pathname_arr = window.location.pathname.split('/');
        if (video_pathname_arr != '') {
            window.Ti.udo_metadata.site_section1 = video_pathname_arr[1];
            window.Ti.udo_metadata.site_section2 = video_pathname_arr[2];
        }
    }
    if (utag && utag.view && typeof (window.Ti) !== "undefined" && typeof (window.Ti.udo_metadata) !== "undefined") {
        utag.view(window.Ti.udo_metadata);
    }
}

function updateAdFactoryParams(pathalias, videoID){
  adFactory_sub = pathalias;
  adFactory_nid = videoID;
  adFactory.setParam('sub', adFactory_sub);
  adFactory.setParam('nid', adFactory_nid);
}

//To refresh the leaderboard Ad when video page is reloaded
function AdsRefresh() {
  var detect_device = get_device();
  if (detect_device == 'desktop') {
    if (jQuery(".node-type-recipe").length > 0) {
      // Adding the adslot for desktop & mobile.
      if (jQuery('div#ad-multi_ad_leaderboard').length > 0) {
        var scrollTopPosition, bottomOfElement, outerHeight;
        scrollTopPosition = Math.round(jQuery(window).scrollTop());
        outerHeight = Math.round(jQuery('#ad-multi_ad_leaderboard').outerHeight(true)) / 2;
        bottomOfElement = Math.round(jQuery('#ad-multi_ad_leaderboard').offset().top + outerHeight);
        // Check if ad is in view port.
        if (scrollTopPosition < bottomOfElement) {
          time_dfp.refresh("ad-multi_ad_leaderboard");
        }
      }
    }else{
      if (jQuery('div#ad-multi_ad_leaderboard').length > 0) {
        time_dfp.refresh("ad-multi_ad_leaderboard");
      }
    }
  }
  if (detect_device == 'phone') {
    if (jQuery('div#ad-mobile_ad_leaderboard').length > 0) {
      time_dfp.refresh("ad-mobile_ad_leaderboard");
    }
  }
}

function createCookie(name,value,days) {
  if (days) {
    var date = new Date();
    date.setTime(date.getTime()+(days*24*60*60*1000));
    var expires = "; expires="+date.toGMTString();
  }
  else {
    var expires = "";
  }
  document.cookie = name+"="+value+expires+"; path=/";
}

function readCookie(name) {
   var nameEQ = name + "=";
   var ca = document.cookie.split(';');
   for(var i=0;i < ca.length;i++) {
       var c = ca[i];
       while (c.charAt(0)==' ') c = c.substring(1,c.length);
       if (c.indexOf(nameEQ) == 0) return c.substring(nameEQ.length,c.length);
   }
   return null;
}

function eraseCookie(name) {
   createCookie(name,"",-1);
}

// Assigning user action tracking(prop43).
function update_utag_link(dsc) {
  if (dsc != '') {
    var omni_arr = dsc.split('|');
    // User Action Tracking for Global Navigation Menu.
    if (omni_arr[0] != '' && omni_arr[0] == 'global-nav' && omni_arr[1] != '') {
      omni_click_id = dsc;
      utag.link({
        "event_name": omni_arr[0],
        "click_id": omni_click_id
      });
    } else if (omni_arr[0] != '' && omni_arr[0] == 'social_share' && omni_arr[1] != '') {
      // User Action Tracking for Social Share.
      var omni_event_name = omni_arr[0];
      var omni_social_network = omni_arr[1];
      var omni_click_id = 'sharebar|' + omni_arr[1];
      utag.link({
        "event_name": omni_event_name,
        "social_network": omni_social_network,
        "click_id": omni_click_id
      });
    }
  }
}
