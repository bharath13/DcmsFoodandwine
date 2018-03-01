
<item>
    <title><?php print '<![CDATA[' . $feed['title']. ']]>';?></title>
    <link><?php print '<![CDATA['.$feed['link']. ']]>';?></link>
    <description><?php print '<![CDATA[' . $feed['description'] . ']]>';?></description>
    <content:encoded>
       <?php print '<![CDATA[';?>
            <?php print $feed['description'];?>
            <?php if($feed['video'] != ''){?>
                <video>   <?php print $feed['video'];?>      </video>
            <?php }else{?>
                <figure>   <?php print $feed['image'];?>      </figure>   
            <?php }?>
       <?php print ']]>'; ?>
    </content:encoded>
    <?php if(is_array($feed['category'])){
            foreach($feed['category'] as $category){ ?>
                 <category><?php print '<![CDATA['.$category. ']]>';?></category>
    <?php }}else{?>
            <category><?php print '<![CDATA['.$feed['category']. ']]>';?></category>
            <?php }?>
         <pubDate><?php print '<![CDATA['.$feed['published_at']. ']]>';?></pubDate>
 <dc:creator><?php print '<![CDATA['.$feed['creator']. ']]>';?></dc:creator>
 <guid isPermaLink="false"><?php print $feed['guid'];?></guid>
    
</item>
