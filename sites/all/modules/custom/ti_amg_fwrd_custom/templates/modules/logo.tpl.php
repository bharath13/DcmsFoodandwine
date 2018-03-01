<?php 
/**
 * LOGO block - NOT in use
 * TODO: As soon the logo will be implemented as an image, 
 * will pul logo as a block.
 */
global $base_url;
?>
<a class="site-header__logo" href="/">
  <svg viewBox="0 0 332 44" title="Food and Wine" role="img">
   <use xlink:href="<?php 
      print $img_path . '#fw-logo'; ?>"></use>
  </svg>
  <?php if (isset($node_type) && ($node_type == 'home')): ?>
    <h1>Food &amp; Wine</h1>
  <?php endif; ?>
</a>