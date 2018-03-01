<?php
/**
 * Bottom module first.
 *
 * TEMP: For outbrain team to style outbrain and hide for UAT testing.
 */
?>
<section class="recipe_outbrain section-container">
  <div class="section-heading section-heading--center">
    <span>Sponsored Stories</span>
  </div>
  <div class="grid grid--6">
    <?php
       print theme('ti_amg_fw_outbrain_redesign',
         array('widget_id' => 'AR_4', 'title' => ''));
    ?>
  </div>
</section>
