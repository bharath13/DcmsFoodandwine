<?php 

/**
 * Related Content
 *
 * @param array $links Array of links and titles of related content.
 * 
 * Optional Params:
 * @param array $classes An array of additional classes to add.
 */

$classes = !empty($classes) ? implode(' ', $classes) : '';
$links = !empty($links) ? $links : '';

?>

<div class="related-content <?php print $classes; ?>">
  <h3 class="related-content__heading">Related</h3>
  <ul class="related-content__list">
    <?php foreach($links as $link): ?>
    <li class="related-content__list-item"><a href="<?php print $link['url']; ?>"><?php print $link['title']; ?></a></li>
    <?php endforeach; ?>
  </ul>
</div>