<?php 

/**
 * Steps List
 * Mapped to ../modules/custom/ti_amg_fwrd_recipe/templates/modules/recipe/steps-notes.tpl.php
 *
 * @param string[] $steps An array of ordered steps.
 */

?>
<ol class="steps-list" itemprop="recipeInstructions">
  <?php foreach ($steps as $step): ?>
    <li class="steps-list__item">
      <span class="steps-list__item__text"><?php print $step; ?></span>
    </li>
  <?php endforeach; ?>
</ol>