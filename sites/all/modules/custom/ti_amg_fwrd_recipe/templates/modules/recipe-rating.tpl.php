<?php
/**
 * @file
 * Contains Recipe Ratings along with schema for ratings and reviews.
 */
?>
<div class="spot-im-stars-rating-module" data-post-id="<?php print $nid; ?>" data-spot-id="<?php print $spot_im_id; ?>">
  <?php print $static_ratings;?>
</div>
<?php if ($enable_spot_im) :?>
  <script type="text/javascript" src="https://www.spot.im/embed/modules/launcher/bundle.js?module=stars-rating"></script>
<?php endif;?>
<?php if ($enable_static_schema_org) :?>
<div class="hide">
  <span itemprop="aggregateRating" itemscope itemtype="http://schema.org/AggregateRating">
    <span itemprop="ratingValue"><?php print $rating_info['aggregate_rating']; ?></span>
    <span itemprop="reviewCount"><?php print $rating_info['review_count']; ?></span>
    <span itemprop="worstRating"><?php print $rating_info['worst_rating']; ?></span> 
    <span itemprop="bestRating"><?php print $rating_info['best_rating']; ?></span>
  </span>
</div>
<?php endif; ?>
