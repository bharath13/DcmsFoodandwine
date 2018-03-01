<?php 

/**
 * Highlight List
 *
 * @param string $title The list title.
 * @param items[] $items An array of list items.
 *
 * Item:
 * @param string $title The title of the item.
 * @param string $data Extra data to display below item title. (i.e. # of Shares)
 * Optional
 * @param string $data_type The type of data. Valid values are 'shares'.
 * @param string $image_url The image of the item.
 * Mapped to ../modules/custom/ti_amg_fwrd_homepage/templates/modules/highlight-list.tpl.php
 */

$data_type_to_class_map = array(
  'shares' => 'highlight-list__item__data--shares'
);

?>
<section class="highlight-list">
  <h3 class="highlight-list__heading"><?php print $title; ?></h3>
  <ul class="highlight-list__list">
    <?php foreach ($items as $item): ?>
    <li class="highlight-list__item">
      <?php if ($item['image_url']): ?>
      <div class="highlight-list__item__image">
        <a href="#"><img src="<?php print $item['image_url']; ?>"></a>
      </div>
      <?php endif; ?>
      <a class="highlight-list__item__link" href="#"><?php print $item['title']; ?></a>
      <?php if (!empty($item['data'])): ?> 
        <div class="highlight-list__item__data 
          <?php if (!empty($item['data_type'])) { 
            print $data_type_to_class_map[ $item['data_type'] ]; 
          } ?>">
          <?php print $item['data']; ?>
        </div>
      <?php endif; ?>
    </li>
    <?php endforeach; ?>
  </ul>
</section>