<?php

/**
 * Rating Stars
 * Mapped to ../modules/custom/ti_amg_fwrd_recipe/templates/modules/rating-stars.tpl.php
 *
 * @param int[] $rating An array containg two values, the rating and the max rating
 *
 * array('4', '5');
 */

?>

<ul class="rating-stars">
  <?php for ($i = 0; $i < $rating[1]; $i++): ?>
  <li class="rating-stars__star
    <?php if ($i < $rating[0]) print 'rating-stars__star--active'; ?>">
    <svg viewBox="0 0 18 18">
      <use xlink:href="<?php asset('img/spritemap.svg#icon-rating-star'); ?>"></use>
    </svg>
  </li>
  <?php endfor; ?>
</ul>