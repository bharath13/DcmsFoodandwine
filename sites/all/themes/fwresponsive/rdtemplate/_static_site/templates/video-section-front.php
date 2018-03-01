<?php include 'layout/header.php'; ?>
<?php print theme('header'); ?>
<div class="page-container page-heading">
  <div class="breadcrumbs--left">
    <?php print theme('breadcrumbs', array(
      'links' => array(
        array(
          "label" => "Home",
          "url" => "#"
        ),
        array(
          "label" => "Video",
          "url" => "#"
        )
      )
    )); ?>
  </div>
  <div class="page-heading__interior">
    <h2 class="page-heading--title">Video</h2>
  </div>
</div>
<section class="section-container">
  <div class="content-carousel-container" 
       data-js-component="largeCarousel"
       data-carousel-container=".content-carousel"
       data-next-btn=".pagination-btn--next"
       data-prev-btn=".pagination-btn--prev">
    <div class="content-carousel content-carousel--focus-center">

      <?php print theme('hero-feature', array(
        'url' => '#',
        'title' => 'Beautiful Places to Stay in Italy',
        'dek' => 'This is the first dek to ever be written',
        'image_url' => 'http://clients.expandtheroom.net/food-and-wine/redesign/placeholder-images/large-carousel-img.jpg',
        'classes' => array('content-carousel__slide', 'hero-feature--video')
      )); ?>

      <?php print theme('hero-feature', array(
        'url' => '#',
        'title' => 'Beautiful Places to Stay in Italy',
        'dek' => 'This is the first dek to ever be written',
        'image_url' => 'http://clients.expandtheroom.net/food-and-wine/redesign/placeholder-images/large-carousel-img.jpg',
        'classes' => array('content-carousel__slide', 'hero-feature--video')
      )); ?>

      <?php print theme('hero-feature', array(
        'url' => '#',
        'title' => 'Beautiful Places to Stay in Italy',
        'dek' => 'This is the first dek to ever be written',
        'image_url' => 'http://clients.expandtheroom.net/food-and-wine/redesign/placeholder-images/large-carousel-img.jpg',
        'classes' => array('content-carousel__slide', 'hero-feature--video')
      )); ?>

      <?php print theme('hero-feature', array(
        'url' => '#',
        'title' => 'Beautiful Places to Stay in Italy',
        'dek' => 'This is the first dek to ever be written',
        'image_url' => 'http://clients.expandtheroom.net/food-and-wine/redesign/placeholder-images/large-carousel-img.jpg',
        'classes' => array('content-carousel__slide', 'hero-feature--video')
      )); ?>
    </div>

    <div class="pagination-btn pagination-btn--prev">
      <?php print theme('pagination-arrow'); ?>
    </div>
    <div class="pagination-btn pagination-btn--next">
      <?php print theme('pagination-arrow'); ?>
    </div>
  </div>
