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
 * - $type: Node type, i.e. story, p fage, blog, etc.
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
<?php (isset($_GET['list'])) ? $is_list = TRUE : $is_list = FALSE;
  global $base_path;
  global $base_url;
  $current_url = $base_url . base_path() . request_path();

  //Printing classic aspen menu.
  if (isset($content['gallery_content']['sub_header'])) :
    print render($content['gallery_content']['sub_header']);
  endif;
?>
<div class="ad" id="sponsor_logo_container"></div>
<div id="node-<?php print $node->nid; ?>" 
  class="<?php print $classes; ?>"<?php print $attributes; ?>>
  <div class="page-container gallery l-two-col" data-js-component="galleryPage">
    <div class="l-two-col__left">
    <div class="page-heading page-heading--alt">
      <div class="page-heading__top">
        <div class="gallery__breadcrumbs">
          <?php print $content['gallery_content']['breadcrumbs']; ?>
        </div>
      </div>
      <div class="page-heading__interior" data-js-component="showMore">
        <h1 class="page-heading--title">
          <?php print $content['gallery_content']['title']; ?>
        </h1>
      </div>
      <!--  ?php print theme('social-share', array(
        'url' => 'http://www.foodandwine.com/recipes/grilled-vegetables-with-green-goddess-dressing',
        'hide_print' => true
      )); ? -->
    </div>
<section class="gallery-section-container">
      <?php print $content['gallery_content']['end_slate_wrapper']; ?> 
      <article class="gallery__container">
        <div class="image-wrap<?php print ($is_list) ? ' image-wrap--list' : '" data-js-component="gallerySlider'; ?>">
          <?php print theme('gallery-slides', array(
          'items' => $content['gallery_content']['slideshow'],
          'pagination' => $content['gallery_content']['slideshow']['pagination'],
          'is_list' => $is_list
          )); ?>
        </div>
        <div class="slideshow-deck-social">
          <?php print $content['gallery_content']['social_share_section']; ?>
          <div class="page-heading--desc show-more__container">
            <span class="page-heading--desc-interior show-more__content">
              <?php print render($content['gallery_content']['deck']); ?>
            </span>
          </div>          
        </div>
      </article>
    </section>  
    <!-- You May Also LIke Oitbrain-->  
    <?php if (!$content['in_campaign']) : ?>
     <div id="outbrain-wrapper-bottom"></div>
    <?php endif;?>
    <!-- GALLERY NATIVO AD UNIT FOR TABULATE AND MOBILE -->
    <div class="gallery--nativo-ad-holder">
      <div id="device_ad_300x100_wrapper"></div>
      <?php //print render($content['gallery_content']['tablet_ad_block3']); ?>
      <?php //print render($content['gallery_content']['mobile_ad_block3']); ?>
    </div>
    <!-- div class="tablet-ad advertisement ad-tablet-300x250" -->
      <!--  ?php print render($content['gallery_content']['tablet_ad_block1']); ? -->
    <!-- /div -->
    <?php print $content['gallery_content']['related_content']; ?>
  </div>
  <!-- REMOVE INLINE STYLES! -->
  <div class="l-two-col__right" <?php  /** Temp removed as it breaks the ads:data-js-component="stickyRightRail" */ ?>>
    <div class="gallery-right-rail-section" <?php /** Temp removed as it breaks the ads: data-js-component="stickyRightRail" */ ?> >
      <div class="ad ad--300x600">
        <div id="ad_multiad_300x250_wrapper"></div>
      </div>
      <div id="ad_300x100_wrapper"></div>
      <?php //print render($content['gallery_content']['desktop_rightrail_ad_block4']); ?><br/>
      <!-- Outbrain and newsletters are rendered depends on the device -->         
      <div id="outbrain-wrapper" class="rightrail_outbrain"></div> 
      <?php if (isset($content['gallery_content']['detect_device']) && $content['gallery_content']['detect_device'] == 'desktop'): ?>  
      <div class="newsletters-section" id="newsletters-section">
        <?php print render($content['gallery_content']['newsletters']); ?>
      </div>
      <?php endif; ?>  
      <!--  Commented out the second 300x250 unit -->
      <!--  div class="ad ad--300x250_last" -->
        <!--  ?php print render($content['gallery_content']['desktop_rightrail_ad_last']); ? -->
      <!-- /div -->
    </div>
  </div>
</div>
<!-- Sample Gallery config -->
<script type="text/javascript">
 var gallerySliderConfig =<?php print json_encode($content['gallery_content']['slideshow']); ?>;
</script>

