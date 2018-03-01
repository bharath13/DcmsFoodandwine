'use strict';

require('./lib/allowBindingsBinding');
require('lazyload');
var componentRegistry = require('./lib/componentRegistry');

// enable svg sprite support in IE
var svg4everybody = require('svg4everybody');
svg4everybody();

componentRegistry.registerComponent('recipePage', require('./pages/recipe/'));
componentRegistry.registerComponent('galleryPage', require('./pages/gallery/'));
componentRegistry.registerComponent('recipeSendToPhone', require('./modules/recipeSendToPhone'));
componentRegistry.registerComponent('mainMenu', require('./modules/mainMenu'));
componentRegistry.registerComponent('mainMenuGallery', require('./modules/mainMenuGallery'));
componentRegistry.registerComponent('mainMenuBasic', require('./modules/mainMenuBasic'));
componentRegistry.registerComponent('headerSearch', require('./modules/headerSearch'));
componentRegistry.registerComponent('sideDrawerMenu', require('./modules/sideDrawerMenu'));
componentRegistry.registerComponent('smallCarousel', require('./modules/smallCarousel'));
componentRegistry.registerComponent('largeCarousel', require('./modules/largeCarousel'));
componentRegistry.registerComponent('tileCarousel', require('./modules/tileCarousel'));
componentRegistry.registerComponent('simpleRecipeCarousel', require('./modules/simpleRecipeCarousel'));
componentRegistry.registerComponent('stickyContentList', require('./modules/stickyContentList'));
componentRegistry.registerComponent('stickyRightRail', require('./modules/stickyRightRail'));
componentRegistry.registerComponent('contentListDropdown', require('./modules/contentListDropdown'));
componentRegistry.registerComponent('fixToBottom', require('./modules/fixToBottom'));
componentRegistry.registerComponent('imgLazyLoad', require('./modules/imgLazyLoad'));
componentRegistry.registerComponent('showMore', require('./modules/showMore'));
componentRegistry.registerComponent('scrollShowTrigger', require('./modules/scrollShowTrigger'));

componentRegistry.initComponents();

/**
 * Initialize FastClick
 */

 var FastClick = require('fastclick');
 FastClick.attach(document.body);