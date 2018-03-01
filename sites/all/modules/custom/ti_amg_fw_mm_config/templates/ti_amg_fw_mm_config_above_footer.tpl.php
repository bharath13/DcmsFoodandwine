<?php

/**
 * @file
 * Above footer template file.
 */
?>

<div class="above-footer">
  <div class="component subscribe-callout media">
    <div class="media-img">
      <img class="evergreen-cover" src="<?php print $subscribe_cover_evergreen; ?>" />
      <img class="latest-cover" src="<?php print $subscribe_cover; ?>" />
    </div>
    <div class="media-body">
      <div class="partial tout">
        <h3><?php print $subscribe_title; ?></h3>
        <div class="tout-content"><?php print $subscribe_dek; ?></div>
        <button>
          <a href="<?php print $subscribe_link; ?>" target="_blank"> <?php print $subscribe_link_text; ?> </a>
        </button>
      </div>
    </div>
  </div>
  <div class="component newsletter-callout">
    <div class="partial tout">
      <h3><?php print $newsletter_title; ?></h3>
      <div class="tout-content"><?php print $newsletter_dek; ?></div>
      <button>
         <a href="<?php print $newsletter_link; ?><?php print $source; ?>" target="_blank"> <?php print $newsletter_link_text; ?> </a>
      </button>
    </div>
  </div>
</div>
