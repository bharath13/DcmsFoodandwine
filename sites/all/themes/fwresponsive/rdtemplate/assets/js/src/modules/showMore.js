'use strict';

var $ = require('jquery'),
    _ = require('underscore'),
    safeMatchMedia = require('../lib/matchMedia'),
    config = require('../config');

module.exports = function (el) {
    var $el = $(el),
        showMoreTriggerClass = '.show-more__trigger',
        $showMoreTrigger = $el.find(showMoreTriggerClass),
        $showMoreContainer = $el.find('.show-more__container'),
        $showMoreContent = $el.find('.show-more__content'),
        closedHeight = $showMoreContainer.height(),
        isOpen = false;

        if ($showMoreContent.height() <= closedHeight) $showMoreTrigger.hide();

    $el.on('click', showMoreTriggerClass, function(e) {
        var openHeight = $showMoreContent.height();

        if (isOpen) {
            $showMoreTrigger.text('More').removeClass('open');
            $showMoreContainer.height(closedHeight + 'px');
            isOpen = false;
        } else {
            $showMoreTrigger.text('Less').addClass('open');
            $showMoreContainer.height(openHeight + 'px');
            isOpen = true;
        }

        e.preventDefault();
    });
};