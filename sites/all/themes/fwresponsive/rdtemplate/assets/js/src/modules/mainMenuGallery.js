'use strict';

var $ = require('jquery'),
    _ = require('underscore'),
    safeMatchMedia = require('../lib/matchMedia'),
    config = require('../config');

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