<?php
/**
 * @file
 * Category page Hero section video template file
 */
?>
<?php
$classes_list = '';
if (isset($hero_content['video'])) {
  $classes_list .= ' story-card--is-video';
}
if (!empty($hero_content['video_details'])) {
  $video_meta_tags = '';
  $video_duration = '';
  $video_thumbnail_url = '';
  $video_url = '';
  if (!empty($hero_content["video_details"]["video_duration"])) {
    $video_duration = '<meta itemprop="duration" content="'.$hero_content["video_details"]["video_duration"].'" />';
  }
  if (!empty($hero_content["video_details"]["video_thumbnail_url"])) {
    $video_thumbnail_url = '<meta itemprop="thumbnailUrl" content="'.$hero_content["video_details"]["video_thumbnail_url"].'" />';
  }
  if (!empty($hero_content["video_details"]["video_url"])) {
    $video_url = '<meta itemprop="contentURL" content="'.$hero_content["video_details"]["video_url"].'" />';
  }
  $video_meta_tags = $video_duration . $video_thumbnail_url . $video_url;
}
?>
<div itemprop="video" itemscope itemtype="http://schema.org/VideoObject">
<?php print $video_meta_tags; ?>
<article class="story-card story-card--feature-lg <?php print $classes_list; ?>">
  <?php if (isset($hero_content['video'])) : ?>
  <section>
      <div class="video_player">
        <?php print $hero_content['video']; ?>
      </div>  
      <?php if (!empty($hero_content['title'])) : ?>
        <div itemprop="name" class="story-card__title"><?php print $hero_content['title']; ?></div>
      <?php endif; ?>
      <?php if (!empty($hero_content['deck'])) : ?>
        <div itemprop="description" class="story-card__text"><?php print render($hero_content['deck']); ?></div>
      <?php endif; ?>
    </section>
  <?php endif; ?>
</article>
</div>
