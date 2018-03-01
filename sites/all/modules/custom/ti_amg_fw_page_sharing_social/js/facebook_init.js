jQuery(document).ready(function() {
  window.fbAsyncInit = function() {
    FB.init({appId: window.facebookID, status: true, cookie: true,
    xfbml: true, channelUrl : 'http://www.foodandwine.com/channel.html'});
    //enable social track for facebook
    _ga.trackFacebook();
  };

  //async load fb
  (function() {
    var e = document.createElement('script'); e.async = true;
    e.src = document.location.protocol +
    '//connect.facebook.net/en_US/all.js';
        if (jQuery('fb-root').length > 0) {
            document.getElementById('fb-root').appendChild(e);
        }
  }()); 	

  (function(d){
        var f = d.getElementsByTagName('SCRIPT')[0], p = d.createElement('SCRIPT');
        p.type = 'text/javascript';
        p.async = true;
        p.setAttribute('data-pin-hover', true);
        p.src = '//assets.pinterest.com/js/pinit.js';
        f.parentNode.insertBefore(p, f);
      }(document));
});