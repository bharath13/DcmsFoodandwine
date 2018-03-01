/**
 * @file
 * Custom js file for redesigned theme.
 */

(function ($) {

  // Vertical Gallery sticky right rail ad.
  Drupal.behaviors.slide_tracking = {
    attach: function (context, settings) {
      if ($(".vertical-gallery").length > 0) {
        var slides = $('.gallery_slide_vertical');
        var current_url = document.location.origin + document.location.pathname;

        $.fn.isOnScreen = function(){
          var element = this.get(0);
          var bounds = element.getBoundingClientRect();
          return bounds.top < window.innerHeight && bounds.bottom > 0;
        }

        function verticalGalleryOmnitureRefresh(url, pageName, slideAnchor) {
          if (typeof (s_time) != "undefined") {
            s_time.url = url;
            s_time.pageName = 'fw|slideshows|' + pageName;
            s_time.campaign = "";
            s_time.eVar1 = "";
            s_time.eVar2 = "";
            s_time.prop4 = document.location.pathname + '#' + slideAnchor;
            s_time.prop5 = Drupal.settings.omniture.prop5;
            s_time.prop6 = Drupal.settings.omniture.prop6;
            s_time.prop7 = Drupal.settings.omniture.prop7;
            s_time.prop9 = document.location.pathname + '#' + slideAnchor;
            s_time.prop10 = document.location.pathname + '#' + slideAnchor;
            s_time.prop11 = Drupal.settings.omniture.prop5;
            s_time.prop13 = Drupal.settings.omniture.prop13;
            s_time.prop15 = Drupal.settings.omniture.prop15;
            s_time.prop16 = Drupal.settings.omniture.prop16;
            s_time.prop17 = url;
            s_time.prop20 = Drupal.settings.omniture.prop20;
            s_code = s_time.t();

            utag.view(window.Ti.udo_metadata); 
          }
        }

        var prevKeys = [];

        function vertical_slide_tracking() {

          $.each(slides, function(key, value){

            slide = $(this);

            var slideTitle = slide.find('.image-wrap__title a').html();

            if(slide.isOnScreen() && (prevKeys.indexOf(key) == -1) && slideTitle != '') {

              var slideAnchor = slide.find('.slide-anchor').attr('id');
              if(slideTitle.length > 0) {

                var pageViewUrl = current_url + '#' + slideAnchor;
                var pageViewPath = document.location.pathname + '#' + slideAnchor;

                //GA

                var _gaq = _gaq || [];

                _gaq.push(['slideTracker._setAccount', 'UA-16887117-1']);              
                _gaq.push(['slideTracker._setDomainName', 'foodandwine.com']);
                _gaq.push(['slideTracker._trackPageview']);
                _gaq.push(['slideTracker._set', 'title', slideTitle]);
                _gaq.push(['slideTracker._set', 'path', pageViewPath]);
                _gaq.push(['slideTracker._trackPageview']);

                //OMNITURE

                verticalGalleryOmnitureRefresh(pageViewUrl, slideTitle, slideAnchor);

                //COMSCORE

                if (typeof(COMSCORE) == "object") {
                  COMSCORE.beacon({c1:"2",c2:"6035728",c3:"",c4:"",c5:"",c6:"",c15:""});
                }
              }
              prevKeys.push(key);
            }
          });
        };

        $(window).on('scroll', $.throttle(2000, vertical_slide_tracking));
      }
    }
  }

})(jQuery);
