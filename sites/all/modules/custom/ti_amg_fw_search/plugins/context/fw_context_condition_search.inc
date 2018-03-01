<?php

/**
 * @file
 * Context condition for mobile page.
 */

/**
 * Foodandwine context condition search.
 */
class fw_context_condition_search extends context_condition {
  /**
   * Implements condition_values().
   */
  public function condition_values() {
    return array(
      'all' => t('In All Tab'),
      'recipe' => t('In Recipe Tab'),
      'article' => t('In Article Tab'),
    );
  }
  /**
   * Implements condition_form().
   */
  public function condition_form($context) {
    $form = parent::condition_form($context);
    $form['#type'] = 'radios';

    if (empty($form['#default_value'])) {
      $form['#default_value'] = 'all';
    }
    else {
      $form['#default_value'] = current($form['#default_value']);
    }
    return $form;
  }

  /**
   * Storing values in an array since that's what Context prefers.
   */
  public function condition_form_submit($values) {
    return array_filter(array($values => $values));
  }
  /**
   * Implements execute().
   */
  public function execute() {

    $type = '';
    if (isset($_GET['f'])) {
      foreach ($_GET['f'] as $key => $value) {
        if (substr($value, 0, 5) == 'type:') {
          $type = substr($value, 5);
        }
      }
    }

    foreach ($this->get_contexts() as $context) {
      $values = $this->fetch_from_context($context, 'values');
      if (arg(0) == 'search' and !arg(1)) {
        if ($type == 'recipe' && !empty($values['recipe'])) {
          $this->condition_met($context);
        }
        elseif ($type == 'article' && !empty($values['article'])) {
          $this->condition_met($context);
        }
        elseif (!$type && !empty($values['all'])) {
          $this->condition_met($context);
        }
      }
    }
  }

}
