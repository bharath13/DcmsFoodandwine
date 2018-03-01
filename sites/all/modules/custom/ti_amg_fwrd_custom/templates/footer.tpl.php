<?php 
/**
 * Footer Block
 * TODO: VIK 08192015 currently we use Drupal settings and pull out the markup from CMS, 
 * need to create another field for the resonsive footer
 */
global $base_url;
?>

<div class="footer">
<?php print variable_get('fw_redesign_footer', _ti_amg_fw_custom_redesign_footer_default_html()); ?>
</div>
