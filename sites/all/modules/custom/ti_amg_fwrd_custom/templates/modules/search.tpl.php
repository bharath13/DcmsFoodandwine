<?php 
/**
 * Search Form Block
 *
 */

  $block = module_invoke('search', 'block_view', 'search');
  print render($block);
?>

