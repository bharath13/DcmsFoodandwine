<?php 

/**
 * Hero Carousel
 *
 * @param array $hero_slides.
 *
 */
  if (isset($hero_slides)):
?>

  <section class="section-container">
    <div class="content-carousel-container" 
         data-js-component="largeCarousel"
         data-carousel-container=".content-carousel"
         data-next-btn=".pagination-btn--next"
         data-prev-btn=".pagination-btn--prev">
      <div class="content-carousel content-carousel--focus-center">
        <?php foreach ($hero_slides as $slide): 
           if (isset($slide['video_id'])) :
             print theme('hero-video-feature', array(
            'hero_content' => $slide,
            'classes_list' => 'content-carousel__slide'  
            ));
           else :
             print theme('hero-feature', array(
              'hero_content' => $slide,
              'classes_list' => 'content-carousel__slide'  
              )); 
           endif;     
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
  </section>
  
<?php endif; 
 