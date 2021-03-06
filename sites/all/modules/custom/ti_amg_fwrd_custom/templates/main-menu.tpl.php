<?php 
/**
 * Main Menu Block
 * This is the same menu that is used on tablet/mobile as the side 
 * menu. CSS will take care of repositioning it.
 * Params: $main_menu
 */
?>

<div class="main-menu">

  <svg class="main-menu__menu-toggle" data-js-toggle-menu viewBox="0 0 29 19">
    <use xlink:href="<?php 
    print $img_path . '#icon-menu'; ?>"></use>
  </svg>

  <a class="main-menu__logo" href="/">
    <svg viewBox="0 0 332 44" title="Food and Wine" role="img">
      <use xlink:href="<?php 
       print $img_path . '#fw-logo'; ?>"></use>
    </svg>
  </a>

  <ul class="main-menu__nav" data-js-toggle-menu-target>
    <?php foreach ($main_menu as $main_link) : ?>
    <li class="main-menu__item">
      <?php print $main_link['link']; 
      if (isset($main_link['leaf'])) : ?>
        <ul class="main-menu__sub-menu">
        <?php foreach ($main_link['leaf'] as $submenu_link) : ?>
          <li class="main-menu__sub-menu__item">
            <?php print $submenu_link['link']; ?>
          </li>
        <?php endforeach; ?>
        </ul>
      <?php endif; ?>
    </li>
    <?php endforeach; ?>
     <li class="main-menu__item main-menu__social">
      <a class="main-menu__item__link main-menu__social-icon main-menu__social-icon--fb" 
        href="http://www.facebook.com/foodandwine">
        <svg class="" viewBox="0 0 30 30">
          <use xlink:href="<?php print $img_path . '#icon-facebook'; ?>"></use>
        </svg>
      </a>
      <a class="main-menu__item__link main-menu__social-icon main-menu__social-icon--twitter" 
        href="https://twitter.com/foodandwine">
        <svg class="" viewBox="0 0 30 30">
          <use xlink:href="<?php print $img_path . '#icon-twitter'; ?>"></use>
        </svg>
      </a>
      <a class="main-menu__item__link main-menu__social-icon main-menu__social-icon--pinterest" 
        href="http://www.pinterest.com/foodandwine">
        <svg class="" viewBox="0 0 30 30">
          <use xlink:href="<?php print $img_path . '#icon-pinterest'; ?>"></use>
        </svg>
      </a>
      <a class="main-menu__item__link main-menu__social-icon main-menu__social-icon--instagram" 
        href="http://instagram.com/foodandwine">
        <svg class="" viewBox="0 0 30 30">
          <use xlink:href="<?php print $img_path . '#icon-instagram'; ?>"></use>
        </svg>
      </a>
    </li>
  </ul>
  
</div>
