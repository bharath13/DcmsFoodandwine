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
 */

if ($is_video) {
  $classes_list .= " image-insert--video";
}
if ($is_hero) {
  $classes_list .= " image-insert--hero";
}
if (!empty($image)):
?>

  <figure class="image-insert <?php print $classes_list; ?>">
    <?php if ($image['content_url']): ?>
    <?php print $image['link']; ?>
    <?php else: ?>
    <div class="image-insert__wrap">
      <img src="<?php print $image['uri']; ?>" alt="<?php print $image['alt']; ?>">
    </div>
    <?php endif; ?>
    <?php if ($image['caption']): ?>
    <figcaption class="image-insert__caption"><?php print $image['caption']; ?>
      <em><?php print $image['credit']; ?></em>
    </figcaption>
    <?php endif; ?>
  </figure>
<?php endif;
  