/**
 * @file
 * Custom js file for redesigned theme.
 */

(function ($) {

  // Vertical Gallery sticky right rail ad.
  Drupal.behaviors.stickyRightRailAd = {
    attach: function (context, settings) {
      if ($(".vertical-gallery").length > 0) {
        var detect_device = get_device();
        if ((detect_device == "desktop")) {
          function sticky_ad() {
            var nativoRightrail = $('#ad_300x100_wrapper').offset().top + $('#ad_300x100_wrapper').height() - 55;

            var galleryHeight = $('.l-two-col__left').height();
            $('.gallery-right-rail-section').css('height', galleryHeight);

            if ($(document).scrollTop() > nativoRightrail) {
              $('.gallery-right-rail-section .ad').addClass('is-stuck');
            } else {
              $('.gallery-right-rail-section .ad').removeClass('is-stuck');
            }

            var adBottom = $('.gallery-right-rail-section .ad').offset().top + $('.gallery-right-rail-section .ad').height();
            var footerTop = $('.footer').offset().top - 20;

            var footerCheck = $('.footer').offset().top - $('.gallery-right-rail-section .ad').height() - 20;

            if (adBottom >= footerTop && $(document).scrollTop() > footerCheck) {
              $('.gallery-right-rail-section .ad').addClass('bottom');
              $('.gallery-right-rail-section .ad').removeClass('is-stuck');
           } else {
              $('.gallery-right-rail-section .ad').removeClass('bottom');
            }
          };
          $(window).on('scroll', $.throttle(150, sticky_ad));
        }
      }
    }
  }


  Drupal.behaviors.eachslide = {
    attach: function (context, settings) {
      $(window).on('load', function() {
      if ($(".vertical-gallery").length > 0) {
        var lastSlideOffset;
        var slideCount = 0;
        var slideLength;
        var slide_container;
        var slideSelector = '.gallery_slide_vertical';
        var isClass;
        var slideTitle = '';
        var slideNumber = 1;
        if (window.location.hash != '') {
          var header_height = 0;
          var top_value = $(window.location.hash).offset().top;
          if ($('.sticky-wrapper').length > 0) {
            header_height = $('.sticky-wrapper').height() + 25;
          }
          if ($('.campaign header').length > 0) {
            header_height = $('.campaign header').height() + 10;
          }
          top_value = top_value - header_height;
          $(window).scrollTop(top_value);
        }
        lastSlideOffset = $(slideSelector).offset().top;
        slideLength = $(slideSelector).length;
        $(slideSelector).once('detect-each-slide').each(function(index) {
          var slide_container;
          var thisSlideOffset = $(this).offset().top;
            lastSlideOffset = thisSlideOffset + $(this).outerHeight(true);

            slide_container = 'gallery_slide_'+slideCount;
            $(window).on('scroll', $.throttle(0, function(event) {
                var slideIsInView = (isInView($('#' + slide_container), 0));
                isClass = $('#' + slide_container).hasClass('slide-in-view');

                if(slideIsInView && !isClass) {
                  console.log('Slide in view - '+slide_container);
                  $('#' + slide_container).addClass('slide-in-view');
                  // Update the URL
                  slideTitle = $('#'+slide_container+' .image-wrap__title a').html();
                  cleanTitle = $('#'+slide_container+'>a').attr('name');
                  var replaceURL = location.protocol + "//" + location.host + location.pathname + "#" +cleanTitle;
                  history.replaceState(null, null, replaceURL);

                  // Update slide details to Tealium
                  if (typeof (window.Ti.udo_metadata) !== "undefined") {
                    var pNumber = slide_container.split('_');
                    slideNumber = parseInt(pNumber[pNumber.length - 1]);
                    var actual_slide_num = slideNumber + 1;
                    // Updating the correlator value.
                    // Refreshing the right rail first ad for every 3rd slide.
                    if ((actual_slide_num % 3) == 0) {
                      try{
                        time_dfp.updateCorrelator();
                        time_dfp.refresh('ad-ad_multiad_300x250');
                      }
                      catch (err) {
                        console.log(err.message);
                      }
                    }
                    window.Ti.udo_metadata.slide_title = slideTitle;
                    window.Ti.udo_metadata.page_number = actual_slide_num;
                  }
                  refresh_tealium_udo_tag();
                }
                if (!slideIsInView && isClass) {
                  $('#' + slide_container).removeClass('slide-in-view');
                }
              })
            );

            slideCount++;
        });
      }
    });
    }
  }

  // Determines if a DOM element is in view right now.
  function isInView($placeholder, $threshold) {
    var ad_id = $placeholder.data('id');
    var $window = $(window);

    var docViewTop = $window.scrollTop();
    var docViewBottom = docViewTop + $window.height();

    var elemTop = $placeholder.offset().top - $threshold;
    var elemBottom = elemTop + $placeholder.height();

    return ((elemTop <= docViewBottom) && (elemBottom >= docViewTop));
  }


}(jQuery));
