<?php
/**
 * @file: Newsletter bottom touts section.
 */
?>
<tr style="margin: 0 auto;padding: 0;box-sizing: border-box;border: none;border-collapse: collapse;font-family: sans-serif;color: #333;">
  <td style="margin: 0 auto;padding: 20px 0 0 0;box-sizing: border-box;border: none;border-collapse: collapse;font-family: sans-serif;color: #333;">
    <div style="border-top:1px solid #ddd; padding:20px 0px;"> </div>
  </td>
</tr>
<!-- Start Bottom Tout -->
<tr style="margin: 0 auto;padding: 0;box-sizing: border-box;border: none;border-collapse: collapse;font-family: sans-serif;color: #333;">
  <td style="margin: 0 auto;padding: 0 0 20px 0;box-sizing: border-box;border: none;border-collapse: collapse;font-family: sans-serif;color: #333;">
    <table style="width: 100%;margin: 0 auto;padding: 0;box-sizing: border-box;border: none;border-collapse: collapse;font-family: sans-serif;color: #333;">
      <tbody>
        <?php  if (!empty($newsletter_bottom_touts)) : ?>
          <?php foreach($newsletter_bottom_touts as $key => $tout): ?>
           <tr>
            <td width="48%" style="text-align: center; vertical-align: top;">
              <?php if (!empty($tout[0])) : ?>
               <table>
                 <tbody>
                   <tr>
                     <td style="text-align: center; vertical-align: top;">
                      <a href="<?php print $tout[0]['tout_url']; ?>">
                        <img width="<?php print $tout[0]['width']; ?>" height="<?php print $tout[0]['height']; ?>" src="<?php print $tout[0]['tout_image_uri']; ?>" alt="<?php print $tout[0]['tout_image_alt']; ?>" title="<?php print $tout[0]['tout_headline']; ?>">
                      </a>
                     </td>
                   <tr>
                     <td style="text-align: center; vertical-align: top; line-height: 28px; padding: 6px 0px; width: <?php print $tout[1]['width']; ?>px;">   
                      <h2 style="vertical-align: top; line-height: 28px; margin: 0px 0px; width: <?php print $tout[0]['width']; ?>px; display: inline-block;">
                        <center><a href="<?php print $tout[0]['tout_url']; ?>" style="color: #000; text-decoration:none;"><?php print $tout[0]['tout_headline']; ?></a></center></h2>
                     </td>
                   </tr>
                   <?php if (!empty($tout[0]['tout_deck'])) : ?>
                     <tr>
                       <td style="text-align: center; width: <?php print $tout[1]['width']; ?>px; width: <?php print $tout[0]['width']; ?>px; display: inline-block;">
                         <div style="color:#000; font-size: 16px; line-height: 18px; width: <?php print $tout[0]['width']; ?>px; display: inline-block;"><?php print $tout[0]['tout_deck']; ?></div>
                       </td>
                     </tr>   
                   <?php endif; ?>
                     <tr>
                      <td style="text-align: center; padding-bottom: 30px; padding-top: 10px;">
                        <table align="center" cellspacing="0" cellpadding="0" style="margin-bottom: 30px; margin-top: 10px;">
                          <tbody>
                            <tr>
                              <td align="left" height="40" bgcolor="#000000" style="padding-left: 10px; padding-right:10px; color: #ffffff; display: block;"><a href="<?php print $tout[0]['tout_url']; ?>" style="font-size:17px; font-family: sans-serif; text-decoration: none; line-height:40px; width:100%; display:inline-block"> <span style="color: #FFFFFF; text-transform: uppercase;"> <?php print $tout[0]['tout_more_text']; ?> <span style="padding-left: 5px;"><img src="<?php print $button_icon['button_arrow_uri']; ?>" width="8" height="12"></span> </span> </a></td>
                            </tr>
                          </tbody>
                        </table>
                      </td>
                    </tr>  
                  </tbody>
                </table>
              <?php endif; ?>
            </td>
            <td width="4%"></td>
            <td width="48%" style="text-align: center; vertical-align: top;">
              <?php if (!empty($tout[1])) : ?>
              <table>
                <tbody>
                  <tr>
                    <td style="text-align: center; vertical-align: top;">
                      <a href="<?php print $tout[1]['tout_url']; ?>">
                        <img width="<?php print $tout[0]['width']; ?>" height="<?php print $tout[0]['height']; ?>" src="<?php print $tout[1]['tout_image_uri']; ?>" alt="<?php print $tout[1]['tout_image_alt']; ?>" title="<?php print $tout[1]['tout_headline']; ?>">
                      </a>
                    </td>
                  </tr>
                  <tr>
                    <td style="text-align: center; vertical-align: top; line-height: 28px; padding: 6px 0px; width: <?php print $tout[1]['width']; ?>px;">
                      <h2 style="width: <?php print $tout[1]['width']; ?>px; display: inline-block; margin: 0; padding: 0px;"> 
                        <center> <a href="<?php print $tout[1]['tout_url']; ?>" style="color: #000; text-decoration:none;"><?php print $tout[1]['tout_headline']; ?></a> </center> 
                      </h2>
                    </td>
                  </tr>
                 <?php if (!empty($tout[1]['tout_deck'])) : ?>
                    <tr>
                      <td style="text-align: center; width: <?php print $tout[1]['width']; ?>px;">
                        <div style="color:#000; font-size: 16px; line-height: 18px; width: <?php print $tout[1]['width']; ?>px; display: inline-block;"><?php print $tout[1]['tout_deck']; ?></div>
                      </td>
                    </tr>
                  <?php endif; ?>
                   <tr>
                    <td style="text-align: center; padding-bottom: 30px; padding-top: 10px;">
                      <table align="center" cellspacing="0" cellpadding="0">
                        <tbody>
                          <tr>
                            <td align="left" height="40" bgcolor="#000000" style="padding-left: 10px; padding-right:10px; color: #ffffff; display: block;"><a href="<?php print $tout[1]['tout_url']; ?>" style="font-size:17px; font-family: sans-serif; text-decoration: none; line-height:40px; width:100%; display:inline-block"> <span style="color: #FFFFFF; text-transform: uppercase;"> <?php print $tout[1]['tout_more_text']; ?> <span style="padding-left: 5px;"><img src="<?php print $button_icon['button_arrow_uri']; ?>" width="8" height="12"></span> </span> </a></td>
                          </tr>
                        </tbody>
                      </table>
                    </td>
                  </tr>
                </tbody>
              </table>
              <?php endif; ?>
            </td>
          </tr>

          <?php endforeach; ?>
        <?php endif; ?>
      </tbody>
    </table></td>
</tr>
<!-- End Bottom Tout -->
