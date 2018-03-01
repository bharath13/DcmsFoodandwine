<?php
/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */
?>
<div class="page-heading__interior">
  <?php if(!empty($title)) :?>
    <h1 class="page-heading--title"><?php print $title; ?></h1>
  <?php endif;?>
  <?php if(!empty($deck)) :?>
    <div class="page-heading--desc show-more__container show-more__container--closed">
      <span class="page-heading--desc-interior show-more__content"><?php print render($deck); ?></span>
    </div>
    <?php if($show_more): ?>
      <span class="page-heading__link">Read More</span>
    <?php endif;?>
  <?php endif;?>
</div>
