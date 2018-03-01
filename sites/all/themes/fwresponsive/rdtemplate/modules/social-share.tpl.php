<?php 

/**
 * Social Share
 * Mapped to ../modules/custom/ti_amg_fwrd_recipe/templates/modules/social-share.tpl.php
 *
 * @param string $url The url of the page to retrieve the social counts for.
 * @param boolean $hide_print will hide the Print option from view.
 */

?>
<div class="social-share" data-url="<?php print $url; ?>" data-services="p f t">
  <div class="social-share__item social-share__item--has-count">
    <svg class="social-share__item__icon social-share__item__icon--pt" viewBox="0 0 30 30">
      <use xlink:href="<?php asset('img/spritemap.svg#icon-pinterest'); ?>"></use>
    </svg>
    <div class="social-share__item__count" data-service-count-target="p"></div>
  </div>
  
  <div class="social-share__item social-share__item--has-count">
    <svg class="social-share__item__icon social-share__item__icon--fb" viewBox="0 0 30 30">
      <use xlink:href="<?php asset('img/spritemap.svg#icon-facebook'); ?>"></use>
    </svg>
    <div class="social-share__item__count" data-service-count-target="f"></div>
  </div>
  
  <div class="social-share__item social-share__item--has-count">
    <svg class="social-share__item__icon social-share__item__icon--tw" viewBox="0 0 30 30">
      <use xlink:href="<?php asset('img/spritemap.svg#icon-twitter'); ?>"></use>
    </svg>
    <div class="social-share__item__count" data-service-count-target="t"></div>
  </div>

  <div class="social-share__item">
    <svg class="social-share__item__icon social-share__item__icon--email" viewBox="0 0 30 30">
      <use xlink:href="<?php asset('img/spritemap.svg#icon-email'); ?>"></use>
    </svg>
  </div>

  <?php if (!$hide_print): ?>
  <div class="social-share__item">
    <svg class="social-share__item__icon social-share__item__icon--print" viewBox="0 0 30 30">
      <use xlink:href="<?php asset('img/spritemap.svg#icon-print'); ?>"></use>
    </svg>
  </div>
  <?php endif; ?>
</div>