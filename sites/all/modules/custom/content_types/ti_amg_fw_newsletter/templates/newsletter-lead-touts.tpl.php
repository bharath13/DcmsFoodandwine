<?php
/**
 * @file: Newsletter lead tout content
 */
?>
<!-- Start Lead Tout -->
<?php foreach($newsletter_lead_touts[0] as $key => $tout): ?>
<tr style="margin: 0 auto;padding: 0;box-sizing: border-box;border: none;border-collapse: collapse;font-family: sans-serif;color: #333;">
  <td style="text-align: center; padding: 0px 0px 0px 0px;margin: 0 auto;box-sizing: border-box;border: none;border-collapse: collapse;font-family: sans-serif;color: #333;">
     <table>
       <tbody>
         <tr> 
           <td style="vertical-align: top; padding: 18px 0 10px 0; display: inline-block; width: 550px;">
             <h2 style="vertical-align: top; margin: 0; display: inline-block; width: 550px;"> 
              <center> <a href="<?php print $tout['tout_url']; ?>" style="color: #000; text-decoration:none; font-size: 35px; line-height: 40px;"><?php print $tout['tout_headline']; ?></a> </center> 
             </h2>
           </td>
         </tr> 
         <tr>
           <td>    
            <a href="<?php print $tout['tout_url']; ?>" style="display: inline-block; padding-bottom: 10px;">
              <img width="550" height="550" style="width: 550px; height:550px; display:block;" src="<?php print $tout['tout_image_uri']; ?>" alt="<?php print $tout['tout_image_alt']; ?>" title="<?php print $tout['tout_headline']; ?>">
            </a>
           </td>
         </tr>
         <?php if (!empty($tout['tout_deck'])) : ?>
          <tr>
           <td align="left" style="color:#000; font-size: 18px; line-height: 23px; display: inline-block; width: 550px;"> 
             <a align="left" style="color:#000; font-size: 18px; line-height: 23px; display: inline-block; width: 550px;" href="<?php print $tout['tout_url']; ?>"> <div><?php print $tout['tout_deck']; ?></div></a>
           </td>
          </tr> 
         <?php endif; ?>
          <tr>
           <td>
            <table align="center" cellspacing="0" cellpadding="0" style=" margin-bottom: 0px; margin-top: 12px;">
              <tbody>
                <tr>
                  <td align="left" height="40" bgcolor="#000000" style="padding-left: 10px; padding-right:10px; color: #ffffff; display: block;"><a href="<?php print $tout['tout_url']; ?>" style="font-size:17px; font-family: sans-serif; text-decoration: none; line-height:40px; width:100%; display:inline-block"> <span style="color: #FFFFFF; text-transform: uppercase;"> <?php print $tout['tout_more_text']; ?> <span style="padding-left: 5px;"><img src="<?php print $button_icon['button_arrow_uri']; ?>" width="8" height="12"></span> </span> </a></td>
                </tr>
              </tbody>
            </table>
          </td>
         </tr>
       </tbody>
     </table>       
  </td>
</tr>
 <tr style="margin: 0 auto;padding: 0;box-sizing: border-box;border: none;border-collapse: collapse;font-family: sans-serif;color: #333;">
  <td style="margin: 0 auto;padding: 0 3% 10px 3%; width: 94%; box-sizing: border-box;border: none;border-collapse: collapse;font-family: sans-serif;color: #333;">
   <table style="width: 100%;margin: 0 auto;padding: 0;box-sizing: border-box;border: none;border-collapse: collapse;font-family: sans-serif;color: #333;">
    <tbody>
    <!--  TODO: do unlimited -->
    <?php if (!empty($tout['related_links'])): ?>   
      <?php foreach($tout['related_links'] as $key => $related_link): ?>
         <?php if ($key == 0 || $key == 2): ?>
           <tr>
         <?php endif; ?>
         <td width="48%" style="padding-top: 18px; vertical-align: top;"><a class="link-arrow" style="color: #000000; font-size:18px; line-height:23px; font-weight: bold;" href="<?php print $related_link['url']; ?>" alt="<?php print $related_link['title']; ?>"><span style="padding-right: 5px;"><?php print $related_link['title']; ?></span><span style="padding-left: 5px;"><img src="/sites/all/modules/custom/content_types/ti_amg_fw_newsletter/images/arrow-right-alt.jpg" width="14" height="12"></span></a></td>
         <?php if ($key == 0 || $key == 2): ?>
           <td width="4%"></td>
         <?php endif; ?>
         <?php if ($key == 1 || $key == 3):?>
           </tr>
         <?php endif; ?>
       <?php endforeach; ?>
      <?php endif; ?>   
    </tbody>
  </table>
 </td>
</tr>
<tr style="margin: 0 auto;padding: 0;box-sizing: border-box;border: none;border-collapse: collapse;font-family: sans-serif;color: #333;">
  <td style="margin: 0 auto;padding: 20px 0 0 0;box-sizing: border-box;border: none;border-collapse: collapse;font-family: sans-serif;color: #333;">
    <div style="border-top:1px solid #ddd; padding:10px 0px 0px 0px;"> </div>
  </td>
</tr>
<?php endforeach; ?>