<?php 

/**
 * Related Content
 *
 * @param array $links Array of links and titles of related content.
 * 
 * Optional Params:
 * @param array $classes An array of additional classes to add.
 */


if (!empty($related_contents)):
?>

<div class="related-content <?php print $classes_list; ?>">
  <h3 class="related-content__heading">Related</h3>
  <ul class="related-content__list">
    <?php foreach($related_contents as $content): ?>
      <li class="related-content__list-item">
        <?php print $content['link']; ?>
      </li>
    <?php endforeach; ?>
  </ul>
</div>
<?php endif; 
