<?php 

/**
 * Highlight List
 *
 * @param most_popular[] $title and $content An array of list items.
 */

/** DO NOT USE: $data_type_to_class_map = array(
  'shares' => 'highlight-list__item__data--shares'
); */
if (!empty($most_popular['content'])):
$video_class =  (isset($is_video)) ? 'story-card--is-video' : '';
?>
  <section class="highlight-list">
    <h2 class="highlight-list__heading">
      <?php print $most_popular['title']; ?>
    </h2>
    <ul class="highlight-list__list">
      
       <?php if ($video_class != '') : ?>
         <?php foreach ($most_popular['content'] as $item): ?>
           <li class="highlight-list__item story-card--is-video">
            <?php if ($item['image_link']): ?>
              <div class="highlight-list__item__image story-card__img-wrap">
                 <?php print $item['image_link']; ?>
              </div>
            <?php endif; ?>
            <?php print $item['link'];
              if (!empty($item['total_shares'])): ?> 
              <div class="highlight-list__item__data highlight-list__item__data--shares">
                <?php print $item['total_shares'] . ' views'; ?>
              </div>
            <?php endif; ?>
          </li>
          <?php endforeach; ?>
       <?php else: ?>
         <?php foreach ($most_popular['content'] as $item): ?>
          <li class="highlight-list__item">
            <?php if (!empty($item['image_link'])): ?>
              <div class="highlight-list__item__image">
                 <?php print $item['image_link']; ?>
              </div>
            <?php endif; ?>
            <?php print $item['link'];
              if (!empty($item['total_shares'])): ?> 
              <div class="highlight-list__item__data highlight-list__item__data--shares">
                <?php print $item['total_shares'] . ' shares'; ?>
              </div>
            <?php endif; ?>
          </li>
        <?php endforeach; ?>
       <?php endif; ?>  
    </ul>
  </section>
<?php endif;
