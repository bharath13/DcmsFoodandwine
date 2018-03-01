<?php 
/**
 * Bottom module third:
 * Related Video Module
 * params: $related_videos_title, $related_videos
 */
?>
  <section>
    <h2 class="section-heading section-heading--center">
      <span><?php print $related_videos_title; ?></span>
    </h2>
    <div class="grid grid--6">
    <?php foreach ($related_videos as $related_video) { ?>
      <?php print theme('story-card', array(
        'title' => $related_video['title'],
        'image_url' => $related_video['image']['uri'],
        'image_alt' => $related_video['title'],
        'image_credit' => $related_video['image']['credit'],
        'placeholder_url' => $related_video['image']['default_image_uri'],  
        'url' => $related_video['url'],
        'classes_list' => 'story-card--related grid__item'
      )); ?>
    <?php } ?> 
    </div>
  </section>
  