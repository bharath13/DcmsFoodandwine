<item>
  <guid><?php print $row_content['guid']; ?></guid>
  <title><?php print '<![CDATA[' . $row_content['title']. ']]>'; ?></title>
  <link><?php print $row_content['link']; ?></link>
  <description><?php print '<![CDATA[' . $row_content['description'] . ']]>'; ?></description>
  <dc:creator><?php print '<![CDATA[' . $row_content['author']. ']]>';?></dc:creator>
  <?php if (!empty($row_content['slides'])) : ?>
    <media:group>
    <?php foreach ($row_content['slides'] as $slide) : ?>
    <?php if(!empty($slide['img_original_url'])) :?>
      <media:content url="<?php print $slide['img_original_url']; ?>" type="<?php print $slide['mime_type']; ?>">
        <?php if(!empty($slide['imgUrl'])) :?>
          <media:thumbnail url="<?php print $slide['imgUrl']; ?>"/>
        <?php endif;?>
        <?php if(!empty($slide['credit'])) :?>
          <media:credit><?php print '<![CDATA[' . $slide['credit'] . ']]>'; ?></media:credit>
        <?php endif;?>
        <?php if(!empty($slide['title'])) :?>
          <media:title><?php print '<![CDATA[' . $slide['title'] . ']]>'; ?></media:title>
        <?php endif;?>
        <?php if(!empty($slide['description']) || !empty($slide['slide_see_more'])) :?>
          <media:description><?php print '<![CDATA[' . $slide['description'] . $slide['slide_see_more'] . ']]>'; ?></media:description>
        <?php endif;?>
      </media:content>
    <?php endif;?>
    <?php endforeach; ?>
    </media:group>
  <?php endif; ?>
  <pubDate><?php print $row_content['published_date']; ?></pubDate>
</item>
