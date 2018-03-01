<?php
/**
 * @file
 * Default view template to display a item in an RSS feed.
 *
 * @ingroup views_templates
 */

$main_image_title = '';
if(!empty($row->img_cptn)):
    $main_image_title = $row->img_cptn;
elseif(!empty($row->img_alttxt)):
    $main_image_title = $row->img_alttxt;
endif;
?>
<item>
    <title><?php print '<![CDATA[' . $title . ']]>'; ?></title>
    <link><?php print $link; ?></link>    
        <media:content url="<?php print $row->image_path; ?>">
            <?php if(!empty($row->img_credit)):?>
                <media:credit><?php print '<![CDATA[' . $row->img_credit . ']]>';?></media:credit>
            <?php endif;?>
            <?php if(!empty($main_image_title)):?>
                <media:title><?php print '<![CDATA[' . $main_image_title . ']]>';?></media:title>
            <?php endif;?>
        </media:content>
        <?php if(!empty($row->multiple_images)) :
                foreach($row->image_positions as $pos) : ?>
                    <media:content url="<?php print $row->multiple_images[$pos]['original_url']; ?>">
                        <?php if(!empty($row->multiple_images[$pos]['image_credit'])):?>
                            <media:credit><?php print '<![CDATA[' . $row->multiple_images[$pos]['image_credit'] . ']]>'; ?></media:credit>
                        <?php endif;?>
                        <?php
                        $img_title_text = '';
                        if(!empty($row->multiple_images[$pos]['image_caption'])):
                            $img_title_text = $row->multiple_images[$pos]['image_caption'];
                        else:
                            $img_title_text = $row->multiple_images[$pos]['image_alt'];
                        endif;
                        if(!empty($img_title_text)):?>
                            <media:title><?php print '<![CDATA[' . $img_title_text . ']]>'; ?></media:title>
                        <?php endif;?>
                    </media:content>
        <?php endforeach;
            endif; ?>
    <description>
        <?php print '<![CDATA['; ?><?php print $row->blog_body; ?><?php print ']]>'; ?>
    </description>
    <?php print $item_elements; ?>
</item>


