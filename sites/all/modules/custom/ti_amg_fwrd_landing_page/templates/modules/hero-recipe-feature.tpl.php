<?php 

/**
 * Hero Feature For Recipe Carousel
 *
 * @param array $hero_content.
 *
 * Optional Params:
 * @param array $classes_list An array of additional lasses to add to the story-card.
 */
  if (isset($hero_content)):
?>
<div class="recipe-carousel__recipe">
  <a class="hero-feature__link" href="<?php if (isset($hero_content['url'])) 
    print $hero_content['url']; ?>">
    <img class="recipe-carousel__recipe__img" src="<?php print $hero_content['image']['uri']; ?>" 
      alt="<?php print $hero_content['image']['alt']; ?>">
    <div class="recipe-carousel__recipe__content">
      <span class="recipe-carousel__recipe__title"><?php print $hero_content['title']; ?></span>
    </div>
  </a>
</div>
<?php endif;
