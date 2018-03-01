<?php include 'layout/header.php'; ?>
<?php print theme('header-alt'); ?>
<div class="page-container video l-two-col">
  <div class="l-two-col__left">
    <div class="video__header">
      <?php print theme('breadcrumbs', array(
          'links' => array(
            array(
              "label" => "Home",
              "url" => "#"
            ),
            array(
              "label" => "Video",
              "url" => "#"
            ),
            array(
              "label" => "Mad Genius Tips",
              "url" => "#"
            )
          )
        )); ?>
        <div class="main-menu__item main-menu__social">
          <a class="main-menu__item__link main-menu__social-icon main-menu__social-icon--fb" 
            href="http://www.facebook.com/foodandwine">
            <svg class="" viewBox="0 0 30 30">
              <use xlink:href="<?php print '../../assets/img/spritemap.svg#icon-facebook'; ?>"></use>
            </svg>
          </a>
          <a class="main-menu__item__link main-menu__social-icon main-menu__social-icon--twitter" 
            href="https://twitter.com/foodandwine">
            <svg class="" viewBox="0 0 30 30">
              <use xlink:href="<?php print '../../assets/img/spritemap.svg#icon-twitter'; ?>"></use>
            </svg>
          </a>
          <a class="main-menu__item__link main-menu__social-icon main-menu__social-icon--pinterest" 
            href="http://www.pinterest.com/foodandwine">
            <svg class="" viewBox="0 0 30 30">
              <use xlink:href="<?php print '../../assets/img/spritemap.svg#icon-pinterest'; ?>"></use>
            </svg>
          </a>
          <a class="main-menu__item__link main-menu__social-icon main-menu__social-icon--instagram" 
            href="http://instagram.com/foodandwine">
            <svg class="" viewBox="0 0 30 30">
              <use xlink:href="<?php print '../../assets/img/spritemap.svg#icon-instagram'; ?>"></use>
            </svg>
          </a>
        </div>
    </div>
    <article class="story-card story-card--feature-lg story-card--is-video story-card--is-video-alt">
        <div class="story-card__img-wrap">
          <img class="story-card__img" src="http://clients.expandtheroom.net/food-and-wine/redesign/placeholder-images/story-card-video.jpg">
        </div>
        <div class="story-card__content">
          <h2 class="story-card__title">Tim Love's Universal Spice Rub</h2>
          <p class="story-card__text">Fluffy, gooey cinnamon rolls are great, but F&W Test Kitchen pastry innovator Justin Chapple has something even better.</p>
        </div>            
    </article>
    <div class="content-callout content-callout--mobile">
      <?php print theme('story-card-horz', array(
          'heading' => 'Up Next',
          'title' => 'Michael Symon and Kristen Kish: Food vs. Sex',
          'url' => '#',
          'image_url' => 'http://clients.expandtheroom.net/food-and-wine/redesign/placeholder-images/video-card-1.jpg',
          'is_video' => true
        )); ?>
    </div>
    <section class="section-container">
      <h3 class="section-heading section-heading--minor">Mad Genius Tips</h3>
      
      <div class="content-carousel-container" 
           data-js-component="smallCarousel"
           data-carousel-container=".content-carousel"
           data-next-btn=".pagination-btn--next"
           data-prev-btn=".pagination-btn--prev"
           data-slides-to-show="4"
           data-center-padding="40px"
           data-center-mode="true">
        <div class="content-carousel content-carousel--contained content-carousel--wide-slides">
           <?php print theme('story-card', array(
            'title' => 'Atlanta Travel Guide',
            'url' => '#',
            'image_url' => 'http://lorempixel.com/240/160/food',
            'classes' => array('content-carousel__slide'),
            'is_video' => true
          )); ?>
          <?php print theme('story-card', array(
            'title' => 'Boston Travel Guide',
            'url' => '#',
            'image_url' => 'http://lorempixel.com/240/160/food',
            'classes' => array('content-carousel__slide'),
            'is_video' => true
          )); ?>
          <?php print theme('story-card', array(
            'title' => 'New York Travel Guide',
            'url' => '#',
            'image_url' => 'http://lorempixel.com/240/160/food',
            'classes' => array('content-carousel__slide'),
            'is_video' => true
          )); ?>
          <?php print theme('story-card', array(
            'title' => 'Charleston Travel Guide',
            'url' => '#',
            'image_url' => 'http://lorempixel.com/240/160/food',
            'classes' => array('content-carousel__slide'),
            'is_video' => true
          )); ?>
          <?php print theme('story-card', array(
            'title' => 'Chicago Travel Guide',
            'url' => '#',
            'image_url' => 'http://lorempixel.com/240/160/food',
            'classes' => array('content-carousel__slide'),
            'is_video' => true
          )); ?>
          <?php print theme('story-card', array(
            'title' => 'Austin Travel Guide',
            'url' => '#',
            'image_url' => 'http://lorempixel.com/240/160/food',
            'classes' => array('content-carousel__slide'),
            'is_video' => true
          )); ?>
          <?php print theme('story-card', array(
            'title' => 'Nashville Travel Guide',
            'url' => '#',
            'image_url' => 'http://lorempixel.com/240/160/food',
            'classes' => array('content-carousel__slide'),
            'is_video' => true
          )); ?>
          <?php print theme('story-card', array(
            'title' => 'California Travel Guide',
            'url' => '#',
            'image_url' => 'http://lorempixel.com/240/160/food',
            'classes' => array('content-carousel__slide'),
            'is_video' => true
          )); ?>
          <?php print theme('story-card', array(
            'title' => 'Missouri Travel Guide',
            'url' => '#',
            'image_url' => 'http://lorempixel.com/240/160/food',
            'classes' => array('content-carousel__slide'),
            'is_video' => true
          )); ?>
          <?php print theme('story-card', array(
            'title' => 'Nevada Travel Guide',
            'url' => '#',
            'image_url' => 'http://lorempixel.com/240/160/food',
            'classes' => array('content-carousel__slide'),
            'is_video' => true
          )); ?>
        </div>
        <div class="pagination-btn pagination-btn--prev">
          <?php print theme('pagination-arrow'); ?>
        </div>
        <div class="pagination-btn pagination-btn--next">
          <?php print theme('pagination-arrow'); ?>
        </div>
      </div>
      <a href="#" class="btn btn--arrow">See More Mad Genius Tips</a>
    </section>
  </div>
  <!-- REMOVE INLINE STYLES! -->
  <div class="l-two-col__right" data-js-component="stickyRightRail">
    <div class="content-callout content-callout--desktop">
      <h4 class="section-heading section-heading--minor content-callout-heading">Up Next</h4>
      <?php print theme('story-card', array(
          'title' => 'Michael Symon and Kristen Kish: Food vs. Sex',
          'url' => '#',
          'image_url' => 'http://clients.expandtheroom.net/food-and-wine/redesign/placeholder-images/video-card-1.jpg',
          'is_video' => true
        )); ?>
    </div>
    <div style="background-color: #efefef; height: 600px;"></div>
  </div>
</div>
<div class="page-container">
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
</div>
<?php print theme('footer'); ?>
<?php include 'layout/footer.php'; ?>