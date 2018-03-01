/**
 * @file
 * Javascript for HD slideshow.
 */

jQuery(function() {
  jQuery('#see-all').click(function(){
    jQuery('#see-all-slideshows, #slideshow-carousel span').toggle('fast');
    jQuery('#see-all-slideshows').draggable({
      cancel: '#slideshow-gallery'
    });
  });

  jQuery('#close-see-all, #slideshow-gallery li, #slideshow-gallery-large li').click(function(){
    // jQuery('#see-all').css("background-position","-33px -160px");
    jQuery('#slideshow-carousel span').show();
    jQuery('#see-all-slideshows').hide('fast');
  });
});

//accepts either a page loaded url or ajax url(i.e with hash params)
// ADW: Can this be removed in favor of Slideshow.page_load_url
function getSlideIndexFromURL(url){
  var slide;
  var urlPathArray = location.pathname.split("/");
  // handles #!slide=1
  if ((!isNaN(urlPathArray[3])) && (urlPathArray[3]!="")){
    slide = parseInt(urlPathArray[3]);
  }

  else {
    slide = 1;
  }
  return slide;
}

// function unescapeHTML(html) {
//   return jQuery("<div />").html(html).text();
// }

function Slideshow(asset_host, data, slidePermaLinks, nextSlideshow, originalSlug) {
  if (!(this instanceof arguments.callee)) {return new Slideshow();}
  this.asset_host = asset_host;
  this.slideshow = data;
  this.slides = data.slides;
  this.slidePermaLinks = slidePermaLinks;
  this.nextSlideshow = nextSlideshow;
  this.originalSlug = originalSlug;
  this.data = data;
  this.load();
}

