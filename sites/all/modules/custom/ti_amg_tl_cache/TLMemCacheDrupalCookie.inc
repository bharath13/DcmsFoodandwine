<?php
/**
 * @file
 * Extends MemCacheDrupal to use cookies as cache key prefixes.
 *
 * Heavily inspired by cookie_aware_page_cache, and a similar
 * implementation can be found in EW's caching feature.
 *
 * @link https://www.drupal.org/project/cookie_aware_page_cache
 */
class TLMemCacheDrupalCookie extends MemCacheDrupal
  implements DrupalCacheInterface {


  /**
   * Alter the CID to include the TI_PREFS cookie.
   *
   * @param string $cid
   *   The cache ID to be altered.
   *
   * @return string
   *   The cache ID, prepended with the TI_PREFS cookie value, if set.
   */
  protected function alterCid($cid) {
    $iPod = stripos($_SERVER['HTTP_USER_AGENT'],"iPod"); 
    $iPhone = stripos($_SERVER['HTTP_USER_AGENT'],"iPhone"); 
    $iPad = stripos($_SERVER['HTTP_USER_AGENT'],"iPad"); 
    if(stripos($_SERVER['HTTP_USER_AGENT'],"Android") && stripos($_SERVER['HTTP_USER_AGENT'],"mobile")){ 
        $Android = true; 
    }else if(stripos($_SERVER['HTTP_USER_AGENT'],"Android")){ 
        $Android = false; 
        $AndroidTablet = true; 
    }else{ 
        $Android = false; 
        $AndroidTablet = false; 
    } 
    if( $iPod || $iPhone || $Android) {
        $cid = 'TI_PREFS:' . 'phone' . '|' . $cid;
    } else { 
        $cid = 'TI_PREFS:' . 'default' . '|' . $cid;
    }    

    return $cid;

  }


  /**
   * Alter cid on get.
   */
  public function get($cid) {

    $cid = $this->alterCid($cid);
    return parent::get($cid);

  }


  /**
   * Alter cid on getMultiple.
   */
  public function getMultiple(&$cids) {

    foreach ($cids as $key => $cid)
      $cids[$key] = $this->alterCid($cid);

    return parent::get($cids);

  }


  /**
   * Alter cid on set.
   */
  public function set($cid, $data, $expire = CACHE_PERMANENT,
    array $headers = NULL) {

    $cid = $this->alterCid($cid);
    parent::set($cid, $data, $expire);

  }


  /**
   * Alter cid on clear.
   */
  public function clear($cid = NULL, $wildcard = FALSE) {

// Explicitly hardcode the two possible values
    parent::clear('TI_PREFS:phone|' . $cid, $wildcard);
    parent::clear('TI_PREFS:default|' . $cid, $wildcard);

// Just in case!
    parent::clear($cid, $wildcard);

  }

}
