<?php print "<?xml version=\"1.0\" encoding=\"utf-8\"?>\n";?>
<?php global $base_url;print "<rss version=\"2.0\" xml:base=\"" . $base_url . "\" " . $xml_name_spaces . ">\n";?>  
<?php print $page; ?> 
<?php print '</rss>';?>
