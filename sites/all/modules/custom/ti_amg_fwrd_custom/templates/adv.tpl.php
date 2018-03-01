<?php
 /* param $ad_resolution */

  global $global_ad_slide;

  $block = module_invoke('ti_amg_ads', 'block_view', $ad_resolution);

  $embed_view = render(array_pop ($block));

  $global_ad_slide = $output = $embed_view;
        
  print $output;

?>
