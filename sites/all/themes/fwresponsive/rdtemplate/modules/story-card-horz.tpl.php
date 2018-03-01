<?php 

/**
 * Story Card (Horizontal Layout)
 *
 * @param string $title The title of the story.
 * @param string $heading The heading of the module.
 * @param string $url The URL of the story.
 * @param string $image_url The image for the story.
 * @param string $image_alt The alt value for the image.
 *
 * Optional Params:
 * @param array $classes An array of additional lasses to add to the story-card.
 * @param boolean $is_video Does the story card represent video content?
 * @param boolean $is_slideshow Does the story card represent slideshow content?
 */

$classes = !empty($classes) ? implode(' ', $classes) : '';

$classes .= !empty($is_video) ? ' story-card--is-video' : '';
$classes .= !empty($is_slideshow) ? ' story-card--is-slideshow' : '';

?>
<article class="story-card--horz <?php print $classes; ?> <?php print $type_to_class_map[$type]; ?>">
  <a class="story-card__link" href="<?php print $url; ?>">
    <div class="story-card__img-wrap">
      <img class="story-card__img" src="<?php print $image_url; ?>" alt="<?php print $image_alt; ?>">
    </div>
    <div class="story-card__content">
      <div class="story-card__content-interior">
        <?php if ($heading): ?>
        <h4 class="section-heading section-heading--minor"><?php print $heading; ?></h4>
        <?php endif; ?>
        <h2 class="story-card__title"><?php print $title; ?></h2>
      </div>
      <div class="story-card-arrow">
        <?php print theme('pagination-arrow'); ?>
      </div>
    </div>
  </a>
</article>