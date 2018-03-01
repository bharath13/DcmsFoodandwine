<?php 
/**
 * Bottom module forth:
 * Related Article and Galleries Module
 * params: $related_contents
 */
?>
  <section>
    <h2 class="section-heading section-heading--center">
      <span><?php print $related_title; ?></span>
    </h2>
    <div class="grid grid--6">
    <?php foreach ($related_contents as $related_content) { ?>
      <?php print theme('story-card', array(
        'title' => $related_content['title'],
        'image_url' => $related_content['image']['uri'],
        'image_alt' => $related_content['title'],
        'image_credit' => $related_content['image']['credit'],
        'placeholder_url' => $related_content['image']['default_image_uri'],
        'url' => $related_content['url'],
        'classes_list' => 'story-card--related grid__item'
      )); ?>
    <?php } ?> 
    </div>
  </section>
  