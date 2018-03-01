'use strict'

var $ = require('jquery'),
    ko = require('knockout'),
    _ = require('underscore'),
    createHistory = require('history').createHistory;

var history = createHistory();

module.exports = RecipeViewModel;

function RecipeViewModel(recipesConfig) {
  var recipeService = require('./recipeService').getInstance();
  var originalRecipeArr = this.getRecipesFromJSON(recipesConfig.recipes);
  // find active recipe index based on initial recipe id
  this.initialRecipeIndex = _.findIndex(originalRecipeArr, {id: recipesConfig.currentRecipeId});
  
  // we need to shift the array around so that the initial recipe id is 
  // first in the recipe array
  this.recipes = shiftRecipes(originalRecipeArr, this.initialRecipeIndex);

  this.activeRecipeIndex = ko.observable(0);

  this.activeRecipe = ko.pureComputed(function () {
      return this.recipes[this.activeRecipeIndex()]; 
  }, this);

  // this property is set after ajax request is received for recipe
  this.lastLoadedRecipe = ko.observable();
  this.lastLoadedRecipe.subscribe(function(recipe) {
    $(document).trigger('recipe::loaded', recipe);
  }, this);

  // update url to reflect active Recipe
  this.activeRecipe.subscribe(function(newValue) {
    history.replaceState(null, newValue.url)
  });

  this.isLoadingRecipe = ko.observable(false);

  this.nextRecipeTitle = ko.pureComputed(function () {
    var nextIndex = cycle(this.activeRecipeIndex() + 1, this.recipes.length);
    
    return this.recipes[nextIndex].title; 
  }, this);

  this.prevRecipeTitle = ko.pureComputed(function () {
    var prevIndex = cycle(this.activeRecipeIndex() - 1, this.recipes.length);
    
    return this.recipes[prevIndex].title; 
  }, this);
}

/**
 * Returns an array of recipe objects from either a JSON array of recipes or
 * a plain array of recipes
 * 
 * @param  {string|array} recipes The recipes array in JSON or in plain array
 * @return {array} The array of recipe objects
 */
RecipeViewModel.prototype.getRecipesFromJSON = function(recipes) {
  var _this = this;

  // if we have json string, parse and return it
  if (typeof recipes == 'string') {
    recipes = JSON.parse(recipes);
  }

  // make sure each recipe object has an isLegacy property set to either initial
  // value or explicitly set to false in order to avoid binding error.
  return _.map(recipes, function (recipe) {
    recipe.isLegacy = recipe.isLegacy || false;
    recipe.parentViewModel = _this;
    return recipe;
  });
}

/**
 * Shifts the recipe array so the recipe at the startingIndex appears first and
 * all other recipes follow.
 * 
 * @param  {array} recipes The array of recipes to shift
 * @param  {number} startingIndex The index of the recipe that should be first
 *                  in the array
 */
function shiftRecipes(recipes, startingIndex) {
  return recipes
          .slice(startingIndex)
          .concat(recipes.slice(0, startingIndex));
}

/**
 * Cycles a value between 0 and arrLength so the value is never out ot array bounds.
 * 
 * @param  {number} value the number that should be cycled between the bounds.
 * @param  {number} arrLength The length of the array to keep the value in the bounds of.
 * 
 * @return {number} The value within arrayLength bounds
 */
function cycle(value, arrLength) {
  return (arrLength + value) % arrLength;
}