<?php 

/**
 * Content List
 *
 * NOTE: "content-list__list-item--active" on currently selected "content-list__list-item"s
 * 
 * @param array $list_content Array of links and their titles.
 * @param string $list_title Title of this List.
 * 
 * Optional Params:
 * @param array $classes An array of additional classes to add.
 * @param boolean $is_numbered Set whether or not this List is numbered.
 * @param boolean $dropdown Set whether or not this List is a dropdown.
 * @param integer $current_number The current content item's number within this list.
 */

$links = !empty($links) ? $links : '';
$title_classes = '';
if ($is_numbered):
  $classes .= " content-list--numbered";
endif;
if ($dropdown):
  $classes .= " content-list--dropdown";
else:
  $title_classes = "highlight-list__heading";
endif;

if (!empty($list_content)):
?>
<div class="content-list <?php print $classes; ?>"
<?php print ($dropdown) ? 'data-js-component="contentListDropdown"' : ''; ?>>
  <div class="content-list__top">
    <div class="content-list__heading <?php print $title_classes; ?>"><?php print $list_title; ?></div>  
    <?php if ($dropdown): ?>
      <div class="content-list__counter js-dropdown-trigger">
        <?php if (!empty($current_number)): ?>
          <?php print $current_number; ?> of <?php print sizeof($list_content); ?>
        <?php endif; ?>
        <svg class="pagination-arrow-icon content-list__counter-arrow" 
        viewBox="0 0 40 40">
        <use xlink:href="<?php 
          print $img_path . '#icon-pagination-arrow'; ?>"></use>
        </svg>
      </div>
    <?php endif; ?>
  </div>
  <ul class="content-list__list<?php print ($dropdown) ? ' js-dropdown' : ''; ?>">
    <?php foreach($list_content as $content): ?>
    <li class="content-list__list-item">
      <?php print($content['link']); ?>
    </li>
    <?php endforeach; ?>
  </ul>
</div>
<?php endif;
