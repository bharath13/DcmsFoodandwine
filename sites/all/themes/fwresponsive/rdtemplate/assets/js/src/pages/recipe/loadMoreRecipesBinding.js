'use strict';

var $ = require('jquery'),
    ko = require('knockout');

var recipeService;

// how many recipes from the end of the current set should we request the next
// page of recipes
var RECIPES_LOAD_MORE_THRESHOLD = 4;

ko.bindingHandlers.loadMoreRecipes = {
  init: function() {
    recipeService = require('./recipeService').getInstance();
  },

  update: function(el, valueAccessor, allBindings, viewModel, bindingContext) {
    var $el = $(el),
        vm = bindingContext.$data,
        recipes = vm.recipes,
        activeRecipeIndex = bindingContext.$data.activeRecipeIndex();

    if (activeRecipeIndex == recipes.length - 1 - RECIPES_LOAD_MORE_THRESHOLD
        && recipeService.hasMoreRecipes()) {
      
      recipeService.fetchMoreRecipes().then(function(resp) {
        var recipesToAdd = resp;

        recipes.push.apply(recipes, vm.getRecipesFromJSON(resp));

        ko.utils.arrayForEach(recipesToAdd, function(recipe) {
          var slideHtml = getHtmlForRecipeSlide(recipe);

          $el.slick('slickAdd', slideHtml);
        });

        // add slick-center class to active recipe since slick slider has an
        // issue with keeping the class intact when more slides are added
        var index = bindingContext.$data.activeRecipeIndex.peek();
        $el.find('[data-slick-index="' + index + '"]').addClass('slick-center');
      });
    }
  }
};

function getHtmlForRecipeSlide(recipe) {
  var div = document.createElement('div');
  
  ko.renderTemplate('recipe-carousel-slide-tmpl', recipe, {}, div);
  
  return div.children[0];
}