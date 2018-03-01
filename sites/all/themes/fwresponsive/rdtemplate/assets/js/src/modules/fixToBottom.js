'use strict';

/**
 * Adds 'fix-to-bottom' class to an element when top of element hits top
 * of viewport. Removes class once original element top is back in view
 */

var $ = require('jquery');
require('waypoint');

var FIXED_CLASS = 'fix-to-bottom';

module.exports = function(el) {
  var $el = $(el),
    originalTop = $el.offset().top;

  $el.waypoint({
    handler: function(direction) {
      if (direction == 'down') {
        $el.addClass(FIXED_CLASS);
      }
    }
  });

  $el.waypoint({
    handler: function() {
      $el.removeClass(FIXED_CLASS);
      $('.site-header').css('top','0px');
    },
    offset: originalTop - 1
  });
};