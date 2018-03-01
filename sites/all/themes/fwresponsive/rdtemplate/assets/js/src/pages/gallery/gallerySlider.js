/**
 * @file
 * Js file for Gallery Slider.
 */

'use strict';

var $ = require('jquery'),
        ko = require('knockout'),
        Hammer = require('hammerjs'),
        config = require('../../config'),
        createHistory = require('history').createHistory,
        imagePrefetcher = require('../../lib/imagePrefetcher');

var history = createHistory();

// setting global variable for Simple Reach referrer URL
var fw_slideshow_referrer_url = "http://" + document.location.hostname + document.location.pathname;

require('slick-carousel');

ko.bindingHandlers.leftArrowPress = {
  init: function (element, valueAccessor) {
    document.addEventListener('keyup', function (e) {
      if (e.keyCode != 37) {
        return;
      }

      valueAccessor()();
    });
  }
};

ko.bindingHandlers.rightArrowPress = {
  init: function (element, valueAccessor) {
    document.addEventListener('keyup', function (e) {
      if (e.keyCode != 39) {
        return;
      }

      valueAccessor()();
    });
  }
};

// For stiching the Interstitial AD after the 4th Slide on Mobile and Tablet.
ko.bindingHandlers.interstitialad = {
  init: function (element) {
    $('.advertisement-mobile-gallery-interstitial-300x250-1').css({'display': 'block'});
    $('#interstitial_ad').append('<div id="slide_ad_container"><div  class="ad-placeholder ad-refresh" id="ad-gallery_interstitial_ad" data-id="gallery_interstitial_ad" data-type="regular"></div></div>');
    Drupal.attachBehaviors();
  }
};

ko.bindingHandlers.swipe = {
  init: function (element, valueAccessor) {
    bindHammerEvent(element, 'swipe', valueAccessor());
  }
};

ko.bindingHandlers.swipeLeft = {
  init: function (element, valueAccessor) {
    bindHammerEvent(element, 'swipeleft', valueAccessor());
  }
};

ko.bindingHandlers.swipeRight = {
  init: function (element, valueAccessor) {
    bindHammerEvent(element, 'swiperight', valueAccessor());
  }
};

function bindHammerEvent(element, event, handler) {
  var hammer = new Hammer(element);
  hammer.on(event, handler);
}

module.exports = GalleryViewModel;

