<?php
/**
 * @file
 * ti_amg_fw_node_convert.node_convert.inc
 */

/**
 * Implements hook_default_node_convert_templates().
 */
function ti_amg_fw_node_convert_default_node_convert_templates() {
  $export = array();

  $node_convert_template = new stdClass();
  $node_convert_template->disabled = FALSE; /* Edit this to true to make a default node_convert_template disabled initially */
  $node_convert_template->api_version = 1;
  $node_convert_template->machine_name = 'migrate_article_to_blog';
  $node_convert_template->name = 'Migrate Article to Blog';
  $node_convert_template->source_type = 'article';
  $node_convert_template->destination_type = 'blog';
  $node_convert_template->data = 'a:3:{s:6:"fields";a:2:{s:6:"source";a:36:{i:0;s:4:"body";i:1;s:12:"field_author";i:2;s:14:"field_category";i:3;s:12:"field_column";i:4;s:10:"field_deck";i:5;s:14:"field_headline";i:6;s:12:"field_images";i:7;s:20:"field_not_searchable";i:8;s:21:"field_related_content";i:9;s:21:"field_related_recipes";i:10;s:17:"field_syndication";i:11;s:30:"field_overwrite_image_alt_text";i:12;s:29:"field_overwrite_image_caption";i:13;s:28:"field_overwrite_image_credit";i:14;s:13:"field_ad_keys";i:15;s:21:"field_blog_hero_image";i:16;s:16:"field_blog_video";i:17;s:20:"field_embedded_video";i:18;s:17:"field_enable_hero";i:19;s:21:"field_multiple_images";i:20;s:14:"field_seo_path";i:21;s:29:"field_show_classic_aspen_menu";i:22;s:11:"field_topic";i:23;s:16:"field_video_hero";i:24;s:18:"skyword_content_id";i:25;s:23:"skyword_metadescription";i:26;s:17:"skyword_seo_title";i:27;s:20:"skyword_tracking_tag";i:28;s:15:"field_fw_course";i:29;s:16:"field_fw_cuisine";i:30;s:15:"field_fw_season";i:31;s:14:"field_fw_style";i:32;s:13:"field_fw_tags";i:33;s:31:"field_blog_left_section_content";i:34;s:29:"field_list_left_section_title";i:35;s:30:"field_blog_pull_quote_headline";}s:11:"destination";a:36:{i:0;s:4:"body";i:1;s:12:"field_author";i:2;s:17:"field_fw_category";i:3;s:7:"discard";i:4;s:10:"field_deck";i:5;s:7:"discard";i:6;s:12:"field_images";i:7;s:7:"discard";i:8;s:23:"field_related_cnt_links";i:9;s:7:"discard";i:10;s:17:"field_syndication";i:11;s:30:"field_overwrite_image_alt_text";i:12;s:29:"field_overwrite_image_caption";i:13;s:28:"field_overwrite_image_credit";i:14;s:13:"field_ad_keys";i:15;s:21:"field_blog_hero_image";i:16;s:16:"field_blog_video";i:17;s:20:"field_embedded_video";i:18;s:17:"field_enable_hero";i:19;s:21:"field_multiple_images";i:20;s:7:"discard";i:21;s:29:"field_show_classic_aspen_menu";i:22;s:11:"field_topic";i:23;s:20:"field_related_videos";i:24;s:18:"skyword_content_id";i:25;s:23:"skyword_metadescription";i:26;s:17:"skyword_seo_title";i:27;s:20:"skyword_tracking_tag";i:28;s:15:"field_fw_course";i:29;s:16:"field_fw_cuisine";i:30;s:15:"field_fw_season";i:31;s:14:"field_fw_style";i:32;s:13:"field_fw_tags";i:33;s:31:"field_blog_left_section_content";i:34;s:29:"field_list_left_section_title";i:35;s:30:"field_blog_pull_quote_headline";}}s:12:"hook_options";N;s:9:"no_fields";b:0;}';
  $export['migrate_article_to_blog'] = $node_convert_template;

  $node_convert_template = new stdClass();
  $node_convert_template->disabled = FALSE; /* Edit this to true to make a default node_convert_template disabled initially */
  $node_convert_template->api_version = 1;
  $node_convert_template->machine_name = 'migrate_blog_to_article';
  $node_convert_template->name = 'Migrate Blog to Article';
  $node_convert_template->source_type = 'blog';
  $node_convert_template->destination_type = 'article';
  $node_convert_template->data = 'a:3:{s:6:"fields";a:2:{s:6:"source";a:43:{i:0;s:4:"body";i:1;s:16:"field_blog_video";i:2;s:20:"field_image_position";i:3;s:20:"field_related_videos";i:4;s:11:"field_topic";i:5;s:12:"field_author";i:6;s:10:"field_deck";i:7;s:12:"field_images";i:8;s:15:"field_legacy_id";i:9;s:30:"field_overwrite_image_alt_text";i:10;s:29:"field_overwrite_image_caption";i:11;s:28:"field_overwrite_image_credit";i:12;s:13:"field_ad_keys";i:13;s:20:"field_rebelmouse_tag";i:14;s:29:"field_exclude_relvideo_module";i:15;s:23:"field_related_cnt_links";i:16;s:21:"field_multiple_images";i:17;s:26:"field_blog_breadcrumb_link";i:18;s:21:"field_blog_hero_image";i:19;s:31:"field_blog_left_section_content";i:20;s:30:"field_blog_pull_quote_headline";i:21;s:29:"field_list_left_section_title";i:22;s:16:"field_pull_quote";i:23;s:32:"field_blog_turn_off_publish_date";i:24;s:29:"field_show_classic_aspen_menu";i:25;s:20:"skyword_tracking_tag";i:26;s:23:"skyword_metadescription";i:27;s:17:"skyword_seo_title";i:28;s:18:"skyword_content_id";i:29;s:19:"field_campaign_logo";i:30;s:18:"field_campaign_url";i:31;s:17:"field_fw_category";i:32;s:15:"field_fw_course";i:33;s:16:"field_fw_cuisine";i:34;s:15:"field_fw_season";i:35;s:14:"field_fw_style";i:36;s:13:"field_fw_tags";i:37;s:17:"field_enable_hero";i:38;s:20:"field_embedded_video";i:39;s:20:"field_block_indexing";i:40;s:19:"field_news_keywords";i:41;s:17:"field_syndication";i:42;s:15:"syndicated_from";}s:11:"destination";a:43:{i:0;s:4:"body";i:1;s:16:"field_blog_video";i:2;s:7:"discard";i:3;s:16:"field_video_hero";i:4;s:11:"field_topic";i:5;s:12:"field_author";i:6;s:10:"field_deck";i:7;s:12:"field_images";i:8;s:7:"discard";i:9;s:30:"field_overwrite_image_alt_text";i:10;s:29:"field_overwrite_image_caption";i:11;s:28:"field_overwrite_image_credit";i:12;s:13:"field_ad_keys";i:13;s:7:"discard";i:14;s:7:"discard";i:15;s:21:"field_related_content";i:16;s:21:"field_multiple_images";i:17;s:7:"discard";i:18;s:21:"field_blog_hero_image";i:19;s:31:"field_blog_left_section_content";i:20;s:30:"field_blog_pull_quote_headline";i:21;s:29:"field_list_left_section_title";i:22;s:7:"discard";i:23;s:7:"discard";i:24;s:29:"field_show_classic_aspen_menu";i:25;s:20:"skyword_tracking_tag";i:26;s:23:"skyword_metadescription";i:27;s:17:"skyword_seo_title";i:28;s:18:"skyword_content_id";i:29;s:7:"discard";i:30;s:7:"discard";i:31;s:14:"field_category";i:32;s:15:"field_fw_course";i:33;s:16:"field_fw_cuisine";i:34;s:15:"field_fw_season";i:35;s:14:"field_fw_style";i:36;s:13:"field_fw_tags";i:37;s:17:"field_enable_hero";i:38;s:20:"field_embedded_video";i:39;s:7:"discard";i:40;s:7:"discard";i:41;s:17:"field_syndication";i:42;s:7:"discard";}}s:12:"hook_options";N;s:9:"no_fields";b:0;}';
  $export['migrate_blog_to_article'] = $node_convert_template;

  return $export;
}
