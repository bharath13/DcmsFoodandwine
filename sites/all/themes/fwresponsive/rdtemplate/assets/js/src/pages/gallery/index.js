'use strict'

var ko = require('knockout');
var GalleryViewModel = require('./gallerySlider');

module.exports = function (el) {
  ko.applyBindings( new GalleryViewModel(gallerySliderConfig) );
};