<?php

/**
 * @file
 * Story Card.
 *
 * @param string $title The title of the story.
 * @param string $url The URL of the story.
 * @param string $image_url The image for the story.
 * @param string $image_alt The alt value for the image.
 *
 * Optional Params:
 * @param string $type The story card type. Valid values are:
 *                     'feature', outbound'
 * @param string $classes_list An string of additional classes to add
 *                             to the story-card.
 * @param string $credit An optional story credit.
 * @param string $sponsor An optional sponsor of the story.
 * @param string $text A snippet of text to display below the title.
 * @param string $slugs An array of slugs to display.
 * @param array $breadcrumbs An array of breadcrumb links to display. See
 *                           breadcrumbs module for argument values.
 * @param boolean $is_video Does the story card represent video content?
 * @param boolean $is_slideshow Does the story card represent slideshow content?
 */

$classes_list .= (!empty($is_video)  && $is_video) ? ' story-card--is-video' : '';
$classes_list .= !empty($is_slideshow) ? ' story-card--is-slideshow' : '';

$type = !empty($type) ? $type : '';
$type_to_class_map = array(
  '' => '',
  'feature' => 'story-card--feature',
  'feature-lg' => 'story-card--feature-lg',
  'outbound' => 'story-card--outbound',
);

$videoid = (isset($videoid)) ? $videoid : '';
$video_asset_id = (isset($video_asset_id)) ? $video_asset_id : '';
$publisheddate = (isset($publisheddate)) ? $publisheddate : '';
$pathalias = (isset($pathalias)) ? $pathalias : '';
$attr_video_id = (!empty($is_video) && $is_video) ? 'data-video-id=' . $videoid : '';
$attr_video_asset_id = (!empty($is_video) && $is_video) ? 'data-video-asset-id=' . $video_asset_id : '';
$attr_published_date = (!empty($is_video) && $is_video) ? 'data-published-date=' . $publisheddate : '';
$attr_path_alias = (!empty($is_video) && $is_video) ? 'data-path-alias=' . $pathalias : '';
?>
<article class="story-card <?php print $classes_list; ?> <?php print $type_to_class_map[$type]; ?>"> 
  <?php if (isset($nativo_ad)) : ?>
    <?php print $nativo_ad; ?>
  <?php endif; ?>
  <a class="story-card__link" href="<?php if (isset($url)) {print $url;
 } ?>"> 
    <div class="story-card__img-wrap">
      <?php if(isset($home_page) && $home_page == 'home_page' && $node_type != 'video' && !empty(render($image))): ?>
    <?php print render($image); ?>
    <?php else: ?> 
        <?php if (!empty($placeholder_url)): ?>      
          <img class="story-card__img" data-js-component="imgLazyLoad" 
            src="<?php print $placeholder_url; ?>" data-original="<?php print $image_url; ?>"
            alt="Food &amp; Wine:  <?php print $image_alt; ?>">        
          <?php else: ?>
            <img class="story-card__img" src="<?php print $image_url; ?>" alt="Food &amp; Wine: <?php print $image_alt; ?>">
          <?php endif; ?>
    <?php endif; ?>    
    </div>
    <div class="story-card__content">
      
      <?php if (!empty($breadcrumbs)): ?>
      <?php print theme('breadcrumbs', array('type' => 'dark', 'links' => $breadcrumbs)); ?>
      <?php endif; ?>
        
      <?php if (!empty($tags)): ?>
        <ol class="breadcrumbs breadcrumbs--dark">
          <li class="breadcrumbs__crumb">
              <span class="breadcrumbs__crumb__link"><?php print $tags; ?></span>
          </li>    
        </ol>
      <?php endif; ?>
        
      <?php if (!empty($sponsor)): ?>
      <div class="story-card__sponsor">Sponsored content by <?php print $sponsor; ?> </div>
      <?php endif; ?>
      <?php if (!empty($type) && ($type == 'outbound')): ?>
        <span class="story-card__title"><?php print $title; ?></span>
      <?php else: ?>
        <span class="story-card__title"><?php print $title; ?></span>
      <?php endif; ?>
      <?php if (!empty($text)): ?>
      <div class="story-card__text"><?php print render($text); ?></div>
      <?php endif; ?>

      <?php if (!empty($credit)): ?>
        <div class="story-card__credit"><?php print $credit; ?></div>
      <?php endif; ?>
    </div>   
      </a>    
</article>
