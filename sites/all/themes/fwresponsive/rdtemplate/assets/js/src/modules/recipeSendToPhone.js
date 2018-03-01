'use strict';

var $ = require('jquery'),
    ko = require('knockout');

require('jquery-mask-plugin');

module.exports = function (el) {
  $(el).find('.phone-number').mask('(000) 000-0000', {placeholder: '(555) 555-5555'});

  function ViewModel() {
    var self = this;

    this.formSubmitted = ko.observable(false);
    this.isSubmitting = false;

    this.submitForm = function(form) {
      if (self.isSubmitting) return;

      var $form = $(form),
          $phoneNumber = $form.find('.phone-number'),
          cleanPhoneVal = $phoneNumber.cleanVal();
      
      // don't submit unless we have a valid 10 digit phone number
      if (cleanPhoneVal.length < 10) return;

      // set phone number value to clean version of number
      $phoneNumber.val(cleanPhoneVal);

      self.isSubmitting = true;
      
      $.ajax({
        url: form.action, 
        data: $form.serialize(),
        type: form.method,
        success: function (resp) {
          self.formSubmitted(true);
          self.isSubmitting = false;
        }
      });
    };
  }

  ko.applyBindings(new ViewModel(), el);
};