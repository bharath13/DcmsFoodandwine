<?php

/**
 * Rating Stars
 *
 * @param int[] $rating An array containg two values, the rating and the max rating
 * Will be integrated with Five Stars Module
 * array('4', '5');
 */
global $base_url;
?>

<ul class="rating-stars">
  <?php for ($i = 0; $i < 5; $i++): ?>
  <li class="rating-stars__star
    <?php if ($i < $rating) print 'rating-stars__star--active'; ?>">
    <svg viewBox="0 0 18 18">
      <use xlink:href="<?php
        print $img_path . '#icon-rating-star'; ?>"></use>
    </svg>
  </li>
  <?php endfor; ?>
</ul>
