<?php 
/**
 * Top video tout
 * params: $video_data: $title, 
 *                      $video obj: title, headline, image obj, video_id
 */
  
  $classes_list = isset($classes_list) ? $classes_list : '';
  if (isset($video_data)): 
?>
  <div class="recipe__related-video story-card <?php print $classes_list; ?>">
    <h4 class="recipe__section-heading recipe__section-heading--secondary">
      <?php print $video_data['title']; ?>
    </h4>
    <a href="/video" class="more-link">More Videos</a>
    <?php if (isset($video_data['video']['embed_video'])): ?>    
      <?php print $video_data['video']['embed_video']; ?>
    <?php else: ?> 
      <input class="video_tout_video_id"  type="hidden" name="video_id" value="<?php print $video_data['video']['video_id']; ?>">
      <div class="recipe__video-image-wrapper">
        <img  class="recipe__video-image"  
          src="<?php print $video_data['video']['image']['url']; ?>"
          alt="<?php if (isset($video_data['video']['image']['alt_text'])) print $video_data['video']['image']['alt_text']; ?>">
      </div>
    <?php endif; ?>
    <h5 class="story-card__title">
     <?php print $video_data['video']['title']; ?>
    </h5>
  </div>
<?php endif; ?>
