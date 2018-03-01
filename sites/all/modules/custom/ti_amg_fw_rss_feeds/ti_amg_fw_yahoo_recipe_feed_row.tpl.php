<item>
  <title><?php print '<![CDATA[' . $row_content['title'] . ']]>'; ?></title>
  <link><?php print $row_content['link']; ?></link>
  <description>
    <?php print '<![CDATA[';?>
    <?php if (!empty($row_content['recipe_image']['org_image_path'])) : ?>
      <img src="<?php print $row_content['recipe_image']['org_image_path'];?>">
    <?php endif; ?>
    <?php print $row_content['description'];?>
    <?php print ']]>'; ?>
  </description>
  <pubDate><?php print $row_content['published_date']; ?></pubDate>
  <guid><?php print $row_content['guid']; ?></guid>
  <dc:creator><?php print '<![CDATA[' . $row_content['author'] . ']]>'; ?></dc:creator>
  <content:encoded>
    <?php print '<![CDATA[';?>
    <?php if (!empty($row_content['recipe_image']['org_image_path'])) : ?>
      <img src="<?php print $row_content['recipe_image']['org_image_path']; ?>">
    <?php endif; ?>
    <?php print $row_content['description'];?>
    <?php print ']]>'; ?>
  </content:encoded>
</item>
