'use strict';

/*-------------------------------------------- */
/** Requires */
/*-------------------------------------------- */

var $ = require('jquery');
require('lazyload');

/*-------------------------------------------- */
/** Exports */
/*-------------------------------------------- */

module.exports = function(el) {
  $(el).lazyload({
    effect: 'fadeIn'
  });
};