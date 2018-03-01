<?php 
/**
  * Landing Page Carousel
  * params: $recipe_carousel FALSE or TRUE
  * $slides - array of slides
  * $recipe_carousel_flag = FALSE - default
  */
  if (isset($slides)):
?> 

  <section class="section-container">
    <div class="content-carousel-container" 
         data-js-component="largeCarousel"
         data-carousel-container=".content-carousel"
         data-next-btn=".pagination-btn--next"
         data-prev-btn=".pagination-btn--prev">
  
      <div class="content-carousel content-carousel--focus-center">
         <?php foreach ($slides as $slide): 
            print theme('hero-video-feature', array(
            'hero_content' => $slide,
            'classes_list' => 'content-carousel__slide'  
            )); 
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
