'use strict';

var $ = require('jquery'),
    _ = require('underscore'),
    safeMatchMedia = require('../lib/matchMedia'),
    config = require('../config');

require('waypoint');
require('waypoint-sticky');

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