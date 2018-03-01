<?php
/**
 * @file
 * ti_amg_fw_base_components.features.metatag.inc
 */

/**
 * Implements hook_metatag_export_default().
 */
function ti_amg_fw_base_components_metatag_export_default() {
  $config = array();

  // Exported Metatag config instance: global.
  $config['global'] = array(
    'instance' => 'global',
    'disabled' => FALSE,
    'config' => array(
      'title' => array(
        'value' => '[current-page:title] | [site:name]',
      ),
      'description' => array(
        'value' => '',
      ),
      'abstract' => array(
        'value' => '',
      ),
      'keywords' => array(
        'value' => '',
      ),
      'robots' => array(
        'value' => array(
          'index' => 0,
          'follow' => 0,
          'noindex' => 0,
          'nofollow' => 0,
          'noarchive' => 0,
          'nosnippet' => 0,
          'noodp' => 0,
          'noydir' => 0,
          'noimageindex' => 0,
          'notranslate' => 0,
        ),
      ),
      'news_keywords' => array(
        'value' => '',
      ),
      'standout' => array(
        'value' => '',
      ),
      'rating' => array(
        'value' => '',
      ),
      'referrer' => array(
        'value' => '',
      ),
      'generator' => array(
        'value' => '',
      ),
      'rights' => array(
        'value' => '',
      ),
      'image_src' => array(
        'value' => '',
      ),
      'canonical' => array(
        'value' => '[current-page:url:absolute]',
      ),
      'shortlink' => array(
        'value' => '',
      ),
      'original-source' => array(
        'value' => '',
      ),
      'prev' => array(
        'value' => '',
      ),
      'next' => array(
        'value' => '',
      ),
      'content-language' => array(
        'value' => '',
      ),
      'geo.position' => array(
        'value' => '',
      ),
      'geo.placename' => array(
        'value' => '',
      ),
      'geo.region' => array(
        'value' => '',
      ),
      'icbm' => array(
        'value' => '',
      ),
      'refresh' => array(
        'value' => '',
      ),
      'revisit-after' => array(
        'value' => '',
        'period' => '',
      ),
      'pragma' => array(
        'value' => '',
      ),
      'cache-control' => array(
        'value' => '',
      ),
      'expires' => array(
        'value' => '',
      ),
      'fb:admins' => array(
        'value' => '',
      ),
      'fb:app_id' => array(
        'value' => '154653334553109',
      ),
      'fb:pages' => array(
        'value' => '',
      ),
      'og:site_name' => array(
        'value' => '[site:name]',
      ),
      'og:type' => array(
        'value' => 'article',
      ),
      'og:url' => array(
        'value' => '[current-page:url:absolute]',
      ),
      'og:title' => array(
        'value' => '[current-page:title]',
      ),
      'og:determiner' => array(
        'value' => '',
      ),
      'og:description' => array(
        'value' => 'Food & Wine goes way beyond mere eating and drinking. We\'re on a mission to find the most exciting places, new experiences, emerging trends and sensations.',
      ),
      'og:updated_time' => array(
        'value' => '',
      ),
      'og:see_also' => array(
        'value' => '',
      ),
      'og:image' => array(
        'value' => '',
      ),
      'og:image:url' => array(
        'value' => '',
      ),
      'og:image:secure_url' => array(
        'value' => '',
      ),
      'og:image:type' => array(
        'value' => '',
      ),
      'og:image:width' => array(
        'value' => '',
      ),
      'og:image:height' => array(
        'value' => '',
      ),
      'og:latitude' => array(
        'value' => '',
      ),
      'og:longitude' => array(
        'value' => '',
      ),
      'og:street_address' => array(
        'value' => '',
      ),
      'og:locality' => array(
        'value' => '',
      ),
      'og:region' => array(
        'value' => '',
      ),
      'og:postal_code' => array(
        'value' => '',
      ),
      'og:country_name' => array(
        'value' => '',
      ),
      'og:email' => array(
        'value' => '',
      ),
      'og:phone_number' => array(
        'value' => '',
      ),
      'og:fax_number' => array(
        'value' => '',
      ),
      'og:locale' => array(
        'value' => '',
      ),
      'og:locale:alternate' => array(
        'value' => '',
      ),
      'article:author' => array(
        'value' => '',
      ),
      'article:publisher' => array(
        'value' => '',
      ),
      'article:section' => array(
        'value' => '',
      ),
      'article:tag' => array(
        'value' => '',
      ),
      'article:published_time' => array(
        'value' => '',
      ),
      'article:modified_time' => array(
        'value' => '',
      ),
      'article:expiration_time' => array(
        'value' => '',
      ),
      'profile:first_name' => array(
        'value' => '',
      ),
      'profile:last_name' => array(
        'value' => '',
      ),
      'profile:username' => array(
        'value' => '',
      ),
      'profile:gender' => array(
        'value' => '',
      ),
      'og:audio' => array(
        'value' => '',
      ),
      'og:audio:secure_url' => array(
        'value' => '',
      ),
      'og:audio:type' => array(
        'value' => '',
      ),
      'book:author' => array(
        'value' => '',
      ),
      'book:isbn' => array(
        'value' => '',
      ),
      'book:release_date' => array(
        'value' => '',
      ),
      'book:tag' => array(
        'value' => '',
      ),
      'og:video:url' => array(
        'value' => '',
      ),
      'og:video:secure_url' => array(
        'value' => '',
      ),
      'og:video:width' => array(
        'value' => '',
      ),
      'og:video:height' => array(
        'value' => '',
      ),
      'og:video:type' => array(
        'value' => '',
      ),
      'video:actor' => array(
        'value' => '',
      ),
      'video:actor:role' => array(
        'value' => '',
      ),
      'video:director' => array(
        'value' => '',
      ),
      'video:writer' => array(
        'value' => '',
      ),
      'video:duration' => array(
        'value' => '',
      ),
      'video:release_date' => array(
        'value' => '',
      ),
      'video:tag' => array(
        'value' => '',
      ),
      'video:series' => array(
        'value' => '',
      ),
      'twitter:card' => array(
        'value' => 'summary_large_image',
      ),
      'twitter:site' => array(
        'value' => '@foodandwine',
      ),
      'twitter:site:id' => array(
        'value' => '',
      ),
      'twitter:creator' => array(
        'value' => '',
      ),
      'twitter:creator:id' => array(
        'value' => '',
      ),
      'twitter:url' => array(
        'value' => '[current-page:url:absolute]',
      ),
      'twitter:title' => array(
        'value' => '[current-page:title]',
      ),
      'twitter:description' => array(
        'value' => 'Food & Wine goes way beyond mere eating and drinking. We\'re on a mission to find the most exciting places, new experiences, emerging trends and sensations.',
      ),
      'twitter:image' => array(
        'value' => '',
      ),
      'twitter:image:width' => array(
        'value' => '',
      ),
      'twitter:image:height' => array(
        'value' => '',
      ),
      'twitter:image:alt' => array(
        'value' => '',
      ),
      'twitter:image0' => array(
        'value' => '',
      ),
      'twitter:image1' => array(
        'value' => '',
      ),
      'twitter:image2' => array(
        'value' => '',
      ),
      'twitter:image3' => array(
        'value' => '',
      ),
      'twitter:player' => array(
        'value' => '',
      ),
      'twitter:player:width' => array(
        'value' => '',
      ),
      'twitter:player:height' => array(
        'value' => '',
      ),
      'twitter:player:stream' => array(
        'value' => '',
      ),
      'twitter:player:stream:content_type' => array(
        'value' => '',
      ),
      'twitter:app:country' => array(
        'value' => '',
      ),
      'twitter:app:name:iphone' => array(
        'value' => '',
      ),
      'twitter:app:id:iphone' => array(
        'value' => '',
      ),
      'twitter:app:url:iphone' => array(
        'value' => '',
      ),
      'twitter:app:name:ipad' => array(
        'value' => '',
      ),
      'twitter:app:id:ipad' => array(
        'value' => '',
      ),
      'twitter:app:url:ipad' => array(
        'value' => '',
      ),
      'twitter:app:name:googleplay' => array(
        'value' => '',
      ),
      'twitter:app:id:googleplay' => array(
        'value' => '',
      ),
      'twitter:app:url:googleplay' => array(
        'value' => '',
      ),
      'twitter:label1' => array(
        'value' => '',
      ),
      'twitter:data1' => array(
        'value' => '',
      ),
      'twitter:label2' => array(
        'value' => '',
      ),
      'twitter:data2' => array(
        'value' => '',
      ),
      'amphtml' => array(
        'value' => '',
      ),
      'article_teaser_type' => array(
        'value' => '',
      ),
      'author_name' => array(
        'value' => '',
      ),
      'author_type' => array(
        'value' => '',
      ),
      'available_app_ids' => array(
        'value' => '',
      ),
      'browse_refine_type' => array(
        'value' => '',
      ),
      'browse_refine_value' => array(
        'value' => '',
      ),
      'bundle_id' => array(
        'value' => '',
      ),
      'channel' => array(
        'value' => '',
      ),
      'click_id' => array(
        'value' => '',
      ),
      'content_access' => array(
        'value' => '',
      ),
      'content_id' => array(
        'value' => '',
      ),
      'content_package' => array(
        'value' => '',
      ),
      'content_package_id' => array(
        'value' => '',
      ),
      'content_package_section' => array(
        'value' => '',
      ),
      'country_code' => array(
        'value' => '',
      ),
      'currency_code' => array(
        'value' => '',
      ),
      'customer_country' => array(
        'value' => '',
      ),
      'customer_email' => array(
        'value' => '',
      ),
      'customer_first_name' => array(
        'value' => '',
      ),
      'customer_id' => array(
        'value' => '',
      ),
      'customer_state' => array(
        'value' => '',
      ),
      'customer_zip' => array(
        'value' => '',
      ),
      'display_date' => array(
        'value' => '',
      ),
      'event_name' => array(
        'value' => '',
      ),
      'food_convenience' => array(
        'value' => '',
      ),
      'food_cooking_method' => array(
        'value' => '',
      ),
      'food_courses' => array(
        'value' => '',
      ),
      'food_cuisine' => array(
        'value' => '',
      ),
      'food_dietary_considerations' => array(
        'value' => '',
      ),
      'food_excluded_ingredients' => array(
        'value' => '',
      ),
      'food_main_ingredients' => array(
        'value' => '',
      ),
      'food_season_occasion' => array(
        'value' => '',
      ),
      'franchise_name' => array(
        'value' => '',
      ),
      'franchise_year' => array(
        'value' => '',
      ),
      'franchise_list_view_type' => array(
        'value' => '',
      ),
      'franchise_pagination_value' => array(
        'value' => '',
      ),
      'franchise_sort_type' => array(
        'value' => '',
      ),
      'franchise_is_methodology' => array(
        'value' => '',
      ),
      'franchise_slide_number' => array(
        'value' => '',
      ),
      'friendly_url' => array(
        'value' => '',
      ),
      'grade_level' => array(
        'value' => '',
      ),
      'grocery_deals_category' => array(
        'value' => '',
      ),
      'grocery_deals_retailer' => array(
        'value' => '',
      ),
      'grocery_deals_search' => array(
        'value' => '',
      ),
      'grocery_deals_zip' => array(
        'value' => '',
      ),
      'has_continuous_service' => array(
        'value' => '',
      ),
      'has_donor' => array(
        'value' => '',
      ),
      'has_print_subscription' => array(
        'value' => '',
      ),
      'image_id' => array(
        'value' => '',
      ),
      'is_active_subscriber' => array(
        'value' => '',
      ),
      'is_agent_subscription' => array(
        'value' => '',
      ),
      'is_bill_me' => array(
        'value' => '',
      ),
      'is_giftee' => array(
        'value' => '',
      ),
      'is_renewable' => array(
        'value' => '',
      ),
      'health_journey' => array(
        'value' => '',
      ),
      'language_code' => array(
        'value' => '',
      ),
      'login_status' => array(
        'value' => '',
      ),
      'magazine_cover_title' => array(
        'value' => '',
      ),
      'magazine_feed' => array(
        'value' => '',
      ),
      'magazine_issue_date' => array(
        'value' => '',
      ),
      'markets' => array(
        'value' => '',
      ),
      'page_name' => array(
        'value' => '',
      ),
      'page_number' => array(
        'value' => '',
      ),
      'personality_name' => array(
        'value' => '',
      ),
      'primary_tag' => array(
        'value' => '',
      ),
      'publication_source' => array(
        'value' => '',
      ),
      'publish_date' => array(
        'value' => '',
      ),
      'rr_modules' => array(
        'value' => '',
      ),
      'search_keyword' => array(
        'value' => '',
      ),
      'search_results' => array(
        'value' => '',
      ),
      'secondary_renewal_offer' => array(
        'value' => '',
      ),
      'site_display_format' => array(
        'value' => '',
      ),
      'site_section1' => array(
        'value' => '',
      ),
      'site_section2' => array(
        'value' => '',
      ),
      'site_section3' => array(
        'value' => '',
      ),
      'site_section4' => array(
        'value' => '',
      ),
      'site_theme' => array(
        'value' => '',
      ),
      'slide_title' => array(
        'value' => '',
      ),
      'subscriber_expiration_date' => array(
        'value' => '',
      ),
      'subscriber_id' => array(
        'value' => '',
      ),
      'subscriber_type' => array(
        'value' => '',
      ),
      'subscription_status' => array(
        'value' => '',
      ),
      'tcm_conversion_microsite' => array(
        'value' => '',
      ),
      'tcm_conversion_page_flow' => array(
        'value' => '',
      ),
      'tag_keywords' => array(
        'value' => '',
      ),
      'tag_visibility' => array(
        'value' => '',
      ),
      'tcm_effort_key' => array(
        'value' => '',
      ),
      'tcm_form_error' => array(
        'value' => '',
      ),
      'tcm_keycode' => array(
        'value' => '',
      ),
      'tcm_newsletter_optin' => array(
        'value' => '',
      ),
      'tcm_mag_code' => array(
        'value' => '',
      ),
      'tcm_microsite' => array(
        'value' => '',
      ),
      'tcm_order_id' => array(
        'value' => '',
      ),
      'tcm_order_shipping_amount' => array(
        'value' => '',
      ),
      'tcm_order_subtotal' => array(
        'value' => '',
      ),
      'tcm_order_tax_amount' => array(
        'value' => '',
      ),
      'tcm_order_total' => array(
        'value' => '',
      ),
      'tcm_order_type' => array(
        'value' => '',
      ),
      'tcm_page_flow' => array(
        'value' => '',
      ),
      'tcm_payment_method' => array(
        'value' => '',
      ),
      'tcm_prefix' => array(
        'value' => '',
      ),
      'tcm_product_name' => array(
        'value' => '',
      ),
      'tcm_product_price' => array(
        'value' => '',
      ),
      'tcm_product_quantity' => array(
        'value' => '',
      ),
      'tcm_product_sku' => array(
        'value' => '',
      ),
      'tcm_product_sku_options' => array(
        'value' => '',
      ),
      'tcm_shipping_method' => array(
        'value' => '',
      ),
      'tcm_variation_id' => array(
        'value' => '',
      ),
      'team_name' => array(
        'value' => '',
      ),
      'template_type' => array(
        'value' => '',
      ),
      'ticker_symbol' => array(
        'value' => '',
      ),
      'tier_level' => array(
        'value' => '',
      ),
      'total_amount_due' => array(
        'value' => '',
      ),
      'treat_as_registered' => array(
        'value' => '',
      ),
      'user_actions' => array(
        'value' => '',
      ),
      'video_asset_id' => array(
        'value' => '',
      ),
      'video_franchise' => array(
        'value' => '',
      ),
      'video_name' => array(
        'value' => '',
      ),
      'video_player' => array(
        'value' => '',
      ),
      'video_player_type' => array(
        'value' => '',
      ),
      'video_segment' => array(
        'value' => '',
      ),
      'gallery_view' => array(
        'value' => '',
      ),
      'is_sponsored_page' => array(
        'value' => '',
      ),
    ),
  );

  // Exported Metatag config instance: global:frontpage.
  $config['global:frontpage'] = array(
    'instance' => 'global:frontpage',
    'disabled' => FALSE,
    'config' => array(
      'title' => array(
        'value' => 'Food & Wine Magazine | Recipes, Menus, Chefs, Wine, Cooking, Holidays, Entertaining',
      ),
      'description' => array(
        'value' => 'Food & Wine goes way beyond mere eating and drinking. We\'re on a mission to find the most exciting places, new experiences, emerging trends and sensations.',
      ),
      'robots' => array(
        'value' => array(
          'index' => 0,
          'follow' => 0,
          'noindex' => 0,
          'nofollow' => 0,
          'noarchive' => 0,
          'nosnippet' => 0,
          'noodp' => 0,
          'noydir' => 0,
          'noimageindex' => 0,
          'notranslate' => 0,
        ),
      ),
      'canonical' => array(
        'value' => '[site:url]',
      ),
      'alternate' => array(
        'value' => '[site:url]m/',
      ),
      'fb:pages' => array(
        'value' => 17786732025,
      ),
      'og:type' => array(
        'value' => 'website',
      ),
      'og:url' => array(
        'value' => '[site:url]',
      ),
    ),
  );

  // Exported Metatag config instance: node.
  $config['node'] = array(
    'instance' => 'node',
    'disabled' => FALSE,
    'config' => array(
      'title' => array(
        'value' => '[node:title] | [site:name]',
      ),
      'description' => array(
        'value' => '[node:fw_custom_meta_description]',
      ),
      'og:image' => array(
        'value' => '[node:custom-og-image]',
      ),
      'contentAuthorName' => array(
        'value' => '[node:field_author]',
      ),
      'contentModifiedDate' => array(
        'value' => '[node:changed]',
      ),
      'contentPublishedDate' => array(
        'value' => '[node:created]',
      ),
      'contentHeadline' => array(
        'value' => '[node:title]',
      ),
      'contentType' => array(
        'value' => '[node:content-type]',
      ),
      'contentCmsTerms' => array(
        'value' => '[node:field_category],[node:field_subcategory],[node:field_fw_tags]',
      ),
      'contentCmsTags' => array(
        'value' => '[node:field_fw_tags]',
      ),
      'contentCmsCategory' => array(
        'value' => '[node:field_category]',
      ),
      'contentCmsSubCategory' => array(
        'value' => '[node:field_subcategory]',
      ),
      'contentShownOnPlatform' => array(
        'value' => 'own',
      ),
      'contentFeaturedImage' => array(
        'value' => '[node:field-images:field_image]',
      ),
      'contentCmsId' => array(
        'value' => '[node:nid]',
      ),
      'timeIncBrand' => array(
        'value' => 'foodandwine.com',
      ),
      'timeIncApplication' => array(
        'value' => 'dcms',
      ),
      'contentSyndicated' => array(
        'value' => '[node:syndicated_from]',
      ),
      'contentSyndicatedBrand' => array(
        'value' => '[node:segmentio_imported_from]',
      ),
      'contentSyndicatedUrl' => array(
        'value' => '[node:segmentio_metatag:original-source]',
      ),
      'contentCmsDesk' => array(
        'value' => '[node:field_digital_desk]',
      ),
    ),
  );

  // Exported Metatag config instance: node:article.
  $config['node:article'] = array(
    'instance' => 'node:article',
    'disabled' => FALSE,
    'config' => array(
      'og:description' => array(
        'value' => '[node:metatag:description]',
      ),
      'og:image' => array(
        'value' => '[node:custom-og-image]',
      ),
      'twitter:title' => array(
        'value' => '[node:custom-twitter-title]',
      ),
      'twitter:description' => array(
        'value' => '[node:metatag:description]',
      ),
    ),
  );

  // Exported Metatag config instance: node:category.
  $config['node:category'] = array(
    'instance' => 'node:category',
    'disabled' => FALSE,
    'config' => array(
      'title' => array(
        'value' => 'Easy [node:field_fw_category] Recipes & Ideas | [site:name]',
      ),
      'description' => array(
        'value' => 'Looking for [node:field_fw_category] recipes? Find the best [node:field_fw_category] ideas on Food & Wine with recipes that are fast & easy.',
      ),
      'robots' => array(
        'value' => array(
          'index' => 0,
          'follow' => 0,
          'noindex' => 0,
          'nofollow' => 0,
          'noarchive' => 0,
          'nosnippet' => 0,
          'noodp' => 0,
          'noydir' => 0,
          'noimageindex' => 0,
          'notranslate' => 0,
        ),
      ),
    ),
  );

  // Exported Metatag config instance: node:gallery.
  $config['node:gallery'] = array(
    'instance' => 'node:gallery',
    'disabled' => FALSE,
    'config' => array(
      'og:description' => array(
        'value' => '[node:metatag:description]',
      ),
      'og:image' => array(
        'value' => '[node:custom-og-image]',
      ),
      'twitter:title' => array(
        'value' => '[node:custom-twitter-title]',
      ),
      'twitter:description' => array(
        'value' => '[node:metatag:description]',
      ),
    ),
  );

  // Exported Metatag config instance: node:person.
  $config['node:person'] = array(
    'instance' => 'node:person',
    'disabled' => FALSE,
    'config' => array(
      'title' => array(
        'value' => '[node:title] | Chefs | [site:name]',
      ),
      'canonical' => array(
        'value' => '[current-page:url:absolute]',
      ),
      'robots' => array(
        'value' => array(
          'noindex' => 'noindex',
          'index' => 0,
          'follow' => 0,
          'nofollow' => 0,
          'noarchive' => 0,
          'nosnippet' => 0,
          'noodp' => 0,
          'noydir' => 0,
          'noimageindex' => 0,
          'notranslate' => 0,
        ),
      ),
    ),
  );

  // Exported Metatag config instance: node:recipe.
  $config['node:recipe'] = array(
    'instance' => 'node:recipe',
    'disabled' => FALSE,
    'config' => array(
      'title' => array(
        'value' => '[node:title] @[node:field-chefs-author]@[node:field-source-author]@ | [site:name]',
      ),
      'og:description' => array(
        'value' => '[node:metatag:description]',
      ),
      'og:image' => array(
        'value' => '[node:custom-og-image]',
      ),
      'twitter:description' => array(
        'value' => '[node:metatag:description]',
      ),
    ),
  );

  // Exported Metatag config instance: node:video.
  $config['node:video'] = array(
    'instance' => 'node:video',
    'disabled' => FALSE,
    'config' => array(
      'og:description' => array(
        'value' => '[node:metatag:description]',
      ),
      'og:image' => array(
        'value' => '[node:custom-og-image]',
      ),
      'twitter:description' => array(
        'value' => '[node:metatag:description]',
      ),
      'contentFeaturedImage' => array(
        'value' => '[node:field_video_thumbnail]',
      ),
    ),
  );

  return $config;
}
