<?php
/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */
//print_r($children_links);
?>
<header>
  <h1 class="html-site-map__headline"><?php print $page_title; ?></h1>
  <?php print $breadcrumbs ?>
</header>
<?php foreach ($children_links as $key => $children_link): ?>
  <ul class="dynamic-links">
    <li>
      <?php print $children_link; ?>
    </li>
  </ul>
<?php endforeach; ?>
<br>
<?php foreach ($nodes as $index => $node): ?>
  <ul class="dynamic-links">
    <li>
      <?php print $node; ?>
    </li>
  </ul>
<?php endforeach; ?>
<?php print $sf_pager; ?>

