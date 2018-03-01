<?php
/**
 * @file
 * Theme implementation to display a single Drupal page.
 *
 * The doctype, html, head and body tags are not in this template. Instead they
 * can be found in the html.tpl.php template in this directory.
 */
?>
<!-- Printing the Subject line for salesforce. --> 
<!-- %%[ SET @subject_line = "<?php print $fwnl_subject_line; ?>" ]%% -->
<table style="width: 100%; background-color:#fff;">
  <tbody>
    <tr>
      <td><center>
          <!-- start View on the web -->
          <table align="center" width="100%" border="0" cellspacing="0" cellpadding="0">
             <tbody>
               <tr>
                <td align="center" style="padding: 10px; font-family: Arial, sans-serif; font-size: 12px; line-height: 15px; color: #a3a3a3;">
                  <div style="display:none; white-space:nowrap; width:0; overflow:hidden; max-height:0;">
                   <?php print $fwnl_pre_header; ?>
                 </div>
                   <font style="color: #505050;font-size: 12px; font-family:sans-serif; line-height: 1.5em; text-align: left; padding: 0;padding-bottom: 0;">Email is not displaying correctly? <a href="%%view_email_url%%" style="color: #ff0000;font-size: 12px; font-family:sans-serif; line-height: 1.5em;margin: 0;padding: 0;padding-bottom: 0;"> View it in your browser.</a></font> 
                </td>
                </tr>
              </tbody>
          </table> 
           <!-- end View on the web -->
          
          <table style="width: 800px;background: #fff;margin: 0 auto;padding: 0;box-sizing: border-box;border: none;border-collapse: collapse;font-family: sans-serif;color: #333; text-align:left;">
            <tbody>
              
              <!-- Start First 728x90 ad tag banner -->
              <tr style="margin: 0 auto;padding: 0;box-sizing: border-box;border: none;border-collapse: collapse;font-family: sans-serif;color: #333;">
                <td style="padding: 22px 36px;margin: 0 auto;box-sizing: border-box;border: none;border-collapse: collapse;font-family: sans-serif;color: #333;"><div class="banner-space" style="width: 728px;height: 90px;display: block;"> 
                    <!-- begin 728x90 ad tag ADID %eaid!--> 
                    <a href="%%=Concat('http://pubads.g.doubleclick.net/gampad/jump?co=1&iu=<?php print $fwnl_adzone; ?>&sz=728x90&t=%26pos%3D1%26tile%3D1&c=',jobid,subscriberId)=%%" target="_blank"><img src="%%=Concat('http://pubads.g.doubleclick.net/gampad/ad?co=1&iu=<?php print $fwnl_adzone; ?>&sz=728x90&t=%26pos%3D1%26tile%3D1&c=',jobid,subscriberId)=%%" width="728" height="90" border="0" style="display: block; width:728px; height:90px;" /></a>
                    
                    <!-- End ad tag --> 
                  </div></td>
              </tr>
              
              <!-- End First 728x90 ad tag banner --> 
              <!-- Removing extra tag adding by drupal. -->
              <?php
              $first_rest = reset($page['content']);
              $second_reset = reset($first_rest);
              print render($second_reset);
              ?>
              <!-- End of extra tag removing. --> 
              <!-- Start Footer Links -->

              <tr class="footer" style="text-align: center;margin: 0 auto;padding: 0;box-sizing: border-box;border: none;border-collapse: collapse;font-family: sans-serif;color: #333;">
                <td style="margin: 0 auto;padding: 0;box-sizing: border-box;border: none;border-collapse: collapse;font-family: sans-serif;color: #333;">
                <div style="border-top:1px solid #ddd; padding:10px 40px;"> </div>
                <div style="color: #000000;font-size: 12px;line-height: 1.5em;margin-top: 2em;margin: 0;padding: 0;padding-bottom: 10px; width:100%;">Food & Wine may receive compensation for some links to products and services in this email. <br/>Offers may be subject to change without notice.</div>
                  <a href="<?php print $fwnl_unsubscribe_link; ?>" style="color: #646464;text-decoration: none;font-size: 11px;font-weight: bold;padding: 0 15px;">UNSUBSCRIBE</a> <a href="https://subscription.foodandwine.com/storefront/privacy/foodwine/generic_privacy_new.html?dnp-source=E" style="color: #646464;text-decoration: none;font-size: 11px;font-weight: bold;padding: 0 15px;">PRIVACY POLICY</a> <a href="https://subscription.foodandwine.com/storefront/privacy/foodwine/generic_privacy_new.html?dnp-source=E#california" style="color: #646464;text-decoration: none;font-size: 11px;font-weight: bold;padding: 0 15px;">YOUR CALIFORNIA PRIVACY RIGHTS</a> 
                  <div style="border-bottom:1px solid #ddd; padding:10px 40px;"> </div></td>
              </tr>
              
              <!-- End  Footer Links --> 
              
              <!-- Start Social Icons -->
              <tr class="social-footer" style="margin: 0 auto;padding: 0;box-sizing: border-box;border: none;border-collapse: collapse;font-family: sans-serif;color: #333;text-align: center;">
                <td style="padding-top: 20px;margin: 0 auto;box-sizing: border-box;border: none;border-collapse: collapse;font-family: sans-serif;color: #333; padding-left:270px; padding-right:270px;"><table style="width:250px;">
                    <tbody>
                      <tr>
                        <td><a href="https://www.facebook.com/foodandwine" style="color: #2A5DB0;text-decoration: none;margin: 0px 14px 0;display: inline-block;"><img src="<?php print $fb_icon_path; ?>" style="width: 32px;"></a></td>
                        <td><a href="https://twitter.com/foodandwine" style="color: #2A5DB0;text-decoration: none;margin: 0px 14px 0;display: inline-block;"><img src="<?php print $twitter_icon_path; ?>" style="width: 32px;"></a></td>
                        <td><a href="https://www.pinterest.com/foodandwine" style="color: #2A5DB0;text-decoration: none;margin: 0px 14px 0;display: inline-block;"><img src="<?php print $pinterest_icon_path; ?>" style="width: 32px;"></a></td>
                        <td><a href="https://www.instagram.com/foodandwine" style="color: #2A5DB0;text-decoration: none;margin: 0px 14px 0;display: inline-block;"><img src="<?php print $insta_icon_path; ?>" style="width: 32px;"></a></td>
                      </tr>
                    </tbody>
                  </table></td>
              </tr>
              <!-- End Social Icons --> 
              
              
              <!-- Start Footer Part -->
              <tr style="margin: 0 auto;padding: 0;box-sizing: border-box;border: none;border-collapse: collapse;font-family: sans-serif;color: #333;">
                <td style="text-align: center;padding: 30px 100px;margin: 0 auto;box-sizing: border-box;border: none;border-collapse: collapse;font-family: sans-serif;color: #333;"><p style="color: #000000;font-size: 12px;line-height: 1.5em;margin: 0;padding: 0;padding-bottom: 0;"> This email was sent to %%emailaddr%% because you indicated your interests in receiving<br>
                    news and updates from Time Inc. Affluent Media Group. <br>
                  </p>
                  <p style="color: #000000;font-size: 12px;line-height: 1.5em;margin: 0;padding: 0;padding-bottom: 0;"> Time Inc. Affluent Media Group Customer Service Department<br>
                    P.O Box 62710 | Tampa, FL 33662-7108</p>
                  <p style="color: #000000;font-size: 12px;line-height: 1.5em;margin-top: 2em;margin: 0;padding: 0;padding-bottom: 0;"> &copy;%%=Format(Now(),"yyyy")=%% Time Inc. Affluent Media Group. Food & Wine is a trademark of Time Inc. <br>
                    Affluent Media Group, registered in the U.S. and other countries. All rights reserved.</p><br>
                  </td>
              </tr>
              
              <!-- End Footer Part -->
              <tr style="margin: 0 auto;padding: 0;box-sizing: border-box;border: none;border-collapse: collapse;font-family: sans-serif;color: #333;"> </tr>
            </tbody>
          </table>
        </center></td>
    </tr>
  </tbody>
</table>
