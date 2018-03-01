<?php

/**
 * @file
 * This template is used to print a single field in a view.
 *
 * It is not actually used in default Views, as this is registered as a theme
 * function which has better performance. For single overrides, the template is
 * perfectly okay.
 *
 * Variables available:
 * - $view: The view object
 * - $field: The field handler object that can process the input
 * - $row: The raw SQL result that can be used
 * - $output: The processed output that will normally be used.
 *
 * When fetching output from the $row, this construct should be used:
 * $data = $row->{$field->field_alias}
 *
 * The above will guarantee that you'll always get the correct data,
 * regardless of any changes in the aliasing that might happen if
 * the view is modified.
 */
?>

<?php
$tag_id = $row->field_collection_item_field_data_field_vlp_category__field_d_3; $terms = taxonomy_term_load($tag_id);

if (!empty($terms->field_video_tags_display[LANGUAGE_NONE][0]['value'])) {
  $tag_display = $terms->field_video_tags_display[LANGUAGE_NONE][0]['value'];
}
else {
  $tag_display = $terms->name;
}
$tags = str_replace(" ", "-", $tag_display);
$output = "<div class=video_rel-articles><a title='$tag_display' href='#" . $tags . "'>" . $tag_display . "</a>";
print $output;


