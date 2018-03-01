<?php

/**
 * Pul Quotes
 *
 * @param: $pull_quote string
 * Optional Params:
 * @param array $classes Optional wrapper classes.
 */
  if (!empty($pull_quote)): 
?>
<div class="feature__blockquote">
  <blockquote><?php print $pull_quote; ?></blockquote>
</div>
<?php endif; 
