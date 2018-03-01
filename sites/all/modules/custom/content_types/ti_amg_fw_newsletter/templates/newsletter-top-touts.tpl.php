<?php
/**
 * @file: Newsletter bottom touts section.
 */
?>
<!-- Start Bottom Tout -->
<tr style="margin: 0 auto;padding: 0;box-sizing: border-box;border: none;border-collapse: collapse;font-family: sans-serif;color: #333;">
  <td style="margin: 0 auto;padding: 20px 0px 0px 0px;box-sizing: border-box;border: none;border-collapse: collapse;font-family: sans-serif;color: #333;">
    <table style="width: 100%;margin: 0 auto;padding: 0;box-sizing: border-box;border: none;border-collapse: collapse;font-family: sans-serif;color: #333;">
      <tbody>
      <?php  if (!empty($newsletter_top_first_touts)) : ?>
         <tr>
            <td width="49%" style="text-align: center; vertical-align: top;">
              <?php if (!empty($newsletter_top_first_touts[0])) : ?>
                <table>
                  <tbody>
                    <tr>
                      <td style="width: 300px; display: inline-block;">
                        <a href="<?php print $newsletter_top_first_touts[0]['tout_url']; ?>">
                          <img width="300" height="300" src="<?php print $newsletter_top_first_touts[0]['tout_image_uri']; ?>" alt="<?php print $newsletter_top_first_touts[0]['tout_image_alt']; ?>" title="<?php print $newsletter_top_first_touts[0]['tout_headline']; ?>">
                        </a>
                      </td>
                   </tr>
                   <tr>
                     <td style="vertical-align: top; padding: 6px 0px; line-height: 28px; width: 300px; display: inline-block;">     
                       <h2 style="vertical-align: top; margin: 0px; line-height: 28px; width: 300px; display: inline-block;">
                        <center><a href="<?php print $newsletter_top_first_touts[0]['tout_url']; ?>" style="color: #000; text-decoration:none;"><?php print $newsletter_top_first_touts[0]['tout_headline']; ?></a></center></h2>
                     </td>
                   </tr> 
                   <tr>
                     <td style="padding-bottom: 30px; padding-top: 10px;"> 
                      <table align="center" cellspacing="0" cellpadding="0">
                        <tbody>
                          <tr>
                            <td align="left" height="40" bgcolor="#000000" style="padding-left: 10px; padding-right:10px; color: #ffffff; display: block;"><a href="<?php print $newsletter_top_first_touts[0]['tout_url']; ?>" style="font-size:17px; font-family: sans-serif; text-decoration: none; line-height:40px; width:100%; display:inline-block"> <span style="color: #FFFFFF; text-transform: uppercase;"> <?php print $newsletter_top_first_touts[0]['tout_more_text']; ?> <span style="padding-left: 5px;"><img src="<?php print $button_icon['button_arrow_uri']; ?>" width="8" height="12"></span> </span> </a></td>
                          </tr>
                        </tbody>
                      </table>
                     </td>
                   </tr>   
                 </tbody>
               </table>    
              <?php endif; ?>
            </td>
            <td width="2%"></td>
            <td width="49%" align="center" style="vertical-align: top; padding:0px 36px 22px 36px;margin: 0 auto;box-sizing: border-box;border: none;border-collapse: collapse;font-family: sans-serif;color: #333;"><div class="banner-space" style="width: 300px;height: 250px;background: #fff;display: block;margin: 0 auto;">
               <!-- Start 300x250 ad tag ADID %eaid! -->
                <a href="%%=Concat('http://pubads.g.doubleclick.net/gampad/jump?co=1&iu=<?php print $fwnl_adzone; ?>&sz=300x250&t=%26pos%3D1%26tile%3D2&c=',jobid,subscriberId)=%%" target="_blank"><img src="%%=Concat('http://pubads.g.doubleclick.net/gampad/ad?co=1&iu=<?php print $fwnl_adzone; ?>&sz=300x250&t=%26pos%3D1%26tile%3D2&c=',jobid,subscriberId)=%%" width="300" height="250" border="0" style="display: block; width:300px; height:250px;" /></a>
           </td>
         </tr>  
      <?php endif; ?>
      <?php   if (!empty($newsletter_top_rest_touts)) : ?>
        <?php foreach($newsletter_top_rest_touts as $key => $tout):  ?>
          <tr>
            <td width="49%" style="text-align: center; vertical-align: top;">
              <?php if (!empty($tout[0])) : ?>
                <table>
                  <tbody>
                    <tr> 
                      <td style="width: 300px; display: inline-block;">
                        <a href="<?php print $tout[0]['tout_url']; ?>">
                          <img width="300" height="300" src="<?php print $tout[0]['tout_image_uri']; ?>" alt="<?php print $tout[0]['tout_image_alt']; ?>" title="<?php print $tout[0]['tout_headline']; ?>">
                        </a>
                      </td>
                    </tr>   
                    <tr>
                      <td style="vertical-align: top; padding: 6px 0px; width: 300px; display: inline-block;">  
                        <h2 style="vertical-align: top; margin: 0px; line-height: 28px;  width: 300px; display: inline-block;">
                          <center><a href="<?php print $tout[0]['tout_url']; ?>" style="color: #000; text-decoration:none;"><?php print $tout[0]['tout_headline']; ?></a></center></h2>
                      </td>
                    </tr>
                    <tr> 
                      <td  style="padding-bottom: 30px; padding-top: 10px;"> 
                        <table align="center" cellspacing="0" cellpadding="0">
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
            <td width="2%"></td>
            <td width="49%" style="text-align: center; vertical-align: top;">
              <?php if (!empty($tout[1])) : ?>
                 <table>
                  <tbody>
                    <tr> 
                      <td style="width: 300px; display: inline-block;">
                        <a href="<?php print $tout[1]['tout_url']; ?>">
                          <img width="300" height="300" src="<?php print $tout[1]['tout_image_uri']; ?>" alt="<?php print $tout[1]['tout_image_alt']; ?>" title="<?php print $tout[1]['tout_headline']; ?>">
                        </a>
                      </td>
                    </tr>
                    <tr>
                      <td style="vertical-align: top; padding: 6px 0px; width: 300px; display: inline-block;">      
                        <h2 style="vertical-align: top; margin: 0px; line-height: 28px;  width: 300px; display: inline-block;">
                          <center><a href="<?php print $tout[1]['tout_url']; ?>" style="color: #000; text-decoration:none;"><?php print $tout[1]['tout_headline']; ?></a></center></h2>
                      </td>
                    </tr>
                    <tr>
                      <td style="padding-bottom: 30px; padding-top: 10px;">
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

