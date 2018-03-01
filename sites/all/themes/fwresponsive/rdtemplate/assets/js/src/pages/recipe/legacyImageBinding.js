'use strict';

var $ = require('jquery'),
    ko = require('knockout');

ko.bindingHandlers.legacyImage = {
  init: function(el, valueAccessor, allBindings, viewModel, bindingContext) {
    var $el = $(el),
        isLegacy = ko.unwrap(valueAccessor());

    if (isLegacy) {
      $el
        .addClass(allBindings().legacyClass)
        .append(
          $('<div>')
            .css('backgroundImage', 'url(' + bindingContext.$data.image + ')')
            .addClass('recipe-carousel__recipe__bg')
        );
    }
  }
};