</section>
<div class="page-container">
  <div class="l-two-col l-two-col--landing section-container video-channels">
    <div class="l-two-col__left">
      <section>
        <h3 class="section-heading section-heading--center"><span>F&amp;W Video Series</span></h3>
        
        <div class="grid-3-up video-channels__row">
          <header class="section-heading-container">
            <h4 class="section-heading section-heading--minor">Mad Genius Tips</h4>
            <p class="section-heading-desc">Lorem ipsum dolor sit amet, consectetur adipiscing elit. Duis eget imperdiet eret.</p>
          </header>
          <div class="grid-row">
            <?php print theme('story-card', array(
              'type' => 'feature',
              'title' => 'Kristen Kish\'s Favorite Childhood Dishes',
              'url' => '#',
              'image_url' => 'http://lorempixel.com/280/160/food',
              'classes' => array('grid-3-up__item'),
              'is_video' => true
            )); ?>

            <?php print theme('story-card', array(
              'type' => 'feature',
              'title' => 'Wine Punch with Melon Ice Cubes',
              'url' => '#',
              'image_url' => 'http://lorempixel.com/280/160/food',
              'classes' => array('grid-3-up__item'),
              'is_video' => true
            )); ?>

            <?php print theme('story-card', array(
              'type' => 'feature',
              'title' => 'A Bluegrass Classic Gets the Burger Treatment',
              'url' => '#',
              'image_url' => 'http://lorempixel.com/280/160/food',
              'classes' => array('grid-3-up__item'),
              'is_video' => true
            )); ?>
          </div>
          <div class="centered">
            <a href="#" class="btn btn--arrow">See all in Mad Genius Tips</a>
          </div>
        </div>
        <div class="grid-3-up video-channels__row">
          <header class="section-heading-container">
            <h4 class="section-heading section-heading--minor">America's Best Artisans</h4>
            <p class="section-heading-desc">Lorem ipsum dolor sit amet, consectetur adipiscing elit. Duis eget imperdiet eret.</p>
          </header>
          <div class="grid-row">
            <?php print theme('story-card', array(
              'type' => 'feature',
              'title' => 'Kristen Kish\'s Favorite Childhood Dishes',
              'url' => '#',
              'image_url' => 'http://lorempixel.com/280/160/food',
              'classes' => array('grid-3-up__item'),
              'is_video' => true
            )); ?>

            <?php print theme('story-card', array(
              'type' => 'feature',
              'title' => 'Wine Punch with Melon Ice Cubes',
              'url' => '#',
              'image_url' => 'http://lorempixel.com/280/160/food',
              'classes' => array('grid-3-up__item'),
              'is_video' => true
            )); ?>

            <?php print theme('story-card', array(
              'type' => 'feature',
              'title' => 'A Bluegrass Classic Gets the Burger Treatment',
              'url' => '#',
              'image_url' => 'http://lorempixel.com/280/160/food',
              'classes' => array('grid-3-up__item'),
              'is_video' => true
            )); ?>
          </div>
          <div class="centered">
            <a href="#" class="btn btn--arrow">See all in America's Best Artisans</a>
          </div>
        </div>
        <div class="grid-3-up video-channels__row">
          <header class="section-heading-container">
            <h4 class="section-heading section-heading--minor">Chefsteps</h4>
            <p class="section-heading-desc">Lorem ipsum dolor sit amet, consectetur adipiscing elit. Duis eget imperdiet eret.</p>
          </header>
          <div class="grid-row">
            <?php print theme('story-card', array(
              'type' => 'feature',
              'title' => 'Kristen Kish\'s Favorite Childhood Dishes',
              'url' => '#',
              'image_url' => 'http://lorempixel.com/280/160/food',
              'classes' => array('grid-3-up__item'),
              'is_video' => true
            )); ?>

            <?php print theme('story-card', array(
              'type' => 'feature',
              'title' => 'Wine Punch with Melon Ice Cubes',
              'url' => '#',
              'image_url' => 'http://lorempixel.com/280/160/food',
              'classes' => array('grid-3-up__item'),
              'is_video' => true
            )); ?>

            <?php print theme('story-card', array(
              'type' => 'feature',
              'title' => 'A Bluegrass Classic Gets the Burger Treatment',
              'url' => '#',
              'image_url' => 'http://lorempixel.com/280/160/food',
              'classes' => array('grid-3-up__item'),
              'is_video' => true
            )); ?>
          </div>
          <div class="centered">
            <a href="#" class="btn btn--arrow">See all in Chefsteps</a>
          </div>
        </div>
        <div class="grid-3-up video-channels__row">
          <header class="section-heading-container">
            <h4 class="section-heading section-heading--minor">FWX: Stacked</h4>
            <p class="section-heading-desc">Lorem ipsum dolor sit amet, consectetur adipiscing elit. Duis eget imperdiet eret.</p>
          </header>
          <div class="grid-row">
            <?php print theme('story-card', array(
              'type' => 'feature',
              'title' => 'Kristen Kish\'s Favorite Childhood Dishes',
              'url' => '#',
              'image_url' => 'http://lorempixel.com/280/160/food',
              'classes' => array('grid-3-up__item'),
              'is_video' => true
            )); ?>

            <?php print theme('story-card', array(
              'type' => 'feature',
              'title' => 'Wine Punch with Melon Ice Cubes',
              'url' => '#',
              'image_url' => 'http://lorempixel.com/280/160/food',
              'classes' => array('grid-3-up__item'),
              'is_video' => true
            )); ?>

            <?php print theme('story-card', array(
              'type' => 'feature',
              'title' => 'A Bluegrass Classic Gets the Burger Treatment',
              'url' => '#',
              'image_url' => 'http://lorempixel.com/280/160/food',
              'classes' => array('grid-3-up__item'),
              'is_video' => true
            )); ?>
          </div>
          <div class="centered">
            <a href="#" class="btn btn--arrow">See all in FWX: Stacked</a>
          </div>
        </div>
        <div class="grid-3-up video-channels__row">
          <header class="section-heading-container">
            <h4 class="section-heading section-heading--minor">Chefs Feed</h4>
            <p class="section-heading-desc">Lorem ipsum dolor sit amet, consectetur adipiscing elit. Duis eget imperdiet eret.</p>
          </header>
          <div class="grid-row">
            <?php print theme('story-card', array(
              'type' => 'feature',
              'title' => 'Kristen Kish\'s Favorite Childhood Dishes',
              'url' => '#',
              'image_url' => 'http://lorempixel.com/280/160/food',
              'classes' => array('grid-3-up__item'),
              'is_video' => true
            )); ?>

            <?php print theme('story-card', array(
              'type' => 'feature',
              'title' => 'Wine Punch with Melon Ice Cubes',
              'url' => '#',
              'image_url' => 'http://lorempixel.com/280/160/food',
              'classes' => array('grid-3-up__item'),
              'is_video' => true
            )); ?>

            <?php print theme('story-card', array(
              'type' => 'feature',
              'title' => 'A Bluegrass Classic Gets the Burger Treatment',
              'url' => '#',
              'image_url' => 'http://lorempixel.com/280/160/food',
              'classes' => array('grid-3-up__item'),
              'is_video' => true
            )); ?>
          </div>
          <div class="centered">
            <a href="#" class="btn btn--arrow">See all in Chefs Feed</a>
          </div>
        </div>
        <div class="grid-3-up video-channels__row">
          <header class="section-heading-container">
            <h4 class="section-heading section-heading--minor">Pull The Cork</h4>
            <p class="section-heading-desc">Lorem ipsum dolor sit amet, consectetur adipiscing elit. Duis eget imperdiet eret.</p>
          </header>
          <div class="grid-row">
            <?php print theme('story-card', array(
              'type' => 'feature',
              'title' => 'Kristen Kish\'s Favorite Childhood Dishes',
              'url' => '#',
              'image_url' => 'http://lorempixel.com/280/160/food',
              'classes' => array('grid-3-up__item'),
              'is_video' => true
            )); ?>

            <?php print theme('story-card', array(
              'type' => 'feature',
              'title' => 'Wine Punch with Melon Ice Cubes',
              'url' => '#',
              'image_url' => 'http://lorempixel.com/280/160/food',
              'classes' => array('grid-3-up__item'),
              'is_video' => true
            )); ?>

            <?php print theme('story-card', array(
              'type' => 'feature',
              'title' => 'A Bluegrass Classic Gets the Burger Treatment',
              'url' => '#',
              'image_url' => 'http://lorempixel.com/280/160/food',
              'classes' => array('grid-3-up__item'),
              'is_video' => true
            )); ?>
          </div>
          <div class="centered">
            <a href="#" class="btn btn--arrow">See all in Pull The Cork</a>
          </div>
        </div>
        <div class="grid-3-up video-channels__row">
          <header class="section-heading-container">
            <h4 class="section-heading section-heading--minor">Chefs In Conversation</h4>
            <p class="section-heading-desc">Lorem ipsum dolor sit amet, consectetur adipiscing elit. Duis eget imperdiet eret.</p>
          </header>
          <div class="grid-row">
            <?php print theme('story-card', array(
              'type' => 'feature',
              'title' => 'Kristen Kish\'s Favorite Childhood Dishes',
              'url' => '#',
              'image_url' => 'http://lorempixel.com/280/160/food',
              'classes' => array('grid-3-up__item'),
              'is_video' => true
            )); ?>

            <?php print theme('story-card', array(
              'type' => 'feature',
              'title' => 'Wine Punch with Melon Ice Cubes',
              'url' => '#',
              'image_url' => 'http://lorempixel.com/280/160/food',
              'classes' => array('grid-3-up__item'),
              'is_video' => true
            )); ?>

            <?php print theme('story-card', array(
              'type' => 'feature',
              'title' => 'A Bluegrass Classic Gets the Burger Treatment',
              'url' => '#',
              'image_url' => 'http://lorempixel.com/280/160/food',
              'classes' => array('grid-3-up__item'),
              'is_video' => true
            )); ?>
          </div>
          <div class="centered">
            <a href="#" class="btn btn--arrow">See all in Chefs In Conversation</a>
          </div>
        </div>
        <div class="grid-3-up video-channels__row">
          <header class="section-heading-container">
            <h4 class="section-heading section-heading--minor">F&amp;W Classic in Aspen</h4>
            <p class="section-heading-desc">Lorem ipsum dolor sit amet, consectetur adipiscing elit. Duis eget imperdiet eret.</p>
          </header>
          <div class="grid-row">
            <?php print theme('story-card', array(
              'type' => 'feature',
              'title' => 'Kristen Kish\'s Favorite Childhood Dishes',
              'url' => '#',
              'image_url' => 'http://lorempixel.com/280/160/food',
              'classes' => array('grid-3-up__item'),
              'is_video' => true
            )); ?>

            <?php print theme('story-card', array(
              'type' => 'feature',
              'title' => 'Wine Punch with Melon Ice Cubes',
              'url' => '#',
              'image_url' => 'http://lorempixel.com/280/160/food',
              'classes' => array('grid-3-up__item'),
              'is_video' => true
            )); ?>

            <?php print theme('story-card', array(
              'type' => 'feature',
              'title' => 'A Bluegrass Classic Gets the Burger Treatment',
              'url' => '#',
              'image_url' => 'http://lorempixel.com/280/160/food',
              'classes' => array('grid-3-up__item'),
              'is_video' => true
            )); ?>
          </div>
          <div class="centered">
            <a href="#" class="btn btn--arrow">See all in F&amp;W Classic in Aspen</a>
          </div>
        </div>
      </section>
    </div>
    
    <div class="l-two-col__right">
      <div class="ad ad--300x600 ad--has-label">
        <img src="http://clients.expandtheroom.net/food-and-wine/redesign/placeholder-images/300x600.jpg" alt="">
      </div>

      <?php print theme('highlight-list', array(
        'title' => 'Most Watched',
        'items' => array(
          array(
            'title' => '25 Summer Beach Essentials', 
            'image_url' => 'http://lorempixel.com/280/160/food',
            'data' => '3.8K Views',
            'data_type' => 'views'
          ),
          array(
            'title' => 'Bargain Bordeaux Travel',
            'image_url' => 'http://lorempixel.com/280/160/food',
            'data' => '2.7K Views',
            'data_type' => 'views'
          ),
          array(
            'title' => 'Tim Love\'s Fourth of July Recipes',
            'image_url' => 'http://lorempixel.com/280/160/food',
            'data' => '2.2K Views',
            'data_type' => 'views'
          ),
          array(
            'title' => 'Wine Pairings for Chicken',
            'image_url' => 'http://lorempixel.com/280/160/food',
            'data' => '1.9K Views',
            'data_type' => 'views'
          ),
          array(
            'title' => '9 Summer Granitas You Should Definitely Be Making',
            'image_url' => 'http://lorempixel.com/280/160/food',
            'data' => '1.8K Views',
            'data_type' => 'views'
          ),
        )
      )); ?>
    </div>
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