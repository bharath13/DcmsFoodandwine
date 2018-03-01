<?php 

/**
 * Ingredients List
 * Mapped to ../modules/custom/ti_amg_fwrd_recipe/templates/modules/recipe/ingredients-list.tpl.php
 *
 * @param string[] $ingredient_sets An array of ingredients to display.
 */
// 
?>

<?php foreach ($ingredient_sets as $ingredient_set):

$hasParentTitle = ($ingredient_set['title'] != '') ? true : false;

if ($hasParentTitle): ?>
  <div class="ingredients-list__title"><?php print $ingredient_set['title']; ?></div>
<?php endif; ?>
  <ul class="ingredients-list<?php echo $hasParentTitle ? ' ingredients-list--has-parent' : ''; ?>">
  <?php foreach ($ingredient_set['items'] as $set_item): ?>
    <li class="ingredients-list__item"><span itemprop="ingredients"><?php print $set_item; ?></span></li>
  <?php endforeach; ?>
  </ul>
<?php endforeach; ?>