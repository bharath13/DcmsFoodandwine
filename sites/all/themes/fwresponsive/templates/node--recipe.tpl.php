<?php
/**
 * @file
 * Default theme implementation to display a node.
 *
 * Available variables:
 * - $title: the (sanitized) title of the node.
 * - $content: An array of node items. Use render($content) to print them all, or
 *   print a subset such as render($content['field_example']). Use
 *   hide($content['field_example']) to temporarily suppress the printing of a
 *   given element.
 * - $user_picture: The node author's picture from user-picture.tpl.php.
 * - $date: Formatted creation date. Preprocess functions can reformat it by
 *   calling format_date() with the desired parameters on the $created variable.
 * - $name: Themed username of node author output from theme_username().
 * - $node_url: Direct url of the current node.
 * - $terms: the themed list of taxonomy term links output from theme_links().
 * - $display_submitted: whether submission information should be displayed.
 * - $classes: String of classes that can be used to style contextually through
 *   CSS. It can be manipulated through the variable $classes_array from
 *   preprocess functions. The default values can be one or more of the following:
 *   - node: The current template type, i.e., "theming hook".
 *   - node-[type]: The current node type. For example, if the node is a
 *     "Blog entry" it would result in "node-blog". Note that the machine
 *     name will often be in a short form of the human readable label.
 *   - node-teaser: Nodes in teaser form.
 *   - node-preview: Nodes in preview mode.
 *   The following are controlled through the node publishing options.
 *   - node-promoted: Nodes promoted to the front page.
 *   - node-sticky: Nodes ordered above other non-sticky nodes in teaser listings.
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
 * - $type: Node type, i.e. story, page, blog, etc.
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
 * - $view_mode: View mode, e.g. 'full', 'teaser'...
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
 * variable is defined, e.g. $node->body becomes $body. When needing to access
 * a field's raw values, developers/themers are strongly encouraged to use these
 * variables. Otherwise they will have to explicitly specify the desired field
 * language, e.g. $node->body['en'], thus overriding any language negotiation
 * rule that was previously applied.
 *
 * @see template_preprocess()
 * @see template_preprocess_node()
 * @see template_process()
 */
