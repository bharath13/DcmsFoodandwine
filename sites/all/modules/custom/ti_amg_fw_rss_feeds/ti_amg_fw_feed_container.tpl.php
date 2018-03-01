<?php print "<?xml version=\"1.0\" encoding=\"utf-8\"?>\n";?>
<?php 
  if (!empty($feed_container_values['namespaces'])) : 
    $namespace = $feed_container_values['namespaces'];
  else :
    $namespace = '';
  endif;
?>
<rss version="2.0"<?php print $namespace; ?>>
  <channel>
    <title><?php print $feed_container_values['title']; ?></title>
    <?php if (!empty($feed_container_values['language'])) : ?>
      <language><?php print $feed_container_values['language']; ?></language>
    <?php endif; ?>
    <link><?php print $feed_container_values['link']; ?></link>    
    <description><?php print $feed_container_values['description']; ?></description>    
    <?php if (!empty($feed_container_values['pubdate'])) : ?>
      <pubDate><?php print $feed_container_values['pubdate']; ?></pubDate>
    <?php endif; ?>
    <?php print $feed_content; ?>
  </channel>
</rss>
