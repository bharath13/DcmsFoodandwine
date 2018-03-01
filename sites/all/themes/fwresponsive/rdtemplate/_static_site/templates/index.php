<?php include 'layout/header.php'; ?>

<style>

  body {
    font-family: Helvetica Neue, Helvetica, Arial;
  }

  .page-container {
    padding-top: 40px;
    padding-bottom: 40px;
    margin-top: 20px;
  }

  h1 {
    margin-top: 0;
  }

  ul li {
    padding: 0 10px;
    border-bottom: 1px solid #eee;
    list-style: none;
  }

  li:hover {
    background-color: #efefef;
  }

  li a {
    display: block;
    padding: 12px 5px;
  }

  .label {
    padding: 5px 10px;
    margin-left: 10px;
    border-radius: 4px;
    color: white;
    font-size: 12px;
    vertical-align: middle;
  }

  .label.label--ready {
    background-color: #a0d95d;
  }

  .label.label--dev {
    background-color: #d95d5d;
  }
</style>

<div class="page-container">
  <h1>Food and Wine Static Templates</h1>

  <ul>
    <li>
      <a href="recipe.php">Recipe Template <span class="label label--ready">Ready</span></a>
    </li>
    <li>
      <a href="homepage.php">Homepage Template <span class="label label--ready">Ready</span></a>
    </li>
    <li>
      <a href="section-front.php">Section Front Template <span class="label label--ready">Ready</span></a>
    </li>
    <li>
      <a href="feature.php">Feature Template <span class="label label--ready">Ready</span></a>
    </li>
    <li>
      <a href="feature-landscape.php">Feature Template (Landscape) <span class="label label--ready">Ready</span></a>
    </li>
    <li>
      <a href="gallery.php">Gallery <span class="label label--ready">Ready</span></a>
    </li>
    <li>
      <a href="gallery.php?list=true">Gallery List <span class="label label--ready">Ready</span></a>
    </li>
    <li>
      <a href="video.php">Video Template <span class="label label--dev">In Development</span></a>
    </li>
    <li>
      <a href="video-section-front.php">Video Section Front <span class="label label--dev">In Development</span></a>
    </li>
  </ul>
</div>

<?php include 'layout/footer.php'; ?>