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

  global $base_path;
  global $base_url;
  $current_url = $base_url . base_path() . request_path();
?>

<div id="node-<?php print $node->nid; ?>"
  class="<?php print $classes; ?>"<?php print $attributes; ?>>

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
    <h2 class="page-heading--title"><?php print $content['video_landing_content']['title']; ?></h2>
    <div class="page-heading--desc show-more__container show-more__container--closed">
      <span class="page-heading--desc-interior show-more__content"><?php print render($content['video_landing_content']['deck']); ?></span>
    </div>
    <?php if ($content['video_landing_content']['see_more']): ?>
      <span class="page-heading__link">Read More</span>
    <?php endif; ?>
  </div>
</div>
<?php
  if (!empty($content['video_landing_content']['hero-carousel'])) {
    print $content['video_landing_content']['hero-carousel'];
  }
?>

<div class="page-container">
  <div class="l-two-col l-two-col--landing section-container video-channels">
    <div class="l-two-col__left">
      <section>
        <h3 class="section-heading section-heading--center"><span><?php print $content['video_landing_content']['series-section']['section_title']; ?></span></h3>
        <?php print $content['video_landing_content']['series-section']['series']; ?>
      </section>
    </div>

    <div class="l-two-col__right">
      <div class="ad ad--300x600">
        <div id="ad_multiad_300x250_wrapper"></div>
        <div id="device_multiad_300x250_wrapper"></div>
      </div>
      <?php
      if (!empty($content['video_landing_content']['most-watched'])):
        print render($content['video_landing_content']['most-watched']);
      endif;
      ?>
      <div id="outbrain-wrapper" class="rightrail_outbrain"></div><br/>
      <!-- Lazy loading the ad for desktop -->
      <div id="ad_300x250_wrapper"></div>
      <div id="ad_300x100_wrapper"></div><br/>
    </div>
  </div>
</div>
<!-- GALLERY NATIVO AD UNIT FOR TABULATE AND MOBILE -->
<div class="gallery--nativo-ad-holder ad ad--300x600">
  <!-- Lazy loading the ad for phone and tablet -->
  <div id="device_ad_300x250_wrapper"></div>
  <div id="device_ad_300x100_wrapper"></div>
</div>
<div class="page-container">
  <!-- You May Also LIke Oitbrain-->
  <?php print theme('bottom-module-first'); ?>
</div>

</div>
