<?php
/**
 * Social Share for Gallery
 * @param $url, $img_path, $social_content
 */
?>
<ul>
   <li class="main-menu__item main-menu__social">
      <a class="main-menu__item__link main-menu__social-icon main-menu__social-icon--fb slide-fb" 
        target="_blank" href="javascript:void(0);">
        <svg class="" viewBox="0 0 30 30">
          <use xlink:href="<?php print $img_path . '#icon-facebook'; ?>"></use>
        </svg>
      </a>
      <a  target="_blank" class="main-menu__item__link main-menu__social-icon main-menu__social-icon--pinterest slide-pinterest" 
        href="javascript:void(0);">
        <svg class="" viewBox="0 0 30 30">
          <use xlink:href="<?php print $img_path . '#icon-pinterest'; ?>"></use>
        </svg>
      </a>
    </li>
  </ul>
   