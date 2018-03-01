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
 
if (!empty($links_content['col_1']) && !empty($links_content['col_2']) && !empty($links_content['col_3']) && !empty($links_content['col_4'])):
?>
<section class="section-container">
  <div class="section-heading section-heading--center">
    <h2 class="section-title"><?php print $links_content['section_title']; ?></h2>
  </div>
  <div class="grid--2">
    <div class="grid__item">
      <div class="themed-seo">
        <div class="themed-seo__featured-content text-center">
           <?php if (isset($links_content['col_2']['subsection_title'])): ?>
             <h3 class="themed-seo__list-title"><?php print $links_content['col_2']['subsection_title']; ?></h3>
           <?php endif; ?>   
            <div class="themed-seo__featured-content-image">
              <?php print $links_content['col_1']['image_link']; ?>
            </div>
            <div class="themed-seo__featured-content-title">
              <?php print $links_content['col_1']['content_link']; ?>
            </div>
        </div>
        <div class="themed-seo__list-container">
          <?php if (isset($links_content['col_2']['subsection_title'])): ?>
            <h3 class="themed-seo__list-title"><?php print $links_content['col_2']['subsection_title']; ?></h3>
          <?php endif; ?>   
          <ul class="themed-seo__list">
         
            <?php foreach($links_content['col_2']['links'] as $link): ?>
            <li class="themed-seo__list-item">
              <?php print $link['content_link']; ?>
            </li>
            <?php endforeach; ?>
          </ul>
        </div>
      </div>
    </div>
    <div class="grid__item">
      <div class="themed-seo">
        <div class="themed-seo__featured-content text-center">
          <?php if (isset($links_content['col_4']['subsection_title'])): ?>
            <h3 class="themed-seo__list-title"><?php print $links_content['col_4']['subsection_title']; ?></h3>
          <?php endif; ?>   
            <div class="themed-seo__featured-content-image">
              <?php print $links_content['col_3']['image_link']; ?>
            </div>
            <div class="themed-seo__featured-content-title">
              <?php print $links_content['col_3']['content_link']; ?>
            </div>
        </div>
        <div class="themed-seo__list-container">
          <?php if (isset($links_content['col_4']['subsection_title'])): ?>
            <h3 class="themed-seo__list-title"><?php print $links_content['col_4']['subsection_title']; ?></h3>
          <?php endif; ?>
          <ul class="themed-seo__list">
            <?php foreach($links_content['col_4']['links'] as $link): ?>
            <li class="themed-seo__list-item">
              <?php print $link['content_link']; ?>
            </li>
            <?php endforeach; ?>
          </ul>
        </div>
      </div>
    </div>
  </div>
</section>
<?php endif;
