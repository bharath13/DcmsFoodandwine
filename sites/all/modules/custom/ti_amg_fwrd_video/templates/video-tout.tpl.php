<?php 
/** 
 * Video Tout
 * @param $video_obj
 */
?>
<div class="video_player <?php print $classes;?>">
  <?php print $video_obj['video']; ?>
</div>  
<div class="story-card__content">
  <h1 itemprop="name" class="story-card__title"> <?php print $video_obj['title']; ?> </h1>
</div>
