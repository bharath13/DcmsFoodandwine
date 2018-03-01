<?php 

/**
 * Content List
 *
 * NOTE: "content-list__list-item--active" on currently selected "content-list__list-item"s
 * 
 * @param array $links Array of links and their titles.
 * @param string $list_title Title of this List.
 * 
 * Optional Params:
 * @param array $classes An array of additional classes to add.
 * @param boolean $is_numbered Set whether or not this List is numbered.
 * @param boolean $dropdown Set whether or not this List is a dropdown.
 * @param integer $current_number The current content item's number within this list.
 * Mapped to: ../modules/custom/ti_amg_fwrd_feature/templates/modules/content-list.tpl.php
 */

$classes = !empty($classes) ? implode(' ', $classes) : '';
$links = !empty($links) ? $links : '';

if ($is_numbered) {
  $classes .= " content-list--numbered";
}

if ($dropdown) {
  $classes .= " content-list--dropdown";
}

?>
<div class="content-list <?php print $classes; ?>"
<?php print ($dropdown) ? 'data-js-component="contentListDropdown"' : ''; ?>>
  <div class="content-list__top">
    <h3 class="content-list__heading"><?php print $list_title; ?></h3>
    <?php if ($dropdown): ?>
      <div class="content-list__counter js-dropdown-trigger"><?php print $current_number; ?> of <?php print sizeof($links); ?><svg class="pagination-arrow-icon content-list__counter-arrow" viewBox="0 0 40 40"><use xlink:href="<?php asset('img/spritemap.svg#icon-pagination-arrow'); ?>"></use></svg></div>
    <?php endif; ?>
  </div>
  <ul class="content-list__list<?php print ($dropdown) ? ' js-dropdown' : ''; ?>">
    <?php foreach($links as $link): ?>
    <li class="content-list__list-item">
      <a class="content-list__list-link" href="<?php print $link['url']; ?>"><?php print $link['title']; ?></a>
    </li>
    <?php endforeach; ?>
  </ul>
</div>