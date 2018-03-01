<?php 
/**
 * Ingredients List
 * Mapped to ../modules/custom/ti_amg_fwrd_recipe/templates/modules/recipe/ingredients-list.tpl.php
 *
 * @param string[] $items an array of ingredients to display.
 */
?>
<?php if (!empty($items) && count($items) > 0) : ?>
  <?php foreach ($items as $key => $ingredient_set):
    $key = strtolower($key);
    $hasParentTitle = ($key != '' && $key != 'ingredients') ? true : false;
    if ($hasParentTitle): ?>
      <div class="ingredients-list__title"><?php print $key; ?></div>
    <?php endif; ?>
    <ul class="ingredients-list<?php echo $hasParentTitle ? ' ingredients-list--has-parent' : ''; ?>">
      <?php foreach ($ingredient_set as $set_item): ?>
        <li class="ingredients-list__item"><span itemprop="ingredients"><?php print $set_item; ?></span></li>
      <?php endforeach; ?>
    </ul>
  <?php endforeach; ?>
<?php endif; ?>
