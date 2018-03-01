<?php 
/**
 * LOGO block
 * TODO: As soon the logo will be implemented as an image, 
 * will pul logo as a block.
 */
global $base_url;
//print '<pre>';print_r($classes);exit;
?>
<a class="site-header__print-logo" href="/">
  <svg viewBox="0 0 332 44" title="Food and Wine" role="img">
   <use xlink:href="<?php 
      print $img_path . '#fw-logo'; ?>"></use>
  </svg>
</a>
