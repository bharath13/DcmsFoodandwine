<?php 

/**
 * Spotlight Tout
 *
 * @param array $pull_quote.
 * @param boolean $alt Is this the alternate variation of the tout module
 * 
 */
  
  $alt_design_class = !empty($alt_design) ? 'spotlight-tout--alt' : '';

  if (isset($pull_quote)):
?>
<div class="spotlight-tout <?php print $alt_design_class; ?>">
  <div class="spotlight-tout__img">
    <img 
      src="<?php print $pull_quote['image']['uri']; ?>" 
      alt="<?php print $pull_quote['image']['alt']; ?>">
  </div>
  <div class="spotlight-tout__content">
    <?php if (isset($pull_quote['tout_title'])): ?>
    <span class="spotlight-tout__title"><?php print $pull_quote['tout_title']; ?></span>
    <?php endif; ?>
    
    <div class="spotlight-tout__quote">
      <blockquote><?php print $pull_quote['headline']; ?></blockquote>
    </div>
    
    <?php if (isset($pull_quote['deck'])): ?>
    <p class="spotlight-tout__text">
       <?php print $pull_quote['deck']; ?>
    </p>
    <?php endif; ?>
    
    <a class="spotlight-tout__link" 
      href="<?php print $pull_quote['url']; ?>">More</a>
  </div>
</div>
<?php endif;
