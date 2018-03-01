<?php

/**
 * @file:
 *
 * Holds the HTML for the 'connect with TL' block
 *
 */

$widget_id = (isset($widget_id)) ? $widget_id : 'SB_3';
?>

<div id = 'ob-module'>
  <div id = 'ob-like-header'>
    You might also like
  </div>
  <div class = 'OUTBRAIN' data-ob-template = 'Food&amp;Wine' data-src = 'http://www.foodandwine.com/' 
    data-widget-id = '<?php print $widget_id; ?>'>
    <script async = 'async' src = 'http://widgets.outbrain.com/outbrain.js' type = 'text/javascript'></script>
  </div>
</div>
<div class="double-divider"></div>

