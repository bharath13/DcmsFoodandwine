'use strict';

var $ = require('jquery'),
    safeMatchMedia = require('../lib/matchMedia'),
    config = require('../config');

var CLASSES = {
  mobileSearchOpen: 'mobile-search-is-open'
};

module.exports = function (el) {
  var $form = $(el),
      $searchInput = $form.find('.form-text'),
      $searchButton = $form.find('.form-submit'),
      $siteHeader = $form.parents('.site-header'),
      $win = $(window);

  var isSearchOpen = false,
      hasClickListener = false,
      isHeaderStuck = false;    

  safeMatchMedia(function() {
    // listen for mq above small width (700px)
    var mqSmall = window.matchMedia('(min-width: ' + config.breakpoints.small + 'px)'),
        mqLarge = window.matchMedia('(min-width: ' + config.breakpoints.large + 'px)');

    mqSmall.addListener(function mqHandler(mql) {
      if (!mqSmall.matches) {
        addSearchButtonClickListener();
      } else {
        removeSearchButtonClickListener();
        closeSearch();
      }
    });

    mqLarge.addListener(function mqHandler(mql) {
      if (mqLarge.matches && isHeaderStuck) {
        addSearchButtonClickListener();
      } else {
        removeSearchButtonClickListener();
      }
    });
  });

  // if we aren't above small breakpoint to start
  if ( !isMinWidth(config.breakpoints.small) ) {
    addSearchButtonClickListener();
  }

  // if we are below small breakpoint, listen for input focus/blur in order
  // to remove the click listener that is triggered when enter key is pressed.
  // This will allow the form to submit normally stopping the click handler 
  // from running and preventing default. The enter key triggers a
  // click event on form input[type=submit] elements.
  $searchInput
    .on('focus', removeSearchButtonClickListener)
    .on('blur', function() {
      closeSearch();

      if ( isHeaderStuck && 
           isMinWidth(config.breakpoints.large) ||
         ! isMinWidth(config.breakpoints.small)
      ) {
        addSearchButtonClickListener();
      }
    });

  // listen for header to stick so we can add click listener to search button
  $siteHeader
    .on('sticky_kit:stick', function() {
      isHeaderStuck = true;

      if (isMinWidth(config.breakpoints.large)) {
        addSearchButtonClickListener();
      } 
    })
    .on('sticky_kit:unstick', function() {
      isHeaderStuck = false;
      removeSearchButtonClickListener();
      closeSearch();
    });

  function addSearchButtonClickListener() {
    if (hasClickListener) return;

    $searchButton.on('click', handleSearchButtonClick);
    hasClickListener = true;
  }

  function removeSearchButtonClickListener() {
    $searchButton.off('click', handleSearchButtonClick);
    hasClickListener = false;
  }

  function handleSearchButtonClick(e) {
    e.preventDefault();
    
    if (isSearchOpen) {
      closeSearch();
    } else { 
      openSearch();
    }
  }

  function openSearch() {
    isSearchOpen = true;
    $siteHeader.addClass(CLASSES.mobileSearchOpen);
    $searchInput.focus();
  }

  function closeSearch() {
    isSearchOpen = false;
    $siteHeader.removeClass(CLASSES.mobileSearchOpen);
  }

  function isMinWidth(width) {
    return $win.width() >= width;
  }
};