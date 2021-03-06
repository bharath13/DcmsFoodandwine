<?php 
sleep(1);
// include static site helper functions so they are available to all templates
include_once __DIR__ . '/../lib/static-helpers.php';

ob_start();
?>
<div class="l-two-col">
    <article class="recipe l-two-col__left">
      <div class="recipe__breadcrumbs">
        <?php print theme('breadcrumbs', array(
          'links' => array(
            array('label' => 'Home', 'url' => '#'),
            array('label' => 'Recipes', 'url' => '#'),
          )
        )); ?>
      </div>
      
      <div class="recipe__content">
        <?php 
        /**
         * we need to return the below markup in the ajax response when we request
         * a recipe. See start and end flags below.
         */
        ?>
        <div class="clearfix"> <?php // start of ajax html ?>
          <header class="recipe__header l-two-col__left__primary">
            <?php print theme('rating-stars', array(
              'rating' => array(4, 5)
              )); ?>
            
            <h1 class="recipe__title" itemprop="name">
              Pappardelle with Summer Squash and Arugula-Walnut Pesto AJAX <?php print $_GET['recipe_id']; ?>
            </h1>
            
            <?php print theme('social-share', array(
              'url' => 'http://www.foodandwine.com/recipes/grilled-vegetables-with-green-goddess-dressing'
            )); ?>

            <p class="recipe__dek">This recipe is a fantastic showcase for superfresh summer squash. F&W’s Kay Chun cuts zucchini and yellow squash lengthwise into ribbons on a mandoline, then tosses them with hot pasta so they just barely cook.</p>

            <ul class="recipe__details">
              <li class="recipe__details__item">
                Active: <time datetime="PT15M" itemprop="prepTime">15 min</time>
              </li>
              <li class="recipe__details__item">
                Total Time: <time datetime="PT45M" itemprop="totalTime">45 min</time>
              </li>
              <li class="recipe__details__item">
                Servings: <span itemprop="recipeYield">4 to 6</span>
              </li>
            </ul>
          </header>

          <div class="l-two-col__left__secondary">

            <div class="recipe__related-video story-card">
              <h4 class="recipe__section-heading recipe__section-heading--secondary">Related Video</h4>
              <a href="#" class="more-link">More Videos</a>
              <img src="http://placehold.it/300x187" alt="">
              <h5 class="story-card__title">Mario Batali: Perfect Pasta</h5>
            </div>

          </div>
        </div>
              
        <div class="l-two-col__left__secondary divider">
          <h3 class="recipe__section-heading">Ingredients</h3>
          <?php print theme('recipe/ingredients-list', array(
            'items' => array(
              '3/4 cup <span itemprop="ingredients">walnut halves</span>',
              '4 cups packed <span itemprop="ingredients">arugula</span> leaves (4 ounces)',
              '3/4 cup <span itemprop="ingredients">extra-virgin olive oil</span>, plus more for drizzling',
              '1/2 teaspoon finely grated <span itemprop="ingredients">garlic</span>',
              '1/2 cup freshly grated <span itemprop="ingredients">Parmigiano-Reggiano cheese</span>, plus shavings for garnish',
              '<span itemprop="ingredients">Kosher salt</span>',
              '<span itemprop="ingredients">Pepper</span>',
              '12 ounces <span itemprop="ingredients">pappardelle</span>',
              '3 firm, fresh medium <span itemprop="ingredients">zucchini</span> and/or yellow squash (1 1/4 pounds), very thinly sliced lengthwise on a mandoline',
              '3 tablespoons fresh <span itemprop="ingredients">lemon juice</span>',
              )
              )); ?>

          <?php print theme('recipe/recipe-send-to-phone', array('recipe_url' => 'http://example.com')); ?>
        </div>

        <div class="l-two-col__left__primary">
          <section class="divider">
            <h3 class="recipe__section-heading">Instructions</h3>
              <?php print theme('recipe/steps-list', array(
                'steps' => array(
                  'In a small skillet, toast the walnuts over moderately low heat until golden, about 5 minutes. Finely chop 1/2 cup of the walnuts; coarsely chop the rest for garnish.',
                  'In a food processor, pulse 2 cups of the arugula until finely chopped; scrape into a large bowl and stir in the 3/4 cup of olive oil, the garlic, grated cheese and finely chopped walnuts. Season the pesto with salt and pepper.',
                  'In a large pot of salted boiling water, cook the pappardelle until al dente. Drain the pasta and add to the pesto in the bowl. Add the zucchini and toss to evenly coat. Stir in the lemon juice and the remaining 2 cups of arugula and season with salt and pepper. Transfer the pasta to a platter, drizzle with olive oil and garnish with the coarsely chopped walnuts and cheese shavings.',
                  )
              )); ?>
          </section>

          <?php print theme('recipe/recipe-notes', array(
            'notes_group' => array(
              array(
                'heading' => 'Make Ahead',
                'notes' => array('The vegetables can be kept at room temperature for 2 hours.')
              ),
              array(
                'heading' => 'Suggested Pairing',
                'notes' => array('Flavorful, peak-of-summer squash is superb with a ripe Chardonnay.')
              )
            )
          )); ?>

          <div class="recipe__attribution">
            <span class="recipe__attribution__item">Contributed By <a href="#">Kay Chun</a></span>
            <span class="recipe__attribution__item">Photo &copy; Con Poulous</span>
            <span class="recipe__attribution__item">Published <a href="#">August 2015</a></span>
          </div>

          <section class="recipe__related divider">
            <h4 class="recipe__section-heading recipe__section-heading--secondary">Related Recipes</h4>
            <?php print theme('tag-set', array(
              'tags' => array(
                  array('name' => 'Fast', 'url' => '#'),
                  array('name' => 'Pasta', 'url' => '#'),
                  array('name' => 'Vegetarian', 'url' => '#'),
                  array('name' => 'Make-Ahead', 'url' => '#'),
                  array('name' => 'Staff-Favorite', 'url' => '#'),
                  array('name' => 'Squash', 'url' => '#'),
                  array('name' => 'Pest', 'url' => '#'),
                )
              )); ?>
          </section>
        </div> <?php // End of ajax html ?>

      </div>
    </article>

    <div class="l-two-col__right" style="background-color: #efefef; height: 900px;">

    </div>
  </div>

  <section>
    <h3 class="section-heading section-heading--center"><span>You May Also Like</span></h3>
    <div class="grid grid--6">
      <?php print theme('story-card', array(
        'title' => 'This is the title',
        'image_url' => 'http://placehold.it/190x144',
        'image_alt' => '',
        'url' => '#',
        'credit' => 'RM Healthy',
        'classes' => array('story-card--outbound', 'grid__item')
      )); ?>
      <?php print theme('story-card', array(
        'title' => 'This is the title',
        'image_url' => 'http://placehold.it/190x144',
        'image_alt' => '',
        'url' => '#',
        'credit' => 'RM Healthy',
        'classes' => array('story-card--outbound', 'grid__item')
      )); ?>
      <?php print theme('story-card', array(
        'title' => 'This is the title',
        'image_url' => 'http://placehold.it/190x144',
        'image_alt' => '',
        'url' => '#',
        'credit' => 'RM Healthy',
        'classes' => array('story-card--outbound', 'grid__item')
      )); ?>
      <?php print theme('story-card', array(
        'title' => 'This is the title',
        'image_url' => 'http://placehold.it/190x144',
        'image_alt' => '',
        'url' => '#',
        'credit' => 'RM Healthy',
        'classes' => array('story-card--outbound', 'grid__item')
      )); ?>
      <?php print theme('story-card', array(
        'title' => 'This is the title',
        'image_url' => 'http://placehold.it/190x144',
        'image_alt' => '',
        'url' => '#',
        'credit' => 'RM Healthy',
        'classes' => array('story-card--outbound', 'grid__item')
      )); ?>
      <?php print theme('story-card', array(
        'title' => 'This is the title',
        'image_url' => 'http://placehold.it/190x144',
        'image_alt' => '',
        'url' => '#',
        'credit' => 'RM Healthy',
        'classes' => array('story-card--outbound', 'grid__item')
      )); ?>
    </div>
  </section>

  <section>
    <h3 class="section-heading section-heading--center"><span>Related Pasta Recipes</span></h3>
    <div class="grid grid--6">
      <?php print theme('story-card', array(
        'title' => 'Cannelloni with Walnuts and Fried Sage',
        'image_url' => 'http://clients.expandtheroom.net/food-and-wine/redesign/placeholder-images/01.jpg',
        'image_alt' => '',
        'url' => '#',
        'classes' => array('story-card--related', 'grid__item')
      )); ?>
      <?php print theme('story-card', array(
        'title' => 'Pappardelle with Porcini and Pistachios',
        'image_url' => 'http://clients.expandtheroom.net/food-and-wine/redesign/placeholder-images/02.jpg',
        'image_alt' => '',
        'url' => '#',
        'classes' => array('story-card--related', 'grid__item')
      )); ?>
      <?php print theme('story-card', array(
        'title' => 'Mexican-Style Chicken with Penne',
        'image_url' => 'http://clients.expandtheroom.net/food-and-wine/redesign/placeholder-images/03.jpg',
        'image_alt' => '',
        'url' => '#',
        'classes' => array('story-card--related', 'grid__item')
      )); ?>
      <?php print theme('story-card', array(
        'title' => 'Greek Baked Pasta',
        'image_url' => 'http://clients.expandtheroom.net/food-and-wine/redesign/placeholder-images/04.jpg',
        'image_alt' => '',
        'url' => '#',
        'classes' => array('story-card--related', 'grid__item')
      )); ?>
      <?php print theme('story-card', array(
        'title' => 'Pappardelle with Lamb Ragù',
        'image_url' => 'http://clients.expandtheroom.net/food-and-wine/redesign/placeholder-images/05.jpg',
        'image_alt' => '',
        'url' => '#',
        'classes' => array('story-card--related', 'grid__item')
      )); ?>
      <?php print theme('story-card', array(
        'title' => 'Pasta with Smothered Broccoli Rabe and Olives',
        'image_url' => 'http://clients.expandtheroom.net/food-and-wine/redesign/placeholder-images/06.jpg',
        'image_alt' => '',
        'url' => '#',
        'classes' => array('story-card--related', 'grid__item')
      )); ?>  
    </div>
  </section>

  <section>
    <h3 class="section-heading section-heading--center"><span>Related Videos</span></h3>
    <div class="grid grid--6">
      <?php print theme('story-card', array(
        'title' => 'Andrew Zimmern: Stretching Hand-Pulled Noodles',
        'image_url' => 'http://clients.expandtheroom.net/food-and-wine/redesign/placeholder-images/07.jpg',
        'image_alt' => '',
        'url' => '#',
        'classes' => array('story-card--related', 'grid__item')
      )); ?>
      <?php print theme('story-card', array(
        'title' => 'Marc Murphy: Holiday Pasta',
        'image_url' => 'http://clients.expandtheroom.net/food-and-wine/redesign/placeholder-images/08.jpg',
        'image_alt' => '',
        'url' => '#',
        'classes' => array('story-card--related', 'grid__item')
      )); ?>
      <?php print theme('story-card', array(
        'title' => 'Dave Chang Slurps Ramen',
        'image_url' => 'http://clients.expandtheroom.net/food-and-wine/redesign/placeholder-images/09.jpg',
        'image_alt' => '',
        'url' => '#',
        'classes' => array('story-card--related', 'grid__item')
      )); ?>
      <?php print theme('story-card', array(
        'title' => 'Jacques Pépin: How to Make People Happy',
        'image_url' => 'http://clients.expandtheroom.net/food-and-wine/redesign/placeholder-images/10.jpg',
        'image_alt' => '',
        'url' => '#',
        'classes' => array('story-card--related', 'grid__item')
      )); ?>
      <?php print theme('story-card', array(
        'title' => 'Pappardelle with Lamb Ragù',
        'image_url' => 'http://clients.expandtheroom.net/food-and-wine/redesign/placeholder-images/11.jpg',
        'image_alt' => '',
        'url' => '#',
        'classes' => array('story-card--related', 'grid__item')
      )); ?>
      <?php print theme('story-card', array(
        'title' => 'Pappardelle with Lamb Ragù',
        'image_url' => 'http://clients.expandtheroom.net/food-and-wine/redesign/placeholder-images/12.jpg',
        'image_alt' => '',
        'url' => '#',
        'classes' => array('story-card--related', 'grid__item')
      )); ?>  
    </div>
  </section>
<?php 

$recipe_html = ob_get_clean();
$recipe_html = str_replace(array("\r", "\n", "\t"), '', $recipe_html);

echo $recipe_html;
// $response = array(
//   'html' => $recipe_html
// );

// header('Content-Type: application/json');
// echo json_encode($response);
?>