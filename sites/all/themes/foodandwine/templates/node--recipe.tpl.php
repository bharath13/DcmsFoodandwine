<?php

/**
 * @file
 * Recipe node theme implementation.
 *
 * Available variables:
 * - $title: the (sanitized) title of the node.
 * - $content: An array of node items. Use render($content) to print them all,
 *   or print a subset such as render($content['field_example']). Use
 *   hide($content['field_example']) to temporarily suppress the printing of a
 *   given element.
 * - $user_picture: The node author's picture from user-picture.tpl.php.
 * - $date: Formatted creation date. Preprocess functions can reformat it by
 *   calling format_date() with the desired parameters on the $created variable.
 * - $name: Themed username of node author output from theme_username().
 * - $node_url: Direct URL of the current node.
 * - $display_submitted: Whether submission information should be displayed.
 * - $submitted: Submission information created from $name and $date during
 *   template_preprocess_node().
 * - $classes: String of classes that can be used to style contextually through
 *   CSS. It can be manipulated through the variable $classes_array from
 *   preprocess functions. The default values can be one or more of the
 *   following:
 *   - node: The current template type; for example, "theming hook".
 *   - node-[type]: The current node type. For example, if the node is a
 *     "Blog entry" it would result in "node-blog". Note that the machine
 *     name will often be in a short form of the human readable label.
 *   - node-teaser: Nodes in teaser form.
 *   - node-preview: Nodes in preview mode.
 *   The following are controlled through the node publishing options.
 *   - node-promoted: Nodes promoted to the front page.
 *   - node-sticky: Nodes ordered above other non-sticky nodes in teaser
 *     listings.
 *   - node-unpublished: Unpublished nodes visible only to administrators.
 * - $title_prefix (array): An array containing additional output populated by
 *   modules, intended to be displayed in front of the main title tag that
 *   appears in the template.
 * - $title_suffix (array): An array containing additional output populated by
 *   modules, intended to be displayed after the main title tag that appears in
 *   the template.
 *
 * Other variables:
 * - $node: Full node object. Contains data that may not be safe.
 * - $type: Node type; for example, story, page, blog, etc.
 * - $comment_count: Number of comments attached to the node.
 * - $uid: User ID of the node author.
 * - $created: Time the node was published formatted in Unix timestamp.
 * - $classes_array: Array of html class attribute values. It is flattened
 *   into a string within the variable $classes.
 * - $zebra: Outputs either "even" or "odd". Useful for zebra striping in
 *   teaser listings.
 * - $id: Position of the node. Increments each time it's output.
 *
 * Node status variables:
 * - $view_mode: View mode; for example, "full", "teaser".
 * - $teaser: Flag for the teaser state (shortcut for $view_mode == 'teaser').
 * - $page: Flag for the full page state.
 * - $promote: Flag for front page promotion state.
 * - $sticky: Flags for sticky post setting.
 * - $status: Flag for published status.
 * - $comment: State of comment settings for the node.
 * - $readmore: Flags true if the teaser content of the node cannot hold the
 *   main body content.
 * - $is_front: Flags true when presented in the front page.
 * - $logged_in: Flags true when the current user is a logged-in member.
 * - $is_admin: Flags true when the current user is an administrator.
 *
 * Field variables: for each field instance attached to the node a corresponding
 * variable is defined; for example, $node->body becomes $body. When needing to
 * access a field's raw values, developers/themers are strongly encouraged to
 * use these variables. Otherwise they will have to explicitly specify the
 * desired field language; for example, $node->body['en'], thus overriding any
 * language negotiation rule that was previously applied.
 *
 * @see template_preprocess()
 * @see template_preprocess_node()
 * @see template_process()
 *
 * @ingroup themeable
 */
?>


