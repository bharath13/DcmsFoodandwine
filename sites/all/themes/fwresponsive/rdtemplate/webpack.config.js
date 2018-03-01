var path = require('path');
var webpack = require('webpack');

module.exports = {
    cache: true,
    entry: {
        main: path.join(__dirname, 'assets/js/src/main.js'),
        vendor: [
            'underscore', 
            'knockout', 
            'slick-carousel', 
            'fastclick', 
            'waypoint',
            'waypoint-sticky',
            'lazyload',
            'hammerjs'
        ]
    },
    output: {
        path: path.join(__dirname, 'assets/js/built'),
        filename: '[name].bundle.js',
        chunkFilename: '[chunkhash].js'
    },
    externals: {
        'jquery': 'jQuery'
    },
    module: {
        noParse: [
            
        ]
    },
    resolve: {
        alias: {
            'knockout': path.join(__dirname, 'node_modules/knockout/build/output/knockout-latest.js'),
            'underscore': path.join(__dirname, 'node_modules/underscore/underscore-min.js'),
            'slick-carousel': path.join(__dirname, 'node_modules/slick-carousel/slick/slick.min.js'),
            'generator-inputmaskjs': path.join(__dirname, 'node_modules/generator-inputmaskjs/dist/generator-inputmaskjs.min.js'),
            'jquery-stickykit': path.join(__dirname, 'assets/js/src/vendor/jquery.sticky-kit.min.js'),
            'fastclick': path.join(__dirname, 'assets/js/src/vendor/fastclick.min.js'),
            'waypoint': path.join(__dirname, 'node_modules/waypoints/lib/jquery.waypoints.min.js'),
            'waypoint-sticky': path.join(__dirname, 'node_modules/waypoints/lib/shortcuts/sticky.min.js'),
            'lazyload': path.join(__dirname, 'assets/js/src/vendor/jquery.lazyload.min.js'),
            'safeWaypoints': path.join(__dirname, 'assets/js/src/modules/safeWaypoints.js')
        }
    },
    plugins: [
        new webpack.optimize.CommonsChunkPlugin('vendor', 'vendor.bundle.js')
    ]
};