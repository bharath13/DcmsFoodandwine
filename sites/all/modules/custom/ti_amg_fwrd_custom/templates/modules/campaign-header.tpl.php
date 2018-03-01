<?php
/**
 * Campaign header block
 * Based on $tag_name header will be changed.
 */
global $base_url;
?>
<div class="site-header campaign">
  <div class="page-container">
    <header> 

      <ul class="logos">
        <li class="tnl" >
          <a href="<?php print variable_get('tl_logo_link', '') ?>">
            <img src="/sites/all/themes/fwresponsive/rdtemplate/assets/img/travel-leisure_logo.png" alt="travel_leisure_logo">
          </a>
        </li>
        <li class="fw">
          <a href="<?php print variable_get('fw_logo_link', '') ?>">
            <img src="/sites/all/themes/fwresponsive/rdtemplate/assets/img/fw-logo.png" alt="fw_logo">
          </a>
        </li>
      </ul>
      <div class="flavor-text">
        <a href="<?php if(($tag_name == 'Local Flavor' ) ? print variable_get('local_flavor_link', '') : print variable_get('local_flavor_international_link', '')) ?>">
          <p><?php print $tag_name; ?></p>
        </a>
      </div>
      <div class="right-logo" id="campaign-nav-bar-ad-holder">        
      </div>

    </header>
  </div>
</div>
