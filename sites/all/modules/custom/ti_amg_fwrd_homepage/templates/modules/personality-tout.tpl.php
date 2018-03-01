<?php 

/**
 * Personality Tout
 *
 * @param array $pull_quote.
 */

  if (!empty($pull_quote)):
?>
  <div class="personality-tout">
    <img class="personality-tout__img" 
      src="<?php print $pull_quote['image']['uri']; ?>" 
      alt="<?php print $pull_quote['image']['alt']; ?>">
    <div class="personality-tout__content">
      <div class="personality-tout__quote">
        <?php print $pull_quote['headline']; ?>
      </div>
      <p class="personality-tout__text">
         <?php print $pull_quote['deck']; ?>
      </p>
      <a class="personality-tout__link" 
        href="<?php print $pull_quote['url']; ?>">More</a>
    </div>
  </div>
<?php endif;