<?php if ($_COOKIE['TI_PREFS'] == 'phone') { ?>
  <div class="recp-container">
      <div class="recipe_rating_section">
        <span class="rating_text">RATING</span>
        <span style="display:none">
            <?php print $variables['recipe_rating'].'.0'; ?>
        </span>
        <ul class="recipe_ratings">
        <?php
        $rate_value = $variables['recipe_rating'];
            for ($rate = 1; $rate <= 5; $rate++) {
                if($variables['recipe_rating'] != 0){ ?>
            <li class="rate-item colored"></li>
                
                <?php $variables['recipe_rating']--;}else{ ?>
            <li class="rate-item gray"></li>
                <?php } ?>
            
            <?php }?>
        </ul>
        <?php if($rate_value == 0 || $rate_value == ''){ ?>
            <span class="noreview">No reviews available</span>
        <?php }?>
    </div>
    <div class="recipe-title-row">
      <div class="m-recipe-title">
        <h1 class="recp-title"><?php print trim($title); ?></h1>
      </div>
      <?php if (!empty($contrib_name)) { ?>
      <div class="recp-contribute">
          Contributed by <span><?php print $contrib_name; ?></span>
      </div>
      <?php } ?>
    </div>

    <?php if (!empty($recipe_image)) { ?>
    <div class="recipe-detail-row">
      <div class="alpha">
        <div class="recp-image-frame">
          <?php print $recipe_image; ?>
          <?php if (!empty($recipe_image_caption)) { ?>
            <div class="recp-image-caption"><?php print trim($recipe_image_caption); ?></div>
          <?php } ?>
          <?php if (!empty($recipe_image_credit)) { ?>
            <div class="recp-image-credit"><?php print trim($recipe_image_credit); ?></div>
          <?php } ?>
        </div>
      </div>
      <div class="omega">
        <?php if (!empty($complex_themes)) {
  print $complex_themes;
}
?>
        <div class="recipe-summary">
          <?php if (!empty($active_time)) { ?>
          <p class="dek">
            <span class="recipe-summary-subtitle">Active:</span>
            <span class="recipe-summary-content"><?php print $active_time; ?></span>
          </p>
          <?php } ?>
          <?php if (!empty($recipe_time)) { ?>
          <p class="dek">
            <span class="recipe-summary-subtitle">Total Time:</span>
            <span class="recipe-summary-content">
                <time datetime="<?php print $rich_snippet_total_time;?>">
                    <?php print $recipe_time . ' ' . $time_other_text; ?>
                </time>
            </span>
          </p>
          <?php } ?>
          <?php if (!empty($servings_yield)) { ?>
          <p class="dek">
            <span class="recipe-summary-subtitle">Servings:</span>
            <span class="recipe-summary-content"><?php print $servings_yield; ?></span>
          </p>
          <?php } ?>
        </div>  
      </div>
      <div class="clrboth"></div>
    </div>
    <?php } ?>

    <div class="recipe-description-row">
      <?php if (!empty($deck)) { ?>
        <span><?php print $deck; ?></span>
        <div class="rcphideShow-button">
          <div class="rcplink">see more</div>
        </div>
      <?php } ?>
    </div>            

    <div class="recipe-ingredients-row">
      <?php if (!empty($ing_content)) { ?>
        <h3>Ingredients</h3>
        <?php print $ing_content; ?> 
      <?php } ?>
    </div>
      
    <div id="ad_mobile_320x320">
      <script type="text/javascript">
        ad = adFactory.getMultiAd(
          new Array("320x320", "320x50", "300x250", "300x50")
        );
        ad.setPosition("2");
        ad.write("ad_mobile_320x320");
      </script>
    </div>      
      
    <div class="recipe-direction-row">
      <?php if (!empty($step_content)) { ?>
        <h3 class="red">Directions</h3>
        <?php print $step_content; ?>
      <?php } ?>
    </div>
           
    <div class="related-recipe-row m-related-links">
      <?php if (!empty($related_link)) { ?>
        <h4>Related Recipes</h4>
        <div class="m-section"><?php print $related_link; ?></div>
      <?php } ?>
    </div>
      
    <!-- Adding Related Links Block on Mobile Recipe Detail Page --> 
    <div class="related-recipe-row m-related-links relcntlinks">
      <?php if (!empty($related_cnt_links)) { ?>
        <h4>Related Links</h4>
        <div class="m-section"><?php print $related_cnt_links; ?></div>
      <?php } ?>
    </div>    

    <div class="recommend-recipe-row m-related-links">   
      <div id="outbrain-content">
        <h4>You Might Also Like</h4>
        <div id='outbrain'>
          <div class='you-might-also-like'></div>
          <?php $site_url = 'http://www.foodandwine.com' . base_path() . request_path(); ?>
          <div class='OUTBRAIN' data-ob-template='Food&amp;Wine' data-src='<?php print $site_url; ?>' data-widget-id='AR_3'>
          <script async='async' src='http://widgets.outbrain.com/outbrain.js' type='text/javascript'></script>
        </div>       
      </div>
    </div>
  </div>
  </div>   
<?php }
else  { ?>


<div id="node-<?php print $node->nid; ?>" class="<?php print $classes; ?> clearfix"<?php print $attributes; ?>>
     <?php print $user_picture; ?>
     <?php print render($title_prefix); ?>
     <?php if (!$page): ?>
    <h2<?php print $title_attributes; ?>><a href="<?php print $node_url; ?>">
        <?php print $title; ?></a></h2>
  <?php endif; ?>
  <?php print render($title_suffix); ?>
  <?php if ($display_submitted): ?>
    <div class="submitted">
      <?php print $submitted; ?>
    </div>
  <?php endif; ?>
    <div class="recipe_rating_section">
        <span class="rating_text">RATING</span>
        <span style="display:none"><?php print $variables['recipe_rating'].'.0';?>
        </span>
        <ul class="recipe_ratings">
        <?php
            $rate_value = $variables['recipe_rating'];
            for ($rate = 1; $rate <= 5; $rate++) {
                if($variables['recipe_rating'] != 0){ ?>
            <li class="rate-item colored"></li>
                
                <?php $variables['recipe_rating']--;}else{ ?>
            <li class="rate-item gray"></li>
                <?php } ?>
            
            <?php }?>
        </ul>
        <?php if($rate_value == 0){ ?>
            <span class="noreview">No reviews available</span>
        <?php }?>
    </div>
  <div class="content"<?php print $content_attributes; ?>>
    <?php
hide($content['comments']); hide($content['links']);
?>

    <div id="recipe-head">
      <?php if ($tap_badge) { ?> 
        <div id='recipe-ribbon'></div> 
      <?php } ?>
      <div class="recipe-title section">
        <div class="recipe-image two-columns">
          <div class="image-frame">
            <?php
print $recipe_image; ?>
            <div class="image-caption">
              <?php
print $recipe_image_caption; ?>
            </div>
            <div class="image-credit">
              <?php
print $recipe_image_credit; ?>
            </div>
          </div>
        </div>
        <div class="four-columns">
          <h1>
            <?php print $title; ?>
          </h1>
          <?php if (!empty($contrib_name)) { ?>
            <div class="byline">
              Contributed by <?php print $contrib_name; ?>
            </div><?php } ?>
          <div class="cooking-time section">
            <ul>
              <?php if (!empty($active_time)) { ?>
                <li id="time-active">
                  ACTIVE:
                  <?php
print $active_time; ?>

                </li><?php } ?>
              <?php if (!empty($recipe_time)) { ?>
                <li id="time-total">
                  TOTAL TIME:
                  <time datetime="<?php print $rich_snippet_total_time;?>"><?php
print $recipe_time; print $time_other_text;
?></time>
                </li><?php } ?>
              <?php if (!empty($servings_yield)) { ?>
                <li id="time-servings">
                  SERVINGS:<span>
                    <?php
print $servings_yield; ?>  </span>      
                </li> <?php } ?>
            </ul>
            <?php if (!empty($complex_themes)) {
print $complex_themes;
}
?> 
          </div>
          <div class="recipe-dek">
            <div class='deck'><?php print $deck; ?></div>
          </div>
        </div>
      </div>
    </div>

    <?php if (!empty($chkempty_relvideos)) { ?>
      <div class="recipe-related-videos">
        <h4>Related Videos</h4>
        <?php print $related_videos; ?>
      </div>
    <?php } ?>

    <?php if (!empty($related_link)) { ?>
      <div class="related-links">
        <h4>
          Related Recipes
        </h4>
        <div class="section">
          <?php
print $related_link; ?>
        </div>
      </div> <?php
print $more_link; }
else {
?>
         <div class="feature-separator related-empty"></div> <?php } ?>
    <div class="section recipe-content">
      <div id="ingredients" class="two-columns">
        <?php print $ing_content; ?>                      
      </div>
      <div id="directions" class="four-columns">
        <?php
print $step_content; if (!empty($make_ahead)) {
?>
          <div id="endnotes">
            <div class="inline-subhed">Make Ahead</div>
            <?php print $make_ahead; ?>
          </div>
          <?php } ?>
        
        <?php if (!empty($serve_notes)) { ?>
        <div id="endnotes">
          <div class="inline-subhed">Notes</div>
        <?php print $serve_notes; ?>
        </div>  
          <?php } ?>
<?php if (!empty($serve_with)) { ?>
        <div id="endnotes">
          <div class="inline-subhed">Serve With</div>
        <?php print $serve_with;  ?>  
        </div>  
   <?php } ?> 

        
        <?php if (!empty($pairing_notes)) { ?>
          <div id="pairing">
            <h2>
              Suggested Pairing
            </h2>
            <p>
              <?php print $pairing_notes; ?>
            </p>
          </div> <?php } ?>
        <?php if (!empty($issue_name)) { ?>
          <div class="recipe-footer">
            Published
            <span>                
              <?php print $issue_name; ?>
            </span>
          </div> <?php } ?>
      </div>
    </div>
  </div>
</div>
  <div class="feature-separator"></div>
<?php } ?>

