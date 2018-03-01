<?php

/**
 * Guide Card.
 *
 * @param string $url The url the guide card should link to.
 * @param string $image_url The url of the image for the guide card.
 * @param string $title The title of the guide card.
 *
 * Optional Params:
 * @param array $classes An array of additional lasses to add to the story-card.
 * @param $placeholder_url
 */
?>

<article class="guide-card <?php print $classes_list; ?>">
  <?php if (!empty($nativo_ad)) : ?>
    <?php print $nativo_ad; ?>
  <?php endif; ?>
  <a href="<?php print $url; ?>"   class="<?php print (!empty($recipe_slide) && $recipe_slide == 'recipe_slide') ? 'recipe_slide' : '';?>">
    <?php if((isset($home_page)) && $home_page == 'home_page' && $node_type != 'video' && !empty(render($image))): ?>
      <?php print render($image); ?>
    <?php else: ?> 
    <?php if (!empty($placeholder_url)): ?>
      <img data-js-component="imgLazyLoad" 
        src="<?php print $placeholder_url; ?>" data-original="<?php print $image_url; ?>"
        alt="<?php print $image_alt; ?>">
    <?php else: ?>
      <img src="<?php print $image_url; ?>" alt="<?php print $image_alt; ?>">
    <?php endif; ?>
    <?php endif; ?>  
      <?php if (!empty($tag) && $device == 'mobile'): ?>
      <div class="descriptor">
        <ol class="breadcrumbs breadcrumbs--dark">
          <li class="breadcrumbs__crumb">
              <span class="breadcrumbs__crumb__link"><?php print $tag; ?></span>
          </li>    
        </ol>
      </div>
      <?php endif; ?>
      <?php if (($home_page == 'home_page' && $device == 'desktop') || $recipe_slide == 'recipe_slide'): ?>
      <span class="guide-card__headline"><?php print $title; ?></span>
      <?php else: ?>
        <div class="guide-card__title-container">
          <span class="guide-card__title"><?php print $title; ?></span>
        </div>
      <?php endif; ?>
  </a>
</article>
