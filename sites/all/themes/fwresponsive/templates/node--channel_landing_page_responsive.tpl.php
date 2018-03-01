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
<?php
// Printing classic aspen menu.
if (isset($content['landing_content']['sub_header'])) :
  print render($content['landing_content']['sub_header']);
endif;
?>
<div class="ad" id="sponsor_logo_container"></div>
<div id="node-<?php print $node->nid; ?>" 
     class="<?php print $classes; ?>"<?php print $attributes; ?>>

  <!--  Landing Filmstrip Section --> 
  <?php
  print theme('filmstrip', array(
    'slides' => $content['landing_content']['filmstrip'],
  ));
  ?>

  <div class="page-container page-heading">
    <div class="sponsor__ad">
      <div class="sponsor__ad-interior">
        <!-- span class="sponsor__ad-text">Powered By:</span -->
        <div class="sponsor__ad-container">
          <!--  ?php print render($content['landing_content']['ad_88_31']); ? -->
        </div>
      </div>
    </div>
    <div class="page-heading__interior">
      <h1 class="page-heading--title"><?php print $content['landing_content']['title']; ?></h1>
      <div class="page-heading--desc show-more__container show-more__container--closed">
        <span class="page-heading--desc-interior show-more__content"><?php print render($content['landing_content']['deck']); ?></span>
      </div>
      <?php if (!empty($content['landing_content']['see_more']) && $content['landing_content']['see_more']): ?>
        <span class="page-heading__link">Read More</span>
      <?php endif; ?>
    </div>
  </div>

  <!--  Hero Carousel Section --> 
  <?php
  print theme('landing-hero-carousel', array(
    'slides' => $content['landing_content']['hero_carousel'],
    'recipe_carousel_flag' => $content['landing_content']['recipe_carousel_flag'],
    'img_path' => $content['landing_content']['img_path'],
  ));
  ?>
  <div class="page-container">
    <div class="l-two-col l-two-col--landing section-container">
      <div class="l-two-col__left">
        <?php
        print theme('spotlight-tout', array(
          'pull_quote' => $content['landing_content']['staff_pick_content'],
          'type' => 'staffpick',
          'alt_design' => TRUE,
        ));
        ?>
        <div id="device_multiad_300x250_wrapper" class="ad ad--300x600"></div>    
        <!--  Hero Carousel module --> 
<?php print $content['landing_content']['latest_section']['content']; ?>
<?php print render($content['landing_content']['latest_section_more_link']); ?>
      </div>

      <div class="l-two-col__right">
        <!-- If a page is not added under sponsor logo campaign -->
        <?php if (!$content['in_campaign']) : ?>
          <div id="ad_multiad_300x250_wrapper"></div>
          <div id="device_ad_300x250_wrapper" class="ad ad--300x600"></div>
  <?php print $content['landing_content']['most_popular']; ?><br/>
          <!-- Nativo Ad unit for tabulate and mobile -->
          <div id="device_ad_300x100_wrapper"></div>
          <div id="ad_300x250_wrapper"></div>

        <?php else: ?>
          <!-- If a page is added under sponsor logo campaign -->
          <div id="ad_multiad_300x250_wrapper"></div>
          <div id="device_ad_300x250_wrapper" class="ad ad--300x600"></div>
          <?php if ($content['landing_content']['detect_device'] == 'desktop'): ?>
            <div class="newsletters-section" id="newsletters-section">
            <?php print render($content['landing_content']['newsletters']); ?>
            </div>
          <?php endif; ?>
          <!-- Nativo Ad unit for tabulate and mobile -->
          <div id="device_ad_300x100_wrapper"></div><br/>
          <div id="ad_300x250_wrapper"></div>
        <?php endif; ?>
        <div id="ad_300x100_wrapper"></div><br/>
        <?php if (!$content['in_campaign']) : ?>
          <?php if (!$content['hide_marketplace']) : ?>
            <?php if ($content['landing_content']['detect_device'] == 'desktop'): ?>
              <!-- Marketplace Ad placeholder-->
              <div id="market_place_ad_wrapper" class="marketplace-ad"></div>
            <?php endif; ?>
          <?php endif; ?>
        <?php endif; ?>  
      </div>
    </div>
  </div>

  <!--  Travel Guildes Section --> 
  <?php
  if ($content['landing_content']['show_recipe_slider'] && (!$content['landing_content']['bottom-carousel-manual'])) :
    print $content['landing_content']['recipe_slider'];
  else:
    if (!empty($content['landing_content']['travel_guides'])) :
      print $content['landing_content']['travel_guides'];
    endif;
  endif;
  ?>

  <!--  SEO Links Section --> 
  <div class="page-container">
  <?php print $content['landing_content']['seo_links_section']; ?>
  </div> 

    <?php if ((!isset($content['mm_footer_set']) || (!$content['mm_footer_set'])) && (!empty($content['landing_content']['newsletters_opt']))) : ?>
      <div class="page-container page-container__bottom grid grid--2">
        <?php print $content['landing_content']['newsletters_opt']; ?>
        <?php print $content['landing_content']['subscribe_opt']; ?>
      </div>
    <?php endif; ?>

</div>
