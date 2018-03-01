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

<div id="node-<?php print $node->nid; ?>" 
  class="<?php print $classes; ?>"<?php print $attributes; ?>>
  <div class="page-container video l-two-col">
    <div class="l-two-col__left">
      <div itemscope itemtype="http://schema.org/VideoObject">  
        <div class="video__header">
          <?php print $content['video_content']['breadcrumbs']; ?>
        </div>

        <article class="story-card story-card--feature-lg story-card--is-video story-card--is-video-alt">
          <?php print $content['video_content']['video_tout']; ?>
          <div class="video-social">
            <?php print $content['video_content']['social_share_section']; ?>
          </div>  
        </article>
        <?php print $content['video_content']['video-carousel']; ?>
        <?php (!empty($content['video_content']['deck'])) ? $item_prop_desc = 'itemprop="description"' : $item_prop_desc = ''; ?>
        <div <?php print $item_prop_desc; ?> class="story-card__text"><?php print render($content['video_content']['deck']); ?></div>
        <?php if (!empty($content['video_content']['description'])) : ?>
          <?php (empty($content['video_content']['deck'])) ? $item_prop_desc = 'itemprop="description"' : $item_prop_desc = ''; ?>
          <div <?php print $item_prop_desc; ?> class="feature__content divider">
            <?php print render($content['video_content']['description']); ?>
          </div>
        <?php endif;?>
        <!-- VIDEO TRANSCRIPT -->
         <?php
         if (isset($content['video_content']['transcript'])) :
           print $content['video_content']['transcript'];
         endif;?>

        <!-- GALLERY NATIVO AD UNIT FOR TABULATE AND MOBILE -->
        <div class="gallery--nativo-ad-holder">
          <div id="device_ad_300x100_wrapper"></div>
        </div>

        <!-- You May Also LIke Oitbrain-->  
        <?php print theme('bottom-module-first'); ?>
        <div style="display:none"> 
            <?php if (empty($content['video_content']['deck']) && empty($content['video_content']['description'])) : ?>
              <div itemprop="description"><?php print $content['video_content']['title']; ?></div>
            <?php endif; ?>
            <img itemprop="thumbnailUrl" src="<?php print $content['video_content']['video_img_url']; ?>" alt="<?php print $content['video_content']['title']; ?>" />
            <link itemprop="contentUrl" href="<?php print $content['video_content']['video_bc_info']['video_url']; ?>" />
            <meta itemprop="uploadDate" content="<?php print $content['video_content']['video_published_date']; ?>"/>
            <meta itemprop="duration" content="<?php print $content['video_content']['video_duration']; ?>" />
        </div>
 
    </div>    
  </div>
  <!-- REMOVE INLINE STYLES! -->
  <div class="l-two-col__right">
      <div class="ad ad--300x600">
        <div id="ad_multiad_300x250_wrapper"></div>
      </div>
      <div id="ad_300x100_wrapper"></div><br/>

       <?php if ($content['video_content']['detect_device'] == 'desktop'): ?>
        <?php print theme('ti_amg_fw_outbrain_redesign', array( 'widget_id' => 'SB_4', 'title' => '', 'carousel_slide_url' => $content['video_content']['path_alias'])); ?> <br/>
       <?php endif; ?>
    </div>
  </div>
</div>
