<item>
  <title><?php print '<![CDATA[' . $row_content['title'] . ']]>'; ?></title>
  <link><?php print $row_content['link']; ?></link>
  <description><?php print '<![CDATA[' . $row_content['description'] . ']]>'; ?></description>
  <pubDate><?php print $row_content['pubdate']; ?></pubDate>
  <guid><?php print $row_content['guid']; ?></guid>
  <dc:creator><?php print '<![CDATA[' . $row_content['author'] . ']]>'; ?></dc:creator>
  <media:content url="<?php print $row_content['image_info']['image_path'];?>" 
                 type="<?php print $row_content['image_info']['mime_type'];?>"></media:content>
</item>
