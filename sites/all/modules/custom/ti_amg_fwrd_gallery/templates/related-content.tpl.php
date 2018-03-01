<?php 
/**
 * Bottom module related content:
 * params: $items
 */
?>
<?php if (!empty($items['content'])) :?>
  <section>
    <h2 class="section-heading section-heading--center">
      <span><?php print $items['title']; ?></span>
    </h2>
    <div class="grid grid--6">
    <?php foreach ($items['content'] as $item) { ?>
      <?php print theme('story-card', array(
        'type' => 'outbound',
        'title' => $item['title'],
        'image_url' => $item['image']['uri'],
        'image_alt' => $item['title'],
        'image_credit' => $item['image']['credit'],
        'placeholder_url' => $item['image']['default_image_uri'],  
        'url' => $item['url'],
        'classes_list' => 'grid__item'
      )); ?>
    <?php } ?> 
    </div>
  </section>
<?php endif;?>
