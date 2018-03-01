<?php
/**
 * Social Share for Gallery
 * @param $url, $img_path, $social_content
 */
?>
<ul>
   <li class="main-menu__item main-menu__social">
      <a class="main-menu__item__link main-menu__social-icon main-menu__social-icon--fb"
        target="_blank" href="<?php print $social_content['fb_data']; ?>">
        <svg class="" viewBox="0 0 30 30">
          <use xlink:href="<?php print $img_path . '#icon-facebook'; ?>"></use>
        </svg>
      </a>
      <a class="main-menu__item__link main-menu__social-icon main-menu__social-icon--twitter"
        target="_blank" href="<?php print $social_content['twitter_data']; ?>">
        <svg class="" viewBox="0 0 30 30">
          <use xlink:href="<?php print $img_path . '#icon-twitter'; ?>"></use>
        </svg>
      </a>
      <a class="main-menu__item__link main-menu__social-icon main-menu__social-icon--pinterest"
        target="_blank" href="<?php print $social_content['pinterest_data']; ?>">
        <svg class="" viewBox="0 0 30 30">
          <use xlink:href="<?php print $img_path . '#icon-pinterest'; ?>"></use>
        </svg>
      </a>
      <a class="main-menu__item__link main-menu__social-icon main-menu__social-icon--instagram"
        target="_blank" href="http://instagram.com/foodandwine">
        <svg class="" viewBox="0 0 30 30">
          <use xlink:href="<?php print $img_path . '#icon-instagram'; ?>"></use>
        </svg>
      </a>
    </li>
  </ul>
