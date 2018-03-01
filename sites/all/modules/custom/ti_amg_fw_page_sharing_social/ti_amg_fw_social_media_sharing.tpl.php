<?php
/**
 * @file
 * Template used for FoodAndWine Social Media Page Sharing.
 */
?>
<!--
//   Social share Block links
-->
<div id='fb-root'></div>
<script>(function(d, s, id) {
  var js, fjs = d.getElementsByTagName(s)[0];
  if (d.getElementById(id)) {
    return;
  }
  js = d.createElement(s); js.id = id;
  js.src = '//connect.facebook.net/en_US/sdk.js#xfbml=1&appId=154653334553109&version=v2.0';
  fjs.parentNode.insertBefore(js, fjs);
}(document, 'script', 'facebook-jssdk'));
window.twttr=(function(d,s,id){var js,fjs=d.getElementsByTagName(s)[0],t=window.twttr||{};if(d.getElementById(id))return;js=d.createElement(s);js.id=id;js.src='https://platform.twitter.com/widgets.js';fjs.parentNode.insertBefore(js,fjs);t._e=[];t.ready=function(f){t._e.push(f);};return t;}(document,'script','twitter-wjs'));

twttr.ready(function (twttr) {
  twttr.events.bind('tweet', function (event) {
    omniTrackEv('sharebar|twitter');return false;
  });
});

function trackingSocial() {
  omniTrackEv('sharebar|googleplus');return false;
}
</script>
<div id='share-bar'>
<div class='share-button facebook' id='fb-like'>
    <fb:like font='arial' height='92' href='<?php
print $social_share_ele['current_url']; ?>?fb_ref=fbsharebar' layout='box_count' ref='fw-vert' send='true' show_faces='false' width='55'></fb:like>
</div>
<div class='share-button pinit'>
    <a class='pin-it-button' count-layout='none' data-pin-color='white' data-pin-do='buttonPin' href='http://pinterest.com/pin/create/button/?url=<?php print $social_share_ele['current_url']; ?>%3Fxid%3Dpinsharebar&amp;media=<?php print $social_share_ele['img_url']; ?>&#x000A;&amp;description=<?php print $social_share_ele['pinterest_text']; ?>' target='_blank'>
    <img border='0' src='//assets.pinterest.com/images/PinExt.png' title='Pin It'>
    </a>
</div>
<div class='share-button twitter'>
    <a href='https://twitter.com/intent/tweet?<?php print $social_share_ele['twitter_text'] ?>' class='twitter-share-button'  data-dnt='true'  data-count='none' data-via='foodandwine' target='_blank' >Tweet</a>    
</div>
<div class='share-button gplus'>
    <g:plusone annotation='none' size='tall' 
    href='<?php print $social_share_ele['current_url']; ?>?xid=gplussharebar' callback="trackingSocial"></g:plusone>
</div>
<div class='share-button stumble'>
    <a href='http://www.stumbleupon.com/submit?url=<?php print $social_share_ele['current_url']; ?>?xid=stumblesharebar' 
    id='stumbleupon-badge' onclick="window.open(this.href,'_blank'); omniTrackEv('sharebar|stumbleupon');return false;" 
    target='_blank'></a>
</div>
<div class='kindleWidget' style='display:inline-block;padding:3px;cursor:pointer;'>
    <img alt='Send to Kindle' src='https://d1xnn692s7u6t6.cloudfront.net/white-25.png' style='vertical-align:middle;margin:0;padding:0;border:none;'>
</div>
<div class='share-button email mini'>
    <a href='mailto:?subject=<?php print $social_share_ele['mail_subject']; ?>&amp;body=<?php print $social_share_ele['mail_body']; ?>?xid=emailsharebar' 
    onclick="window.open(this.href,'_parent'); omniTrackEv('sharebar|email');return false;"
    id='email-button'></a>
</div>
   <?php if($social_share_ele['print_flag']){?>
       <div class='share-button print'>
    <a href='<?php print $social_share_ele['current_url'].'/print'?>' id='print-button'>
    <img src='/sites/all/themes/foodandwine/images/print_icon.jpg'>
    </a>
</div>
   <?php } ?>
</div>

