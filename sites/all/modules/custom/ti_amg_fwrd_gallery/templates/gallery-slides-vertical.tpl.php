<?php
/**
 * Gallery Item
 *
 * @param array $items An array of Gallery items.
 * @param array $related_items An array of Related Content items, based on Content List module.
 *
 */

global $base_url;
$img_path_fb = ''; $img_path_pin = '';

    foreach ($items['slides'] as $key => $item):
      ?>

      <div class="image-wrap__single gallery_slide_vertical slide slide-<?php print $key; ?>" id="gallery_slide_<?php print $key; ?>">
        <?php if(!empty($item['content_url'])): ?>
          <div class='slide-anchor' id='<?php print substr($item['content_url'],strrpos($item['content_url'], '/')+1); ?>'></div>
        <?php endif; ?>
        <a name="<?php print $item['vertical_gallery_slide_url'];?>"></a>
        <div class="image-wrap__single-interior" id="<?php print $item['vertical_gallery_slide_url'];?>">
          <div class="image-wrap__slide">
            <?php if ($item['is_video']) : ?>
              <div class="image-wrap__slide-video">
                <?php print $item['video_object']; ?>
              </div>
              <?php else: ?>
                <div class="image-wrap__slide-image">              
                  <!-- Always display first 3 image for lazyload and non-js version -->
                  <?php if ($key < 3): ?>
                    <img data-pin-no-hover="true" src="<?php print $item['imgUrl']; ?>" alt="<?php print $item['alt']; ?>" />
                  <?php else: ?>
                    <img data-pin-no-hover="true" data-js-component="imgLazyLoad" src="data:image/gif;base64,R0lGODlhAQABAIAAAAAAAP///yH5BAEAAAAALAAAAAABAAEAAAIBRAA7" data-original="<?php print $item['imgUrl']; ?>" alt="<?php print $item['alt']; ?>" />
                  <?php endif; ?>
                  <div class="social-share-responsive social-share-hover">
                    <ul>
                      <li class="main-menu__item main-menu__social">
                        <a class="main-menu__item__link main-menu__social-icon main-menu__social-icon--fb slide-fb"
                          target="_blank" href="<?php print $item['fb_share']; ?>">
                          <?php $img_path_fb = url(drupal_get_path('module', 'ti_amg_fwrd_gallery') . '/img/fb-circle-33x33.png', array('absolute' => TRUE)); ?>                         
                          <img src="<?php print $img_path_fb; ?>" />
                        </a>
                        <a target="_blank" class="main-menu__item__link main-menu__social-icon main-menu__social-icon--pinterest slide-pinterest" href="<?php print $item['pinit_share']; ?>">
                          <?php $img_path_pin = url(drupal_get_path('module', 'ti_amg_fwrd_gallery') . '/img/pin-circle-33x33.png', array('absolute' => TRUE)); ?>                         
                          <img src="<?php print $img_path_pin; ?>" />
                        </a>
                      </li>
                    </ul>
                  </div>
                  <div class="image-wrap__caption"><?php print $item['credit']; ?></div>
                </div>
              <?php endif; ?>
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
            <?php if(array_key_exists('place', $items)): ?>
            <span><?php print $items['place']; ?></span>
            <?php endif; ?>
          </div>
        </div>
      </div>
      <?php if ($is_list): ?>
        <?php $item_index++; ?>
      <?php endif; ?>
   <?php endforeach; ?>
