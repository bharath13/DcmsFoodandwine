<?php

/**
 * Recipe guides.
 */


if (!empty($output)) : ?>
<section class="section-container">
  <?php if(empty($carousel)): ?>
  <h2 class="section-heading section-heading--center"><span><?php if(isset($recipe_slide) && $recipe_slide == 'recipe_slide'): ?> 
      <?php print t('New Recipes Added Daily'); ?>
      <span class="section-heading__subh">
        <?php
        if ($total_recipe_count > 0):
        print $total_recipe_count . t(' recipes and counting');
        endif;
        ?>
      </span>
      <?php else: ?><?php print render($header); ?><?php endif; ?></span></h2>
  <?php endif; ?>
  <div class="grid-4-up grid-4-up--tight">
    <?php print $output; ?>
  </div>
  <?php if(empty($carousel)): ?>
  <div class="centered"><a href="<?php if (isset($recipe_slide)) { print ($recipe_slide == 'recipe_slide') ? '/recipes' : '/recipe-finder'; } ?>" class="btn btn--arrow">See More Recipes</a></div>
  <?php endif; ?>
</section>
<?php endif; ?>
