<?php

/**
 * @file
 * Outbrain module Redesign params: $widget_id, $title (optional)
 */
// Building the site URL.
if($carousel_slide_url != '') {
    $site_url = 'http://www.foodandwine.com/' . $carousel_slide_url;
}
else {
    $site_url = 'http://www.foodandwine.com' . base_path() . request_path();
}
?>

<div class="OUTBRAIN" data-src="<?php print $site_url; ?>"
  data-widget-id="<?php print ($widget_id) ?>"
  data-ob-template="Food&Wine" ></div>

<?php if ($widget_id == "AR_7"): ?>

  </div>

<?php endif;