Slideshow.prototype = {
  slides : null,
  data: null,
  recipeList: null,
  slidePermaLink: null,
  //recipeListLoadStatus: false,

  load : function(){
    var currentPos = isNaN(parseInt(jQuery('#current').html())) ? 1 : parseInt(jQuery('#current').html())-1;
    var self = this;
    self.slidePermaLink = jQuery.parseJSON(Drupal.settings.ti_amg_fw_slideshow.slidePermaLinks);    
    var prepends = [];
    self.slides.push({});
    jQuery.each(this.slides, function(i, val) {        
      if (self.slides.length-1 != i){
        var slide = self.slides[i].slide;
        var img = jQuery('<img/>').attr({src: slide.image.image.url,'class': 'slide-image', alt: slide.image.image.alt_text});
        if(i < currentPos) {
          prepends.push(img)
        } 
        else if (i > currentPos) {
          var slideID = 'slide_'+i;
          img.appendTo('#slides').wrap('<div class="slide" id="'+slideID+'" />');
          if (slide.ad_slide == 'true'){
            jQuery('#'+slideID).addClass('ad-slide');
          }
        }
      }
      else {
        jQuery('<div id="last-slide-detour" class="slide"/>').appendTo('#slides');
      }
    });

    while(prepends.length > 0) {
      slide_index = prepends.length
      prepends.pop().prependTo('#slides').wrap('<div class="slide" id=slide_'+slide_index+' />');
    }

    // track a pageview on first load
    // fw_pagetracker(self.slidePermaLinks[currentPos]);

    // keyboard awareness
    var self = this;
    jQuery(document).keydown(function(e){
        if (e.keyCode == 37) { 
          slideChangeInvoke(self, "prev");
        }
        if (e.keyCode == 39) { 
          slideChangeInvoke(self, "next");
        }
        return false;
    });
    
    if (jQuery('#slideshow-dek .dek').length){
      this.showHide(this.slideshow.dek);
    }
    this.checkButtons();
  },

    // update save status
  setSaveButton:function(recipeUrlID)
  { jQuery('#save-button').removeClass('saved');
    jQuery('#recipe-box .menu ul li').each(function(index) {
      if(recipeUrlID == jQuery(this).text()){
        jQuery('#save-button').addClass('saved');
        return true;
      }
    });
    return false;
  },
  // this assumes a 0 based index
  move_to: function(index) {
    var currentPos = parseInt(jQuery('#current').html())-1;
    var self = this;
        if (index >= 0 && index < this.slides.length) {
            var slide = this.slides[index].slide;
            var slidePos = (index) * -500;
            if (Modernizr.cssanimations) {
                var slidePosition = parseInt(jQuery('#slides').css('left'));
                jQuery('#slides').css('left', slidePos);
                if (jQuery.browser.mozilla) { 
                    // compensate for mozilla choppy animations when loading iframes
                    setTimeout('insertAds()', 400);
                    
                }
                else { 
                    insertAds(); 
                }
            }
            else { 
                jQuery('#slides').animate({left: slidePos}, 400);
                insertAds();
            }
      // now that the position is updated, display the new position in the UI
      jQuery('#current').html(parseInt(index)+1);

      if (index+1 != this.slides.length){
            // set slide properties on every next/back click
            //reset slide properties that might have been changed by users
            jQuery('#slide-dek .show-hide').unbind('click');
            this.handleSlideDek(slide);
            (slide.image.image.credit != "") ? jQuery('#photo-credit').html(slide.image.image.credit) : jQuery('#photo-credit').html('')
            jQuery('.slide-title').html(slide.title);
            // setting the slide_title and page_number variable to the tealium UDO
            var page_num = parseInt(index)+1;
            var sldtit = slide.title;
            var base_url = window.location.origin;           
            //Assigning slide info to the Tealium udo_metadata and utag_data object
            window.Ti.udo_metadata.friendly_url=window.location.href;
            utag_data.friendly_url=window.location.href;
            if(sldtit != '' && sldtit != 'undefined'){
                window.Ti.udo_metadata.slide_title=sldtit;
                utag_data.slide_title=sldtit;
            } else {
                window.Ti.udo_metadata.slide_title='';
                utag_data.slide_title='';
            }
            if(page_num != ''){
                window.Ti.udo_metadata.page_number=page_num;
                utag_data.page_number=page_num;
            }
            //setting Ajax variable for HD slideshow pages
            var smrt_title = sldtit;
            if(smrt_title == ''){
                smrt_title = document.title;
            } 
            // Assigning variable for the slideshow native advertisement flag
            var slideshowNativeadv = Drupal.settings.ti_amg_fw_slideshow.slideshow_native_adv;
            // Checking whether the native adv flag is 0 or 1
            if(slideshowNativeadv == 0){
                var slideshow_path = window.location.pathname;
                var sld_pathstr = slideshow_path.split("/");
                var sldshw_smrt_url = document.location.protocol + "//" + document.location.hostname + "/" + sld_pathstr[1] + "/" + sld_pathstr[2];               
                var __ajax_reach_config = {
                    pid:'545bd595d70ba01dd900002d',
                    title:smrt_title,
                    date:Drupal.settings.ti_amg_fw_gallery.publish_date,
                    channels:['slideshows'],
                    tags:['slideshows'],
                    iframe: true,
                    ignore_errors: false,
                    url:sldshw_smrt_url
                };            
                SPR.Reach.collect(__ajax_reach_config); 
            } 
            refreshTealiumTag();
            // jQuery('#plus-link').html('');
            
            // handle slide links, which may or may not exist
            if (slide.slide_link != null && slide.slide_link != "") {
              jQuery('.recipe-link, .see-more').show();
              jQuery('#recipe-link-container').css({'border-bottom':'1px solid #E1E1E1','height':'30px'});
              jQuery('.slide-title').attr({title: slide.title, href: slide.slide_link});
              jQuery('.recipe-link, .see-more').attr({title: slide.title, href: slide.slide_link});

              //console.log(slide.image.image.url);
              // update save-button attr
              jQuery('#save-button').attr({'data-name': slide.title, 'data-link': slide.slide_link, 'data-img-url':slide.image.image.url});

              // update rate button link to the recipe page based on location.host for development and qa
              jQuery("#rate-button").attr("href", slide.slide_link.replace("www.foodandwine.com",location.host));

              // request recipe rating if there is a slide link
              jQuery('#recipe-average-rating').show();
              function setAvgRating()
              { if(self.slideshow.content_type != 'others'){
                  if (typeof(AmexCommunity) != "undefined") {                                   
                    AmexCommunity.content(slide.slide_link).averageRating().success(function(data){
                      var avgRating = 0;
                      // firefox does not take data as Json but a String
                      if(!(typeof data =='object')){
                        avgRating = jQuery.parseJSON(data).content.average;
                      }
                      // chrome
                      else {
                        avgRating = data.content.average;
                      }
                      //update rating list
                      jQuery('#avg-rating-list').find('li').each(function(i, li) {
                          if (jQuery(li).attr('data-fw-rating') <= avgRating) {
                            jQuery(li).addClass('starred');
                          }
                          else{
                            jQuery(li).removeClass('starred');
                          }
                      });  
                    });
                  }
                }
              }

              // wait for window to finish loading if it is not loaded yet
              try
              {   setAvgRating();
                  self.setSaveButton(slide.title);
              }
              catch(err)
              { jQuery(window).load(function(){
                  setAvgRating();
                  self.setSaveButton(slide.title);
                });
              }
              
            }
            else{
              jQuery('.slide-title').attr({title: "", href: ""});
              jQuery('.recipe-link, .see-more').attr({title: "", href: ""});
              jQuery('.recipe-link, .see-more').hide();
              jQuery('#recipe-link-container').css({'border-bottom':'none','height':'0px'});
            }
            //differences between slideshow types
            if (slide.ad_slide == 'true') {
              jQuery('#slide-rr .slug').html('Sponsored').show();
              jQuery('.link-button').removeClass('recipe-link').addClass('see-more recipe-link');
            }
            else if (this.slideshow.content_type == 'recipes'){
              jQuery('#slide-rr .slug').html(this.originalSlug).show();
              jQuery('.link-button').removeClass('see-more').addClass('recipe-link');
            }
            else if(this.slideshow.content_type == 'other'){
              jQuery('#slide-rr .slug').hide();
            }
            else {
              jQuery('#slide-rr .slug').html(this.originalSlug).show();
            }
            
            jQuery('#plus-link').html('')
            if (slide.more_links && slide.more_links.length){
              for (var i=0;i<slide.more_links.length;i++) {
                jQuery('#plus-link').append('<li><a href="'+slide.more_links[i].more_link.url+'">'+slide.more_links[i].more_link.display+'</li>');
              }
            }
      }
      else {
        // else this is the last slide, hide a few things
        jQuery('.slide-title').html(jQuery('#last-slide .preview-title').html()).attr({title: '', href: this.nextSlideshow});
        jQuery('.recipe-link').attr({title: '', href: this.nextSlideshow});
        jQuery('#slide-rr .slug').html('Next Slideshow');
        jQuery('.link-button').removeClass('recipe-link').addClass('see-more recipe-link');
        jQuery('#slide-dek').hide();
        jQuery('#photo-credit').html('')
        jQuery('#recipe-average-rating').hide();
      }
    }
  },

  // bind to the next button
  next : function() {
    var self = this;
    jQuery('.next').unbind('click').click(function(event) {
      slideChangeInvoke(self,"next");
    });
    return false;
  },
  
  back : function() {
    var self = this;
    jQuery('.back').unbind('click').click(function(event) {
      slideChangeInvoke(self, "prev");
    });
    return false;
  },
  
  handleSlideDek : function(slide) {
    jQuery('#slide-dek').show();
    var slideDek = jQuery('#slide-dek .dek');
    jQuery(slideDek).animate({'height': 80}, 400);
    jQuery(slideDek).html(slide.dek);
    var slideDekHeight = slideDek[0].scrollHeight;
    var slideDekLength = slide.dek ? slide.dek.length : 0;
    var closed = false;

    if (slideDekLength > 0){
        if (slideDekHeight > 80){
          jQuery('#slide-dek .show-hide').html("More &#8744;").show();
          var closed = true;
        } 
        else {
          jQuery(slideDek).css('height','80');
          jQuery('#slide-dek .show-hide').hide(); 
        }

        jQuery('#slide-dek .show-hide').click(function(){
            if (closed) {
              jQuery(slideDek).animate({'height':slideDekHeight}, 400);
              jQuery('#slide-dek .show-hide').html("Close &#8743;").show();
              closed = false;
            }
            else {
              jQuery(slideDek).animate({'height':80}, 400);
              jQuery('#slide-dek .show-hide').html("More &#8744;");
              closed = true;
            }
        });
    }
    else {
      jQuery(slideDek).css('height','0');
      jQuery('#slide-dek .show-hide').hide();
    }
  },
  showHide : function(slideshowDek){
      var breakAt = 140;
      var dek = slideshowDek;
      var lessDek = dek.substring(0,breakAt);
      var moreDek = dek.substring(breakAt,dek.length);

      if (dek.length > breakAt){
        jQuery('#slideshow-dek .dek').html(
          lessDek
          +'<span class="ellipsis">...</span>'
          + '<span class="truncate-more">'
          +moreDek
          +'</span><span class="show-hide">More</span>'
        );
        jQuery('.truncate-more').css('display','none');
      }

      jQuery('#slideshow-dek .show-hide').click(function(){
        jQuery('.truncate-more').toggle();
        jQuery('.ellipsis').toggle();
        if(jQuery(this).text() == 'More'){
          jQuery(this).text('Close');
        }
        else {
          jQuery(this).text('More');
        }

      });
  },
  //calling next/back here b/c checking needs to be invoked on pageload AND hashchange (not just on initialization).
  checkButtons : function() {
    var currentPos = parseInt(jQuery('#current').html());
    var self = this;
    
    if(currentPos == self.slides.length){
      jQuery('#last-slide-detour').html(jQuery('#last-slide').html());
      jQuery('.next').unbind('click').click(function() {
        document.location = self.nextSlideshow;
      });
    }
    else{
      this.next();
      // jQuery('.next').removeClass('transparent');
    }
    if(currentPos-1 < 1){
      jQuery('.back').unbind('click').addClass('disabled');
    }
    else{
      this.back();
      jQuery('.back').show().removeClass('disabled');
    }
  }
}

