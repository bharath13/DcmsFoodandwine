<?php 

/**
 * Story Card
 * Mapped to ../modules/custom/ti_amg_fwrd_custom/templates/modules/story-card.tpl.php
 *
 * @param string $title The title of the story.
 * @param string $url The URL of the story.
 * @param string $image_url The image for the story.
 * @param string $image_alt The alt value for the image.
 *
 * Optional Params:
 * @param string $type The story card type. Valid values are:
 *                     'feature', 'standard', 'outbound' 
 * @param array $classes An array of additional lasses to add to the story-card.
 * @param string $credit An optional story credit.
 * @param string $sponsor An optional sponsor of the story.
 * @param string $text A snippet of text to display below the title.
 * @param string $slugs An array of slugs to display.
 * @param array $breadcrumbs An array of breadcrumb links to display. See
 *        breadcrumbs module for argument values.
 * @param boolean $is_video Does the story card represent video content?
 * @param boolean $is_slideshow Does the story card represent slideshow content?
 */

$classes = !empty($classes) ? implode(' ', $classes) : '';

$classes .= !empty($is_video) ? ' story-card--is-video' : '';
$classes .= !empty($is_slideshow) ? ' story-card--is-slideshow' : '';

// default to standard type
$type = isset($type) ? $type : '';

$type_to_class_map = array(
  '' => '',
  'feature' => 'story-card--feature',
  'feature-lg' => 'story-card--feature-lg',
  'outbound' => 'story-card--outbound'
);

?>
<article class="story-card <?php print $classes; ?> <?php print $type_to_class_map[$type]; ?>">
  <a class="story-card__link" href="<?php print $url; ?>">

    <div class="story-card__img-wrap">
      <img class="story-card__img" src="<?php print $image_url; ?>" alt="<?php print $image_alt; ?>">
    </div>

    <div class="story-card__content">
      
      <?php if (!empty($breadcrumbs)): ?>
      <?php print theme('breadcrumbs', array('type' => 'dark', 'links' => $breadcrumbs)); ?>
      <?php endif; ?>

      <?php if (!empty($sponsor)): ?>
      <div class="story-card__sponsor">Sponsored content by <?php print $sponsor; ?> </div>
      <?php endif; ?>
      
      <h2 class="story-card__title"><?php print $title; ?></h2>
      
      <?php if (!empty($text)): ?>
      <p class="story-card__text"><?php print $text; ?></p>
      <?php endif; ?>

      <?php if (!empty($credit)): ?>
        <div class="story-card__credit"><?php print $credit; ?></div>
      <?php endif; ?>
    </div>
  </a>
</article>