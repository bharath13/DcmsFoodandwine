
<script lang="text/javascript">
    window.print();
</script>
<div class="print-content">
    <div class="print-logo">
        <img src='/sites/all/themes/foodandwine/images/logo.png' align="middle"/>
    </div>
    <?php if (isset($page['content'])) : ?>
    <div class="print-main-content">
        <?php print render($page['content']); ?>
    </div>
    <?php endif; ?> 
</div>
