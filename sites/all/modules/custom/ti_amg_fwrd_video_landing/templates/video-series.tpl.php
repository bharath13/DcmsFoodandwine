<?php 

/**
 * Video Series
 *
 * @param $output, $content
 * Optional:
 * @param: $classes
 */
if (!empty($output['small_video_touts'])):
?>
<div class="grid-3-up video-channels__row">
  <header class="section-heading-container">
    <h4 class="section-heading section-heading--minor"><?php print $content['topic'];?></h4>
    <p class="section-heading-desc"><?php print $content['series_headline'];?></p>
  </header>
  <div class="grid-row">
    <?php print  $output['small_video_touts'];?>     
  </div>
  <div class="centered">
   <?php if (isset($content['see_link'])): ?>
     <?php print  $content['see_link'];?>
   <?php endif; ?>  
  </div>
</div>
<?php  endif; 
