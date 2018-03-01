// Enabling Advanced and Open graph options in meta tags
(function($) {
    Drupal.behaviors.omniture_header = {
        attach: function(context, settings) {
          var attached_behavior_element = '';
          if ($('.region-page-bottom').length) {
            attached_behavior_element = '.region-page-bottom';
          }
          if ($('.footer').length) {
            attached_behavior_element = '.footer';
          }
          $(attached_behavior_element, context).once('omniture_global_set', function() {

              var s_account = Drupal.settings.omniture.s_account;
              window.omniture_search_kw = "";
              window.omniture_channel = Drupal.settings.omniture.channel;
              window.omniture_sub_channel = Drupal.settings.omniture.prop5;
              window.omniture_prop_four = document.location.pathname;
              var titleNoBrand = document.title;           
              
              titleNoBrand = titleNoBrand.replace(/^\s*|\s*$/g, '');
              // To remove the |Food & Wine tag from the title - FWDRUPAL-602
              titleNoBrand = titleNoBrand.replace(/\| Food \& Wine/gi, '');
              // To remove the |Chefs tag from the title - FWDRUPAL-602
              titleNoBrand = titleNoBrand.replace(/\| Chefs/gi, '');            
              window.omniture_titleNoBrand = titleNoBrand;
              
          });
        }
    };
}(jQuery));
