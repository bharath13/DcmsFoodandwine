<?php include 'layout/header.php'; ?>

<?php print theme('hero-feature', array(
  'is_fullscreen' => true,
  'url' => '#',
  'title' => 'David Chang:<br>Vegetarian Korean Dishes',
  'dek' => 'To briefly escape his frantic life, pork-centric chef David Chang heads to South Korea to learn from some vegetarian Buddhist nuns.',
  'image_url' => 'http://clients.expandtheroom.net/food-and-wine/redesign/placeholder-images/david-chang.jpg'
)); ?>

<?php print theme('header'); ?>

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
        'image_url' => 'http://clients.expandtheroom.net/food-and-wine/redesign/placeholder-images/large-carousel-img.jpg',
        'classes' => array('content-carousel__slide')
      )); ?>

      <?php print theme('hero-feature', array(
        'url' => '#',
        'title' => 'Beautiful Places to Stay in Italy',
        'image_url' => 'http://clients.expandtheroom.net/food-and-wine/redesign/placeholder-images/large-carousel-img.jpg',
        'classes' => array('content-carousel__slide')
      )); ?>

      <?php print theme('hero-feature', array(
        'url' => '#',
        'title' => 'Beautiful Places to Stay in Italy',
        'image_url' => 'http://clients.expandtheroom.net/food-and-wine/redesign/placeholder-images/large-carousel-img.jpg',
        'classes' => array('content-carousel__slide')
      )); ?>

      <?php print theme('hero-feature', array(
        'url' => '#',
        'title' => 'Beautiful Places to Stay in Italy',
        'image_url' => 'http://clients.expandtheroom.net/food-and-wine/redesign/placeholder-images/large-carousel-img.jpg',
        'classes' => array('content-carousel__slide')
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
  <div class="l-two-col l-two-col--landing section-container">
    <div class="l-two-col__left">
      <?php print theme('spotlight-tout', array(
        'image_url' => 'http://clients.expandtheroom.net/food-and-wine/redesign/placeholder-images/quote-author.jpg',
        'quote' => 'Optestea L. O te, fue mo compra prisse nondiestilla rei pere, Palescero post dicem inat.Urnina, tatquam tus, sena pectand ien.',
        'text' => 'TK The chef shares his tips on how to eliminate waste in the kitchen.',
        'more_url' => '#'
      )); ?>
      
      <section>
        <h3 class="section-heading section-heading--center"><span>The Latest</span></h3>
        
        <div class="grid-3-up">
          <div class="grid-row">
            <?php print theme('story-card', array(
              'type' => 'feature',
              'title' => 'Kristen Kish\'s Favorite Childhood Dishes',
              'text' => 'Top Chef winner Kristen Kish reveals some of her favorite childhood recipes.',
              'url' => '#',
              'image_url' => 'http://clients.expandtheroom.net/food-and-wine/redesign/placeholder-images/tall-story-card-1.jpg',
              'breadcrumbs' => array(
                array('label' => 'Cook', 'url' => '#'),
                array('label' => 'Classic in Aspen', 'url' => '#', 'is_alt' => true),
              ),
              'classes' => array('grid-3-up__item')
            )); ?>

            <?php print theme('story-card', array(
              'type' => 'feature',
              'title' => 'Wine Punch with Melon Ice Cubes',
              'text' => 'Derek Brown sweetens this Riesling-based punch with honey syrup.',
              'url' => '#',
              'image_url' => 'http://clients.expandtheroom.net/food-and-wine/redesign/placeholder-images/tall-story-card-2.jpg',
              'breadcrumbs' => array(
                array('label' => 'Drink', 'url' => '#'),
                array('label' => 'Classic in Aspen', 'url' => '#', 'is_alt' => true),
              ),
              'classes' => array('grid-3-up__item')
            )); ?>

            <?php print theme('story-card', array(
              'type' => 'feature',
              'title' => 'A Bluegrass Classic Gets the Burger Treatment',
              'text' => 'The rich combination of turkey, bacon and Mornay sauce has been a Bluegrass State staple for almost a century.',
              'url' => '#',
              'image_url' => 'http://clients.expandtheroom.net/food-and-wine/redesign/placeholder-images/tall-story-card-3.jpg',
              'breadcrumbs' => array(
                array('label' => 'Travel', 'url' => '#'),
                array('label' => 'Kentucky', 'url' => '#', 'is_alt' => true),
              ),
              'classes' => array('grid-3-up__item')
            )); ?>
          </div>
          <div class="grid-row">
            <?php print theme('story-card', array(
              'type' => 'feature',
              'title' => 'Grill-Roasted Bacon-and-Scallion Corn Muffins',
              'url' => '#',
              'image_url' => 'http://clients.expandtheroom.net/food-and-wine/redesign/placeholder-images/story-card-1.jpg',
              'sponsor' => 'Chobani',
              'classes' => array('grid-3-up__item')
            )); ?>

            <?php print theme('story-card', array(
              'type' => 'feature',
              'title' => 'Best Weekend Travel Bags',
              'url' => '#',
              'image_url' => 'http://clients.expandtheroom.net/food-and-wine/redesign/placeholder-images/story-card-2.jpg',
              'breadcrumbs' => array(
                array('label' => 'Style', 'url' => '#'),
              ),
              'classes' => array('grid-3-up__item')
            )); ?>

            <?php print theme('story-card', array(
              'type' => 'feature',
              'title' => '5 Stunning Yet Simple Recipes for Your Labor Day Cookout',
              'url' => '#',
              'image_url' => 'http://clients.expandtheroom.net/food-and-wine/redesign/placeholder-images/story-card-3.jpg',
              'breadcrumbs' => array(
                array('label' => 'Food', 'url' => '#'),
              ),
              'is_slideshow' => true,
              'classes' => array('grid-3-up__item')
            )); ?>
          </div>
        </div>
      </section>
    </div>
    
    <div class="l-two-col__right">
      <div class="ad ad--300x600 ad--has-label">
        <img src="http://clients.expandtheroom.net/food-and-wine/redesign/placeholder-images/300x600.jpg" alt="">
      </div>

      <?php print theme('highlight-list', array(
        'title' => 'Most Popular',
        'items' => array(
          array(
            'title' => '25 Summer Beach Essentials', 
            'data' => '3.8K Shares',
            'data_type' => 'shares'
          ),
          array(
            'title' => 'Bargain Bordeaux Travel', 
            'data' => '2.7K Shares',
            'data_type' => 'shares'
          ),
          array(
            'title' => 'Tim Love\'s Fourth of July Recipes', 
            'data' => '2.2K Shares',
            'data_type' => 'shares'
          ),
          array(
            'title' => 'Wine Pairings for Chicken', 
            'data' => '1.9K Shares',
            'data_type' => 'shares'
          ),
          array(
            'title' => '9 Summer Granitas You Should Definitely Be Making', 
            'data' => '1.8K Shares',
            'data_type' => 'shares'
          ),
        )
      )); ?>
    </div>
  </div>

  <!-- Featured Section -->
  <section class="section-container">
    <h3 class="section-heading section-heading--center"><span>Featured</span></h3>

    <?php print theme('hero-feature', array(
      'url' => '#',
      'title' => 'Christina Tosi’s Style Tips',
      'image_url' => 'http://clients.expandtheroom.net/food-and-wine/redesign/placeholder-images/hp-featured.jpg',
      'classes' => array('hero-feature--full-bleed')
    )); ?>
  </section>
</div>

<section class="section-container">
  <div class="page-container">
    <h3 class="section-heading section-heading--center">
      <span>
        New Recipes Added Daily
        <span class="section-heading__subh">10,000 recipes and counting</span>
      </span>
    </h3>
  </div>
  
  <div class="content-carousel-container" 
       data-js-component="smallCarousel"
       data-carousel-container=".content-carousel"
       data-next-btn=".pagination-btn--next"
       data-prev-btn=".pagination-btn--prev">
    <div class="content-carousel content-carousel--tight">
       <?php print theme('story-card', array(
        'title' => 'Grill-Roasted Bacon-and-Scallion Corn Muffins',
        'url' => '#',
        'image_url' => 'http://clients.expandtheroom.net/food-and-wine/redesign/placeholder-images/recipes-added-square.jpg',
        'classes' => array('content-carousel__slide')
      )); ?>
      <?php print theme('story-card', array(
        'title' => 'Grill-Roasted Bacon-and-Scallion Corn Muffins',
        'url' => '#',
        'image_url' => 'http://clients.expandtheroom.net/food-and-wine/redesign/placeholder-images/recipes-added-square.jpg',
        'classes' => array('content-carousel__slide')
      )); ?>
      <?php print theme('story-card', array(
        'title' => 'Grill-Roasted Bacon-and-Scallion Corn Muffins',
        'url' => '#',
        'image_url' => 'http://clients.expandtheroom.net/food-and-wine/redesign/placeholder-images/recipes-added-square.jpg',
        'classes' => array('content-carousel__slide')
      )); ?>
      <?php print theme('story-card', array(
        'title' => 'Grill-Roasted Bacon-and-Scallion Corn Muffins',
        'url' => '#',
        'image_url' => 'http://clients.expandtheroom.net/food-and-wine/redesign/placeholder-images/recipes-added-square.jpg',
        'classes' => array('content-carousel__slide')
      )); ?>
      <?php print theme('story-card', array(
        'title' => 'Grill-Roasted Bacon-and-Scallion Corn Muffins',
        'url' => '#',
        'image_url' => 'http://clients.expandtheroom.net/food-and-wine/redesign/placeholder-images/recipes-added-square.jpg',
        'classes' => array('content-carousel__slide')
      )); ?>
      <?php print theme('story-card', array(
        'title' => 'Grill-Roasted Bacon-and-Scallion Corn Muffins',
        'url' => '#',
        'image_url' => 'http://clients.expandtheroom.net/food-and-wine/redesign/placeholder-images/recipes-added-square.jpg',
        'classes' => array('content-carousel__slide')
      )); ?>
      <?php print theme('story-card', array(
        'title' => 'Grill-Roasted Bacon-and-Scallion Corn Muffins',
        'url' => '#',
        'image_url' => 'http://clients.expandtheroom.net/food-and-wine/redesign/placeholder-images/recipes-added-square.jpg',
        'classes' => array('content-carousel__slide')
      )); ?>
      <?php print theme('story-card', array(
        'title' => 'Grill-Roasted Bacon-and-Scallion Corn Muffins',
        'url' => '#',
        'image_url' => 'http://clients.expandtheroom.net/food-and-wine/redesign/placeholder-images/recipes-added-square.jpg',
        'classes' => array('content-carousel__slide')
      )); ?>
      <?php print theme('story-card', array(
        'title' => 'Grill-Roasted Bacon-and-Scallion Corn Muffins',
        'url' => '#',
        'image_url' => 'http://clients.expandtheroom.net/food-and-wine/redesign/placeholder-images/recipes-added-square.jpg',
        'classes' => array('content-carousel__slide')
      )); ?>
      <?php print theme('story-card', array(
        'title' => 'Grill-Roasted Bacon-and-Scallion Corn Muffins',
        'url' => '#',
        'image_url' => 'http://clients.expandtheroom.net/food-and-wine/redesign/placeholder-images/recipes-added-square.jpg',
        'classes' => array('content-carousel__slide')
      )); ?>
    </div>
    <div class="pagination-btn pagination-btn--prev">
      <?php print theme('pagination-arrow'); ?>
    </div>
    <div class="pagination-btn pagination-btn--next">
      <?php print theme('pagination-arrow'); ?>
    </div>
  </div>
  
  <div class="centered">
    <a href="#" class="btn btn--arrow">See More Recipes</a>
  </div>
</section>

<div class="page-container">
  <!-- Video Section -->
  <section class="section-container">
    <h3 class="section-heading section-heading--center"><span>Video</span></h3>
    
    <div class="l-two-col l-two-col--landing">
      <div class="l-two-col__left">
        <?php print theme('story-card', array(
          'type' => 'feature-lg',
          'title' => 'Mad Genius Tips: How to Make Bacon Cinnamon Rolls',
          'text' => 'Fluffy, gooey cinnamon rolls are great, but F&W Test Kitchen pastry innovator Justin Chapple has something even better.',
          'url' => '#',
          'image_url' => 'http://clients.expandtheroom.net/food-and-wine/redesign/placeholder-images/story-card-video.jpg',
          'is_video' => true
        )); ?>
      </div>
      <div class="l-two-col__right">
        <div class="ad ad--300x600 ad--has-label">
          <img src="http://clients.expandtheroom.net/food-and-wine/redesign/placeholder-images/300x600.jpg" alt="">
        </div>
      </div>
    </div>
    
    <h4 class="section-heading section-heading--minor">Popular Videos</h4>
    <div class="grid-4-up">
      <?php print theme('story-card', array(
        'title' => 'Michael Symon and Kristen Kish: Food vs. Sex',
        'url' => '#',
        'image_url' => 'http://clients.expandtheroom.net/food-and-wine/redesign/placeholder-images/video-card-1.jpg',
        'is_video' => true,
        'classes' => array('grid-4-up__item')
      )); ?>
      <?php print theme('story-card', array(
        'title' => 'Michael Symon and Kristen Kish: Food vs. Sex',
        'url' => '#',
        'image_url' => 'http://clients.expandtheroom.net/food-and-wine/redesign/placeholder-images/video-card-1.jpg',
        'is_video' => true,
        'classes' => array('grid-4-up__item')
      )); ?>
      <?php print theme('story-card', array(
        'title' => 'Michael Symon and Kristen Kish: Food vs. Sex',
        'url' => '#',
        'image_url' => 'http://clients.expandtheroom.net/food-and-wine/redesign/placeholder-images/video-card-1.jpg',
        'is_video' => true,
        'classes' => array('grid-4-up__item')
      )); ?>
      <?php print theme('story-card', array(
        'title' => 'Michael Symon and Kristen Kish: Food vs. Sex',
        'url' => '#',
        'image_url' => 'http://clients.expandtheroom.net/food-and-wine/redesign/placeholder-images/video-card-1.jpg',
        'is_video' => true,
        'classes' => array('grid-4-up__item')
      )); ?>
    </div>
    
    <h4 class="section-heading section-heading--minor">Top F&amp;W Video Channel</h4>
    <div class="grid-4-up">
      <?php print theme('story-card', array(
        'title' => 'Michael Symon and Kristen Kish: Food vs. Sex',
        'url' => '#',
        'image_url' => 'http://clients.expandtheroom.net/food-and-wine/redesign/placeholder-images/video-card-1.jpg',
        'is_video' => true,
        'classes' => array('grid-4-up__item')
      )); ?>
      <?php print theme('story-card', array(
        'title' => 'Michael Symon and Kristen Kish: Food vs. Sex',
        'url' => '#',
        'image_url' => 'http://clients.expandtheroom.net/food-and-wine/redesign/placeholder-images/video-card-1.jpg',
        'is_video' => true,
        'classes' => array('grid-4-up__item')
      )); ?>
      <?php print theme('story-card', array(
        'title' => 'Michael Symon and Kristen Kish: Food vs. Sex',
        'url' => '#',
        'image_url' => 'http://clients.expandtheroom.net/food-and-wine/redesign/placeholder-images/video-card-1.jpg',
        'is_video' => true,
        'classes' => array('grid-4-up__item')
      )); ?>
      <?php print theme('story-card', array(
        'title' => 'Michael Symon and Kristen Kish: Food vs. Sex',
        'url' => '#',
        'image_url' => 'http://clients.expandtheroom.net/food-and-wine/redesign/placeholder-images/video-card-1.jpg',
        'is_video' => true,
        'classes' => array('grid-4-up__item')
      )); ?>
    </div>

    <div class="centered">
      <a href="#" class="btn btn--arrow">See More Video</a>
    </div>

  </section>
  <!-- /Video Section -->
  


  <section class="section-container">
    <h3 class="section-heading section-heading--center"><span>Recipe Guides</span></h3>
    <div class="grid-4-up grid-4-up--tight">
      <?php print theme('guide-card', array(
        'url' => '#', 
        'image_url' => 'http://clients.expandtheroom.net/food-and-wine/redesign/placeholder-images/guide-square.jpg',
        'title' => 'Grilled Seafood',
        'classes' => array('grid-4-up__item')
      )); ?>
      <?php print theme('guide-card', array(
        'url' => '#', 
        'image_url' => 'http://clients.expandtheroom.net/food-and-wine/redesign/placeholder-images/guide-square.jpg',
        'title' => 'Grilled Seafood',
        'classes' => array('grid-4-up__item')
      )); ?>
      <?php print theme('guide-card', array(
        'url' => '#', 
        'image_url' => 'http://clients.expandtheroom.net/food-and-wine/redesign/placeholder-images/guide-square.jpg',
        'title' => 'Grilled Seafood',
        'classes' => array('grid-4-up__item')
      )); ?>
      <?php print theme('guide-card', array(
        'url' => '#', 
        'image_url' => 'http://clients.expandtheroom.net/food-and-wine/redesign/placeholder-images/guide-square.jpg',
        'title' => 'Grilled Seafood',
        'classes' => array('grid-4-up__item')
      )); ?>
      <?php print theme('guide-card', array(
        'url' => '#', 
        'image_url' => 'http://clients.expandtheroom.net/food-and-wine/redesign/placeholder-images/guide-square.jpg',
        'title' => 'Grilled Seafood',
        'classes' => array('grid-4-up__item')
      )); ?>
      <?php print theme('guide-card', array(
        'url' => '#', 
        'image_url' => 'http://clients.expandtheroom.net/food-and-wine/redesign/placeholder-images/guide-square.jpg',
        'title' => 'Grilled Seafood',
        'classes' => array('grid-4-up__item')
      )); ?>
      <?php print theme('guide-card', array(
        'url' => '#', 
        'image_url' => 'http://clients.expandtheroom.net/food-and-wine/redesign/placeholder-images/guide-square.jpg',
        'title' => 'Grilled Seafood',
        'classes' => array('grid-4-up__item')
      )); ?>
      <?php print theme('guide-card', array(
        'url' => '#', 
        'image_url' => 'http://clients.expandtheroom.net/food-and-wine/redesign/placeholder-images/guide-square.jpg',
        'title' => 'Grilled Seafood',
        'classes' => array('grid-4-up__item')
      )); ?>
    </div>

    <div class="centered"><a href="#" class="btn btn--arrow">See More Recipes</a></div>
  </section>
  <!-- /Recipe Guides -->


  <div class="section-container">
    <div class="grid-3-up grid-3-up--stack-on-tablet">
      <div class="grid-3-up__item">
        <h3 class="section-heading section-heading--center"><span>F&amp;W on Pinterest</span></h3>
        <div class="gallery-3-up">
          <div class="gallery-3-up__item">
            <img src="http://placehold.it/117x117" alt="">
          </div>
          <div class="gallery-3-up__item">
            <img src="http://placehold.it/117x117" alt="">
          </div>
          <div class="gallery-3-up__item">
            <img src="http://placehold.it/117x117" alt="">
          </div>
          <div class="gallery-3-up__item">
            <img src="http://placehold.it/117x117" alt="">
          </div>
          <div class="gallery-3-up__item">
            <img src="http://placehold.it/117x117" alt="">
          </div>
          <div class="gallery-3-up__item">
            <img src="http://placehold.it/117x117" alt="">
          </div>
        </div>
        <a href="#" class="btn btn--full-width btn-pinterest">See on
          <span>
            <svg viewBox="-2.45 -2.534 624 161" title="Pinterest" role="img">
              <use xlink:href="<?php asset('img/spritemap-new.svg#pinterest-logo'); ?>"></use>
            </svg>
          </span>
        </a>
      </div>

      <div class="grid-3-up__item">
        <h3 class="section-heading section-heading--center"><span>#howissummer</span></h3>
        <div class="gallery-3-up">
          <div class="gallery-3-up__item">
            <img src="http://placehold.it/117x117" alt="">
          </div>
          <div class="gallery-3-up__item">
            <img src="http://placehold.it/117x117" alt="">
          </div>
          <div class="gallery-3-up__item">
            <img src="http://placehold.it/117x117" alt="">
          </div>
          <div class="gallery-3-up__item">
            <img src="http://placehold.it/117x117" alt="">
          </div>
          <div class="gallery-3-up__item">
            <img src="http://placehold.it/117x117" alt="">
          </div>
          <div class="gallery-3-up__item">
            <img src="http://placehold.it/117x117" alt="">
          </div>
        </div>
        <a href="#" class="btn btn--full-width btn-instagram">
          See on
          <span>
            <svg viewBox="0 0 1000 283.084" title="Instagram" role="img">
              <use xlink:href="<?php asset('img/spritemap-new.svg#instagram-logo'); ?>"></use>
            </svg>
          </span>
        </a>
      </div>

      <div class="grid-3-up__item">
        <h3 class="section-heading section-heading--center"><span>Editor Tweets</span></h3>
        <a class="twitter-timeline" 
           href="https://twitter.com/foodandwine" 
           height="252"
           data-chrome="noheader"
           data-widget-id="634837976074350592">Tweets by @foodandwine</a>
        <script>!function(d,s,id){var js,fjs=d.getElementsByTagName(s)[0],p=/^http:/.test(d.location)?'http':'https';if(!d.getElementById(id)){js=d.createElement(s);js.id=id;js.src=p+"://platform.twitter.com/widgets.js";fjs.parentNode.insertBefore(js,fjs);}}(document,"script","twitter-wjs");</script>
        
        <a href="#" class="btn btn--full-width btn-twitter">
          Follow On
          <span>
            <svg class="twitter" viewBox="0 0 30 30" title="Twitter" role="img">
              <use xlink:href="<?php asset('img/spritemap.svg#icon-twitter'); ?>"></use>
            </svg>
          </span>
        </a>
      </div>
    </div>
  </div>

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
  <?php print theme('themed-seo', array(
    'seo_title' => 'What\'s Happening',
    'seo_columns' => array(
      array(
        'theme_title' => 'The Holidays',
        'featured_content' => array(
          'title' => '5 Ways to Cook a Thanksgiving Turkey Without an Oven',
          'url' => 'http://www.google.com',
          'image' => 'http://media.vogue.com/r/h_320,w_280/2014/12/19/food-porn-holiday-desserts-breadsbakery.jpg'
        ),
        'links' => array(
          array(
            'title' => 'This Trick for Reheating Turkey Will Make You Yearn for Thanksgiving Leftovers',
            'url' => 'http://www.google.com'
          ),
          array(
            'title' => '8 Thanksgiving Shopping Lists That Will Surprise You',
            'url' => 'http://www.google.com'
          ),
          array(
            'title' => 'Watch as This Thanksgiving Turkey Bastes Itself',
            'url' => 'http://www.google.com'
          ),
          array(
            'title' => 'The Ultimate Guide to Prepping, Cooking and Carving a Thanksgiving Turkey',
            'url' => 'http://www.google.com'
          ),
          array(
            'title' => 'This Trick for Reheating Turkey Will Make You Yearn for Thanksgiving Leftovers',
            'url' => 'http://www.google.com'
          ),
          array(
            'title' => '8 Thanksgiving Shopping Lists That Will Surprise You',
            'url' => 'http://www.google.com'
          )
        )
      ),
      array(
        'theme_title' => 'Thanksgiving Dinner',
        'featured_content' => array(
          'title' => '5 Ways to Cook a Thanksgiving Turkey Without an Oven',
          'url' => 'http://www.google.com',
          'image' => 'http://www.holidayfrancedirect.co.uk/graphics/library/qi-14240-haute-vienne_cuisine_001.jpg'
        ),
        'links' => array(
          array(
            'title' => 'This Trick for Reheating Turkey Will Make You Yearn for Thanksgiving Leftovers',
            'url' => 'http://www.google.com'
          ),
          array(
            'title' => '8 Thanksgiving Shopping Lists That Will Surprise You',
            'url' => 'http://www.google.com'
          ),
          array(
            'title' => 'Watch as This Thanksgiving Turkey Bastes Itself',
            'url' => 'http://www.google.com'
          ),
          array(
            'title' => 'The Ultimate Guide to Prepping, Cooking and Carving a Thanksgiving Turkey',
            'url' => 'http://www.google.com'
          ),
          array(
            'title' => 'This Trick for Reheating Turkey Will Make You Yearn for Thanksgiving Leftovers',
            'url' => 'http://www.google.com'
          ),
          array(
            'title' => '8 Thanksgiving Shopping Lists That Will Surprise You',
            'url' => 'http://www.google.com'
          )
        )
      )
    )    
  )); ?>
</div>


<?php print theme('footer'); ?>
<?php include 'layout/footer.php'; ?>