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

<div id="node-<?php print $node->nid; ?>" 
  class="<?php print $classes; ?>"<?php print $attributes; ?>>
  
  <div class="page-container"> 
    <?php
    print $homepage_content['hero_slides']['hero_first_carousel'];
    ?>
    <div class="l-two-col l-two-col--landing section-container">
      <div class="l-two-col__left">
        <?php
        print $homepage_content['hero_slides']['hero_carousels'];
        ?>
        <div class="ad ad--300x600">
          <div id="device_multiad_300x250_wrapper"></div>    
        </div>  
        <?php
          print $homepage_content['latest_stories'];
        ?>
      </div>
      <div class="l-two-col__right">
        <div class="ad ad--300x600">
          <!-- placeholder ad -->
          <div id="device_ad_300x250_wrapper"></div>
          <div id="ad_multiad_300x250_wrapper"></div><br/>
        </div>
        <?php
          /**
           * Most Popular Section .*/
          print $homepage_content['most_popular'];
        ?>
        <!-- Marketplace Ad placeholder-->
        <?php if ($detect_device == 'desktop'): ?>
          <div id="market_place_ad_wrapper" class="marketplace-ad"></div>
        <?php endif; ?>
        <!-- Outbrain and newsletters are rendered depends on the device -->         
        <!-- ?php print theme('bottom-module-first'); ? -->
      </div>      
    </div>

    <!-- Nativo Ad Section Starts -->
    <div class="homepage-nativo-ad">
      <div id = "inilne-nativo-ad"></div>
    </div>
    <!-- Nativo Ad Section Ends -->
      

  </div> <!-- .page-container -->
  <div class="page-container">
    <!-- Feature Image Section -->
    <?php print $homepage_content['feature_section']; ?>
    <!-- Recipe Guides Section -->
    <?php print $homepage_content['recipe_guides']; ?>
  
    <!-- Recipes Slider Section -->
    <?php  print $homepage_content['recipes_slider']; ?>    

    <!-- Video Section -->
    <?php print $homepage_content['video_section']; ?>
    
    <!-- You May Also LIke -->  
    <!--  ?php print theme('bottom-module-first'); ? -->
  </div>
  <?php if ((!isset($content['mm_footer_set']) || (!$content['mm_footer_set'])) && (!empty($homepage_content['newsletters_opt']))) : ?>
  <div class="page-container page-container__bottom grid grid--2">
      <?php print $homepage_content['newsletters_opt']; ?>
      <?php print $homepage_content['subscribe_opt']; ?>
  </div>
  <?php endif; ?>
  
  <?php
           // We hide the comments and links now so that we can render them later.
              hide($content['comments']);
              hide($content['links']);

        // Print render($content);
  ?>

</div>