Slideshow.page_load_url = function() {
  var currentSlideshowSlideURI = window.location.pathname;
  var currentSlideshowPath = currentSlideshowSlideURI.split("/");
  if ((!isNaN(currentSlideshowPath[3])) && (currentSlideshowPath[3] != "")) {
    currentSlideshowSlideURI = currentSlideshowSlideURI.substring(0, currentSlideshowSlideURI.lastIndexOf('/'));
  }
  return currentSlideshowSlideURI;
}

//Carousel Initializer Callback functions
function carouselInitCallback(slideshow){
  self = this;
  jQuery('#fw-carousel li').each(function(index) {
      jQuery(this).click(function(event) {
        //jQuery.bbq.pushState({'!slide':index+1});
        var currentSlideshowSlideURI = window.location.pathname;
        var currentSlideshowPath = currentSlideshowSlideURI.split("/");
        if ((!isNaN(currentSlideshowPath[3])) && (currentSlideshowPath[3]!="")) {
          currentSlideshowSlideURI = currentSlideshowSlideURI.substring(0, currentSlideshowSlideURI.lastIndexOf('/'));
        }
        var currentSlideshowSlide = currentSlideshowSlideURI + "/" +  ++index;
        var slideIndex = "slide"+ index;
        var stateObj = { foo: slideIndex };
         history.pushState(stateObj, "", currentSlideshowSlide);    
        
        jQuery('#fw-carousel').centerCarouselSlide(index+1);
        ajax_url = Slideshow.page_load_url();
        // FIX: is it necessary to pass these objects each hashchange event? 
        // slideshow and slidePermaLinks don't change slide to slide
        hashChangeCallbacks(ajax_url, slideshow, self.slidePermaLink);
        return false;
      });
   });
  jQuery('#slideshow-gallery li').each(function(index) {
      jQuery(this).click(function() {
        //jQuery.bbq.pushState({'!slide':index+1});
        var currentSlideshowSlideURI = window.location.pathname;
        var currentSlideshowPath = currentSlideshowSlideURI.split("/");
        if ((!isNaN(currentSlideshowPath[3])) && (currentSlideshowPath[3]!="")) {
          currentSlideshowSlideURI = currentSlideshowSlideURI.substring(0, currentSlideshowSlideURI.lastIndexOf('/'));
        }
        var currentSlideshowSlide = currentSlideshowSlideURI + "/" + ++index;
        var slideIndex = "slide"+ index;
        var stateObj = { foo: slideIndex };
        history.pushState(stateObj, "", currentSlideshowSlide);  
        jQuery('#fw-carousel').centerCarouselSlide(index+1);
        return false;
      });
   });
  jQuery('#slideshow-gallery-large li').each(function(index) {
      jQuery(this).click(function() {
        //jQuery.bbq.pushState({'!slide':index+1});
        var currentSlideshowSlideURI = window.location.pathname;
        var currentSlideshowPath = currentSlideshowSlideURI.split("/");
        if ((!isNaN(currentSlideshowPath[3])) && (currentSlideshowPath[3] != "")) {
          currentSlideshowSlideURI = currentSlideshowSlideURI.substring(0, currentSlideshowSlideURI.lastIndexOf('/'));
        }
        var currentSlideshowSlide = currentSlideshowSlideURI + "/" + ++index;
        var slideIndex = "slide"+ index;
        var stateObj = { foo: slideIndex };
        history.pushState(stateObj, "", currentSlideshowSlide);  
        jQuery('#fw-carousel').centerCarouselSlide(index+1);
        return false;
      });
   });
};

