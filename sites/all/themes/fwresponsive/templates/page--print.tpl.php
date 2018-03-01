<script lang="text/javascript">
  window.print();
</script>

<div class="print-content">
  <div class="site-header">
    <?php print theme('print-page-logo'); ?>
  </div>
  <?php if (isset($page['fwrd_content'])) : ?>
    <div id="main-wrapper">
      <div id="main" class="clearfix" 
         data-js-component="recipePage" 
         data-bind="css: {loading: isLoadingRecipe}">      
        
      <div itemscope itemtype="http://schema.org/Recipe" class="page-container recipe__load-wrap" data-bind="recipeHtml: activeRecipe">
        <?php print render($page['fwrd_content']); ?>
      </div>

    </div>
    <?php endif; ?> 
  </div>
</div>
