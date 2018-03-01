'use strict';

var $ = require('jquery'),
    config = require('../config'),
    brightcove = window.brightcove;

require('slick-carousel');

module.exports = function (el) {
  var $el = $(el),
      $carousel = $el.find($el.data('carousel-container')),
      $nextBtn = $el.find($el.data('next-btn')),
      $prevBtn = $el.find($el.data('prev-btn')),
      $videoIDs = $el.find(".hero_slide_video_id"),
      videoIDsLength = $videoIDs.length,
      slickConfig = {
        prevArrow: $prevBtn,
        nextArrow: $nextBtn,
        centerMode: true,
        slidesToShow: 1,
        slidesToScroll: 1,
        centerPadding: ((322 / 1400) * 100) + '%',
        responsive: [
          {
            breakpoint: config.breakpoints.medium,
            settings: {
              centerPadding: 0
            }
          },
        ],

        swipe: videoIDsLength == 0
      };

  $carousel.slick(slickConfig);

 $carousel.on('beforeChange', function(e, slick, currentSlide) {
   if (bcJumpstart.players.length > 0) {
     var videoIdsLth = bcJumpstart.players.length;
     // loop through all jumpstart players
     console.log("current slide");
     console.log(currentSlide);
     for (var count = 0; count < videoIdsLth; count++) {
       if (bcJumpstart.isPlayingVideo(bcJumpstart.players[count])) {
         bcJumpstart.pauseVideo(bcJumpstart.players[count]);
       }
       if (bcJumpstart.isPlayingAd(bcJumpstart.players[count])) {
         bcJumpstart.pauseAd(bcJumpstart.players[count]);
       }
     }
   }  
  });
};
