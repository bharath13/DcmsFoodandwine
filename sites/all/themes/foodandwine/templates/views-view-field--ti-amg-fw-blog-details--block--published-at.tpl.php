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
$field_author_mobile = $row->field_field_author[0]['raw']['entity']->title;
$field_author = '';
foreach ($row->field_field_author as $key => $value) {
  $field_author .= ', ' . $value['rendered']['#markup'];
}
$field_author = substr($field_author, 2);
if ($_COOKIE['TI_PREFS'] == 'phone') {
  print '<div class="field_author">BY ' . $field_author_mobile . '</div>';
  print '<div class="field_published">' . $output . '</div>';
}
else {
  print 'BY ' . $field_author . ' | ' . $output;
}


