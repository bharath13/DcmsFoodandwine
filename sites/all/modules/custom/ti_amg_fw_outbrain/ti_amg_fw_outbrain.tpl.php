<?php

/**
 * @file
 * Holds the HTML for the Outbrain Block.
 */
// Building the site URL.
$site_url = 'http://www.foodandwine.com' . base_path() . request_path();
?>
<div class="OUTBRAIN" data-src="<?php print $site_url; ?>" data-widget-id="AR_1"
     data-ob-template="Food&Wine" ></div>
