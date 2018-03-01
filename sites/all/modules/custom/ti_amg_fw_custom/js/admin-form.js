/**
 * @file
 * Javascript for altering admin pages.
 */

(function ($) {
  Drupal.behaviors.adminForm = {
    attach: function (context, settings) {

      var parent_desc = "<div id='fw_parent_desc'>  On creating <strong>Child</strong> term do the following <ol><li>Remove &lt;root&gt;</li><li>Select an option from Parents select list</li><li>Click on Add button</li></div>";
      $('#taxonomy-form-term .form-type-hierarchical-select.form-item-parent').before(parent_desc);


    }
  }
})(jQuery);

