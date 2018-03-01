<?php
/**
 * @file
 * Default theme implementation to display tag taxonomy term page.
 */
?>
<div id="taxonomy-term-<?php print $term->tid; ?>" class="<?php print $classes; ?>">
  <div class="content">
    <div class="tag-landing">
      <div class="page-container page-heading">
        <?php print $header; ?>
      </div>
      <div class="page-container">
        <div class="l-two-col l-two-col--landing section-container">
          <div class="l-two-col__left">
            <?php print render($touts) . theme('pager'); ?>
          </div>
          <div class="l-two-col__right">
            <div id="ad_multiad_300x250_wrapper" class="ad ad--300x600"></div><br/>
            <!-- Nativo Ad unit for tabulate and mobile -->
            <div id="ad_300x250_wrapper" class="ad ad--300x600"></div>
            <div id="ad_300x100_wrapper"></div><br/>         
          </div>
        </div>
      </div>
    </div>  
  </div>
</div>
