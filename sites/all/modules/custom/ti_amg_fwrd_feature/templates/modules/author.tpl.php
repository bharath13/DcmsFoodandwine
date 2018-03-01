<?php
/**
 * Name
 *
 * @param $byline array included $published_date, $last_name, $first_name, $content_url
 *
 */
global $base_url;
$sprite_path = $base_url . '/' . drupal_get_path('module', 'ti_amg_fwrd_custom');
?>
<div class="feature__info-top__author">
    <div class="author">
        <?php if (isset($byline['image']['uri'])): ?>
          <div class="author__image">
              <img width="80" src="<?php print $byline['image']['uri']; ?>" alt="<?php print $byline['image']['alt']; ?>">
          </div>
        <?php endif; ?>
        <div class="author__info">
            <?php if (isset($byline['links'])): ?>
              <span class="author__info-name"><?php print 'By ' . $byline['links']; ?></span>
            <?php endif; ?>
            <?php if (isset($byline['published_date'])): ?>
              <span class="author__info-posted">Posted <?php print $byline['published_date']; ?></span>
            <?php endif; ?>
        </div>
    </div>
</div>
