<?php include 'layout/header.php'; $recipe_carousel = $_GET['recipe_carousel']; ?>
<?php print theme('header'); ?>

<section class="section-container">
  <div class="page-container tile-nav-carousel"
       data-js-component="tileCarousel"
       data-carousel-container=".tile-nav"
       data-next-btn=".pagination-btn--next"
       data-prev-btn=".pagination-btn--prev">

    <div class="tile-nav">
      
      <?php print theme('guide-card', array(
        'url' => '#',
        'image_url' => 'http://clients.expandtheroom.net/food-and-wine/redesign/placeholder-images/guide-square.jpg',
        'title' => 'Grilled Seafood',
        'always_display_title' => true,
        'classes' => array('tile-nav__item')
      )); ?>
      <?php print theme('guide-card', array(
        'url' => '#', 
        'image_url' => 'http://clients.expandtheroom.net/food-and-wine/redesign/placeholder-images/guide-square.jpg',
        'title' => 'Grilled Seafood',
        'always_display_title' => true,
        'classes' => array('tile-nav__item')
      )); ?>
      <?php print theme('guide-card', array(
        'url' => '#', 
        'image_url' => 'http://clients.expandtheroom.net/food-and-wine/redesign/placeholder-images/guide-square.jpg',
        'title' => 'Grilled Seafood',
        'always_display_title' => true,
        'classes' => array('tile-nav__item')
      )); ?>
      <?php print theme('guide-card', array(
        'url' => '#', 
        'image_url' => 'http://clients.expandtheroom.net/food-and-wine/redesign/placeholder-images/guide-square.jpg',
        'title' => 'Grilled Seafood',
        'always_display_title' => true,
        'classes' => array('tile-nav__item')
      )); ?>
      <?php print theme('guide-card', array(
        'url' => '#', 
        'image_url' => 'http://clients.expandtheroom.net/food-and-wine/redesign/placeholder-images/guide-square.jpg',
        'title' => 'Grilled Seafood',
        'always_display_title' => true,
        'classes' => array('tile-nav__item')
      )); ?>
      <?php print theme('guide-card', array(
        'url' => '#', 
        'image_url' => 'http://clients.expandtheroom.net/food-and-wine/redesign/placeholder-images/guide-square.jpg',
        'title' => 'Grilled Seafood',
        'always_display_title' => true,
        'classes' => array('tile-nav__item')
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

<div class="page-container page-heading">
  <div class="sponsor__ad">
    <div class="sponsor__ad-interior">
      <span class="sponsor__ad-text">Powered By:</span>
      <div class="sponsor__ad-container">
        <a href="#"><img src="http://clients.expandtheroom.net/food-and-wine/redesign/placeholder-images/test-ad.jpg"></a>
      </div>
    </div>
  </div>
  <div class="page-heading__interior">
    <h2 class="page-heading--title">Summer Grilling</h2>
    <span class="page-heading--desc">Here are F&W's best chicken recipes, butchering tips from Jacques Pépin and a guide to the best fried chicken in America.</span>
  </div>
</div>

<?php if (!$recipe_carousel): ?>
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
<?php else: ?>
<section class="section-container">
  <div class="recipe-carousel-container recipe-carousel-container--simple"
       data-js-component="simpleRecipeCarousel"
       data-carousel-container=".recipe-carousel"
       data-next-btn=".pagination-btn--next"
       data-prev-btn=".pagination-btn--prev">

    <div class="recipe-carousel">
      <div class="recipe-carousel__recipe">
        <img class="recipe-carousel__recipe__img" src="http://clients.expandtheroom.net/food-and-wine/redesign/placeholder-images/recipe-01.jpg" alt="">
        <div class="recipe-carousel__recipe__content">
          <h2 class="recipe-carousel__recipe__title">Summer Recipes Inspired by Our Favorite Artisans</h2>
        </div>
      </div>
      <div class="recipe-carousel__recipe">
        <img class="recipe-carousel__recipe__img" src="http://clients.expandtheroom.net/food-and-wine/redesign/placeholder-images/recipe-02.jpg" alt="">
        <div class="recipe-carousel__recipe__content">
          <h2 class="recipe-carousel__recipe__title">Summer Recipes Inspired by Our Favorite Artisans</h2>
        </div>
      </div>
      <div class="recipe-carousel__recipe">
        <img class="recipe-carousel__recipe__img" src="http://clients.expandtheroom.net/food-and-wine/redesign/placeholder-images/recipe-03.jpg" alt="">
        <div class="recipe-carousel__recipe__content">
          <h2 class="recipe-carousel__recipe__title">Summer Recipes Inspired by Our Favorite Artisans</h2>
        </div>
      </div>
    </div>
    <div class="pagination-btn pagination-btn--prev">
      <?php print theme('pagination-arrow'); ?>
    </div>
    <div class="pagination-btn pagination-btn--next">
      <?php print theme('pagination-arrow'); ?>
    </div>
</section>
<?php endif; ?>
<div class="page-container">
  <div class="l-two-col l-two-col--landing section-container">
    <div class="l-two-col__left">
      <?php print theme('spotlight-tout', array(
        'tout_title' => 'Staff Picks',
        'image_url' => 'http://clients.expandtheroom.net/food-and-wine/redesign/placeholder-images/recipe-icon.png',
        'quote' => 'Optestea L. O te, fue mo compra prisse nondiestilla rei pere, Palescero post dicem inat.Urnina, tatquam tus, sena pectand ien.',
        'more_url' => '#',
        'alt' => true
      )); ?>
      
      <section>
        <h3 class="section-heading section-heading--center"><span>The Latest</span></h3>
        
        <section class="section-container">
          <?php print theme('story-card', array(
            'type' => 'feature-lg',
            'title' => 'Mad Genius Tips: How to Make Bacon Cinnamon Rolls',
            'text' => 'Fluffy, gooey cinnamon rolls are great, but F&W Test Kitchen pastry innovator Justin Chapple has something even better.',
            'url' => '#',
            'image_url' => 'http://clients.expandtheroom.net/food-and-wine/redesign/placeholder-images/story-card-video.jpg',
            'is_video' => true
          )); ?>
        </section>
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
              'image_url' => 'http://clients.expandtheroom.net/food-and-wine/redesign/placeholder-images/large-carousel-img.jpg',
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
  <div class="centered">
    <a href="#" class="btn btn--arrow">See More</a>
  </div>
</div>


<section class="section-container">
  <div class="page-container">
    <h3 class="section-heading section-heading--center">
      <span>Travel Guides</span>
    </h3>
  </div>
  
  <div class="content-carousel-container" 
       data-js-component="smallCarousel"
       data-carousel-container=".content-carousel"
       data-next-btn=".pagination-btn--next"
       data-prev-btn=".pagination-btn--prev">
    <div class="content-carousel content-carousel--tight">
       <?php print theme('story-card', array(
        'title' => 'Atlanta Travel Guide',
        'url' => '#',
        'image_url' => 'http://clients.expandtheroom.net/food-and-wine/redesign/placeholder-images/recipes-added-square.jpg',
        'classes' => array('content-carousel__slide')
      )); ?>
      <?php print theme('story-card', array(
        'title' => 'Boston Travel Guide',
        'url' => '#',
        'image_url' => 'http://clients.expandtheroom.net/food-and-wine/redesign/placeholder-images/recipes-added-square.jpg',
        'classes' => array('content-carousel__slide')
      )); ?>
      <?php print theme('story-card', array(
        'title' => 'New York Travel Guide',
        'url' => '#',
        'image_url' => 'http://clients.expandtheroom.net/food-and-wine/redesign/placeholder-images/recipes-added-square.jpg',
        'classes' => array('content-carousel__slide')
      )); ?>
      <?php print theme('story-card', array(
        'title' => 'Charleston Travel Guide',
        'url' => '#',
        'image_url' => 'http://clients.expandtheroom.net/food-and-wine/redesign/placeholder-images/recipes-added-square.jpg',
        'classes' => array('content-carousel__slide')
      )); ?>
      <?php print theme('story-card', array(
        'title' => 'Chicago Travel Guide',
        'url' => '#',
        'image_url' => 'http://clients.expandtheroom.net/food-and-wine/redesign/placeholder-images/recipes-added-square.jpg',
        'classes' => array('content-carousel__slide')
      )); ?>
      <?php print theme('story-card', array(
        'title' => 'Austin Travel Guide',
        'url' => '#',
        'image_url' => 'http://clients.expandtheroom.net/food-and-wine/redesign/placeholder-images/recipes-added-square.jpg',
        'classes' => array('content-carousel__slide')
      )); ?>
      <?php print theme('story-card', array(
        'title' => 'Nashville Travel Guide',
        'url' => '#',
        'image_url' => 'http://clients.expandtheroom.net/food-and-wine/redesign/placeholder-images/recipes-added-square.jpg',
        'classes' => array('content-carousel__slide')
      )); ?>
      <?php print theme('story-card', array(
        'title' => 'California Travel Guide',
        'url' => '#',
        'image_url' => 'http://clients.expandtheroom.net/food-and-wine/redesign/placeholder-images/recipes-added-square.jpg',
        'classes' => array('content-carousel__slide')
      )); ?>
      <?php print theme('story-card', array(
        'title' => 'Missouri Travel Guide',
        'url' => '#',
        'image_url' => 'http://clients.expandtheroom.net/food-and-wine/redesign/placeholder-images/recipes-added-square.jpg',
        'classes' => array('content-carousel__slide')
      )); ?>
      <?php print theme('story-card', array(
        'title' => 'Nevada Travel Guide',
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
    <a href="#" class="btn btn--arrow">See All Travel Guides</a>
  </div>
</section>

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