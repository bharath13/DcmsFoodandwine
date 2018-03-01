<?php

/**
 * Latest Stories.
 *
 * @param $output[] $title and $nativo_content.
 * Optional:
 * @param $placeholder_url
 */
?>
<section>
  <?php
  if (!empty($field_hero_slide)) {
    $field_hero_slide = $field_hero_slide;
  }
  else {
    $field_hero_slide = '';
  }
  ?>
  <?php if ($field_hero_slide != 'field_hero_slide'): ?>
    <h2 class="section-heading section-heading--center"><span><?php print $title; ?></span></h2>
  <?php endif; ?>
  <?php
    $i = 1;
    $nativo_ad = '';
  ?>
  <div class="grid-3-up">
  <?php foreach ($output as $latest):  ?>
    
    <?php if ($i <= 3): ?>
      <?php if ($i == 1): ?>
        <div class="grid-row">
      <?php endif; ?>
      <?php
      if ($i == 3 && !empty($section) && $section == 'hero') :
        $nativo_ad = '<div class="nativo_ad nativo_ad_1"></div>';
      elseif ($i == 3 && !empty($section) && $section == 'latest') :
        $nativo_ad = '<div class="nativo_ad nativo_ad_2"></div>';
      else :
        $nativo_ad = '';
      endif;
      ?>
      <?php print theme('story-card', array(
        'type' => 'feature',
        'title' => $latest['title'],
        'text' => $latest['deck'],
        'url' => $latest['url'],
        'node_type' => $latest['node_type'],
        'image' => $latest['image'],
        'image_url' => $latest['image_uri'],
        'home_page' => $latest['home_page'],
        'image_alt' => $latest['title'],
        'tags' => $latest['topic'],
        'classes_list' => 'grid-3-up__item',
        'placeholder_url' => $placeholder_url,
        'nativo_ad' => $nativo_ad,
        'is_video' => $latest['is_video']
      )); ?>

      <?php if ($i == 3): ?>
        </div>
      <?php endif; ?>  
    <?php endif; ?>

    <?php if ($i > 3 && $i <= 6): ?>
      <?php if ($i == 4): ?>
        <div class="grid-row">
      <?php endif; ?>
      <?php
      if ($i == 4 && !empty($section) && $section == 'latest') :
        $nativo_ad = '<div class="nativo_ad nativo_ad_3"></div>';
      else :
        $nativo_ad = '';
      endif;
      ?>
      <?php print theme('story-card', array(
        'type' => 'feature',
        'title' => $latest['title'],
        'url' => $latest['url'],
        'node_type' => $latest['node_type'],
        'image' => $latest['image'],
        'image_url' => $latest['image_uri'],
        'image_alt' => $latest['title'],
        'home_page' => $latest['home_page'],
        'tags' => $latest['topic'],
        'classes_list' => 'grid-3-up__item',
        'placeholder_url' => $placeholder_url,
        'nativo_ad' => $nativo_ad,
      )); ?>            
      <?php if ($i == 6): ?>
        </div>
      <?php endif; ?>            
    <?php endif; ?>

    <?php if ($i > 6 && $i <= 9): ?>
      <?php if ($i == 7): ?>
        <div class="grid-row">
        <?php endif; ?>
          <?php
        print theme('story-card', array(
          'type' => 'feature',
          'title' => $latest['title'],
          'url' => $latest['url'],
          'node_type' => $latest['node_type'],
          'image' => $latest['image'],
          'image_url' => $latest['image_uri'],
          'image_alt' => $latest['title'],
          'home_page' => $latest['home_page'],
          'tags' => $latest['topic'],
          'classes_list' => 'grid-3-up__item',
          'placeholder_url' => $placeholder_url,
          'nativo_ad' => $nativo_ad,
        ));
        ?>
      <?php if ($i == 9): ?>
        </div>
      <?php endif; ?>
    <?php endif; ?>

    <?php $i++; ?>
  <?php endforeach; ?>
  </div>

</section>
