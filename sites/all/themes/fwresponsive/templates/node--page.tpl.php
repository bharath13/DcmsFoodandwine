<?php
$class_two_column = (!$disable_second_sidebar) ? 'l-two-col__left l-two-col__left--wide-primary feature' : '';

if (isset($sub_header)) :
  print render($sub_header);
endif;
?>
<div id="node-<?php print $node->nid; ?>" 
     class="<?php print $classes; ?>"<?php print $attributes; ?>>
  <?php if (!$disable_all): ?>   
    <div class="page-container">
      <div class="l-two-col">
        <article class="<?php print $class_two_column; ?>">
          <?php if ((!$disable_second_sidebar) && $page_ads['detect_device'] != 'desktop'): ?>
            <div class="ad ad--300x600"><div id="device_multiad_300x250_wrapper"></div></div>
          <?php endif; ?> 
          <?php print render($html_content); ?>       
          <?php if ((!$disable_second_sidebar) && $page_ads['detect_device'] != 'desktop'): ?>
            <div class="ad ad--300x600"><div id="device-lazy-load-ad-holder"></div></div>            
          <?php endif; ?>
          <?php if ((!$disable_second_sidebar) && $page_ads['detect_device'] == 'tablet'): ?>
            <div id="device_ad_300x100_wrapper"></div><br/>
          <?php endif; ?> 
        </article>
        <?php if (!$disable_second_sidebar) : ?>
          <div class="l-two-col__right">
            <?php if ($page_ads['detect_device'] == 'desktop'): ?>
              <div class="ad ad--300x600">
                <div id="ad_multiad_300x250_wrapper"></div>
              </div>
              <?php print render($page_ads['right_rail_block2']); ?><br/>
              <div class="ad ad--300x600">
                <div id="ad_300x250_wrapper"></div>
              </div>
              <div class="newsletters-section">
                <?php print render($page_ads['newsletters']); ?>
              </div>
              <div id="ad_300x100_wrapper"></div><br/>
              <div id="market_place_ad_wrapper" class="marketplace-ad"></div>
            <?php endif; ?>         
          </div>
        <?php endif; ?>
      </div>
    </div>
  <?php else: ?>
    <div> 
       <?php print render($html_content); ?>  
    </div>
  <?php endif; ?>
</div>
