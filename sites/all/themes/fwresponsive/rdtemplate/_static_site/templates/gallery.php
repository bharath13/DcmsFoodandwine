<?php include 'layout/header.php'; ?>
<?php print theme('header-alt'); (isset($_GET['list'])) ? $is_list = true : $is_list = false;
  $gallery_items = array(
    array(
      'title' => 'Stone Wall',
      'imgUrl' => 'http://placehold.it/500x500',
      'caption' => 'Frances Janisch',
      'description' => 'This updated version of a Stone Wall mixes rum with ginger beer and apple cider for a refreshing cocktail.',
      'slide_url' =>'slide-1',
      'content_url' => 'http://www.google.com',
      'url_text' => 'See More'
    ),
    array(
      'title' => 'Stone Wall',
      'imgUrl' => 'http://placehold.it/500x500',
      'caption' => 'Frances Janisch',
      'description' => 'This updated version of a Stone Wall mixes rum with ginger beer and apple cider for a refreshing cocktail.',
      'slide_url' => 'slide-2',
      'content_url' => 'http://www.google.com',
      'url_text' => 'Go To Recipe'
    ),
    array(
      'title' => 'Stone Wall',
      'imgUrl' => 'http://placehold.it/500x500',
      'caption' => 'Frances Janisch',
      'description' => 'This updated version of a Stone Wall mixes rum with ginger beer and apple cider for a refreshing cocktail.',
      'slide_url' =>'slide-3',
      'content_url' => 'http://www.google.com',
      'url_text' => 'Read Article'
    ),
    array(
      'title' => 'Stone Wall',
      'imgUrl' => 'http://placehold.it/500x500',
      'caption' => 'Frances Janisch',
      'description' => 'This updated version of a Stone Wall mixes rum with ginger beer and apple cider for a refreshing cocktail.',
      'slide_url' =>'slide-4',
      'content_url' => 'http://www.google.com',
      'url_text' => 'View More'
    ),
    array(
      'title' => 'Stone Wall',
      'imgUrl' => 'http://placehold.it/500x500',
      'caption' => 'Frances Janisch',
      'description' => 'This updated version of a Stone Wall mixes rum with ginger beer and apple cider for a refreshing cocktail.',
      'slide_url' =>'slide-5',
      'content_url' => 'http://www.google.com',
      'url_text' => 'Watch Video'
    ),
    array(
      'title' => 'Stone Wall',
      'imgUrl' => 'http://placehold.it/500x500',
      'caption' => 'Frances Janisch',
      'description' => 'This updated version of a Stone Wall mixes rum with ginger beer and apple cider for a refreshing cocktail.',
      'slide_url' =>'slide-6',
      'content_url' => 'http://www.google.com',
      'url_text' => 'View List'
    )
  );
