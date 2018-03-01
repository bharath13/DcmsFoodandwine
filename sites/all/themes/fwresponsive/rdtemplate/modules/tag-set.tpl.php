<?php 

/**
 * Tag Set
 * Mapped to ../modules/custom/ti_amg_fwrd_recipe/templates/modules/tag-set.tpl.php
 *
 * @param array[][] $tags An array of tags to display. Each tag should contain
 * the following data:
 *
 * Tag:
 * @param string $name The tag name.
 *
 * Optional Params:
 * @param string $url The url the tag should link to.
 */

?>
<ul class="tag-set">
  <?php foreach ($tags as $tag): ?>
    <li class="tag-set__tag">
      <?php if (!empty($tag['url'])): ?>
      <a class="tag-set__tag__text" href="<?php print $tag['url']; ?>"><?php print $tag['name']; ?></a>
      <?php else: ?>
      <span class="tag-set__tag__text"><?php print $tag['name']; ?></span>
      <?php endif ?>
    </li>
  <?php endforeach; ?>
</ul>