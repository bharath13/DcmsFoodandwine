'use strict';

var $ = require('jquery'),
    ko = require('knockout'),
    _ = require('underscore'),
    componentRegistry = require('../../lib/componentRegistry');

var recipeService;

ko.bindingHandlers.recipeHtml = {
  init: function() {
     recipeService = require('./recipeService').getInstance();
  },

  update: function(el, valueAccessor, allBindings, viewModel, bindingContext) {
    var $el = $(el),
        vm = bindingContext.$data,
        activeRecipe = ko.unwrap(valueAccessor()),
        activeRecipeIndex = bindingContext.$data.activeRecipeIndex.peek();

    // only request the html for the current active recipe if we are not 
    // looking at the initial recipe
    if (activeRecipeIndex != 0 || ko.bindingHandlers.recipeHtml.loadedAtLeastOne) {
      
      vm.isLoadingRecipe(true);

      recipeService.fetchRecipeById(activeRecipe.id).then(function(resp) {
        // prevent recipe html from changing when the respone recipe id does
        // not match the current active recipe. This can occur when the user
        // clicks through the recipes quickly.
        if (vm.activeRecipe().id != this.recipe_id) return;

        $el.html(resp);
        
        vm.isLoadingRecipe(false);
        vm.lastLoadedRecipe(vm.activeRecipe());

        // initialize any components that might be contained within the ajax
        // html response
        componentRegistry.initComponents($el);
      });

      ko.bindingHandlers.recipeHtml.loadedAtLeastOne = true;
    }
  },

  loadedAtLeastOne: false
};