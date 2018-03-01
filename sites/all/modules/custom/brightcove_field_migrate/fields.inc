<?php

/**
 * @file
 * Support for processing entity fields
 */
class MigrateBrightcoveVideoFieldHandler extends MigrateFieldHandler {
  /**
   * Implements __construct().
   */
  public function __construct() {
    $this->registerTypes(array('brightcove_video'));
  }

  /**
     * Implements fields().
     * Declare Video Id and Player Id fields
     */
    public function fields($type, $instance, $migration = NULL) {
    $fields['video_id'] =  t('Subfield: The brightcove video id');
    $fields['player'] =  t('Subfield: The brightcove player id');
    return $fields;
  }
   /**
    * Implements prepare().
    */
  public function prepare($entity, array $field_info, array $instance, array $values) {

    if (isset($values['arguments'])) {
      $arguments = $values['arguments'];
      unset($values['arguments']);
    }
    else {
      $arguments = array();
    }
    $migration = Migration::currentMigration();
    $destination = $migration->getDestination();

    $language = $this->getFieldLanguage($entity, $field_info, $arguments);

    // Setup the standard Field API array for saving.
    $delta = 0;
    //foreach ($values as $value) {
      $item = array();
        print $arguments['video_id'];
        if (isset($arguments['video_id'])) {
        if (is_array($arguments['video_id'])) {
          $item['video_id'] = $arguments['video_id'][$delta];
        }
        else {
          $item['video_id'] = $arguments['video_id'];
        }
      }
      else {
        $item['video_id'] = 0;
      }
      if (is_array($language)) {
          $current_language = $language[$delta];
      }
      else {
        $current_language = $language;
      }
      $return[$current_language][] = $item;
      $delta++;
   // }
    return isset($return) ? $return : NULL;
  }

}
