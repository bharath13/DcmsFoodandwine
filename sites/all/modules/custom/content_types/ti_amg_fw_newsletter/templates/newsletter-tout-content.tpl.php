<?php
/**
 * @file: Newsletter tout content
 */
?>
<?php foreach($newsletter_touts as $key => $tout): ?>
<tr style="margin: 0 auto;padding: 0;box-sizing: border-box;border: none;border-collapse: collapse;font-family: sans-serif;color: #333;">
  <td style="padding: 0 20px 30px 0;margin: 0 auto;box-sizing: border-box;border: none;border-collapse: collapse;font-family: sans-serif;color: #333;">
    <a href="<?php print $tout['tout_url']; ?>">
      <img width="310" height="235" style="width: 310px; height:235px; display:block;" src="<?php print $tout['tout_image_uri']; ?>" alt="<?php print $tout['tout_image_alt']; ?>" title="<?php print $tout['tout_headline']; ?>">
    </a>
  </td>
  <td style="padding: 0 30px 38px 0px;vertical-align: top;margin: 0 auto;box-sizing: border-box;border: none;border-collapse: collapse;font-family: sans-serif;color: #333;">
  <h3 style="color: #4D93E1; font-size: 24px; font-weight: bold; margin: 0; padding: 0;"><?php print $tout['sponsored_text']; ?></h3>
  <h2 style="font-size: 35px;margin-top: 0;padding-bottom: 0px;line-height: 1.1em;color: black;padding-top: 10px;"> <a href="<?php print $tout['tout_url']; ?>" style="color: #000; text-decoration:none"><?php print $tout['tout_headline']; ?></a> </h2>
    
    <table align="left" cellspacing="0" cellpadding="0">
      <tbody>
       <tr>
        <td align="left" width="170" height="40" bgcolor="#000000" style="padding-left: 10px; color: #ffffff; display: block;"><a href="<?php print $tout['tout_url']; ?>" style="font-size:17px; font-family: sans-serif; text-decoration: none; line-height:40px; width:100%; display:inline-block"> <span style="color: #FFFFFF; text-transform: uppercase;"> <?php print $tout['tout_more_text']; ?> <span style="padding-left: 5px;"><img src="<?php print $button_icon['button_arrow_uri']; ?>" width="8" height="12"></span> </span> </a></td>
      </tr>
    </tbody></table>
  </td>
</tr>
<?php endforeach; ?>
