'use strict';

var $ = require('jquery'),
    ko = require('knockout'),
    _ = require('underscore');

require('slick-carousel');

/*-------------------------------------------- */
/** Slider Configuration */
/*-------------------------------------------- */

var config = {
  lazyLoad: 'ondemand',
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

/*-------------------------------------------- */
/** Binding definition */
/*-------------------------------------------- */

ko.bindingHandlers.recipeCarousel = {
  init: function (el, valueAccessor, allBindings, viewModel, bindingContext) {
    var $el = $(el),
        $nextBtn = $('.recipe-carousel__pagination__btn--next'),
        $prevBtn = $('.recipe-carousel__pagination__btn--prev'); 

    // we want to remove any recipe html that was output from the server so we
    // can render the array of recipes with Knockout foreach template.
    $el.find('[data-remove]').remove();

    var classes = {
      recipeHovered: 'recipe-carousel__recipe--hovered',
    };

    var selectors = {
      active: '.slick-active'
    };

    // apply bindings here so that the foreach binding is executed first, creating
    // the markup that slick carousel needs to create the carousel
    ko.applyBindingsToDescendants(bindingContext, el);

    // initialize slick carousel
    $el.slick(_.extend({
        prevArrow: $prevBtn,
        nextArrow: $nextBtn,
    }, config));
    
    $el.on('afterChange', function afterChangeHandler(e, slick, currentSlide) {
      bindingContext.$data.activeRecipeIndex(currentSlide);

      var $active = $el.find(selectors.active);

      $active.removeClass(classes.recipeHovered);

      // add hovered class to recipe if next or prev button is still hovered
      if ($currentHoveredBtn == $nextBtn) {
        $active.next().addClass(classes.recipeHovered);
      } else if ($currentHoveredBtn == $prevBtn) {
        $active.prev().addClass(classes.recipeHovered);
      }

    });

    var $currentHoveredBtn = null;
    // Add hovered class to recipe slide when next/prev
    // buttons are hovered on
    $nextBtn
      .on('mouseover', function() {
        $el
          .find(selectors.active)
          .next()
          .addClass(classes.recipeHovered);
        $currentHoveredBtn = $nextBtn;
      })
      .on('mouseout', function() {
        $el
          .find(selectors.active)
          .next()
          .removeClass(classes.recipeHovered);

        $currentHoveredBtn = null;
      })
      .on('click', function(e) { e.preventDefault(); })

    $prevBtn
      .on('mouseover', function() {
        $el
          .find(selectors.active)
          .prev()
          .addClass(classes.recipeHovered);
        $currentHoveredBtn = $prevBtn;
      })
      .on('mouseout', function() {
        $el
          .find(selectors.active)
          .prev()
          .removeClass(classes.recipeHovered);
        $currentHoveredBtn = null;
      })
      .on('click', function(e) { e.preventDefault(); });

    return { controlsDescendantBindings: true };
  }
};