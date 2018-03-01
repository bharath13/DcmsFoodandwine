<?php

/**
 * Breadcrumbs
 *
 * @param array[][] $links An array of link arrays.
 *
 * Optional:
 * @param string $type The type of breadcrumbs. Valid values are 'dark'.
 *
 * Link:
 *
 * @param string $label The label for the link.
 * @param string $url The url of the link.
 * @param boolean $is_alt If this link should appear different than the others.
 * 
 */

// default to standard type
$type = isset($type) ? $type : '';

$type_to_class_map = array(
  '' => '',
  'dark' => 'breadcrumbs--dark',
);

?>
<ol class="breadcrumbs <?php print $type_to_class_map[$type]; ?>">
  <?php foreach ($links as $link): ?>
    <li class="breadcrumbs__crumb">
      <a class="breadcrumbs__crumb__link
                <?php if (!empty($link['is_alt'])): ?>
                breadcrumbs__crumb__link--alt
                <?php endif; ?>" 
         href="<?php print $link['url']; ?>">
        <?php print $link['label']; ?>
      </a>
    </li>
  <?php endforeach; ?>
</ol>