function slideChangeInvoke(currentSlideshowObj, direction) {
  currentPos = parseInt(jQuery('#current').html());
  var currentSlideshowSlideURI = window.location.pathname;
  var currentSlideshowPath = currentSlideshowSlideURI.split("/");
  if (currentSlideshowSlideURI.lastIndexOf("/") == (currentSlideshowSlideURI.length - 1)) {
    currentSlideshowSlideURI = currentSlideshowSlideURI.substring(0, (currentSlideshowSlideURI.length - 1));
  }
  if ((!isNaN(currentSlideshowPath[3])) && (currentSlideshowPath[3] != "")) {
    currentSlideshowSlideURI = currentSlideshowSlideURI.substring(0, currentSlideshowSlideURI.lastIndexOf('/'));
  }

  if (direction == "next") {
    ++currentPos; 
    var currPathSlidePosition = currentPos; 
  } 
  else {
    --currentPos;
    // to accomodate slideshows/{name} and slideshows/{name} to be one page
    var currPathSlidePosition = (currentPos == 1) ? "" : currentPos;
  }
  
  // for key pressing: make sure we handle going out of slideshow scope
  if ((currentPos >=1) && (currentPos <= currentSlideshowObj.slides.length)) {
    var slideIndex = "slide"+ currentPos;
    var stateObj = { foo: slideIndex };
    var currentSlideshowSlide = currentSlideshowSlideURI + "/" + currPathSlidePosition;
    history.pushState(stateObj, "", currentSlideshowSlide);
    ajax_url = Slideshow.page_load_url();
    hashChangeCallbacks(ajax_url, currentSlideshowObj, currentSlideshowObj.slidePermaLink);
  }
}

 function hashChangeCallbacks(new_url, slideshow, slidePermaLinks){
  alignCarouselAndSlideshowItem(new_url, slideshow);
  var slide = getSlideIndexFromURL(new_url);
  if (typeof slidePermaLinks[slide-1] != "undefined"){
    var slidePermaLink = slidePermaLinks[slide-1];
  }
  else {
    // for last slide
    var slidePermaLink = 'http://www.foodandwine.com'+window.location.pathname+'/'+slide;
  }
        
        // Track each page in Google Analytics
        _gaq.push(['_trackPageview']);
        
          //comscore ajax call
  COMSCORE.beacon({c1:"2",c2:"6035728",c3:"",c4:"",c5:"",c6:"",c15:""});
  setTimeout( function(){
    fw_pagetracker(slidePermaLink);
    // _gaq.push(['_trackPageview']);
    AFFLUENT.Jumptime.track()
    // reloadIframeAds({'slide': slide}); 
    // jQuery('#fb-like').html('<fb:like href="'+slidePermaLinks[slide-1]+'" layout="box_count" send="true" width="55" show_faces="false" font="arial"></fb:like>');
    // FB.XFBML.parse(document.getElementById('fb-like'));
    // jQuery('#g-plus').html('<fb:like href="'+slidePermaLinks[slide-1]+'" layout="box_count" send="true" width="55" show_faces="false" font="arial"></fb:like>');
  }, 500);
  //FIXME: Do not call 'container' as a global var. 
  //gapi.plusone.render(container, {'size': 'tall', 'count': true});
}
//this function highlights/centers the carousel and moves image slider to the appropriate image either on page load or 'onhashchange.'
function alignCarouselAndSlideshowItem(new_url, slideshow){
  var slide = getSlideIndexFromURL(new_url);
  slideshow.move_to(slide-1); 
   if (slide > 3){
   jQuery('#mycarousel-prev-disabled').attr('id','mycarousel-prev');
   }else{
   jQuery('#mycarousel-prev').attr('id','mycarousel-prev-disabled');
   }
  slideshow.checkButtons();
  //TODO: move this to carousel plugin
  //remove 'current slide' class for previous slide
  jQuery('#fw-carousel .current-slide').removeClass('current-slide');
  jQuery('#slide_thumb_'+slide.toString()).addClass('current-slide');
  jQuery('#fw-carousel').centerCarouselSlide(slide);
}

