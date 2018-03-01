<?php

/**
 * Hero featured carousel.
 *
 * @param string $hero_first_carousel The first hero carousel.
 * @param string $hero_carousels Remaining hero carousel.
 *
 * Optional Params:
 * @param array $classes An array of additional lasses to add to the hero-featured-carousel.
 */
?>

<div class="page-container">
  <?php
  if (!empty($hero_first_carousel)) : print $hero_first_carousel;
  endif;
  ?>
  <?php if (!empty($hero_carousels)) : ?>  
      <?php print $hero_carousels; ?>
  <?php endif; ?>
</div>
