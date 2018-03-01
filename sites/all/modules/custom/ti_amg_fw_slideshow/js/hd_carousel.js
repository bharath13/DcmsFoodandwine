/**
 * @file
 * Javascript for HD slideshow carousel.
 */

/* Hopefully this HTML5/CSS3 carousel will eventually evolve into a jquery plugin*/
/* ,i.e reusable, extendable, and doesn't require headbanging frustration to use or customize. */ 
/* For now though, it "just works." */
(function($){
	var settings, currentFrame;
	var total_width, centerPos; //TODO:need to redefine these as constants 
	var TOTAL_FRAMES, TOTAL_ITEMS; //assigned in carousel function
	
	$.fn.centerCarouselSlide = function(slide){
		//raise error here if settings have not yet been defined.
		//unless we are within 'centerPos'  of the beginning or end of slideshow.
		if( (slide+centerPos+1) > TOTAL_ITEMS ){
			slide = TOTAL_ITEMS - centerPos;
		}
		else if( (slide-centerPos) < 0 ){
			slide = centerPos;
		}
		var movement = -1*(slide-centerPos)*(settings['width']+settings['padding']); 
		if(Modernizr.cssanimations) {
      $(this).css('left', movement);
    } else {
      $(this).animate({left: movement}, 400, function() {
				    // Animation complete.
			});
    }
	} 
	$.fn.carousel = function(options, callback) {
	  // default settings
		settings = jQuery.extend({
      //      visible: 5,
      //      scroll: 5,
      height:90, 
      width:90,
      padding: 13,
			initCallback: null
		}, options);
	  var self = $(this);
		TOTAL_FRAMES = Math.ceil(self.find('li').length/settings['scroll']);
		TOTAL_ITEMS = self.find('li').length+1
		ITEM_WIDTH = (settings['width'] + settings['padding'])
		centerPos = Math.ceil(settings['visible']/2); 
			
		function moveBy(index){
			var currentPos = parseInt(self.css('left').replace('px',''));	
			var movement = -1*index*ITEM_WIDTH*settings['scroll']+currentPos
			var lastFramePos = (-1*(TOTAL_ITEMS-settings['scroll'])*ITEM_WIDTH)
			if( movement <= lastFramePos ){
				movement = lastFramePos;
			} else if(movement > 0) {
				movement = 0;

			}
			if(Modernizr.cssanimations) {
        self.css('left', movement);
      } else {
        self.animate({left: movement}, 400, function() {
					    // Animation complete.
				});
      }
		} //end of moveBy 	

	  $('#mycarousel-next').click(function() {
			moveBy(1);
    });
    $('#mycarousel-prev').click(function() {
			moveBy(-1);
    });
		if (typeof callback == 'function') {
		  callback.call(this); // brings the scope to the callback
		}
	
		return this;	
	};
})(jQuery);

