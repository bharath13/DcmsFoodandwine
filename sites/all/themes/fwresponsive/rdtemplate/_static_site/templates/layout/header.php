<?php 
/**
 * This is for static site only. All templates should use the default
 * fwresponsive theme header when implemented.
 */

// include static site helper functions so they are available to all templates
include_once __DIR__ . '/../../lib/static-helpers.php';

?>
<!DOCTYPE html>
<html lang="en">
<head>
  <meta charset="UTF-8">
  <title>Food and Wine Static Preview Site</title>
  <meta name="viewport" content="width=device-width, user-scalable=no, initial-scale=1.0, maximum-scale=1.0, minimum-scale=1.0">
  <link rel="stylesheet" href="<?php asset('css/main.min.css'); ?>">
  <script src="<?php asset('js/lib/modernizr.min.js'); ?>"></script>
  <script src="//use.typekit.net/dga8knd.js"></script>
  <script>try{Typekit.load();}catch(e){}</script>
</head>
<body>