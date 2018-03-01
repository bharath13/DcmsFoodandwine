'use strict';

var $ = require('jquery'),
    _ = require('underscore'),
    safeMatchMedia = require('../lib/matchMedia'),
    config = require('../config');

require('jquery-stickykit');

module.exports = function (el) {
    var $el = $(el);

    $el.stick_in_parent({
        parent: 'article',
        offset_top: config.offset.sidebar
    });

    safeMatchMedia(function() {
	    var mqMedium = window.matchMedia('(min-width: ' + config.breakpoints.medium + 'px)');
		
			mqMedium.addListener(function mqHandler(mql) {
		    if (mqMedium.matches) {
		      $el.trigger("sticky_kit:detach");
		    } else {
		    	$el.trigger("sticky_kit:recalc");
		    }
		  });
	});
};