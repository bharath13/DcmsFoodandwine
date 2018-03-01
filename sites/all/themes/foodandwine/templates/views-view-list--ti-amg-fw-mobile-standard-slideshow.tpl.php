<?php

/**
 * @file
 * Default simple view template to display a list of rows.
 *
 * - $title : The title of this group of rows.  May be empty.
 * - $options['type'] will either be ul or ol.
 * @ingroup views_templates
 */
?>

<?php print $wrapper_prefix; ?>
  <?php if (!empty($title)): ?>
    <h3><?php print $title; ?></h3>
  <?php endif; ?>
    <div id="mob-intr-ad">
      <script type="text/javascript">
        var interstitialAd = adFactory.getMultiAd(new Array("300x250","320x250","300x300","320x320")); 
        interstitialAd.setZone("interstitial"); 
      </script>
    </div>       
  <?php print $list_type_prefix; ?>
    <?php foreach ($rows as $id => $row): ?>
      <?php if ($id == 4): ?>
        <li class="mob-ad-intr <?php print $classes_array[$id]; ?>">
            <span class="ad-span">Advertisement</span>
            <div id="interstitial-ad"></div>
        </li>
      <?php endif; ?>
      <li class="<?php print $classes_array[$id]; ?>"><?php print $row; ?></li>
    <?php endforeach; ?>
      <?php $nid = $view->args[0];
$lastSlide = views_embed_view('ti_amg_fw_mobile_related_slideshows', 'block_1', $nid);
$lastSlide_count = count(views_get_view_result('ti_amg_fw_mobile_related_slideshows', 'block_1', array($nid)));
?>

<?php if ($lastSlide_count != 0): ?>
        <li><?php print $lastSlide; ?></li>
      <?php endif; ?>
  <?php print $list_type_suffix; ?>
<?php print $wrapper_suffix; 

