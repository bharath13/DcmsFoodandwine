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
