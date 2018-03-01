webpackJsonp([0],[
/* 0 */
/***/ function(module, exports, __webpack_require__) {

	'use strict';
	
	__webpack_require__(5);
	__webpack_require__(7);
	var componentRegistry = __webpack_require__(8);
	
	// enable svg sprite support in IE
	var svg4everybody = __webpack_require__(9);
	svg4everybody();
	
	componentRegistry.registerComponent('recipePage', __webpack_require__(10));
	componentRegistry.registerComponent('galleryPage', __webpack_require__(35));
	componentRegistry.registerComponent('recipeSendToPhone', __webpack_require__(39));
	componentRegistry.registerComponent('mainMenu', __webpack_require__(41));
	componentRegistry.registerComponent('mainMenuGallery', __webpack_require__(45));
	componentRegistry.registerComponent('mainMenuBasic', __webpack_require__(46));
	componentRegistry.registerComponent('headerSearch', __webpack_require__(48));
	componentRegistry.registerComponent('sideDrawerMenu', __webpack_require__(49));
	componentRegistry.registerComponent('smallCarousel', __webpack_require__(1));
	componentRegistry.registerComponent('largeCarousel', __webpack_require__(50));
	componentRegistry.registerComponent('tileCarousel', __webpack_require__(51));
	componentRegistry.registerComponent('simpleRecipeCarousel', __webpack_require__(52));
	componentRegistry.registerComponent('stickyContentList', __webpack_require__(53));
	componentRegistry.registerComponent('stickyRightRail', __webpack_require__(54));
	componentRegistry.registerComponent('contentListDropdown', __webpack_require__(55));
	componentRegistry.registerComponent('fixToBottom', __webpack_require__(56));
	componentRegistry.registerComponent('imgLazyLoad', __webpack_require__(57));
	componentRegistry.registerComponent('showMore', __webpack_require__(58));
	componentRegistry.registerComponent('scrollShowTrigger', __webpack_require__(59));
	
	componentRegistry.initComponents();
	
	/**
	 * Initialize FastClick
	 */
	
	 var FastClick = __webpack_require__(60);
	 FastClick.attach(document.body);

/***/ },
/* 1 */
/***/ function(module, exports, __webpack_require__) {

	'use strict';
	
	var $ = __webpack_require__(2),
	    config = __webpack_require__(3);
	
	__webpack_require__(4);
	
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

/***/ },
/* 2 */,
/* 3 */
/***/ function(module, exports) {

	'use strict';
	
	module.exports = {
	  /**
	   * These values should be kept in-sync with scss/base/_breakponts.scss values
	   */
	  breakpoints: {
	    small: 700,
	    medium: 980,
	    large: 1280
	  },
	
	  offset: {
	    header: -80,
	    altHeader: 0,
	    sidebar: 80,
	    gallerySidebar: 200
	  }
	};

/***/ },
/* 4 */,
/* 5 */
/***/ function(module, exports, __webpack_require__) {

	'use strict';
	
	var ko = __webpack_require__(6);
	
	ko.bindingHandlers.allowBindings = {
	  init: function(elem, valueAccessor) {
	      // Let bindings proceed as normal *only if* my value is false
	      var shouldAllowBindings = ko.unwrap(valueAccessor());
	      return { controlsDescendantBindings: !shouldAllowBindings };
	  }
	};

/***/ },
/* 6 */,
/* 7 */,
/* 8 */
/***/ function(module, exports, __webpack_require__) {

	'use strict';
	
	var $ = __webpack_require__(2);
	/*-------------------------------------------- */
	/** Exports */
	/*-------------------------------------------- */
	
	module.exports = new ComponentRegistry();
	
	// EXPOSE GLOBALLY //
	window.componentRegistry = module.exports;
	
	/*-------------------------------------------- */
	/** Functions */
	/*-------------------------------------------- */
	
	var INITIALIZED_KEY = 'js-component-initialized';
	
	function ComponentRegistry() {
	  this.registeredComponents = {};
	}
	
	$.extend(ComponentRegistry.prototype, {
	
	  registerComponent: function (key, fn) {
	    this.registeredComponents[key] = fn;
	  },
	
	  initComponents: function (context) {
	    context = context || 'body';
	
	    var _this = this,
	        $components = $(context).find('[data-js-component]');
	
	    $components.each(function(i, el) {
	      var $el = $(el),
	          key = $el.data('js-component');
	
	      if (typeof _this.registeredComponents[key] == 'function' && !$el.data(INITIALIZED_KEY)) {
	        _this.registeredComponents[key](el, _this);
	        $el.data(INITIALIZED_KEY, true);
	      }
	
	    });
	  }
	});

/***/ },
/* 9 */
/***/ function(module, exports, __webpack_require__) {

	var __WEBPACK_AMD_DEFINE_ARRAY__, __WEBPACK_AMD_DEFINE_RESULT__;!function(root, factory) {
	    true ? // AMD. Register as an anonymous module unless amdModuleId is set
	    !(__WEBPACK_AMD_DEFINE_ARRAY__ = [], __WEBPACK_AMD_DEFINE_RESULT__ = function() {
	        return root.svg4everybody = factory();
	    }.apply(exports, __WEBPACK_AMD_DEFINE_ARRAY__), __WEBPACK_AMD_DEFINE_RESULT__ !== undefined && (module.exports = __WEBPACK_AMD_DEFINE_RESULT__)) : "object" == typeof exports ? module.exports = factory() : root.svg4everybody = factory();
	}(this, function() {
	    /*! svg4everybody v2.0.3 | github.com/jonathantneal/svg4everybody */
	    function embed(svg, target) {
	        // if the target exists
	        if (target) {
	            // create a document fragment to hold the contents of the target
	            var fragment = document.createDocumentFragment(), viewBox = !svg.getAttribute("viewBox") && target.getAttribute("viewBox");
	            // conditionally set the viewBox on the svg
	            viewBox && svg.setAttribute("viewBox", viewBox);
	            // copy the contents of the clone into the fragment
	            for (// clone the target
	            var clone = target.cloneNode(!0); clone.childNodes.length; ) {
	                fragment.appendChild(clone.firstChild);
	            }
	            // append the fragment into the svg
	            svg.appendChild(fragment);
	        }
	    }
	    function loadreadystatechange(xhr) {
	        // listen to changes in the request
	        xhr.onreadystatechange = function() {
	            // if the request is ready
	            if (4 === xhr.readyState) {
	                // get the cached html document
	                var cachedDocument = xhr._cachedDocument;
	                // ensure the cached html document based on the xhr response
	                cachedDocument || (cachedDocument = xhr._cachedDocument = document.implementation.createHTMLDocument(""), 
	                cachedDocument.body.innerHTML = xhr.responseText, xhr._cachedTarget = {}), // clear the xhr embeds list and embed each item
	                xhr._embeds.splice(0).map(function(item) {
	                    // get the cached target
	                    var target = xhr._cachedTarget[item.id];
	                    // ensure the cached target
	                    target || (target = xhr._cachedTarget[item.id] = cachedDocument.getElementById(item.id)), 
	                    // embed the target into the svg
	                    embed(item.svg, target);
	                });
	            }
	        }, // test the ready state change immediately
	        xhr.onreadystatechange();
	    }
	    function svg4everybody(rawopts) {
	        function oninterval() {
	            // while the index exists in the live <use> collection
	            for (// get the cached <use> index
	            var index = 0; index < uses.length; ) {
	                // get the current <use>
	                var use = uses[index], svg = use.parentNode;
	                if (svg && /svg/i.test(svg.nodeName)) {
	                    var src = use.getAttribute("xlink:href");
	                    if (polyfill && (!opts.validate || opts.validate(src, svg, use))) {
	                        // remove the <use> element
	                        svg.removeChild(use);
	                        // parse the src and get the url and id
	                        var srcSplit = src.split("#"), url = srcSplit.shift(), id = srcSplit.join("#");
	                        // if the link is external
	                        if (url.length) {
	                            // get the cached xhr request
	                            var xhr = requests[url];
	                            // ensure the xhr request exists
	                            xhr || (xhr = requests[url] = new XMLHttpRequest(), xhr.open("GET", url), xhr.send(), 
	                            xhr._embeds = []), // add the svg and id as an item to the xhr embeds list
	                            xhr._embeds.push({
	                                svg: svg,
	                                id: id
	                            }), // prepare the xhr ready state change event
	                            loadreadystatechange(xhr);
	                        } else {
	                            // embed the local id into the svg
	                            embed(svg, document.getElementById(id));
	                        }
	                    }
	                } else {
	                    // increase the index when the previous value was not "valid"
	                    ++index;
	                }
	            }
	            // continue the interval
	            requestAnimationFrame(oninterval, 67);
	        }
	        var polyfill, opts = Object(rawopts), newerIEUA = /\bTrident\/[567]\b|\bMSIE (?:9|10)\.0\b/, webkitUA = /\bAppleWebKit\/(\d+)\b/, olderEdgeUA = /\bEdge\/12\.(\d+)\b/;
	        polyfill = "polyfill" in opts ? opts.polyfill : newerIEUA.test(navigator.userAgent) || (navigator.userAgent.match(olderEdgeUA) || [])[1] < 10547 || (navigator.userAgent.match(webkitUA) || [])[1] < 537;
	        // create xhr requests object
	        var requests = {}, requestAnimationFrame = window.requestAnimationFrame || setTimeout, uses = document.getElementsByTagName("use");
	        // conditionally start the interval if the polyfill is active
	        polyfill && oninterval();
	    }
	    return svg4everybody;
	});

/***/ },
/* 10 */
/***/ function(module, exports, __webpack_require__) {

	'use strict'
	
	__webpack_require__(12);
	__webpack_require__(15);
	__webpack_require__(17);
	__webpack_require__(11);
	
	var ko = __webpack_require__(6);
	var RecipeViewModel = __webpack_require__(18);
	
	module.exports = function (el) {
	  ko.applyBindings( new RecipeViewModel(recipesConfig) );
	};

/***/ },
/* 11 */
/***/ function(module, exports, __webpack_require__) {

	'use strict';
	
	var $ = __webpack_require__(2),
	    ko = __webpack_require__(6);
	
	ko.bindingHandlers.legacyImage = {
	  init: function(el, valueAccessor, allBindings, viewModel, bindingContext) {
	    var $el = $(el),
	        isLegacy = ko.unwrap(valueAccessor());
	
	    if (isLegacy) {
	      $el
	        .addClass(allBindings().legacyClass)
	        .append(
	          $('<div>')
	            .css('backgroundImage', 'url(' + bindingContext.$data.image + ')')
	            .addClass('recipe-carousel__recipe__bg')
	        );
	    }
	  }
	};

/***/ },
/* 12 */
/***/ function(module, exports, __webpack_require__) {

	'use strict';
	
	var $ = __webpack_require__(2),
	    ko = __webpack_require__(6),
	    _ = __webpack_require__(13);
	
	__webpack_require__(4);
	
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

/***/ },
/* 13 */,
/* 14 */,
/* 15 */
/***/ function(module, exports, __webpack_require__) {

	'use strict';
	
	var $ = __webpack_require__(2),
	    ko = __webpack_require__(6);
	
	var recipeService;
	
	// how many recipes from the end of the current set should we request the next
	// page of recipes
	var RECIPES_LOAD_MORE_THRESHOLD = 4;
	
	ko.bindingHandlers.loadMoreRecipes = {
	  init: function() {
	    recipeService = __webpack_require__(16).getInstance();
	  },
	
	  update: function(el, valueAccessor, allBindings, viewModel, bindingContext) {
	    var $el = $(el),
	        vm = bindingContext.$data,
	        recipes = vm.recipes,
	        activeRecipeIndex = bindingContext.$data.activeRecipeIndex();
	
	    if (activeRecipeIndex == recipes.length - 1 - RECIPES_LOAD_MORE_THRESHOLD
	        && recipeService.hasMoreRecipes()) {
	      
	      recipeService.fetchMoreRecipes().then(function(resp) {
	        var recipesToAdd = resp;
	
	        recipes.push.apply(recipes, vm.getRecipesFromJSON(resp));
	
	        ko.utils.arrayForEach(recipesToAdd, function(recipe) {
	          var slideHtml = getHtmlForRecipeSlide(recipe);
	
	          $el.slick('slickAdd', slideHtml);
	        });
	
	        // add slick-center class to active recipe since slick slider has an
	        // issue with keeping the class intact when more slides are added
	        var index = bindingContext.$data.activeRecipeIndex.peek();
	        $el.find('[data-slick-index="' + index + '"]').addClass('slick-center');
	      });
	    }
	  }
	};
	
	function getHtmlForRecipeSlide(recipe) {
	  var div = document.createElement('div');
	  
	  ko.renderTemplate('recipe-carousel-slide-tmpl', recipe, {}, div);
	  
	  return div.children[0];
	}

/***/ },
/* 16 */
/***/ function(module, exports, __webpack_require__) {

	'use strict';
	
	var $ = __webpack_require__(2);
	
	var instance;
	
	exports.getInstance = function() {
	  if (instance) return instance;
	
	  instance = new RecipeService({
	    baseUrl: window.recipesConfig.baseUrl,
	    collectionUrl: window.recipesConfig.collectionUrl,
	    initialRecipeId: window.recipesConfig.currentRecipeId,
	    numRecipesPerPage: window.recipesConfig.numRecipesPerPage
	  });
	
	  return instance;
	};
	
	function RecipeService(config) {
	  this.baseUrl = config.baseUrl;
	  this.collectionUrl = config.collectionUrl;
	  this.initialRecipeId = config.initialRecipeId;
	  this.numRecipesPerPage = config.numRecipesPerPage;
	  this.startPage = 1;
	  
	  this._hasMoreRecipes = true;
	}
	
	RecipeService.prototype.fetchRecipeById = function (id) {
	  return $.ajax({
	    url: this.baseUrl + id,
	    method: 'get',
	    // store recipe id so calling code can check if needed
	    recipe_id: id
	  });
	};
	
	RecipeService.prototype.fetchMoreRecipes = function() {
	  var _this = this;
	
	  return $.ajax({
	    url: this.collectionUrl,
	    method: 'get',
	    data: {
	      main_recipe: this.initialRecipeId,
	      page_number: ++_this.startPage
	    }      
	  }).done(function(resp) {
	    if (resp.length < _this.numRecipesPerPage) {
	      _this._hasMoreRecipes = false;
	    }
	  });
	};
	
	RecipeService.prototype.hasMoreRecipes = function() {
	  return this._hasMoreRecipes;
	};

/***/ },
/* 17 */
/***/ function(module, exports, __webpack_require__) {

	'use strict';
	
	var $ = __webpack_require__(2),
	    ko = __webpack_require__(6),
	    _ = __webpack_require__(13),
	    componentRegistry = __webpack_require__(8);
	
	var recipeService;
	
	ko.bindingHandlers.recipeHtml = {
	  init: function() {
	     recipeService = __webpack_require__(16).getInstance();
	  },
	
	  update: function(el, valueAccessor, allBindings, viewModel, bindingContext) {
	    var $el = $(el),
	        vm = bindingContext.$data,
	        activeRecipe = ko.unwrap(valueAccessor()),
	        activeRecipeIndex = bindingContext.$data.activeRecipeIndex.peek();
	
	    // only request the html for the current active recipe if we are not 
	    // looking at the initial recipe
	    if (activeRecipeIndex != 0 || ko.bindingHandlers.recipeHtml.loadedAtLeastOne) {
	      
	      vm.isLoadingRecipe(true);
	
	      recipeService.fetchRecipeById(activeRecipe.id).then(function(resp) {
	        // prevent recipe html from changing when the respone recipe id does
	        // not match the current active recipe. This can occur when the user
	        // clicks through the recipes quickly.
	        if (vm.activeRecipe().id != this.recipe_id) return;
	
	        $el.html(resp);
	        
	        vm.isLoadingRecipe(false);
	        vm.lastLoadedRecipe(vm.activeRecipe());
	
	        // initialize any components that might be contained within the ajax
	        // html response
	        componentRegistry.initComponents($el);
	      });
	
	      ko.bindingHandlers.recipeHtml.loadedAtLeastOne = true;
	    }
	  },
	
	  loadedAtLeastOne: false
	};

/***/ },
/* 18 */
/***/ function(module, exports, __webpack_require__) {

	'use strict'
	
	var $ = __webpack_require__(2),
	    ko = __webpack_require__(6),
	    _ = __webpack_require__(13),
	    createHistory = __webpack_require__(19).createHistory;
	
	var history = createHistory();
	
	module.exports = RecipeViewModel;
	
	function RecipeViewModel(recipesConfig) {
	  var recipeService = __webpack_require__(16).getInstance();
	  var originalRecipeArr = this.getRecipesFromJSON(recipesConfig.recipes);
	  // find active recipe index based on initial recipe id
	  this.initialRecipeIndex = _.findIndex(originalRecipeArr, {id: recipesConfig.currentRecipeId});
	  
	  // we need to shift the array around so that the initial recipe id is 
	  // first in the recipe array
	  this.recipes = shiftRecipes(originalRecipeArr, this.initialRecipeIndex);
	
	  this.activeRecipeIndex = ko.observable(0);
	
	  this.activeRecipe = ko.pureComputed(function () {
	      return this.recipes[this.activeRecipeIndex()]; 
	  }, this);
	
	  // this property is set after ajax request is received for recipe
	  this.lastLoadedRecipe = ko.observable();
	  this.lastLoadedRecipe.subscribe(function(recipe) {
	    $(document).trigger('recipe::loaded', recipe);
	  }, this);
	
	  // update url to reflect active Recipe
	  this.activeRecipe.subscribe(function(newValue) {
	    history.replaceState(null, newValue.url)
	  });
	
	  this.isLoadingRecipe = ko.observable(false);
	
	  this.nextRecipeTitle = ko.pureComputed(function () {
	    var nextIndex = cycle(this.activeRecipeIndex() + 1, this.recipes.length);
	    
	    return this.recipes[nextIndex].title; 
	  }, this);
	
	  this.prevRecipeTitle = ko.pureComputed(function () {
	    var prevIndex = cycle(this.activeRecipeIndex() - 1, this.recipes.length);
	    
	    return this.recipes[prevIndex].title; 
	  }, this);
	}
	
	/**
	 * Returns an array of recipe objects from either a JSON array of recipes or
	 * a plain array of recipes
	 * 
	 * @param  {string|array} recipes The recipes array in JSON or in plain array
	 * @return {array} The array of recipe objects
	 */
	RecipeViewModel.prototype.getRecipesFromJSON = function(recipes) {
	  var _this = this;
	
	  // if we have json string, parse and return it
	  if (typeof recipes == 'string') {
	    recipes = JSON.parse(recipes);
	  }
	
	  // make sure each recipe object has an isLegacy property set to either initial
	  // value or explicitly set to false in order to avoid binding error.
	  return _.map(recipes, function (recipe) {
	    recipe.isLegacy = recipe.isLegacy || false;
	    recipe.parentViewModel = _this;
	    return recipe;
	  });
	}
	
	/**
	 * Shifts the recipe array so the recipe at the startingIndex appears first and
	 * all other recipes follow.
	 * 
	 * @param  {array} recipes The array of recipes to shift
	 * @param  {number} startingIndex The index of the recipe that should be first
	 *                  in the array
	 */
	function shiftRecipes(recipes, startingIndex) {
	  return recipes
	          .slice(startingIndex)
	          .concat(recipes.slice(0, startingIndex));
	}
	
	/**
	 * Cycles a value between 0 and arrLength so the value is never out ot array bounds.
	 * 
	 * @param  {number} value the number that should be cycled between the bounds.
	 * @param  {number} arrLength The length of the array to keep the value in the bounds of.
	 * 
	 * @return {number} The value within arrayLength bounds
	 */
	function cycle(value, arrLength) {
	  return (arrLength + value) % arrLength;
	}

/***/ },
/* 19 */
/***/ function(module, exports, __webpack_require__) {

	'use strict';
	
	exports.__esModule = true;
	
	function _interopRequireDefault(obj) { return obj && obj.__esModule ? obj : { 'default': obj }; }
	
	var _createBrowserHistory = __webpack_require__(20);
	
	var _createBrowserHistory2 = _interopRequireDefault(_createBrowserHistory);
	
	exports.createHistory = _createBrowserHistory2['default'];
	
	var _createHashHistory2 = __webpack_require__(32);
	
	var _createHashHistory3 = _interopRequireDefault(_createHashHistory2);
	
	exports.createHashHistory = _createHashHistory3['default'];
	
	var _createMemoryHistory2 = __webpack_require__(34);
	
	var _createMemoryHistory3 = _interopRequireDefault(_createMemoryHistory2);
	
	exports.createMemoryHistory = _createMemoryHistory3['default'];
	
	var _createLocation2 = __webpack_require__(31);
	
	var _createLocation3 = _interopRequireDefault(_createLocation2);
	
	exports.createLocation = _createLocation3['default'];
	
	var _Actions2 = __webpack_require__(24);
	
	var _Actions3 = _interopRequireDefault(_Actions2);
	
	exports.Actions = _Actions3['default'];

/***/ },
/* 20 */
/***/ function(module, exports, __webpack_require__) {

	'use strict';
	
	exports.__esModule = true;
	
	var _extends = Object.assign || function (target) { for (var i = 1; i < arguments.length; i++) { var source = arguments[i]; for (var key in source) { if (Object.prototype.hasOwnProperty.call(source, key)) { target[key] = source[key]; } } } return target; };
	
	function _interopRequireDefault(obj) { return obj && obj.__esModule ? obj : { 'default': obj }; }
	
	var _invariant = __webpack_require__(22);
	
	var _invariant2 = _interopRequireDefault(_invariant);
	
	var _Actions = __webpack_require__(24);
	
	var _ExecutionEnvironment = __webpack_require__(25);
	
	var _DOMUtils = __webpack_require__(21);
	
	var _createDOMHistory = __webpack_require__(26);
	
	var _createDOMHistory2 = _interopRequireDefault(_createDOMHistory);
	
	var _createLocation = __webpack_require__(31);
	
	var _createLocation2 = _interopRequireDefault(_createLocation);
	
	function getCurrentLocation(historyState) {
	  historyState = historyState || window.history.state || {};
	
	  var _historyState = historyState;
	  var key = _historyState.key;
	
	  var state = key && _DOMUtils.readState(key);
	  var path = _DOMUtils.getWindowPath();
	
	  return _createLocation2['default'](path, state, undefined, key);
	}
	
	function startPopStateListener(_ref) {
	  var transitionTo = _ref.transitionTo;
	
	  function popStateListener(event) {
	    if (event.state === undefined) return; // Ignore extraneous popstate events in WebKit.
	
	    transitionTo(getCurrentLocation(event.state));
	  }
	
	  _DOMUtils.addEventListener(window, 'popstate', popStateListener);
	
	  return function () {
	    _DOMUtils.removeEventListener(window, 'popstate', popStateListener);
	  };
	}
	
	/**
	 * Creates and returns a history object that uses HTML5's history API
	 * (pushState, replaceState, and the popstate event) to manage history.
	 * This is the recommended method of managing history in browsers because
	 * it provides the cleanest URLs.
	 *
	 * Note: In browsers that do not support the HTML5 history API full
	 * page reloads will be used to preserve URLs.
	 */
	function createBrowserHistory(options) {
	  _invariant2['default'](_ExecutionEnvironment.canUseDOM, 'Browser history needs a DOM');
	
	  var isSupported = _DOMUtils.supportsHistory();
	
	  function finishTransition(location) {
	    var key = location.key;
	    var pathname = location.pathname;
	    var search = location.search;
	
	    var path = pathname + search;
	    var historyState = {
	      key: key
	    };
	
	    switch (location.action) {
	      case _Actions.PUSH:
	        _DOMUtils.saveState(location.key, location.state);
	
	        if (isSupported) {
	          window.history.pushState(historyState, null, path);
	        } else {
	          window.location.href = path; // Use page reload to preserve the URL.
	        }
	        break;
	      case _Actions.REPLACE:
	        _DOMUtils.saveState(location.key, location.state);
	
	        if (isSupported) {
	          window.history.replaceState(historyState, null, path);
	        } else {
	          window.location.replace(path); // Use page reload to preserve the URL.
	        }
	        break;
	    }
	  }
	
	  function cancelTransition(location) {
	    if (location.action === _Actions.POP) {
	      var n = 0; // TODO: Figure out what n will put the URL back.
	      _DOMUtils.go(n);
	    }
	  }
	
	  var history = _createDOMHistory2['default'](_extends({}, options, {
	    getCurrentLocation: getCurrentLocation,
	    finishTransition: finishTransition,
	    cancelTransition: cancelTransition
	  }));
	
	  var listenerCount = 0,
	      stopPopStateListener;
	
	  function listen(listener) {
	    if (++listenerCount === 1) stopPopStateListener = startPopStateListener(history);
	
	    var unlisten = history.listen(listener);
	
	    return function () {
	      unlisten();
	
	      if (--listenerCount === 0) stopPopStateListener();
	    };
	  }
	
	  return _extends({}, history, {
	    listen: listen
	  });
	}
	
	exports['default'] = createBrowserHistory;
	module.exports = exports['default'];

/***/ },
/* 21 */
/***/ function(module, exports) {

	'use strict';
	
	exports.__esModule = true;
	exports.addEventListener = addEventListener;
	exports.removeEventListener = removeEventListener;
	exports.getHashPath = getHashPath;
	exports.replaceHashPath = replaceHashPath;
	exports.getWindowPath = getWindowPath;
	exports.saveState = saveState;
	exports.readState = readState;
	exports.go = go;
	exports.supportsHistory = supportsHistory;
	exports.supportsGoWithoutReloadUsingHash = supportsGoWithoutReloadUsingHash;
	
	function addEventListener(node, event, listener) {
	  if (node.addEventListener) {
	    node.addEventListener(event, listener, false);
	  } else {
	    node.attachEvent('on' + event, listener);
	  }
	}
	
	function removeEventListener(node, event, listener) {
	  if (node.removeEventListener) {
	    node.removeEventListener(event, listener, false);
	  } else {
	    node.detachEvent('on' + event, listener);
	  }
	}
	
	function getHashPath() {
	  // We can't use window.location.hash here because it's not
	  // consistent across browsers - Firefox will pre-decode it!
	  return window.location.href.split('#')[1] || '';
	}
	
	function replaceHashPath(path) {
	  window.location.replace(window.location.pathname + window.location.search + '#' + path);
	}
	
	function getWindowPath() {
	  return window.location.pathname + window.location.search;
	}
	
	function saveState(key, state) {
	  window.sessionStorage.setItem(key, JSON.stringify(state));
	}
	
	function readState(key) {
	  var json = window.sessionStorage.getItem(key);
	
	  if (json) {
	    try {
	      return JSON.parse(json);
	    } catch (error) {
	      // Ignore invalid JSON.
	    }
	  }
	
	  return null;
	}
	
	function go(n) {
	  if (n) window.history.go(n);
	}
	
	/**
	 * Returns true if the HTML5 history API is supported. Taken from modernizr.
	 *
	 * https://github.com/Modernizr/Modernizr/blob/master/LICENSE
	 * https://github.com/Modernizr/Modernizr/blob/master/feature-detects/history.js
	 * changed to avoid false negatives for Windows Phones: https://github.com/rackt/react-router/issues/586
	 */
	
	function supportsHistory() {
	  var ua = navigator.userAgent;
	  if ((ua.indexOf('Android 2.') !== -1 || ua.indexOf('Android 4.0') !== -1) && ua.indexOf('Mobile Safari') !== -1 && ua.indexOf('Chrome') === -1 && ua.indexOf('Windows Phone') === -1) {
	    return false;
	  }
	  return window.history && 'pushState' in window.history;
	}
	
	/**
	 * Returns false if using go(n) with hash history causes a full page reload.
	 */
	
	function supportsGoWithoutReloadUsingHash() {
	  var ua = navigator.userAgent;
	  return ua.indexOf('Firefox') === -1;
	}

/***/ },
/* 22 */
/***/ function(module, exports, __webpack_require__) {

	/* WEBPACK VAR INJECTION */(function(process) {/**
	 * Copyright 2013-2015, Facebook, Inc.
	 * All rights reserved.
	 *
	 * This source code is licensed under the BSD-style license found in the
	 * LICENSE file in the root directory of this source tree. An additional grant
	 * of patent rights can be found in the PATENTS file in the same directory.
	 */
	
	'use strict';
	
	/**
	 * Use invariant() to assert state which your program assumes to be true.
	 *
	 * Provide sprintf-style format (only %s is supported) and arguments
	 * to provide information about what broke and what you were
	 * expecting.
	 *
	 * The invariant message will be stripped in production, but the invariant
	 * will remain to ensure logic does not differ in production.
	 */
	
	var invariant = function(condition, format, a, b, c, d, e, f) {
	  if (process.env.NODE_ENV !== 'production') {
	    if (format === undefined) {
	      throw new Error('invariant requires an error message argument');
	    }
	  }
	
	  if (!condition) {
	    var error;
	    if (format === undefined) {
	      error = new Error(
	        'Minified exception occurred; use the non-minified dev environment ' +
	        'for the full error message and additional helpful warnings.'
	      );
	    } else {
	      var args = [a, b, c, d, e, f];
	      var argIndex = 0;
	      error = new Error(
	        format.replace(/%s/g, function() { return args[argIndex++]; })
	      );
	      error.name = 'Invariant Violation';
	    }
	
	    error.framesToPop = 1; // we don't care about invariant's own frame
	    throw error;
	  }
	};
	
	module.exports = invariant;
	
	/* WEBPACK VAR INJECTION */}.call(exports, __webpack_require__(23)))

/***/ },
/* 23 */
/***/ function(module, exports) {

	// shim for using process in browser
	var process = module.exports = {};
	
	// cached from whatever global is present so that test runners that stub it
	// don't break things.  But we need to wrap it in a try catch in case it is
	// wrapped in strict mode code which doesn't define any globals.  It's inside a
	// function because try/catches deoptimize in certain engines.
	
	var cachedSetTimeout;
	var cachedClearTimeout;
	
	function defaultSetTimout() {
	    throw new Error('setTimeout has not been defined');
	}
	function defaultClearTimeout () {
	    throw new Error('clearTimeout has not been defined');
	}
	(function () {
	    try {
	        if (typeof setTimeout === 'function') {
	            cachedSetTimeout = setTimeout;
	        } else {
	            cachedSetTimeout = defaultSetTimout;
	        }
	    } catch (e) {
	        cachedSetTimeout = defaultSetTimout;
	    }
	    try {
	        if (typeof clearTimeout === 'function') {
	            cachedClearTimeout = clearTimeout;
	        } else {
	            cachedClearTimeout = defaultClearTimeout;
	        }
	    } catch (e) {
	        cachedClearTimeout = defaultClearTimeout;
	    }
	} ())
	function runTimeout(fun) {
	    if (cachedSetTimeout === setTimeout) {
	        //normal enviroments in sane situations
	        return setTimeout(fun, 0);
	    }
	    // if setTimeout wasn't available but was latter defined
	    if ((cachedSetTimeout === defaultSetTimout || !cachedSetTimeout) && setTimeout) {
	        cachedSetTimeout = setTimeout;
	        return setTimeout(fun, 0);
	    }
	    try {
	        // when when somebody has screwed with setTimeout but no I.E. maddness
	        return cachedSetTimeout(fun, 0);
	    } catch(e){
	        try {
	            // When we are in I.E. but the script has been evaled so I.E. doesn't trust the global object when called normally
	            return cachedSetTimeout.call(null, fun, 0);
	        } catch(e){
	            // same as above but when it's a version of I.E. that must have the global object for 'this', hopfully our context correct otherwise it will throw a global error
	            return cachedSetTimeout.call(this, fun, 0);
	        }
	    }
	
	
	}
	function runClearTimeout(marker) {
	    if (cachedClearTimeout === clearTimeout) {
	        //normal enviroments in sane situations
	        return clearTimeout(marker);
	    }
	    // if clearTimeout wasn't available but was latter defined
	    if ((cachedClearTimeout === defaultClearTimeout || !cachedClearTimeout) && clearTimeout) {
	        cachedClearTimeout = clearTimeout;
	        return clearTimeout(marker);
	    }
	    try {
	        // when when somebody has screwed with setTimeout but no I.E. maddness
	        return cachedClearTimeout(marker);
	    } catch (e){
	        try {
	            // When we are in I.E. but the script has been evaled so I.E. doesn't  trust the global object when called normally
	            return cachedClearTimeout.call(null, marker);
	        } catch (e){
	            // same as above but when it's a version of I.E. that must have the global object for 'this', hopfully our context correct otherwise it will throw a global error.
	            // Some versions of I.E. have different rules for clearTimeout vs setTimeout
	            return cachedClearTimeout.call(this, marker);
	        }
	    }
	
	
	
	}
	var queue = [];
	var draining = false;
	var currentQueue;
	var queueIndex = -1;
	
	function cleanUpNextTick() {
	    if (!draining || !currentQueue) {
	        return;
	    }
	    draining = false;
	    if (currentQueue.length) {
	        queue = currentQueue.concat(queue);
	    } else {
	        queueIndex = -1;
	    }
	    if (queue.length) {
	        drainQueue();
	    }
	}
	
	function drainQueue() {
	    if (draining) {
	        return;
	    }
	    var timeout = runTimeout(cleanUpNextTick);
	    draining = true;
	
	    var len = queue.length;
	    while(len) {
	        currentQueue = queue;
	        queue = [];
	        while (++queueIndex < len) {
	            if (currentQueue) {
	                currentQueue[queueIndex].run();
	            }
	        }
	        queueIndex = -1;
	        len = queue.length;
	    }
	    currentQueue = null;
	    draining = false;
	    runClearTimeout(timeout);
	}
	
	process.nextTick = function (fun) {
	    var args = new Array(arguments.length - 1);
	    if (arguments.length > 1) {
	        for (var i = 1; i < arguments.length; i++) {
	            args[i - 1] = arguments[i];
	        }
	    }
	    queue.push(new Item(fun, args));
	    if (queue.length === 1 && !draining) {
	        runTimeout(drainQueue);
	    }
	};
	
	// v8 likes predictible objects
	function Item(fun, array) {
	    this.fun = fun;
	    this.array = array;
	}
	Item.prototype.run = function () {
	    this.fun.apply(null, this.array);
	};
	process.title = 'browser';
	process.browser = true;
	process.env = {};
	process.argv = [];
	process.version = ''; // empty string to avoid regexp issues
	process.versions = {};
	
	function noop() {}
	
	process.on = noop;
	process.addListener = noop;
	process.once = noop;
	process.off = noop;
	process.removeListener = noop;
	process.removeAllListeners = noop;
	process.emit = noop;
	process.prependListener = noop;
	process.prependOnceListener = noop;
	
	process.listeners = function (name) { return [] }
	
	process.binding = function (name) {
	    throw new Error('process.binding is not supported');
	};
	
	process.cwd = function () { return '/' };
	process.chdir = function (dir) {
	    throw new Error('process.chdir is not supported');
	};
	process.umask = function() { return 0; };


/***/ },
/* 24 */
/***/ function(module, exports) {

	/**
	 * Indicates that navigation was caused by a call to history.push.
	 */
	'use strict';
	
	exports.__esModule = true;
	var PUSH = 'PUSH';
	
	/**
	 * Indicates that navigation was caused by a call to history.replace.
	 */
	exports.PUSH = PUSH;
	var REPLACE = 'REPLACE';
	
	/**
	 * Indicates that navigation was caused by some other action such
	 * as using a browser's back/forward buttons and/or manually manipulating
	 * the URL in a browser's location bar. This is the default.
	 *
	 * See https://developer.mozilla.org/en-US/docs/Web/API/WindowEventHandlers/onpopstate
	 * for more information.
	 */
	exports.REPLACE = REPLACE;
	var POP = 'POP';
	
	exports.POP = POP;
	exports['default'] = {
	  PUSH: PUSH,
	  REPLACE: REPLACE,
	  POP: POP
	};

/***/ },
/* 25 */
/***/ function(module, exports) {

	'use strict';
	
	exports.__esModule = true;
	var canUseDOM = !!(typeof window !== 'undefined' && window.document && window.document.createElement);
	exports.canUseDOM = canUseDOM;

/***/ },
/* 26 */
/***/ function(module, exports, __webpack_require__) {

	'use strict';
	
	exports.__esModule = true;
	
	var _extends = Object.assign || function (target) { for (var i = 1; i < arguments.length; i++) { var source = arguments[i]; for (var key in source) { if (Object.prototype.hasOwnProperty.call(source, key)) { target[key] = source[key]; } } } return target; };
	
	function _interopRequireDefault(obj) { return obj && obj.__esModule ? obj : { 'default': obj }; }
	
	var _invariant = __webpack_require__(22);
	
	var _invariant2 = _interopRequireDefault(_invariant);
	
	var _ExecutionEnvironment = __webpack_require__(25);
	
	var _DOMUtils = __webpack_require__(21);
	
	var _createHistory = __webpack_require__(27);
	
	var _createHistory2 = _interopRequireDefault(_createHistory);
	
	function getUserConfirmation(message, callback) {
	  callback(window.confirm(message));
	}
	
	function startBeforeUnloadListener(_ref) {
	  var getTransitionConfirmationMessage = _ref.getTransitionConfirmationMessage;
	
	  function listener(event) {
	    var message = getTransitionConfirmationMessage();
	
	    if (typeof message === 'string') {
	      (event || window.event).returnValue = message;
	      return message;
	    }
	  }
	
	  _DOMUtils.addEventListener(window, 'beforeunload', listener);
	
	  return function () {
	    _DOMUtils.removeEventListener(window, 'beforeunload', listener);
	  };
	}
	
	function createDOMHistory(options) {
	  var history = _createHistory2['default'](_extends({
	    getUserConfirmation: getUserConfirmation
	  }, options, {
	    saveState: _DOMUtils.saveState,
	    readState: _DOMUtils.readState,
	    go: _DOMUtils.go
	  }));
	
	  var listenerCount = 0;
	  var stopBeforeUnloadListener;
	
	  function listen(listener) {
	    _invariant2['default'](_ExecutionEnvironment.canUseDOM, 'DOM history needs a DOM');
	
	    if (++listenerCount === 1) stopBeforeUnloadListener = startBeforeUnloadListener(history);
	
	    var unlisten = history.listen(listener);
	
	    return function () {
	      unlisten();
	
	      if (--listenerCount === 0) stopBeforeUnloadListener();
	    };
	  }
	
	  return _extends({}, history, {
	    listen: listen
	  });
	}
	
	exports['default'] = createDOMHistory;
	module.exports = exports['default'];

/***/ },
/* 27 */
/***/ function(module, exports, __webpack_require__) {

	'use strict';
	
	exports.__esModule = true;
	
	function _interopRequireDefault(obj) { return obj && obj.__esModule ? obj : { 'default': obj }; }
	
	var _invariant = __webpack_require__(22);
	
	var _invariant2 = _interopRequireDefault(_invariant);
	
	var _deepEqual = __webpack_require__(28);
	
	var _deepEqual2 = _interopRequireDefault(_deepEqual);
	
	var _Actions = __webpack_require__(24);
	
	var _createLocation = __webpack_require__(31);
	
	var _createLocation2 = _interopRequireDefault(_createLocation);
	
	function createRandomKey(length) {
	  return Math.random().toString(36).substr(2, length);
	}
	
	function locationsAreEqual(a, b) {
	  return a.pathname === b.pathname && a.search === b.search &&
	  //a.action === b.action && // Different action !== location change.
	  a.key === b.key && _deepEqual2['default'](a.state, b.state);
	}
	
	var DefaultKeyLength = 6;
	
	function createHistory() {
	  var options = arguments.length <= 0 || arguments[0] === undefined ? {} : arguments[0];
	  var getCurrentLocation = options.getCurrentLocation;
	  var finishTransition = options.finishTransition;
	  var cancelTransition = options.cancelTransition;
	  var go = options.go;
	  var keyLength = options.keyLength;
	  var getUserConfirmation = options.getUserConfirmation;
	
	  if (typeof keyLength !== 'number') keyLength = DefaultKeyLength;
	
	  var transitionHooks = [];
	  var changeListeners = [];
	  var location;
	
	  function updateLocation(newLocation) {
	    location = newLocation;
	
	    changeListeners.forEach(function (listener) {
	      listener(location);
	    });
	  }
	
	  function addChangeListener(listener) {
	    changeListeners.push(listener);
	  }
	
	  function removeChangeListener(listener) {
	    changeListeners = changeListeners.filter(function (item) {
	      return item !== listener;
	    });
	  }
	
	  function listen(listener) {
	    addChangeListener(listener);
	
	    if (location) {
	      listener(location);
	    } else {
	      updateLocation(getCurrentLocation());
	    }
	
	    return function () {
	      removeChangeListener(listener);
	    };
	  }
	
	  function registerTransitionHook(hook) {
	    if (transitionHooks.indexOf(hook) === -1) transitionHooks.push(hook);
	  }
	
	  function unregisterTransitionHook(hook) {
	    transitionHooks = transitionHooks.filter(function (item) {
	      return item !== hook;
	    });
	  }
	
	  function getTransitionConfirmationMessage() {
	    var message = null;
	
	    for (var i = 0, len = transitionHooks.length; i < len && typeof message !== 'string'; ++i) message = transitionHooks[i].call(this);
	
	    return message;
	  }
	
	  function confirmTransition(callback) {
	    var message;
	
	    if (getUserConfirmation && (message = getTransitionConfirmationMessage())) {
	      getUserConfirmation(message, function (ok) {
	        callback(ok !== false);
	      });
	    } else {
	      callback(true);
	    }
	  }
	
	  var pendingLocation;
	
	  function transitionTo(nextLocation) {
	    if (location && locationsAreEqual(location, nextLocation)) return; // Nothing to do.
	
	    _invariant2['default'](pendingLocation == null, 'transitionTo: Another transition is already in progress');
	
	    pendingLocation = nextLocation;
	
	    confirmTransition(function (ok) {
	      pendingLocation = null;
	
	      if (ok) {
	        finishTransition(nextLocation);
	        updateLocation(nextLocation);
	      } else if (cancelTransition) {
	        cancelTransition(nextLocation);
	      }
	    });
	  }
	
	  function pushState(state, path) {
	    transitionTo(_createLocation2['default'](path, state, _Actions.PUSH, createKey()));
	  }
	
	  function replaceState(state, path) {
	    transitionTo(_createLocation2['default'](path, state, _Actions.REPLACE, createKey()));
	  }
	
	  function goBack() {
	    go(-1);
	  }
	
	  function goForward() {
	    go(1);
	  }
	
	  function createKey() {
	    return createRandomKey(keyLength);
	  }
	
	  function createHref(path) {
	    return path;
	  }
	
	  return {
	    listen: listen,
	    registerTransitionHook: registerTransitionHook,
	    unregisterTransitionHook: unregisterTransitionHook,
	    getTransitionConfirmationMessage: getTransitionConfirmationMessage,
	    transitionTo: transitionTo,
	    pushState: pushState,
	    replaceState: replaceState,
	    go: go,
	    goBack: goBack,
	    goForward: goForward,
	    createKey: createKey,
	    createHref: createHref
	  };
	}
	
	exports['default'] = createHistory;
	module.exports = exports['default'];

/***/ },
/* 28 */
/***/ function(module, exports, __webpack_require__) {

	var pSlice = Array.prototype.slice;
	var objectKeys = __webpack_require__(29);
	var isArguments = __webpack_require__(30);
	
	var deepEqual = module.exports = function (actual, expected, opts) {
	  if (!opts) opts = {};
	  // 7.1. All identical values are equivalent, as determined by ===.
	  if (actual === expected) {
	    return true;
	
	  } else if (actual instanceof Date && expected instanceof Date) {
	    return actual.getTime() === expected.getTime();
	
	  // 7.3. Other pairs that do not both pass typeof value == 'object',
	  // equivalence is determined by ==.
	  } else if (!actual || !expected || typeof actual != 'object' && typeof expected != 'object') {
	    return opts.strict ? actual === expected : actual == expected;
	
	  // 7.4. For all other Object pairs, including Array objects, equivalence is
	  // determined by having the same number of owned properties (as verified
	  // with Object.prototype.hasOwnProperty.call), the same set of keys
	  // (although not necessarily the same order), equivalent values for every
	  // corresponding key, and an identical 'prototype' property. Note: this
	  // accounts for both named and indexed properties on Arrays.
	  } else {
	    return objEquiv(actual, expected, opts);
	  }
	}
	
	function isUndefinedOrNull(value) {
	  return value === null || value === undefined;
	}
	
	function isBuffer (x) {
	  if (!x || typeof x !== 'object' || typeof x.length !== 'number') return false;
	  if (typeof x.copy !== 'function' || typeof x.slice !== 'function') {
	    return false;
	  }
	  if (x.length > 0 && typeof x[0] !== 'number') return false;
	  return true;
	}
	
	function objEquiv(a, b, opts) {
	  var i, key;
	  if (isUndefinedOrNull(a) || isUndefinedOrNull(b))
	    return false;
	  // an identical 'prototype' property.
	  if (a.prototype !== b.prototype) return false;
	  //~~~I've managed to break Object.keys through screwy arguments passing.
	  //   Converting to array solves the problem.
	  if (isArguments(a)) {
	    if (!isArguments(b)) {
	      return false;
	    }
	    a = pSlice.call(a);
	    b = pSlice.call(b);
	    return deepEqual(a, b, opts);
	  }
	  if (isBuffer(a)) {
	    if (!isBuffer(b)) {
	      return false;
	    }
	    if (a.length !== b.length) return false;
	    for (i = 0; i < a.length; i++) {
	      if (a[i] !== b[i]) return false;
	    }
	    return true;
	  }
	  try {
	    var ka = objectKeys(a),
	        kb = objectKeys(b);
	  } catch (e) {//happens when one is a string literal and the other isn't
	    return false;
	  }
	  // having the same number of owned properties (keys incorporates
	  // hasOwnProperty)
	  if (ka.length != kb.length)
	    return false;
	  //the same set of keys (although not necessarily the same order),
	  ka.sort();
	  kb.sort();
	  //~~~cheap key test
	  for (i = ka.length - 1; i >= 0; i--) {
	    if (ka[i] != kb[i])
	      return false;
	  }
	  //equivalent values for every corresponding key, and
	  //~~~possibly expensive deep test
	  for (i = ka.length - 1; i >= 0; i--) {
	    key = ka[i];
	    if (!deepEqual(a[key], b[key], opts)) return false;
	  }
	  return typeof a === typeof b;
	}


/***/ },
/* 29 */
/***/ function(module, exports) {

	exports = module.exports = typeof Object.keys === 'function'
	  ? Object.keys : shim;
	
	exports.shim = shim;
	function shim (obj) {
	  var keys = [];
	  for (var key in obj) keys.push(key);
	  return keys;
	}


/***/ },
/* 30 */
/***/ function(module, exports) {

	var supportsArgumentsClass = (function(){
	  return Object.prototype.toString.call(arguments)
	})() == '[object Arguments]';
	
	exports = module.exports = supportsArgumentsClass ? supported : unsupported;
	
	exports.supported = supported;
	function supported(object) {
	  return Object.prototype.toString.call(object) == '[object Arguments]';
	};
	
	exports.unsupported = unsupported;
	function unsupported(object){
	  return object &&
	    typeof object == 'object' &&
	    typeof object.length == 'number' &&
	    Object.prototype.hasOwnProperty.call(object, 'callee') &&
	    !Object.prototype.propertyIsEnumerable.call(object, 'callee') ||
	    false;
	};


/***/ },
/* 31 */
/***/ function(module, exports, __webpack_require__) {

	'use strict';
	
	exports.__esModule = true;
	
	var _Actions = __webpack_require__(24);
	
	function createLocation() {
	  var path = arguments.length <= 0 || arguments[0] === undefined ? '/' : arguments[0];
	  var state = arguments.length <= 1 || arguments[1] === undefined ? null : arguments[1];
	  var action = arguments.length <= 2 || arguments[2] === undefined ? _Actions.POP : arguments[2];
	  var key = arguments.length <= 3 || arguments[3] === undefined ? null : arguments[3];
	
	  var index = path.indexOf('?');
	
	  var pathname, search;
	  if (index !== -1) {
	    pathname = path.substring(0, index);
	    search = path.substring(index);
	  } else {
	    pathname = path;
	    search = '';
	  }
	
	  if (pathname === '') pathname = '/';
	
	  return {
	    pathname: pathname,
	    search: search,
	    state: state,
	    action: action,
	    key: key
	  };
	}
	
	exports['default'] = createLocation;
	module.exports = exports['default'];

/***/ },
/* 32 */
/***/ function(module, exports, __webpack_require__) {

	'use strict';
	
	exports.__esModule = true;
	
	var _extends = Object.assign || function (target) { for (var i = 1; i < arguments.length; i++) { var source = arguments[i]; for (var key in source) { if (Object.prototype.hasOwnProperty.call(source, key)) { target[key] = source[key]; } } } return target; };
	
	function _interopRequireDefault(obj) { return obj && obj.__esModule ? obj : { 'default': obj }; }
	
	var _warning = __webpack_require__(33);
	
	var _warning2 = _interopRequireDefault(_warning);
	
	var _invariant = __webpack_require__(22);
	
	var _invariant2 = _interopRequireDefault(_invariant);
	
	var _Actions = __webpack_require__(24);
	
	var _ExecutionEnvironment = __webpack_require__(25);
	
	var _DOMUtils = __webpack_require__(21);
	
	var _createDOMHistory = __webpack_require__(26);
	
	var _createDOMHistory2 = _interopRequireDefault(_createDOMHistory);
	
	var _createLocation = __webpack_require__(31);
	
	var _createLocation2 = _interopRequireDefault(_createLocation);
	
	function isAbsolutePath(path) {
	  return typeof path === 'string' && path.charAt(0) === '/';
	}
	
	function ensureSlash() {
	  var path = _DOMUtils.getHashPath();
	
	  if (isAbsolutePath(path)) return true;
	
	  _DOMUtils.replaceHashPath('/' + path);
	
	  return false;
	}
	
	function addQueryStringValueToPath(path, key, value) {
	  return path + (path.indexOf('?') === -1 ? '?' : '&') + (key + '=' + value);
	}
	
	function stripQueryStringValueFromPath(path, key) {
	  return path.replace(new RegExp('[?&]?' + key + '=[a-zA-Z0-9]+'), '');
	}
	
	function getQueryStringValueFromPath(path, key) {
	  var match = path.match(new RegExp('\\?.*?\\b' + key + '=(.+?)\\b'));
	  return match && match[1];
	}
	
	var DefaultQueryKey = '_k';
	
	function createHashHistory() {
	  var options = arguments.length <= 0 || arguments[0] === undefined ? {} : arguments[0];
	
	  _invariant2['default'](_ExecutionEnvironment.canUseDOM, 'Hash history needs a DOM');
	
	  var queryKey = options.queryKey;
	
	  if (queryKey === undefined || !!queryKey) queryKey = typeof queryKey === 'string' ? queryKey : DefaultQueryKey;
	
	  function getCurrentLocation() {
	    var path = _DOMUtils.getHashPath();
	
	    var key, state;
	    if (queryKey) {
	      key = getQueryStringValueFromPath(path, queryKey);
	      path = stripQueryStringValueFromPath(path, queryKey);
	      state = key && _DOMUtils.readState(key);
	    }
	
	    return _createLocation2['default'](path, state, undefined, key);
	  }
	
	  function startHashChangeListener(_ref) {
	    var transitionTo = _ref.transitionTo;
	
	    function hashChangeListener() {
	      if (!ensureSlash()) return; // Always make sure hashes are preceeded with a /.
	
	      transitionTo(getCurrentLocation());
	    };
	
	    ensureSlash();
	    _DOMUtils.addEventListener(window, 'hashchange', hashChangeListener);
	
	    return function () {
	      _DOMUtils.removeEventListener(window, 'hashchange', hashChangeListener);
	    };
	  }
	
	  function finishTransition(location) {
	    var key = location.key;
	    var pathname = location.pathname;
	    var search = location.search;
	    var action = location.action;
	
	    if (action === _Actions.POP) return; // Nothing to do.
	
	    var path = pathname + search;
	
	    if (queryKey) path = addQueryStringValueToPath(path, queryKey, key);
	
	    if (path === _DOMUtils.getHashPath()) {
	      _warning2['default'](false, 'You cannot %s the same path using hash history', action);
	    } else {
	      if (queryKey) {
	        _DOMUtils.saveState(location.key, location.state);
	      } else {
	        // Drop key and state.
	        location.key = location.state = null;
	      }
	
	      if (action === _Actions.PUSH) {
	        window.location.hash = path;
	      } else {
	        _DOMUtils.replaceHashPath(path);
	      }
	    }
	  }
	
	  function cancelTransition(location) {
	    if (location.action === _Actions.POP) {
	      var n = 0; // TODO: Figure out what n will put the URL back.
	      go(n);
	    }
	  }
	
	  var history = _createDOMHistory2['default'](_extends({}, options, {
	    getCurrentLocation: getCurrentLocation,
	    finishTransition: finishTransition,
	    cancelTransition: cancelTransition
	  }));
	
	  var listenerCount = 0,
	      stopHashChangeListener;
	
	  function listen(listener) {
	    if (++listenerCount === 1) stopHashChangeListener = startHashChangeListener(history);
	
	    var unlisten = history.listen(listener);
	
	    return function () {
	      unlisten();
	
	      if (--listenerCount === 0) stopHashChangeListener();
	    };
	  }
	
	  function pushState(state, path) {
	    _warning2['default'](queryKey || state == null, 'You cannot use state without a queryKey; it will be dropped');
	
	    history.pushState(state, path);
	  }
	
	  function replaceState(state, path) {
	    _warning2['default'](queryKey || state == null, 'You cannot use state without a queryKey; it will be dropped');
	
	    history.replaceState(state, path);
	  }
	
	  var goIsSupportedWithoutReload = _DOMUtils.supportsGoWithoutReloadUsingHash();
	
	  function go(n) {
	    _warning2['default'](goIsSupportedWithoutReload, 'Hash history go(n) causes a full page reload in this browser');
	
	    history.go(n);
	  }
	
	  function createHref(path) {
	    return '#' + history.createHref(path);
	  }
	
	  return _extends({}, history, {
	    listen: listen,
	    pushState: pushState,
	    replaceState: replaceState,
	    go: go,
	    createHref: createHref
	  });
	}
	
	exports['default'] = createHashHistory;
	module.exports = exports['default'];

/***/ },
/* 33 */
/***/ function(module, exports, __webpack_require__) {

	/* WEBPACK VAR INJECTION */(function(process) {/**
	 * Copyright 2014-2015, Facebook, Inc.
	 * All rights reserved.
	 *
	 * This source code is licensed under the BSD-style license found in the
	 * LICENSE file in the root directory of this source tree. An additional grant
	 * of patent rights can be found in the PATENTS file in the same directory.
	 */
	
	'use strict';
	
	/**
	 * Similar to invariant but only logs a warning if the condition is not met.
	 * This can be used to log issues in development environments in critical
	 * paths. Removing the logging code for production environments will keep the
	 * same logic and follow the same code paths.
	 */
	
	var warning = function() {};
	
	if (process.env.NODE_ENV !== 'production') {
	  warning = function(condition, format, args) {
	    var len = arguments.length;
	    args = new Array(len > 2 ? len - 2 : 0);
	    for (var key = 2; key < len; key++) {
	      args[key - 2] = arguments[key];
	    }
	    if (format === undefined) {
	      throw new Error(
	        '`warning(condition, format, ...args)` requires a warning ' +
	        'message argument'
	      );
	    }
	
	    if (format.length < 10 || (/^[s\W]*$/).test(format)) {
	      throw new Error(
	        'The warning format should be able to uniquely identify this ' +
	        'warning. Please, use a more descriptive format than: ' + format
	      );
	    }
	
	    if (!condition) {
	      var argIndex = 0;
	      var message = 'Warning: ' +
	        format.replace(/%s/g, function() {
	          return args[argIndex++];
	        });
	      if (typeof console !== 'undefined') {
	        console.error(message);
	      }
	      try {
	        // This error was thrown as a convenience so that you can use this stack
	        // to find the callsite that caused this warning to fire.
	        throw new Error(message);
	      } catch(x) {}
	    }
	  };
	}
	
	module.exports = warning;
	
	/* WEBPACK VAR INJECTION */}.call(exports, __webpack_require__(23)))

/***/ },
/* 34 */
/***/ function(module, exports, __webpack_require__) {

	'use strict';
	
	exports.__esModule = true;
	
	var _extends = Object.assign || function (target) { for (var i = 1; i < arguments.length; i++) { var source = arguments[i]; for (var key in source) { if (Object.prototype.hasOwnProperty.call(source, key)) { target[key] = source[key]; } } } return target; };
	
	function _interopRequireDefault(obj) { return obj && obj.__esModule ? obj : { 'default': obj }; }
	
	var _invariant = __webpack_require__(22);
	
	var _invariant2 = _interopRequireDefault(_invariant);
	
	var _Actions = __webpack_require__(24);
	
	var _createLocation = __webpack_require__(31);
	
	var _createLocation2 = _interopRequireDefault(_createLocation);
	
	var _createHistory = __webpack_require__(27);
	
	var _createHistory2 = _interopRequireDefault(_createHistory);
	
	function createStorage(entries) {
	  return entries.filter(function (entry) {
	    return entry.state;
	  }).reduce(function (memo, entry) {
	    memo[entry.key] = entry.state;
	    return memo;
	  }, {});
	}
	
	function createMemoryHistory() {
	  var options = arguments.length <= 0 || arguments[0] === undefined ? {} : arguments[0];
	
	  if (Array.isArray(options)) {
	    options = { entries: options };
	  } else if (typeof options === 'string') {
	    options = { entries: [options] };
	  }
	
	  var history = _createHistory2['default'](_extends({}, options, {
	    getCurrentLocation: getCurrentLocation,
	    finishTransition: finishTransition,
	    cancelTransition: cancelTransition,
	    go: go
	  }));
	
	  var _options = options;
	  var entries = _options.entries;
	  var current = _options.current;
	
	  if (typeof entries === 'string') {
	    entries = [entries];
	  } else if (!Array.isArray(entries)) {
	    entries = ['/'];
	  }
	
	  entries = entries.map(function (entry) {
	    var key = history.createKey();
	
	    if (typeof entry === 'string') return { pathname: entry, key: key };
	
	    if (typeof entry === 'object' && entry) return _extends({}, entry, { key: key });
	
	    _invariant2['default'](false, 'Unable to create history entry from %s', entry);
	  });
	
	  if (current == null) {
	    current = entries.length - 1;
	  } else {
	    _invariant2['default'](current >= 0 && current < entries.length, 'Current index must be >= 0 and < %s, was %s', entries.length, current);
	  }
	
	  var storage = createStorage(entries);
	
	  function saveState(key, state) {
	    storage[key] = state;
	  }
	
	  function readState(key) {
	    return storage[key];
	  }
	
	  function getCurrentLocation() {
	    var _entries$current = entries[current];
	    var key = _entries$current.key;
	    var pathname = _entries$current.pathname;
	    var search = _entries$current.search;
	
	    var path = pathname + (search || '');
	    var state = readState(key);
	
	    return _createLocation2['default'](path, state, undefined, key);
	  }
	
	  function canGo(n) {
	    var index = current + n;
	    return index >= 0 && index < entries.length;
	  }
	
	  function go(n) {
	    if (n) {
	      _invariant2['default'](canGo(n), 'Cannot go(%s); there is not enough history', n);
	
	      current += n;
	
	      var currentLocation = getCurrentLocation();
	
	      // change action to POP
	      history.transitionTo(_extends({}, currentLocation, { action: _Actions.POP }));
	    }
	  }
	
	  function finishTransition(location) {
	    switch (location.action) {
	      case _Actions.PUSH:
	        current += 1;
	
	        // if we are not on the top of stack
	        // remove rest and push new
	        if (current < entries.length - 1) {
	          entries.splice(current);
	        }
	
	        entries.push(location);
	        saveState(location.key, location.state);
	        break;
	      case _Actions.REPLACE:
	        entries[current] = location;
	        saveState(location.key, location.state);
	        break;
	    }
	  }
	
	  function cancelTransition(location) {
	    if (location.action === _Actions.POP) {
	      var n = 0; // TODO: Figure out what n will restore current.
	      current += n;
	    }
	  }
	
	  return history;
	}
	
	exports['default'] = createMemoryHistory;
	module.exports = exports['default'];

/***/ },
/* 35 */
/***/ function(module, exports, __webpack_require__) {

	'use strict'
	
	var ko = __webpack_require__(6);
	var GalleryViewModel = __webpack_require__(36);
	
	module.exports = function (el) {
	  ko.applyBindings( new GalleryViewModel(gallerySliderConfig) );
	};

/***/ },
/* 36 */
/***/ function(module, exports, __webpack_require__) {

	/**
	 * @file
	 * Js file for Gallery Slider.
	 */
	
	'use strict';
	
	var $ = __webpack_require__(2),
	        ko = __webpack_require__(6),
	        Hammer = __webpack_require__(37),
	        config = __webpack_require__(3),
	        createHistory = __webpack_require__(19).createHistory,
	        imagePrefetcher = __webpack_require__(38);
	
	var history = createHistory();
	
	// setting global variable for Simple Reach referrer URL
	var fw_slideshow_referrer_url = "http://" + document.location.hostname + document.location.pathname;
	
	__webpack_require__(4);
	
	ko.bindingHandlers.leftArrowPress = {
	  init: function (element, valueAccessor) {
	    document.addEventListener('keyup', function (e) {
	      if (e.keyCode != 37) {
	        return;
	      }
	
	      valueAccessor()();
	    });
	  }
	};
	
	ko.bindingHandlers.rightArrowPress = {
	  init: function (element, valueAccessor) {
	    document.addEventListener('keyup', function (e) {
	      if (e.keyCode != 39) {
	        return;
	      }
	
	      valueAccessor()();
	    });
	  }
	};
	
	// For stiching the Interstitial AD after the 4th Slide on Mobile and Tablet.
	ko.bindingHandlers.interstitialad = {
	  init: function (element) {
	    $('.advertisement-mobile-gallery-interstitial-300x250-1').css({'display': 'block'});
	    $('#interstitial_ad').append('<div id="slide_ad_container"><div  class="ad-placeholder ad-refresh" id="ad-gallery_interstitial_ad" data-id="gallery_interstitial_ad" data-type="regular"></div></div>');
	    Drupal.attachBehaviors();
	  }
	};
	
	ko.bindingHandlers.swipe = {
	  init: function (element, valueAccessor) {
	    bindHammerEvent(element, 'swipe', valueAccessor());
	  }
	};
	
	ko.bindingHandlers.swipeLeft = {
	  init: function (element, valueAccessor) {
	    bindHammerEvent(element, 'swipeleft', valueAccessor());
	  }
	};
	
	ko.bindingHandlers.swipeRight = {
	  init: function (element, valueAccessor) {
	    bindHammerEvent(element, 'swiperight', valueAccessor());
	  }
	};
	
	function bindHammerEvent(element, event, handler) {
	  var hammer = new Hammer(element);
	  hammer.on(event, handler);
	}
	
	module.exports = GalleryViewModel;
	
	function GalleryViewModel(data) {
	  var self = this;
	  this.slides = data.slides;
	  this.updateAds = ko.observable();
	  this.is_clickable = true;
	  // This is based off of the data being set from the server, which is *not* 0 based.
	  this.currentSlideIndex = ko.observable(data.initial_slide_index);
	  this.refresh_time = 0;
	  if (typeof (Drupal.settings.ad_refresh_time) != "undefined") {
	    this.refresh_time = Drupal.settings.ad_refresh_time;
	  }
	  this.interstitial_ad_timeout_time = 0;
	  if (typeof (Drupal.settings.interstitial_ad_time) != "undefined") {
	    this.interstitial_ad_timeout_time = Drupal.settings.interstitial_ad_time;
	  }
	  // If the flag updateAds is undefined, the gallery has just loaded. Set flag to false and start timer.
	  if (typeof self.updateAds() === 'undefined') {
	    self.updateAds(false);
	    setTimeout(function () {
	      self.updateAds(true);
	    }, self.refresh_time);
	  }
	
	  this.currentSlideIndex.subscribe(function (newValue) {
	    if (!self.isFirstSlide()) {
	      var prevSlide = self.slides[newValue - 1];
	      imagePrefetcher(prevSlide.imgUrl);
	    }
	
	    if (!self.isLastSlide()) {
	      var nextSlide = self.slides[newValue + 1];
	      imagePrefetcher(nextSlide.imgUrl);
	    }
	
	  });
	
	  this.currentSlide = ko.pureComputed(function () {
	    return self.slides[self.currentSlideIndex()];
	  });
	
	  this.slideVideoObject = ko.pureComputed(function() {
	    var account_id = Drupal.settings.ti_amg_fwrd_gallery.account_id;
	    var player_id = Drupal.settings.ti_amg_fwrd_gallery.player_id;
	    var videoObject = "<video data-video-id=\"" + data.slides[self.currentSlideIndex()].video_id + "\"  data-account=\"" + account_id + "\" data-player=\"" + player_id + "\" data-embed=\"default\" data-application-id class=\"video-js\" data-autoplay=\"false\" controls></video>";
	    return videoObject;
	  });
	
	  this.currentSlide.subscribe(function (newValue) {
	    try {
	      localStorage.test = 2;
	    }
	catch (e) {
	      console.log('You are in Private Browsing mode');
	      return false;
	    }
	    console.log("safe history");
	    history.replaceState(null, newValue.slide_url);
	  });
	
	  this.currentSlideNum = ko.pureComputed(function () {
	    return self.currentSlideIndex() + 1;
	  });
	
	  this.currentSlideNumTotal = ko.pureComputed(function () {
	    var currentSlideIndex = data.slides[self.currentSlideIndex()].slide_number;
	    return currentSlideIndex;
	  });
	
	  this.isFirstSlide = function () {
	    return self.currentSlideIndex() === 0;
	  };
	
	  this.isLastSlide = function () {
	    if (detect_device == 'desktop') {
	      return data.slides[self.currentSlideIndex()].slide_number == data.total_slides;
	    }
	    else {
	      return self.currentSlideIndex() == self.slides.length - 1;
	    }
	  };
	
	  var meta_title = data.page_title;
	
	  this.gotoNextSlide = function () {
	    if (self.is_clickable) {
	      if (self.isLastSlide() && data.next_gallery_url) {
	        createCookie('prev_gallery', window.location.href);
	        window.location = data.next_gallery_url;
	        return;
	      }
	      self.currentSlideIndex(self.currentSlideIndex() + 1);
	      if ((data.slides[self.currentSlideIndex()].interstitial_ad == 'FALSE')) {
	        self.is_clickable = true;
	
	      }
	      else {
	        if ((data.slides[self.currentSlideIndex()].outbrain_ad) && (data.slides[self.currentSlideIndex()].outbrain_ad == 'TRUE')) {
	          $("#showSkipAd").hide();
	          gallery_end_slate_outbrain();
	        }
	        else {
	          if ((data.slides[self.currentSlideIndex()].interstitial_ad == 'TRUE') && (detect_device != 'desktop')) {
	            var ad_pos = (data.slides[self.currentSlideIndex()].slide_number) / 4;
	            var slotSettings = Drupal.settings['ad_settings_gallery_interstitial_ad'];
		    slotSettings.getAd.setPosition = ad_pos;
	            $('.advertisement-mobile-gallery-interstitial-300x250-1').css({'display': 'block'});
	            $('#interstitial_ad').append('<div id="slide_ad_container" style="position: absolute; top: 20px;"><div  class="ad-placeholder ad-refresh" id="ad-gallery_interstitial_ad" data-id="gallery_interstitial_ad" data-type="regular"></div>');
	            try {
	              time_dfp.updateCorrelator();
	              Drupal.attachBehaviors();
	            }
	            catch (err) {
	              console.log(err.message);
	            }
	
	            self.is_clickable = false;
	            $("#ad_holder").css("display","flex");
	            $(".pagination-btn--prev").find(".pagination-arrow-icon").css("opacity","0.2");
	            $(".pagination-btn--next").find(".pagination-arrow-icon").css("opacity","0.2");
	            $("#showSkipAd").hide();
	            setTimeout(function () {
	              self.is_clickable = true;
	              $("#ad_holder").hide();
	              $(".pagination-btn--prev").find(".pagination-arrow-icon").css("opacity","1");
	              $(".pagination-btn--next").find(".pagination-arrow-icon").css("opacity","1");
	              $("#showSkipAd").css("display","inline-block");
	            }, self.interstitial_ad_timeout_time);
	          }
	          else if ((data.slides[self.currentSlideIndex()].interstitial_ad == 'TRUE') && (detect_device == 'desktop')) {
	            self.currentSlideIndex(self.currentSlideIndex() + 1);
	            if ((self.slides[self.currentSlideIndex()].outbrain_ad) && (self.slides[self.currentSlideIndex()].outbrain_ad == 'TRUE')) {
	              $("#showSkipAd").hide();
	              gallery_end_slate_outbrain();
	            }
	            else {
	              self.is_clickable = true;
	            }
	          }
	        }
	      }
	      // If the flag updateAds is true, start the timer and refresh the ads.
	      if (self.updateAds()) {
	        self.updateAds(false);
	        setTimeout(function () {
	          galleryAdRefresh();
	          self.updateAds(true);
	        }, self.refresh_time);
	      }
	      if (typeof (Drupal.settings.sponsor_campaign) != "undefined") {
	        if (!Drupal.settings.sponsor_campaign.in_campaign) {
	          bottomOutbrainUpdate();
	          if (detect_device == "desktop") {
	            rightRaiOutbrainUpdate();
	          }
	          reloadGlobalOutBrainModules();
	        }
	      }
	      if (data.slides[self.currentSlideIndex()].slide_number != '') {
	        if ((data.slides[self.currentSlideIndex()].interstitial_ad == 'TRUE') && (detect_device != 'desktop')) {
	          document.title = "ad-" + data.slides[self.currentSlideIndex()].slide_number + " - " + meta_title + " | Food & Wine";
	          if (utag && typeof (window.Ti.udo_metadata) !== "undefined") {
	            window.Ti.udo_metadata.slide_title = 'Interstitial Ad';
	            window.Ti.udo_metadata.page_number = "ad-" + data.slides[self.currentSlideIndex()].slide_number;
	          }
	          $('link[rel*=canonical]').attr('href', window.location.href);
	        }
	        else {
	          var slide_url = data.slides[self.currentSlideIndex()].slide_url;
	          var sldshw_smrt_url = document.location.protocol + "//" + document.location.hostname + slide_url;
	          document.title = data.slides[self.currentSlideIndex()].slide_number + " - " + meta_title + " | Food & Wine";
	          if (utag && typeof (window.Ti.udo_metadata) !== "undefined") {
	            window.Ti.udo_metadata.slide_title = data.slides[self.currentSlideIndex()].title;
	            window.Ti.udo_metadata.page_number = data.slides[self.currentSlideIndex()].slide_number;
	            window.Ti.udo_metadata.referrer = fw_slideshow_referrer_url;
	            fw_slideshow_referrer_url = sldshw_smrt_url;
	          }
	          $('link[rel*=canonical]').attr('href', window.location.href);
	        }
	        if ((data.slides[self.currentSlideIndex()].outbrain_ad) && (data.slides[self.currentSlideIndex()].outbrain_ad == 'TRUE')) {
	          document.title = "end - " + meta_title + " | Food & Wine";
	          if (utag && typeof (window.Ti.udo_metadata) !== "undefined") {
	            window.Ti.udo_metadata.slide_title = 'End Slide';
	            window.Ti.udo_metadata.page_number = "End-" + data.slides[self.currentSlideIndex()].slide_number;
	          }
	          $('link[rel*=canonical]').attr('href', window.location.href);
	        }
	      }
	      if ((data.slides[self.currentSlideIndex()].interstitial_ad == 'FALSE')) {
	        if (typeof window.SPX === "undefined") {
	          console.log("Swoop is required to use this method");
	        }
	        else {
	          if (typeof window.SPX.contentUpdated != "undefined") {
	            window.SPX.contentUpdated(document.querySelector('.gallery'));
	          }
	        }
	      }
	      if (data.slides[self.currentSlideIndex()].video_id != '') {
	        $.getScript(Drupal.settings.ti_amg_fwrd_gallery.jumpstart_url);
	        if (typeof (bcJumpstart) !== "undefined") {
	          bcJumpstart.start(bcJumpstart.players[0]);
	        }
	      }
	      refresh_tealium_udo_tag();
	    }
	  };
	
	  this.skipAd = function () {
	    if (self.is_clickable) {
	      if (self.isLastSlide() && data.next_gallery_url) {
	        createCookie('prev_gallery', window.location.href);
	        window.location = data.next_gallery_url;
	        return;
	      }
	      self.currentSlideIndex(self.currentSlideIndex() + 1);
	      if ((data.slides[self.currentSlideIndex()].interstitial_ad == 'FALSE')) {
	        self.is_clickable = true;
	
	      }
	      else {
	        if ((data.slides[self.currentSlideIndex()].outbrain_ad) && (data.slides[self.currentSlideIndex()].outbrain_ad == 'TRUE')) {
	          $("#showSkipAd").hide();
	          gallery_end_slate_outbrain();
	        }         
	      }
	      // If the flag updateAds is true, start the timer and refresh the ads.
	      if (self.updateAds()) {
	        self.updateAds(false);
	        setTimeout(function () {
	          galleryAdRefresh();
	          self.updateAds(true);
	        }, self.refresh_time);
	      }
	      if (typeof (Drupal.settings.sponsor_campaign) != "undefined") {
	        if (!Drupal.settings.sponsor_campaign.in_campaign) {
	          bottomOutbrainUpdate();
	          if (detect_device == "desktop") {
	            rightRaiOutbrainUpdate();
	          }
	          reloadGlobalOutBrainModules();
	        }
	      }
	      if (data.slides[self.currentSlideIndex()].slide_number != '') {
	        if ((data.slides[self.currentSlideIndex()].interstitial_ad == 'TRUE') && (detect_device != 'desktop')) {
	          document.title = "ad-" + data.slides[self.currentSlideIndex()].slide_number + " - " + meta_title + " | Food & Wine";
	          if (utag && typeof (window.Ti.udo_metadata) !== "undefined") {
	            window.Ti.udo_metadata.slide_title = 'Interstitial Ad';
	            window.Ti.udo_metadata.page_number = "ad-" + data.slides[self.currentSlideIndex()].slide_number;
	          }
	          $('link[rel*=canonical]').attr('href', window.location.href);
	        }
	        else {
	          var slide_url = data.slides[self.currentSlideIndex()].slide_url;
	          var sldshw_smrt_url = document.location.protocol + "//" + document.location.hostname + slide_url;
	          document.title = data.slides[self.currentSlideIndex()].slide_number + " - " + meta_title + " | Food & Wine";
	          if (utag && typeof (window.Ti.udo_metadata) !== "undefined") {
	            window.Ti.udo_metadata.slide_title = data.slides[self.currentSlideIndex()].title;
	            window.Ti.udo_metadata.page_number = data.slides[self.currentSlideIndex()].slide_number;
	            window.Ti.udo_metadata.referrer = fw_slideshow_referrer_url;
	            fw_slideshow_referrer_url = sldshw_smrt_url;
	          }
	          $('link[rel*=canonical]').attr('href', window.location.href);
	        }
	        if ((data.slides[self.currentSlideIndex()].outbrain_ad) && (data.slides[self.currentSlideIndex()].outbrain_ad == 'TRUE')) {
	          document.title = "end - " + meta_title + " | Food & Wine";
	          if (utag && typeof (window.Ti.udo_metadata) !== "undefined") {
	            window.Ti.udo_metadata.slide_title = 'End Slide';
	            window.Ti.udo_metadata.page_number = "End-" + data.slides[self.currentSlideIndex()].slide_number;
	          }
	          $('link[rel*=canonical]').attr('href', window.location.href);
	        }
	      }
	      if ((data.slides[self.currentSlideIndex()].interstitial_ad == 'FALSE')) {
	        if (typeof window.SPX === "undefined") {
	          console.log("Swoop is required to use this method");
	        }
	        else {
	          if (typeof window.SPX.contentUpdated != "undefined") {
	            window.SPX.contentUpdated(document.querySelector('.gallery'));
	          }
	        }
	      }
	      if (data.slides[self.currentSlideIndex()].video_id != '') {
	        $.getScript(Drupal.settings.ti_amg_fwrd_gallery.jumpstart_url);
	        if (typeof (bcJumpstart) !== "undefined") {
	          bcJumpstart.start(bcJumpstart.players[0]);
	        }
	      }
	      refresh_tealium_udo_tag();
	    }
	  };
	  
	  this.gotoPrevSlide = function () {
	    if (self.is_clickable) {
	      if ($(".gallery-section-container").hasClass("outbrain-slide")) {
	        $(".gallery-section-container").removeClass("outbrain-slide");
	      }
	      if (self.isFirstSlide()) {
	        if (readCookie('prev_gallery') != '') {
	          var prev_gallery = readCookie('prev_gallery');
	          if (document.referrer == prev_gallery) {
	            eraseCookie('prev_gallery');
	            window.location = prev_gallery;
	          }
	        }
	        return;
	      }
	      self.currentSlideIndex(self.currentSlideIndex() - 1);
	      if ((data.slides[self.currentSlideIndex()].interstitial_ad == 'FALSE')) {
	        self.is_clickable = true;
	      }
	      else {
	        if ((data.slides[self.currentSlideIndex()].interstitial_ad == 'TRUE') && (detect_device != 'desktop')) {
	          var ad_pos = (data.slides[self.currentSlideIndex()].slide_number) / 4;
	          var slotSettings = Drupal.settings['ad_settings_gallery_interstitial_ad'];
	          slotSettings.getAd.setPosition = ad_pos;
	          $('.advertisement-mobile-gallery-interstitial-300x250-1').css({'display': 'block'});
	          $('#interstitial_ad').append('<div id="slide_ad_container"><div  class="ad-placeholder ad-refresh" id="ad-gallery_interstitial_ad" data-id="gallery_interstitial_ad" data-type="regular"></div>');
	          try {
	            time_dfp.updateCorrelator();
	            Drupal.attachBehaviors();
	          }
	          catch (err) {
	            console.log(err.message);
	          }
	          self.is_clickable = false;
	          $("#ad_holder").css("display","flex");
	          $(".pagination-btn--prev").find(".pagination-arrow-icon").css("opacity","0.2");
	          $(".pagination-btn--next").find(".pagination-arrow-icon").css("opacity","0.2");
	          $("#showSkipAd").hide();
	          console.log("VIKEEE");
	          console.log(self.interstitial_ad_timeout_time);
	          setTimeout(function () {
	            self.is_clickable = true;
	            $("#ad_holder").hide();
	            $(".pagination-btn--prev").find(".pagination-arrow-icon").css("opacity","1");
	            $(".pagination-btn--next").find(".pagination-arrow-icon").css("opacity","1");
	            $("#showSkipAd").css("display","inline-block");
	          }, self.interstitial_ad_timeout_time);
	        }
	        else if ((data.slides[self.currentSlideIndex()].interstitial_ad == 'TRUE') && (detect_device == 'desktop')) {
	          self.currentSlideIndex(self.currentSlideIndex() - 1);
	          self.is_clickable = true;
	        }
	      }
	      // If the flag updateAds is true, start the timer and refresh the ads.
	      if (self.updateAds()) {
	        self.updateAds(false);
	        setTimeout(function () {
	          galleryAdRefresh();
	          self.updateAds(true);
	        }, self.refresh_time);
	      }
	      if (typeof (Drupal.settings.sponsor_campaign) != "undefined") {
	        if (!Drupal.settings.sponsor_campaign.in_campaign) {
	          bottomOutbrainUpdate();
	          if (detect_device == "desktop") {
	            rightRaiOutbrainUpdate();
	          }
	          reloadGlobalOutBrainModules();
	        }
	      }
	      if (data.slides[self.currentSlideIndex()].slide_number != '') {
	        if (data.slides[self.currentSlideIndex()].slide_number == 1) {
	          document.title = meta_title + " | Food & Wine";
	          if (utag && typeof (window.Ti.udo_metadata) !== "undefined") {
	            window.Ti.udo_metadata.slide_title = data.slides[self.currentSlideIndex()].title;
	            window.Ti.udo_metadata.page_number = data.slides[self.currentSlideIndex()].slide_number;
	          }
	          $('link[rel*=canonical]').attr('href', window.location.href);
	        }
	        else {
	          if ((data.slides[self.currentSlideIndex()].interstitial_ad == 'TRUE') && (detect_device != 'desktop')) {
	            document.title = "ad-" + data.slides[self.currentSlideIndex()].slide_number + " - " + meta_title + " | Food & Wine";
	            if (utag && typeof (window.Ti.udo_metadata) !== "undefined") {
	              window.Ti.udo_metadata.slide_title = 'Interstitial Ad';
	              window.Ti.udo_metadata.page_number = "ad-" + data.slides[self.currentSlideIndex()].slide_number;
	            }
	            console.log("TEST");
	         //   $("#showSkipAd").show();
	         //   $("#ad_holder").hide();
	         //   $(".pagination-btn--prev").find(".pagination-arrow-icon").css("opacity","1");
	        //    $(".pagination-btn--next").find(".pagination-arrow-icon").css("opacity","1");
	        //    $("#showSkipAd").css("display","inline-block");
	             $('link[rel*=canonical]').attr('href', window.location.href);
	          }
	          else {
	            var slide_url = data.slides[self.currentSlideIndex()].slide_url;
	            var sldshw_smrt_url = document.location.protocol + "//" + document.location.hostname + slide_url;
	            document.title = data.slides[self.currentSlideIndex()].slide_number + " - " + meta_title + " | Food & Wine";
	            if (utag && typeof (window.Ti.udo_metadata) !== "undefined") {
	              window.Ti.udo_metadata.slide_title = data.slides[self.currentSlideIndex()].title;
	              window.Ti.udo_metadata.page_number = data.slides[self.currentSlideIndex()].slide_number;
	              window.Ti.udo_metadata.referrer = fw_slideshow_referrer_url;
	              fw_slideshow_referrer_url = sldshw_smrt_url;
	            }
	            $('link[rel*=canonical]').attr('href', window.location.href);
	          }
	        }
	      }
	      if ((data.slides[self.currentSlideIndex()].interstitial_ad == 'FALSE')) {
	        if (typeof window.SPX === "undefined") {
	          console.log("Swoop is required to use this method");
	        }
	        else {
	          if (typeof window.SPX.contentUpdated != "undefined") {
	            window.SPX.contentUpdated(document.querySelector('.gallery'));
	          }
	        }
	      }
	      if (data.slides[self.currentSlideIndex()].video_id != '') {
	        $.getScript(Drupal.settings.ti_amg_fwrd_gallery.jumpstart_url);
	        if (typeof (bcJumpstart) !== "undefined") {
	          bcJumpstart.start(bcJumpstart.players[0]);
	        }
	      }
	      refresh_tealium_udo_tag();
	    }
	  };
	}
	
	function galleryOmnitureRefresh() {
	  if (typeof (s_time) != "undefined") {
	    s_time.url = location.protocol + "//" + location.host + location.pathname;
	    s_time.pageName = Drupal.settings.omniture.pageName;
	    s_time.campaign = "";
	    s_time.eVar1 = "";
	    s_time.eVar2 = "";
	    s_time.prop4 = document.location.pathname;
	    s_time.prop5 = Drupal.settings.omniture.prop5;
	    s_time.prop6 = Drupal.settings.omniture.prop6;
	    s_time.prop7 = Drupal.settings.omniture.prop7;
	    s_time.prop9 = document.location.pathname;
	    s_time.prop10 = document.location.pathname;
	    s_time.prop11 = Drupal.settings.omniture.prop5;
	    s_time.prop13 = Drupal.settings.omniture.prop13;
	    s_time.prop15 = Drupal.settings.omniture.prop15;
	    s_time.prop16 = Drupal.settings.omniture.prop16;
	    s_time.prop17 = location.href;
	    s_time.prop20 = Drupal.settings.omniture.prop20;
	    s_code = s_time.t();
	  }
	}
	
	function bottomOutbrainUpdate() {
	  var alias_url = document.location.pathname;
	  var outbrain_markup = '';
	  outbrain_markup = '<section class="recipe_outbrain section-container"><div class="section-heading section-heading--center"><span>Sponsored Stories</span></div><div class="grid grid—6"><div class="OUTBRAIN" data-src="http://www.foodandwine.com' + alias_url + '" data-widget-id="AR_4"  data-ob-template="Food&Wine" ></div></div></section>';
	  console.log(outbrain_markup);
	  jQuery("#outbrain-wrapper-bottom").html(outbrain_markup);
	}
	
	function rightRaiOutbrainUpdate() {
	  var content_path = document.location.pathname;
	  var outbrain_markup_rightrail = '';
	  outbrain_markup_rightrail = '<div class="OUTBRAIN" data-src="http://www.foodandwine.com' + content_path + '" data-widget-id="SB_4" data-ob-template="Food&amp;Wine"></div>';
	  jQuery("#outbrain-wrapper").html(outbrain_markup_rightrail);
	}
	
	function reloadGlobalOutBrainModules() {
	  if (typeof (OBR) !== "undefined" && typeof (OBR.extern) !== "undefined" &&
	          typeof (OBR.extern.researchWidget) !== "undefined") {
	    OBR.extern.researchWidget("http://" + document.location.hostname + document.location.pathname);
	  }
	}
	
	// To refresh the gallery leaderbard and flex ad when slide moves.
	function galleryAdRefresh() {
	  var adSlots = new Array();
	  // Adding the adslot for desktop & tablet.
	  if (detect_device == 'desktop' || detect_device == 'tablet') {
	    if (jQuery('div#ad-multi_ad_leaderboard').length > 0) {
	      adSlots.push("ad-multi_ad_leaderboard");
	    }
	    if (jQuery('div#ad-ad_multiad_300x250').length > 0) {
	      adSlots.push("ad-ad_multiad_300x250");
	    }
	  }
	  // Adding the adslot for mobile.
	  if (detect_device == 'phone') {
	    if (jQuery('div#ad-mobile_ad_leaderboard').length > 0) {
	      adSlots.push("ad-mobile_ad_leaderboard");
	    }
	  }
	   
	  time_dfp.refresh(adSlots);
	}


/***/ },
/* 37 */,
/* 38 */
/***/ function(module, exports) {

	/**
	 * Keeps track of images that have been prefetched already
	 * @type {Object}
	 */
	
	var prefetchedImages = {};
	
	/**
	 * Prefetches an image from the provided imageUrl
	 * 
	 * @param  {string...} imageUrl The URL of the image to prefetch. Multiple paths can be provided as separate arguments
	 */
	module.exports = function() {
	    var allUrls = arguments,
	        url;
	
	    for (var i = 0, len = allUrls.length; i < len; i++) {
	        url = allUrls[i];
	        
	        if ( !url || hasImageBeenPrefetched(url) ) continue;
	        
	        prefetchImage(url);
	    }
	};
	
	function markAsPrefetched(imageUrl) {
	    prefetchedImages[imageUrl] = true;
	}
	
	function prefetchImage(imageUrl) {
	    var img = new Image();
	    img.src = imageUrl;
	    markAsPrefetched(imageUrl);
	}
	
	function hasImageBeenPrefetched(imageUrl) {
	    return prefetchedImages[imageUrl];
	}


/***/ },
/* 39 */
/***/ function(module, exports, __webpack_require__) {

	'use strict';
	
	var $ = __webpack_require__(2),
	    ko = __webpack_require__(6);
	
	__webpack_require__(40);
	
	module.exports = function (el) {
	  $(el).find('.phone-number').mask('(000) 000-0000', {placeholder: '(555) 555-5555'});
	
	  function ViewModel() {
	    var self = this;
	
	    this.formSubmitted = ko.observable(false);
	    this.isSubmitting = false;
	
	    this.submitForm = function(form) {
	      if (self.isSubmitting) return;
	
	      var $form = $(form),
	          $phoneNumber = $form.find('.phone-number'),
	          cleanPhoneVal = $phoneNumber.cleanVal();
	      
	      // don't submit unless we have a valid 10 digit phone number
	      if (cleanPhoneVal.length < 10) return;
	
	      // set phone number value to clean version of number
	      $phoneNumber.val(cleanPhoneVal);
	
	      self.isSubmitting = true;
	      
	      $.ajax({
	        url: form.action, 
	        data: $form.serialize(),
	        type: form.method,
	        success: function (resp) {
	          self.formSubmitted(true);
	          self.isSubmitting = false;
	        }
	      });
	    };
	  }
	
	  ko.applyBindings(new ViewModel(), el);
	};

/***/ },
/* 40 */
/***/ function(module, exports, __webpack_require__) {

	var __WEBPACK_AMD_DEFINE_FACTORY__, __WEBPACK_AMD_DEFINE_ARRAY__, __WEBPACK_AMD_DEFINE_RESULT__;/**
	 * jquery.mask.js
	 * @version: v1.13.9
	 * @author: Igor Escobar
	 *
	 * Created by Igor Escobar on 2012-03-10. Please report any bug at http://blog.igorescobar.com
	 *
	 * Copyright (c) 2012 Igor Escobar http://blog.igorescobar.com
	 *
	 * The MIT License (http://www.opensource.org/licenses/mit-license.php)
	 *
	 * Permission is hereby granted, free of charge, to any person
	 * obtaining a copy of this software and associated documentation
	 * files (the "Software"), to deal in the Software without
	 * restriction, including without limitation the rights to use,
	 * copy, modify, merge, publish, distribute, sublicense, and/or sell
	 * copies of the Software, and to permit persons to whom the
	 * Software is furnished to do so, subject to the following
	 * conditions:
	 *
	 * The above copyright notice and this permission notice shall be
	 * included in all copies or substantial portions of the Software.
	 *
	 * THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND,
	 * EXPRESS OR IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES
	 * OF MERCHANTABILITY, FITNESS FOR A PARTICULAR PURPOSE AND
	 * NONINFRINGEMENT. IN NO EVENT SHALL THE AUTHORS OR COPYRIGHT
	 * HOLDERS BE LIABLE FOR ANY CLAIM, DAMAGES OR OTHER LIABILITY,
	 * WHETHER IN AN ACTION OF CONTRACT, TORT OR OTHERWISE, ARISING
	 * FROM, OUT OF OR IN CONNECTION WITH THE SOFTWARE OR THE USE OR
	 * OTHER DEALINGS IN THE SOFTWARE.
	 */
	
	/* jshint laxbreak: true */
	/* global define, jQuery, Zepto */
	
	'use strict';
	
	// UMD (Universal Module Definition) patterns for JavaScript modules that work everywhere.
	// https://github.com/umdjs/umd/blob/master/jqueryPluginCommonjs.js
	(function (factory) {
	
	    if (true) {
	        !(__WEBPACK_AMD_DEFINE_ARRAY__ = [__webpack_require__(2)], __WEBPACK_AMD_DEFINE_FACTORY__ = (factory), __WEBPACK_AMD_DEFINE_RESULT__ = (typeof __WEBPACK_AMD_DEFINE_FACTORY__ === 'function' ? (__WEBPACK_AMD_DEFINE_FACTORY__.apply(exports, __WEBPACK_AMD_DEFINE_ARRAY__)) : __WEBPACK_AMD_DEFINE_FACTORY__), __WEBPACK_AMD_DEFINE_RESULT__ !== undefined && (module.exports = __WEBPACK_AMD_DEFINE_RESULT__));
	    } else if (typeof exports === 'object') {
	        module.exports = factory(require('jquery'));
	    } else {
	        factory(jQuery || Zepto);
	    }
	
	}(function ($) {
	
	    var Mask = function (el, mask, options) {
	
	        var p = {
	            invalid: [],
	            getCaret: function () {
	                try {
	                    var sel,
	                        pos = 0,
	                        ctrl = el.get(0),
	                        dSel = document.selection,
	                        cSelStart = ctrl.selectionStart;
	
	                    // IE Support
	                    if (dSel && navigator.appVersion.indexOf('MSIE 10') === -1) {
	                        sel = dSel.createRange();
	                        sel.moveStart('character', -p.val().length);
	                        pos = sel.text.length;
	                    }
	                    // Firefox support
	                    else if (cSelStart || cSelStart === '0') {
	                        pos = cSelStart;
	                    }
	
	                    return pos;
	                } catch (e) {}
	            },
	            setCaret: function(pos) {
	                try {
	                    if (el.is(':focus')) {
	                        var range, ctrl = el.get(0);
	
	                        range = ctrl.createTextRange();
	                        range.collapse(true);
	                        range.moveEnd('character', pos);
	                        range.moveStart('character', pos);
	                        range.select();
	                    }
	                } catch (e) {}
	            },
	            events: function() {
	                el
	                .on('keydown.mask', function(e) {
	                    el.data('mask-keycode', e.keyCode || e.which);
	                })
	                .on($.jMaskGlobals.useInput ? 'input.mask' : 'keyup.mask', p.behaviour)
	                .on('paste.mask drop.mask', function() {
	                    setTimeout(function() {
	                        el.keydown().keyup();
	                    }, 100);
	                })
	                .on('change.mask', function(){
	                    el.data('changed', true);
	                })
	                .on('blur.mask', function(){
	                    if (oldValue !== p.val() && !el.data('changed')) {
	                        el.trigger('change');
	                    }
	                    el.data('changed', false);
	                })
	                // it's very important that this callback remains in this position
	                // otherwhise oldValue it's going to work buggy
	                .on('blur.mask', function() {
	                    oldValue = p.val();
	                })
	                // select all text on focus
	                .on('focus.mask', function (e) {
	                    if (options.selectOnFocus === true) {
	                        $(e.target).select();
	                    }
	                })
	                // clear the value if it not complete the mask
	                .on('focusout.mask', function() {
	                    if (options.clearIfNotMatch && !regexMask.test(p.val())) {
	                       p.val('');
	                   }
	                });
	            },
	            getRegexMask: function() {
	                var maskChunks = [], translation, pattern, optional, recursive, oRecursive, r;
	
	                for (var i = 0; i < mask.length; i++) {
	                    translation = jMask.translation[mask.charAt(i)];
	
	                    if (translation) {
	
	                        pattern = translation.pattern.toString().replace(/.{1}$|^.{1}/g, '');
	                        optional = translation.optional;
	                        recursive = translation.recursive;
	
	                        if (recursive) {
	                            maskChunks.push(mask.charAt(i));
	                            oRecursive = {digit: mask.charAt(i), pattern: pattern};
	                        } else {
	                            maskChunks.push(!optional && !recursive ? pattern : (pattern + '?'));
	                        }
	
	                    } else {
	                        maskChunks.push(mask.charAt(i).replace(/[-\/\\^$*+?.()|[\]{}]/g, '\\$&'));
	                    }
	                }
	
	                r = maskChunks.join('');
	
	                if (oRecursive) {
	                    r = r.replace(new RegExp('(' + oRecursive.digit + '(.*' + oRecursive.digit + ')?)'), '($1)?')
	                         .replace(new RegExp(oRecursive.digit, 'g'), oRecursive.pattern);
	                }
	
	                return new RegExp(r);
	            },
	            destroyEvents: function() {
	                el.off(['input', 'keydown', 'keyup', 'paste', 'drop', 'blur', 'focusout', ''].join('.mask '));
	            },
	            val: function(v) {
	                var isInput = el.is('input'),
	                    method = isInput ? 'val' : 'text',
	                    r;
	
	                if (arguments.length > 0) {
	                    if (el[method]() !== v) {
	                        el[method](v);
	                    }
	                    r = el;
	                } else {
	                    r = el[method]();
	                }
	
	                return r;
	            },
	            getMCharsBeforeCount: function(index, onCleanVal) {
	                for (var count = 0, i = 0, maskL = mask.length; i < maskL && i < index; i++) {
	                    if (!jMask.translation[mask.charAt(i)]) {
	                        index = onCleanVal ? index + 1 : index;
	                        count++;
	                    }
	                }
	                return count;
	            },
	            caretPos: function (originalCaretPos, oldLength, newLength, maskDif) {
	                var translation = jMask.translation[mask.charAt(Math.min(originalCaretPos - 1, mask.length - 1))];
	
	                return !translation ? p.caretPos(originalCaretPos + 1, oldLength, newLength, maskDif)
	                                    : Math.min(originalCaretPos + newLength - oldLength - maskDif, newLength);
	            },
	            behaviour: function(e) {
	                e = e || window.event;
	                p.invalid = [];
	
	                var keyCode = el.data('mask-keycode');
	
	                if ($.inArray(keyCode, jMask.byPassKeys) === -1) {
	                    var caretPos    = p.getCaret(),
	                        currVal     = p.val(),
	                        currValL    = currVal.length,
	                        newVal      = p.getMasked(),
	                        newValL     = newVal.length,
	                        maskDif     = p.getMCharsBeforeCount(newValL - 1) - p.getMCharsBeforeCount(currValL - 1),
	                        changeCaret = caretPos < currValL;
	
	                    p.val(newVal);
	
	                    if (changeCaret) {
	                        // Avoid adjusting caret on backspace or delete
	                        if (!(keyCode === 8 || keyCode === 46)) {
	                            caretPos = p.caretPos(caretPos, currValL, newValL, maskDif);
	                        }
	                        p.setCaret(caretPos);
	                    }
	
	                    return p.callbacks(e);
	                }
	            },
	            getMasked: function(skipMaskChars) {
	                var buf = [],
	                    value = p.val(),
	                    m = 0, maskLen = mask.length,
	                    v = 0, valLen = value.length,
	                    offset = 1, addMethod = 'push',
	                    resetPos = -1,
	                    lastMaskChar,
	                    check;
	
	                if (options.reverse) {
	                    addMethod = 'unshift';
	                    offset = -1;
	                    lastMaskChar = 0;
	                    m = maskLen - 1;
	                    v = valLen - 1;
	                    check = function () {
	                        return m > -1 && v > -1;
	                    };
	                } else {
	                    lastMaskChar = maskLen - 1;
	                    check = function () {
	                        return m < maskLen && v < valLen;
	                    };
	                }
	
	                while (check()) {
	                    var maskDigit = mask.charAt(m),
	                        valDigit = value.charAt(v),
	                        translation = jMask.translation[maskDigit];
	
	                    if (translation) {
	                        if (valDigit.match(translation.pattern)) {
	                            buf[addMethod](valDigit);
	                             if (translation.recursive) {
	                                if (resetPos === -1) {
	                                    resetPos = m;
	                                } else if (m === lastMaskChar) {
	                                    m = resetPos - offset;
	                                }
	
	                                if (lastMaskChar === resetPos) {
	                                    m -= offset;
	                                }
	                            }
	                            m += offset;
	                        } else if (translation.optional) {
	                            m += offset;
	                            v -= offset;
	                        } else if (translation.fallback) {
	                            buf[addMethod](translation.fallback);
	                            m += offset;
	                            v -= offset;
	                        } else {
	                          p.invalid.push({p: v, v: valDigit, e: translation.pattern});
	                        }
	                        v += offset;
	                    } else {
	                        if (!skipMaskChars) {
	                            buf[addMethod](maskDigit);
	                        }
	
	                        if (valDigit === maskDigit) {
	                            v += offset;
	                        }
	
	                        m += offset;
	                    }
	                }
	
	                var lastMaskCharDigit = mask.charAt(lastMaskChar);
	                if (maskLen === valLen + 1 && !jMask.translation[lastMaskCharDigit]) {
	                    buf.push(lastMaskCharDigit);
	                }
	
	                return buf.join('');
	            },
	            callbacks: function (e) {
	                var val = p.val(),
	                    changed = val !== oldValue,
	                    defaultArgs = [val, e, el, options],
	                    callback = function(name, criteria, args) {
	                        if (typeof options[name] === 'function' && criteria) {
	                            options[name].apply(this, args);
	                        }
	                    };
	
	                callback('onChange', changed === true, defaultArgs);
	                callback('onKeyPress', changed === true, defaultArgs);
	                callback('onComplete', val.length === mask.length, defaultArgs);
	                callback('onInvalid', p.invalid.length > 0, [val, e, el, p.invalid, options]);
	            }
	        };
	
	        el = $(el);
	        var jMask = this, oldValue = p.val(), regexMask;
	
	        mask = typeof mask === 'function' ? mask(p.val(), undefined, el,  options) : mask;
	
	
	        // public methods
	        jMask.mask = mask;
	        jMask.options = options;
	        jMask.remove = function() {
	            var caret = p.getCaret();
	            p.destroyEvents();
	            p.val(jMask.getCleanVal());
	            p.setCaret(caret - p.getMCharsBeforeCount(caret));
	            return el;
	        };
	
	        // get value without mask
	        jMask.getCleanVal = function() {
	           return p.getMasked(true);
	        };
	
	       jMask.init = function(onlyMask) {
	            onlyMask = onlyMask || false;
	            options = options || {};
	
	            jMask.clearIfNotMatch  = $.jMaskGlobals.clearIfNotMatch;
	            jMask.byPassKeys       = $.jMaskGlobals.byPassKeys;
	            jMask.translation      = $.extend({}, $.jMaskGlobals.translation, options.translation);
	
	            jMask = $.extend(true, {}, jMask, options);
	
	            regexMask = p.getRegexMask();
	
	            if (onlyMask === false) {
	
	                if (options.placeholder) {
	                    el.attr('placeholder' , options.placeholder);
	                }
	
	                // this is necessary, otherwise if the user submit the form
	                // and then press the "back" button, the autocomplete will erase
	                // the data. Works fine on IE9+, FF, Opera, Safari.
	                if (el.data('mask')) {
	                  el.attr('autocomplete', 'off');
	                }
	
	                p.destroyEvents();
	                p.events();
	
	                var caret = p.getCaret();
	                p.val(p.getMasked());
	                p.setCaret(caret + p.getMCharsBeforeCount(caret, true));
	
	            } else {
	                p.events();
	                p.val(p.getMasked());
	            }
	        };
	
	        jMask.init(!el.is('input'));
	    };
	
	    $.maskWatchers = {};
	    var HTMLAttributes = function () {
	        var input = $(this),
	            options = {},
	            prefix = 'data-mask-',
	            mask = input.attr('data-mask');
	
	        if (input.attr(prefix + 'reverse')) {
	            options.reverse = true;
	        }
	
	        if (input.attr(prefix + 'clearifnotmatch')) {
	            options.clearIfNotMatch = true;
	        }
	
	        if (input.attr(prefix + 'selectonfocus') === 'true') {
	           options.selectOnFocus = true;
	        }
	
	        if (notSameMaskObject(input, mask, options)) {
	            return input.data('mask', new Mask(this, mask, options));
	        }
	    },
	    notSameMaskObject = function(field, mask, options) {
	        options = options || {};
	        var maskObject = $(field).data('mask'),
	            stringify = JSON.stringify,
	            value = $(field).val() || $(field).text();
	        try {
	            if (typeof mask === 'function') {
	                mask = mask(value);
	            }
	            return typeof maskObject !== 'object' || stringify(maskObject.options) !== stringify(options) || maskObject.mask !== mask;
	        } catch (e) {}
	    },
	    eventSupported = function(eventName) {
	        var el = document.createElement('div'), isSupported;
	
	        eventName = 'on' + eventName;
	        isSupported = (eventName in el);
	
	        if ( !isSupported ) {
	            el.setAttribute(eventName, 'return;');
	            isSupported = typeof el[eventName] === 'function';
	        }
	        el = null;
	
	        return isSupported;
	    };
	
	    $.fn.mask = function(mask, options) {
	        options = options || {};
	        var selector = this.selector,
	            globals = $.jMaskGlobals,
	            interval = globals.watchInterval,
	            watchInputs = options.watchInputs || globals.watchInputs,
	            maskFunction = function() {
	                if (notSameMaskObject(this, mask, options)) {
	                    return $(this).data('mask', new Mask(this, mask, options));
	                }
	            };
	
	        $(this).each(maskFunction);
	
	        if (selector && selector !== '' && watchInputs) {
	            clearInterval($.maskWatchers[selector]);
	            $.maskWatchers[selector] = setInterval(function(){
	                $(document).find(selector).each(maskFunction);
	            }, interval);
	        }
	        return this;
	    };
	
	    $.fn.unmask = function() {
	        clearInterval($.maskWatchers[this.selector]);
	        delete $.maskWatchers[this.selector];
	        return this.each(function() {
	            var dataMask = $(this).data('mask');
	            if (dataMask) {
	                dataMask.remove().removeData('mask');
	            }
	        });
	    };
	
	    $.fn.cleanVal = function() {
	        return this.data('mask').getCleanVal();
	    };
	
	    $.applyDataMask = function(selector) {
	        selector = selector || $.jMaskGlobals.maskElements;
	        var $selector = (selector instanceof $) ? selector : $(selector);
	        $selector.filter($.jMaskGlobals.dataMaskAttr).each(HTMLAttributes);
	    };
	
	    var globals = {
	        maskElements: 'input,td,span,div',
	        dataMaskAttr: '*[data-mask]',
	        dataMask: true,
	        watchInterval: 300,
	        watchInputs: true,
	        useInput: eventSupported('input'),
	        watchDataMask: false,
	        byPassKeys: [9, 16, 17, 18, 36, 37, 38, 39, 40, 91],
	        translation: {
	            '0': {pattern: /\d/},
	            '9': {pattern: /\d/, optional: true},
	            '#': {pattern: /\d/, recursive: true},
	            'A': {pattern: /[a-zA-Z0-9]/},
	            'S': {pattern: /[a-zA-Z]/}
	        }
	    };
	
	    $.jMaskGlobals = $.jMaskGlobals || {};
	    globals = $.jMaskGlobals = $.extend(true, {}, globals, $.jMaskGlobals);
	
	    // looking for inputs with data-mask attribute
	    if (globals.dataMask) { $.applyDataMask(); }
	
	    setInterval(function(){
	        if ($.jMaskGlobals.watchDataMask) { $.applyDataMask(); }
	    }, globals.watchInterval);
	}));


/***/ },
/* 41 */
/***/ function(module, exports, __webpack_require__) {

	'use strict';
	
	var $ = __webpack_require__(2),
	    _ = __webpack_require__(13),
	    safeMatchMedia = __webpack_require__(42),
	    config = __webpack_require__(3);
	
	__webpack_require__(43);
	__webpack_require__(44);
	
	var sticky;
	
	
	var STICKY_HEADER_OFFSET = config.offset.header;
	
	module.exports = function (el) {
	  var $el = $(el),
	      $win = $(window),
	      $siteHeader = $('.site-header'),
	      isAlt = $el.data('is-alt'),
	      menuItemClassname = 'main-menu__item',
	      parentItemClassname = 'main-menu__item--has-sub-menu',
	      submenuClassname = 'main-menu__sub-menu',
	      sideMenu = new SideMenu($('[data-js-toggle-menu-target]'), $siteHeader),
	      offset = 0;
	    
	  sticky = createStickyHeader(el);
	  
	  $('.' + submenuClassname).closest('.' + menuItemClassname).addClass(parentItemClassname);
	  $el.find('.' + parentItemClassname).on('click', function() {
	    sideMenu.toggleSubmenu($(this));
	  });
	
	  $el.find('[data-js-toggle-menu]').on('click', function() {
	    sideMenu.toggle();
	  });
	  
	  // if window is less than large width, set offset top to 0,
	  // otherwise leave room for large header to scroll off screen a bit
	  var offsetTop = $win.width() >= config.breakpoints.large ? STICKY_HEADER_OFFSET : 0;
	
	  // on window resize, update height of nav a
	  $win.on('resize', _.debounce(function() {
	    sideMenu.updateLayout();
	  }, 200));
	
	  $win.on('scroll', function(data) {
	    sideMenu.close();
	  });
	
	  safeMatchMedia(function() {
	    var mqLarge = window.matchMedia('(min-width: ' + config.breakpoints.large + 'px)'),
	        mqLtLarge = window.matchMedia('(max-width: ' + config.breakpoints.large + 'px)');
	    
	    
	    mqLarge.addListener(function mqHandler(mql) {
	      
	      if (mql.matches) {
	        // remove menu inline styles since we are above the breakpoint that
	        // needs the side menu
	        sideMenu.close();
	      }  
	       module.exports.recalcSticky(el);
	    });
	  });
	};
	
	/**
	 * Controls the site side menu. Note that this menu is the same as the 
	 * desktop width menu but with different CSS to make it appear fixed on the
	 * left of the screen.
	 */
	function SideMenu($el, $siteHeader) {
	  this.$el = $el;
	  this.$win = $(window);
	  this.$siteHeader = $siteHeader;
	  this.isOpen = false;
	  this.activeMenuClassname = 'main-menu__item--active';
	}
	
	SideMenu.classNames = {
	  opened: 'main-menu__nav--is-open'
	};
	
	SideMenu.prototype.toggle = function() {
	  var method = this.isOpen ? 'close' : 'open';
	
	  this[method]();
	};
	
	SideMenu.prototype.open = function() {
	  this.$el.addClass(SideMenu.classNames.opened);
	
	  this.updateLayout();
	  this.addScrollListener();
	  this.isOpen = true;
	};
	
	SideMenu.prototype.toggleSubmenu = function($menuItem) {
	  if (!this.isOpen || $menuItem.hasClass(this.activeMenuClassname)) return true;
	
	  $menuItem.siblings().removeClass(this.activeMenuClassname);
	  $menuItem.addClass(this.activeMenuClassname);
	};
	
	SideMenu.prototype.close = function() {
	  this.removeScrollListener();
	  this.$el.removeClass(SideMenu.classNames.opened);
	  this.$el.find('.' + this.activeMenuClassname).removeClass(this.activeMenuClassname);
	  this.isOpen = false;
	};
	
	SideMenu.prototype.updateLayout = function() {
	  this._updateTopPosition();
	  this._updateHeight();
	};
	
	SideMenu.prototype._updateHeight = function() {
	  this.$el.height( this.$win.height() - parseInt(this.$el.css('top')) );
	};
	
	SideMenu.prototype._updateTopPosition = function() {
	  // when the site header is fixed, offset().top does not 
	  // report 0 so we need to set it ourselves.
	  var offsetTop = this.$siteHeader.css('position') == 'fixed' ?
	                  0 : this.$siteHeader.offset().top - this.$win.scrollTop();
	  var _this = this;
	  this.$el.css({
	    top: _this.$siteHeader.outerHeight() + offsetTop
	  });
	};
	
	SideMenu.prototype.addScrollListener = function() {
	  var _this = this;
	
	  this.$win.on('scroll.SideMenu', _.debounce(function() {
	    _this.updateLayout();
	  }, 200));
	};
	
	SideMenu.prototype.removeScrollListener = function() {
	  this.$win.off('scroll.SideMenu');
	};
	
	module.exports.recalcSticky = function(el) {
	  sticky.destroy();
	  sticky = createStickyHeader(el);
	};
	
	function createStickyHeader(el) {
	  var offsetHeaderTop = 0;
	  if (detect_device == 'desktop') {
	    offsetHeaderTop = -55;
	  }
	  else {
	    offsetHeaderTop = 0;
	  }
	  return new Waypoint.Sticky({
	    element: el,
	    stuckClass: 'is_stuck',
	    offset: offsetHeaderTop
	  });
	}

/***/ },
/* 42 */
/***/ function(module, exports) {

	'use strict';
	
	module.exports = function safeMatchMedia(func, fallbackFunc) {
	  // ensure matchMedia is supported before calling func
	  if (typeof window.matchMedia != 'function') {
	    fallbackFunc && fallbackFunc();
	    return;
	  }
	
	  func();
	}

/***/ },
/* 43 */,
/* 44 */,
/* 45 */
/***/ function(module, exports, __webpack_require__) {

	'use strict';
	
	var $ = __webpack_require__(2),
	    _ = __webpack_require__(13),
	    safeMatchMedia = __webpack_require__(42),
	    config = __webpack_require__(3);
	
	var STICKY_HEADER_OFFSET = config.offset.header;
	
	module.exports = function (el) {
	  var $el = $(el),
	      $win = $(window),
	      $siteHeader = $('.site-header'),
	      isAlt = $el.data('is-alt'),
	      menuItemClassname = 'main-menu__item',
	      parentItemClassname = 'main-menu__item--has-sub-menu',
	      submenuClassname = 'main-menu__sub-menu',
	      sideMenuGallery = new SideMenuGallery($('[data-js-toggle-menu-target]'), $siteHeader);
	
	
	  $('.' + submenuClassname).closest('.' + menuItemClassname).addClass(parentItemClassname);
	  $el.find('.' + parentItemClassname).on('click', function() {
	    sideMenuGallery.toggleSubmenu($(this));
	  });
	
	  $el.find('[data-js-toggle-menu]').on('click', function() {
	    sideMenuGallery.toggle();
	  });
	  
	  // if window is less than large width, set offset top to 0,
	  // otherwise leave room for large header to scroll off screen a bit
	  var offsetTop = $win.width() >= config.breakpoints.large ? STICKY_HEADER_OFFSET : 0;
	
	  // on window resize, update height of nav a
	  $win.on('resize', _.debounce(function() {
	    sideMenuGallery.updateLayout();
	  }, 200));
	
	  $win.on('scroll', function(data) {
	    sideMenuGallery.close();
	  });
	};
	
	/**
	 * Controls the site side menu. Note that this menu is the same as the 
	 * desktop width menu but with different CSS to make it appear fixed on the
	 * left of the screen.
	 */
	function SideMenuGallery($el, $siteHeader) {
	  this.$el = $el;
	  this.$win = $(window);
	  this.$siteHeader = $siteHeader;
	  this.isOpen = false;
	  this.activeMenuClassname = 'main-menu__item--active';
	}
	
	SideMenuGallery.classNames = {
	  opened: 'main-menu__nav--is-open'
	};
	
	SideMenuGallery.prototype.toggle = function() {
	  var method = this.isOpen ? 'close' : 'open';
	
	  this[method]();
	};
	
	SideMenuGallery.prototype.open = function() {
	  this.$el.addClass(SideMenuGallery.classNames.opened);
	
	  this.updateLayout();
	  this.addScrollListener();
	  this.isOpen = true;
	};
	
	SideMenuGallery.prototype.toggleSubmenu = function($menuItem) {
	  if (!this.isOpen || $menuItem.hasClass(this.activeMenuClassname)) return true;
	
	  $menuItem.siblings().removeClass(this.activeMenuClassname);
	  $menuItem.addClass(this.activeMenuClassname);
	};
	
	SideMenuGallery.prototype.close = function() {
	  this.removeScrollListener();
	  this.$el.removeClass(SideMenuGallery.classNames.opened);
	  this.$el.find('.' + this.activeMenuClassname).removeClass(this.activeMenuClassname);
	  this.isOpen = false;
	};
	
	SideMenuGallery.prototype.updateLayout = function() {
	  this._updateTopPosition();
	  this._updateHeight();
	};
	
	SideMenuGallery.prototype._updateHeight = function() {
	  this.$el.height( this.$win.height() - parseInt(this.$el.css('top')) );
	};
	
	SideMenuGallery.prototype._updateTopPosition = function() {
	  // when the site header is fixed, offset().top does not 
	  // report 0 so we need to set it ourselves.
	  var offsetTop = this.$siteHeader.css('position') == 'fixed' ?
	                  0 : this.$siteHeader.offset().top - this.$win.scrollTop();
	
	  this.$el.css({
	    top: this.$siteHeader.outerHeight() + offsetTop
	  });
	};
	
	SideMenuGallery.prototype.addScrollListener = function() {
	  var _this = this;
	
	  this.$win.on('scroll.SideMenuGallery', _.debounce(function() {
	    _this.updateLayout();
	  }, 200));
	};
	
	SideMenuGallery.prototype.removeScrollListener = function() {
	  this.$win.off('scroll.SideMenuGallery');
	};

/***/ },
/* 46 */
/***/ function(module, exports, __webpack_require__) {

	'use strict';
	
	var $ = __webpack_require__(2),
	    _ = __webpack_require__(13),
	    safeMatchMedia = __webpack_require__(42),
	    config = __webpack_require__(3);
	
	__webpack_require__(47);
	
	var STICKY_HEADER_OFFSET = config.offset.header;
	
	module.exports = function (el) {
	  var $el = $(el),
	      $win = $(window),
	      $siteHeader = $('.site-header'),
	      isAlt = $el.data('is-alt'),
	      menuItemClassname = 'main-menu__item',
	      parentItemClassname = 'main-menu__item--has-sub-menu',
	      submenuClassname = 'main-menu__sub-menu',
	      sideMenu = new SideMenu($('[data-js-toggle-menu-target]'), $siteHeader);
	
	
	  $('.' + submenuClassname).closest('.' + menuItemClassname).addClass(parentItemClassname);
	  $el.find('.' + parentItemClassname).on('click', function() {
	    sideMenu.toggleSubmenu($(this));
	  });
	
	  $el.find('[data-js-toggle-menu]').on('click', function() {
	    sideMenu.toggle();
	  });
	  
	  // if window is less than large width, set offset top to 0,
	  // otherwise leave room for large header to scroll off screen a bit
	  var offsetTop = $win.width() >= config.breakpoints.large ? STICKY_HEADER_OFFSET : 0;
	
	  // on window resize, update height of nav a
	  $win.on('resize', _.debounce(function() {
	    sideMenu.updateLayout();
	  }, 200));
	
	  $win.on('scroll', function(data) {
	    sideMenu.close();
	  });
	
	  safeMatchMedia(function() {
	    var mqLarge = window.matchMedia('(min-width: ' + config.breakpoints.large + 'px)'),
	        mqLtLarge = window.matchMedia('(max-width: ' + config.breakpoints.large + 'px)');
	    
	    mqLarge.addListener(function mqHandler(mql) {
	      // disable sticky kit 
	      $el.trigger('sticky_kit:detach');
	
	      if (mql.matches) {
	        // remove menu inline styles since we are above the breakpoint that
	        // needs the side menu
	        sideMenu.close();
	
	        // reinitialize sticky header with correct top offset for full height
	        // header
	       
	      } 
	    });
	  });
	};
	
	/**
	 * Controls the site side menu. Note that this menu is the same as the 
	 * desktop width menu but with different CSS to make it appear fixed on the
	 * left of the screen.
	 */
	function SideMenu($el, $siteHeader) {
	  this.$el = $el;
	  this.$win = $(window);
	  this.$siteHeader = $siteHeader;
	  this.isOpen = false;
	  this.activeMenuClassname = 'main-menu__item--active';
	}
	
	SideMenu.classNames = {
	  opened: 'main-menu__nav--is-open'
	};
	
	SideMenu.prototype.toggle = function() {
	  var method = this.isOpen ? 'close' : 'open';
	
	  this[method]();
	};
	
	SideMenu.prototype.open = function() {
	  this.$el.addClass(SideMenu.classNames.opened);
	
	  this.updateLayout();
	  this.addScrollListener();
	  this.isOpen = true;
	};
	
	SideMenu.prototype.toggleSubmenu = function($menuItem) {
	  if (!this.isOpen || $menuItem.hasClass(this.activeMenuClassname)) return true;
	
	  $menuItem.siblings().removeClass(this.activeMenuClassname);
	  $menuItem.addClass(this.activeMenuClassname);
	};
	
	SideMenu.prototype.close = function() {
	  this.removeScrollListener();
	  this.$el.removeClass(SideMenu.classNames.opened);
	  this.$el.find('.' + this.activeMenuClassname).removeClass(this.activeMenuClassname);
	  this.isOpen = false;
	};
	
	SideMenu.prototype.updateLayout = function() {
	  this._updateTopPosition();
	  this._updateHeight();
	};
	
	SideMenu.prototype._updateHeight = function() {
	  this.$el.height( this.$win.height() - parseInt(this.$el.css('top')) );
	};
	
	SideMenu.prototype._updateTopPosition = function() {
	  // when the site header is fixed, offset().top does not 
	  // report 0 so we need to set it ourselves.
	  var offsetTop = this.$siteHeader.css('position') == 'fixed' ?
	                  0 : this.$siteHeader.offset().top - this.$win.scrollTop();
	  var _this = this;
	  this.$el.css({
	    top: _this.$siteHeader.outerHeight() + offsetTop
	  });
	};
	
	SideMenu.prototype.addScrollListener = function() {
	  var _this = this;
	
	  this.$win.on('scroll.SideMenu', _.debounce(function() {
	   
	  }, 200));
	};
	
	SideMenu.prototype.removeScrollListener = function() {
	  this.$win.off('scroll.SideMenu');
	};


/***/ },
/* 47 */
/***/ function(module, exports) {

	/*
	 Sticky-kit v1.1.2 | WTFPL | Leaf Corcoran 2015 | http://leafo.net
	*/
	(function(){var c,f;c=this.jQuery||window.jQuery;f=c(window);c.fn.stick_in_parent=function(b){var A,w,J,n,B,K,p,q,L,k,E,t;null==b&&(b={});t=b.sticky_class;B=b.inner_scrolling;E=b.recalc_every;k=b.parent;q=b.offset_top;p=b.spacer;w=b.bottoming;null==q&&(q=0);null==k&&(k=void 0);null==B&&(B=!0);null==t&&(t="is_stuck");A=c(document);null==w&&(w=!0);L=function(a){var b;return window.getComputedStyle?(a=window.getComputedStyle(a[0]),b=parseFloat(a.getPropertyValue("width"))+parseFloat(a.getPropertyValue("margin-left"))+
	parseFloat(a.getPropertyValue("margin-right")),"border-box"!==a.getPropertyValue("box-sizing")&&(b+=parseFloat(a.getPropertyValue("border-left-width"))+parseFloat(a.getPropertyValue("border-right-width"))+parseFloat(a.getPropertyValue("padding-left"))+parseFloat(a.getPropertyValue("padding-right"))),b):a.outerWidth(!0)};J=function(a,b,n,C,F,u,r,G){var v,H,m,D,I,d,g,x,y,z,h,l;if(!a.data("sticky_kit")){a.data("sticky_kit",!0);I=A.height();g=a.parent();null!=k&&(g=g.closest(k));if(!g.length)throw"failed to find stick parent";
	v=m=!1;(h=null!=p?p&&a.closest(p):c("<div />"))&&h.css("position",a.css("position"));x=function(){var d,f,e;if(!G&&(I=A.height(),d=parseInt(g.css("border-top-width"),10),f=parseInt(g.css("padding-top"),10),b=parseInt(g.css("padding-bottom"),10),n=g.offset().top+d+f,C=g.height(),m&&(v=m=!1,null==p&&(a.insertAfter(h),h.detach()),a.css({position:"",top:"",width:"",bottom:""}).removeClass(t),e=!0),F=a.offset().top-(parseInt(a.css("margin-top"),10)||0)-q,u=a.outerHeight(!0),r=a.css("float"),h&&h.css({width:L(a),
	height:u,display:a.css("display"),"vertical-align":a.css("vertical-align"),"float":r}),e))return l()};x();if(u!==C)return D=void 0,d=q,z=E,l=function(){var c,l,e,k;if(!G&&(e=!1,null!=z&&(--z,0>=z&&(z=E,x(),e=!0)),e||A.height()===I||x(),e=f.scrollTop(),null!=D&&(l=e-D),D=e,m?(w&&(k=e+u+d>C+n,v&&!k&&(v=!1,a.css({position:"fixed",bottom:"",top:d}).trigger("sticky_kit:unbottom"))),e<F&&(m=!1,d=q,null==p&&("left"!==r&&"right"!==r||a.insertAfter(h),h.detach()),c={position:"",width:"",top:""},a.css(c).removeClass(t).trigger("sticky_kit:unstick")),
	B&&(c=f.height(),u+q>c&&!v&&(d-=l,d=Math.max(c-u,d),d=Math.min(q,d),m&&a.css({top:d+"px"})))):e>F&&(m=!0,c={position:"fixed",top:d},c.width="border-box"===a.css("box-sizing")?a.outerWidth()+"px":a.width()+"px",a.css(c).addClass(t),null==p&&(a.after(h),"left"!==r&&"right"!==r||h.append(a)),a.trigger("sticky_kit:stick")),m&&w&&(null==k&&(k=e+u+d>C+n),!v&&k)))return v=!0,"static"===g.css("position")&&g.css({position:"relative"}),a.css({position:"absolute",bottom:b,top:"auto"}).trigger("sticky_kit:bottom")},
	y=function(){x();return l()},H=function(){G=!0;f.off("touchmove",l);f.off("scroll",l);f.off("resize",y);c(document.body).off("sticky_kit:recalc",y);a.off("sticky_kit:detach",H);a.removeData("sticky_kit");a.css({position:"",bottom:"",top:"",width:""});g.position("position","");if(m)return null==p&&("left"!==r&&"right"!==r||a.insertAfter(h),h.remove()),a.removeClass(t)},f.on("touchmove",l),f.on("scroll",l),f.on("resize",y),c(document.body).on("sticky_kit:recalc",y),a.on("sticky_kit:detach",H),setTimeout(l,
	0)}};n=0;for(K=this.length;n<K;n++)b=this[n],J(c(b));return this}}).call(this);


/***/ },
/* 48 */
/***/ function(module, exports, __webpack_require__) {

	'use strict';
	
	var $ = __webpack_require__(2),
	    safeMatchMedia = __webpack_require__(42),
	    config = __webpack_require__(3);
	
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

/***/ },
/* 49 */
/***/ function(module, exports, __webpack_require__) {

	'use strict';
	
	var $ = __webpack_require__(2);
	
	module.exports = function (el) {
	  $(el).css({top: Math.max(63, 143 - $(window).scrollTop()) });
	};

/***/ },
/* 50 */
/***/ function(module, exports, __webpack_require__) {

	'use strict';
	
	var $ = __webpack_require__(2),
	    config = __webpack_require__(3),
	    brightcove = window.brightcove;
	
	__webpack_require__(4);
	
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


/***/ },
/* 51 */
/***/ function(module, exports, __webpack_require__) {

	'use strict';
	
	var $ = __webpack_require__(2),
	    config = __webpack_require__(3),
	    _ = __webpack_require__(13);
	
	__webpack_require__(4);
	
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

/***/ },
/* 52 */
/***/ function(module, exports, __webpack_require__) {

	var $ = __webpack_require__(2),
	    ko = __webpack_require__(6),
	    _ = __webpack_require__(13);
	
	__webpack_require__(4);
	
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
	


/***/ },
/* 53 */
/***/ function(module, exports, __webpack_require__) {

	'use strict';
	
	var $ = __webpack_require__(2),
	    _ = __webpack_require__(13),
	    safeMatchMedia = __webpack_require__(42),
	    config = __webpack_require__(3);
	
	__webpack_require__(47);
	
	module.exports = function (el) {
	    var $el = $(el);
	
	    $el.stick_in_parent({
	        parent: 'article',
	        offset_top: config.offset.sidebar
	    });
	
	    safeMatchMedia(function() {
		    var mqMedium = window.matchMedia('(min-width: ' + config.breakpoints.medium + 'px)');
			
				mqMedium.addListener(function mqHandler(mql) {
			    if (mqMedium.matches) {
			      $el.trigger("sticky_kit:detach");
			    } else {
			    	$el.trigger("sticky_kit:recalc");
			    }
			  });
		});
	};

/***/ },
/* 54 */
/***/ function(module, exports, __webpack_require__) {

	'use strict';
	
	var $ = __webpack_require__(2),
	    _ = __webpack_require__(13),
	    safeMatchMedia = __webpack_require__(42),
	    config = __webpack_require__(3);
	
	__webpack_require__(47);
	
	module.exports = function (el) {
	    var $el = $(el);
	
	    $el.stick_in_parent({
	        parent: '.l-two-col',
	        offset_top: config.offset.gallerySidebar
	    });
	
	    safeMatchMedia(function() {
	        var mqMedium = window.matchMedia('(min-width: ' + config.breakpoints.medium + 'px)');
	        
	            mqMedium.addListener(function mqHandler(mql) {
	            if (mqMedium.matches) {
	              $el.trigger("sticky_kit:detach");
	            } else {
	                $el.trigger("sticky_kit:recalc");
	            }
	          });
	    });
	};

/***/ },
/* 55 */
/***/ function(module, exports, __webpack_require__) {

	'use strict';
	
	var $ = __webpack_require__(2),
	    _ = __webpack_require__(13),
	    safeMatchMedia = __webpack_require__(42);
	
	__webpack_require__(47);
	
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

/***/ },
/* 56 */
/***/ function(module, exports, __webpack_require__) {

	'use strict';
	
	/**
	 * Adds 'fix-to-bottom' class to an element when top of element hits top
	 * of viewport. Removes class once original element top is back in view
	 */
	
	var $ = __webpack_require__(2);
	__webpack_require__(43);
	
	var FIXED_CLASS = 'fix-to-bottom';
	
	module.exports = function(el) {
	  var $el = $(el),
	    originalTop = $el.offset().top;
	
	  $el.waypoint({
	    handler: function(direction) {
	      if (direction == 'down') {
	        $el.addClass(FIXED_CLASS);
	      }
	    }
	  });
	
	  $el.waypoint({
	    handler: function() {
	      $el.removeClass(FIXED_CLASS);
	      $('.site-header').css('top','0px');
	    },
	    offset: originalTop - 1
	  });
	};

/***/ },
/* 57 */
/***/ function(module, exports, __webpack_require__) {

	'use strict';
	
	/*-------------------------------------------- */
	/** Requires */
	/*-------------------------------------------- */
	
	var $ = __webpack_require__(2);
	__webpack_require__(7);
	
	/*-------------------------------------------- */
	/** Exports */
	/*-------------------------------------------- */
	
	module.exports = function(el) {
	  $(el).lazyload({
	    effect: 'fadeIn'
	  });
	};

/***/ },
/* 58 */
/***/ function(module, exports, __webpack_require__) {

	'use strict';
	
	var $ = __webpack_require__(2),
	    _ = __webpack_require__(13),
	    safeMatchMedia = __webpack_require__(42),
	    config = __webpack_require__(3);
	
	module.exports = function (el) {
	    var $el = $(el),
	        showMoreTriggerClass = '.show-more__trigger',
	        $showMoreTrigger = $el.find(showMoreTriggerClass),
	        $showMoreContainer = $el.find('.show-more__container'),
	        $showMoreContent = $el.find('.show-more__content'),
	        closedHeight = $showMoreContainer.height(),
	        isOpen = false;
	
	        if ($showMoreContent.height() <= closedHeight) $showMoreTrigger.hide();
	
	    $el.on('click', showMoreTriggerClass, function(e) {
	        var openHeight = $showMoreContent.height();
	
	        if (isOpen) {
	            $showMoreTrigger.text('More').removeClass('open');
	            $showMoreContainer.height(closedHeight + 'px');
	            isOpen = false;
	        } else {
	            $showMoreTrigger.text('Less').addClass('open');
	            $showMoreContainer.height(openHeight + 'px');
	            isOpen = true;
	        }
	
	        e.preventDefault();
	    });
	};

/***/ },
/* 59 */
/***/ function(module, exports, __webpack_require__) {

	'use strict';
	
	/*-------------------------------------------- */
	/** Requires */
	/*-------------------------------------------- */
	
	var $ = __webpack_require__(2);
	
	__webpack_require__(43);
	
	/*-------------------------------------------- */
	/** Exports */
	/*-------------------------------------------- */
	
	module.exports = function(el) {
	  var $el = $(el),
	      $elToShow = $($el.data('to-show'));
	
	  $(window).on('load', function() {
	    
	    $el.waypoint({
	      offset: -$el.outerHeight(),
	      handler: function(direction) {
	        if (direction == 'down') {
	          $elToShow.addClass('shown-on-scroll');
	        } else if (direction == 'up') {
	          $elToShow.removeClass('shown-on-scroll');
	        }
	      }
	    });
	  });
	
	};

/***/ }
]);
//# sourceMappingURL=main.bundle.js.map