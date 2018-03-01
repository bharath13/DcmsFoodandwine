<?php
/**
 * @file
 * Theme implementation to display a newsletter_just_in node in newsletter view mode.
 */
?>

<?php
  // We hide the comments and links now so that we can render them later.
  hide($content['comments']);
  hide($content['links']);
?>
<tr style="margin: 0 auto;padding: 0;box-sizing: border-box;border: none;border-collapse: collapse;font-family: sans-serif;color: #333;">
  <td style="height: 25px;background-color: #01a3a9;margin: 0 auto;padding: 0;box-sizing: border-box;border: none;border-collapse: collapse;font-family: sans-serif;color: #333; line-height:0px;"><table width="100%" border="0" cellspacing="0" cellpadding="0">
      <tr>
        <td bgcolor="#000000" style="padding:10px 20px 0;">
          <table width="100%" border="0" cellspacing="0" cellpadding="0">
            <tr>
              <td width="33%" align="left" valign="middle" class="columnStack contentCenter" style="padding-bottom: 10px; -webkit-text-size-adjust:none; color: #ffffff; text-align: left; font-family: Georgia, serif; font-size: 21px; line-height:25px; font-style: italic;"><p><?php print render($content['field_newsletter_type']); ?></p></td>
              <td width="34%" align="center" valign="middle" style="padding-bottom: 10px;" class="columnStack">
                <table border="0" cellspacing="0" cellpadding="0" class="contentCenter">
                  <tr>
                    <td><a href="<?php print $fw_logo_url; ?>" target="_blank" style="text-decoration:none;"><img src="<?php print $top_logo_path; ?>" alt="Food &amp; Wine" border="0" width="153" height="21" style="display:block; font-size:12px; color:#FFFFFF;" /></a></td>
                  </tr>
                </table>
              </td>
              <td width="33%" align="right" valign="middle" class="columnStack contentCenter" style="padding-bottom: 10px; -webkit-text-size-adjust:none; color: #ffffff; text-align: right; font-family: Verdana, sans-serif; font-size: 10px; line-height:14px;"><?php print $newsletter_display_date; ?></td>
            </tr>
          </table>
        </td>
      </tr>
    </table>
</tr>

<!--  Intro section  -->
<tr style="margin: 0 auto;padding: 0;box-sizing: border-box;border: none;border-collapse: collapse;font-family: sans-serif;color: #333;">
  <td style="margin: 0 auto;padding: 0;box-sizing: border-box;border: none;border-collapse: collapse;font-family:font-family: sans-serif; font-size: 16px; line-height: 22px; padding:15px; text-align: center;">
     <?php print $newsletter_intro; ?>
  </td>
</tr> 

<?php print render($content['field_lead_touts']); ?>

<?php print render($content['field_content_touts']); ?>

<?php print render($content['field_bottom_content_touts']); ?>

<?php print render($content['field_newsletter_banner_1']); ?>

<?php print render($content['field_newsletter_banner_2']); ?>

 <!-- Start Bottom Part with FW Logo & 300x250 Ad tag -->
              
<tr style="margin: 0 auto;padding: 0;box-sizing: border-box;border: none;border-collapse: collapse;font-family: sans-serif;color: #333;">
  <td style="padding: 0px 36px 0px;margin: 0 auto;box-sizing: border-box;border: none;border-collapse: collapse;font-family: sans-serif;color: #333;"><table style="width: 100%;margin: 0 auto;padding: 0;box-sizing: border-box;border: none;border-collapse: collapse;font-family: sans-serif;color: #333;">
      <tbody>
        <tr style="margin: 0 auto;padding: 0;box-sizing: border-box;border: none;border-collapse: collapse;font-family: sans-serif;color: #333;">
          <td style="padding: 0px 0px 20px 20px;text-align: center;margin: 0 auto;box-sizing: border-box;border: none;border-collapse: collapse;font-family: sans-serif;color: #333;"><a href="<?php print $fw_logo_url; ?>" target="_blank" style="text-decoration:none;"><img src="<?php print $bot_logo_path; ?>"></a></td>
        </tr>
      </tbody>
    </table></td>
</tr>
<!-- End Bottom Part with FW Logo & 300x250 Ad tag --> 


<!-- Start World Best Static Banner -->

<!-- End World Best Static Banner --> 

<!-- Start Aud Dev Text Ads -->

<!-- End Aud Dev Text Ads --> 

<!-- END FW Second Banner --> 
