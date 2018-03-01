/**
 * @file
 * Javascript for invoking slideshow.
 */

(function($) {
    // Scroll the Daily Free Sample flexslider view so that the current page's
    // free sample appears in the right-most position.
    Drupal.behaviors.ti_amg_fw_custom = {
        attach: function(context, settings) {
            //var page_load_url = Slideshow.page_load_url();
            var carousel_html = $('#fw-carousel ul').html();
            $('#slideshow-gallery').html(carousel_html);

            var slideshowInfo = $.parseJSON(Drupal.settings.ti_amg_fw_slideshow.slideshowInfo);
            var slidePermaLinks = $.parseJSON(Drupal.settings.ti_amg_fw_slideshow.slidePermaLinks);
            var nextSlideshow = Drupal.settings.ti_amg_fw_slideshow.nextSlideshow;
            var originalSlug = slideshowInfo.slideshow.content_type;
            var base_url = window.location.origin;
            var slideshow = new Slideshow(base_url, slideshowInfo.slideshow, slidePermaLinks, nextSlideshow, originalSlug);
            
            var slide_count = slideshowInfo.slideshow.slides.length + 1;
            $('#slides').width(slide_count * 500);

            var currentPath = window.location.pathname;
            var pathArray = window.location.pathname.split('/');
            
            // If slide number is present in URL (3rd argument of URL)
            if (!isNaN(pathArray[3]))  {
              // for history saved slideshows/{slideshow_name}/1 redirects to slideshows/{slideshow_name}/
              if (pathArray[3] == "1") {
                currentPath = currentPath.substring(0, currentPath.lastIndexOf('/'));
                var slideIndex = "slide1";
                var stateObj = { foo: slideIndex };
                history.pushState(stateObj, "", currentPath); 
                var page_load_url = Slideshow.page_load_url();
                }
                else {  
                  var page_load_url = [window.location, pathArray[3]];
                }  
            }
            else {
                var page_load_url = Slideshow.page_load_url();
            }
            
            $('#fw-carousel').carousel({
                visible: 5,
                scroll: 5,
                initCallback: carouselInitCallback(slideshow, slidePermaLinks) //this callback is defined in hd_slideshow.js
            }, function() {
                alignCarouselAndSlideshowItem(page_load_url, slideshow);
            });
        }
    };
}(jQuery));
