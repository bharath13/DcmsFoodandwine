/* 
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

(function($) { 
    Drupal.behaviors.recipeCarousel = {        
        attach: function(context, settings) { 
           $("#featured-recipes").contentSlider({slider:".frames",lists:".frame",next:".rsw-nav[rel=next]",prev:".rsw-nav[rel=prev]",animate_slide:false, posCounter: ".count"});
        }
    }
})(jQuery);

