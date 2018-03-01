<?php 

/**
 * Hero Feature
 *
 * @param array $hero_content.
 *
 * Optional Params:
 * @param boolean $is_fullscreen Whether the feature is the full screen variation.
 * @param array $classes An array of additional lasses to add to the story-card.
 */
global $base_url;
$classes_list = (!empty($classes_list)) ? $classes_list : '';
if (!empty($is_fullscreen)) $classes_list .= ' hero-feature--fs'; 
if (isset($hero_content['video'])) $classes_list .= ' story-card--is-video';
$video_embed_classes = 'mobile-player';

if (!empty($hero_content)):
?>
  <article class="hero-feature <?php print $classes_list; ?> <?php print $mobile_slide; ?>">
    <?php if (isset($hero_content['embed_video'])): ?>
      <div class="hero-feature__link <?php print $video_embed_classes; ?>">
         <div class="hero_slide_video_id"></div>
           <?php print $hero_content['embed_video']; ?>     
      </div>   
    <?php endif;  ?>  
  </article>
<?php endif;  
