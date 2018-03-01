(function($) {            
$(document).ready(function() {
// Getting slide number to initialize slide at certain slide
var slideNumber=1;
// standardize url to /slidenumber for html5 pushstate
var currentSlideshowSlideURI = window.location.pathname;
var urlPathArray = currentSlideshowSlideURI.split("/");
if (!isNaN(urlPathArray[3])){
  currentSlideshowSlideURI = currentSlideshowSlideURI.substring(0, currentSlideshowSlideURI.lastIndexOf('/'));
}

if (!isNaN(urlPathArray[3])){
  slideNumber = parseInt(urlPathArray[3]);
  var slideIndex = "slide"+ slideNumber;
  var stateObj = { foo: slideIndex };
  if (slideNumber == 1) { 
    history.pushState(stateObj,"", currentSlideshowSlideURI);    
  }
  else {
    history.pushState(stateObj,"", currentSlideshowSlideURI +"/"+slideNumber);    
  }
}
else {
  // last number in path
  if((urlPathArray[urlPathArray.length-1]).match(/^\d+$/)){
    slideNumber = (urlPathArray[urlPathArray.length-1]).match(/^\d+$/);
  }
  else {
    var stateObj = { foo: "slide1"};
    history.pushState(stateObj,"", currentSlideshowSlideURI);
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
$( ".view.slider" ).append( "<div class='slides-loader'></div>" );
    $(window).load(function(){
      $('.flexslider').flexslider({
        slideshow: false,
        slideshowLabel: currentSlideshowSlideURI,
        animation: "slide",
        animationLoop: false,
        smoothHeight: true,
        startAt: slideNumber-1,
        controlNav: false,
        start: function(slider) {
          $('.slideshow-load-row').hide();
          $('.flex-next').fadeIn('slow');
          $('.flex-prev').fadeIn('slow');
          interstitialAd.write("interstitial-ad");          
        },        
      });
      $('.slides-loader').removeClass();
    });
});
})(jQuery);
