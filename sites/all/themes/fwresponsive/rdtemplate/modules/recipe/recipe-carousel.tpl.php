<?php 
  /**
   * Recipe carousel
   * Mapped to ../modules/custom/ti_amg_fwrd_recipe/templates/modules/recipe/recipe-carousel.tpl.php
   */
?>
<div class="recipe-carousel-container">
  <div class="recipe-carousel" data-bind="recipeCarousel, loadMoreRecipes: recipes">
    
    <div class="recipe-carousel__recipe" data-remove>
      <img class="recipe-carousel__recipe__img" src="http://clients.expandtheroom.net/food-and-wine/redesign/placeholder-images/recipe-01.jpg" alt="">
    </div>
    <div class="recipe-carousel__recipe" data-remove>
      <img class="recipe-carousel__recipe__img" src="http://clients.expandtheroom.net/food-and-wine/redesign/placeholder-images/recipe-02.jpg" alt="">
    </div>
    <div class="recipe-carousel__recipe" data-remove>
      <img class="recipe-carousel__recipe__img" src="http://clients.expandtheroom.net/food-and-wine/redesign/placeholder-images/recipe-03.jpg" alt="">
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
      <img class="recipe-carousel__recipe__img" data-bind="attr: {'data-lazy': image}">
      <div class="recipe-carousel__recipe__loader"></div>
    </div>
  </script>

  <div class="recipe-carousel__pagination">
    <a href="#" class="recipe-carousel__pagination__btn recipe-carousel__pagination__btn--prev">
      <div class="recipe-carousel__pagination__btn__inner">
        <div class="recipe-carousel__pagination__btn__arrow">
          <?php print theme('pagination-arrow'); ?>
        </div>
        <span class="recipe-carousel__pagination__btn__title" data-bind="text: prevRecipeTitle">Pappardelle with Lamb Ragù</span>
      </div>
    </a>
    <a href="#" class="recipe-carousel__pagination__btn recipe-carousel__pagination__btn--next">
      <div class="recipe-carousel__pagination__btn__inner">
        <div class="recipe-carousel__pagination__btn__arrow">
          <?php print theme('pagination-arrow'); ?>
        </div>
        <span class="recipe-carousel__pagination__btn__title" data-bind="text: nextRecipeTitle">Pappardelle with Lamb Ragù</span>
      </div>
    </a>
  </div>
</div>