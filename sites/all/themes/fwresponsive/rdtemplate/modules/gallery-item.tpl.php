<?php 

/**
 * Gallery Item
 *
 * @param array $items An array of Gallery items.
 * @param array $related_items An array of Related Content items, based on Content List module.
 * Mapped to: /src/sites/all/modules/custom/ti_amg_fwrd_gallery/templates/gallery-slides.tpl.php
 */

if ($is_list): $item_index = 0; foreach ($items as $item): ?>

<div class="image-wrap__single">
  <div class="image-wrap__single-interior">
    <div class="image-wrap__slide">
      <div class="image-wrap__slide-image">
        <img src="http://placehold.it/550x550" alt="">
      </div>
      <div class="image-wrap__caption">&copy; <?php print $item['caption']; ?></div>
    </div>
  </div>
  <div class="image-wrap__desc">
    <header class="image-wrap__desc-header">
      <h3 class="image-wrap__title"><a target="_blank" href="<?php print $item['content_url']; ?>"><?php print $item['title']; ?></a></h3>
    </header>
    <div class="image-wrap__desc-content">
      <p><?php print $item['description']; ?></p>
      <a target="_blank" href="<?php print $item['content_url']; ?>" class="image-wrap__link-out link-arrow"><?php print $item['url_text']; ?></a>
    </div>
  </div>
</div>

<?php $item_index++; endforeach; else: ?>

<div class="image-wrap__single">
  <div class="image-wrap__single-interior">
    <div class="image-wrap__slide" data-bind="with: currentSlide">
      <div class="image-wrap__slide-image" data-bind="swipeRight: $parent.gotoPrevSlide, swipeLeft: $parent.gotoNextSlide, click: $parent.gotoNextSlide">
        <img data-bind="attr: { src: imgUrl }" src="<?php print $items[0]['imgUrl']; ?>" alt="" />
      </div>
      <div class="image-wrap__caption">&copy; <span data-bind="text: caption"><?php print $items[0]['caption']; ?></span></div>
    </div>
    <div rel="prev" data-bind="click: gotoPrevSlide" class="pagination-btn pagination-btn--prev">
      <?php print theme('pagination-arrow'); ?>
    </div>
    <div rel="next" data-bind="click: gotoNextSlide" class="pagination-btn pagination-btn--next">
      <?php print theme('pagination-arrow'); ?>
    </div>
  </div>
  <div class="image-wrap__desc" data-bind="with: currentSlide">
    <header class="image-wrap__desc-header">
      <h3 class="image-wrap__title"><a target="_blank" data-bind="attr: { href: content_url }, text: title" href="<?php print $items[0]['content_url']; ?>"><?php print $items[0]['title']; ?></a></h3>
      <div class="image-wrap__counter"><span data-bind="text: $parent.currentSlideNum">1</span> of <span data-bind="text: $parent.slides.length"><?php print sizeof($items); ?></span></div>
    </header>
    <div class="image-wrap__desc-content">
      <span data-bind="text: description"><?php print $items[0]['description']; ?></span>
      <a target="_blank" data-bind="attr: { href: content_url }, text: url_text" href="<?php print $items[0]['content_url']; ?>" class="image-wrap__link-out link-arrow"><?php print $items[0]['url_text']; ?></a>
    </div>
  </div>
</div>

<?php endif; ?>