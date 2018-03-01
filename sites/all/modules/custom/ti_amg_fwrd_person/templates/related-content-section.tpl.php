<?php
/**
 * Related Content Series
 *
 * @param $output, $content
 * Optional:
 * @param: $classes
 */
if (!empty($output['small_video_touts'])):
?>
<a name="<?php print $type; ?>"></a>
<section class="section-container">
  <h3 class="section-heading section-heading--center"><span><?php print $content['topic']; ?></span></h3>
  <div class="grid-3-up video-channels__row">
    <?php print  $output['small_video_touts'];?>
    <div class="centered">
      <?php if($paginated_recipes && $total_touts_count > 6) : ?>
        <a class="btn btn--plus-sign load-more-touts-latest">Load More</a>
      <?php else: ?>
        <?php if (isset($content['see_link'])): ?>
          <?php print  $content['see_link'];?>
        <?php endif; ?>
      <?php endif; ?>
    </div>
  </div>
</section>
<?php endif;  ?>
