/*
 * Written by:		Ryan McGinty
 * Notes:			Animates (slides) content in and out of views
 * Requires:		jQuery 1.7+
 * Requires:		jQuery UI 1.8.16+
 * NOTE: This is a modified version which I adjusted to support jQuery 1.3.2 and jQuery UI 1.7.2.
 * I removed the delegate calls, I am manually calling the _create function, and I am also manually
 * extending the options (which I renamed to defaults) as this functionality does not appear to exist
 * in UI 1.7.2.
 */
(function($){
	var cslider = {
		options: {
			slider: '#surface', /* specify dimensions and overflow hidden */
			lists: '.clist_item', /* individual item or group of items to manipulate */
			next: null, /* selector for next item click */
			prev: null, /* selector for previous item click */
			// Number of Items show horizontally for viewer
			rowItems : 1,
			pngFix : false, /* true if vml fix is implemented on the animated elements. */
			progress : '#checklist_nav',
			rewind : true,
			durSlide : 700,
			durBounce : 300,
			durRewind : 600,
			easing : 'jswing',
			interval : 5000,
			autoPlay : false,
			globalBtns : false,
			posCounter : '.counter',
			posSplitter : ' of ',
			animate_slide : true,
			disable_enable : true
		},

		/* PRIVATE METHODS */
		_create : function(){
			var $this = this;
			$this.exists = true;
			/* Map options to $this.optionName instead of $this.options.optionName */
			$.each($this.options, function(k,v){
				$this[k] = v;
			});
			$this.$viewer = $this.element;
			$this.$slider = $this.$viewer.find($this.slider);
			$this.$lists = $this.$viewer.find($this.lists);
			$this.$lists.css({float:'left',display:'block'});
			$this.totalWidth = 0;
			$this.currentPos = 0;
			$this.$currentEl = $this.$viewer.find($this.lists).eq(0);
			$this.$currentEl.addClass('current');
			$this.$progress = $this.$viewer.find($this.progress);
			$this.hasProgress = $this.$progress.length;
			$this.$first = $this.$currentEl;
			$this.intn = null;
			$this.intp = null;
			$this.inta = null;
			$this.$delegator = $this.globalBtns ? $( 'body' ) : $this.$viewer;
			$this.$counter = $this.$viewer.find($this.posCounter);
			$this.hasCounter = $this.$counter.length > 0;
			if($this.hasCounter){
				$this.$counter.attr('min', 0);
				$this.$counter.attr('max', $this.$lists.length);
				$this._setProgress();
			}
			$this.$slider.on( 'slid', function(){
				if( $this.disable_enable ){
                                    var parent_ele_id = $this.$slider.context.id;
                                    $('#' + parent_ele_id + ' a[rel=prev]').css('display', 'block');
                                    $('#' + parent_ele_id + ' a[rel=next]').css('display', 'block');
                                    if ($this._isEnd()) {
                                        $('#' + parent_ele_id + ' a[rel=next]').css('display', 'none');
                                    } else if ($this._isBeginning()) {
                                        $('#' + parent_ele_id + ' a[rel=prev]').css('display', 'none');
                                    }
				}
			} );
			$this.$slider.trigger( 'slid' );
		},
		_init : function(){
			var $this = this;
			// Set width of slider panel
			$this._calculateWidth();
			// Apply width
			$this.$slider.css({'width':$this.totalWidth});
			// Bind buttons
			$this._bindButtons();
			if($this.autoPlay){
				$this._automate();
			}
		},
		_calculateWidth : function(){
			var $this = this;
			$this.$lists.each(function(){
				var $list= $(this);
				$list.data('x', $list.outerWidth(true));
				$list.data('pos', -$this.totalWidth);
				$this.totalWidth += ($list.outerWidth(true));
			});
			/*Fixing wierd bug in ie*/
			$this.totalWidth += 1;                        
			return $this;
		},
		_setProgress : function(){
			var $this = this,
				$lists = $($this.lists),
				count = $lists.length,
				index = $lists.index($this.$currentEl),
				countstr = '';
			if( $this.hasProgress ){
				$this.$progress.find('a.active').removeClass('active');
				$this.$progress.find('a').eq(index).addClass('active');
			}
			if( $this.hasCounter ){
				countstr = index + 1 + ' of ' + count;
				$this.$counter.html( countstr );
			}	
			$this.$lists.removeClass('current');
			$this.$currentEl.addClass('current');
			return $this;
		},
		_isBeginning : function(){
			return this.$lists.index( this.$currentEl ) === 0;
		},
		_isEnd : function(){
			return this.$lists.index( this.$currentEl ) === this.$lists.length - 1;
		},
		_bindButtons : function(){
			var $this = this;

			if($this.prev !== null && $this.next !== null){
				var $delegator = $this.$delegator;
				$delegator.on('click',$this.next, function(e){
					e.preventDefault();
					$this.$viewer.trigger('stop');
					window.clearInterval($this.intn);
				});

				$delegator.on('click',$this.prev, function(e){
					e.preventDefault();
					$this.$viewer.trigger('stop');
					window.clearInterval($this.intp);
				});

				$delegator.on('mousedown', $this.next, function(e){
					e.preventDefault();
					if(e.which !==3){ /* not a right click */
						$this.nextItem();
						if( ( $this.$currentEl.nextAll($this.$lists).length >= $this.options.rowItems ) ){
							$this.intn = window.setInterval(
								function(){
									$this.nextItem();
								}, 1000);
						}
					}
				});

				$delegator.on('mouseup mouseout', $this.next, function(e){
					e.preventDefault();
					window.clearInterval($this.intn);
				});

				$delegator.on('mousedown', $this.prev, function(e){
					e.preventDefault();
					if(e.which !==3 ){ /* not a right click */
						$this.prevItem();
						if($this.$currentEl.prev($this.$lists).length){
							$this.intp = window.setInterval(
								function(){
									$this.prevItem();
								}, 1000);
						}
					}
				});

				$delegator.on('mouseup mouseout', $this.prev, function(e){
					e.preventDefault();
					window.clearInterval($this.intp);
				});
			}

			if($this.$progress !== null){
				$this.$progress.find('a').bind('click',function(e){
					e.preventDefault();
					$this.$viewer.trigger('stop');
					var $link = $(this),
						index = $this.$progress.find('a').index($link),
						$target = $this.$lists.eq(index),
						dist = $target.data('pos');
						$this.currentPos = dist;
						if( $this.animate_slide ){
							$this.$slider.animate({marginLeft:$this.currentPos}, {duration: $this.durSlide,easing: $this.easing});
						}else{
							$this.$slider.css( {marginLeft:$this.currentPos } );
						}
						$this.$currentEl = $target;
						$this._setProgress();
				});
			}

			return $this;
		},
		_start : function(){
			var $this = this;
			$this.inta = window.setInterval(function(){
				$this.nextItem();
			},$this.interval);
		},
		_automate : function(){
			var $this = this;
			$this._start();
			$this.$viewer.bind('stop',function(){
				window.clearInterval($this.inta);
			});
			$this.$viewer.mouseenter(function(){
				$(this).trigger('stop');
			});
			$this.$viewer.mouseleave(function(){
				$this._start();
			});
			return $this;
		},

		/* PUBLIC METHODS */
		// Using prevAll() and nextAll() to fix bug in IE.
		nextItem : function(){
			var $this = this;
			if(!$(':animated').length){
				if($this.$currentEl.nextAll($this.lists).length >= $this.options.rowItems){
					var dist = -$this.$currentEl.data('x');                                       
					$this.currentPos += dist;
					if( $this.animate_slide ){
						$this.$slider.animate({marginLeft:$this.currentPos}, {duration: $this.durSlide,easing: $this.easing});
					}else{
						$this.$slider.css({marginLeft:$this.currentPos});
					}
					$this.$currentEl = $this.$currentEl.nextAll($this.lists).eq(0);
				}else if($this.options.rewind){
					$this.currentPos = 0;
					if( $this.animate_slide ){
						$this.$slider.animate({marginLeft:$this.currentPos}, {duration: $this.options.durRewind,easing: $this.easing});
					}else{
						$this.$slider.css({marginLeft:$this.currentPos});
					}
					$this.$currentEl = $this.$first;
				}else{
					window.clearInterval($this.intn);
					if( $this.animate_slide ){
						if((!$.browser.msie && $.browser.version.substr(0,1) > 7) && !$this.options.pngFix){
							$this.$slider.effect('shake',{times: 1},$this.durBounce);
						// Shake effect breaks png fix
						}else{
							$this.$slider.animate({marginLeft:$this.currentPos - 20}, $this.durBounce, function(){
								$this.currentPos -= 20;
								$this.$slider.animate({marginLeft:$this.currentPos + 20}, $this.durBounce, function(){
									$this.currentPos += 20;
								});
							});
						}
					}
				}
				if( $this.hasProgress || $this.hasCounter ){ $this._setProgress(); }
			}
			$this.$slider.trigger( 'slid' );
			return $this;
		},
		prevItem : function(){
			var $this = this;
			if(!$(':animated').length){
				if($this.$currentEl.prevAll($this.lists).eq(0).length){
					var dist = -$this.$currentEl.data('x');
					$this.currentPos -= dist;
					if( $this.animate_slide ){
						$this.$slider.animate({marginLeft:$this.currentPos}, {duration: $this.durSlide,easing: $this.easing});
					}else{
						$this.$slider.css({marginLeft:$this.currentPos});
					}
					$this.$currentEl = $this.$currentEl.prevAll($this.lists).eq(0);
				}else{
					if( $this.animate_slide ){
						window.clearInterval($this.intp);
						if(!$.browser.msie && $.browser.version.substr(0,1) > 7 && !$this.options.pngFix){
							$this.$slider.effect('shake', {times: 1, direction: 'right'}, {duration: $this.durBounce,easing: $this.easing});
						}else{
							$this.$slider.animate({marginLeft:$this.currentPos + 20}, $this.durBounce, function(){
								$this.currentPos += 20;
								$this.$slider.animate({marginLeft:$this.currentPos - 20}, $this.durBounce, function(){
									$this.currentPos -= 20;
								});
							});
						}
					}
				}
				if( $this.hasProgress || $this.hasCounter ){ $this._setProgress(); }
			}
			$this.$slider.trigger( 'slid' );
			return $this;
		},
		play : function(){
			var $this = this;
			$this._automate();
			return $this;
		},
		stop : function(){
			var $this = this;
			$this.$viewer.trigger('stop');
			return $this;
		},
		setCurrent : function(index){

		},
		_unbindButtons : function(){
			var $this = this;

			if($this.prev !== null && $this.next !== null){
				$this.$delegator.off( 'click', $this.next );
				$this.$delegator.off( 'click', $this.prev );
				$this.$delegator.off( 'mousedown', $this.next );
				$this.$delegator.off( 'mouseup mouseout', $this.next );
				$this.$delegator.off( 'mousedown', $this.next );
				$this.$delegator.off( 'mouseup mouseout', $this.prev );
			}

			if($this.$progress !== null){
				$this.$progress.find('a').unbind('click');
			}

			return $this;
		}

		/*destroy: function() {
			this._unbindButtons();
			this.element.remove();
		}*/
	};

	jQuery.widget( 'ui.contentSlider', cslider );
	/*
	Example
	$( '#cslider' ).cslider();
	*/
})(jQuery);
