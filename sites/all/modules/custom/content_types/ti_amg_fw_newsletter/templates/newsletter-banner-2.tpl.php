<?php
/**
 * @file: Newsletter bottom Banner 2 section.
 */
?>
<?php if (!empty($newsletter_banner_2)) : ?>
  <?php foreach($newsletter_banner_2 as $key => $tout): ?>
    <!-- Start Bottom Banner 2 -->
    <tr style="margin: 0 auto;padding: 0;box-sizing: border-box;border: none;border-collapse: collapse;font-family: sans-serif;color: #333;">
      <td style="margin: 0 auto;padding: 0 0 40px 0;box-sizing: border-box;border: none;border-collapse: collapse;font-family: sans-serif;color: #333;">
        <a href="<?php print $tout['tout_url']; ?> ">
          <img width="800" height="118" style="width: 800px; height:118px; display:block;" src="<?php print $tout['tout_image_uri']; ?>" alt="<?php print $tout['tout_image_alt']; ?>" >
        </a>
      </td>
    </tr>
    <!-- End Bottom Banner 2 -->
  <?php endforeach; ?>
<?php endif; ?>
