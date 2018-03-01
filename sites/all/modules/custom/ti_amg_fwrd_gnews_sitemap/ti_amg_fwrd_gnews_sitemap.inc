<?php

/**
 * @file
 * Sitemap business logic.
 *
 */


/**
 * Function to print news sitemap links
 * @global type $base_path
 * @global string $base_url
 */
function ti_amg_fwrd_gnews_sitemap_main_links() {
  $time_now = gmdate(DATE_W3C, time());
  $content = '<?xml version="1.0" encoding="UTF-8"?>
    <urlset xmlns="http://www.sitemaps.org/schemas/sitemap/0.9"
    xmlns:news="http://www.google.com/schemas/sitemap-news/0.9"
    xmlns:image="http://www.google.com/schemas/sitemap-news/0.9">
  '; 
  $result = _ti_amg_fwrd_gnews_sitemap_news_links(FALSE);

  if (!empty($result)) {
    foreach ($result as $nid => $rec) {
      $node_url = urldecode(url('node/' . $nid, array('absolute' => TRUE)));

      if (FALSE === strpos($node_url, '/node/') && FALSE === strpos($node_url, '/robots.txt/')) {
        $content .= '<url>
            <loc>'
            . url($node_url, array('absolute' => TRUE))
          .'</loc>
          <news:news>
            <news:publication>
              <news:name>Food &amp; Wine</news:name>
              <news:language>en</news:language>
            </news:publication>
            <news:publication_date>' . gmdate(DATE_W3C, $rec['pub_date']) .
            '</news:publication_date>
            <news:title>' . check_plain($rec['title']) . '</news:title>';

        if (trim($rec['keywords']) != '')
          $content .= '<news:keywords>' . check_plain($rec['keywords']) . '</news:keywords>';
        else
          $content .= '<news:keywords />';

        $content .= '</news:news>
          <image:image>
            <image:loc>' . check_plain($rec['img_url']) .
            '</image:loc>
          </image:image>
          </url>';
      }
    } // foreach node
  } //result array should not be empty
  $content .= '</urlset>';

  drupal_add_http_header('Content-Type', 'text/xml; charset=utf-8');
  drupal_add_http_header('Cache-Control', 'no-cache, no-store, must-revalidate');
  drupal_add_http_header('Pragma', 'no-cache');
  drupal_add_http_header('Expires', '0');
  print $content;
  drupal_exit(); // ensure no drupal cruft gets sent out
}
