<ul class = "main-menu__nav" data-js-toggle-menu-target>
<?php foreach ($sub_menu as $main_link) :?>
    <li class="main-menu__item">
      <?php
      print $main_link['link'];
      if (isset($main_link['leaf'])) :
      ?>
        <ul class="main-menu__sub-menu">
      <?php foreach ($main_link['leaf'] as $submenu_link) : ?>
          <li class="main-menu__sub-menu__item">
      <?php print $submenu_link['link']; ?>
          </li>
      <?php endforeach; ?>
        </ul>
<?php endif; ?>
    </li>
    <?php endforeach; ?>
</ul>
