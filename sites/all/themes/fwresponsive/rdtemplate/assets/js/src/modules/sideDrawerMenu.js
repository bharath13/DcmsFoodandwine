'use strict';

var $ = require('jquery');

module.exports = function (el) {
  $(el).css({top: Math.max(63, 143 - $(window).scrollTop()) });
};