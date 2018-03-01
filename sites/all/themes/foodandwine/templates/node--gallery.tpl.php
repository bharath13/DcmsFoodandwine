<?php

/**
 * @file
 * Default theme implementation to display a node.
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
<div id="node-<?php print $node->nid; ?>" class="<?php print $classes; ?> clearfix"<?php print $attributes; ?>>

  <?php print $user_picture; ?>

  <?php print render($title_prefix); ?>
  <?php if (!$page): ?>
    <h2<?php print $title_attributes; ?>><a href="<?php print $node_url; ?>"><?php print $title; ?></a></h2>
  <?php endif; ?>
  <?php print render($title_suffix); ?>

  <?php if ($display_submitted): ?>
    <div class="submitted">
      <?php print $submitted; ?>
    </div>
  <?php endif; ?>
    
  

  <div class="content"<?php print $content_attributes; ?>>
    <?php
// We hide the comments and links now so that we can render them later.
hide($content['comments']); hide($content['links']);
//print render($content);
?>

<?php if ($_COOKIE['TI_PREFS'] == 'phone'): ?>
      <div class="row slideshow-title-row">
          <div class="col-md-10">
              <h1 class="slideshow-title"><?php print $title; ?></h1>
          </div>
          <div class="col-md-2">
            <div class="slideshow-view-toggle">
                <div class="slide-view-button active">
                <div class="slide-view-icon"></div>
                </div>
                <div class="list-view-button">
                <div class="list-view-icon"></div>
                </div>
            </div>
          </div>
      </div>
    <?php
else : ?>
    <?php if ($hd_layout): ?>   
      <div id='slideshow-head'>
        <h1><?php print $title; ?></h1>
        <div id='slideshow-dek'>
          <div class='dek'><?php print $deck; ?></div>
        </div>
      </div>
      <div class="clearer"></div>
      <div id='slideshow-nav'>
        <div class='count'>Slide
          <span id='current'><?php print $current_slide_count; ?></span> of
          <span id='total-count'><?php print $total_slide_count; ?></span>
        </div>    
        <ul>
          <li class='back back-slide disabled '>&lt; back</li>
          <li class='next-slide next '>next &gt;</li>
        </ul>
      </div>
      <?php //Setting page number to Tealium UDO
      ti_udo_set("page_number", $current_slide_count);
      ?>

      <div class='four-columns' id='slideshow-wrapper'>
        <div id='slideshow-body'>
          <div id='slides-container'>
            <div class='slide-back back'></div>
            <div class='slide-next next'></div>
          </div>
          <div id='slides' style='left:0px;'>
            <div class='slide'>
              <img alt="<?php print $first_slide_img_alt; ?>" class="slide-image" src="<?php print $first_slide_img_url; ?>" />
            </div>
          </div>        
        </div>
        <div id='slideshow-options'><a id='see-all'></a></div>
      </div>    


      <div id='slide-rr'>
        <div class='slug'><?php print $slideshow_type; ?></div>
        <h2>
          <?php 
          print $first_slide_link_title;
          ?>
        </h2>
        <div id='recipe-link-container'>
          <?php print $first_slide_link_button; ?>
        </div>
        <div id='slide-dek'>
          <div id='dek-container'>
            <div class='dek'><?php print $first_slide_deck; ?></div>
            <div id='dek-bottom'></div>
            <a class='show-hide'>More &#8744;</a>
            <div id ="plus-link"></div>
            
            </div>
          </div>
        <div class="slidshow-sidebar">
      
      <div class="double-divider"></div>
            <div id="slideshow_ads">
              <div id="ad_multiad_300x250">
                <p class="adtxt"><span>Advertisement</span></p>
                <script type="text/javascript">
                  ad = adFactory.getMultiAd(new Array("300x250", "300x600"));
                  ad.setPosition("1");
                  ad.write("ad_multiad_300x250","companion");
                </script>
              </div>
              <div class="double-divider"></div>
              <div id="ad_300x100_1">
                <script type="text/javascript">
                  ad = adFactory.getAd("300", "100");
                  ad.setPosition("1");
                  ad.write("ad_300x100_1");
                </script>
              </div>
              <div class="outbrain_sec">
                <?php if (!empty($slds_rr_outbrain)) 
                  { 
                   print $slds_rr_outbrain;                   
                  } ?>
              </div>
              <div id="cmadsld_300x250"><script type="text/javascript">ad = adFactory.getCmAd(300,250,"slideshow","tout");ad.write("cmadsld_300x250");</script></div>
                  <div class="double-divider"></div>
                    <?php if (!empty($slds_rr_top_chef)) 
                      { 
                      print $slds_rr_top_chef;                       
                      } ?>
                    <div class="double-divider"></div>
                    <div id='marketplace'>                
                      <div class="slideshow-marketplace">
                        <div id="ad_142x70_1">
                          <script type="text/javascript">
                            ad = adFactory.getAd("142", "70");
                            ad.setPosition("1");
                            ad.write("ad_142x70_1");
                          </script>
                        </div>
                        <div id="ad_142x70_2">
                            <script type="text/javascript">
                              ad = adFactory.getAd("142", "70");
                              ad.setPosition("2");
                              ad.write("ad_142x70_2");
                            </script>
                        </div>
                        <div id="ad_142x70_3">
                            <script type="text/javascript">
                              ad = adFactory.getAd("142", "70");
                              ad.setPosition("3");
                              ad.write("ad_142x70_3");
                            </script>
                        </div> 
                      </div>                 
                  </div>
            <div class="double-divider"></div> 
        </div>
        </div>      
      </div>

      <div id='under-slide-container'>
        <div id='photo-credit'></div>
        <?php print $first_slide_link_button; ?>
      </div>

      <div id='slideshow-carousel'>
        <span id='mycarousel-prev'></span>
        <div id='fw-carousel-container'>
            <div id='fw-carousel' style='width: <?php print $carousel_width_pixels; ?>'>
            <?php print $carousel_list; ?>
          </div>
        </div>
        <span id='mycarousel-next'></span>
      </div>
      <div class='feature-separator'></div>

      <div style="display:none;" id="last-slide">
        <div class="you-might-like"><?php print $you_might_like_text; ?></div>
        <div class="preview-image">
          <img height="190" width="190" src="<?php print $next_slideshow_slide_img_url; ?>">
        </div>
        <div class="preview-title"><?php print $next_slideshow_title; ?></div>
        <div class="leading-text"><?php print $leading_text; ?></div>
      </div>
      
      
      <div class='ui-widget-content' id='see-all-slideshows' style='display:none;'>
        <div id="close-see-all"></div>
        <div id="slideshow-gallery"></div>
      </div>
    <?php endif; ?> 

    <?php if ($std_layout): ?>
      <div id="slideshow-head">
        <?php print $recent_galleries_link; ?>
        <div class="page-title"><?php print $static_title; ?></div>
        <h1><?php print $title; ?></h1>
      </div>

      <div id="slideshow-nav">
        <div class="count">Slide <?php print $current_slide_count; ?> of <?php print $total_slide_count; ?></div>
        <ul>
          <li><?php print $prev_slide_link; ?></li>
          <li><?php print $next_slide_link; ?></li>
        </ul>
      </div> 
      <?php print $std_slideshow_content; ?>
      <div class="feature-separator"></div>
    <?php endif; ?>
    <?php endif; ?>  
  </div>

  <?php print render($content['links']); ?>

  <?php print render($content['comments']); ?>

</div>

