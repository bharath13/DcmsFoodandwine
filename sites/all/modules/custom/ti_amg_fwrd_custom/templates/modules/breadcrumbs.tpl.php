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
$count = 0;
// default to standard type
$type = isset($type) ? $type : '';

$type_to_class_map = array(
  '' => '',
  'dark' => 'breadcrumbs--dark',
);
?>
<?php if (!empty($links)) : ?>
<ol itemscope itemtype="http://schema.org/BreadcrumbList" class="breadcrumbs <?php print $type_to_class_map[$type]; ?>">
  <?php foreach ($links as $key=>$link): ?>
  <?php $count ++;?>
    <li itemprop="itemListElement" itemscope
      itemtype="http://schema.org/ListItem" class="breadcrumbs__crumb">
      <a itemprop="item" class="breadcrumbs__crumb__link
                <?php if (!empty($link['is_alt'])): ?>
                breadcrumbs__crumb__link--alt
                <?php endif; ?>
               " 
         href="<?php print $link['url']; ?>">
        <span itemprop="name"><?php print $link['label']; ?></span>
        <meta itemprop="position" content="<?php print $count; ?>" />
      </a>
    </li>
  <?php endforeach; ?>
</ol>
<?php endif; ?>
