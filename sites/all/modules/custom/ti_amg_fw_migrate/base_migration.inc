<?php

/**
 * @file
 * Base class to share settings, utility functions, etc.
 * Derive your individual migrations from this.
 */
abstract class BaseMigration extends Migration {

  /**
   * Implements __construct().
   */
  public function __construct() {
    parent::__construct(MigrateGroup::getInstance('foodandwine'));
  }
  /**
   * Get the source file's directory
   */
  protected function getSourceRepo() {
    return '/mnt/dcms/foodandwine/migrate/json/';
  }

  /**
   * Converts the Date in JSON to UNIX TIMESTAMP
   * @param type $datestring
   * returns unix timestamp
   */
  protected function fw_convert_date_to_timestamp($date_string) {
    if ($date_string) {
      $parsed_time = strptime($date_string, '%Y/%m/%d %H:%M:%S');
      $timestamp = mktime($parsed_time['tm_hour'], $parsed_time['tm_min'],
        $parsed_time['tm_sec'], $parsed_time['tm_mon'] + 1,
        $parsed_time['tm_mday'], $parsed_time['tm_year'] + 1900
      );
      return $timestamp;
    }
    else {
      return NULL;
    }
  }

  /**
   * Used to get the Taxononomy Term IDs from Label
   *
   * @param String $vocabulary_name Vocabulary Machine Name
   * @param String $label_field_name Taxonomy Label Field Machine Name
   * @param Array $label_field_value Taxonomy Label Field Value
   *
   * @return Array Returns the TIDs
   */
  protected function getTidFromLabel($vocabulary_name = '', $label_field_name = '', $label_field_value = '') {
    $tids = array();
    $query = new EntityFieldQuery();

    $query->entityCondition('entity_type', 'taxonomy_term')->entityCondition('bundle', $vocabulary_name)->fieldCondition($label_field_name, 'value', $label_field_value, 'IN');

    $taxonomy = $query->execute();

    foreach ($taxonomy as $tid => $term) {
      foreach ($term as $tid => $value) {
        $tids[] = $tid;
      }
    }

    if (count($tids) > 0) {
      return $tids;
    }
    else {
      return NULL;
    }
  }

  /**
   * Used to get the NIDs from Label
   *
   * @param String $vocabulary_name Vocabulary Machine Name
   * @param String $label_field_name Node's Label Field Machine Name
   * @param Array $label_field_value Node's Label Field Value
   *
   * @return Array Returns the NIDs
   */
  protected function getNidsFromLabel($vocabulary_name = '', $label_field_name = '', $label_field_value = '') {
    $nids = array();
    $query = new EntityFieldQuery();

    $query->entityCondition('entity_type', 'node')->entityCondition('bundle', $vocabulary_name)->fieldCondition($label_field_name, 'value', $label_field_value, 'IN');

    $peoples = $query->execute();

    foreach ($peoples as $people) {
      foreach ($people as $nid => $value) {
        $nids[] = $nid;
      }
    }
    if (count($nids) > 0) {
      return $nids;
    }
    else {
      return NULL;
    }
  }

  /**
   * Used to get the Recipe NID from Label
   *
   * @param String $vocabulary_name Vocabulary Machine Name
   * @param String $label_field_name Node's Label Field Machine Name
   * @param Array $label_field_value Node's Label Field Value
   *
   * @return Array Returns the NIDs
   */
  protected function getRecipeNidFromLabel($vocabulary_name = '', $label_field_name = '', $label_field_value = '') {
    $recipe_nid = '';
    $query = new EntityFieldQuery();

    $query->entityCondition('entity_type', 'node')->entityCondition('bundle', $vocabulary_name)->fieldCondition($label_field_name, 'value', $label_field_value);

    $peoples = $query->execute();

    foreach ($peoples as $people) {
      foreach ($people as $nid => $value) {
        $recipe_nid = $nid;
      }
    }
    if ($recipe_nid != '') {
      return $recipe_nid;
    }
    else {
      return NULL;
    }
  }


