<?php
/**
 * @file
 * Default theme implementation to display the basic html structure of a single
 *  Drupal page.
 */
?>
<!DOCTYPE html PUBLIC "-//W3C//DTD XHTML 1.1//EN" "http://www.w3.org/TR/xhtml11/DTD/xhtml11.dtd">
<html xmlns="http://www.w3.org/TR/xhtml1/DTD/xhtml1-transitional.dtd">
<head>
<meta name="viewport" content="width=device-width, initial-scale=1.0, maximum-scale=1.0, user-scalable=0"/>
<meta http-equiv="Content-Type" content="text/html; charset=UTF-8"/>
<META NAME="ROBOTS" CONTENT="NOINDEX, NOFOLLOW">
<title>Food &amp; Wine <?php print $head_title; ?></title>
<style type="text/css">
.ExternalClass {
  width: 100%;
}
.ExternalClass, .ExternalClass p, .ExternalClass span, .ExternalClass font, .ExternalClass td, .ExternalClass div {
  line-height: 100%;
}
body {
  -webkit-text-size-adjust: none;
  -ms-text-size-adjust: none;
}
body {
  margin: 0;
  padding: 0;
}
table td {
  border-collapse: collapse;
}
p {
  margin: 0;
  padding: 0;
  padding-bottom: 0;
}
h1, h2, h3, h4, h5, h6 {
  color: black;
  line-height: 100%;
}
a, a:link {
  color: #2A5DB0;
  text-decoration: none;
}
table, tr, th, td {
  margin: 0 auto;
  padding: 0;
  box-sizing: border-box;
  border: none;
  border-collapse: collapse;
  font-family: sans-serif;
  color: #333;
}
a img {
  border: 0px;
}

@media only screen and (max-width:480px) {
}

@media only screen and ( max-width: 694px ) {
*[class=hide] {
  display: none;
}
}
</style>
</head>
<body style="background: #fff;-webkit-text-size-adjust: none;-ms-text-size-adjust: none;margin: 0;padding: 0;">
<!-- Date Format Pixel Start -->
  %%=ContentArea("41592")=%% 
<!-- Date Format Pixel End -->
  <custom name="opencounter" type="tracking">
    <?php print $page; ?>
  </custom>
</body>
</html>
