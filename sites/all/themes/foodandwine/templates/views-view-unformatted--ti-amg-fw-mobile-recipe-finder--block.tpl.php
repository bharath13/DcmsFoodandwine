<?php

/**
 * @file
 * Default simple view template to display a list of rows.
 *
 * @ingroup views_templates
 */
?>

<?php $recipe_parent = strip_tags($title); $recipe_parent_generic = strtolower(preg_replace('/-+/', '-', preg_replace('/[^\wáéíóú]/', '-', $recipe_parent)));
//print $parent;exit;
?>


<?php if (!empty($title)): ?>
<div class="recipe-list-container">
<a data-toggle="collapse" data-parent="#accordion" href="<?php print '#' . $recipe_parent_generic ?>" aria-expanded="false" aria-controls="<?php print $recipe_parent_generic ?>" class="default"><h3 ><?php print $title; ?></h3><div class="recipes-category-arrow"></div></a> 
<?php endif; ?>
  
  <div id="<?php print $recipe_parent_generic; ?>" class="panel-collapse collapse recipe-children">
<?php foreach ($rows as $id => $row): ?>
  <div<?php if ($classes_array[$id]) { print ' class="' . $classes_array[$id] . '"'; } ?>>
    <?php print $row; ?>
  </div>
<?php endforeach; ?>
  </div>
</div>