?>
<div class="l-two-col">
  <article class="recipe l-two-col__left">
    <div class="recipe__breadcrumbs">
      <?php print $recipe_content['breadcrumbs']; ?>
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
           <h1 class="recipe__title" itemprop="name">
      	    <?php print($recipe_content['title']); ?>
          </h1>
          <?php print $recipe_content['recipe_rating'];?>
          <div itemprop="description" class="recipe__dek">
            <?php print render($recipe_content['deck']); ?>
          </div>
      	 
          <?php
          /**
           * Recipe Details includes active, total time, servings
           * Mapped to sites/all/modules/custom/ti_amg_fwrd_recipe/templates/modules/recipe/recipe-details.tpl.php
           */
          print theme('recipe-details', array(
            'time' => $recipe_content['time'],
            'active_time' => $recipe_content['active_time'],
            'other_time' => $recipe_content['other_time'],
            'servings' => $recipe_content['servings'] ));?>

          <?php print $recipe_content['social_share_section']; ?>  

          <?php print $recipe_content['related_link']; ?>      					
        </header>

      	<div class="l-two-col__left__secondary">
      	  <?php 
      	    /**
      	     * Top video tout: mapped to 
      	     * sites/all/modules/custom/ti_amg_fwrd_recipe/templates/modules/recipe/top-video-tout.tpl.php
      	     */
      	    print theme('top-video-tout', 
      		    array(
                'video_data' =>  $recipe_content['top_video_tout'],
                'classes_list' => 'hide-tout show-at-medium'
              )
            );
      	  ?>
      					
      	</div>
      </div>
        						 
      <div class="l-two-col__left__secondary divider">       
        <div class="ad ad--300x600">
          <div id="device_multiad_300x250_wrapper"></div>
        </div>
        <div class="device-divider"></div>
      	<h3 class="recipe__section-heading">Ingredients</h3>
    	  <?php print theme('ingredients-list', array(
    		'items' => $recipe_content['ingredients'] 
    	    ));
    	  ?>
      	<div class="chicory-order-ingredients"></div>
      </div>

      <div class="l-two-col__left__primary divider">
        <section class="ad ad--300x600">
          <div id="device_ad_300x250_wrapper"></div>
        </section>
        <div class="device-divider"></div>
      	<section>
      	  <h2 class="recipe__section-heading">How to make this recipe</h2>
      	    <?php print theme('steps-list', array(
              'steps' => $recipe_content['instructions'],
              'device' => $detect_device
      	    )); ?>
      	</section>

      	<?php print theme('recipe-notes', array(
      		'make_ahead' => $recipe_content['make_ahead'],
      		'pairing_notes' => $recipe_content['pairing_notes'],
      		'serve_notes' => $recipe_content['serve_notes'],
      		'serve_with' => $recipe_content['serve_with']
      	)); ?>

      	<div class="recipe__attribution">
      	  <?php if (isset($recipe_content['contrib_name']) && 
              $recipe_content['contrib_name'] != ''): ?>
      	    <span class="recipe__attribution__item">Contributed By 
              <span itemprop="author" itemscope itemtype="http://schema.org/Person">
                <span itemprop="name">
                  <?php print $recipe_content['contrib_name']; ?>
                </span>
              </span>
      	    </span>
      	  <?php endif; ?>  
      	  <?php if (isset($recipe_content['image']['credit']) &&
              $recipe_content['image']['credit'] != ''): ?>
      	    <span class="recipe__attribution__item">Photo <?php print $recipe_content['image']['credit']; ?> 
      	    </span>
      	  <?php endif; ?>    
      	  <?php if (!empty($recipe_content['issue_name'])): ?>
      	    <span class="recipe__attribution__item">Published 
      	      <?php print $recipe_content['issue_name']; ?> 
      	    </span>
      	  <?php endif; ?>  
      	</div>

        <?php if (!$recipe_content['in_campaign']) : ?>
          <!-- Loading Outbrain for tablet and Mobile. -->
          <div id="outbrain-wrapper-mobile"></div> 
        <?php endif; ?>
          <div id="device_ad_300x100_wrapper"></div>
          <?php print render($recipe_content['tablet_ad_block3']); ?>
        <br/>
        <div class="hide-at-medium">
          <?php
          if (!empty($recipe_content['top_video_tablet_mobile'])) {
            print theme('top-video-tout', array(
              'video_data' => $recipe_content['top_video_tablet_mobile'],
              'classes_list' => 'recipe__related-video--tablet-mobile',
              )
            );
          }  
          ?>
        </div>
      </div> <?php // End of ajax html ?>

    </div>

    <?php if (!$recipe_content['in_campaign']) : ?>
      <!--  -Loading the Outbrain Module for desktop. -->
      <div id="outbrain-wrapper-bottom"></div> 
    <?php endif; ?>
    <?php if ($recipe_content['enable_spot_im']) :?>
      <section class="section-container">
        <div class="spot-im-frame-inpage" data-social-reviews=true data-post-id="<?php print $recipe_content['nid']; ?>"></div>
      </section>
    <?php endif; ?>
  </article>

  <div class="l-two-col__right">
    <div class="recipe-right-rail-section">
      <div id="ad_multiad_300x250_wrapper"></div><br/> 
      <?php if (!$recipe_content['in_campaign']) : ?>
        <?php if ($detect_device == 'desktop'): ?>          
            <?php print render($recipe_content['desktop_right_rail_ad_block2']); ?><br/>
        <?php endif; ?>
      <?php endif; ?> 
      <div id="ad_300x250_wrapper"></div><br/> 
      <div id="ad_300x100_wrapper"></div><br/>
    </div>
  </div>    
</div>


<span id="omniture_vars" style="display:none !important;">
  <span class="content_id">
    <?php print $recipe_content['nid']; ?>
  </span>
  <span class="content_path">
    <?php print $recipe_content['url']; ?>
  </span>
  <span class="published_date">
    <?php if (isset($recipe_content['tracking']['slide_published_date'])) print $recipe_content['tracking']['slide_published_date']; ?>
  </span>
  <span class="slide_authors">
    <?php print $recipe_content['tracking']['slide_authors']; ?>
  </span>
  <span class="slide_terms">
    <?php print $recipe_content['tracking']['slide_terms']; ?>
  </span>
  <span class="adfactory_theme">
    <?php print $recipe_content['tracking']['adfactory_theme']; ?>
  </span>
  <span class="adfactory_sub">
    <?php print $recipe_content['tracking']['adfactory_sub']; ?>
  </span>
  <span class="adfactory_nid">
    <?php print $recipe_content['tracking']['adfactory_nid']; ?>
  </span>
</span>

<?php print $recipe_content['spot_im_schema_output']; ?>
<?php if (isset($recipe_content['top_video_hidden_player']) &&
    !empty($recipe_content['top_video_hidden_player'])) :
  ?>
  <div id="playerLightbox" class="playerHide">
    <div id="playerClose" class="playerClose">Close</div>
  <?php print $recipe_content['top_video_hidden_player']; ?>
  </div>
<?php endif; ?>
<!-- Recipe ratings and reviews in page HTML -->
<?php print $recipe_content['recipe_reviews']; ?>
