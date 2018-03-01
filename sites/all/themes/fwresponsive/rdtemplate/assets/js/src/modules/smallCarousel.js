'use strict';

var $ = require('jquery'),
    config = require('../config');

require('slick-carousel');

module.exports = function (el) {
  var $el = $(el),
      $carousel = $el.find($el.data('carousel-container')),
      $nextBtn = $el.find($el.data('next-btn')),
      $prevBtn = $el.find($el.data('prev-btn')),
      slidesToShow = ($el.data('slides-to-show')) ? $el.data('slides-to-show') : 7,
      centerPadding = ($el.data('center-padding')) ? $el.data('center-padding') : 0,
      centerMode = ($el.data('center-mode')) ? $el.data('center-mode') : false;

  var slickConfig = {
    prevArrow: $prevBtn,
    nextArrow: $nextBtn,
    centerMode: centerMode,
    slidesToShow: slidesToShow,
    slidesToScroll: 5,
    centerPadding: centerPadding,
    responsive: [
      {
        breakpoint: config.breakpoints.medium,
        settings: {
          slidesToShow: 4,
          slidesToScroll: 2,
          centerMode: true,
        }
      },
      {
        breakpoint: config.breakpoints.small,
        settings: {
          slidesToShow: 2,
          slidesToScroll: 1,
          centerMode: true,
        }
      },
      {
        breakpoint: config.breakpoints.small - 300,
        settings: {
          slidesToShow: 1,
          slidesToScroll: 1,
          centerMode: true,
        }
      }
    ]
  };

  $carousel.slick(slickConfig);

};