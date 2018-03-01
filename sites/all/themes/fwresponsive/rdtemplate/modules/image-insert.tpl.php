<?php
/**
 * Image Insert
 *
 * @param string $path URL to the image.
 * @param string $caption Caption for the image.
 * 
 * Optional Params:
 * @param array $classes An array of additional classes to add.
 * @param string $content_url URL to content.
 * @param boolean $is_video If this image needs a video play button.
 * Mapped to 2 files: feature-image(hero) and image-insert:
 * ../modules/custom/ti_amg_fwrd_feature/templates/modules/image-insert.tpl.php
 */

$classes = !empty($classes) ? implode(' ', $classes) : '';
if ($is_video) {
  $classes .= " image-insert--video";
}
if ($is_hero) {
  $classes .= " image-insert--hero";
}

?>

<figure class="image-insert <?php print $classes; ?>">
  <?php if ($content_url): ?>
  <a target="_blank" href="<?php print $content_url; ?>">
    <div class="image-insert__wrap">
        <img src="<?php print $path; ?>" alt="">
    </div>
  </a>
  <?php else: ?>
  <div class="image-insert__wrap">
    <img src="<?php print $path; ?>" alt="">
  </div>
  <?php endif; ?>
  <?php if ($caption): ?>
  <figcaption class="image-insert__caption"><?php print $caption; ?></figcaption>
  <?php endif; ?>
</figure>