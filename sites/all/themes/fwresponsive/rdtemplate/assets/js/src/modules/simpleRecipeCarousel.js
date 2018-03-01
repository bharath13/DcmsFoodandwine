var $ = require('jquery'),
    ko = require('knockout'),
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
    centerMode: true,
    centerPadding: '32.8125%',
    infinite: true,
    slidesToShow: 1,
    responsive: [
      {
        breakpoint: 550,
        settings: {
          centerMode: true,
          centerPadding: 0,
          slidesToShow: 1
        }
      },
      {
        breakpoint: 700,
        settings: {
          centerMode: true,
          centerPadding: '10%',
          slidesToShow: 1
        }
      },
      {
        breakpoint: 980,
        settings: {
          centerMode: true,
          centerPadding: '21.4285714%',
          slidesToShow: 1
        }
      }
    ]
  };

  $carousel.slick(slickConfig);
}

