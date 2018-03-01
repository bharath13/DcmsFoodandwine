<?php 

/**
 * Hero Feature
 *
 * @param string $title The hero feature title.
 * @param string $url The url the hero feature should link to.
 * @param string $image_url The url to the image for the hero feature.
 *
 * Optional Params:
 * @param string $dek The dek for the hero feature.
 * @param boolean $is_fullscreen Whether the feature is the full screen variation.
 * @param string $image_alt The alt attr value for the image.
 * @param array $classes An array of additional lasses to add to the story-card.
 * Mapped to ../modules/custom/ti_amg_fwrd_homepage/templates/modules/hero-feature.tpl.php
 * 
 */

$image_alt = !empty($image_alt) ? $image_alt : '';
$classes = !empty($classes) ? implode(' ', $classes) : '';

if (!empty($is_fullscreen)) $classes .= ' hero-feature--fs'; 
?>
<article class="hero-feature <?php print $classes; ?>">
  <?php if (!empty($is_fullscreen)): ?>
  <svg class="hero-feature__fs-fw-logo" viewBox="0 0 332 44" 
  title="Food and Wine" role="img">
    <use xlink:href="<?php asset('img/spritemap.svg#fw-logo'); ?>"></use>
  </svg>
  <?php endif; ?>
  
  <?php if (!empty($is_fullscreen)): ?>
  <!-- The fullscreen bg image -->
  <div class="hero-feature__fs-img" style="background-image: url(<?php print $image_url; ?>)"></div>
  <?php else: ?>
  <div class="hero-feature__img-wrap">
    <img class="hero-feature__img" src="<?php print $image_url; ?>" alt="<?php print $image_alt ?>">
  </div>
  <?php endif; ?>
  <div class="hero-feature__content">
    <a href="<?php print $url; ?>">
      <h2 class="hero-feature__content__title"><?php print $title; ?></h2>
      <?php if (!empty($dek)): ?>
      <p class="hero-feature__content__dek"><?php print $dek; ?></p>
      <?php endif; ?>
    </a>
  </div>
</article>