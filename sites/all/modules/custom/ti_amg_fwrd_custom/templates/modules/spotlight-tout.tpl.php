<?php

/**
 * @file
 * Tout $pull_quote, $alt Is this the alternate variation of the tout module.
 */
  $alt_design_class = !empty($alt_design) ? 'spotlight-tout--alt' : '';
  $no_pinit = (!empty($type) && ($type == 'staffpick')) ? 'nopin="nopin"' : '';
  $quote_style = '';
  if (!empty($pull_quote)):
    if (!empty($type) && ($type == 'staffpick')) :
      $pull_quote['tout_title'] = !empty($pull_quote['tout_title']) ? $pull_quote['tout_title'] : '';
      if (!empty($pull_quote['quote_style']) && ($pull_quote['quote_style'] == 1)) :
        $quote_style = ' spotlight-tout--show-quote';
      else :
        $quote_style = '';
      endif;
    endif;
?>
<div class="spotlight-tout <?php print $alt_design_class . $quote_style; ?>">
<?php if (!empty($pull_quote['image']) && !empty(!empty($pull_quote['tout_title']))): ?>
    <div class="spotlight-tout__img">
      <a class="spotlight-tout__clink" href="<?php print $pull_quote['url']; ?>">
        <img src="<?php print $pull_quote['image']['uri']; ?>" alt="<?php print $pull_quote['image']['alt']; ?>" <?php print $no_pinit; ?> >
      </a>
    </div>
  <?php endif; ?>
  <div class="spotlight-tout__content">
    <a class="spotlight-tout__clink" href="<?php if (isset($pull_quote['url'])) print $pull_quote['url']; ?>">
      <div class="spotlight-tout__quote">
        <?php if (isset($pull_quote['tout_title'])): ?>
        <span class="spotlight-tout__title"><?php print $pull_quote['tout_title']; ?></span>
        <?php endif; ?>
        <blockquote><?php print render($pull_quote['headline']); ?></blockquote>
      </div>
      <?php if (isset($pull_quote['deck'])): ?>
      <p class="spotlight-tout__text">
         <?php print $pull_quote['deck']; ?>
      </p>
      <?php endif; ?>
    </a>
  </div>
</div>
<?php endif;
