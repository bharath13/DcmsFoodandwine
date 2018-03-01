<?php
/**
 * @file: Newsletter tout sections
 */
?>

<!-- Start First Set Tout -->
<tr style="margin: 0 auto;padding: 0;box-sizing: border-box;border: none;border-collapse: collapse;font-family: sans-serif;color: #333;">
  <td style="margin: 0 auto;padding: 0;box-sizing: border-box;border: none;border-collapse: collapse;font-family: sans-serif;color: #333;"><table style="width: 100%;margin: 0 auto;padding: 0;box-sizing: border-box;border: none;border-collapse: collapse;font-family: sans-serif;color: #333;">
      <tbody>
        <?php
          if (!empty($newsletter_tout_section_one)) :
            print theme('newsletter_tout_content', array(
              'newsletter_touts' => $newsletter_tout_section_one,
              'button_icon' => $button_icon,
            ));
          endif;
        ?>
      </tbody>
    </table></td>
</tr>
<!-- End First Set Tout --> 

<?php if (!empty($fwnl_type)) :  ?>
  <?php if ($fwnl_type == 'wine_list' || $fwnl_type == 'travel_tips' || $fwnl_type == 'fwx') : ?>
    <!-- Start 300x250 ad tag ADID %eaid! -->
    <tr style="margin: 0 auto;padding: 0;box-sizing: border-box;border: none;border-collapse: collapse;font-family: sans-serif;color: #333;">
      <td align="center" style="padding:0px 36px 22px 36px;margin: 0 auto;box-sizing: border-box;border: none;border-collapse: collapse;font-family: sans-serif;color: #333;"><div class="banner-space" style="width: 300px;height: 250px;background: #fff;display: block;margin: 0 auto;">
        <a href="%%=Concat('http://pubads.g.doubleclick.net/gampad/jump?co=1&iu=<?php print $fwnl_adzone; ?>&sz=300x250&t=%26pos%3D1%26tile%3D2&c=',jobid,subscriberId)=%%" target="_blank"><img src="%%=Concat('http://pubads.g.doubleclick.net/gampad/ad?co=1&iu=<?php print $fwnl_adzone; ?>&sz=300x250&t=%26pos%3D1%26tile%3D2&c=',jobid,subscriberId)=%%" width="300" height="250" border="0" style="display: block; width:300px; height:250px;" /></a>
        </div></td>
    </tr>
    <!-- End 300x250 ad tag banner -->
  <?php else : ?>
    <!-- Start Second 728x90 ad tag ADID %eaid! -->
    <tr style="margin: 0 auto;padding: 0;box-sizing: border-box;border: none;border-collapse: collapse;font-family: sans-serif;color: #333;">
      <td align="center" style="padding:0px 36px 22px 36px;margin: 0 auto;box-sizing: border-box;border: none;border-collapse: collapse;font-family: sans-serif;color: #333;"><div class="banner-space" style="width: 728px;height: 90px;background: #fff;display: block;">
        <a href="%%=Concat('http://pubads.g.doubleclick.net/gampad/jump?co=1&iu=<?php print $fwnl_adzone; ?>&sz=728x90&t=%26pos%3D2%26tile%3D2&c=',jobid,subscriberId)=%%" target="_blank"><img src="%%=Concat('http://pubads.g.doubleclick.net/gampad/ad?co=1&iu=<?php print $fwnl_adzone; ?>&sz=728x90&t=%26pos%3D2%26tile%3D2&c=',jobid,subscriberId)=%%" width="728" height="90" border="0" style="display: block; width:728px; height:90px;" /></a>
        </div></td>
    </tr>
    <!-- End Second 728x90 ad tag banner -->
  <?php endif; ?>
<?php endif; ?>

<!-- Start Second Set Tout -->
<tr style="margin: 0 auto;padding: 0;box-sizing: border-box;border: none;border-collapse: collapse;font-family: sans-serif;color: #333;">
  <td style="margin: 0 auto;padding: 0;box-sizing: border-box;border: none;border-collapse: collapse;font-family: sans-serif;color: #333;"><table style="width: 100%;margin: 0 auto;padding: 0;box-sizing: border-box;border: none;border-collapse: collapse;font-family: sans-serif;color: #333;">
      <tbody>
        <?php
          if (!empty($newsletter_tout_section_two)) :
            print theme('newsletter_tout_content', array(
              'newsletter_touts' => $newsletter_tout_section_two,
              'button_icon' => $button_icon,
            ));
          endif;
        ?>
      </tbody>
    </table></td>
</tr>
<!-- End Second Set Tout -->
