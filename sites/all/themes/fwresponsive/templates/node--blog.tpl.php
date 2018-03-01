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
  if (isset($content['feature_content']['sub_header'])) :
    print render($content['feature_content']['sub_header']);
  endif;
?>
<div class="ad" id="sponsor_logo_container"></div>
<div id="node-<?php print $node->nid; ?>"
  class="<?php print $classes; ?>"<?php print $attributes; ?>>
  <div class="page-container">
    <?php if (isset($content['feature_content']['hero_image']['hero_img_content'])) print $content['feature_content']['hero_image']['hero_img_content']; ?>
             <div class="l-two-col">
      <article class="l-two-col__left l-two-col__left--wide-primary feature">
        <header class="feature__header">
          <div class="feature__header-top">
            <?php print theme('content-list', array(
              'list_title' => $content['feature_content']['left_section_list']['title'],
              'is_numbered' => TRUE,
              'list_content' => $content['feature_content']['left_section_list']['content'],
              'dropdown' => TRUE,
              'current_number' => (isset($content['feature_content']['left_section_list']['current_item_number'])) ? $content['feature_content']['left_section_list']['current_item_number'] : 0,
              'img_path' => $content['feature_content']['img_path'],
              'classes' => 'feature__content-list'
            )); ?>
            <div class="feature__header-ad">
              <div class="feature__header-ad-interior">
                <!--  span class="feature__header-ad-text">Powered By:</span -->
                <div class="feature__header-ad-container">
                  <!--  ?php print render($content['feature_content']['ad_88_31']); ? -->
                </div>
              </div>
            </div>
          </div>

          <?php print $content['feature_content']['breadcrumbs']; ?>
          <?php if (!$content['in_campaign']) : ?>
          <div data-js-component="scrollShowTrigger" data-to-show=".content-pager--fixed">
            <?php print theme('feature-pagination', array(
              'next' => $content['feature_content']['pagination']['next'],
              'previous' => $content['feature_content']['pagination']['prev'],
              'show_image' => true,
              'classes_list' => 'feature__content-pager content-pager--stationary'
            )); ?>
          </div>
          <?php endif; ?>
          <h1 class="feature__header-title">
            <?php print $content['feature_content']['title']; ?>
          </h1>

        </header>
        <?php
        $mobile_class = '';
        if ($content['feature_content']['detect_device'] == 'mobile'):
          $mobile_class = 'mobile_blog_remove_space';
        endif;
        ?>

        <div class="l-two-col__left__secondary">
          <div data-js-component="stickyContentList">
            <?php print theme('content-list', array(
              'list_title' => $content['feature_content']['left_section_list']['title'],
              'is_numbered' => false,
              'list_content' => $content['feature_content']['left_section_list']['content'],
              'img_path' =>  $content['feature_content']['img_path'],
              'classes' => 'feature__content-list'
            )); ?>
          </div>
        </div>
        <div class="l-two-col__left__primary">
          <?php if (!empty($content['feature_content']['feature_video'])): ?>
            <div class='video-embed-wrapper'>
              <?php print $content['feature_content']['feature_video']; ?>
            </div>
          <?php
          else:
            print $content['feature_content']['insert_image']['main_img_content'];
          endif;
          ?>
          <div class="feature__info">
            <div class="feature__info-top">
              <?php print $content['feature_content']['byline']; ?>
              <div class="feature__info-top__share">
                <?php print $content['feature_content']['social_share_section']; ?>
              </div>
            </div>
            <div class="feature__info-intro">
              <?php print render($content['feature_content']['deck']); ?>
            </div>
          </div>
          <div class="ad ad--300x600">
            <div id="device_multiad_300x250_wrapper"></div>
          </div>
          <div class="feature__content divider">
            <?php print $content['feature_content']['related_links']; ?>
            <?php print render($content['feature_content']['body']); ?>
          </div>

          <div class="<?php print $mobile_class; ?> ad ad--300x600">
            <!-- Lazy loading the ad for phone and tablet -->
            <div id="device-lazy-load-ad-holder"></div>
          </div>
          <?php print render($content['feature_content']['tablet_ad_block3']); ?>

          <!-- ?php print $content['feature_content']['related_links']; ? -->
            <?php if (!$content['in_campaign']) :
              print theme('feature-pagination', array(
                'next' => $content['feature_content']['pagination']['next'],
                'previous' => $content['feature_content']['pagination']['prev'],
                'classes_list' => 'feature__content-pager content-pager--fixed'
              ));
            endif; ?>

        </div>
      </article>
      <div class="l-two-col__right <?php print $mobile_class; ?>">
        <!-- If a page is not added under sponsor logo campaign -->
        <?php if (!$content['in_campaign']) : ?>
          <div class="ad ad--300x600">
            <div id="ad_multiad_300x250_wrapper"></div>
          </div>
          <!-- Outbrain and newsletters are rendered depends on the device -->
          <div id="outbrain-wrapper" class="rightrail_outbrain"></div>
          <div class="ad ad--300x600">
            <!-- Lazy loading the ad for desktop -->
            <div id="ad_300x250_wrapper"></div>
          </div>
          <?php if ($content['feature_content']['detect_device'] == 'desktop'): ?>
            <div class="newsletters-section" id="newsletters-section">
              <?php print render($content['feature_content']['newsletters']); ?>
            </div>
          <?php endif; ?>
          <!-- If a page is added under sponsor logo campaign -->
        <?php else: ?>
          <div class="ad ad--300x600">
            <div id="ad_multiad_300x250_wrapper"></div>
          </div>
          <?php if ($content['feature_content']['detect_device'] == 'desktop'): ?>
            <div class="newsletters-section" id="newsletters-section">
              <?php print render($content['feature_content']['newsletters']); ?>
            </div>
          <?php endif; ?>
          <div class="ad ad--300x600">
            <!-- Lazy loading the ad for desktop -->
            <div id="lazy-load-ad-holder-desktop"></div>
          </div>

        <?php endif; ?>
        <div id="ad_300x100_wrapper"></div><br/>

        <?php if (!$content['hide_marketplace']) : ?>
          <!-- Marketplace Ad placeholder-->
          <?php if ($content['feature_content']['detect_device'] == 'desktop'): ?>
            <div id="market_place_ad_wrapper" class="marketplace-ad"></div>
          <?php endif; ?>
        <?php endif; ?>
      </div>
    </div>

    <div id="device_ad_300x100_wrapper"></div><br/>
    <!-- You May Also LIke Oitbrain-->
    <?php if (!$content['in_campaign']) :
      print theme('bottom-module-first');
    endif;?>
    <?php if (!$content['in_campaign'] && $content['feature_content']['detect_device'] != 'mobile'):
      print theme('bottom-module-zergnet');
     endif; ?>
  </div>

</div>
