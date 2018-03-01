<?php include 'layout/header.php'; ?>
<?php print theme('header'); ?>

<div style="background-color: green; height: 2000px;">
  Big div to push images below fold for lazy load test
</div>

<img data-js-component="imgLazyLoad"
     data-original="http://clients.expandtheroom.net/food-and-wine/redesign/placeholder-images/recipe-01.jpg" alt="">
<img data-js-component="imgLazyLoad"
     data-original="http://clients.expandtheroom.net/food-and-wine/redesign/placeholder-images/recipe-02.jpg" alt="">
<img data-js-component="imgLazyLoad"
     data-original="http://clients.expandtheroom.net/food-and-wine/redesign/placeholder-images/recipe-03.jpg" alt="">

<?php print theme('footer'); ?>
<?php include 'layout/footer.php'; ?>