  /**
   * Get the Author's nid
   */
  protected function getBlogAuthorsNids($vocabulary_name = '', $authors_names = '') {
    $nids = array();
    $query = new EntityFieldQuery();
    $query->entityCondition('entity_type', 'node')->entityCondition('bundle', $vocabulary_name)->propertyCondition('title', $authors_names);

    $peoples = $query->execute();

    foreach ($peoples as $people) {
      foreach ($people as $nid => $value) {
        $nids[] = $nid;
      }
    }
    if (count($nids) > 0) {
      return $nids;
    }
    else {
      return NULL;
    }
  }
  /**
   * Get the nid from name
   */
  protected function getNidFromName($person_name = '') {
    $node_type = "person";
    return db_query('SELECT nid FROM {node} WHERE title = :name AND type = :type', array(':name' => $person_name, ':type' => $node_type))->fetchField();
  }
  /**
   * Get the encoded string
   */
  public function get_encoded_string($url) {
    $encoded_path = array();
    $array_url = explode('/', $url);
    foreach ($array_url as $full_url) {
      if ($full_url == "http:" || $full_url == "https:") {
        $encoded_part = $full_url;
      }
      else {
        $encoded_part = rawurlencode($full_url);
      }
      $encoded_path[] = $encoded_part;
    }
    return implode('/', $encoded_path);
  }
  /**
   * Get the image url in css file
   */
  public function getcssURL($matches) {
    if (count($matches) > 0) {
      $style_pattern_css = array(
        "thumbnail" => "/sites/default/files/styles/thumbnail/public",
        "large_thumbnail" => "/sites/default/files/styles/large_thumbnail/public",
      );
      $src_css = $matches['image'];
      $split_url_css = explode("/", $src_css);
      $split_url_end_css = end($split_url_css);
      $split_url_end_css = str_replace(array("%20", " "), "_", $split_url_end_css);
      $img_ref_path = "public://styles/main/public/" . $split_url_end_css;
      $split_url_var_css = explode(".", $split_url_end_css);
      $variation_name_css = $split_url_var_css[0];
      $key_css = array_search($variation_name_css, $style_pattern_css);
      $img_url_css = '';
      if ($key_css !== FALSE) {
        $strip_src_css = explode("/variations/", $src_css);
        $strip_base_url_css = explode("/", $strip_src_css[0]);
        $strip_file_name_css = end($strip_base_url_css);
        $strip_file_name_css = str_replace(array("%20", " "), "_", $strip_file_name_css);
        $img_url_css = $style_pattern_css[$key] . "/" . $strip_file_name_css;
      }
      else {
        if (stripos($src_css, "/variations/") !== FALSE) {
          $strip_src_css = explode("/variations/", $src_css);
          $strip_var_raw_css = explode(".", $strip_src_css[1]);
          $strip_var_name_css = str_replace("/", "-", $strip_var_raw_css[0]);
          $strip_orig_css = explode("/", $strip_src_css[0]);
          $strip_file_name_css = end($strip_orig_css);
          $strip_file_name_css = str_replace(array("%20", " "), "_", $strip_file_name_css);
          $var_title_css = $strip_var_name_css . "-" . $strip_file_name_css;
          $img_url_css = "/sites/default/files/" . $var_title_css;
        }
        elseif (file_exists($img_ref_path)) {
          $img_url_css = "/sites/default/files/styles/main/public/" . $split_url_end_css;
        }
        else {
          if (stripos($src_css, "http://foodandwine.com/") !== FALSE ||
            stripos($src_css, "http://www.foodandwine.com/") !== FALSE
          ) {
            $strip_css = str_replace(array("http://foodandwine.com/", "http://www.foodandwine.com/"), "", $src_css);
          }
          else {
            $strip_css = substr($src_css, 1);
          }
          $var_title_css = str_replace("/", "-", $strip_css);
          $var_title_css = str_replace(array("%20", " "), "_", $var_title_css);
          $img_url_css = "/sites/default/files/" . $var_title_css;
        }
      }
      return 'background' . $matches[1] . ':' . $matches[2] . '(' . $img_url_css . ')';
    }
    else {
      return FALSE;
    }
  }
  /**
   * Get the image url in body
   */
  public function getURL($matches) {
    $style_pattern = array(
      "thumbnail" => "/sites/default/files/styles/thumbnail/public",
      "large_thumbnail" => "/sites/default/files/styles/large_thumbnail/public",
    );
    $src = $matches[2];
    $split_url = explode("/", $src);
    $split_url_end = end($split_url);
    $split_url_end = str_replace(array("%20", " "), "_", $split_url_end);
    $img_ref_path = "public://styles/main/public/" . $split_url_end;
    $split_url_var = explode(".", $split_url_end);
    $variation_name = $split_url_var[0];
    $key = array_search($variation_name, $style_pattern);
    $img_url = '';
    if ($key !== FALSE) {
      $strip_src = explode("/variations/", $src);
      $strip_base_url = explode("/", $strip_src[0]);
      $strip_file_name = end($strip_base_url);
      $strip_file_name = str_replace(array("%20", " "), "_", $strip_file_name);
      $img_url = $style_pattern[$key] . "/" . $strip_file_name;
    }
    else {
      if (stripos($src, "/variations/") !== FALSE) {
        $strip_src = explode("/variations/", $src);
        $strip_var_raw = explode(".", $strip_src[1]);
        $strip_var_name = str_replace("/", "-", $strip_var_raw[0]);
        $strip_orig = explode("/", $strip_src[0]);
        $strip_file_name = end($strip_orig);
        $strip_file_name = str_replace(array("%20", " "), "_", $strip_file_name);
        $var_title = $strip_var_name . "-" . $strip_file_name;
        $img_url = "/sites/default/files/" . $var_title;
      }
      elseif (file_exists($img_ref_path)) {
        $img_url = "/sites/default/files/styles/main/public/" . $split_url_end;
      }
      else {
        if (stripos($src, "http://foodandwine.com/") !== FALSE ||
          stripos($src, "http://www.foodandwine.com/") !== FALSE
        ) {
          $strip = str_replace(array("http://foodandwine.com/", "http://www.foodandwine.com/"), "", $src);
        }
        else {
          $strip = substr($src, 1);
        }
        $var_title = str_replace("/", "-", $strip);
        $var_title = str_replace(array("%20", " "), "_", $var_title);
        $img_custom_path = "public://" . $var_title;
        if (!file_exists($img_custom_path)) {
          $img_url = "/sites/default/files/styles/main/public/" . $split_url_end;
        }
        else {
          $img_url = "/sites/default/files/" . $var_title;
        }
      }
    }
    return $matches[1] . $img_url;
  }
  /**
   * Get the image url of main image
   */
  public function get_main_image_url($main_img_url) {
    $src = $main_img_url;
    $img_url = '';
    if (stripos($src, "/variations/") !== FALSE) {
      $strip_src = explode("/variations/", $src);
      $strip_var_raw = explode(".", $strip_src[1]);
      $strip_var_name = str_replace("/", "-", $strip_var_raw[0]);
      $strip_orig = explode("/", $strip_src[0]);
      $strip_file_name = end($strip_orig);
      $strip_file_name = str_replace(array("%20", " "), "_", $strip_file_name);
      $var_title = $strip_var_name . "-" . $strip_file_name;
    }
    else {
      if (stripos($src, "http://foodandwine.com/") !== FALSE ||
        stripos($src, "http://www.foodandwine.com/") !== FALSE
      ) {
        $strip = str_replace(array("http://foodandwine.com/", "http://www.foodandwine.com/"), "", $src);
      }
      else {
        $strip = substr($src, 1);
      }
      $var_title = str_replace("/", "-", $strip);
      $var_title = str_replace(array("%20", " "), "_", $var_title);
    }
    return $var_title;
  }

