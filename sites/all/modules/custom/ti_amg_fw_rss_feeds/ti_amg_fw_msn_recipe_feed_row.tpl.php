<?php
$main_image_title = '';
if(!empty($row_content['recipe_image']['caption'])) :
    $main_image_title = $row_content['recipe_image']['caption'];
elseif(!empty($row_content['recipe_image']['alt_text'])):
    $main_image_title = $row_content['recipe_image']['alt_text'];
endif;
?>
<item>
  <title><?php print '<![CDATA[' . $row_content['title'] . ']]>'; ?></title>
  <link><?php print $row_content['link']; ?></link>
  <?php if (!empty($row_content['recipe_image'])) : ?>
    <media:content url="<?php print $row_content['recipe_image']['org_image_path']; ?>" type="<?php print $row_content['recipe_image']['image_mime']; ?>">
      <?php if(!empty($row_content['recipe_image']['recipe_carousel_img'])) :?>
        <media:thumbnail url="<?php print $row_content['recipe_image']['recipe_carousel_img']; ?>"/>
      <?php endif;?>
      <?php if(!empty($row_content['recipe_image']['credit'])) :?>
        <media:credit><?php print '<![CDATA[' . $row_content['recipe_image']['credit'] . ']]>'; ?></media:credit>
      <?php endif;?>
      <?php if(!empty($main_image_title)) :?>
        <media:title><?php print '<![CDATA[' . $main_image_title . ']]>'; ?></media:title>
      <?php endif;?>
    </media:content>
  <?php endif; ?>
  <?php if (!empty($row_content['recipe_video'])) : ?>
    <media:content url="<?php print $row_content['recipe_video']['video_url']; ?>" duration="<?php print $row_content['recipe_video']['video_duration']; ?>" type="<?php print $row_content['recipe_video']['video_type']; ?>">
      <?php if(!empty($row_content['recipe_video']['video_thumbnail_url'])) :?>
        <media:thumbnail url="<?php print $row_content['recipe_video']['video_thumbnail_url']; ?>"/>
      <?php endif;?>
      <?php if(!empty($row_content['recipe_video']['video_title'])) :?>
        <media:title><?php print '<![CDATA[' . $row_content['recipe_video']['video_title'] . ']]>'; ?></media:title>
      <?php endif;?>
    </media:content>
  <?php endif; ?>
  <description><?php print '<![CDATA[' . $row_content['description'] . ']]>'; ?></description>  
  <dc:creator><?php print '<![CDATA[' . $row_content['author'] . ']]>'; ?></dc:creator>  
  <dc:publisher><?php print '<![CDATA[' . $row_content['author'] . ']]>'; ?></dc:publisher>
  <pubDate><?php print $row_content['published_date']; ?></pubDate>  
  <guid><?php print $row_content['guid']; ?></guid>
</item>
