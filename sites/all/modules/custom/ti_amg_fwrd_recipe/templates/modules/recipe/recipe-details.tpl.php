<?php 
/**
 * Recipe Details
 * params: $time: active an total time
 *         $servings
 */
?>
<ul class="recipe__details">    
  <?php 
  if (isset($active_time['active_time']) && $active_time['active_time'] != ''): ?>
    <li class="recipe__details__item">
      Active: <time datetime="<?php print $active_time['rich_snippet_active_time']; ?>" itemprop="prepTime">
        <?php print $active_time['active_time']; ?>
      </time>
    </li>
  <?php endif; 
  if (isset($time['total_time']) && $time['total_time'] != ''): ?>
    <li class="recipe__details__item">
      Total Time: <time datetime="<?php print $time['rich_snippet_total_time']; ?>" itemprop="totalTime">
        <?php print $time['total_time']; ?>
      </time>
    </li>
  <?php endif;
  if (isset($servings) && $servings != '') : ?>
    <li class="recipe__details__item">
      Servings: <span itemprop="recipeYield">
        <?php print $servings; ?>
      </span>
    </li>
  <?php endif;
  if (isset($other_time) && $other_time != '') : ?>
    <li class="recipe__details__item time_other">
      Time(Other): <span class="other_time">
        <?php print $other_time; ?>
      </span>
    </li>
  <?php endif;
  ?>
</ul>
