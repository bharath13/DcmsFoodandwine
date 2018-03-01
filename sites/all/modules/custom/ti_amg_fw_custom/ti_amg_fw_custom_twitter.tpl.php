<?php

/**
 * @file:
 *
 * Holds the HTML for the 'connect with TL' block
 *
 */
?>
  <div class='ad' id='twitter-module'>
    <div id='twitter-rr-container'>
      <div id='twtr-banner'>
        <h2>Editor Tweets</h2>
      </div>
      <a class='twitter-timeline' data-widget-id='416654295895773184' href='https://twitter.com/fandw'>
        Tweets by @foodandwine
      </a>
      <script>
        !function(d, s, id) {
          var js, fjs = d.getElementsByTagName(s)[0], p = /__^http:/.test(d.location) ? 'http' : 'https';
          if (!d.getElementById(id)) {
            js = d.createElement(s);
            js.id = id;
            js.src = p + "://platform.twitter.com/widgets.js";
            fjs.parentNode.insertBefore(js, fjs);
          }
        }(document, "script", "twitter-wjs");
      </script>
    </div>
  </div>
<div class="double-divider"></div>