function GalleryViewModel(data) {
  var self = this;
  this.slides = data.slides;
  this.updateAds = ko.observable();
  this.is_clickable = true;
  // This is based off of the data being set from the server, which is *not* 0 based.
  this.currentSlideIndex = ko.observable(data.initial_slide_index);
  this.refresh_time = 0;
  if (typeof (Drupal.settings.ad_refresh_time) != "undefined") {
    this.refresh_time = Drupal.settings.ad_refresh_time;
  }
  this.interstitial_ad_timeout_time = 0;
  if (typeof (Drupal.settings.interstitial_ad_time) != "undefined") {
    this.interstitial_ad_timeout_time = Drupal.settings.interstitial_ad_time;
  }
  // If the flag updateAds is undefined, the gallery has just loaded. Set flag to false and start timer.
  if (typeof self.updateAds() === 'undefined') {
    self.updateAds(false);
    setTimeout(function () {
      self.updateAds(true);
    }, self.refresh_time);
  }

  this.currentSlideIndex.subscribe(function (newValue) {
    if (!self.isFirstSlide()) {
      var prevSlide = self.slides[newValue - 1];
      imagePrefetcher(prevSlide.imgUrl);
    }

    if (!self.isLastSlide()) {
      var nextSlide = self.slides[newValue + 1];
      imagePrefetcher(nextSlide.imgUrl);
    }

  });

  this.currentSlide = ko.pureComputed(function () {
    return self.slides[self.currentSlideIndex()];
  });

  this.slideVideoObject = ko.pureComputed(function() {
    var account_id = Drupal.settings.ti_amg_fwrd_gallery.account_id;
    var player_id = Drupal.settings.ti_amg_fwrd_gallery.player_id;
    var videoObject = "<video data-video-id=\"" + data.slides[self.currentSlideIndex()].video_id + "\"  data-account=\"" + account_id + "\" data-player=\"" + player_id + "\" data-embed=\"default\" data-application-id class=\"video-js\" data-autoplay=\"false\" controls></video>";
    return videoObject;
  });

  this.currentSlide.subscribe(function (newValue) {
    try {
      localStorage.test = 2;
    }
catch (e) {
      console.log('You are in Private Browsing mode');
      return false;
    }
    console.log("safe history");
    history.replaceState(null, newValue.slide_url);
  });

  this.currentSlideNum = ko.pureComputed(function () {
    return self.currentSlideIndex() + 1;
  });

  this.currentSlideNumTotal = ko.pureComputed(function () {
    var currentSlideIndex = data.slides[self.currentSlideIndex()].slide_number;
    return currentSlideIndex;
  });

  this.isFirstSlide = function () {
    return self.currentSlideIndex() === 0;
  };

  this.isLastSlide = function () {
    if (detect_device == 'desktop') {
      return data.slides[self.currentSlideIndex()].slide_number == data.total_slides;
    }
    else {
      return self.currentSlideIndex() == self.slides.length - 1;
    }
  };

  var meta_title = data.page_title;

  this.gotoNextSlide = function () {
    if (self.is_clickable) {
      if (self.isLastSlide() && data.next_gallery_url) {
        createCookie('prev_gallery', window.location.href);
        window.location = data.next_gallery_url;
        return;
      }
      self.currentSlideIndex(self.currentSlideIndex() + 1);
      if ((data.slides[self.currentSlideIndex()].interstitial_ad == 'FALSE')) {
        self.is_clickable = true;

      }
      else {
        if ((data.slides[self.currentSlideIndex()].outbrain_ad) && (data.slides[self.currentSlideIndex()].outbrain_ad == 'TRUE')) {
          $("#showSkipAd").hide();
          gallery_end_slate_outbrain();
        }
        else {
          if ((data.slides[self.currentSlideIndex()].interstitial_ad == 'TRUE') && (detect_device != 'desktop')) {
            var ad_pos = (data.slides[self.currentSlideIndex()].slide_number) / 4;
            var slotSettings = Drupal.settings['ad_settings_gallery_interstitial_ad'];
            slotSettings.getAd.setPosition = ad_pos;
            $('.advertisement-mobile-gallery-interstitial-300x250-1').css({'display': 'block'});
            $('#interstitial_ad').append('<div id="slide_ad_container"><div  class="ad-placeholder ad-refresh" id="ad-gallery_interstitial_ad" data-id="gallery_interstitial_ad" data-type="regular"></div>');
            try {
              time_dfp.updateCorrelator();
              Drupal.attachBehaviors();
            }
            catch (err) {
              console.log(err.message);
            }

            self.is_clickable = false;
            $("#ad_holder").css("display","flex");
            $(".pagination-btn--prev").find(".pagination-arrow-icon").css("opacity","0.2");
            $(".pagination-btn--next").find(".pagination-arrow-icon").css("opacity","0.2");
            $("#showSkipAd").hide();
            setTimeout(function () {
              self.is_clickable = true;
              $("#ad_holder").hide();
              $(".pagination-btn--prev").find(".pagination-arrow-icon").css("opacity","1");
              $(".pagination-btn--next").find(".pagination-arrow-icon").css("opacity","1");
              $("#showSkipAd").css("display","inline-block");
            }, self.interstitial_ad_timeout_time);
          }
          else if ((data.slides[self.currentSlideIndex()].interstitial_ad == 'TRUE') && (detect_device == 'desktop')) {
            self.currentSlideIndex(self.currentSlideIndex() + 1);
            if ((self.slides[self.currentSlideIndex()].outbrain_ad) && (self.slides[self.currentSlideIndex()].outbrain_ad == 'TRUE')) {
              gallery_end_slate_outbrain();
            }
            else {
              self.is_clickable = true;
            }
          }
        }
      }
      // If the flag updateAds is true, start the timer and refresh the ads.
      if (self.updateAds()) {
        self.updateAds(false);
        setTimeout(function () {
          galleryAdRefresh();
          self.updateAds(true);
        }, self.refresh_time);
      }
      if (typeof (Drupal.settings.sponsor_campaign) != "undefined") {
        if (!Drupal.settings.sponsor_campaign.in_campaign) {
          bottomOutbrainUpdate();
          if (detect_device == "desktop") {
            rightRaiOutbrainUpdate();
          }
          reloadGlobalOutBrainModules();
        }
      }
      if (data.slides[self.currentSlideIndex()].slide_number != '') {
        if ((data.slides[self.currentSlideIndex()].interstitial_ad == 'TRUE') && (detect_device != 'desktop')) {
          document.title = "ad-" + data.slides[self.currentSlideIndex()].slide_number + " - " + meta_title + " | Food & Wine";
          if (utag && typeof (window.Ti.udo_metadata) !== "undefined") {
            window.Ti.udo_metadata.slide_title = 'Interstitial Ad';
            window.Ti.udo_metadata.page_number = "ad-" + data.slides[self.currentSlideIndex()].slide_number;
          }
          $('link[rel*=canonical]').attr('href', window.location.href);
        }
        else {
          var slide_url = data.slides[self.currentSlideIndex()].slide_url;
          var sldshw_smrt_url = document.location.protocol + "//" + document.location.hostname + slide_url;
          document.title = data.slides[self.currentSlideIndex()].slide_number + " - " + meta_title + " | Food & Wine";
          if (utag && typeof (window.Ti.udo_metadata) !== "undefined") {
            window.Ti.udo_metadata.slide_title = data.slides[self.currentSlideIndex()].title;
            window.Ti.udo_metadata.page_number = data.slides[self.currentSlideIndex()].slide_number;
            window.Ti.udo_metadata.referrer = fw_slideshow_referrer_url;
            fw_slideshow_referrer_url = sldshw_smrt_url;
          }
          $('link[rel*=canonical]').attr('href', window.location.href);
        }
        if ((data.slides[self.currentSlideIndex()].outbrain_ad) && (data.slides[self.currentSlideIndex()].outbrain_ad == 'TRUE')) {
          document.title = "end - " + meta_title + " | Food & Wine";
          if (utag && typeof (window.Ti.udo_metadata) !== "undefined") {
            window.Ti.udo_metadata.slide_title = 'End Slide';
            window.Ti.udo_metadata.page_number = "End-" + data.slides[self.currentSlideIndex()].slide_number;
          }
          $('link[rel*=canonical]').attr('href', window.location.href);
        }
      }
      if ((data.slides[self.currentSlideIndex()].interstitial_ad == 'FALSE')) {
        if (typeof window.SPX === "undefined") {
          console.log("Swoop is required to use this method");
        }
        else {
          if (typeof window.SPX.contentUpdated != "undefined") {
            window.SPX.contentUpdated(document.querySelector('.gallery'));
          }
        }
      }
      if (data.slides[self.currentSlideIndex()].video_id != '') {
        $.getScript(Drupal.settings.ti_amg_fwrd_gallery.jumpstart_url);
        if (typeof (bcJumpstart) !== "undefined") {
          bcJumpstart.start(bcJumpstart.players[0]);
        }
      }
      refresh_tealium_udo_tag();
    }
  };

  this.skipAd = function () {
    if (self.is_clickable) {
      if (self.isLastSlide() && data.next_gallery_url) {
        createCookie('prev_gallery', window.location.href);
        window.location = data.next_gallery_url;
        return;
      }
      self.currentSlideIndex(self.currentSlideIndex() + 1);
      if ((data.slides[self.currentSlideIndex()].interstitial_ad == 'FALSE')) {
        self.is_clickable = true;

      }
      else {
        if ((data.slides[self.currentSlideIndex()].outbrain_ad) && (data.slides[self.currentSlideIndex()].outbrain_ad == 'TRUE')) {
          $("#showSkipAd").hide();
          gallery_end_slate_outbrain();
        }         
      }
      // If the flag updateAds is true, start the timer and refresh the ads.
      if (self.updateAds()) {
        self.updateAds(false);
        setTimeout(function () {
          galleryAdRefresh();
          self.updateAds(true);
        }, self.refresh_time);
      }
      if (typeof (Drupal.settings.sponsor_campaign) != "undefined") {
        if (!Drupal.settings.sponsor_campaign.in_campaign) {
          bottomOutbrainUpdate();
          if (detect_device == "desktop") {
            rightRaiOutbrainUpdate();
          }
          reloadGlobalOutBrainModules();
        }
      }
      if (data.slides[self.currentSlideIndex()].slide_number != '') {
        if ((data.slides[self.currentSlideIndex()].interstitial_ad == 'TRUE') && (detect_device != 'desktop')) {
          document.title = "ad-" + data.slides[self.currentSlideIndex()].slide_number + " - " + meta_title + " | Food & Wine";
          if (utag && typeof (window.Ti.udo_metadata) !== "undefined") {
            window.Ti.udo_metadata.slide_title = 'Interstitial Ad';
            window.Ti.udo_metadata.page_number = "ad-" + data.slides[self.currentSlideIndex()].slide_number;
          }
          $('link[rel*=canonical]').attr('href', window.location.href);
        }
        else {
          var slide_url = data.slides[self.currentSlideIndex()].slide_url;
          var sldshw_smrt_url = document.location.protocol + "//" + document.location.hostname + slide_url;
          document.title = data.slides[self.currentSlideIndex()].slide_number + " - " + meta_title + " | Food & Wine";
          if (utag && typeof (window.Ti.udo_metadata) !== "undefined") {
            window.Ti.udo_metadata.slide_title = data.slides[self.currentSlideIndex()].title;
            window.Ti.udo_metadata.page_number = data.slides[self.currentSlideIndex()].slide_number;
            window.Ti.udo_metadata.referrer = fw_slideshow_referrer_url;
            fw_slideshow_referrer_url = sldshw_smrt_url;
          }
          $('link[rel*=canonical]').attr('href', window.location.href);
        }
        if ((data.slides[self.currentSlideIndex()].outbrain_ad) && (data.slides[self.currentSlideIndex()].outbrain_ad == 'TRUE')) {
          document.title = "end - " + meta_title + " | Food & Wine";
          if (utag && typeof (window.Ti.udo_metadata) !== "undefined") {
            window.Ti.udo_metadata.slide_title = 'End Slide';
            window.Ti.udo_metadata.page_number = "End-" + data.slides[self.currentSlideIndex()].slide_number;
          }
          $('link[rel*=canonical]').attr('href', window.location.href);
        }
      }
      if ((data.slides[self.currentSlideIndex()].interstitial_ad == 'FALSE')) {
        if (typeof window.SPX === "undefined") {
          console.log("Swoop is required to use this method");
        }
        else {
          if (typeof window.SPX.contentUpdated != "undefined") {
            window.SPX.contentUpdated(document.querySelector('.gallery'));
          }
        }
      }
      if (data.slides[self.currentSlideIndex()].video_id != '') {
        $.getScript(Drupal.settings.ti_amg_fwrd_gallery.jumpstart_url);
        if (typeof (bcJumpstart) !== "undefined") {
          bcJumpstart.start(bcJumpstart.players[0]);
        }
      }
      refresh_tealium_udo_tag();
    }
  };
  
  this.gotoPrevSlide = function () {
    if (self.is_clickable) {
      if ($(".gallery-section-container").hasClass("outbrain-slide")) {
        $(".gallery-section-container").removeClass("outbrain-slide");
      }
      if (self.isFirstSlide()) {
        if (readCookie('prev_gallery') != '') {
          var prev_gallery = readCookie('prev_gallery');
          if (document.referrer == prev_gallery) {
            eraseCookie('prev_gallery');
            window.location = prev_gallery;
          }
        }
        return;
      }
      self.currentSlideIndex(self.currentSlideIndex() - 1);
      if ((data.slides[self.currentSlideIndex()].interstitial_ad == 'FALSE')) {
        self.is_clickable = true;
      }
      else {
        if ((data.slides[self.currentSlideIndex()].interstitial_ad == 'TRUE') && (detect_device != 'desktop')) {
          var ad_pos = (data.slides[self.currentSlideIndex()].slide_number) / 4;
          var slotSettings = Drupal.settings['ad_settings_gallery_interstitial_ad'];
          slotSettings.getAd.setPosition = ad_pos;
          $('.advertisement-mobile-gallery-interstitial-300x250-1').css({'display': 'block'});
          $('#interstitial_ad').append('<div id="slide_ad_container"><div  class="ad-placeholder ad-refresh" id="ad-gallery_interstitial_ad" data-id="gallery_interstitial_ad" data-type="regular"></div>');
          try {
            time_dfp.updateCorrelator();
            Drupal.attachBehaviors();
          }
          catch (err) {
            console.log(err.message);
          }
          self.is_clickable = false;
          $("#ad_holder").css("display","flex");
          $(".pagination-btn--prev").find(".pagination-arrow-icon").css("opacity","0.2");
          $(".pagination-btn--next").find(".pagination-arrow-icon").css("opacity","0.2");
          $("#showSkipAd").hide();
          setTimeout(function () {
            self.is_clickable = true;
            $("#ad_holder").hide();
            $(".pagination-btn--prev").find(".pagination-arrow-icon").css("opacity","1");
            $(".pagination-btn--next").find(".pagination-arrow-icon").css("opacity","1");
            $("#showSkipAd").css("display","inline-block");
          }, self.interstitial_ad_timeout_time);
        }
        else if ((data.slides[self.currentSlideIndex()].interstitial_ad == 'TRUE') && (detect_device == 'desktop')) {
          self.currentSlideIndex(self.currentSlideIndex() - 1);
          self.is_clickable = true;
        }
      }
      // If the flag updateAds is true, start the timer and refresh the ads.
      if (self.updateAds()) {
        self.updateAds(false);
        setTimeout(function () {
          galleryAdRefresh();
          self.updateAds(true);
        }, self.refresh_time);
      }
      if (typeof (Drupal.settings.sponsor_campaign) != "undefined") {
        if (!Drupal.settings.sponsor_campaign.in_campaign) {
          bottomOutbrainUpdate();
          if (detect_device == "desktop") {
            rightRaiOutbrainUpdate();
          }
          reloadGlobalOutBrainModules();
        }
      }
      if (data.slides[self.currentSlideIndex()].slide_number != '') {
        if (data.slides[self.currentSlideIndex()].slide_number == 1) {
          document.title = meta_title + " | Food & Wine";
          if (utag && typeof (window.Ti.udo_metadata) !== "undefined") {
            window.Ti.udo_metadata.slide_title = data.slides[self.currentSlideIndex()].title;
            window.Ti.udo_metadata.page_number = data.slides[self.currentSlideIndex()].slide_number;
          }
          $('link[rel*=canonical]').attr('href', window.location.href);
        }
        else {
          if ((data.slides[self.currentSlideIndex()].interstitial_ad == 'TRUE') && (detect_device != 'desktop')) {
            document.title = "ad-" + data.slides[self.currentSlideIndex()].slide_number + " - " + meta_title + " | Food & Wine";
            if (utag && typeof (window.Ti.udo_metadata) !== "undefined") {
              window.Ti.udo_metadata.slide_title = 'Interstitial Ad';
              window.Ti.udo_metadata.page_number = "ad-" + data.slides[self.currentSlideIndex()].slide_number;
            }
             $('link[rel*=canonical]').attr('href', window.location.href);
          }
          else {
            var slide_url = data.slides[self.currentSlideIndex()].slide_url;
            var sldshw_smrt_url = document.location.protocol + "//" + document.location.hostname + slide_url;
            document.title = data.slides[self.currentSlideIndex()].slide_number + " - " + meta_title + " | Food & Wine";
            if (utag && typeof (window.Ti.udo_metadata) !== "undefined") {
              window.Ti.udo_metadata.slide_title = data.slides[self.currentSlideIndex()].title;
              window.Ti.udo_metadata.page_number = data.slides[self.currentSlideIndex()].slide_number;
              window.Ti.udo_metadata.referrer = fw_slideshow_referrer_url;
              fw_slideshow_referrer_url = sldshw_smrt_url;
            }
            $('link[rel*=canonical]').attr('href', window.location.href);
          }
        }
      }
      if ((data.slides[self.currentSlideIndex()].interstitial_ad == 'FALSE')) {
        if (typeof window.SPX === "undefined") {
          console.log("Swoop is required to use this method");
        }
        else {
          if (typeof window.SPX.contentUpdated != "undefined") {
            window.SPX.contentUpdated(document.querySelector('.gallery'));
          }
        }
      }
      if (data.slides[self.currentSlideIndex()].video_id != '') {
        $.getScript(Drupal.settings.ti_amg_fwrd_gallery.jumpstart_url);
        if (typeof (bcJumpstart) !== "undefined") {
          bcJumpstart.start(bcJumpstart.players[0]);
        }
      }
      refresh_tealium_udo_tag();
    }
  };
}