//ad related js. expects a hash of query params to replace(if query param exists) or append.
// function reloadIframeAds(adParams){
//    //update query params and reload the iframe
//    jQuery('.iframe-ads').each(function(index, ad) { 
//      var framePath = ad.contentWindow.location.pathname
//      var frameQueryString = ad.contentWindow.location.search //get query params
//      var frameParams = jQuery.deparam(frameQueryString);
//      for (var name in adParams) {
//        frameParams[name] = adParams[name];
//      }
//      //replace is required to refresh iframe as it will mess with bbq.js bookmarking history if path is merely reassigned.  
//      ad.contentWindow.location.replace(unescape(framePath+jQuery.param(frameParams)));  
//    }); 
// }
// function debugAds(){
//  reloadIframeAds({ 'debugads': 'true'});
// }

// function getQueryParam(variable)
// {
//   var query = window.location.search.substring(1).toLowerCase();
//   var vars = query.split("&");
//   for (var i=0;i<vars.length;i++) {
//           var pair = vars[i].split("=");
//           if(pair[0] == variable){return pair[1];}
//   }
//   return(false);
// }
// //required for ad functions
// function getQueryVariable(variable)
// {
//        var query = window.location.search.substring(1).toLowerCase();
//        var vars = query.split("&");
//        for (var i=0;i<vars.length;i++) {
//                var pair = vars[i].split("=");
//                if(pair[0] == variable){return pair[1];}
//        }
//        return(false);
// }

/** fixed leaderboard ad **/
jQuery(window).scroll(function() {
  if (parseInt(jQuery(window).scrollTop()) > 10) {
    jQuery("body").addClass("fixed-header");
  } else  {
    jQuery("body").removeClass("fixed-header");
  }
})

/** Updating Tealium udo_metadata to utag.view function for tracking object data **/
function refreshTealiumTag() {
    if (utag && utag.view && typeof (window.Ti) !== "undefined" && typeof (window.Ti.udo_metadata) !== "undefined") {
        utag.view(window.Ti.udo_metadata);
    }
}

