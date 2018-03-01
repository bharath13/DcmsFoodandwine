<?php

/**
 * @file
 * Featured Recipes View template to display a list of rows.
 *
 * @ingroup views_templates
 */
?>

<?php if (!empty($title)): ?>
  <h3><?php print $title; ?></h3>
<?php endif; ?>
<div id='featured-recipes'>
    <span class='count'></span>
    <div class="carousel">
        <div class="frames">
            <?php foreach ($rows as $id => $row): ?>
              <div<?php
if ($classes_array[$id]) { print ' class="' . $classes_array[$id] . '"';
}?>>
                      <?php print $row; ?>
              </div>
            <?php endforeach; ?>
        </div>
       <?php if(count($rows) > 1){ ?>
            <a class='rsw-nav rsw-end' href='#' rel='prev'></a>
            <a class='rsw-nav' href='#' rel='next'></a>
       <?php } ?>
    </div>
</div>