function galleryOmnitureRefresh() {
  if (typeof (s_time) != "undefined") {
    s_time.url = location.protocol + "//" + location.host + location.pathname;
    s_time.pageName = Drupal.settings.omniture.pageName;
    s_time.campaign = "";
    s_time.eVar1 = "";
    s_time.eVar2 = "";
    s_time.prop4 = document.location.pathname;
    s_time.prop5 = Drupal.settings.omniture.prop5;
    s_time.prop6 = Drupal.settings.omniture.prop6;
    s_time.prop7 = Drupal.settings.omniture.prop7;
    s_time.prop9 = document.location.pathname;
    s_time.prop10 = document.location.pathname;
    s_time.prop11 = Drupal.settings.omniture.prop5;
    s_time.prop13 = Drupal.settings.omniture.prop13;
    s_time.prop15 = Drupal.settings.omniture.prop15;
    s_time.prop16 = Drupal.settings.omniture.prop16;
    s_time.prop17 = location.href;
    s_time.prop20 = Drupal.settings.omniture.prop20;
    s_code = s_time.t();
  }
}

function bottomOutbrainUpdate() {
  var alias_url = document.location.pathname;
  var outbrain_markup = '';
  outbrain_markup = '<section class="recipe_outbrain section-container"><div class="section-heading section-heading--center"><span>Sponsored Stories</span></div><div class="grid grid—6"><div class="OUTBRAIN" data-src="http://www.foodandwine.com' + alias_url + '" data-widget-id="AR_4"  data-ob-template="Food&Wine" ></div></div></section>';
  console.log(outbrain_markup);
  jQuery("#outbrain-wrapper-bottom").html(outbrain_markup);
}

