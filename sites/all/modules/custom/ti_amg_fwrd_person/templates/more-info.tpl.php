<?php 

/**
 * More Info
 *
 * @param $output, $content
 * Optional:
 * @param: $classes
 */
 if (!empty($links)):
?>
<div class="more_content_links">
  <div>More from <?php print $person_name; ?></div>
  <ul>
    <?php foreach ($links as $link): ?>
       <li><a href="<?php print '#'. $link; ?>"><?php print $link; ?></a></li>
    <?php  endforeach; ?>  
  </ul>
</div>  
<?php  endif; 