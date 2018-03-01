<?php 

/**
 * Travel Guides Section
 *
 * TODO: make sure section won't be displayed if there is no content
 */
?>  
<?php if (!empty($output)) :  ?>
  <section class="section-container">
    <div class="page-container">
      <div class="section-heading section-heading--center">
        <h2 class="section-title"><?php print $header; ?></h2>
      </div>
    </div>
    <div id="travel_guide_section">
      <div class="subhead">
        <?php if (!empty($sub_heading)) : ?>
          <h3 class="subheading"><?php print $sub_heading; ?></h3>
        <?php endif; ?>
        <?php if (!empty($deck)) : ?> 
          <div class="deck"><?php print render($deck); ?></div>
        <?php endif; ?>
      </div>
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
      <?php 
      if(!empty($more)) : 
        print $more; 
      endif;
      ?>
    </div>
  </section>
<?php endif;  ?>