  /**
   * Used to get the respective Video Node IDs based on the legacy id
   *
   * @param String $video_ids_str Holds the Legacy IDs
   *
   * @return Array Returns the Node IDs of the Image
   */
  protected function getVideoIDs($video_ids_str = '') {
    $arr_video_ids = array();
    $arr_legacy_ids = array();
    $video_ids_str = str_replace(' ', '', $video_ids_str);
    $arr_legacy_ids = explode(',', $video_ids_str);
    if (!empty($arr_legacy_ids)) {
      $query_videos = db_select('migrate_map_videos', 'videosmap');
      $query_videos->fields('videosmap', array('sourceid1', 'destid1'));
      $query_videos->leftJoin('node', 'n', 'n.nid = videosmap.destid1');
      $query_videos->fields('n', array('nid'));
      if (count($arr_legacy_ids) > 1) {
        $query_videos->condition('videosmap.sourceid1', $arr_legacy_ids, 'IN');
      }
      else {
        $query_videos->condition('videosmap.sourceid1', $arr_legacy_ids[0], '=');
      }
      $result_videos = $query_videos->execute()->fetchAll();
      foreach ($result_videos as $video_row) {
        $arr_video_ids[] = $video_row->nid;
      }
      if (!empty($arr_video_ids)) {
        return $arr_video_ids;
      }
      else {
        return FALSE;
      }
    }
    else {
      return FALSE;
    }
  }

  /**
   * Used to get the respective Video Node IDs based on the legacy id
   *
   * @param String $video_ids_str Holds the Legacy IDs
   *
   * @return Array Returns the Node IDs of the Image
   */
  protected function convertToHoursMins($time, $format = '%d:%s') {
    settype($time, 'integer');
    if ($time < 0 || $time >= 1440) {
      return;
    }
    $hours = floor($time / 60);
    $minutes = $time % 60;
    if ($minutes < 10) {
      $minutes = '0' . $minutes;
    }
    return array($hours, $minutes);
  }

  /**
   * Used to get the respective Term IDs from Term Names
   *
   * @param represents the taxonomy vocabulary name
   * @param represents name property of field name
   * @param represents field values for condition
   *
   * @return Array Term IDs of the taxonomy terms
   */
  protected function getTidFromName($vocabulary_name = '', $label_field_name = '', $label_field_value = '') {
    $term_id = '';
    $query = new EntityFieldQuery();
    $query->entityCondition('entity_type', 'taxonomy_term')->entityCondition('bundle', $vocabulary_name)->propertyCondition($label_field_name, $label_field_value);

    $taxonomy = $query->execute();

    foreach ($taxonomy as $tid => $term) {
      foreach ($term as $tid => $value) {
        $term_id = $tid;
      }
    }

    if ($term_id != '') {
      return $term_id;
    }
    else {
      return NULL;
    }
  }

  /**
   * Used to map the blog tags to blog topic
   *
   * @param represents related tags for particular blog
   *
   * @return Array of topics related to that blog
   */
  protected function tags_to_topic_mapping($related_tags) {
    global $map_array;
    //print '<pre>';print_r($map_array);exit;
    //print $map_array["THE FOOD & WINE DIET"];exit;
    $topics = array();
    foreach ($related_tags as $tag) {
      if (isset($map_array[$tag->name])) {
        if (!in_array($map_array[$tag->name], $topics)) {
          $topics[] = $map_array[$tag->name];
        }
      }
    }
    return $topics;
  }
}

