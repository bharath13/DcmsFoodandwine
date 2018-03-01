<?php

/**
 * Expose Mobile Cookie Value as a Context condition.
 */

class ti_amg_fw_mobile_context_condition_is_mobile extends context_condition {

  function condition_values() {

    return array(
      'TRUE' => t('User is on a mobile device'),
      'FALSE' => t('User is not on a mobile device'),
    );

  }


  function condition_form($context) {

    $form = parent::condition_form($context);
    $form['#type'] = 'radios';

    if (empty($form['#default_value'])) {
      $form['#default_value'] = 'TRUE';
    } else {
      $form['#default_value'] = current($form['#default_value']);
    }

    return $form;

  }


  /**
   * Condition form submit handler.
   *
   * Storing values in an array since that's what Context prefers
   */
  function condition_form_submit($values) {
    return array_filter(array($values => $values));
  }


  function execute() {

    foreach ($this->get_contexts() as $context) {
      $values = $this->fetch_from_context($context, 'values');
      if (isset($_COOKIE['TI_PREFS']) && $_COOKIE['TI_PREFS'] == 'phone' && !empty($values['TRUE'])) {
// Mobile phone, and the condition is set for mobile
        $this->condition_met($context);
      }

      if (isset($_COOKIE['TI_PREFS']) && $_COOKIE['TI_PREFS'] != 'phone' && !empty($values['FALSE'])) {
// Not mobile phone, and the condition is set for not mobile
        $this->condition_met($context);
      }
    }

  }

}
