<?php 

/**
 * Video Section
 *
 * @param $output
 * Optional:
 * @param: $classes
 */
?>
<section class="section-container">
    <h2 class="section-heading section-heading--center"><span><?php print t('Video');?></span></h2>
    
    <div class="l-two-col l-two-col--landing">
      <div class="l-two-col__left"> 
        <div class="story-card  story-card--is-video story-card--feature-lg <?php print $classes_list;?>">
          <?php print $output['large_video_tout']['video']; ?>
          <div class="story-card__title"><?php print $output['large_video_tout']['title']; ?></div>
          <div class="story-card__text"><?php print render($output['large_video_tout']['text']); ?></div>  
        </div>
      </div>
      <div class="l-two-col__right">
        <div class="ad ad--300x600">
          <!-- placeholder ad -->
          <?php print render($rightrail_ad_desktop); ?>
        </div>
      </div>
    </div>
    
    <h4 class="section-heading section-heading--minor"><?php print t('More New Video');?></h4>
    <div class="grid-4-up">
      <?php print  $output['small_video_touts'];?>
    </div>
    
    <!--<h4 class="section-heading section-heading--minor">Top F&amp;W Video Channel</h4>
    <div class="grid-4-up">
      <?php //print theme('story-card', array(
        //'title' => 'Michael Symon and Kristen Kish: Food vs. Sex',
        //'url' => '#',
        //'image_url' => 'http://clients.expandtheroom.net/food-and-wine/redesign/placeholder-images/video-card-1.jpg',
        //'is_video' => true,
        //'classes_list' => 'grid-4-up__item'
      //)); ?>
      
    </div>
-->
    <div class="centered">
      <a href="/video" class="btn btn--arrow"><?php print t('See More Video');?></a>
    </div>

  </section>
