<?php 

/**
 * Tag Set
 *
 * @param array[][] $tags An array of tags to display. Each tag should contain
 * the following data:
 *
 * Tag:
 * @param string $name The tag name.
 *
 * Optional Params:
 * @param string $url The url the tag should link to.
 */

?>

<?php
$tags_list = '';
if (!empty($tags)) :
	foreach ($tags as $tag):
		if ($tags_list == '') :
			$tags_list = $tag['title'];
		else:
			$tags_list .= ', ' . $tag['title'];
		endif;
	endforeach;
endif;
?>
<?php if (!empty($tags_list)) :?>
	<div class="recipe__tags_list">
		<div class="tags_names">KEY<span>:</span> <?php print $tags_list;?></div>
	</div>
<?php endif;?>