function rightRaiOutbrainUpdate() {
  var content_path = document.location.pathname;
  var outbrain_markup_rightrail = '';
  outbrain_markup_rightrail = '<div class="OUTBRAIN" data-src="http://www.foodandwine.com' + content_path + '" data-widget-id="SB_4" data-ob-template="Food&amp;Wine"></div>';
  jQuery("#outbrain-wrapper").html(outbrain_markup_rightrail);
}

function reloadGlobalOutBrainModules() {
  if (typeof (OBR) !== "undefined" && typeof (OBR.extern) !== "undefined" &&
          typeof (OBR.extern.researchWidget) !== "undefined") {
    OBR.extern.researchWidget("http://" + document.location.hostname + document.location.pathname);
  }
}

// To refresh the gallery leaderbard and flex ad when slide moves.
function galleryAdRefresh() {
  var adSlots = new Array();
  // Adding the adslot for desktop & tablet.
  if (detect_device == 'desktop' || detect_device == 'tablet') {
    if (jQuery('div#ad-multi_ad_leaderboard').length > 0) {
      adSlots.push("ad-multi_ad_leaderboard");
    }
    if (jQuery('div#ad-ad_multiad_300x250').length > 0) {
      adSlots.push("ad-ad_multiad_300x250");
    }
  }
  // Adding the adslot for mobile.
  if (detect_device == 'phone') {
    if (jQuery('div#ad-mobile_ad_leaderboard').length > 0) {
      adSlots.push("ad-mobile_ad_leaderboard");
    }
  }
   
  time_dfp.refresh(adSlots);
}
