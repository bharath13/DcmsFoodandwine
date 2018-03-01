<?php

/**
 * @file
 * Hero Feature.
 *
 * @param array $hero_content.
 *
 * Optional Params:
 * @param boolean $is_fullscreen Whether the feature is the full screen variation.
 * @param array $classes An array of additional lasses to add to the story-card.
 */
$url =  (!empty($hero_content['image']['uri'])) ? $hero_content['image']['uri'] : '';
global $base_url;
$classes_list = (!empty($classes_list)) ? $classes_list : '';
if (!empty($is_fullscreen)) {$classes_list .= ' hero-feature--fs';
}
if (!empty($hero_content)):
?>
  <article class="hero-feature <?php print $classes_list; ?> <?php print ($hero_content['type'] == 'home_page_responsive') ? ' home_page' : ''; ?> ">
   <?php if(!empty($hero_carousel)): ?>
     <a class="hero-feature__link" href="<?php if (isset($hero_content['url'])) {
       print $hero_content['url'];
    } ?>">
       <?php if(($hero_content['type'] == 'home_page_responsive') &&  !empty(render($hero_content['image']))):  ?>
              <?php
       print render($hero_content['image']); ?>
       <?php else: ?>
       <img class="hero-feature__img" src="<?php print (isset($hero_content['image']['uri'])) ? $hero_content['image']['uri'] : ''; ?>"
       alt="<?php if (isset($hero_content['image']['alt'])) {
         print $hero_content['image']['alt'];
      } ?>">
       <?php endif; ?>

       <div class="hero-feature__content">
         <span class="hero-feature__content__title">
         <?php if (isset($hero_content['title'])) {
           print $hero_content['title'];
         } ?>
         </span>
         <?php if (isset($hero_content['deck'])): ?>
         <p class="hero-feature__content__dek">
           <?php print $hero_content['deck']; ?>
         </p>
         <?php endif; ?>
       </div>
      </a>
   <?php else: ?>
      <?php if (isset($is_fullscreen)): ?>
      <svg class="hero-feature__fs-fw-logo" viewBox="0 0 332 44"
      title="Food and Wine" role="img">
         <use xlink:href="<?php print $hero_content['img_path']
          . '#fw-logo'; ?>"></use>
      </svg>
      <?php endif; ?>

      <?php if (isset($is_fullscreen)): ?>
      <!-- The fullscreen bg image -->
      <div class="hero-feature__fs-img"
        style="background-image: url(<?php if (isset($hero_content['image']['uri'])) {
          print $hero_content['image']['uri'];
       } ?>)">
      </div>
      <?php else: ?>
       <a class="hero-feature__link" href="<?php if (isset($hero_content['url'])) {
       print $hero_content['url'];
      } ?>">
      <?php if (isset($hero_content['type']) && ($hero_content['type'] == 'home_page_responsive') && (isset($hero_content['node_type']) && $hero_content['node_type'] != 'video') && !empty(render($hero_content['image']))): ?>
        <?php print render($hero_content['image']); ?>
      <?php else: ?>
        <img class="hero-feature__img" src="<?php if($url) {print $url;
       }
        ?>" alt="<?php
        if (isset($hero_content['image']['alt'])) {
          print $hero_content['image']['alt'];
        } ?>">
      <?php endif;?>
      <?php endif; ?>
      <div class="hero-feature__content <?php print ($hero_content['type'] == 'home_page_responsive') ? ' home_page' : ''; ?>">
          <span class="hero-feature__content__title">
          <?php if (isset($hero_content['title'])) {
            print $hero_content['title'];
          } ?>
          </span>
      </div>
      </a>
   <?php endif; ?>
  </article>
<?php endif;
