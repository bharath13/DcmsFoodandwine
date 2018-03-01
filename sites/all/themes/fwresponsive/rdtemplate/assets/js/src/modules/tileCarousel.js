'use strict';

var $ = require('jquery'),
    config = require('../config'),
    _ = require('underscore');

require('slick-carousel');

module.exports = function (el) {
  var $el = $(el),
    $carousel = $el.find($el.data('carousel-container')),
    $nextBtn = $el.find($el.data('next-btn')),
    $prevBtn = $el.find($el.data('prev-btn'));

  var slickConfig = {
    prevArrow: $prevBtn,
    nextArrow: $nextBtn,
    slidesToShow: 3,
    centerMode: true,
    responsive: [
      {
        breakpoint: config.breakpoints.small,
        settings: {
          slidesToShow: 2,
          centerMode: false
        }
      },
    ]
  };

  var slickCheck = _.debounce(function() {
    if (window.matchMedia("(min-width: " + config.breakpoints.medium + "px)").matches) {

      if ($carousel.hasClass('slick-initialized')) { $carousel.slick('unslick'); }
    
    } else {
      if (!$carousel.hasClass('slick-initialized')) {
        $carousel.slick(slickConfig);
      }
    }
  }, 250);

  window.addEventListener('resize', slickCheck);
  slickCheck();
};