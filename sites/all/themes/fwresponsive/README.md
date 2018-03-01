#Food and Wine Responsive Theme


## Installation and Setup


### Build Script

The theme uses Grunt for building various assets including JS and SASS. Before developing,
run `$ npm install` from the rdtemplate directory (where the Gruntfile.js lives). This will install all required dependencies
needed for building the JS and SASS files.

### File Organization

The theme is broken up into a few different folders:

- assets - Contains all necessary assets for the static site preview site and theme.
    - css - DO NOT EDIT ANY OF THESE FILES as they are compiled via Grunt
        - ie8.css - This CSS file should be loaded only on IE8 (or LT IE9) in order to provide all of the desktop default styles since IE8 does not support 
        media queries.
        - main.min.css - This is the CSS file that should be loaded on all other browsers. It contains all of the site styles. It is minified for production.
    - font - Contains all self-hosted fonts and icon fonts used by the site
        - icons - Contains SVGs used in a custom icon font. Any additional icons that are needed can be dropped in this directory. Running `$ grunt compile-icon-font`
        after dropping a new SVG into this folder will create an updated font as well as update the _tlicons.scss partial so you can use your new icon. It utilizes 
        [fontcustom](http://fontcustom.com/).
    - img - Contains all images required by CSS. If these are moved to a CDN, be sure to update the value of `$img-base-path` inside of `assets/sass/base/_settings.scss`
    - js - Contains compiled and src JS files
        - src - All source files live inside of this directory. This is where all JS should be added and edited.
            - modules - Any JS module/component should live in its own JS file and be required by any client code where it is needed. 
        - dist/main.bundle.js - This is the websites JS bundle. It should be included in the footer of every page. It is minified for production.
        - dist/vendor.bundle.js - This is a concatenated file of all 3rd party plugins required by the site. It **must** be included before main.bundle.js on every page.
    - sass - Any non partial file (one that doesn't start with an underscore) will be compiled into a CSS file into the css directory
        - base - Contains base styles (elements only) as well as general typography, resets and config variables.
            - base - Contains element styles only
			- breakpoints - Breakpoint settings for the common breakpoints on the site
			- colors - All sitewide color variables.
            - font-face - @font-face declarations
            - reset - Normalize.css reset
            - settings - Sitewide config variables including colors, heading sizes etc.
            - z-index - Variables that should be used for all z-index values sitewide. This avoids z-index values like 133 or 100000 :)
        - layout - Contains overall template layout styles
        - modules - Contains individual module styles broken into individual files. The majority of styles live in this directory.
        - pages - Page specific styles (these should be few as most styles will live in modules)
        - utils - General utility classes, mixins and sass functions.
        - vendor - Contains any 3rd party SASS libraries (Bourbon and Breakpoint)
        - ie8.scss - Imports main.scss and sets some global vars to flatten media queries in order for IE8 to be served desktop styles.
        - main.scss - Imports all partials and is compiled into the site's CSS file. No styles should ever be declared in this file.

- grunt - Contains the Grunt configurations for the Gruntfile
- modules - Contains individual php modules that are included throughout the static preview site templates as well as in the Drupal theme. Each module should be kept as "dumb" as possible meaning pass ALL data into the module vs. calling or referencing any global code. This allows the modules to be used in both the Drupal theme as well as in the static preview site without problem.
- _static_site - Contains the static templates used during initial development of the theme.

### Static Preview Site

The theme contains a static preview site that aids in the development of new templates / ideas. It does not rely on Drupal and can include any module that has been kept "dumb". To view the preview site, run `$ grunt preview` from the rdtemplate directory. It will open a browser tab and list the templates available for preview.

### SASS Conventions

SASS (.scss) is used as the CSS pre-processor. LibSASS is being used instead of RubySASS for speedier compile times. Though LibSASS isn't at feature parity
 with Ruby SASS, the featureset is rich enough to use on the project. It is installed for you when you run `$ npm install`.

Standard [BEM](https://en.bem.info/method/definitions/) syntax is being adhered to throughout the CSS. 
SASS makes it incredibly simple to create the necessary class names in BEM. 

Each module file contains at least one block and as many elements as needed for the block:

```
$block: my-custom-block
.#{$block} {
   color: red;
   
  &--modifier-name {
    
    // the element is visually different when the block modifier is applied
    // Have to use interpolation in order to avoid class name of .my-custom-block--modifier-name__element
    // This will create a selector of .my-custom-block--modifier-name .my-custom-block__element
    
    .#{$block}__element {
        font-size: rem(50);
    }
  }
   
  &__element {
    font-size: rem(28);
  }
    
}

// CSS Output
.my-custom-block {
  color: red;
}

.my-custom-block--modifier-name .my-custom-block__element {
  font-size: 3.125rem;
}

.my-custom-block__element {
  font-size: 1.75rem;
}
```

This avoids unnecessary specificity in selectors and keeps styles from encroaching on each other. 

##### Font Size

All font-size properties should use the rem() function, passing the pixel size as the argument. This will convert all sizes to rem
and create a fallback in pixels for IE8.

##### Bourbon & Breakpoint

Two SASS libraries are used heavily throughout the codebase. [Bourbon](http://bourbon.io/) and [Breakpoint](http://breakpoint-sass.com/).