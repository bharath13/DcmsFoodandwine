<?php 
/**
  * Top Landing Filmstrip Section
  */ 
  if (isset($slides)):
?> 
    <section class="section-container filmstrip-section">
      <div class="page-container tile-nav-carousel"
           data-js-component="tileCarousel"
           data-carousel-container=".tile-nav"
           data-next-btn=".pagination-btn--next"
           data-prev-btn=".pagination-btn--prev">
    
        <div class="tile-nav">
          <?php foreach ($slides as $slide): 
            print theme('guide-card', array(
              'url' => $slide['url'],
              'image_url' => $slide['image']['uri'],
              'title' => $slide['title'],
              'always_display_title' => true,
              'classes_list' => 'tile-nav__item'
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
  