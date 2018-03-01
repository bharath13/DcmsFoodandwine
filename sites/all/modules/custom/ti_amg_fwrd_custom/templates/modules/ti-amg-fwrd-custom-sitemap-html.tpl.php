<?php
/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */
?>
<header>
  <h1 class="html-site-map__headline"><?php print $page_title; ?></h1>
  <?php print $breadcrumbs ?>
</header>
<?php foreach ($dynamic_links as $index => $link): ?>
  <ul class="dynamic-links">
    <li>
      <?php print $link; ?>
    </li>
  </ul>
<?php endforeach; ?>


