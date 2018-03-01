<?php 

/**
 * Steps List
 *
 * @param string[] $steps An array of ordered steps.
 */

?>
<ol class="steps-list" itemprop="recipeInstructions">
  <?php $count = 1; ?>
  <?php foreach ($steps as $step): ?>
    <li class="steps-list__item">
      <span class="steps-list__item__text">
        <?php if (!empty($step['title'])): ?>
          <span class="step-title"><?php print $step['title']; ?></span>
        <?php endif; ?>
        <?php print render($step['content']); ?>
      </span>
    </li>
    <?php if ((!empty($device) && $device != 'desktop') && (count($steps) > 1) && ($count == 1)) : ?>
      <div class="video-tout-mob-tab"></div>
    <?php endif; ?>
    <?php $count++; ?>
  <?php endforeach; ?>
</ol>
