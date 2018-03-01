'use strict';

var $ = require('jquery');

var instance;

exports.getInstance = function() {
  if (instance) return instance;

  instance = new RecipeService({
    baseUrl: window.recipesConfig.baseUrl,
    collectionUrl: window.recipesConfig.collectionUrl,
    initialRecipeId: window.recipesConfig.currentRecipeId,
    numRecipesPerPage: window.recipesConfig.numRecipesPerPage
  });

  return instance;
};

function RecipeService(config) {
  this.baseUrl = config.baseUrl;
  this.collectionUrl = config.collectionUrl;
  this.initialRecipeId = config.initialRecipeId;
  this.numRecipesPerPage = config.numRecipesPerPage;
  this.startPage = 1;
  
  this._hasMoreRecipes = true;
}

RecipeService.prototype.fetchRecipeById = function (id) {
  return $.ajax({
    url: this.baseUrl + id,
    method: 'get',
    // store recipe id so calling code can check if needed
    recipe_id: id
  });
};

RecipeService.prototype.fetchMoreRecipes = function() {
  var _this = this;

  return $.ajax({
    url: this.collectionUrl,
    method: 'get',
    data: {
      main_recipe: this.initialRecipeId,
      page_number: ++_this.startPage
    }      
  }).done(function(resp) {
    if (resp.length < _this.numRecipesPerPage) {
      _this._hasMoreRecipes = false;
    }
  });
};

RecipeService.prototype.hasMoreRecipes = function() {
  return this._hasMoreRecipes;
};