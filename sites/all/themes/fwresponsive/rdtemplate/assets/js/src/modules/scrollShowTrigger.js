'use strict';

/*-------------------------------------------- */
/** Requires */
/*-------------------------------------------- */

var $ = require('jquery');

require('waypoint');

/*-------------------------------------------- */
/** Exports */
/*-------------------------------------------- */

module.exports = function(el) {
  var $el = $(el),
      $elToShow = $($el.data('to-show'));

  $(window).on('load', function() {
    
    $el.waypoint({
      offset: -$el.outerHeight(),
      handler: function(direction) {
        if (direction == 'down') {
          $elToShow.addClass('shown-on-scroll');
        } else if (direction == 'up') {
          $elToShow.removeClass('shown-on-scroll');
        }
      }
    });
  });

};