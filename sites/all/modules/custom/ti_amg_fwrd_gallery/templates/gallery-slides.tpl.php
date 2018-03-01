<?php
/**
 * Gallery Item
 *
 * @param array $items An array of Gallery items.
 * @param array $related_items An array of Related Content items, based on Content List module.
 *
 */
  if ($is_list): $item_index = 1; ?>
    <?php foreach ($items['slides'] as $item): ?>

      <div class="image-wrap__single">
        <div class="image-wrap__single-interior">
          <div class="image-wrap__slide">
            <div class="image-wrap__slide-image">
              <?php if (!empty($item['imgUrl'])): ?>
                <img src="<?php print $item['imgUrl']; ?>" alt="<?php print $item['alt']; ?>" />
              <?php endif; ?>
            </div>
            <div class="image-wrap__caption"><?php print $item['credit']; ?></div>
          </div>
        </div>
        <div class="image-wrap__desc">
          <header class="image-wrap__desc-header">
            <h2 class="image-wrap__title"><a target="_blank" href="<?php print $item['content_url']; ?>"><?php print $item['title']; ?></a></h2>
          </header>
          <div class="image-wrap__desc-content">
            <p><?php print $item['description']; ?></p>
            <?php if(!empty($item['content_url']) && !empty($item['url_text'])) : ?>
                <a target="_blank" href="<?php print $item['content_url']; ?>" class="image-wrap__link-out link-arrow"><?php print $item['url_text']; ?></a>
            <?php endif; ?>
            <span><?php print $items['place']; ?></span>
          </div>
        </div>
      </div>
      <?php if ($is_list): ?>
        <?php $item_index++; ?>
      <?php endif; ?>
   <?php endforeach; ?>

 <?php else: ?>
  <?php if (!empty($items['current_slide'])): ?>
     <div class="image-wrap__single">
      <div class="image-wrap__single-interior">
        <div class="image-wrap__slide" data-bind="with: currentSlide">
          <div class="image-wrap__slide-image" data-bind="swipeRight: $parent.gotoPrevSlide, swipeLeft: $parent.gotoNextSlide, css: { videoSlide: is_video > 0 }">
            <!-- ko if: interstitial_ad === 'FALSE' -->
              <!-- ko if: is_video == 0 -->
                <img data-pin-no-hover="true" data-bind="attr: { src: imgUrl, alt: (alt != '' ? alt : title)}" >
              <!-- /ko -->
              <!-- ko if: is_video == 1 -->
                <div class="brightcove-jumpstart" data-bind="html: $parent.slideVideoObject"><video data-autoplay="false" data-account="<?php if (isset($items['current_slide']['account_d'])) print $items['current_slide']['account_d']; ?>" data-player="<?php if (isset($items['current_slide']['player_id'])) print $items['current_slide']['player_id']; ?>" data-embed="default" data-video-id="<?php print $items['current_slide']['video_id']; ?>" data-application-id class="video-js" controls></video></div>
              <!-- /ko -->
            <!-- /ko -->
            <!-- ko if: interstitial_ad === 'TRUE' -->
            <div class="ad ad--300x600">
                <div class="advertisement advertisement-mobile-gallery-interstitial-300x250-1 multiAd">
                    <p class="adtxt"><span>Advertisement</span></p>
                    <div id="interstitial_ad"><div id="ad_holder" style="display: none;"><span>Skip the ad in <?php print $items['inline_ad_timeout']; ?> sec</span></div>
                    </div>
                </div>
             </div>
              <div id="showSkipAd" data-bind="click: $parent.skipAd">Skip Ad</div>
            <!-- /ko -->
            <div class="pagination-wrapper">
              <div rel="prev" data-bind="click: $parent.gotoPrevSlide" class="pagination-btn pagination-btn--prev">
                <?php print theme('pagination-arrow'); ?>
              </div>
              <?php if (isset($pagination['prev'])): ?>
                <div class="prev-slate-title"><?php print $pagination['prev']['title']; ?></div>
              <?php endif; ?>
              <?php if (isset($pagination['next'])): ?>
                <div class="next-slate-title"><?php print $pagination['next']['title']; ?></div>
              <?php endif; ?>
              <div rel="next" data-bind="click: $parent.gotoNextSlide" class="pagination-btn pagination-btn--next">
                <?php print theme('pagination-arrow'); ?>
              </div>
            </div>
            <!-- ko if: interstitial_ad === 'FALSE' && is_video === 0 -->
              <div class="social-share-responsive social-share-hover">
                <ul>
                  <li class="main-menu__item main-menu__social">
                    <a class="main-menu__item__link main-menu__social-icon main-menu__social-icon--fb slide-fb"
                      target="_blank" data-bind="attr: { href: fb_share }"  href="<?php print $items['current_slide']['fb_share']; ?>">
                      <?php $img_path_fb = url(drupal_get_path('module', 'ti_amg_fwrd_gallery') . '/img/fb-circle-33x33.png', array('absolute' => TRUE)); ?>
                      <img src="<?php print $img_path_fb; ?>" />
                    </a>
                    <a  target="_blank" data-bind="attr: { href: pinit_share }" class="main-menu__item__link main-menu__social-icon main-menu__social-icon--pinterest slide-pinterest"
                      href="<?php print $items['current_slide']['pinit_share']; ?>">
                      <?php $img_path_pin = url(drupal_get_path('module', 'ti_amg_fwrd_gallery') . '/img/pin-circle-33x33.png', array('absolute' => TRUE)); ?>
                     
                      <img src="<?php print $img_path_pin; ?>" />
                    </a>
                  </li>
                </ul>
              </div>
            <!-- /ko -->
          </div>
          <div class="desc-wrap__desc-header">
            <div class="image-wrap__counter"><span data-bind="text: $parent.currentSlideNumTotal"><?php print $items['initial_slide_index']; ?></span> of <span><?php print $items['real_slides_count'] - 1; ?></span></div>
          </div>
          <div class="image-wrap__caption"><span data-bind="text: credit"><?php print $items['current_slide']['credit']; ?></span></div>
        </div>
      </div>
      <div class="image-wrap__desc" data-bind="with: currentSlide">
        <header class="image-wrap__desc-header">
          <h2 class="image-wrap__title"><a target="_blank" data-bind="attr: { href: content_url }, text: title"
            href="<?php print $items['current_slide']['content_url']; ?>">
           <?php print $items['current_slide']['title']; ?></a></h2><br/>
        </header>
        <div class="image-wrap__desc-content">
            <span data-bind="html: description">
              <div class='desc'>
               <?php print $items['current_slide']['description']; ?>
              </div>
            </span>
            <!-- ko if: interstitial_ad === 'FALSE' -->
              <!-- ko if: content_url != '' &&  video_id === '' -->
              <a target="_blank" data-bind="attr: { href: content_url }, text: url_text"
                  href="<?php print $items['current_slide']['content_url']; ?>"
                  class="image-wrap__link-out link-arrow" >
                  <?php print $items['current_slide']['url_text']; ?></a>
              <!-- /ko -->
              <span data-bind="html: place"><?php print $items['current_slide']['place']; ?></span>
            <!-- /ko -->
        </div>
      </div>
    </div>
 <?php  endif; ?>
<?php endif; ?>