?>
<div class="page-container gallery l-two-col">
  <div class="l-two-col__left">
    <div class="page-heading page-heading--alt">
      <div class="page-heading__top">
        <div class="gallery__breadcrumbs">
          <?php print theme('breadcrumbs', array(
            'links' => array(
              array(
                "label" => "Home",
                "url" => "#"
              ),
              array(
                "label" => "Wine &amp; Cocktails",
                "url" => "#"
              ),
              array(
                "label" => "Cocktails",
                "url" => "#"
              )
            )
          )); ?>
        </div>
      </div>
      <div class="page-heading__interior" data-js-component="showMore">
        <h1 class="page-heading--title">Fall Cocktails</h1>
        <div class="page-heading--desc show-more__container show-more__container--closed">
          <span class="page-heading--desc-interior show-more__content"><p>Enrique Olvera, more than any other chef, convinced the world that Mexico City is an essential pin on every global food map. Now he shares the classic places that inspire his brilliant Mexican cooking. Enrique Olvera, more than any other chef, convinced the world that Mexico City is an essential pin on every global food map. Now he shares the classic places that inspire his brilliant Mexican cooking. Enrique Olvera, more than any other chef, convinced the world that Mexico City is an essential pin on every global food map. Now he shares the classic places that inspire his brilliant Mexican cooking.</p></span>
        </div>
        <span class="show-more__trigger link-arrow">More</span>
      </div>
      <?php print theme('social-share', array(
        'url' => 'http://www.foodandwine.com/recipes/grilled-vegetables-with-green-goddess-dressing',
        'hide_print' => true
      )); ?>
    </div>
    <section class="section-container divider">
      <article class="gallery__container" data-js-component="galleryPage">
        <div class="image-wrap<?php print ($is_list) ? ' image-wrap--list' : '" data-js-component="gallerySlider'; ?>">
          <?php print theme('gallery-item', array(
          'items' => $gallery_items,
          'is_list' => $is_list
          )); ?>
        </div>
      </article>
      <?php if ($is_list): ?>
      <div class="gallery__view-as">
        <a href="<?php  print $current_url; ?>" class="gallery__view-as-link gallery__view-as--gallery">View As Gallery</a>
      </div>
      <?php else: ?>
        <div class="gallery__view-as">
          <a href="<?php  print $current_url.'?list=true' ?>" class="gallery__view-as-link gallery__view-as--list">View As List</a>
        </div>
      <?php endif; ?>
    </section>
    <section class="section-container">
      <h3 class="section-heading section-heading--center"><span>You May Also Like</span></h3>
      <div class="grid grid--6">
        <?php print theme('story-card', array(
          'type' => 'outbound',
          'title' => 'This is the title',
          'image_url' => 'http://placehold.it/190x144',
          'image_alt' => '',
          'url' => '#',
          'credit' => 'RM Healthy',
          'classes' => array('grid__item')
        )); ?>
        <?php print theme('story-card', array(
          'type' => 'outbound',
          'title' => 'This is the title',
          'image_url' => 'http://placehold.it/190x144',
          'image_alt' => '',
          'url' => '#',
          'credit' => 'RM Healthy',
          'classes' => array('grid__item')
        )); ?>
        <?php print theme('story-card', array(
          'type' => 'outbound',
          'title' => 'This is the title',
          'image_url' => 'http://placehold.it/190x144',
          'image_alt' => '',
          'url' => '#',
          'credit' => 'RM Healthy',
          'classes' => array('grid__item')
        )); ?>
        <?php print theme('story-card', array(
          'type' => 'outbound',
          'title' => 'This is the title',
          'image_url' => 'http://placehold.it/190x144',
          'image_alt' => '',
          'url' => '#',
          'credit' => 'RM Healthy',
          'classes' => array('grid__item')
        )); ?>
        <?php print theme('story-card', array(
          'type' => 'outbound',
          'title' => 'This is the title',
          'image_url' => 'http://placehold.it/190x144',
          'image_alt' => '',
          'url' => '#',
          'credit' => 'RM Healthy',
          'classes' => array('grid__item')
        )); ?>
        <?php print theme('story-card', array(
          'type' => 'outbound',
          'title' => 'This is the title',
          'image_url' => 'http://placehold.it/190x144',
          'image_alt' => '',
          'url' => '#',
          'credit' => 'RM Healthy',
          'classes' => array('grid__item')
        )); ?>
      </div>
    </section>
    <section class="section-container">
      <h3 class="section-heading section-heading--center"><span>Related Articles &amp; Galleries</span></h3>
      <div class="grid grid--6">
        <?php print theme('story-card', array(
          'type' => 'outbound',
          'title' => 'This is the title',
          'image_url' => 'http://placehold.it/190x190',
          'image_alt' => '',
          'url' => '#',
          'classes' => array('grid__item')
        )); ?>
        <?php print theme('story-card', array(
          'type' => 'outbound',
          'title' => 'This is the title',
          'image_url' => 'http://placehold.it/190x190',
          'image_alt' => '',
          'url' => '#',
          'classes' => array('grid__item')
        )); ?>
        <?php print theme('story-card', array(
          'type' => 'outbound',
          'title' => 'This is the title',
          'image_url' => 'http://placehold.it/190x190',
          'image_alt' => '',
          'url' => '#',
          'classes' => array('grid__item')
        )); ?>
        <?php print theme('story-card', array(
          'type' => 'outbound',
          'title' => 'This is the title',
          'image_url' => 'http://placehold.it/190x190',
          'image_alt' => '',
          'url' => '#',
          'classes' => array('grid__item')
        )); ?>
        <?php print theme('story-card', array(
          'type' => 'outbound',
          'title' => 'This is the title',
          'image_url' => 'http://placehold.it/190x190',
          'image_alt' => '',
          'url' => '#',
          'classes' => array('grid__item')
        )); ?>
        <?php print theme('story-card', array(
          'type' => 'outbound',
          'title' => 'This is the title',
          'image_url' => 'http://placehold.it/190x190',
          'image_alt' => '',
          'url' => '#',
          'classes' => array('grid__item')
        )); ?>
      </div>
    </section>
    <section class="section-container">
      <h3 class="section-heading section-heading--center"><span>More From Food &amp; Wine</span></h3>
      <div class="grid grid--6">
        <?php print theme('story-card', array(
          'type' => 'outbound',
          'title' => 'This is the title',
          'image_url' => 'http://placehold.it/190x190',
          'image_alt' => '',
          'url' => '#',
          'classes' => array('grid__item')
        )); ?>
        <?php print theme('story-card', array(
          'type' => 'outbound',
          'title' => 'This is the title',
          'image_url' => 'http://placehold.it/190x190',
          'image_alt' => '',
          'url' => '#',
          'classes' => array('grid__item')
        )); ?>
        <?php print theme('story-card', array(
          'type' => 'outbound',
          'title' => 'This is the title',
          'image_url' => 'http://placehold.it/190x190',
          'image_alt' => '',
          'url' => '#',
          'classes' => array('grid__item')
        )); ?>
        <?php print theme('story-card', array(
          'type' => 'outbound',
          'title' => 'This is the title',
          'image_url' => 'http://placehold.it/190x190',
          'image_alt' => '',
          'url' => '#',
          'classes' => array('grid__item')
        )); ?>
        <?php print theme('story-card', array(
          'type' => 'outbound',
          'title' => 'This is the title',
          'image_url' => 'http://placehold.it/190x190',
          'image_alt' => '',
          'url' => '#',
          'classes' => array('grid__item')
        )); ?>
        <?php print theme('story-card', array(
          'type' => 'outbound',
          'title' => 'This is the title',
          'image_url' => 'http://placehold.it/190x190',
          'image_alt' => '',
          'url' => '#',
          'classes' => array('grid__item')
        )); ?>
      </div>
    </section>
  </div>
  <!-- REMOVE INLINE STYLES! -->
  <div class="l-two-col__right" data-js-component="stickyRightRail">
    <div style="background-color: #efefef; height: 600px;" data-js-component="stickyRightRail"></div>
  </div>
</div>
<!-- Sample Gallery config -->
<script>
  var gallerySliderConfig = {
    next_gallery_url: 'http://www.google.com',
    total_slides: 11,
    initial_slide_index: 1,
    slides: <?php print json_encode($gallery_items); ?>
  };
</script>
<?php print theme('footer'); ?>
<?php include 'layout/footer.php'; ?>