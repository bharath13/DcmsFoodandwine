<?php

/**
 * @file
 * Default template for feed displays that use the RSS style.
 *
 * @ingroup views_templates
 */
?>
<?php print "<?xml"; ?> version="1.0" encoding="utf-8" <?php print "?>"; ?>
<rss version="2.0" xml:base="<?php print $link . '?' . time(); ?>"
     xmlns:content="http://purl.org/rss/1.0/modules/content/"
 xmlns:dc="http://purl.org/dc/elements/1.1/"
 xmlns:media="http://search.yahoo.com/mrss/"
 xmlns:atom="http://www.w3.org/2005/Atom"
 xmlns:georss="http://www.georss.org/georss">
  <channel>
    <title><?php print $title; ?></title>
    <link><?php print $link; ?></link>
    <description><?php print $description; ?></description>
    <language><?php print $langcode; ?></language>
    <atom:link rel="hub" href="http://pubsubhubbub.appspot.com"/>
    <atom:link href="<?php print $link; ?>" rel="self" type="application/rss+xml" />
    <?php print $channel_elements; ?>
    <?php print $items; ?>
  </channel>
</rss>

