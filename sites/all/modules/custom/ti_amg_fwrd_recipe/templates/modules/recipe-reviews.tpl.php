<?php
/**
 * @file
 * Contains Recipe Ratings and Reviews.
 */
?>

<div id = "recipe_ratings_reviews" class="hide">
	<div id = "recipe_ratings">
		<p>Aggregate Rating value: <?php print $recipe_reviews['aggregate_rating']; ?></p>
    	<p>Review Count: <?php print $recipe_reviews['review_count']; ?></p>
    	<p>Worst Rating: <?php print $recipe_reviews['worst_rating']; ?></p> 
    	<p>Best Rating: <?php print $recipe_reviews['best_rating']; ?></p>
	</div>
	<div id = "recipe_reviews">
		<?php if (!empty($recipe_reviews['reviews'])) : ?>
			<?php foreach($recipe_reviews['reviews'] as $key => $review) :?>
				<div id = "review_<?php print $key + 1; ?>">
					<?php if (!empty($review['author']['name'])) : ?>
						<p>Author Name: <?php print $review['author']['name']; ?></p>
					<?php endif;?>
					<?php if (!empty($review['reviewBody'])) : ?>
						<p>Review Body: <?php print $review['reviewBody']; ?></p>
					<?php endif;?>
					<?php if (!empty($review['reviewRating']['ratingValue'])) : ?>
						<p>Review Rating: <?php print $review['reviewRating']['ratingValue']; ?></p>
					<?php endif;?>
					<?php if (!empty($review['datePublished'])) : ?>
						<p>Date Published: <?php print $review['datePublished']; ?></p>
					<?php endif;?>
				</div>
			<?php endforeach;?>
		<?php endif;?>
	</div>  
</div>
