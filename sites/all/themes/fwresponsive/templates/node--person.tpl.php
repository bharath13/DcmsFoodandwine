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
  //Printing classic aspen menu.
  if (isset($content['person_content']['sub_header'])) :
    print render($content['person_content']['sub_header']);
  endif;
?>
<div id="node-<?php print $node->nid; ?>"
  class="<?php print $classes; ?>"<?php print $attributes; ?>>
  <div class="page-container">
    <div class="l-two-col">
      <article class="l-two-col__left feature">
       <?php if (isset($content['person_content']['hero_image']['hero_img_content']) && $content['page_template'] == 'person'): ?>
          <header class="feature__header">
             <?php print $content['person_content']['hero_image']['hero_img_content']; ?>
          </header>
        <?php endif; ?>
        <div class="l-two-col">
          <div class="l-two-col__left l-two-col__left l-two-col__right__primary">
            <?php if ($content['page_template'] == 'person') : ?>
              <?php print $content['person_content']['insert_image']['main_img_content']; ?>
            <?php endif; ?>
            <h1 class="feature__header-title">
              <?php print $content['person_content']['title']; ?>
            </h1>
            <?php if ($content['page_template'] == 'person') : ?>
              <div class="feature__info">
                <div class="feature__info-top">
                  <?php print $content['person_content']['byline']; ?>
                </div>
                <?php if ((isset($content['person_content']['hero_image']['hero_img_content'])) && (!empty($content['person_content']['deck']))) : ?>
                  <div class="feature__info-intro">
                    <?php print render($content['person_content']['deck']); ?>
                  </div>
                <?php endif; ?>
              </div>
              <div class="social-wrapper person-social">
                <?php print $content['person_content']['social_share_section']; ?>
              </div>
            <?php endif; ?>
          </div>
          <div class="l-two-col__right more_content_wrapper l-two-col__right__secondary" >
            <?php if ((!isset($content['person_content']['hero_image']['hero_img_content'])) && (!empty($content['person_content']['deck'])) && ($content['page_template'] == 'person')) : ?>
              <div class="feature__info-intro">
                <?php print render($content['person_content']['deck']); ?>
              </div>
            <?php endif; ?>
            <?php if ($content['page_template'] == 'person') : ?>
              <?php print $content['person_content']['more_links']; ?>
            <?php endif; ?>
          </div>
        </div>
        <?php
        $mobile_class = '';
        if ($content['person_content']['detect_device'] == 'mobile'):
          $mobile_class = 'mobile_blog_remove_space';
        endif;
        ?>
        <div class="l-two-col">
          <div class="ad ad--300x600">
            <div id="device_multiad_300x250_wrapper"></div>
          </div>
          <?php if ($content['page_template'] == 'person') : ?>
            <div class="feature__content divider">
              <?php print $content['person_content']['related_links']; ?>
              <?php print render($content['person_content']['body']); ?>
            </div>
            <div class="<?php print $mobile_class; ?> ad ad--300x600">
              <!-- Lazy loading the ad for phone and tablet -->
              <div id="device_ad_300x250_wrapper"></div>
            </div>
            <?php print $content['person_content']['related_content']['series']; ?>
          <?php else: ?>
          <?php
          //Add a condition here display only when it is paginated content.
            print $content['person_content']['pagination_content'];
            print $content['pager'];
          ?>
          <?php endif; ?>
        </div>
      </article>
      <div class="l-two-col__right <?php print $mobile_class; ?>">
        <div class="ad ad--300x600">
          <div id="ad_multiad_300x250_wrapper"></div>
        </div>
          <!-- Outbrain and newsletters are rendered depends on the device -->
          <div id="outbrain-wrapper" class="rightrail_outbrain"></div>
          <div class="ad ad--300x600">
            <!-- Lazy loading the ad for desktop -->
            <div id="ad_300x250_wrapper"></div>
          </div>
          <?php if ($content['person_content']['detect_device'] == 'desktop'): ?>
          <div class="newsletters-section" id="newsletters-section">
            <?php print render($content['person_content']['newsletters']); ?>
          </div>
          <?php endif; ?>
          <div id="ad_300x100_wrapper"></div><br/>
      </div>
    </div>
    <!-- You May Also LIke Oitbrain-->
    <div id="device_ad_300x100_wrapper"></div><br/>
  </div>
</div>
