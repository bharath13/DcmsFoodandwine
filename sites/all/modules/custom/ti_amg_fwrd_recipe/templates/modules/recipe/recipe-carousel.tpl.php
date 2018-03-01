<?php 
/**
 * Recipe Carousel Template
 *
 */
?>
<div class="recipe-carousel-container">
  <div class="recipe-carousel" data-bind="recipeCarousel, loadMoreRecipes: recipes">
    <?php // THESE SHOULD BE OUTPUT FROM CMS ?>
    <div class="recipe-carousel__recipe" data-remove>
      <img class="recipe-carousel__recipe__img" src="<?php print $prefetch_carousel['image'][0]; ?>" alt="">
    </div>
    <div class="recipe-carousel__recipe" data-remove>
      <img itemprop="image" class="recipe-carousel__recipe__img" src="<?php print $prefetch_carousel['image'][1]; ?>" alt="<?php print $main_image_alt?>" title="<?php print $main_image_alt; ?>">
    </div>
    <div class="recipe-carousel__recipe" data-remove>
      <img class="recipe-carousel__recipe__img" src="<?php print $prefetch_carousel['image'][2]; ?>" alt="">
    </div>

    <?php 
     /**
      * THIS BELOW COMMENT IS NEEDED for the recipe carousel JS to work correctly. 
      * It will generate the other recipe slides in the set contained within
      * recipeConfig.recipes.
      */
    ?>
    <!-- The below is needed for carousel slides -->
    <!-- ko template: {name: 'recipe-carousel-slide-tmpl', foreach: recipes} -->
    <!-- /ko -->
  </div>
  
  <!-- recipe slide template -->
  <script type="text/html" id="recipe-carousel-slide-tmpl">
    <div class="recipe-carousel__recipe" 
         data-bind="legacyImage: isLegacy, 
                    legacyClass: 'recipe-carousel__recipe--legacy'">
      <img  itemprop="image" class="recipe-carousel__recipe__img" data-bind="attr: {'data-lazy': image}">
      <div class="recipe-carousel__recipe__loader"></div>
    </div>
  </script>

  <div class="recipe-carousel__pagination">
    <a href="#" class="recipe-carousel__pagination__btn 
      recipe-carousel__pagination__btn--prev">
      <div class="recipe-carousel__pagination__btn__inner">
        <div class="recipe-carousel__pagination__btn__arrow">
          <?php print $slide_switcher; ?>
        </div>
        <span class="recipe-carousel__pagination__btn__title" 
          data-bind="text: prevRecipeTitle">
            <?php print $prefetch_carousel['title'][0]; ?>
        </span>
      </div>
    </a>
    <a href="#" class="recipe-carousel__pagination__btn 
      recipe-carousel__pagination__btn--next">
      <div class="recipe-carousel__pagination__btn__inner">
        <div class="recipe-carousel__pagination__btn__arrow">
          <?php print $slide_switcher; ?>
        </div>
        <span class="recipe-carousel__pagination__btn__title" 
          data-bind="text: nextRecipeTitle">
            <?php print $prefetch_carousel['title'][2]; ?>
          </span>
      </div>
    </a>
  </div>
</div>
