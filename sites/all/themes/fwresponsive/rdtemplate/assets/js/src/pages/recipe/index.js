'use strict'

require('./recipeCarouselBinding');
require('./loadMoreRecipesBinding');
require('./recipeHtmlBinding');
require('./legacyImageBinding');

var ko = require('knockout');
var RecipeViewModel = require('./recipeViewModel');

module.exports = function (el) {
  ko.applyBindings( new RecipeViewModel(recipesConfig) );
};