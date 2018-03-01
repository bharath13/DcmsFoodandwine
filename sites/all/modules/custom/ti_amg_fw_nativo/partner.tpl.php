<?php

/**
 * @file
 * Template file for Nativo B page.
 */
theme('pager');
?>

<div class="page-container">
  <div class="l-two-col">
    <article class="l-two-col__left l-two-col__left--wide-primary feature">
      <?php if ($page_info['detect_device'] != 'desktop'): ?>
        <div class="ad ad--300x600"><div id="device_multiad_300x250_wrapper"></div></div>
      <?php endif; ?> 
      <!-- ti_amg_fw_nativo.tpl.php -->
      <div class="title-prefix">
        <h1><!-- @Title --></h1>
      </div>
      <div class="content-top">
        <h5>By <!-- @Author --> | Posted <!-- @Datetime --></h5>
      </div>
      <!-- @Content -->
      <?php if ($page_info['detect_device'] != 'desktop'): ?>
        <div class="ad ad--300x600"><div id="device_ad_300x250_wrapper"></div></div>            
      <?php endif; ?>
    </article>
    <?php
    // If nativo is not added to Sponsor Logo Campaign.
    if (!$page_info['is_nativo_campaign']) :
      ?>
      <div class="l-two-col__right">
          <?php if ($page_info['detect_device'] == 'desktop'): ?>
          <div class="ad ad--300x600">    
            <div id="ad_multiad_300x250_wrapper"></div>            
          </div>
            <?php print render($page_info['right_rail_block2']); ?><br/>
          <div class="ad ad--300x600">
            <div id="ad_300x250_wrapper"></div>
          </div>
          <div class="newsletters-section">
            <?php print render($page_info['newsletters']); ?>
          </div>
          <br/>
          <div id="market_place_ad_wrapper" class="marketplace-ad"></div>
          <?php endif; ?>
      </div>
      <?php
    // If nativo is added to Sponsor Logo Campaign.
    else:
      ?>
      <div class="l-two-col__right">
          <?php if ($page_info['detect_device'] == 'desktop'): ?>
          <div class="ad ad--300x600">    
            <div id="ad_multiad_300x250_wrapper"></div>
          </div>
          <br/>
          <div class="newsletters-section">
            <?php print render($page_info['newsletters']); ?>
          </div><br/>
          <div class="ad ad--300x600">
            <div id="ad_300x250_wrapper"></div>
          </div><br/>
          <div id="market_place_ad_wrapper" class="marketplace-ad"></div>
          <?php endif; ?>
      </div>
    <?php endif; ?>
  </div>
</div>
