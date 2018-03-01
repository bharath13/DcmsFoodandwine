<?php 
/**
 * Video Carousel
 * @param $output
 */
?>
 <section class="video-carousel section-container">
  <h3 class="section-heading section-heading--minor"><?php print $output['title']; ?></h3>
  <div class="content-carousel-container" 
       data-js-component="smallCarousel"
       data-carousel-container=".content-carousel"
       data-next-btn=".pagination-btn--next"
       data-prev-btn=".pagination-btn--prev"
       data-slides-to-show="4"
       data-center-padding="40px"
       data-center-mode="true">
    <div class="content-carousel content-carousel--contained content-carousel--wide-slides">
       <?php foreach ($output['slides'] as $slide): 
            print $slide;
          endforeach;
        ?>
    </div>
    <div class="pagination-btn pagination-btn--prev">
      <?php print theme('pagination-arrow'); ?>
    </div>
    <div class="pagination-btn pagination-btn--next">
      <?php print theme('pagination-arrow'); ?>
    </div>
  </div>
  <?php if (isset($output['link_url'])): ?>
    <?php print $output['link']; ?>
  <?php endif; ?>  
</section>
