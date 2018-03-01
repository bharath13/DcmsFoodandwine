var path = require('path'),
    webpack = require('webpack'),
    webPackConfig = require('./webpack.config');

module.exports = function(grunt) {

    var watchFiles = [
        'assets/css/*.css',
        'assets/img/**/*',
        'assets/js/built/*.js',
        'modules/**/*',
        '_static_site/templates/**/*'
    ];

    /*-------------------------------------------- */
    /** Grunt Config */
    /*-------------------------------------------- */

    grunt.initConfig({

        /*-------------------------------------------- */
        /** SVG Sprite */
        /*-------------------------------------------- */        

        svg_sprite: {
            css_sprite: {
                expand: true,
                cwd: 'assets/img/svg-css-bg/',
                src: ['**/*.svg'],
                dest: 'assets/',
                options: {
                    mode: {
                        css: {
                            bust: false,
                            render: {
                                scss: {
                                    dest: '../sass/base/_sprite.scss'
                                }
                            },
                            dimensions: true,
                            prefix: '%%'
                        }
                    }
                }
            },

            symbol_sprite: {
                expand: true,
                cwd: 'assets/img/svg-sprite/',
                src: ['**/*.svg'],
                dest: 'assets/',
                options: {
                    mode: {
                        symbol: {
                            dest: 'img/',
                            sprite: 'spritemap-new.svg'
                        }
                    }
                }
            },
        },

        /*-------------------------------------------- */
        /** Sass */
        /*-------------------------------------------- */

        sass: {
            dev: {
                files: [
                    {src: 'assets/sass/main.scss', dest: 'assets/css/main.css'}
                ],
                options: {
                    sourceMap: true
                }
            },

            prod: {
                files: [
                    {src: 'assets/sass/main.scss', dest: 'assets/css/main.min.css'}
                ],
                options: {
                    outputStyle: 'compressed'
                }
            }
        },

        /*-------------------------------------------- */
        /** Webpack */
        /*-------------------------------------------- */

        webpack: {
            options: webPackConfig,

            dev: {
                watch: true,
                debug: true,
                devtool: '#source-map'
            },

            prod: {
                output: {
                    path: path.join(__dirname, 'assets/js/dist'),
                    filename: '[name].bundle.js',
                    chunkFilename: '[chunkhash].js'
                },

                plugins: webPackConfig.plugins.concat(
                    new webpack.optimize.UglifyJsPlugin({
                        compress: {
                            drop_console: true
                        }    
                    })
                )
            }
        },

        /*-------------------------------------------- */
        /** Browser Sync */
        /*-------------------------------------------- */

        browserSync: {
            dev: {
               bsFiles: {
                    src: watchFiles
                },
                options: {
                    watchTask: true,
                    server: true,
                    port: 8080,
                    /**
                     * Uncomment the below if you need to proxy to a local 
                     * server and delete server: true above.
                     */
                    // proxy: 'myserver.loc'
                }
            },

            previewSite: {
                bsFiles: {
                    src: watchFiles
                },
                options: {
                    watchTask: true,
                    port: 8080,
                    proxy: '<%= php.dev.options.hostname %>:<%= php.dev.options.port %>',
                    startPath: '<%= php.dev.options.open %>'
                }
            }
        },
        
        /*-------------------------------------------- */
        /** Watch */
        /*-------------------------------------------- */        

        watch: {
            sass: {
                files: 'assets/sass/**/*.scss',
                tasks: ['sass']
            },
            // watch for SVG files added to svg folders so we can recompile
            // the svg sprites
            svg_sprite: {
                files: 'assets/img/svg-sprite/**/*.svg',
                tasks: ['svg_sprite:symbol_sprite']
            },
            svg_css_sprite: {
                files: 'assets/img/svg-css-bg/**/*.svg',
                tasks: ['svg_sprite:css_sprite']
            }
        },

        /*-------------------------------------------- */
        /** PHP (For static site preview only) */
        /*-------------------------------------------- */

        php: {
            dev: {
                options: {
                    hostname: '127.0.0.1',
                    port: '3131',
                    open: '_static_site/templates/',
                    keepalive: false,
                    directives: {
                        'opcache.enable': 0
                    }
                }
            }
        }
    });

    // load ETR asset generator task
    grunt.loadTasks('grunt/generate/tasks');

    // load NPM tasks
    grunt.loadNpmTasks('grunt-svg-sprite');
    grunt.loadNpmTasks('grunt-sass');
    grunt.loadNpmTasks('grunt-webpack');
    grunt.loadNpmTasks('grunt-browser-sync');
    grunt.loadNpmTasks('grunt-contrib-watch');
    grunt.loadNpmTasks('grunt-php');

    // register custom tasks
    grunt.registerTask('default', ['browserSync:dev', 'develop', 'watch']);
    grunt.registerTask('develop', ['webpack:dev', 'sass:dev']);
    grunt.registerTask('production', ['webpack:prod', 'sass:prod']);
    grunt.registerTask('preview', ['php:dev', 'browserSync:previewSite', 'develop', 'watch']);
    // run this task if you have merge conflicts in any of the .css or .js bundles or map files
    grunt.registerTask('recompile-all', ['develop', 'production']);
};