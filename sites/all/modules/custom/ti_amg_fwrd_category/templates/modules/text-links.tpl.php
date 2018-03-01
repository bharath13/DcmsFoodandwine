<?php
/**
 * @file
 * Template file for Text Link Section.
 */
?>
<section class="text-link-section">
  <?php if (!empty($title)) : ?>
    <h3 class="section-heading section-heading--center"><span><?php print $title; ?></span></h3>
  <?php endif; ?>
  <div class="grid-3-up">
    <?php foreach ($text_links as $key => $row): ?>
      <?php
      $inline_class = 'grid-row--' . ($key + 1);
      if ($key > 4) :
        $inline_class .= ' hide';
      endif;
      ?>
      <div <?php if (!empty($inline_style) && isset($inline_style)) print $inline_style; ?> class="grid-row <?php if (isset($inline_class)) print $inline_class; ?>">
        <?php print $row; ?>
      </div>
    <?php endforeach; ?>
  </div>
  <?php if ((count($text_links) > 5)) : ?>
    <div class="centered"><a class="btn btn--plus-sign load-more-text-links">Load More</a></div>
  <?php endif; ?>
</section>
