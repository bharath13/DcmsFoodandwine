<?php
/**
 * Image Insert
 *
 * @param string $path URL to the image.
 * @param string $caption Caption for the image.
 * 
 * Optional Params:
 * @param array $classes An array of additional classes to add.
 * @param string $content_url URL to content.
 * @param boolean $is_video If this image needs a video play button.
 */
global $base_url;
$img_path = $base_url . '/' . drupal_get_path('module', 'ti_amg_fwrd_gallery');
if (!empty($is_video) && ($is_video)) {
  $classes_list .= " image-insert--video";
}
if (isset($is_hero)) {
  $classes_list .= " image-insert--hero";
}
if (!empty($image)):
?>

  <figure class="image-insert <?php print $classes_list; ?>">
    <?php if (isset($image['content_url'])): ?>
    <?php print $image['link']; ?>
    <?php else: ?>
    <div class="image-insert__wrap">
      <img data-pin-no-hover="true" src="<?php print $image['uri']; ?>" alt="Food &amp; Wine: <?php print $image['alt']; ?>">
      <?php if (!empty($social_share)): ?>
      <div class="social-share-responsive social-share-hover">
        <ul>
          <li class="main-menu__item main-menu__social">
            <a class="main-menu__item__link main-menu__social-icon main-menu__social-icon--fb slide-fb" 
              target="_blank"  href="<?php print $social_share['fb_share']; ?>">
              <img src="<?php print $img_path . '/img/fb-circle-33x33.png'; ?>" />
              </svg>
            </a>
            <a  target="_blank" class="main-menu__item__link main-menu__social-icon main-menu__social-icon--pinterest slide-pinterest" 
              href="<?php print $social_share['pinit_share']; ?>">
              <img src="<?php print $img_path . '/img/pin-circle-33x33.png'; ?>" />
              </svg>
            </a>
          </li>
        </ul>
      </div>
      <?php endif; ?>
    </div>
    <?php endif; ?>
    <figcaption class="image-insert__caption"><?php print $image['caption']; ?>
      <em><?php print $image['credit']; ?></em>
    </figcaption>
  </figure>
<?php endif;
  