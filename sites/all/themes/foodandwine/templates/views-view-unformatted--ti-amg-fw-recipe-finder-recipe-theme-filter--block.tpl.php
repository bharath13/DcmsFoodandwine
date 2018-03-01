<?php

/**
 * @file
 * Default simple view template to display a list of rows.
 *
 * @ingroup views_templates
 */
?>
<div class="recipe-parent-theme">
<?php if (!empty($title)): ?>
  <?php $raw_parent = strip_tags($title); $parent = strtolower(preg_replace('/-+/', '-', preg_replace('/[^\wáéíóú]/', '-', $raw_parent)));
?>
  
  <h3><a href="<?php print '/recipe-finder/' . $parent; ?>"> <?php print $title; ?></a></h3>
<?php endif; ?>
<?php foreach ($rows as $id => $row): ?>
  <div<?php if ($classes_array[$id]) { print ' class="' . $classes_array[$id] . '"'; } ?>>
    <?php print $row; ?>
  </div>
<?php endforeach; ?>
</div>

