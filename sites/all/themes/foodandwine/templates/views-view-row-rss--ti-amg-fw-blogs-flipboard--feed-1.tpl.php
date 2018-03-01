<?php
/**
 * @file
 * Default view template to display a item in an RSS feed.
 *
 * @ingroup views_templates
 */
?>

<item>
    <title><?php print $row->title; ?></title>
    <link><?php print $link; ?></link> 
    <description><?php print '<![CDATA[' . $row->blog_body . ']]>'; ?></description>
    <content:encoded>        
        <?php print '<![CDATA['; ?>
        <?php print $row->blog_body; ?>
        <figure>
            <?php
            if ($row->video == '') {
                print $row->image;
                ?>
                <figcaption>
                    <?php
                    if ($row->image_caption != '')
                        print $row->image_caption;
                    ?>
                    <?php
                    if ($row->image_credit != '') {
                        ?>
                        <span class="credit"><?php print $row->image_credit; ?></span>
                <?php } ?>
                </figcaption>
                <?php
            }
            else {
                print $row->video;
            }
            ?>
        </figure>
        <?php print ']]>'; ?>
    </content:encoded>
    <?php print $item_elements; ?>
</item>
