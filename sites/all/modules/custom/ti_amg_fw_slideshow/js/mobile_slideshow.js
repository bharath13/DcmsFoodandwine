
// Getting slide number to initialize slide at certain slide
var slideNumber=1;
// standardize url to /slidenumber for html5 pushstate
var urlPathArray = location.pathname.split("/");
var slideshowLabel = urlPathArray[2];
var pageURL = window.location.href.split(/#!slide=/, 2);

if ( typeof pageURL[1] != 'undefined'){
  slideNumber = parseInt(pageURL[1]);
  window.location.hash = '';
  var newPathArray = location.pathname.split("#!slide=");
  var slideIndex = "slide"+(slideNumber);
  var stateObj = { foo: slideIndex };
  history.pushState(stateObj,"","/slideshows/"+slideshowLabel+"/"+(slideNumber));
}
else {
  // last number in path
  if((urlPathArray[urlPathArray.length-1]).match(/^\d+$/)){
    slideNumber = (urlPathArray[urlPathArray.length-1]).match(/^\d+$/);
  }
  else {
    var stateObj = { foo: "slide1"};
    history.pushState(stateObj,"","/slideshows/"+slideshowLabel+"/1");
  }
}
//loadImg function replace spinner
function loadImg(index,imgArrSize) {
  if(index < imgArrSize){
    if(image_urls[index]!=""){
      console.log(index + " have preloading icon and image url is not empty");
      var img = new Image();
      $(img).load(function() {
        var $img = $(this);
        if($('.slide-list li').eq(index).find('.preloading').length){
          $('.slide-list li').eq(index).find('.thumb-container').append($img.clone());
          $('.slides li').eq(index).children('.slide-container').append($img.clone());
          $('.slides li').eq(index).children('.slide-container').children('.preloading').remove();
          $('.slide-list li').eq(index).find('.preloading').remove();
          image_urls[index]="";
        }
      }).error(function(){
      }).attr('src',image_urls[index]);
    }
  }
}
(function($) {            
$(document).ready(function() {
    $(window).load(function(){
      $('.flexslider').flexslider({
        slideshow: false,
        slideshowLabel: slideshowLabel,
        animation: "slide",
        animationLoop: false,
        smoothHeight: true,
        startAt: slideNumber-1,
        start: function(slider) {
          $('.slideshow-load-row').hide();
          $('.flex-next').fadeIn('slow');
          $('.flex-prev').fadeIn('slow');
        },
        after:function(slider){
            //window.location.hash = slider.currentSlide+1;
            //now when you navigate, your location updates in the URL
            
        }
      });
    });
});
})(jQuery);