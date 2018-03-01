<?php 

/**
 * Spotlight Tout
 *
 * @param string $image_url The image to be displayed next to the quote.
 * @param string $quote The quote to display.
 * @param string $text The text to display below the quote.
 * @param string $more_url The URL to link to from the more button.
 * 
 *
 * Optional Params:
 * @param string $credit An optional story credit.
 * @param string $tout_title The title text of this tout.
 * @param boolean $alt If this is the Alternate version of the module.
 * Mapped to ../modules/custom/ti_amg_fwrd_homepage/templates/modules/personality-tout.tpl.php
 */

?>
<div class="spotlight-tout<?php print ($alt) ? ' spotlight-tout--alt' : ''; ?>">
  <div class="spotlight-tout__img">
    <img src="<?php print $image_url; ?>" alt="">
  </div>
  <div class="spotlight-tout__content">
    <?php if ($tout_title): ?>
    <span class="spotlight-tout__title"><?php print $tout_title; ?></span>
    <?php endif; ?>
    <div class="spotlight-tout__quote">
        <blockquote><?php print $quote; ?></blockquote>
    </div>
    <?php if ($text): ?>
    <p class="spotlight-tout__text"><?php print $text; ?></p>
    <?php endif; ?>
    <a class="spotlight-tout__link" href="<?php print $more_url; ?>">More</a>
  </div>
</div>