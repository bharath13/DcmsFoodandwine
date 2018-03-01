<?php

/**
 * @file
 * Featured Recipes to display a list of rows.
 *
 */
?>

<?php if (!empty($title)): ?>
  <h3 class="featured-recipes-title"><?php print $title; ?></h3>
<?php endif; ?>
<div id='featured-recipes'>
    <span class='count'></span>
    <div class="carousel">
        <div class="frames">
            <?php foreach ($rows as $id => $row): ?>
              <div class="frame <?php if ($id==0) print ' current'; ?>">
                <div class="picture">
                  <?php print $row['image_link']; ?>
                </div>
                 <div class="title">
                  <?php print $row['link']; ?>
                </div>  
              </div>
            <?php endforeach; ?>
        </div>
       <?php if(count($rows) > 1){ ?>
            <a class='rsw-nav rsw-end' href='#' rel='prev'></a>
            <a class='rsw-nav' href='#' rel='next'></a>
       <?php } ?>
    </div>
</div>