<item>
  <title><?php print '<![CDATA[' . $row_content['title'] . ']]>'; ?></title>
  <link><?php print $row_content['link']; ?></link>
  <description><?php print '<![CDATA[' . $row_content['description'] . ']]>'; ?></description>
  <pubDate><?php print $row_content['published_date']; ?></pubDate>
  <guid><?php print $row_content['guid']; ?></guid>
  <?php foreach ($row_content['slides'] as $slide): ?>
  <?php if(!empty($slide['img_original_url'])) :?>
    <media:content url="<?php print $slide['img_original_url']; ?>" 
                   type="<?php print $slide['mime_type']; ?>">
      <?php if(!empty($slide['title'])) :?>
        <media:title><?php print '<![CDATA[' . $slide['title'] . ']]>'; ?></media:title>
      <?php endif;?>
      <?php if(!empty($slide['description'])) :?>
        <media:description><?php print '<![CDATA[' . $slide['description'] . ']]>'; ?></media:description>
      <?php endif;?>
      <?php if(!empty($slide['imgUrl'])) :?>
        <media:thumbnail url="<?php print $slide['imgUrl']; ?>" />
      <?php endif;?>
      <?php if(!empty($slide['credit'])) :?>
        <media:credit role="author"><?php print '<![CDATA[' . $slide['credit'] . ']]>'; ?></media:credit>
      <?php endif;?>
    </media:content>
  <?php endif;?>
  <?php endforeach; ?>  
</item>
