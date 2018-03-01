<?php
/**
 * @file
 * Template file for Text Link Section Row. 
 */
?>
<ul class="tag-list">
  <?php foreach ($tags as $tag): ?>
    <li class="tag-list__tag grid-3-up__item">
      <a class="tag-list__tag-text" href="<?php print $tag['url']; ?>"><?php print $tag['label']; ?></a>
    </li>
  <?php endforeach; ?>
</ul>
