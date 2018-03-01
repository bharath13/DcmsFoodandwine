<?php 
/**
 *   Mapped to ../modules/custom/ti_amg_fwrd_homepage/templates/modules/main-menu.tpl.php,
 *  ../modules/custom/ti_amg_fwrd_recipe/templates/modules/main-menu.tpl.php
 */
?>

<div class="main-menu">
  
  <svg class="main-menu__menu-toggle" data-js-toggle-menu viewBox="0 0 29 19">
    <use xlink:href="<?php asset('img/spritemap.svg#icon-menu'); ?>"></use>
  </svg>

  <a class="main-menu__logo" href="#">
    <svg viewBox="0 0 332 44" title="Food and Wine" role="img">
      <use xlink:href="<?php asset('img/spritemap.svg#fw-logo'); ?>"></use>
    </svg>
  </a>

  <ul class="main-menu__nav" data-js-toggle-menu-target>
    <li class="main-menu__item">
      <a class="main-menu__item__link" href="#">Recipes &amp; Chefs</a>
      <!-- This is the markup for dropdown -->
      <ul class="main-menu__sub-menu">
        <li class="main-menu__sub-menu__item">Best Kale Recipes</li>
        <li class="main-menu__sub-menu__item">16 Ways to Cook Quinoa</li>
        <li class="main-menu__sub-menu__item">Treasured by Melanie Dunea</li>
        <li class="main-menu__sub-menu__item">Mario Batali Recipes</li>
        <li class="main-menu__sub-menu__item">Chef Videos</li>
        <li class="main-menu__sub-menu__item">Top Chef</li>
        <li class="main-menu__sub-menu__item">Food &amp; Wine Blog</li>
      </ul>
    </li>
    <li class="main-menu__item">
      <a class="main-menu__item__link" href="#">Drinks</a>
      <!-- This is the markup for dropdown -->
      <ul class="main-menu__sub-menu">
        <li class="main-menu__sub-menu__item">Best Kale Recipes</li>
        <li class="main-menu__sub-menu__item">16 Ways to Cook Quinoa</li>
        <li class="main-menu__sub-menu__item">Treasured by Melanie Dunea</li>
        <li class="main-menu__sub-menu__item">Mario Batali Recipes</li>
        <li class="main-menu__sub-menu__item">Chef Videos</li>
        <li class="main-menu__sub-menu__item">Top Chef</li>
        <li class="main-menu__sub-menu__item">Food &amp; Wine Blog</li>
      </ul>
    </li>
    <li class="main-menu__item">
      <a class="main-menu__item__link" href="#">Travel</a>
    </li>
    <li class="main-menu__item">
      <a class="main-menu__item__link main-menu__item__link--special" href="#">Halloween</a>
    </li>
    <li class="main-menu__item">
      <a class="main-menu__item__link" href="#">Video</a>
    </li>
    <li class="main-menu__item main-menu__item">
      <a class="main-menu__item__link" 
         href="#">Events</a>
    </li>
    <li class="main-menu__item">
      <a class="main-menu__item__link" href="#">FWX</a>
    </li>
    <li class="main-menu__item">
      <a class="main-menu__item__link" href="#">Subscribe</a>
    </li>
    <li class="main-menu__item main-menu__social">
      <a class="main-menu__item__link main-menu__social-icon main-menu__social-icon--fb" href="#">
        <svg class="" viewBox="0 0 30 30">
          <use xlink:href="<?php asset('img/spritemap.svg#icon-facebook'); ?>"></use>
        </svg>
      </a>
      <a class="main-menu__item__link main-menu__social-icon main-menu__social-icon--twitter" href="#">
        <svg class="" viewBox="0 0 30 30">
          <use xlink:href="<?php asset('img/spritemap.svg#icon-twitter'); ?>"></use>
        </svg>
      </a>
      <a class="main-menu__item__link main-menu__social-icon main-menu__social-icon--pinterest" href="#">
        <svg class="" viewBox="0 0 30 30">
          <use xlink:href="<?php asset('img/spritemap.svg#icon-pinterest'); ?>"></use>
        </svg>
      </a>
      <a class="main-menu__item__link main-menu__social-icon main-menu__social-icon--instagram" href="#">
        <svg class="" viewBox="0 0 30 30">
          <use xlink:href="<?php asset('img/spritemap.svg#icon-instagram'); ?>"></use>
        </svg>
      </a>
    </li>
  </ul>
</div>