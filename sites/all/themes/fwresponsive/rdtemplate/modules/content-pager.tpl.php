<?php

/**
 * Guide Card
 *
 * @param array $previous Data referring to the previous content item to be shown.
 * @param array $next Data referring to the next content item to be shown.
 *
 * Optional Params:
 * @param array $classes Optional wrapper classes.
 * Mapped to: ../modules/custom/ti_amg_fwrd_feature/templates/modules/content-pager.tpl.php
 */

$classes = !empty($classes) ? implode(' ', $classes) : '';
$show_image = isset($show_image) ? $show_image : false;

?>

<div class="content-pager <?php print $classes; ?>">
  <a class="content-pager__link content-pager__link--prev <?php echo ($show_image) ? 'content-pager__link--has-image' : ''; ?>" href="<?php print $previous['url']; ?>">
    <div class="pagination-btn pagination-btn--prev">
      <?php print theme('pagination-arrow'); ?>
    </div>
    <?php if ($show_image): ?>
    <img class="content-pager__image" src="<?php print $previous['image']['uri']; ?>" />
    <?php endif; ?>
    <div class="content-pager__link-interior">
      <div class="content-pager__link-dir">Previous</div>
      <div class="content-pager__link-title"><?php print $previous['title']; ?></div>
    </div>
  </a>
  <a class="content-pager__link content-pager__link--next <?php echo ($show_image) ? 'content-pager__link--has-image' : ''; ?>" href="<?php print $next['url']; ?>">
    <div class="content-pager__link-interior">
      <div class="content-pager__link-dir">Next</div>
      <div class="content-pager__link-title"><?php print $next['title']; ?></div>
    </div>
    <?php if ($show_image): ?>
    <img class="content-pager__image" src="<?php print $next['image']['uri']; ?>" />
    <?php endif; ?>
    <div class="pagination-btn pagination-btn--next">
      <?php print theme('pagination-arrow'); ?>
    </div>
  </a>
</div>