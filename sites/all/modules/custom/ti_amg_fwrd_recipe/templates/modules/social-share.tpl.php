<?php 

/**
 * Social Share
 *
 * @param string $url The url of the page to retrieve the social counts for.
 */
?>

<div class="social-share" 
     data-url="<?php print $url; ?>" data-services="p f t">
  <div class="social-share__item social-share__item--has-count">
    <a id="p-social-share-button" target="_blank" href='http://pinterest.com/pin/create/link/?url=<?php print $url; ?>&amp;media=<?php print $social_share_content['recipe_social_share_img_path']; ?>&#x000A;&amp;description=<?php print $social_share_content['pinit_title']; ?>'>
      <svg class="social-share__item__icon social-share__item__icon--pt" 
           viewBox="0 0 30 30">
      <use xlink:href="<?php print $img_path . '#icon-pinterest'; ?>"></use>
      </svg>
    </a>
    <div class="social-share__item__count" data-service-count-target="p"></div>
  </div>
  
  <div class="social-share__item social-share__item--has-count">
    <a id="f-social-share-button" target="_blank" href="https://www.facebook.com/sharer/sharer.php?u=<?php print $url ?>/">
      <svg class="social-share__item__icon social-share__item__icon--fb" 
           viewBox="0 0 30 30">
      <use xlink:href="<?php print $img_path . '#icon-facebook'; ?>"></use>
      </svg>
    </a>
    <div class="social-share__item__count" data-service-count-target="f"></div>
  </div>
  
  <div class="social-share__item social-share__item--has-count">
    <a id="t-social-share-button" target="_blank" href="http://twitter.com/share?<?php print $social_share_content['twitter_text'] ?>">
      <svg class="social-share__item__icon social-share__item__icon--tw" 
           viewBox="0 0 30 30">
      <use xlink:href="<?php print $img_path . '#icon-twitter'; ?>"></use>
      </svg>
    </a>
    <div class="social-share__item__count" data-service-count-target="t"></div>
  </div>

  <div class="social-share__item">
    <a href='mailto:?subject=<?php print $social_share_content['recipe_title']; ?>&amp;body=<?php print $social_share_content['mail_body']; ?>?xid=emailsharebar' 
       id='email-button'>
      <svg class="social-share__item__icon social-share__item__icon--email" 
           viewBox="0 0 30 30">
      <use xlink:href="<?php print $img_path . '#icon-email'; ?>"></use>
      </svg>
    </a>hi
  </div>
  
  <div class="social-share__item">
    <a href="<?php print $url . '/print' ?>" id="print-button">
      <svg class="social-share__item__icon social-share__item__icon--print" 
           viewBox="0 0 30 30">
      <use xlink:href="<?php print $img_path . '#icon-print'; ?>"></use>
      </svg>
    </a>
  </div>
</div>
