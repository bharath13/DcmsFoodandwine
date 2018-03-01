 <?php 
/**
 * Gallery end slate pagination
 *
 * @param $prev and $next links
 * 
 */
 ?> 
 <div class="image-wrap">  
   <?php if (!empty($prev)): ?>
     <a rel="prev" href="<?php print $prev['url']; ?>" class="pagination-btn pagination-btn--prev">
       <?php print theme('pagination-arrow'); ?>      
     </a> 
     <div class="prev-slate-title"><?php print $prev['title']; ?></div>
   <?php endif; ?>    
   <?php if (!empty($next)): ?>   
     <div class="next-slate-title"><?php print $next['title']; ?></div>
     <a rel="next" href="<?php print $next['url']; ?>" class="pagination-btn pagination-btn--next">      
       <?php print theme('pagination-arrow'); ?>
     </a>
   <?php endif; ?>  
 </div> 
  