<?php

/**
 * Themed SEO Module
 *
 * @param string $seo_title Title of this Themed module.
 * @param array $seo_columns Set of data for each column.
 *
 */

$theme_title = !empty($theme_title) ? $theme_title : '';
$seo_columns = !empty($seo_columns) ? $seo_columns : '';
 
?>
<section class="section-container">
    <h3 class="section-heading section-heading--center"><span><?php print $seo_title; ?></span></h3>
    <div class="grid--2">
    <?php foreach($seo_columns as $seo_column): ?>
    <div class="grid__item">
      <div class="themed-seo">
        <div class="themed-seo__featured-content text-center">
            <div class="themed-seo__list-title"><?php print $seo_column['theme_title']; ?></div>
            <div class="themed-seo__featured-content-image">
              <a href="<?php print $seo_column['featured_content']['url']; ?>"><img src="<?php print $seo_column['featured_content']['image']; ?>" /></a>
            </div>
            <div class="themed-seo__featured-content-title">
              <a href="<?php print $seo_column['featured_content']['url']; ?>"><?php print $seo_column['featured_content']['title']; ?></a>
            </div>
        </div>
        <div class="themed-seo__list-container">
          <div class="themed-seo__list-title"><?php print $seo_column['theme_title']; ?></div>
          <ul class="themed-seo__list">
            <?php foreach($seo_column['links'] as $link): ?>
            <li class="themed-seo__list-item">
              <a href="<?php print $link['url']; ?>"><?php print $link['title']; ?></a>
            </li>
            <?php endforeach; ?>
          </ul>
        </div>
      </div>
    </div>
    <?php endforeach; ?>
  </div>
</section>