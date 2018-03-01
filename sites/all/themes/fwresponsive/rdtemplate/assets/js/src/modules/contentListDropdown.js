'use strict';

var $ = require('jquery'),
    _ = require('underscore'),
    safeMatchMedia = require('../lib/matchMedia');

require('jquery-stickykit');

module.exports = function (el) {
    var $el = $(el),
        dropdownTriggerClass = '.js-dropdown-trigger',
        isDropdownActive = false,
        $dropdownTrigger = $el.find(dropdownTriggerClass),
        $dropdown = $el.find('.js-dropdown');

    $el.on('click', dropdownTriggerClass, function() {
      if (!isDropdownActive) {
        $dropdown.show();
        $dropdownTrigger.addClass('js-trigger-active');
        isDropdownActive = true;
      } else {
        $dropdown.hide();
        $dropdownTrigger.removeClass('js-trigger-active');
        isDropdownActive = false;
      }
    });


 };