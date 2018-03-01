<section class="section-container">
  <div class="page-container">
    <h2 class="section-heading section-heading--center">
      <span>
        <?php print t('New Recipes Added Daily'); ?>
        <span class="section-heading__subh">
          <?php
          if ($total_recipe_count > 0):
            print $total_recipe_count . t(' recipes and counting');
          endif;
          ?>
        </span>
      </span>
    </h2>
  </div>
  
  <div class="content-carousel-container" 
       data-js-component="smallCarousel"
       data-carousel-container=".content-carousel"
       data-next-btn=".pagination-btn--next"
       data-prev-btn=".pagination-btn--prev">
    <div class="content-carousel content-carousel--tight">
      <?php print $output; ?>
    </div>
    <div class="pagination-btn pagination-btn--prev">
      <?php print theme('pagination-arrow'); ?>
    </div>
    <div class="pagination-btn pagination-btn--next">
      <?php print theme('pagination-arrow'); ?>
    </div>
  </div>
  
  <div class="centered">
    <a href="/recipes" class="btn btn--arrow"><?php print t('See More Recipes')?></a>
  </div>
</section>

