<?php 

/**
 * Guide Card
 *
 * @param string $url The url the guide card should link to.
 * @param string $image_url The url of the image for the guide card.
 * @param string $title The title of the guide card.
 *
 * Optional Params:
 * @param array $classes An array of additional classes to add to the story-card.
 * @param boolean $always_display_title Forces the transparent title element to always show.
 * Mapped to ../modules/custom/ti_amg_fwrd_homepage/templates/modules/guide-card.tpl.php
 *
 */

$classes = !empty($classes) ? implode(' ', $classes) : '';

?>

<article class="guide-card <?php print ($always_display_title) ? 'guide-card--show-title ' : ''; ?><?php print $classes; ?>">
  <a href="<?php print $url; ?>">
    <img src="<?php print $image_url; ?>" alt="">
    <div class="guide-card__title-container">
      <h1 class="guide-card__title"><?php print $title; ?></h1>
    </div>
  </a>
</article>